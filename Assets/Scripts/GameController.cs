using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : Singleton<GameController>
{
    public bool gameRunning = false;
    public Button playResumeButton, quitButton;
    public CanvasGroup pauseCanvasGroup;

    protected GameController() { }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Cancel")) { Debug.Log("Escaped"); UpdateGameState(false); }
    }

    public void UpdateGameState(bool value)
    {
        gameRunning = value;
        if (gameRunning)
        {
            pauseCanvasGroup.alpha = 0;
            pauseCanvasGroup.blocksRaycasts = false;
            pauseCanvasGroup.interactable = false;
        }
        else
        {
            pauseCanvasGroup.alpha = 1;
            pauseCanvasGroup.blocksRaycasts = true;
            pauseCanvasGroup.interactable = true;
        }
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
