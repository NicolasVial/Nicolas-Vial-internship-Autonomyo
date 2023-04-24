using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateSkinnedMeshRenderers : MonoBehaviour
{
    private bool done = false;

    // Update is called once per frame
    void Update()
    {
        if (!done)
        {
            SkinnedMeshRenderer[] components = Resources.FindObjectsOfTypeAll<SkinnedMeshRenderer>();
            foreach (SkinnedMeshRenderer smr in components)
            {
                smr.updateWhenOffscreen = true;
            }
            done = true;
        }
    }
}
