using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPointer : MonoBehaviour
{
    [SerializeField] private MenuLogic menu;
    [SerializeField] private Controller controller;
    [SerializeField] private LineRenderer lineRenderer;
    [SerializeField] private LayerMask layersToHit;
    [SerializeField] private GameObject circleBarToSpawn;
    [SerializeField] private GameObject teleportButtonGO;

    private float defaultLength = 1000.0f;
    private GameObject GOHit;
    private GameObject circleBar;
    private float validationCounter = 0f;
    private CircularProgressBar progressBar;
    private float timeToValidate = 1.5f;
    private Button button;
    private Toggle toggle;
    private bool isActive = true;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isActive)
        {
            lineRenderer.enabled = true;
            UpdateLength();
        }
        else
        {
            lineRenderer.enabled = false;
        }
    }

    private void UpdateLength()
    {
        lineRenderer.SetPosition(0, transform.position);
        lineRenderer.SetPosition(1, CalculateEnd());
    }

    private Vector3 CalculateEnd()
    {
        RaycastHit hit = CreateFowardRaycast();
        Vector3 endPosition = DefaultEnd(defaultLength);
        if (hit.collider)
        {
            endPosition = hit.point;
        }
        return endPosition;
    }

    private RaycastHit CreateFowardRaycast()
    {
        RaycastHit hit;
        Ray ray = new Ray(transform.position, transform.forward);
        if(Physics.Raycast(ray, out hit, defaultLength, layersToHit))
        {
            if (hit.transform.gameObject.GetComponent<Button>() != null || hit.transform.gameObject.GetComponent<Toggle>() != null || hit.transform.gameObject.name == "WalkingInPlace" || hit.transform.gameObject.name == "WIPTeleportationGO")
            {
                lineRenderer.GetComponent<Renderer>().material.SetColor("_Color", new Color(0, 1, 0, 0.8f));
                if(hit.transform.gameObject.name == "WalkingInPlace" || hit.transform.gameObject.name == "WIPTeleportationGO")
                {
                    if (GOHit == null)
                    {
                        GOHit = teleportButtonGO;
                        Vector3 pos = hit.point;
                        circleBar = Instantiate(circleBarToSpawn, gameObject.transform);
                        circleBar.transform.localPosition = new Vector3(circleBar.transform.localPosition.x, circleBar.transform.localPosition.y, circleBar.transform.localPosition.z + 2f);
                        circleBar.transform.eulerAngles = new Vector3(circleBar.transform.eulerAngles.x, 0f, circleBar.transform.eulerAngles.z);
                        GameObject child = circleBar.transform.GetChild(0).gameObject;
                        child.transform.localPosition = new Vector3(0f, 0f, 0f);
                        circleBar.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                        progressBar = GetComponentInChildren<CircularProgressBar>();
                        if (GOHit.GetComponent<Button>() != null)
                        {
                            button = GOHit.GetComponent<Button>();
                            button.Select();
                        }
                        else
                        {
                            toggle = GOHit.GetComponent<Toggle>();
                            toggle.Select();
                        }
                    }
                    else
                    {
                        if (validationCounter / timeToValidate < 1f)
                        {
                            validationCounter += Time.deltaTime;
                            progressBar.m_FillAmount = validationCounter / timeToValidate;
                        }
                        else
                        {
                            if (GOHit.GetComponent<Button>() != null)
                            {
                                button.onClick.Invoke();
                            }
                            else
                            {
                                if (toggle.gameObject.tag == "ToggleMirror")
                                {
                                    menu.ToggleMirrorAvatarButton();
                                }
                                else
                                {
                                    controller.toggleArmMotors();
                                }
                            }
                            validationCounter = 0f;
                            progressBar.m_FillAmount = validationCounter / timeToValidate;
                            GOHit = null;
                            Destroy(circleBar);
                            button = null;
                            toggle = null;
                        }       
                    }
                }
                else
                {
                    if (GOHit == null)
                    {
                        GOHit = hit.transform.gameObject;
                        Vector3 pos = hit.point;
                        circleBar = Instantiate(circleBarToSpawn, gameObject.transform);
                        circleBar.transform.localPosition = new Vector3(circleBar.transform.localPosition.x, circleBar.transform.localPosition.y, circleBar.transform.localPosition.z + 2f);
                        circleBar.transform.eulerAngles = new Vector3(circleBar.transform.eulerAngles.x, 0f, circleBar.transform.eulerAngles.z);
                        GameObject child = circleBar.transform.GetChild(0).gameObject;
                        child.transform.localPosition = new Vector3(0f, 0f, 0f);
                        circleBar.transform.localEulerAngles = new Vector3(0f, 0f, 0f);
                        progressBar = GetComponentInChildren<CircularProgressBar>();
                        if (hit.transform.gameObject.GetComponent<Button>() != null)
                        {
                            button = GOHit.GetComponent<Button>();
                            button.Select();
                        }
                        else
                        {
                            toggle = GOHit.GetComponent<Toggle>();
                            toggle.Select();
                        }
                    }
                    else
                    {
                        if (GOHit == hit.transform.gameObject)
                        {
                            if (validationCounter / timeToValidate < 1f)
                            {
                                validationCounter += Time.deltaTime;
                                progressBar.m_FillAmount = validationCounter / timeToValidate;
                            }
                            else
                            {
                                if (hit.transform.gameObject.GetComponent<Button>() != null)
                                {
                                    button.onClick.Invoke();
                                }
                                else
                                {
                                    if (toggle.gameObject.tag == "ToggleMirror")
                                    {
                                        menu.ToggleMirrorAvatarButton();
                                    }
                                    else
                                    {
                                        controller.toggleArmMotors();
                                    }
                                }
                                validationCounter = 0f;
                                progressBar.m_FillAmount = validationCounter / timeToValidate;
                                GOHit = null;
                                Destroy(circleBar);
                                button = null;
                                toggle = null;
                            }

                        }
                    }
                }
                
            }
            else
            {
                lineRenderer.GetComponent<Renderer>().material.SetColor("_Color", new Color(1, 1, 1, 0.3f));
                GOHit = null;
                Destroy(circleBar);
                validationCounter = 0f;
                button = null;
                toggle = null;
            }
        }
        else
        {
            lineRenderer.GetComponent<Renderer>().material.SetColor("_Color", new Color(1, 1, 1, 0.0f));
            GOHit = null;
            Destroy(circleBar);
            validationCounter = 0f;
            button = null;
            toggle = null;
        }
        return hit;
    }

    private Vector3 DefaultEnd(float length)
    {
        return transform.position + (transform.forward * length);
    }

    public void TogglePointer()
    {
        isActive = !isActive;
    }
}
