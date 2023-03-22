using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PublicDefinitions : MonoBehaviour
{
    /**
    * @brief Remote computer to mainboard message types enumeration.
    */
    public enum PcToMbMessageType
    {
        HEARTBEAT = 0,
        SET_DATE = 1,

        GET_VARS_LIST = 8,
        GET_VAR = 9,
        SET_VAR = 10,
        SET_VAR_LOG = 14,
        SET_STREAMING = 11,

        LOG_MESSAGE = 12,
        SYNC_LED = 13
    }

    /**
     * @brief Mainboard to remote computer message types enumeration.
     */
    public enum MbToPcMessageType
    {
        HEARTBEAT = 0,
        STATUS, // Joints positions, pitch, roll, current mode, error flags...
        DEBUG_TEXT,

        VARS_LIST, // 0x83
        VAR_VALUE,
        STREAMING
    }

    /**
     * @brief SyncVar variable types enumeration.
    */
    public enum VarType
    {
        BOOL = 0,
        UINT8,
        INT8,
        UINT16,
        INT16,
        UINT32,
        INT32,
        UINT64,
        INT64,
        FLOAT32,
        FLOAT64,
        TRIVIAL_COPY,
        STRING
    };

    /**
    * @brief SyncVar variable accesses enumeration.
    */
    public enum VarAccess
    {
        NONE = 0,
        READ,
        WRITE,
        READWRITE
    }

    // Peter default values
    public enum Modes
    {
        MODE_TRANSPARENT, // slight assistance but free movement
        MODE_UPRIGHT,     // all joints kept at zero
        MODE_WALK,
        MODE_STAIRS,
        MODE_LUNGES,
        MODE_STAND_UP,
        MODE_SIT_DOWN,
        MODE_STS,
        MODE__COUNT
    }
}