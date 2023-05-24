using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Timers;
using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;
using QuickVR;

using PcToMbMessageType = PublicDefinitions.PcToMbMessageType;
using MbToPcMessageType = PublicDefinitions.MbToPcMessageType;
using VarType = PublicDefinitions.VarType;
using VarAccess = PublicDefinitions.VarAccess;
using Modes = PublicDefinitions.Modes;

public class ClientSide : MonoBehaviour
{
	// Constant variables
	public const int SYNCVAR_NAME_COMM_LENGTH = 100; ///< Length of SyncVar names during remote listing.
	public const int SYNCVAR_UNIT_COMM_LENGTH = 20; ///< Length of SyncVar units during remote listing.
	public const int SYNCVAR_LIST_ITEM_SIZE = (SYNCVAR_NAME_COMM_LENGTH + SYNCVAR_UNIT_COMM_LENGTH + 1 + 1 + 4); ///< SyncVar description bytes size during remote listing.
	public const char SYNCVAR_NAME_SEPARATOR = '/'; ///< SyncVar prefix separators.
	private const int TCP_MAX_TIME_WITHOUT_RX = 10000;

	// Static variables
	public static ClientSide instance; // global
									   // Call if with the references instead of creating an instance in other scripts ?
									   // should do a DontDestroyOnLoad ?
	public static int dataBufferSize = 16384; //1024; // 4096
											  // For AndroidTV // For 182 variables : 16384
											  // For 76 variables : 8192
											  // For 52 variables : 4096
											  // For 17 variables : 1024
											  //private static int LOGFILES_N_DIGITS = 5; ///< Number of digits for the logs filename.
											  //#define LOGFILES_PREFIX "log_" ///< Prefix for the logs filename.

	// Editor-assigned variables
	public string serverAddr = "192.168.200.102";
	public int port = 9255;
	public int myId = 0;
	public TCP tcp; // TCP client
	public TextMeshProUGUI connectText;
	[SerializeField] GameObject connectionTab;
	[SerializeField] Button connectButton;
	[SerializeField] GameObject menu;
	[SerializeField] MenuLogic menuLogic;
	[SerializeField] TextMeshProUGUI batteryPairedText;
	// Unable to connect popup
	[SerializeField] GameObject connectionPopupPanel;
	[SerializeField] Button connectionSelectedButton;
	[HideInInspector] public int connectionCounter = 0;

	// Public editor-hidden variables
	[HideInInspector] public bool isConnected = false;
	[HideInInspector] public bool isConnecting = false;
	[HideInInspector] public bool updateText = false;
	[HideInInspector] public bool started = false;
	[HideInInspector] public bool svlWasCreated = false;
	[HideInInspector] public bool svlIsFull = false;
	[HideInInspector] public bool iHaveValue = false;
	[HideInInspector] public bool isStreaming = false;
	[HideInInspector] public bool receivedHeartbeat = false;
	public List<SyncVar> syncVarsList; // List of the exoskeleton's variables
	public List<SyncVar> streamedVars; // List of the variables streamed with the exoskeleton

	// Other variables
	private List<byte> byteList; ///< Received recombined bytes (actual data bytes) list.
	private ushort nVars; ///< Number of variables from the exoskeleton
	private MbToPcMessageType rxCurrentMessageType; ///< Current type of message being received.
	private int rxBytesCount; ///< Number of bytes received for the current message.
	private int firstHalfByte; ///< First half of the byte being recomposed from two received bytes.
	private bool tryAgain = true;
	private int streamPacketSize; ///< Size of a streaming packet [B].
	private byte streamingRequest = 0; // uint8_t ///< Identifier to make sure the received streaming packet has been requested with the same variables.

	private System.Timers.Timer heartBeatTimer; // Timer to trigger periodically the sending of a heartbeat packet.
	private System.Timers.Timer connectionTimeoutTimer; // Timer to determine when nothing was received from the server for too long.
	private System.Timers.Timer sendTimer;
	private DateTime lastSentHeartbeatTime;
	private DateTime lastSentStreamPacketTime;
	private Thread clientReceiveThread;
	private Thread clientDecodeThread;


	private void Start()
	{
		started = true;
		tcp = new TCP();
	}

	private void Update()
	{
		if (InputManager.GetButtonDown("ToggleMenu"))
		{
			menu.SetActive(!menu.activeSelf);
		}
		if (updateText)
		{
			updateText = false;
			if (isConnecting)
			{
				setToConnecting();
			}
			else
			{
				if (isConnected) // socket isConnected
				{
					Debug.Log("isConnected is true");
					if (svlIsFull)
					{
						Debug.Log("svlIsFull is true");
						TryStreamedVars();
						setToConnected();
						StartCoroutine("SetupExoskeleton");
					}
					else
					{
						setToConnecting();
					}
				}
				else
				{
					setToDisconnected();
				}
			}
		}
	}

	private void Awake()
	{
		if (instance == null)
		{
			instance = this;
		}
		else if (instance != this)
		{
			Debug.Log("Instance already exists, destroying object!");
			Destroy(this);
		}
	}

	// Called by ConnectButton in MainLine in MainPanel in HomePanel in Canvas
	public void ConnectFromButton()
	{
		tryAgain = true;
		ConnectToServer();
	}

