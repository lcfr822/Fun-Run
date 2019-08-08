using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleController : Singleton<ObstacleController>
{
    public float lowHeight, midHeight, highHeight;
    public GameObject[] lowObstacles, midObstacles, highObstacles;

    private bool canSpawn = true;
    private float xOffset = 4.096f;
    public int lowCount, midCount, highCount = 0;

    public enum ObstacleType { Low, Medium, High }

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpawnProtection());
    }

    public void ChanceBasedSpawn(Vector2 spawnPoint)
    {
        float rand = Random.value;
        float xOffsetActual = (Random.value > 0.5f) ? xOffset / 2 : -xOffset / 2;

        if (lowCount < 3 && rand < 0.45f)
        {
            Instantiate(lowObstacles[0], new Vector3(spawnPoint.x + xOffsetActual, lowHeight, 0.0f), Quaternion.identity);
            lowCount++;
            StartCoroutine(SpawnProtection());
            return;
        }
        else if (midCount < 2 && rand < 0.8f && rand > 0.45f)
        {
            Instantiate(midObstacles[0], new Vector3(spawnPoint.x, midHeight, 0.0f), Quaternion.identity);
            midCount++;
            StartCoroutine(SpawnProtection());
            return;
        }
        else if (highCount < 1 && rand <= 1.0f && rand > 0.8f)
        {
            Instantiate(highObstacles[0], new Vector3(spawnPoint.x + xOffsetActual, highHeight, 0.0f), Quaternion.identity);
            highCount++;
            StartCoroutine(SpawnProtection());
        }
    }

    public IEnumerator SpawnProtection()
    {
        yield return new WaitForSeconds(Random.Range(2.0f, 5.0f));
        ChanceBasedSpawn(new Vector2(24.0f, 0.0f));
    }
}
