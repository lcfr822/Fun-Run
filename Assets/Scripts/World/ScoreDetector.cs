using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreDetector : MonoBehaviour
{
    public int pointValue;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.layer == 10)
        {
            GameController.Instance.UpdateScore(pointValue);
        }
    }
}