	private void ConnectToServer()
	{
		if (connectionCounter == 0)
			tcp = new TCP();
		Debug.Log("Connecting To Server " + serverAddr);
		tcp.Connect();
	}

	// Called by TryAgainButton in Popup in Explanation in Canvas
	public void TryConnectingAgain()
	{
		connectionPopupPanel.SetActive(false);
		connectionTab.SetActive(true);
		connectButton.Select();
	}

	public void TryStreamedVars()
	{
		if (tcp.socket.Connected)
		{
			tcp.SetStreamedVars(100); // previously 30 // Faire un thread ?
		}
		else
		{
			Debug.LogError("Socket is closed");
		}
	}

	private void SendingThread()
	{
		Debug.Log("SendingThread");
		while (svlWasCreated)
		{
			SyncVar sv = instance.syncVarsList[0];
			short svIndex = -1;

			svIndex = GetSyncVarIndex("sensors/battery_monitor/battery_level");
			if (svIndex != -1)
			{
				sv = syncVarsList[svIndex];
				tcp.GetVarValue(svIndex);
				//Thread.Sleep(200); // 10 doesn't work
				//new WaitForSeconds(2.0f);
			}

			for (int i = 1; i <= 8; i++)
			{
				svIndex = GetSyncVarIndex("controller/load_cells/L" + i);
				if (svIndex != -1)
				{
					sv = syncVarsList[svIndex];
					tcp.GetVarValue(svIndex);
				}
				svIndex = GetSyncVarIndex("controller/load_cells/R" + i);
				if (svIndex != -1)
				{
					sv = syncVarsList[svIndex];
					tcp.GetVarValue(svIndex);
				}
			}
		}
	}

	public void setToConnecting()
	{
		instance.connectText.GetComponent<TextMeshProUGUI>().color = Color.black;
		instance.connectText.GetComponent<TextMeshProUGUI>().text = "Connecting...";
	}

	public void setToConnected()
	{
		instance.connectText.GetComponent<TextMeshProUGUI>().color = Color.green;
		instance.connectText.GetComponent<TextMeshProUGUI>().text = "Connected";
	}

	public void setToDisconnected()
	{
		instance.connectText.GetComponent<TextMeshProUGUI>().color = Color.red;
		instance.connectText.GetComponent<TextMeshProUGUI>().text = "Disconnected";
		// TODO: actually disconnect the socket or network stream.
		// Send a disconnexion message to the server ?
		isConnected = false;
		isConnecting = false; // If it was forced by the button
		tryAgain = false;
		svlWasCreated = false;
		svlIsFull = false;
		receivedHeartbeat = false;
		isStreaming = false;
		if (heartBeatTimer.Enabled)
		{
			Debug.LogWarning("Heartbeat timer disabled");
			heartBeatTimer.Enabled = false;
			heartBeatTimer.Close();
		}
		if (tcp.socket.Connected)
		{
			if (heartBeatTimer.Enabled)
			{
				Debug.LogWarning("Heartbeat timer disabled");
				heartBeatTimer.Enabled = false;
				heartBeatTimer.Close();
			}
			tcp.socket.Close();
			//tcp.socket.EndConnect(_result);
			tcp.socket.Dispose();
			//tcp.StopStream();
		}
		connectionCounter = 0;
	}

	private IEnumerator SetupExoskeleton()
	{
		yield return new WaitForSeconds(3f);
		menuLogic.isConnected = true;
		//setupCanvas.SetActive(true);
		float battery_level = 0.7939928F; // For testing purposes
		if (isStreaming)
			battery_level = GetSyncVar("sensors/battery_monitor/battery_level").FloatVar;
		float battery_percentage = (float)(Math.Round((double)battery_level * 100, 0));
		batteryPairedText.text = battery_percentage.ToString() + "%";
		if (isStreaming)
		{
			SetIntSyncVar("controller/mode", (int)Modes.MODE_TRANSPARENT);
			SetStringSyncVar("controller/saving_folder", "withApp"); // Check why it was necessary here, shouldn't be
		}
	}

	public void FinishInit()
	{
		int nStreamedVars = streamedVars.Count();
		Debug.Log("FinishInit nStreamedVars = " + nStreamedVars);
		// Calibrate the QuadLoadCells
		SetBoolSyncVar("controller/set_load_cells_zero_left", true);
		SetBoolSyncVar("controller/set_load_cells_zero_right", true);
	}

	public void LoadControllerParams(string name1, string name2, string name3)
	{
		SetStringSyncVar("controller/saving_folder", "withApp");
		SetStringSyncVar("controller/load_C_from_name", name1);
		SetStringSyncVar("controller/load_D_from_name", name2);
		SetStringSyncVar("controller/load_J_from_name", name3);
	}

	//////////////////////////////////////////////////////////////////////////////
	// SyncVarsManager

	public SyncVar GetSyncVar(string name)
	{
		if (svlIsFull)
		{
			short svIndex = GetSyncVarIndex(name);
			if (svIndex != -1)
			{
				Debug.Log("GetSyncVar index = " + svIndex);
				SyncVar sv = instance.syncVarsList[svIndex];
				Debug.Log("GetSyncVar the syncvar's name is " + sv.Name);
				Debug.Log("GetSyncVar the syncvar's value is " + sv.FloatVar);
				return sv;
			}
		}
		return null;
	}

