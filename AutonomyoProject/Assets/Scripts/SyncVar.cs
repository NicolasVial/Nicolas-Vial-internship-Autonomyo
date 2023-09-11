using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

using PcToMbMessageType = PublicDefinitions.PcToMbMessageType;
using MbToPcMessageType = PublicDefinitions.MbToPcMessageType;
using VarType = PublicDefinitions.VarType;
using VarAccess = PublicDefinitions.VarAccess;

/// <summary>
/// The following script has been done by Eugénie and is used as is in this project. 
/// This script represents the SyncVar which are used to communicate different values between the exoskeleton Autonomyo and the App.
/// </summary>

// Use a static class ?
public class SyncVar //: MonoBehaviour // Rajouter data, value, etc et les fonctions correspondantes // syncvar.h
{
    //private static int LOGFILES_N_DIGITS = 5; ///< Number of digits for the logs filename.
    //#define LOGFILES_PREFIX "log_" ///< Prefix for the logs filename.
    public static int SYNCVAR_NAME_COMM_LENGTH = 100; ///< Length of SyncVar names during remote listing.
    public static int SYNCVAR_UNIT_COMM_LENGTH = 20; ///< Length of SyncVar units during remote listing.
    public static int SYNCVAR_LIST_ITEM_SIZE = (SYNCVAR_NAME_COMM_LENGTH + SYNCVAR_UNIT_COMM_LENGTH + 1 + 1 + 4); ///< SyncVar description bytes size during remote listing.
    public static char SYNCVAR_NAME_SEPARATOR = '/'; ///< SyncVar prefix separators.
    // Trouver un moyen de ne pas avoir à le dédoubler

    private string sName; // field
    public string Name   // property
    {
        get { return sName; }
        set
        {
            if (value.Length > SYNCVAR_NAME_COMM_LENGTH - 1)
            {
                sName = value.Substring(0, SYNCVAR_NAME_COMM_LENGTH - 1); // instead of resize
            }
            else
                sName = value;
        }
    } // Utiliser ça plutôt ?

    /* //OR
    public string Name
    { get; set; } --> automatic property
    */

    private string unit;
    public string Unit
    {
        get { return unit; }
        set
        {
            if (value.Length > SYNCVAR_UNIT_COMM_LENGTH - 1)
                unit = value.Substring(0, SYNCVAR_UNIT_COMM_LENGTH - 1); // instead of resize
            else
                unit = value;
        }
    }

    private VarType type; // read only
    public VarType Type
    {
        get { return type; }
        set { type = value; }
    }

    private VarAccess access;
    public VarAccess Access
    {
        get { return access; }
        set { access = value; }
    }

    private bool logToFile;
    public bool LogToFile
    {
        get { return logToFile; }
        set { logToFile = value; }
    }

    private uint nBytes;
    public uint NBytes
    {
        get { return nBytes; }
        set { nBytes = value; }
    }

    private bool boolVar;
    public bool BoolVar
    {
        get { return boolVar; }
        set { boolVar = value; }
    }

    private sbyte sByteVar; // Changer par juste byte je pense
    public sbyte SByteVar
    {
        get { return sByteVar; }
        set { sByteVar = value; }
    }

    private int intVar;
    public int IntVar
    {
        get { return intVar; }
        set { intVar = value; }
    }

    private float floatVar;
    public float FloatVar
    {
        get { return floatVar; }
        set { floatVar = value; }
    }

    private ulong uLongVar;
    public ulong ULongVar
    {
        get { return uLongVar; }
        set { uLongVar = value; }
    }

    private string stringVar;
    public string StringVar
    {
        get { return stringVar; }
        set { stringVar = value; }
    }

    public SyncVar makeBoolSyncVar(string name, string unit, bool var, VarAccess access, bool logToFile)
    {
        SyncVar sv = new SyncVar();
        sv.Name = name;
        sv.Unit = unit;
        sv.Type = VarType.BOOL;
        sv.Access = access;
        sv.LogToFile = logToFile;
        sv.BoolVar = var;
        sv.NBytes = 1;
        return sv;
    }

    public SyncVar makeIntSyncVar(string name, string unit, int var, VarAccess access, bool logToFile)
    {
        SyncVar sv = new SyncVar();
        sv.Name = name;
        sv.Unit = unit;
        sv.Type = VarType.INT32;
        sv.Access = access;
        sv.LogToFile = logToFile;
        sv.IntVar = var;
        sv.NBytes = 4;
        return sv;
    }

    public SyncVar makeFloatSyncVar(string name, string unit, float var, VarAccess access, bool logToFile)
    {
        SyncVar sv = new SyncVar();
        sv.Name = name;
        sv.Unit = unit;
        sv.Type = VarType.FLOAT32;
        sv.Access = access;
        sv.LogToFile = logToFile;
        sv.FloatVar = var;
        sv.NBytes = 4;
        return sv;
    }

    public SyncVar makeStringSyncVar(string name, string unit, string var, VarAccess access, bool logToFile)
    {
        SyncVar sv = new SyncVar();
        sv.Name = name;
        sv.Unit = unit;
        sv.Type = VarType.STRING;
        sv.Access = access;
        sv.LogToFile = logToFile;
        sv.StringVar = var;
        sv.NBytes = (uint)var.Length * 2;
        return sv;
    }

    // Je ne pense pas avoir besoin de créer les syncvar avec les getter / setter
    // Est-ce que je rajoute setData, getData et getValueString ?
    // Je ne pense pas, je vais plutôt travailler proprement avec ma classe
}