using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CircularProgressBar : MonoBehaviour {
	[SerializeField] private float modifiedRot;
	[SerializeField] private bool isPointer;
	[Header("Colors")]
	[SerializeField] private Color m_MainColor = Color.white;
	[SerializeField] private Color m_FillColor = Color.green;
	
	[Header("General")]
	[SerializeField] private int m_NumberOfSegments = 1;
	[SerializeField] private Vector3 initialPos;
	[Range(0, 360)] [SerializeField] private float m_StartAngle = 0;
	[Range(0, 360)] [SerializeField] private float m_EndAngle = 360;
	[SerializeField] private float m_SizeOfNotch = 10;
	[Range(0, 1f)] [SerializeField] public float m_FillAmount = 0.0f;

	private Image m_Image;
	private List<Image> m_ProgressToFill = new List<Image> ();
	private float m_SizeOfSegment;

	private void Awake() {
		// Get images in Children
		m_Image = GetComponentInChildren<Image>();
		m_Image.color = m_MainColor;
		m_Image.gameObject.SetActive(false);

		// Calculate notches
		float startNormalAngle = NormalizeAngle(m_StartAngle);
		float endNormalAngle = NormalizeAngle(360 - m_EndAngle);
		float notchesNormalAngle = (m_NumberOfSegments - 1) * NormalizeAngle(m_SizeOfNotch);
		float allSegmentsAngleArea = 1 - startNormalAngle - endNormalAngle - notchesNormalAngle;
		
		// Count size of segments
		m_SizeOfSegment = allSegmentsAngleArea / m_NumberOfSegments;
		for (int i = 0; i < m_NumberOfSegments; i++) {
			GameObject currentSegment = Instantiate(m_Image.gameObject, transform.position, Quaternion.identity, transform);
			currentSegment.SetActive(true);

			Image segmentImage = currentSegment.GetComponent<Image>();
			segmentImage.fillAmount = m_SizeOfSegment;

			Image segmentFillImage = segmentImage.transform.GetChild (0).GetComponent<Image> ();
			segmentFillImage.color = m_FillColor;
			m_ProgressToFill.Add (segmentFillImage);

			float zRot = m_StartAngle + i * ConvertCircleFragmentToAngle(m_SizeOfSegment) + i * m_SizeOfNotch;
            if (!isPointer){
				segmentImage.transform.rotation = Quaternion.Euler(-90, modifiedRot, -zRot);
				segmentImage.transform.localPosition = new Vector3(segmentImage.transform.localPosition.x, segmentImage.transform.localPosition.y + 300f, segmentImage.transform.localPosition.z);
				segmentImage.transform.localPosition = initialPos;
            }
            else
            {
				segmentImage.transform.localRotation = Quaternion.Euler(0, 0, 0);
				segmentImage.transform.localPosition = initialPos;
			}
			
		}

	}

	private void Update() {
		for (int i = 0; i < m_NumberOfSegments; i++) {
			m_ProgressToFill [i].fillAmount = (m_FillAmount * ((m_EndAngle-m_StartAngle)/360)) - m_SizeOfSegment * i;
		}
	}

	private float NormalizeAngle(float angle) {
		return Mathf.Clamp01(angle / 360f);
	}

	private float ConvertCircleFragmentToAngle(float fragment) {
		return 360 * fragment;
	}
}