	private short GetSyncVarIndex(string sv_name)
	{
		if (svlIsFull)
		{
			bool isExist = false;
			short index = (short)syncVarsList.FindIndex(x => x.Name.Equals(sv_name));
			if (index != -1)
				isExist = true;
			if (isExist)
				return index;
			else
			{
				Debug.LogWarning("Element not found in the given list");
				return -1;
			}
		}
		return -1;
	}

	public bool ConvertFloatToBool(float value)
	{
		bool b;
		if (value == 0)
			b = false;
		else
			b = true;
		return b;
	}

	public void SetBoolSyncVar(string name, bool b)
	{
		if (svlIsFull)
		{
			short svIndex = GetSyncVarIndex(name);
			if (svIndex != -1)
			{
				SyncVar sv = syncVarsList[svIndex];
				tcp.SendPacket(svIndex, sizeof(bool), b, 0);
				sv.BoolVar = b;
			}
		}
	}

	public void SetIntSyncVar(string name, int value)
	{
		if (svlIsFull)
		{
			short svIndex = GetSyncVarIndex(name);
			if (svIndex != -1)
			{
				SyncVar sv = syncVarsList[svIndex];
				tcp.SendPacket(svIndex, sizeof(int), false, value);
				sv.IntVar = value;
			}
		}
	}

	public void SetFloatSyncVar(string name, float value)
	{
		if (svlIsFull)
		{
			short svIndex = GetSyncVarIndex(name);
			if (svIndex != -1)
			{
				SyncVar sv = syncVarsList[svIndex];
				tcp.SendFloatPacket(svIndex, sizeof(float), value);
				sv.FloatVar = value;
			}
		}
	}

	public void SetStringSyncVar(string name, string str)
	{
		if (svlIsFull)
		{
			short svIndex = GetSyncVarIndex(name);
			if (svIndex != -1)
			{
				SyncVar sv = syncVarsList[svIndex];
				Debug.Log("Number of bytes of the string = " + str.Length * sizeof(char));
				tcp.SendStringPacket(svIndex, (uint)str.Length, str);
				sv.StringVar = str;
			}
		}
	}

	//////////////////////////////////////////////////////////////////////////////


	public class TCP
	{
		public TcpClient socket; // Network socket to communicate with the remote server.
		private NetworkStream stream;
		private byte[] receiveBuffer;
		private byte[] sendBuffer;

		public void StopStream()
		{
			stream.Close();
		}

		public void Connect()
		{
			if (instance.tryAgain)
			{
				instance.isConnecting = true;
				UpdateText();
			}

			socket = new TcpClient
			{
				ReceiveBufferSize = dataBufferSize,
				SendBufferSize = dataBufferSize
			};
			receiveBuffer = new byte[dataBufferSize];
			sendBuffer = new byte[dataBufferSize];

			System.IAsyncResult result = socket.BeginConnect(instance.serverAddr, instance.port, ConnectCallback, socket);
			bool connectionSuccess = result.AsyncWaitHandle.WaitOne(System.TimeSpan.FromSeconds(1), false);
			Debug.Log("connectionSuccess = " + connectionSuccess);
			Debug.Log("socket ? " + socket.Connected);
			if (!socket.Connected)
			{
				if (instance.isConnecting && !instance.isConnected)
				{
					Debug.LogError(string.Format("Client unable to connect. Trying again."));
					instance.Invoke("ConnectToServer", 3);
					if (instance.connectionCounter > 3)
					{
						instance.connectionTab.SetActive(false);
						instance.connectionPopupPanel.SetActive(true);
						instance.connectionSelectedButton.Select();
						instance.setToDisconnected();
					}
					instance.connectionCounter++;
					Debug.Log("connectionCounter = " + instance.connectionCounter);
				}
			}
		}

		public void GetVarValue(short varIndex)
		{
			// Get the variable's data. // Rajouter une sécurité read/write dans la fonction
			sendBuffer = new byte[dataBufferSize];
			sendBuffer[0] = 0x89;
			byte[] secondHalf = BitConverter.GetBytes(varIndex);
			int count = Buffer.ByteLength(secondHalf);
			//Debug.Log("VAR_VALUE Byte[] length = " + count);
			int j = 1;
			for (int k = 0; k < count; k++)
			{
				//Debug.Log("VAR_VALUE bytes[] " + secondHalf[k]);
				sendBuffer[j] = Convert.ToByte(secondHalf[k] >> 4); // MSB
				sendBuffer[j + 1] = Convert.ToByte(secondHalf[k] & 0xf); // LSB
				j = j + 2;
			}

			stream = socket.GetStream(); // Rajouter une sécurité au cas où le socket ne serait pas ouvert.
			stream.BeginWrite(sendBuffer, 0, dataBufferSize, SendCallback, null);
			Debug.Log("The data of the variable at index " + varIndex + " was asked to the server");
		}

		////////////////////////////////////////////////////////////////////////////
		// Revoir toutes ces fonctions SendPacket
		// Faire une fonction qui regroupe tout dans le futur

