using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollingObjectController : MonoBehaviour
{
    [SerializeField]
    private bool autoDestruct = false;
    [SerializeField]
    private float offset = 0.0f;
    [SerializeField]
    private float speed = 1.0f;
    [SerializeField]
    private float deletePoint = 0.0f;
    [SerializeField]
    private ObstacleController.ObstacleType obstacleType;

    // Start is called before the first frame update
    void Start()
    {
        offset = GetComponent<BoxCollider2D>().bounds.extents.x;
    }

    // Update is called once per frame
    void Update()
    {
        if (GameController.Instance.gameRunning)
        {
            transform.position = Vector2.Lerp(transform.position, (Vector2)transform.position - Vector2.right, speed * Time.deltaTime);
        }

        if (autoDestruct && transform.position.x < deletePoint)
        {
            switch (obstacleType)
            {
                case ObstacleController.ObstacleType.Low:
                    ObstacleController.Instance.lowCount--;
                    break;
                case ObstacleController.ObstacleType.Medium:
                    ObstacleController.Instance.midCount--;
                    break;
                case ObstacleController.ObstacleType.High:
                    ObstacleController.Instance.highCount--;
                    break;
            }
            Destroy(gameObject);
        }
    }
}
