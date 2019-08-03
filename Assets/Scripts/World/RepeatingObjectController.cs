using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatingObjectController : MonoBehaviour
{
    private BoxCollider2D groundCollider;
    private float groundHorizontalLength = 24.5f;

    private void Awake()
    {
        groundCollider = GetComponent<BoxCollider2D>();
        //groundHorizontalLength = groundCollider.size.x;
    }

    void Update()
    {
        if (transform.position.x < -groundHorizontalLength) { RepositionBackground(); }
    }

    /// <summary>
    /// Calculate the offset and store it in a Vector2. 
    /// Add it to the position of a given repeating object.
    /// </summary>
    private void RepositionBackground()
    {
        Vector2 groundOffset = new Vector2(groundHorizontalLength * 2f, 0);
        transform.position = (Vector2)transform.position + groundOffset;
    }
}