		public void SendPacket(short varIndex, uint varSize, bool b, int value)
		{
			// Get the variable's data.
			int bufferSize = (int)((varSize + 1) * 2 + 1); // The first + 1 is the index, the second is the prefix
			sendBuffer = new byte[bufferSize];
			sendBuffer[0] = 0x8A; // Peut-être que 0x8E ne fonctionne QUE si la fonction est log true !
			sendBuffer[1] = Convert.ToByte(Convert.ToByte(varIndex) >> 4); // Il ne faudra pas oublier de set the local variable as well
			sendBuffer[2] = Convert.ToByte(Convert.ToByte(varIndex) & 0xf); // Comment je peux savoir de mon côté si elle est logTrue ou pas ?
			if (varSize == 1) // Floating number
			{
				sendBuffer[3] = Convert.ToByte(Convert.ToByte(b) >> 4); // Comment vérifier l'accès de la variable avant/pendant la communication ?
				sendBuffer[4] = Convert.ToByte(Convert.ToByte(b) & 0xf);
			}
			else if (varSize == 4) // Floating number
			{
				byte[] secondHalf = BitConverter.GetBytes(value);
				//if (BitConverter.IsLittleEndian)
				//Array.Reverse(secondHalf);
				int count = Buffer.ByteLength(secondHalf); // Ca marche slmt sans le reverse // Verifier plus tard
				int j = 3;
				for (int k = 0; k < count; k++)
				{
					sendBuffer[j] = Convert.ToByte(secondHalf[k] >> 4); // MSB
					sendBuffer[j + 1] = Convert.ToByte(secondHalf[k] & 0xf); // LSB
					j = j + 2;
				}
			}
			for (int k = 0; k < bufferSize; k++)
			{
				Debug.Log("SendPacket bytes[] " + sendBuffer[k]);
			}

			stream = socket.GetStream();
			stream.BeginWrite(sendBuffer, 0, bufferSize, SendCallback, null);
			Debug.Log("The data of the variable at index " + varIndex + " was set to the server");
		}

		public void SendFloatPacket(short varIndex, uint varSize, float value) // Change the name of the function // Franchement mettre varSize à int non ? Regarder pour SyncVar
		{
			// Get the variable's data.
			int bufferSize = (int)((varSize + 1) * 2 + 1); // The first + 1 is the index, the second is the prefix
			sendBuffer = new byte[bufferSize];
			sendBuffer[0] = 0x8A; // Peut-être que 0x8E ne fonctionne QUE si la fonction est log true !
			sendBuffer[1] = Convert.ToByte(Convert.ToByte(varIndex) >> 4); // Il ne faudra pas oublier de set the local variable as well
			sendBuffer[2] = Convert.ToByte(Convert.ToByte(varIndex) & 0xf); // Comment je peux savoir de mon côté si elle est logTrue ou pas ?
			byte[] secondHalf = BitConverter.GetBytes(value);
			//if (BitConverter.IsLittleEndian)
			//Array.Reverse(secondHalf);
			int count = Buffer.ByteLength(secondHalf); // Ca marche slmt sans le reverse // Verifier plus tard
			int j = 3;
			for (int k = 0; k < count; k++)
			{
				sendBuffer[j] = Convert.ToByte(secondHalf[k] >> 4); // MSB
				sendBuffer[j + 1] = Convert.ToByte(secondHalf[k] & 0xf); // LSB
				j = j + 2;
			}
			for (int k = 0; k < bufferSize; k++)
			{
				Debug.Log("SendFloatPacket bytes[] " + sendBuffer[k]);
			}

			stream = socket.GetStream();
			stream.BeginWrite(sendBuffer, 0, bufferSize, SendCallback, null);
			Debug.Log("The data of the variable at index " + varIndex + " was set to the server");
		}

		public void SendStringPacket(short varIndex, uint varSize, string str)
		{
			// Get the variable's data.
			int bufferSize = (int)((varSize + 3) * 2 + 1); // The first + 1 is the index, the second is the prefix // Now it's + 3 for the index, the count and the "count"
			sendBuffer = new byte[bufferSize];
			sendBuffer[0] = 0x8A; // Peut-être que 0x8E ne fonctionne QUE si la fonction est log true !
			sendBuffer[1] = Convert.ToByte(Convert.ToByte(varIndex) >> 4); // Il ne faudra pas oublier de set the local variable as well
			sendBuffer[2] = Convert.ToByte(Convert.ToByte(varIndex) & 0xf); // Comment je peux savoir de mon côté si elle est logTrue ou pas ?

			byte[] secondHalf = Encoding.ASCII.GetBytes(str);
			//if (BitConverter.IsLittleEndian)
			//Array.Reverse(secondHalf);
			//int count = Buffer.ByteLength(secondHalf); // Ca marche slmt sans le reverse // Verifier plus tard
			int count = Encoding.ASCII.GetByteCount(str); // Pas besoin de count, peut être varSize direct
			Debug.Log("bufferSize = " + bufferSize);
			Debug.Log("count = " + count);
			int test = 7 / 263; // Ca equivaut à 0 en fait ... // C'est pour les textes plus longs
			Debug.Log("test = " + test);
			sendBuffer[3] = Convert.ToByte(Convert.ToByte(count) >> 4);
			sendBuffer[4] = Convert.ToByte(Convert.ToByte(count) & 0xf);
			sendBuffer[5] = Convert.ToByte(Convert.ToByte(test) >> 4);
			sendBuffer[6] = Convert.ToByte(Convert.ToByte(test) & 0xf);
			int j = 7;
			for (int k = 0; k < count; k++)
			{
				sendBuffer[j] = Convert.ToByte(secondHalf[k] >> 4); // MSB
				sendBuffer[j + 1] = Convert.ToByte(secondHalf[k] & 0xf); // LSB
				j = j + 2;
			}
			for (int k = 0; k < bufferSize; k++)
			{
				Debug.Log("SendStringPacket bytes[] " + sendBuffer[k]);
			}

			stream = socket.GetStream();
			stream.BeginWrite(sendBuffer, 0, bufferSize, SendCallback, null);
			Debug.Log("The data of the variable at index " + varIndex + " was set to the server");
		}

