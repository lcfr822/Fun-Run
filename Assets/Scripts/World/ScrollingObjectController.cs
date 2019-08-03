using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(BoxCollider2D))]
public class ScrollingObjectController : MonoBehaviour
{
    [SerializeField]
    private float offset = 0.0f;
    [SerializeField]
    private float speed = 1.0f;

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
    }
}
