using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleController : Singleton<ObstacleController>
{
    public float lowHeight, midHeight, highHeight;
    public GameObject[] lowObstacles, midObstacles, highObstacles;

    private float xOffset = 4.096f;
    public int lowCount, midCount, highCount = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChanceBasedSpawn(Vector2 spawnPoint, Transform parent)
    {
        float rand = Random.value;
        float xOffsetActual = (Random.value > 0.5f) ? xOffset : -xOffset;
        GameObject spawnedObstacle = null;

        if(lowCount < 3 && rand < 0.45f)
        {
            spawnedObstacle = Instantiate(lowObstacles[0], new Vector3(spawnPoint.x + xOffset, lowHeight, 0.0f), Quaternion.identity);
            spawnedObstacle.transform.parent = parent;
            lowCount++;
            return;
        }
        if(midCount < 2 && rand < 0.8f && rand > 0.44f)
        {
            spawnedObstacle = Instantiate(midObstacles[0], new Vector3(spawnPoint.x + xOffset, midHeight, 0.0f), Quaternion.identity);
            spawnedObstacle.transform.parent = parent;
            midCount++;
            return;
        }
        if(highCount < 1 && rand <= 1.0f && rand > 0.79f)
        {
            spawnedObstacle = Instantiate(highObstacles[0], new Vector3(spawnPoint.x + xOffset, highHeight, 0.0f), Quaternion.identity);
            spawnedObstacle.transform.parent = parent;
            highCount++;
        }
    }
}