		////////////////////////////////////////////////////////////////////////////


		private void OnHeartBeatTimeout(object source, ElapsedEventArgs e)
		{
			Debug.Log("Sending a heartbeat");
			sendBuffer = new byte[dataBufferSize];
			sendBuffer[0] = 0x80;

			stream = socket.GetStream();

			stream.BeginWrite(sendBuffer, 0, dataBufferSize, SendCallback, null);
		}

		private void ConnectCallback(IAsyncResult _result)
		{
			socket.EndConnect(_result);
			Socket s = socket.Client;
			Debug.Log("Socket connected to " + s.RemoteEndPoint.ToString());

			instance.heartBeatTimer = new System.Timers.Timer();
			instance.heartBeatTimer.Elapsed += new ElapsedEventHandler(OnHeartBeatTimeout);
			instance.heartBeatTimer.Interval = TCP_MAX_TIME_WITHOUT_RX / 4;
			instance.heartBeatTimer.Enabled = true;

			if (!socket.Connected)
			{
				Debug.Log("Aborted ? Socket was not connected");
				instance.isConnected = false;
				instance.isConnecting = false;
				return;
			}

			// TODO: Rewrite this part of the function and check connection issues with BBB 8
			// Maybe wait for one HeartBeat before Sending this info.
			// Otherwise if the server is not ready, it could get lost.

			// Set the remote time to the current time.
			DateTime localDate = DateTime.Now;
			string dateStr = localDate.ToString("yyyy-MM-dd hh:mm:ss");
			Debug.Log("Date : " + dateStr);

			// Send the date string to the remote computer.
			byte[] secondHalf = Encoding.ASCII.GetBytes(dateStr); // renommer
			int count = Encoding.ASCII.GetByteCount(dateStr);
			sendBuffer[0] = 0x81;
			int j = 1;
			for (int i = 0; i < count; i++)
			{
				sendBuffer[j] = Convert.ToByte(secondHalf[i] >> 4); // MSB
				sendBuffer[j + 1] = Convert.ToByte(secondHalf[i] & 0xf); // LSB
				j = j + 2;
			}

			stream = socket.GetStream();
			stream.BeginWrite(sendBuffer, 0, dataBufferSize, SendCallback, null);
			Debug.Log("The date was sent to the server");

			// Get the variables list.
			sendBuffer = new byte[dataBufferSize];
			sendBuffer[0] = 0x88;

			stream = socket.GetStream();
			stream.BeginWrite(sendBuffer, 0, dataBufferSize, SendCallback, null);
			Debug.Log("The variables' list was asked to the server");

			try
			{
				instance.clientReceiveThread = new Thread(new ThreadStart(ListenForData));
				instance.clientReceiveThread.IsBackground = true;
				instance.clientReceiveThread.Start();

				DateTime timeoutTime = DateTime.Now;
				while (!instance.receivedHeartbeat && !instance.svlIsFull)
				{
					TimeSpan dt = DateTime.Now - timeoutTime;
					if (dt.Milliseconds == 0)
					{
						Debug.LogWarning("dt = " + dt.Seconds * 1000 + " TCP_MAX_TIME_WITHOUT_RX/2 = " + TCP_MAX_TIME_WITHOUT_RX / 2);
						if (TCP_MAX_TIME_WITHOUT_RX / 2 < dt.Seconds * 1000)
						{
							timeoutTime = DateTime.Now;
							instance.tcp.Connect();
						}
					}
				}
			}
			catch
			{
				Debug.LogError("The receiving thread caused an error.");
			}
		}

		private void UpdateText()
		{
			instance.updateText = true;
		}

		private void ListenForData()
		{
			Debug.Log("LISTENING THREAD");
			stream = socket.GetStream();
			stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
		}

		private void ReceiveCallback(IAsyncResult _result)
		{
			try
			{
				int _byteLength = stream.EndRead(_result);
				if (_byteLength <= 0)
				{
					// TODO: disconnect
					instance.isConnected = false;
					instance.isConnecting = false;
					Debug.Log("_byteLength = " + _byteLength);
					Debug.Log("No message received for some time. Server disconnected."); // Add the elapsed time ?
					UpdateText();
					return;
				}
				byte[] _data = new byte[_byteLength];
				Array.Copy(receiveBuffer, _data, _byteLength);
				Debug.Log("RECEIVING: Byte length = " + _byteLength + ";  _data[0]: " + _data[0] + " (decimal)");
				DecodingData(_data, _byteLength);
				stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
			}
			catch
			{
				// TODO: disconnect
			}
		}

