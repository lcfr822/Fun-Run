using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleFlip : MonoBehaviour
{
    public Sprite rhsSprite, lhsSprite;

    // Start is called before the first frame update
    void Start()
    {
        rhsSprite = GetComponent<SpriteRenderer>().sprite;
    }

    // Update is called once per frame
    void Update()
    {
        if(transform.parent.position.x < PlayerController.Instance.gameObject.transform.position.x && GetComponent<SpriteRenderer>().sprite != lhsSprite)
        {
            transform.localScale = new Vector3(-transform.localScale.x, transform.localScale.y, transform.localScale.z);
            GetComponent<SpriteRenderer>().sprite = lhsSprite;
            GetComponent<SpriteRenderer>().flipX = true;
        }
    }
}
