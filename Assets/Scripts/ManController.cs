using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class ManController : MonoBehaviour
{
    // Start is called before the first frame update
   
    public Transform target;
    public Transform target2;
    private Rigidbody manRigidbody;
  

    void Start()
    {
        manRigidbody = GetComponent<Rigidbody>();
        
       
    }

    // Update is called once per frame
    void Update()
    {
        Transform Walk  = this.transform;
        Vector3 pos = Walk.position;
        int a = 1;
        if(pos.x >= -18.8f)
        {
            pos.x -= 0.3f;
            
        }
        if(pos.x <= -18.8f)
        {
            if(pos.z >= -18.6f)
            {
                pos.z -= 0.3f;
            }  
        }
        if(pos.z <= -18.6f)
        {
            if(pos.x >= -50.3f)
            {
                pos.x -= 0.3f;
            }
        }
        if(pos.x <= -50.3f)
        {
            if(pos.z >= -47.7f)
            {
                pos.z -= 0.3f;
            }
        }
        Walk.position = pos;

        if (Input.GetKey("right"))
        {
            manRigidbody.transform.Rotate(0, 3, 0);
        }
        else if (Input.GetKey("left"))
        {
            manRigidbody.transform.Rotate(0, -3, 0);
        }
    }



}