		// The AsyncCallback delegate that is executed when BeginWrite(Byte[], Int32, Int32, AsyncCallback, Object) completes.
		private void SendCallback(IAsyncResult _result)
		{
			try
			{
				Debug.Log("SENDING");
				stream.EndWrite(_result);
			}
			catch
			{
				// TODO: disconnect
			}
		}

		private void DecodingData(byte[] _data, int _byteLength)
		{
			for (int i = 0; i < Buffer.ByteLength(_data); i++)
			{
				if (Convert.ToBoolean(_data[i] & (1 << 7))) // C'est le début d'un message parce que le premier bit est à 1
				{
					instance.rxCurrentMessageType = (MbToPcMessageType)(_data[i] & ~(1 << 7)); // Remove the MSB
					instance.rxBytesCount = 0;
					instance.byteList = new List<byte>();
					instance.nVars = 0;
				}
				else
					instance.rxBytesCount++;

				if (instance.rxBytesCount % 2 == 1) // First half of the data byte has been received.
					instance.firstHalfByte = _data[i]; // Store it until the second half arrives.
				else // Second half of the data byte has been received.
				{
					if (instance.rxBytesCount > 0)
					{
						byte tmp = Convert.ToByte((instance.firstHalfByte << 4) + (_data[i] & 0xf));
						instance.byteList.Add(tmp);
					}
					switch (instance.rxCurrentMessageType)
					{
						case MbToPcMessageType.HEARTBEAT:
							Debug.Log("Received heartbeat");
							instance.receivedHeartbeat = true;
							if (instance.lastSentHeartbeatTime != default(DateTime)) // Mettre un compteur pour lancer une déconnexion ?
							{
								TimeSpan duration = DateTime.Now - instance.lastSentHeartbeatTime;
								// Est-ce que BBB n'envoie pas de heartbeat quand elle envoie des données ?
							}
							instance.lastSentHeartbeatTime = DateTime.Now;
							break;
						case MbToPcMessageType.STATUS:
							Debug.Log("Received Status");
							break;
						case MbToPcMessageType.DEBUG_TEXT:
							if (i == 0)
								Debug.Log("Received Debug Text");
							if (i == _byteLength - 1)
							{
								Debug.Log("DEBUG_TEXT en decimal = " + String.Join(" ", instance.byteList));

								List<char> charList = new List<char>();
								for (int k = 0; k < instance.byteList.Count(); k++)
								{
									if (instance.byteList[k] != 0)
									{
										//Debug.LogWarning("converted byte = " + Convert.ToChar(instance.byteList[k]));
										charList.Add(Convert.ToChar(instance.byteList[k]));
									}
									else
									{
										//Debug.Log("DEBUG_TEXT converted byte = NUL");
									}
								}
								Debug.Log("DEBUG_TEXT en ASCII = " + String.Join("", charList));
							}
							break;
						case MbToPcMessageType.VARS_LIST:
							if (i == 0)
								Debug.Log("Received the vars_list. Now to decode.");
							if (instance.byteList.Count() > 0 /*&& instance.byteList[instance.byteList.Count()-1] == '\0'*/)
							{
								if (instance.byteList.Count() == 2)
								{
									instance.nVars = BitConverter.ToUInt16(instance.byteList.ToArray(), 0); // 2 bytes
									Debug.Log("VARS_LIST nVars = " + instance.nVars);
									instance.syncVarsList = new List<SyncVar>();
									instance.svlWasCreated = true;
									instance.streamedVars = new List<SyncVar>();
								}

								if (instance.byteList.Count() == (2 + SYNCVAR_LIST_ITEM_SIZE * instance.nVars)) //2 + 126 * 87 = 10964 //5482 //2741
								{
									instance.byteList.RemoveRange(0, Math.Min(2, instance.byteList.Count));
									for (int j = 0; j < instance.nVars; j++) // On loop à travers toutes les variables
									{
										ushort typeIndex, accessIndex; //uint8_t //là j'ai mis un 16 parce que pas le choix // Je pourrai mettre un byte
										uint length;
										SyncVar sv = new SyncVar();

										List<char> charList = new List<char>();
										string testName = "";
										for (int k = 0; k < SYNCVAR_NAME_COMM_LENGTH; k++) // On loop de la taille de name
										{
											if (instance.byteList[k] != 0)
											{
												//Debug.Log("VARS_LIST converted byte = " + Convert.ToChar(instance.byteList[k]));
												charList.Add(Convert.ToChar(instance.byteList[k]));
												testName += Convert.ToString(instance.byteList[k]);
											}
											else
											{
												//Debug.Log("VARS_LIST converted byte = NUL");
											}
										}
										Debug.Log("VARS_LIST name en ASCII = " + String.Join("", charList));
										sv.Name = String.Join("", charList);
										instance.byteList.RemoveRange(0, Math.Min(SYNCVAR_NAME_COMM_LENGTH, instance.byteList.Count));
										Debug.Log("VARS_LIST at index = " + j);
										//Debug.Log("VARS_LIST data = ");
										//Debug.Log("VARS_LIST is up to date = ");

										charList = new List<char>();
										for (int k = 0; k < SYNCVAR_UNIT_COMM_LENGTH; k++) // On loop de la taille de unit
										{
											if (instance.byteList[k] != 0)
											{
												//Debug.Log("VARS_LIST converted byte = " + Convert.ToChar(instance.byteList[k]));
												charList.Add(Convert.ToChar(instance.byteList[k]));
											}
											else
											{
												//Debug.Log("VARS_LIST converted byte = NUL");
											}
										}
										Debug.Log("VARS_LIST unit en ASCII = " + String.Join("", charList));
										sv.Unit = String.Join("", charList);
										instance.byteList.RemoveRange(0, Math.Min(SYNCVAR_UNIT_COMM_LENGTH, instance.byteList.Count));
										//Debug.Log("VARS_LIST value = "); // Difference between data and value ? // To get afterwards

										typeIndex = instance.byteList[0]; // 1 byte
										Debug.Log("VARS_LIST typeIndex = " + typeIndex + " => " + (VarType)typeIndex);
										sv.Type = (VarType)typeIndex;
										instance.byteList.RemoveRange(0, Math.Min(1, instance.byteList.Count)); // Faire RemoveAt

										accessIndex = instance.byteList[0]; // 1 byte
										Debug.Log("VARS_LIST accessIndex = " + accessIndex + " => " + (VarAccess)accessIndex);
										sv.Access = (VarAccess)accessIndex;
										instance.byteList.RemoveRange(0, Math.Min(1, instance.byteList.Count));

										length = BitConverter.ToUInt32(instance.byteList.ToArray(), 0); // 4 bytes
										Debug.Log("VARS_LIST length = " + length);
										sv.NBytes = length;
										instance.byteList.RemoveRange(0, Math.Min(4, instance.byteList.Count));

										instance.syncVarsList.Add(sv);
										AddStreamedVars(sv);
									}
									Debug.Log("La liste des variables est disponible !");
									instance.svlIsFull = true;
									instance.isConnected = true; // Remove ?
									instance.isConnecting = false; // idem
									UpdateText();
									instance.FinishInit();
								}
							}
							break;

						case MbToPcMessageType.VAR_VALUE:
							if (i == 0)
								Debug.Log("Received a Var Value");
							if (instance.byteList.Count() > 1) // sizeof(quint8)
							{
								short varIndex = instance.byteList[0];
								Debug.Log("VAR_VALUE varIndex = " + varIndex);
								SyncVar sv = instance.syncVarsList[varIndex];
								if (varIndex < instance.syncVarsList.Count)
								{
									Debug.Log("VAR_VALUE count = " + instance.byteList.Count());
									Debug.Log("VAR_VALUE limit = " + ((_byteLength - 1) / 2));
									if (instance.byteList.Count() == (_byteLength - 1) / 2)
									{
										instance.byteList.RemoveRange(0, Math.Min(1, instance.byteList.Count)); // Faire RemoveAt
										Debug.Log("VAR_VALUE data en decimal = " + String.Join(" ", instance.byteList));
										SetVariable(sv);
									}
								}
							}
							break;

						case MbToPcMessageType.STREAMING:
							if (i == 0)
								Debug.Log("Received a Stream");
							if (instance.byteList.Count() == instance.streamPacketSize && instance.streamPacketSize > 0) // rxDataBytesBuffer.size() == streamPacketSize && streamPacketSize > 0
							{
								// Read the timestamp.
								long timestamp_us = BitConverter.ToInt64(instance.byteList.ToArray(), 0); // long au lieu de ulong pour DateTime
								instance.byteList.RemoveRange(0, Math.Min(8, instance.byteList.Count));
								timestamp_us = (long)(timestamp_us / 1000); // Je reçois une variable de 16 digits
																			//Debug.Log("STREAMING cropped timestamp_us = " + timestamp_us);
								DateTime date;
								date = DateTimeOffset.FromUnixTimeMilliseconds(timestamp_us).UtcDateTime;
								////Debug.LogWarning("STREAMING date = " + date);

								// Read the streaming request, and ignore the packet if
								// it does not match the expected one.
								byte packetRequest = instance.byteList[0];
								instance.byteList.RemoveRange(0, Math.Min(1, instance.byteList.Count));

								if (packetRequest != instance.streamingRequest)
								{
									Debug.LogWarning("The streaming request doesn't match the packet request ...");
									break;
								}

								double timestamp = ((double)timestamp_us) / 1000000.0; // [s]. // intérêt de cette ligne ?
																					   // Read all the SyncVar values.
								for (int ind = 0; ind < instance.streamedVars.Count(); ind++)
								{
									SyncVar tempSv = instance.streamedVars[ind];
									int varIndex = instance.GetSyncVarIndex(tempSv.Name);
									if (varIndex == -1)
										Debug.Log("ClientSide: There was an issue with the received stream. Index = -1");
									SyncVar sv = instance.syncVarsList[varIndex];
									////Debug.LogWarning("STREAMING sv.Name = " + sv.Name);
									SetVariable(sv);
									instance.byteList.RemoveRange(0, Math.Min((int)sv.NBytes, instance.byteList.Count)); // de uint
								}
								instance.isStreaming = true;
								Debug.Log("STREAMING The value of the streamed SyncVars has been updated.");
							}
							break;
						default: // No data bytes for the other message types.
							break;
					} // end switch
				} // end else (second half received)
			} // end for (int i = 0; i < Buffer.ByteLength(_data); i++)
		} // end DecodingData

