using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : Singleton<GameController>
{
    public bool gameRunning = false;
    public Button playResumeButton, quitButton;
    public CanvasGroup pauseCanvasGroup;
    public Text scoreText;

    private int score;

    protected GameController() { }

    // Start is called before the first frame update
    void Start()
    {
        UpdateGameState(false);
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
            GameObject.Find("JumpImageButton").GetComponent<ImageButton>().Interactive = true;
        }
        else
        {
            pauseCanvasGroup.alpha = 1;
            pauseCanvasGroup.blocksRaycasts = true;
            pauseCanvasGroup.interactable = true;
            GameObject.Find("JumpImageButton").GetComponent<ImageButton>().Interactive = false;
        }
    }

    public void UpdateScore(int value)
    {
        score += value;
        scoreText.text = "SCORE: " + score;
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
