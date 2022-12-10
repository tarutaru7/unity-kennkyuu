using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class WomanController : MonoBehaviour
{
    public Transform target;
    public Vector3 offset;
    private Rigidbody womanRigidbody;

    void Start()
    {
        womanRigidbody = GetComponent<Rigidbody>();


    }
    void Update()
    {
        offset = new Vector3(0, 0, -2);
        this.transform.position = target.position + offset;
        if (Input.GetKey("right"))
        {
            womanRigidbody.transform.Rotate(0, 3, 0);
        }
        else if (Input.GetKey("left"))
        {
            womanRigidbody.transform.Rotate(0, -3, 0);
        }
    }
}