		public void SetVariable(SyncVar sv)
		{
			switch (sv.Type)
			{ // Faire attention à rajouter s'il y en a d'autres
				case (VarType.BOOL):
					sv.BoolVar = BitConverter.ToBoolean(instance.byteList.ToArray(), 0);
					break;
				case (VarType.INT8):
					sv.SByteVar = (sbyte)instance.byteList[0]; // should be 8 but doesn't exist here. Don't make mistakes when setting the value.
															   //sv.SByteVar = Convert.ToSByte(String.Join(" ", instance.byteList, 0, sv.NBytes));
					break; // sinon changer par un sbyte, ça fait 8 bits // Si ca ne marche pas, revenir à int. // Ou plutôt un byte
				case (VarType.INT32):
					sv.IntVar = BitConverter.ToInt32(instance.byteList.ToArray(), 0);
					break;
				case (VarType.UINT64):
					sv.ULongVar = BitConverter.ToUInt64(instance.byteList.ToArray(), 0);
					break;
				case (VarType.FLOAT32):
					sv.FloatVar = BitConverter.ToSingle(instance.byteList.ToArray(), 0); // 4 bytes
					break;
				case (VarType.STRING):
					List<char> charList = new List<char>();
					for (int k = 0; k < sv.NBytes; k++) // Looping on the variable's size
					{
						if (instance.byteList[k] != 0)
						{
							charList.Add(Convert.ToChar(instance.byteList[k]));
						}
					}
					sv.StringVar = String.Join("", charList);
					break;
			}
		}

