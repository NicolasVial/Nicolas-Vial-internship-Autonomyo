using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorPuzzleLogic : MonoBehaviour
{
    [SerializeField]
    private StoryGameLogic storyGameLogic;

    [SerializeField] private MenuLogic menu;

    [SerializeField]
    private int puzzleNb;

    [SerializeField] private List<DoorObjectiv> objectivs1 = new List<DoorObjectiv>();
    [SerializeField] private List<DoorObjectiv> objectivs2 = new List<DoorObjectiv>();
    [SerializeField] private List<DoorObjectiv> objectivs3 = new List<DoorObjectiv>();

    [SerializeField] private GameObject objectivs1GO;
    [SerializeField] private GameObject objectivs2GO;
    [SerializeField] private GameObject objectivs3GO;

    [SerializeField]
    private GameObject door;

    [SerializeField]
    private GameObjectController sphere;

    [SerializeField]
    private Vector3 startAngle;

    [SerializeField]
    private Vector3 endAngle;

    [SerializeField]
    private int rotationSpeed;

    [SerializeField]
    private int nbOfLevels;

    [SerializeField]
    private Transform initSpherePos;

    private bool done = false;
    private float startTime;
    private float distanceBetweenRot;
    private bool finished = false;
    private bool doneFinish = false;
    private int levelNb = 1;
    private List<DoorObjectiv> currentObjectivs;
    private float startGameTime = 0f;

    public bool test = false;
    public string resultText = "";

    // Start is called before the first frame update
    void Start()
    {
        currentObjectivs = objectivs1;
    }

    // Update is called once per frame
    void Update()
    {
        /*
        if (test)
        {
            if (!done)
            {
                done = true;
                startTime = Time.time;
                distanceBetweenRot = Vector3.Distance(startAngle, endAngle);
                sphere._move = false;
                finished = true;
            }
            else
            {
                float distanceTimeRot = (Time.time - startTime) * rotationSpeed;
                float relativeTimeRot = distanceTimeRot / distanceBetweenRot;
                door.transform.localRotation = Quaternion.Lerp(Quaternion.Euler(startAngle), Quaternion.Euler(endAngle), relativeTimeRot);
            }
        }
        */
        bool checkAllObjDone = true;

        foreach(DoorObjectiv dobj in currentObjectivs)
        {
            if (!dobj.succeed){
                checkAllObjDone = false;
            }
        }

        if (checkAllObjDone && levelNb == nbOfLevels)
        {
            if (!done)
            {
                float finalScore = Time.time - startGameTime;
                resultText = finalScore.ToString("0.0") + " Sec";
                currentObjectivs[0].resetObjCount();
                done = true;
                startTime = Time.time;
                distanceBetweenRot = Vector3.Distance(startAngle, endAngle);
                sphere._move = false;
                finished = true;
            }
            else
            {
                float distanceTimeRot = (Time.time - startTime) * rotationSpeed;
                float relativeTimeRot = distanceTimeRot / distanceBetweenRot;
                door.transform.localRotation = Quaternion.Lerp(Quaternion.Euler(startAngle), Quaternion.Euler(endAngle), relativeTimeRot);
            }
        }

        if(checkAllObjDone && levelNb < nbOfLevels)
        {
            switch (levelNb)
            {
                case 1:
                    currentObjectivs = objectivs2;
                    objectivs1GO.SetActive(false);
                    objectivs2GO.SetActive(true);
                    break;
                case 2:
                    currentObjectivs = objectivs3;
                    objectivs2GO.SetActive(false);
                    objectivs3GO.SetActive(true);
                    break;
                default:
                    break;
            }
            levelNb += 1;
        }

        if (finished && !doneFinish)
        {
            switch (puzzleNb)
            {
                case 1:
                    menu.StoryGameBalanceGamePressFinish();
                    break;
                case 2:
                    menu.StoryGameBalanceGamePressFinish();
                    break;
                case 3:
                    menu.Invoke("PressBackToMenuButton", 4f);
                    Invoke("resetGame", 4f);
                    break;
                default:
                    break;
            }
            doneFinish = true;
        }

    }

    private void resetGame()
    {
        levelNb = 1;
        foreach (DoorObjectiv dobj in objectivs1)
        {
            dobj.resetObj();
        }
        foreach (DoorObjectiv dobj in objectivs2)
        {
            dobj.resetObj();
        }
        foreach (DoorObjectiv dobj in objectivs3)
        {
            dobj.resetObj();
        }

        objectivs1GO.SetActive(true);
        objectivs2GO.SetActive(false);
        objectivs3GO.SetActive(false);
        sphere._move = false;
        sphere.gameObject.transform.position = initSpherePos.position;
        door.transform.localEulerAngles = startAngle;
        currentObjectivs = objectivs1;
        done = false;
        finished = false;
        doneFinish = false;
    }

    public void startGame()
    {
        startGameTime = Time.time;
    }
}