		// Variables that are constantly streamed
		public void AddStreamedVars(SyncVar sv)
		{
			// Rajouter une sécurité pour empêcher les gens débiles comme moi de demander des variables qui sont en write ?
			if (sv.Name == "sensors/battery_monitor/battery_level")
			{
				instance.streamedVars.Add(sv);
			}
			for (int nb = 0; nb < 8; nb++)
			{
				if (sv.Name == "controller/load_cells/L" + (nb + 1))
				{
					instance.streamedVars.Add(sv);
				}
				else if (sv.Name == "controller/load_cells/R" + (nb + 1))
				{
					instance.streamedVars.Add(sv);
				}
			}
			if (sv.Name == "controller/joints/LeftAbd/angle"
					|| sv.Name == "controller/joints/RightAbd/angle"
					|| sv.Name == "controller/joints/LeftHip/angle"
					|| sv.Name == "controller/joints/RightHip/angle"
					|| sv.Name == "controller/joints/LeftKnee/angle"
					|| sv.Name == "controller/joints/RightKnee/angle")
				instance.streamedVars.Add(sv);
			if (sv.Name == "controller/phase")
				instance.streamedVars.Add(sv);
		}

		public void SetStreamedVars(int period)
		{
			// Update the checkboxes list if the change was not coming from them.
			//if(!changedFromGuiList)
			//    syncVarManager->setStreamedVars(streamedVars);

			// Compute the size of a stream packet.
			int nStreamedVars = instance.streamedVars.Count();
			instance.streamPacketSize = sizeof(ulong) + sizeof(byte); // 8 + 1; // Timestamp and request number + sizeof(streamingRequest)

			for (int i = 0; i < instance.streamedVars.Count(); i++)
			{
				SyncVar sv = instance.streamedVars[i];
				instance.streamPacketSize += (int)sv.NBytes;
			}

			List<byte> tmpByteList = new List<byte>();
			byte[] byteArray = BitConverter.GetBytes(nStreamedVars);
			for (int i = 0; i < byteArray.Length; i++)
				tmpByteList.Add(byteArray[i]);
			byteArray = BitConverter.GetBytes(period);
			for (int i = 0; i < byteArray.Length; i++)
				tmpByteList.Add(byteArray[i]);

			instance.streamingRequest++;
			tmpByteList.Add(instance.streamingRequest);

			for (int ind = 0; ind < instance.streamedVars.Count(); ind++)
			{
				SyncVar sv = instance.streamedVars[ind];
				uint varIndex = (uint)instance.GetSyncVarIndex(sv.Name);
				byteArray = BitConverter.GetBytes(varIndex);
				for (int i = 0; i < byteArray.Length; i++)
					tmpByteList.Add(byteArray[i]);
			}

			int bufferSize = (int)(tmpByteList.Count() * 2 + 1); // The + 1 is the index
			sendBuffer = new byte[bufferSize];
			sendBuffer[0] = 0x8B; //SET_STREAMING
			int j = 1;
			for (int k = 0; k < tmpByteList.Count(); k++)
			{
				sendBuffer[j] = Convert.ToByte(tmpByteList[k] >> 4); // MSB
				sendBuffer[j + 1] = Convert.ToByte(tmpByteList[k] & 0xf); // LSB
				j = j + 2;
			}
			/*for (int k = 0; k < bufferSize; k++)
			{
				Debug.Log("SetStreamedVars bytes[] " + sendBuffer[k]);
			}*/
			stream = socket.GetStream();
			stream.BeginWrite(sendBuffer, 0, bufferSize, SendCallback, null);
		}
	} // end TCP class
} // end ClientSide class