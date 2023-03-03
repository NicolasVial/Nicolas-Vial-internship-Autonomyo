#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`2<System.Single,System.Single>
struct Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132;
// System.Action`2<System.UInt64,System.Boolean>
struct Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71;
// System.Action`2<System.UInt64,OVRSpatialAnchor/OperationResult>
struct Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9;
// System.Action`4<System.UInt64,System.Boolean,System.Guid,OVRPlugin/SpaceStorageLocation>
struct Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC;
// System.Action`4<System.UInt64,System.Boolean,OVRSpace,System.Guid>
struct Action_4_t540B344FD589096100128D9A1B39946413ED9AAE;
// System.Action`4<System.UInt64,OVRSpace,System.Boolean,System.Guid>
struct Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A;
// System.Action`6<System.UInt64,System.Boolean,OVRSpace,System.Guid,OVRPlugin/SpaceComponentType,System.Boolean>
struct Action_6_tD8B17612932122F2ABF5C8545327C8F527403625;
// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,QuickVR.IKBone>
struct Dictionary_2_tCE4C6157FDFA692AFE07C6DF2E2DD0D9BB9613CA;
// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Single>
struct Dictionary_2_t82FCE6D30D233A38042079CBB5A40103E1524E4D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,QuickVR.QuickOVRHandBonePhysics>
struct Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA;
// System.Collections.Generic.Dictionary`2<QuickVR.QuickHumanBodyBones,QuickVR.QuickVRNode>
struct Dictionary_2_t8B301E8F2E49706E25586A91C4B2111B9C528714;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.Dictionary`2<System.String,QuickVR.InputManager/VirtualButtonState>
struct Dictionary_2_t6D0C3F781211CC260549C8F0509857B19A43CED8;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
struct IEnumerable_1_tED602875C5D5C7BECAD2C641945DF5416536FA7B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IList`1<OVRBone>
struct IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC;
// System.Collections.Generic.IList`1<OVRBoneCapsule>
struct IList_1_tFFC33E12DD64329607D75CE292E627E8EE4B5870;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,QuickVR.QuickOVRHandBonePhysics>
struct KeyCollection_t4E5BF7334F91B984324B76EA2E8100F9D2167989;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<QuickVR.InputMap>>
struct List_1_tB818B020AD5D9F147389D95702EA33E741BD9704;
// System.Collections.Generic.List`1<QuickVR.AxisMapping>
struct List_1_t527AB95AEC4AC6F88D5947E95FF0405F97CDDDC1;
// System.Collections.Generic.List`1<QuickVR.BaseInputManager>
struct List_1_tA811CD45C999BCA0F1FFD65DEA4913B4C6F169FF;
// System.Collections.Generic.List`1<QuickVR.ButtonMapping>
struct List_1_t185D7732C427D19DB8200C94F2F1C9EA7EEB8387;
// System.Collections.Generic.List`1<UnityEngine.HumanBodyBones>
struct List_1_tB8F81399B2A2A6F4A6B18828EF32B158302BD6CF;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<OVRBone>
struct List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71;
// System.Collections.Generic.List`1<OVRBoneCapsule>
struct List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<QuickVR.QuickHumanBodyBones>
struct List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<QuickVR.InputManagerOVRHands/ButtonCodes>
struct List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C;
// System.Collections.Generic.List`1<QuickVR.QuickUnityVR/ControlType>
struct List_1_t1E6A543737C7643D4E4B7BD12842C2BBFC4C45A3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,QuickVR.QuickOVRHandBonePhysics>
struct ValueCollection_tC536C3F8705DC036213B1FEA5990885C8D682694;
// System.WeakReference`1<UnityEngine.Camera>
struct WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,QuickVR.QuickOVRHandBonePhysics>[]
struct EntryU5BU5D_t299080A45BFF3A840106D86F87AA98037397C343;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// QuickVR.QuickHumanBodyBones[]
struct QuickHumanBodyBonesU5BU5D_t9C98C8A689655C0BAA23FE59E6DB7ABA2C8B38EC;
// QuickVR.QuickHumanFingers[]
struct QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D;
// QuickVR.QuickVRNode[]
struct QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// QuickVR.InputManagerOVRHands/ButtonCodes[]
struct ButtonCodesU5BU5D_t5EFA7A29EA8ABCF5F3346B2CC626B7BD7A6EB509;
// OVRPlugin/Bone[]
struct BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784;
// OVRPlugin/BoneCapsule[]
struct BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44;
// OVRPlugin/Quatf[]
struct QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF;
// OVRPlugin/TrackingConfidence[]
struct TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37;
// OVRSkeleton/BoneId[]
struct BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// QuickVR.BaseInputManager
struct BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// QuickVR.InputManager
struct InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5;
// QuickVR.InputManagerOVRHands
struct InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// OVRBone
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A;
// OVRBoundary
struct OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE;
// OVRDisplay
struct OVRDisplay_t1518043CC531CD088400F80558DF7A849ECA2D27;
// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509;
// OVRManager
struct OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4;
// OVRMesh
struct OVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C;
// OVRMeshRenderer
struct OVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76;
// OVRMixedRealityCaptureSettings
struct OVRMixedRealityCaptureSettings_tF6078D6B59F16A0EE3DEE4144FCED347444B9198;
// OVRProfile
struct OVRProfile_tCFDDDA5EE82F0ED94671EB741B8954603D98AFC0;
// OVRRuntimeSettings
struct OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1;
// OVRSkeleton
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374;
// OVRTracker
struct OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// QuickVR.PerformanceFPS
struct PerformanceFPS_tFDBB71BEDE36BD7202F189C79C24D64970BC2ACE;
// UnityEngine.Animations.PositionConstraint
struct PositionConstraint_t574BE070FD49E61B0DC8B4CA53486634FD30377B;
// QuickVR.QuickCopyPoseBase
struct QuickCopyPoseBase_t269B0D75F10E4ABAADF00A6401D9C6ACB02B1E46;
// QuickVR.QuickHandGestureSettings
struct QuickHandGestureSettings_t823C76AD5BEC79CDB374F18C3FCA90626AE138F2;
// QuickVR.QuickOVRHand
struct QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208;
// QuickVR.QuickOVRHandBonePhysics
struct QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526;
// QuickVR.QuickOVRHandsInitializer
struct QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42;
// QuickVR.QuickOVRInitializer
struct QuickOVRInitializer_t0FAD954F60CB6F306EAA0D5DF223AA7E22D354F0;
// QuickVR.QuickTrackedObject
struct QuickTrackedObject_t3848756E39E5AA7326462B44D3C5F7C957D23D30;
// QuickVR.QuickUnityVR
struct QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A;
// QuickVR.QuickVRCameraController
struct QuickVRCameraController_t333174E6D06338041E26DA265475910423729ED4;
// QuickVR.QuickVRInteractionManager
struct QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0;
// QuickVR.QuickVRManager
struct QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A;
// QuickVR.QuickVRNode
struct QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904;
// QuickVR.QuickVRPlayArea
struct QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// OVRManager/InstantiateMrcCameraDelegate
struct InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8;
// OVRManager/PassthroughCapabilities
struct PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F;
// OVRMesh/IOVRMeshDataProvider
struct IOVRMeshDataProvider_tD1AF1F3A55F282EAC2DF7F3243DFE74B2E129146;
// OVRMeshRenderer/IOVRMeshRendererDataProvider
struct IOVRMeshRendererDataProvider_t96BC4E2FB6F71F5C57661CC6E45D44A647375CAC;
// OVRSkeleton/IOVRSkeletonDataProvider
struct IOVRSkeletonDataProvider_t3C0B47D347E1D2C6FC2A1AB062490F8792E4F460;
// QuickVR.QuickVRManager/QuickVRManagerAction
struct QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4;
// QuickVR.QuickVRManager/QuickVRManagerActionAnimator
struct QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637;
// QuickVR.QuickVRNode/CalibrateVRNodeAction
struct CalibrateVRNodeAction_t2970A2D60A09A47DCFEEBB42465C16ABC085C18E;

IL2CPP_EXTERN_C RuntimeClass* BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickHumanTrait_t943725820B7935B6E75896CEF9A899C3A97591CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tAB17D8141B1443D487B2D49915367564FAB2237C____B9650E8EE65338EC33D74865E7E202594485EE812011505936AEB8C906D5CE2E_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05018F5B3265BF9AB0916448F96F059F9230AA6C;
IL2CPP_EXTERN_C String_t* _stringLiteral0D66F876998498F1F38A2A71730D8F682E1F34D0;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral1C3B83E7128DFE5344885801249731AA7F849057;
IL2CPP_EXTERN_C String_t* _stringLiteral3173A9743F3E2F36902E9C597439AFA586985B34;
IL2CPP_EXTERN_C String_t* _stringLiteral38248F9FA838C0166207D9F28C5D3A13DF3D8583;
IL2CPP_EXTERN_C String_t* _stringLiteral4A7CFC7467EDD19C10E4146415BACEAFEC5F2CE9;
IL2CPP_EXTERN_C String_t* _stringLiteral504F34D2CBECF3DFC4F450CBDE74ECFDEFDCF3CA;
IL2CPP_EXTERN_C String_t* _stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D;
IL2CPP_EXTERN_C String_t* _stringLiteral85854D21F273A756078468B1F896F112B0E08118;
IL2CPP_EXTERN_C String_t* _stringLiteral87B3F6E1AA5CDEBB5C0505DB4D4C8535C5A009B3;
IL2CPP_EXTERN_C String_t* _stringLiteral913AB5956D078918F002777CFE8B176BCAAF62C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9265A4304CBAAD756094EBCEF6AC585F5BAAA6EB;
IL2CPP_EXTERN_C String_t* _stringLiteral9E7B68BDBDE290C8A6962666BCDC943B09F2C2B0;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralCEFC98B66081D6B54F61C6EC64F95344D22767BF;
IL2CPP_EXTERN_C String_t* _stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529;
IL2CPP_EXTERN_C String_t* _stringLiteralE586D26F2F2D2462A182B41FF7B0C66457161A10;
IL2CPP_EXTERN_C String_t* _stringLiteralF176A522C7CA5404A97B1ECCB934C0440B783959;
IL2CPP_EXTERN_C String_t* _stringLiteralF830B1C2DD52546857C1D8AEB27D887C47B34E5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFFBC2C924E5DC9232A3732A59008339C044352A3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_mA5BB432A288497354D7D408B6290A0724543AFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA11D5C689F8DE42D5A8AAC98875DA4D6150F1941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD63B6FEAF0BF884EBAF33EAB37386010AC962141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD47469842DD668DECFF0942597F7FB3303AECDD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC4E2C27B688B083756DCBA938CB2201F47648BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m09723AAB382EB63B4BC118793453A535042CCF45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m816B89A07AF472899201C4DE3092C3247667F710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_CreateDefaultImplementation_TisInputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B_m11B7315EFFDA61FEA361E023BD09DB71E1B12FDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0DE0F537197E3158540C6B10BC1B8557ABE22361_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1234B209C6A6C276306507810B158DAF03E3F629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_mD54C604B88A664C7C4D817124CF11D4586970E92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_mB55E17F4CE1C5B664EC95828699BDC2E79C62CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickOVRHandsInitializer_OnSourceAnimatorSet_m074FFC99AEC79DAD57D7FFA6E6120C15812FAFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickSingletonManager_GetInstance_TisInputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5_m8914BA7B61E897BA5F366BFC1D7C84DFED17247A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickSingletonManager_GetInstance_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA67CA68148F051290F0F3993531E93A91017A1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickSingletonManager_GetInstance_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_m864964384BCCF53E5F90FCC5C40AA99E1226E7A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetEnumValues_TisButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_mAC38B38D7FF33F31C705004E08C19CEECD3454FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m7E1D5314D2A967EE063C6FB876380AAC7D0C3EB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDCCD4242042582B557A0F288E79DB6B9A50C7E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m3DE43431705322E63B8F1115C4889C5FE5806BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisOVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76_m8D2C09BF01B9B66AA3479FB7D8D721B6DE1C7345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisOVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C_mC89FB6A4F93158441F2C226109607456A829EC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m93D6077164DF76139D9D2BC58A58489158C20E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisQuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526_mA00BC8E2E9A51CE437CFCA487B3A97430083F945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_m09EC983817BFF432460CE0D9310FB68AFFA5F529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m0FC0EEA3D55DA1D7F9998D754F3874AAF916E537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mC39BCB1F818F75102D1630303645399257C0A546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mB4AEAA36AA03BFACB1D70FFEFA7316E5B10A864D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_m74E34C151194648931B02EBA4EDFC3B663AF2B79_RuntimeMethod_var;
struct BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74;
struct Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D;
struct QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA52DC73DBA837F191DFD390844BC1FB287FF7BE8 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,QuickVR.QuickOVRHandBonePhysics>
struct Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t299080A45BFF3A840106D86F87AA98037397C343* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4E5BF7334F91B984324B76EA2E8100F9D2167989* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC536C3F8705DC036213B1FEA5990885C8D682694* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<QuickVR.QuickHumanBodyBones>
struct List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuickHumanBodyBonesU5BU5D_t9C98C8A689655C0BAA23FE59E6DB7ABA2C8B38EC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<QuickVR.InputManagerOVRHands/ButtonCodes>
struct List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ButtonCodesU5BU5D_t5EFA7A29EA8ABCF5F3346B2CC626B7BD7A6EB509* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// OVRBone
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A  : public RuntimeObject
{
	// OVRSkeleton/BoneId OVRBone::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int16 OVRBone::<ParentBoneIndex>k__BackingField
	int16_t ___U3CParentBoneIndexU3Ek__BackingField_1;
	// UnityEngine.Transform OVRBone::<Transform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTransformU3Ek__BackingField_2;
};

// QuickVR.QuickOVRInitializer
struct QuickOVRInitializer_t0FAD954F60CB6F306EAA0D5DF223AA7E22D354F0  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<QuickVR.InputManagerOVRHands/ButtonCodes>
struct Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80
struct __StaticArrayInitTypeSizeU3D80_tB1D99E662DEB32611ADE75BC33B8AD77D3EE0C14 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_tB1D99E662DEB32611ADE75BC33B8AD77D3EE0C14__padding[80];
	};
};

// OVRPlugin/Quatf
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A 
{
	// System.Single OVRPlugin/Quatf::x
	float ___x_0;
	// System.Single OVRPlugin/Quatf::y
	float ___y_1;
	// System.Single OVRPlugin/Quatf::z
	float ___z_2;
	// System.Single OVRPlugin/Quatf::w
	float ___w_3;
};

// OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F 
{
	// OVRPlugin/SkeletonType OVRPlugin/Skeleton2::Type
	int32_t ___Type_0;
	// System.UInt32 OVRPlugin/Skeleton2::NumBones
	uint32_t ___NumBones_1;
	// System.UInt32 OVRPlugin/Skeleton2::NumBoneCapsules
	uint32_t ___NumBoneCapsules_2;
	// OVRPlugin/Bone[] OVRPlugin/Skeleton2::Bones
	BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* ___Bones_3;
	// OVRPlugin/BoneCapsule[] OVRPlugin/Skeleton2::BoneCapsules
	BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* ___BoneCapsules_4;
};
// Native definition for P/Invoke marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_pinvoke
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};
// Native definition for COM marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_com
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};

// OVRPlugin/Vector3f
struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 
{
	// System.Single OVRPlugin/Vector3f::x
	float ___x_0;
	// System.Single OVRPlugin/Vector3f::y
	float ___y_1;
	// System.Single OVRPlugin/Vector3f::z
	float ___z_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tAB17D8141B1443D487B2D49915367564FAB2237C  : public RuntimeObject
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// OVRPose
struct OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB 
{
	// UnityEngine.Vector3 OVRPose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion OVRPose::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// QuickVR.QuickHumanFingers
struct QuickHumanFingers_t528ECC3ACE170E9398E023513BA97466C7892C1A 
{
	// System.Int32 QuickVR.QuickHumanFingers::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// OVRPlugin/EventDataBuffer
struct EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8 
{
	// OVRPlugin/EventType OVRPlugin/EventDataBuffer::EventType
	int32_t ___EventType_0;
	// System.Byte[] OVRPlugin/EventDataBuffer::EventData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EventData_1;
};
// Native definition for P/Invoke marshalling of OVRPlugin/EventDataBuffer
struct EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshaled_pinvoke
{
	int32_t ___EventType_0;
	uint8_t ___EventData_1[4000];
};
// Native definition for COM marshalling of OVRPlugin/EventDataBuffer
struct EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8_marshaled_com
{
	int32_t ___EventType_0;
	uint8_t ___EventData_1[4000];
};

// OVRPlugin/Posef
struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 
{
	// OVRPlugin/Quatf OVRPlugin/Posef::Orientation
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___Orientation_0;
	// OVRPlugin/Vector3f OVRPlugin/Posef::Position
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___Position_1;
};

// OVRSkeleton/BoneId
struct BoneId_tA8A577FFBDF8D0A78A8B3FE279CD6597EF55FC7A 
{
	// System.Int32 OVRSkeleton/BoneId::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 
{
	// OVRPlugin/HandStatus OVRPlugin/HandState::Status
	int32_t ___Status_0;
	// OVRPlugin/Posef OVRPlugin/HandState::RootPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	// OVRPlugin/Quatf[] OVRPlugin/HandState::BoneRotations
	QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* ___BoneRotations_2;
	// OVRPlugin/HandFingerPinch OVRPlugin/HandState::Pinches
	int32_t ___Pinches_3;
	// System.Single[] OVRPlugin/HandState::PinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___PinchStrength_4;
	// OVRPlugin/Posef OVRPlugin/HandState::PointerPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	// System.Single OVRPlugin/HandState::HandScale
	float ___HandScale_6;
	// OVRPlugin/TrackingConfidence OVRPlugin/HandState::HandConfidence
	int32_t ___HandConfidence_7;
	// OVRPlugin/TrackingConfidence[] OVRPlugin/HandState::FingerConfidences
	TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37* ___FingerConfidences_8;
	// System.Double OVRPlugin/HandState::RequestedTimeStamp
	double ___RequestedTimeStamp_9;
	// System.Double OVRPlugin/HandState::SampleTimeStamp
	double ___SampleTimeStamp_10;
};
// Native definition for P/Invoke marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_pinvoke
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
};
// Native definition for COM marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_com
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// QuickVR.QuickVRManager/QuickVRManagerAction
struct QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4  : public MulticastDelegate_t
{
};

// QuickVR.QuickVRManager/QuickVRManagerActionAnimator
struct QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// QuickVR.BaseInputManager
struct BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<QuickVR.AxisMapping> QuickVR.BaseInputManager::_axisMapping
	List_1_t527AB95AEC4AC6F88D5947E95FF0405F97CDDDC1* ____axisMapping_5;
	// System.Collections.Generic.List`1<QuickVR.ButtonMapping> QuickVR.BaseInputManager::_buttonMapping
	List_1_t185D7732C427D19DB8200C94F2F1C9EA7EEB8387* ____buttonMapping_6;
	// System.Boolean QuickVR.BaseInputManager::_initialized
	bool ____initialized_7;
};

// QuickVR.InputManager
struct InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> QuickVR.InputManager::_virtualAxes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____virtualAxes_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> QuickVR.InputManager::_virtualAxesState
	Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* ____virtualAxesState_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> QuickVR.InputManager::_axisToID
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____axisToID_7;
	// System.Collections.Generic.List`1<System.String> QuickVR.InputManager::_virtualButtons
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____virtualButtons_8;
	// System.Collections.Generic.Dictionary`2<System.String,QuickVR.InputManager/VirtualButtonState> QuickVR.InputManager::_virtualButtonsState
	Dictionary_2_t6D0C3F781211CC260549C8F0509857B19A43CED8* ____virtualButtonsState_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> QuickVR.InputManager::_buttonToID
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____buttonToID_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> QuickVR.InputManager::_activeVirtualAxes
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ____activeVirtualAxes_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> QuickVR.InputManager::_activeVirtualButtons
	Dictionary_2_t17D0D125440AC627FCF80F189C6CBCB02856063C* ____activeVirtualButtons_12;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<QuickVR.InputMap>> QuickVR.InputManager::_validAxesMapping
	List_1_tB818B020AD5D9F147389D95702EA33E741BD9704* ____validAxesMapping_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<QuickVR.InputMap>> QuickVR.InputManager::_validButtonsMapping
	List_1_tB818B020AD5D9F147389D95702EA33E741BD9704* ____validButtonsMapping_14;
	// System.Collections.Generic.List`1<QuickVR.BaseInputManager> QuickVR.InputManager::_inputManagers
	List_1_tA811CD45C999BCA0F1FFD65DEA4913B4C6F169FF* ____inputManagers_15;
};

// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRHand/Hand OVRHand::HandType
	int32_t ___HandType_4;
	// UnityEngine.Transform OVRHand::_pointerPoseRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____pointerPoseRoot_5;
	// UnityEngine.GameObject OVRHand::_pointerPoseGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pointerPoseGO_6;
	// OVRPlugin/HandState OVRHand::_handState
	HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 ____handState_7;
	// System.Boolean OVRHand::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_8;
	// System.Boolean OVRHand::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_9;
	// System.Boolean OVRHand::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_10;
	// System.Boolean OVRHand::<IsSystemGestureInProgress>k__BackingField
	bool ___U3CIsSystemGestureInProgressU3Ek__BackingField_11;
	// System.Boolean OVRHand::<IsPointerPoseValid>k__BackingField
	bool ___U3CIsPointerPoseValidU3Ek__BackingField_12;
	// UnityEngine.Transform OVRHand::<PointerPose>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CPointerPoseU3Ek__BackingField_13;
	// System.Single OVRHand::<HandScale>k__BackingField
	float ___U3CHandScaleU3Ek__BackingField_14;
	// OVRHand/TrackingConfidence OVRHand::<HandConfidence>k__BackingField
	int32_t ___U3CHandConfidenceU3Ek__BackingField_15;
	// System.Boolean OVRHand::<IsDominantHand>k__BackingField
	bool ___U3CIsDominantHandU3Ek__BackingField_16;
};

// OVRManager
struct OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Camera> OVRManager::disabledCameras
	RuntimeObject* ___disabledCameras_10;
	// System.Single OVRManager::prevTimeScale
	float ___prevTimeScale_11;
	// System.Boolean OVRManager::useRecommendedMSAALevel
	bool ___useRecommendedMSAALevel_42;
	// System.Boolean OVRManager::_monoscopic
	bool ____monoscopic_43;
	// OVRManager/ColorSpace OVRManager::_colorGamut
	int32_t ____colorGamut_44;
	// System.Single OVRManager::minRenderScale
	float ___minRenderScale_45;
	// System.Single OVRManager::maxRenderScale
	float ___maxRenderScale_46;
	// UnityEngine.Vector3 OVRManager::_headPoseRelativeOffsetRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____headPoseRelativeOffsetRotation_47;
	// UnityEngine.Vector3 OVRManager::_headPoseRelativeOffsetTranslation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____headPoseRelativeOffsetTranslation_48;
	// System.Int32 OVRManager::profilerTcpPort
	int32_t ___profilerTcpPort_49;
	// System.Boolean OVRManager::expandMixedRealityCapturePropertySheet
	bool ___expandMixedRealityCapturePropertySheet_50;
	// System.Boolean OVRManager::enableMixedReality
	bool ___enableMixedReality_51;
	// OVRManager/CompositionMethod OVRManager::compositionMethod
	int32_t ___compositionMethod_52;
	// UnityEngine.LayerMask OVRManager::extraHiddenLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___extraHiddenLayers_53;
	// UnityEngine.LayerMask OVRManager::extraVisibleLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___extraVisibleLayers_54;
	// System.Boolean OVRManager::dynamicCullingMask
	bool ___dynamicCullingMask_55;
	// UnityEngine.Color OVRManager::externalCompositionBackdropColorRift
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___externalCompositionBackdropColorRift_56;
	// UnityEngine.Color OVRManager::externalCompositionBackdropColorQuest
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___externalCompositionBackdropColorQuest_57;
	// OVRManager/CameraDevice OVRManager::capturingCameraDevice
	int32_t ___capturingCameraDevice_58;
	// System.Boolean OVRManager::flipCameraFrameHorizontally
	bool ___flipCameraFrameHorizontally_59;
	// System.Boolean OVRManager::flipCameraFrameVertically
	bool ___flipCameraFrameVertically_60;
	// System.Single OVRManager::handPoseStateLatency
	float ___handPoseStateLatency_61;
	// System.Single OVRManager::sandwichCompositionRenderLatency
	float ___sandwichCompositionRenderLatency_62;
	// System.Int32 OVRManager::sandwichCompositionBufferedFrames
	int32_t ___sandwichCompositionBufferedFrames_63;
	// UnityEngine.Color OVRManager::chromaKeyColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___chromaKeyColor_64;
	// System.Single OVRManager::chromaKeySimilarity
	float ___chromaKeySimilarity_65;
	// System.Single OVRManager::chromaKeySmoothRange
	float ___chromaKeySmoothRange_66;
	// System.Single OVRManager::chromaKeySpillRange
	float ___chromaKeySpillRange_67;
	// System.Boolean OVRManager::useDynamicLighting
	bool ___useDynamicLighting_68;
	// OVRManager/DepthQuality OVRManager::depthQuality
	int32_t ___depthQuality_69;
	// System.Single OVRManager::dynamicLightingSmoothFactor
	float ___dynamicLightingSmoothFactor_70;
	// System.Single OVRManager::dynamicLightingDepthVariationClampingValue
	float ___dynamicLightingDepthVariationClampingValue_71;
	// OVRManager/VirtualGreenScreenType OVRManager::virtualGreenScreenType
	int32_t ___virtualGreenScreenType_72;
	// System.Single OVRManager::virtualGreenScreenTopY
	float ___virtualGreenScreenTopY_73;
	// System.Single OVRManager::virtualGreenScreenBottomY
	float ___virtualGreenScreenBottomY_74;
	// System.Boolean OVRManager::virtualGreenScreenApplyDepthCulling
	bool ___virtualGreenScreenApplyDepthCulling_75;
	// System.Single OVRManager::virtualGreenScreenDepthTolerance
	float ___virtualGreenScreenDepthTolerance_76;
	// OVRManager/MrcActivationMode OVRManager::mrcActivationMode
	int32_t ___mrcActivationMode_77;
	// OVRManager/InstantiateMrcCameraDelegate OVRManager::instantiateMixedRealityCameraGameObject
	InstantiateMrcCameraDelegate_t26D39C3003CADD2CBA4E7C5EB75333089B2F03C8* ___instantiateMixedRealityCameraGameObject_78;
	// System.Boolean OVRManager::isInsightPassthroughEnabled
	bool ___isInsightPassthroughEnabled_79;
	// System.Boolean OVRManager::requestBodyTrackingPermissionOnStartup
	bool ___requestBodyTrackingPermissionOnStartup_80;
	// System.Boolean OVRManager::requestFaceTrackingPermissionOnStartup
	bool ___requestFaceTrackingPermissionOnStartup_81;
	// System.Boolean OVRManager::requestEyeTrackingPermissionOnStartup
	bool ___requestEyeTrackingPermissionOnStartup_82;
	// System.Boolean OVRManager::_localDimming
	bool ____localDimming_93;
	// OVRManager/TrackingOrigin OVRManager::_trackingOriginType
	int32_t ____trackingOriginType_94;
	// System.Boolean OVRManager::usePositionTracking
	bool ___usePositionTracking_95;
	// System.Boolean OVRManager::useRotationTracking
	bool ___useRotationTracking_96;
	// System.Boolean OVRManager::useIPDInPositionTracking
	bool ___useIPDInPositionTracking_97;
	// System.Boolean OVRManager::resetTrackerOnLoad
	bool ___resetTrackerOnLoad_98;
	// System.Boolean OVRManager::AllowRecenter
	bool ___AllowRecenter_99;
	// System.Boolean OVRManager::LateControllerUpdate
	bool ___LateControllerUpdate_100;
	// System.Boolean OVRManager::LateLatching
	bool ___LateLatching_101;
	// System.Boolean OVRManager::<isSupportedPlatform>k__BackingField
	bool ___U3CisSupportedPlatformU3Ek__BackingField_102;
};

// OVRMesh
struct OVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRMesh/IOVRMeshDataProvider OVRMesh::_dataProvider
	RuntimeObject* ____dataProvider_4;
	// OVRMesh/MeshType OVRMesh::_meshType
	int32_t ____meshType_5;
	// UnityEngine.Mesh OVRMesh::_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____mesh_6;
	// System.Boolean OVRMesh::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_7;
};

// OVRMeshRenderer
struct OVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRMeshRenderer/IOVRMeshRendererDataProvider OVRMeshRenderer::_dataProvider
	RuntimeObject* ____dataProvider_4;
	// OVRMesh OVRMeshRenderer::_ovrMesh
	OVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C* ____ovrMesh_5;
	// OVRSkeleton OVRMeshRenderer::_ovrSkeleton
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ____ovrSkeleton_6;
	// OVRMeshRenderer/ConfidenceBehavior OVRMeshRenderer::_confidenceBehavior
	int32_t ____confidenceBehavior_7;
	// OVRMeshRenderer/SystemGestureBehavior OVRMeshRenderer::_systemGestureBehavior
	int32_t ____systemGestureBehavior_8;
	// UnityEngine.Material OVRMeshRenderer::_systemGestureMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____systemGestureMaterial_9;
	// UnityEngine.Material OVRMeshRenderer::_originalMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____originalMaterial_10;
	// UnityEngine.SkinnedMeshRenderer OVRMeshRenderer::_skinnedMeshRenderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ____skinnedMeshRenderer_11;
	// System.Boolean OVRMeshRenderer::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_12;
	// System.Boolean OVRMeshRenderer::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_13;
	// System.Boolean OVRMeshRenderer::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_14;
	// System.Boolean OVRMeshRenderer::<ShouldUseSystemGestureMaterial>k__BackingField
	bool ___U3CShouldUseSystemGestureMaterialU3Ek__BackingField_15;
};

// OVRSkeleton
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRSkeleton/SkeletonType OVRSkeleton::_skeletonType
	int32_t ____skeletonType_4;
	// OVRSkeleton/IOVRSkeletonDataProvider OVRSkeleton::_dataProvider
	RuntimeObject* ____dataProvider_5;
	// System.Boolean OVRSkeleton::_updateRootPose
	bool ____updateRootPose_6;
	// System.Boolean OVRSkeleton::_updateRootScale
	bool ____updateRootScale_7;
	// System.Boolean OVRSkeleton::_enablePhysicsCapsules
	bool ____enablePhysicsCapsules_8;
	// System.Boolean OVRSkeleton::_applyBoneTranslations
	bool ____applyBoneTranslations_9;
	// UnityEngine.GameObject OVRSkeleton::_bonesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bonesGO_10;
	// UnityEngine.GameObject OVRSkeleton::_bindPosesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bindPosesGO_11;
	// UnityEngine.GameObject OVRSkeleton::_capsulesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____capsulesGO_12;
	// System.Collections.Generic.List`1<OVRBone> OVRSkeleton::_bones
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bones_13;
	// System.Collections.Generic.List`1<OVRBone> OVRSkeleton::_bindPoses
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bindPoses_14;
	// System.Collections.Generic.List`1<OVRBoneCapsule> OVRSkeleton::_capsules
	List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA* ____capsules_15;
	// OVRPlugin/Skeleton2 OVRSkeleton::_skeleton
	Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F ____skeleton_16;
	// UnityEngine.Quaternion OVRSkeleton::wristFixupRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___wristFixupRotation_17;
	// System.Boolean OVRSkeleton::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_18;
	// System.Boolean OVRSkeleton::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_19;
	// System.Boolean OVRSkeleton::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::<BindPoses>k__BackingField
	RuntimeObject* ___U3CBindPosesU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<OVRBoneCapsule> OVRSkeleton::<Capsules>k__BackingField
	RuntimeObject* ___U3CCapsulesU3Ek__BackingField_23;
	// System.Int32 OVRSkeleton::<SkeletonChangedCount>k__BackingField
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_24;
};

// QuickVR.QuickBaseTrackingManager
struct QuickBaseTrackingManager_t4B72ECB62397F7D67AF38AB4BDA824528645F5F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator QuickVR.QuickBaseTrackingManager::m_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Animator_4;
};

// QuickVR.QuickOVRHandBonePhysics
struct QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SphereCollider QuickVR.QuickOVRHandBonePhysics::_collider
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* ____collider_4;
	// UnityEngine.Rigidbody QuickVR.QuickOVRHandBonePhysics::_rigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rigidBody_5;
	// UnityEngine.Transform QuickVR.QuickOVRHandBonePhysics::_debugger
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____debugger_6;
	// QuickVR.QuickOVRHandsInitializer QuickVR.QuickOVRHandBonePhysics::_ovrHandsInitializer
	QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* ____ovrHandsInitializer_7;
};

// QuickVR.QuickOVRHandsInitializer
struct QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean QuickVR.QuickOVRHandsInitializer::_debug
	bool ____debug_4;
	// QuickVR.QuickOVRHand QuickVR.QuickOVRHandsInitializer::_leftHand
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* ____leftHand_5;
	// QuickVR.QuickOVRHand QuickVR.QuickOVRHandsInitializer::_rightHand
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* ____rightHand_6;
	// QuickVR.QuickUnityVR QuickVR.QuickOVRHandsInitializer::m_hTracking
	QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* ___m_hTracking_7;
};

// QuickVR.QuickTrackedObject
struct QuickTrackedObject_t3848756E39E5AA7326462B44D3C5F7C957D23D30  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean QuickVR.QuickTrackedObject::_trackData
	bool ____trackData_4;
	// UnityEngine.Vector3 QuickVR.QuickTrackedObject::_lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lastPosition_5;
	// UnityEngine.Vector3 QuickVR.QuickTrackedObject::_velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____velocity_6;
	// UnityEngine.Vector3 QuickVR.QuickTrackedObject::_lastVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____lastVelocity_7;
	// UnityEngine.Vector4 QuickVR.QuickTrackedObject::_accelerationFull
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____accelerationFull_8;
	// System.Single QuickVR.QuickTrackedObject::_speed
	float ____speed_9;
	// System.Single QuickVR.QuickTrackedObject::_acceleration
	float ____acceleration_10;
	// UnityEngine.Quaternion QuickVR.QuickTrackedObject::_lastRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____lastRotation_11;
	// UnityEngine.Quaternion QuickVR.QuickTrackedObject::_rotationOffset
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____rotationOffset_12;
};

// QuickVR.QuickVRManager
struct QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 QuickVR.QuickVRManager::_logMode
	int32_t ____logMode_4;
	// System.Boolean QuickVR.QuickVRManager::_showFPS
	bool ____showFPS_5;
	// QuickVR.QuickVRManager/XRMode QuickVR.QuickVRManager::_XRMode
	int32_t ____XRMode_6;
	// UnityEngine.Animator QuickVR.QuickVRManager::_animatorTarget
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animatorTarget_10;
	// UnityEngine.Animator QuickVR.QuickVRManager::_animatorSource
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animatorSource_11;
	// QuickVR.QuickUnityVR QuickVR.QuickVRManager::_unityVR
	QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* ____unityVR_12;
	// QuickVR.QuickVRPlayArea QuickVR.QuickVRManager::_vrPlayArea
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* ____vrPlayArea_13;
	// QuickVR.QuickVRCameraController QuickVR.QuickVRManager::_cameraController
	QuickVRCameraController_t333174E6D06338041E26DA265475910423729ED4* ____cameraController_14;
	// QuickVR.InputManager QuickVR.QuickVRManager::_inputManager
	InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5* ____inputManager_15;
	// QuickVR.PerformanceFPS QuickVR.QuickVRManager::_fpsCounter
	PerformanceFPS_tFDBB71BEDE36BD7202F189C79C24D64970BC2ACE* ____fpsCounter_16;
	// QuickVR.QuickCopyPoseBase QuickVR.QuickVRManager::_copyPose
	QuickCopyPoseBase_t269B0D75F10E4ABAADF00A6401D9C6ACB02B1E46* ____copyPose_17;
	// QuickVR.QuickVRInteractionManager QuickVR.QuickVRManager::_interactionManager
	QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* ____interactionManager_18;
	// System.Boolean QuickVR.QuickVRManager::_isCalibrationRequired
	bool ____isCalibrationRequired_19;
};

// QuickVR.QuickVRNode
struct QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean QuickVR.QuickVRNode::_showModel
	bool ____showModel_4;
	// UnityEngine.XR.InputDevice QuickVR.QuickVRNode::m_InputDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice_5;
	// QuickVR.QuickTrackedObject QuickVR.QuickVRNode::_trackedObject
	QuickTrackedObject_t3848756E39E5AA7326462B44D3C5F7C957D23D30* ____trackedObject_6;
	// UnityEngine.Transform QuickVR.QuickVRNode::_model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____model_8;
	// QuickVR.QuickHumanBodyBones QuickVR.QuickVRNode::_role
	int32_t ____role_9;
	// System.Boolean QuickVR.QuickVRNode::_isTracked
	bool ____isTracked_10;
	// QuickVR.QuickVRNode/CalibrateVRNodeAction QuickVR.QuickVRNode::OnCalibrateVRNode
	CalibrateVRNodeAction_t2970A2D60A09A47DCFEEBB42465C16ABC085C18E* ___OnCalibrateVRNode_11;
};

// QuickVR.QuickVRPlayArea
struct QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform QuickVR.QuickVRPlayArea::m_Origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Origin_5;
	// System.Collections.Generic.Dictionary`2<QuickVR.QuickHumanBodyBones,QuickVR.QuickVRNode> QuickVR.QuickVRPlayArea::_vrNodes
	Dictionary_2_t8B301E8F2E49706E25586A91C4B2111B9C528714* ____vrNodes_6;
	// UnityEngine.Vector3 QuickVR.QuickVRPlayArea::_customUserForward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____customUserForward_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.HumanBodyBones,System.Single> QuickVR.QuickVRPlayArea::_fingerLength
	Dictionary_2_t82FCE6D30D233A38042079CBB5A40103E1524E4D* ____fingerLength_8;
};

// QuickVR.InputManagerOVRHands
struct InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B  : public BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15
{
	// QuickVR.QuickUnityVR QuickVR.InputManagerOVRHands::_unityVR
	QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* ____unityVR_13;
	// QuickVR.QuickOVRHandsInitializer QuickVR.InputManagerOVRHands::m_OVRHands
	QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* ___m_OVRHands_14;
};

// QuickVR.QuickIKManager
struct QuickIKManager_t3D2160C4E10DBA0A1AD8D5016BAA06449DC2A079  : public QuickBaseTrackingManager_t4B72ECB62397F7D67AF38AB4BDA824528645F5F4
{
	// UnityEngine.Transform QuickVR.QuickIKManager::m_IKSolversRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_IKSolversRoot_5;
	// UnityEngine.Transform QuickVR.QuickIKManager::m_ikTargetsRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ikTargetsRoot_6;
	// UnityEngine.Vector3 QuickVR.QuickIKManager::_initialHipsLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialHipsLocalPosition_10;
	// System.Boolean QuickVR.QuickIKManager::_isInitialized
	bool ____isInitialized_11;
};

// QuickVR.QuickOVRHand
struct QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208  : public OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509
{
	// OVRSkeleton QuickVR.QuickOVRHand::_skeleton
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ____skeleton_17;
	// UnityEngine.SkinnedMeshRenderer QuickVR.QuickOVRHand::_renderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ____renderer_18;
	// System.Boolean QuickVR.QuickOVRHand::_physicsInitialized
	bool ____physicsInitialized_19;
	// System.Boolean QuickVR.QuickOVRHand::_fingersDataInitialized
	bool ____fingersDataInitialized_20;
	// System.Collections.Generic.Dictionary`2<System.Int32,QuickVR.QuickOVRHandBonePhysics> QuickVR.QuickOVRHand::_handBonePhysics
	Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA* ____handBonePhysics_21;
	// UnityEngine.BoxCollider QuickVR.QuickOVRHand::_handCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____handCollider_22;
	// QuickVR.QuickVRPlayArea QuickVR.QuickOVRHand::_playArea
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* ____playArea_23;
	// System.Int32[] QuickVR.QuickOVRHand::_handFingerConfidence
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____handFingerConfidence_24;
	// QuickVR.QuickVRNode QuickVR.QuickOVRHand::_vrNodeHand
	QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* ____vrNodeHand_25;
	// QuickVR.QuickVRNode[] QuickVR.QuickOVRHand::_vrNodeFingers
	QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4* ____vrNodeFingers_26;
	// UnityEngine.Transform[] QuickVR.QuickOVRHand::_tBoneFingers
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____tBoneFingers_27;
	// OVRPlugin/Node QuickVR.QuickOVRHand::_ovrNodeHand
	int32_t ____ovrNodeHand_28;
};

// QuickVR.QuickUnityVR
struct QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A  : public QuickIKManager_t3D2160C4E10DBA0A1AD8D5016BAA06449DC2A079
{
	// QuickVR.QuickHandGestureSettings QuickVR.QuickUnityVR::_gestureSettingsLeftHand
	QuickHandGestureSettings_t823C76AD5BEC79CDB374F18C3FCA90626AE138F2* ____gestureSettingsLeftHand_22;
	// QuickVR.QuickHandGestureSettings QuickVR.QuickUnityVR::_gestureSettingsRightHand
	QuickHandGestureSettings_t823C76AD5BEC79CDB374F18C3FCA90626AE138F2* ____gestureSettingsRightHand_23;
	// System.Boolean QuickVR.QuickUnityVR::_useFootprints
	bool ____useFootprints_24;
	// System.Boolean QuickVR.QuickUnityVR::m_ApplyHeadRotation
	bool ___m_ApplyHeadRotation_25;
	// System.Boolean QuickVR.QuickUnityVR::m_ApplyHeadPosition
	bool ___m_ApplyHeadPosition_26;
	// System.Boolean QuickVR.QuickUnityVR::_rotateCameraMono
	bool ____rotateCameraMono_27;
	// QuickVR.QuickVRPlayArea QuickVR.QuickUnityVR::_vrPlayArea
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* ____vrPlayArea_28;
	// UnityEngine.Vector3 QuickVR.QuickUnityVR::_headOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____headOffset_29;
	// System.Single QuickVR.QuickUnityVR::_maxHipsToHeadDistance
	float ____maxHipsToHeadDistance_30;
	// UnityEngine.Animations.PositionConstraint QuickVR.QuickUnityVR::_footprints
	PositionConstraint_t574BE070FD49E61B0DC8B4CA53486634FD30377B* ____footprints_31;
	// System.Collections.Generic.List`1<QuickVR.QuickUnityVR/ControlType> QuickVR.QuickUnityVR::m_IKControls
	List_1_t1E6A543737C7643D4E4B7BD12842C2BBFC4C45A3* ___m_IKControls_32;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> QuickVR.QuickUnityVR::m_IKTrackingUpdateMode
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_IKTrackingUpdateMode_33;
	// System.Single QuickVR.QuickUnityVR::_speedH
	float ____speedH_34;
	// System.Single QuickVR.QuickUnityVR::_speedV
	float ____speedV_35;
	// System.Single QuickVR.QuickUnityVR::_offsetH
	float ____offsetH_36;
	// System.Single QuickVR.QuickUnityVR::_offsetV
	float ____offsetV_37;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,QuickVR.QuickOVRHandBonePhysics>

// System.Collections.Generic.Dictionary`2<System.Int32,QuickVR.QuickOVRHandBonePhysics>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<QuickVR.QuickHumanBodyBones>
struct List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuickHumanBodyBonesU5BU5D_t9C98C8A689655C0BAA23FE59E6DB7ABA2C8B38EC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QuickVR.QuickHumanBodyBones>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<QuickVR.InputManagerOVRHands/ButtonCodes>
struct List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ButtonCodesU5BU5D_t5EFA7A29EA8ABCF5F3346B2CC626B7BD7A6EB509* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QuickVR.InputManagerOVRHands/ButtonCodes>

// OVRBone

// OVRBone

// QuickVR.QuickOVRInitializer

// QuickVR.QuickOVRInitializer

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>

// System.Collections.Generic.List`1/Enumerator<QuickVR.InputManagerOVRHands/ButtonCodes>

// System.Collections.Generic.List`1/Enumerator<QuickVR.InputManagerOVRHands/ButtonCodes>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tAB17D8141B1443D487B2D49915367564FAB2237C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::B9650E8EE65338EC33D74865E7E202594485EE812011505936AEB8C906D5CE2E
	__StaticArrayInitTypeSizeU3D80_tB1D99E662DEB32611ADE75BC33B8AD77D3EE0C14 ___B9650E8EE65338EC33D74865E7E202594485EE812011505936AEB8C906D5CE2E_0;
};

// <PrivateImplementationDetails>

// OVRPose

// OVRPose

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// QuickVR.QuickHumanFingers

// QuickVR.QuickHumanFingers

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// OVRPlugin/Posef
struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61_StaticFields
{
	// OVRPlugin/Posef OVRPlugin/Posef::identity
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___identity_2;
};

// OVRPlugin/Posef

// OVRSkeleton/BoneId

// OVRSkeleton/BoneId

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// QuickVR.QuickVRManager/QuickVRManagerAction

// QuickVR.QuickVRManager/QuickVRManagerAction

// QuickVR.QuickVRManager/QuickVRManagerActionAnimator

// QuickVR.QuickVRManager/QuickVRManagerActionAnimator

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SphereCollider

// UnityEngine.SphereCollider

// QuickVR.BaseInputManager
struct BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15_StaticFields
{
	// QuickVR.InputManager QuickVR.BaseInputManager::m_InputManager
	InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5* ___m_InputManager_4;
};

// QuickVR.BaseInputManager

// QuickVR.InputManager
struct InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5_StaticFields
{
	// UnityEngine.InputSystem.InputActionMap QuickVR.InputManager::_actionMapDefault
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ____actionMapDefault_4;
	// QuickVR.InputManager QuickVR.InputManager::m_InputManager
	InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5* ___m_InputManager_16;
	// UnityEngine.InputSystem.InputActionAsset QuickVR.InputManager::m_InputActionsDefault
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_InputActionsDefault_17;
};

// QuickVR.InputManager

// OVRHand

// OVRHand

// OVRManager
struct OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_StaticFields
{
	// OVRManager OVRManager::<instance>k__BackingField
	OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* ___U3CinstanceU3Ek__BackingField_4;
	// OVRDisplay OVRManager::<display>k__BackingField
	OVRDisplay_t1518043CC531CD088400F80558DF7A849ECA2D27* ___U3CdisplayU3Ek__BackingField_5;
	// OVRTracker OVRManager::<tracker>k__BackingField
	OVRTracker_t5E60EE08D82308F2F8206AD43AE8CC4925938154* ___U3CtrackerU3Ek__BackingField_6;
	// OVRBoundary OVRManager::<boundary>k__BackingField
	OVRBoundary_t56DFE91F758A740A34575D748FEC61959A106DAE* ___U3CboundaryU3Ek__BackingField_7;
	// OVRRuntimeSettings OVRManager::<runtimeSettings>k__BackingField
	OVRRuntimeSettings_tC85E84DCFBF4DB2D4C3311CA39C96DEE89220EE1* ___U3CruntimeSettingsU3Ek__BackingField_8;
	// OVRProfile OVRManager::_profile
	OVRProfile_tCFDDDA5EE82F0ED94671EB741B8954603D98AFC0* ____profile_9;
	// System.Action OVRManager::HMDAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDAcquired_12;
	// System.Action OVRManager::HMDLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDLost_13;
	// System.Action OVRManager::HMDMounted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDMounted_14;
	// System.Action OVRManager::HMDUnmounted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HMDUnmounted_15;
	// System.Action OVRManager::VrFocusAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___VrFocusAcquired_16;
	// System.Action OVRManager::VrFocusLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___VrFocusLost_17;
	// System.Action OVRManager::InputFocusAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputFocusAcquired_18;
	// System.Action OVRManager::InputFocusLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___InputFocusLost_19;
	// System.Action OVRManager::AudioOutChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AudioOutChanged_20;
	// System.Action OVRManager::AudioInChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AudioInChanged_21;
	// System.Action OVRManager::TrackingAcquired
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TrackingAcquired_22;
	// System.Action OVRManager::TrackingLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TrackingLost_23;
	// System.Action`2<System.Single,System.Single> OVRManager::DisplayRefreshRateChanged
	Action_2_t4195ED8D681728C29103F36BCD591C0F089C9132* ___DisplayRefreshRateChanged_24;
	// System.Action`4<System.UInt64,System.Boolean,OVRSpace,System.Guid> OVRManager::SpatialAnchorCreateComplete
	Action_4_t540B344FD589096100128D9A1B39946413ED9AAE* ___SpatialAnchorCreateComplete_25;
	// System.Action`6<System.UInt64,System.Boolean,OVRSpace,System.Guid,OVRPlugin/SpaceComponentType,System.Boolean> OVRManager::SpaceSetComponentStatusComplete
	Action_6_tD8B17612932122F2ABF5C8545327C8F527403625* ___SpaceSetComponentStatusComplete_26;
	// System.Action`1<System.UInt64> OVRManager::SpaceQueryResults
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___SpaceQueryResults_27;
	// System.Action`2<System.UInt64,System.Boolean> OVRManager::SpaceQueryComplete
	Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71* ___SpaceQueryComplete_28;
	// System.Action`4<System.UInt64,OVRSpace,System.Boolean,System.Guid> OVRManager::SpaceSaveComplete
	Action_4_t4EDE5C99870C78676D9C651284E64891D8D4F58A* ___SpaceSaveComplete_29;
	// System.Action`4<System.UInt64,System.Boolean,System.Guid,OVRPlugin/SpaceStorageLocation> OVRManager::SpaceEraseComplete
	Action_4_t68CDF52B38375A15FD07A9D61E073DAB9D9C76DC* ___SpaceEraseComplete_30;
	// System.Action`2<System.UInt64,OVRSpatialAnchor/OperationResult> OVRManager::ShareSpacesComplete
	Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9* ___ShareSpacesComplete_31;
	// System.Action`2<System.UInt64,OVRSpatialAnchor/OperationResult> OVRManager::SpaceListSaveComplete
	Action_2_tD6645913AD5AC5C01955FE6AA6F05A7A1FCA90A9* ___SpaceListSaveComplete_32;
	// System.Action`2<System.UInt64,System.Boolean> OVRManager::SceneCaptureComplete
	Action_2_tDBB3CA1E07CF34B6EE70F044CD209FED6BFD1D71* ___SceneCaptureComplete_33;
	// System.Action OVRManager::HSWDismissed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HSWDismissed_34;
	// System.Boolean OVRManager::_isHmdPresentCached
	bool ____isHmdPresentCached_35;
	// System.Boolean OVRManager::_isHmdPresent
	bool ____isHmdPresent_36;
	// System.Boolean OVRManager::_wasHmdPresent
	bool ____wasHmdPresent_37;
	// System.Boolean OVRManager::_hasVrFocusCached
	bool ____hasVrFocusCached_38;
	// System.Boolean OVRManager::_hasVrFocus
	bool ____hasVrFocus_39;
	// System.Boolean OVRManager::_hadVrFocus
	bool ____hadVrFocus_40;
	// System.Boolean OVRManager::_hadInputFocus
	bool ____hadInputFocus_41;
	// System.String OVRManager::OCULUS_UNITY_NAME_STR
	String_t* ___OCULUS_UNITY_NAME_STR_83;
	// System.String OVRManager::OPENVR_UNITY_NAME_STR
	String_t* ___OPENVR_UNITY_NAME_STR_84;
	// OVRManager/XRDevice OVRManager::loadedXRDevice
	int32_t ___loadedXRDevice_85;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchRotationOffsetEulerLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchRotationOffsetEulerLeft_86;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchRotationOffsetEulerRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchRotationOffsetEulerRight_87;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchPositionOffsetLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchPositionOffsetLeft_88;
	// UnityEngine.Vector3 OVRManager::OpenVRTouchPositionOffsetRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___OpenVRTouchPositionOffsetRight_89;
	// System.Boolean OVRManager::m_SpaceWarpEnabled
	bool ___m_SpaceWarpEnabled_90;
	// UnityEngine.Transform OVRManager::m_AppSpaceTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AppSpaceTransform_91;
	// UnityEngine.DepthTextureMode OVRManager::m_CachedDepthTextureMode
	int32_t ___m_CachedDepthTextureMode_92;
	// System.Boolean OVRManager::_isUserPresentCached
	bool ____isUserPresentCached_103;
	// System.Boolean OVRManager::_isUserPresent
	bool ____isUserPresent_104;
	// System.Boolean OVRManager::_wasUserPresent
	bool ____wasUserPresent_105;
	// System.Boolean OVRManager::prevAudioOutIdIsCached
	bool ___prevAudioOutIdIsCached_106;
	// System.Boolean OVRManager::prevAudioInIdIsCached
	bool ___prevAudioInIdIsCached_107;
	// System.String OVRManager::prevAudioOutId
	String_t* ___prevAudioOutId_108;
	// System.String OVRManager::prevAudioInId
	String_t* ___prevAudioInId_109;
	// System.Boolean OVRManager::wasPositionTracked
	bool ___wasPositionTracked_110;
	// OVRPlugin/EventDataBuffer OVRManager::eventDataBuffer
	EventDataBuffer_t5836E8ECE1E094863DEDCC92818AEF39C2F646E8 ___eventDataBuffer_111;
	// System.String OVRManager::UnityAlphaOrBetaVersionWarningMessage
	String_t* ___UnityAlphaOrBetaVersionWarningMessage_112;
	// System.Boolean OVRManager::OVRManagerinitialized
	bool ___OVRManagerinitialized_113;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem> OVRManager::s_displaySubsystems
	List_1_tA7666C6690CE2AEE97571615AD3AFCE2BB020597* ___s_displaySubsystems_114;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> OVRManager::s_displaySubsystemDescriptors
	List_1_tC3F021D09EFA4F3516555517B5E0D39308C9C1B4* ___s_displaySubsystemDescriptors_115;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> OVRManager::s_inputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_inputSubsystems_116;
	// System.Boolean OVRManager::multipleMainCameraWarningPresented
	bool ___multipleMainCameraWarningPresented_117;
	// System.Boolean OVRManager::suppressUnableToFindMainCameraMessage
	bool ___suppressUnableToFindMainCameraMessage_118;
	// System.WeakReference`1<UnityEngine.Camera> OVRManager::lastFoundMainCamera
	WeakReference_1_t08942AAA5C58B24D75314BD9594E2DE409CB9C93* ___lastFoundMainCamera_119;
	// System.Boolean OVRManager::staticMixedRealityCaptureInitialized
	bool ___staticMixedRealityCaptureInitialized_120;
	// System.Boolean OVRManager::staticPrevEnableMixedRealityCapture
	bool ___staticPrevEnableMixedRealityCapture_121;
	// OVRMixedRealityCaptureSettings OVRManager::staticMrcSettings
	OVRMixedRealityCaptureSettings_tF6078D6B59F16A0EE3DEE4144FCED347444B9198* ___staticMrcSettings_122;
	// System.Boolean OVRManager::suppressDisableMixedRealityBecauseOfNoMainCameraWarning
	bool ___suppressDisableMixedRealityBecauseOfNoMainCameraWarning_123;
	// OVRManager/PassthroughInitializationState OVRManager::_passthroughInitializationState
	int32_t ____passthroughInitializationState_124;
	// OVRManager/PassthroughCapabilities OVRManager::_passthroughCapabilities
	PassthroughCapabilities_t3B338539A7E4125FE79381628715BDC608471F9F* ____passthroughCapabilities_125;
};

// OVRManager

// OVRMesh

// OVRMesh

// OVRMeshRenderer

// OVRMeshRenderer

// OVRSkeleton

// OVRSkeleton

// QuickVR.QuickOVRHandBonePhysics

// QuickVR.QuickOVRHandBonePhysics

// QuickVR.QuickOVRHandsInitializer

// QuickVR.QuickOVRHandsInitializer

// QuickVR.QuickTrackedObject

// QuickVR.QuickTrackedObject

// QuickVR.QuickVRManager
struct QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_StaticFields
{
	// QuickVR.QuickVRManager/HandTrackingMode QuickVR.QuickVRManager::<_handTrackingMode>k__BackingField
	int32_t ___U3C_handTrackingModeU3Ek__BackingField_7;
	// QuickVR.QuickVRManager QuickVR.QuickVRManager::m_Instance
	QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* ___m_Instance_8;
	// QuickVR.QuickVRManager/HMDModel QuickVR.QuickVRManager::m_HMDModel
	int32_t ___m_HMDModel_9;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPreCalibrate
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPreCalibrate_20;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPostCalibrate
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPostCalibrate_21;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPreUpdateVRNodes
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPreUpdateVRNodes_22;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPostUpdateVRNodes
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPostUpdateVRNodes_23;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPreUpdateIKTargets
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPreUpdateIKTargets_24;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPostUpdateIKTargets
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPostUpdateIKTargets_25;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPreUpdateTracking
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPreUpdateTracking_26;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPostUpdateTracking
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPostUpdateTracking_27;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPreCopyPose
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPreCopyPose_28;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPostCopyPose
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPostCopyPose_29;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPreCameraUpdate
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPreCameraUpdate_30;
	// QuickVR.QuickVRManager/QuickVRManagerAction QuickVR.QuickVRManager::OnPostCameraUpdate
	QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___OnPostCameraUpdate_31;
	// QuickVR.QuickVRManager/QuickVRManagerActionAnimator QuickVR.QuickVRManager::OnSourceAnimatorSet
	QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* ___OnSourceAnimatorSet_32;
	// QuickVR.QuickVRManager/QuickVRManagerActionAnimator QuickVR.QuickVRManager::OnTargetAnimatorSet
	QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* ___OnTargetAnimatorSet_33;
};

// QuickVR.QuickVRManager

// QuickVR.QuickVRNode
struct QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904_StaticFields
{
	// System.Collections.Generic.List`1<QuickVR.QuickHumanBodyBones> QuickVR.QuickVRNode::_typeList
	List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316* ____typeList_7;
};

// QuickVR.QuickVRNode

// QuickVR.QuickVRPlayArea
struct QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_StaticFields
{
	// QuickVR.QuickVRPlayArea QuickVR.QuickVRPlayArea::_instance
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* ____instance_4;
};

// QuickVR.QuickVRPlayArea

// QuickVR.InputManagerOVRHands

// QuickVR.InputManagerOVRHands

// QuickVR.QuickOVRHand
struct QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_StaticFields
{
	// OVRSkeleton/BoneId[] QuickVR.QuickOVRHand::_ovrFingerBones
	BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478* ____ovrFingerBones_32;
};

// QuickVR.QuickOVRHand

// QuickVR.QuickUnityVR
struct QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_StaticFields
{
	// System.Single QuickVR.QuickUnityVR::HUMAN_HEADS_TALL
	float ___HUMAN_HEADS_TALL_17;
	// System.Single QuickVR.QuickUnityVR::HUMAN_HEADS_TALL_EYES
	float ___HUMAN_HEADS_TALL_EYES_18;
	// System.Single QuickVR.QuickUnityVR::HUMAN_HEADS_TALL_HEAD
	float ___HUMAN_HEADS_TALL_HEAD_19;
};

// QuickVR.QuickUnityVR
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// QuickVR.QuickHumanFingers[]
struct QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// QuickVR.QuickVRNode[]
struct QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4  : public RuntimeArray
{
	ALIGN_FIELD (8) QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* m_Items[1];

	inline QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// OVRSkeleton/BoneId[]
struct BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> QuickVR.QuickUtils::GetEnumValues<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* QuickUtils_GetEnumValues_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m0FEFE6672A9353E2559844004C679EAF64EE00E7_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T QuickVR.QuickSingletonManager::GetInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32Enum>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<QuickVR.QuickOVRHandsInitializer>()
inline QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* Component_GetComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA11D5C689F8DE42D5A8AAC98875DA4D6150F1941 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager/QuickVRManagerActionAnimator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99 (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::add_OnSourceAnimatorSet(QuickVR.QuickVRManager/QuickVRManagerActionAnimator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManager_add_OnSourceAnimatorSet_m66F5AD58CCCFCF56A8951DC3D7853DFFF621CC55 (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<QuickVR.QuickUnityVR>()
inline QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<T> QuickVR.QuickUtils::GetEnumValues<QuickVR.InputManagerOVRHands/ButtonCodes>()
inline List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C* QuickUtils_GetEnumValues_TisButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_mAC38B38D7FF33F31C705004E08C19CEECD3454FE (const RuntimeMethod* method)
{
	return ((  List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C* (*) (const RuntimeMethod*))QuickUtils_GetEnumValues_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m0FEFE6672A9353E2559844004C679EAF64EE00E7_gshared)(method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<QuickVR.InputManagerOVRHands/ButtonCodes>::GetEnumerator()
inline Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300 List_1_GetEnumerator_m0DE0F537197E3158540C6B10BC1B8557ABE22361 (List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300 (*) (List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C*, const RuntimeMethod*))List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<QuickVR.InputManagerOVRHands/ButtonCodes>::Dispose()
inline void Enumerator_Dispose_mC4E2C27B688B083756DCBA938CB2201F47648BC9 (Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300*, const RuntimeMethod*))Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<QuickVR.InputManagerOVRHands/ButtonCodes>::get_Current()
inline int32_t Enumerator_get_Current_m816B89A07AF472899201C4DE3092C3247667F710_inline (Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<QuickVR.InputManagerOVRHands/ButtonCodes>::MoveNext()
inline bool Enumerator_MoveNext_m09723AAB382EB63B4BC118793453A535042CCF45 (Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
// QuickVR.QuickOVRHandsInitializer QuickVR.InputManagerOVRHands::get__ovrHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* InputManagerOVRHands_get__ovrHands_mF11F85BAFF580EC335B8ED1A4DD097AA40AEE330 (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// QuickVR.QuickVRManager/HandTrackingMode QuickVR.QuickVRManager::get__handTrackingMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuickVRManager_get__handTrackingMode_m10A87F4A1914C04D89A62DF0875E402E8EE8C809_inline (const RuntimeMethod* method) ;
// System.Boolean OVRHand::GetFingerIsPinching(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, int32_t ___0_finger, const RuntimeMethod* method) ;
// System.Void QuickVR.BaseInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputManager__ctor_m4180A8E3FAB2CF8F8B4916F22FF145A4F0EF70F9 (BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<OVRSkeleton>(UnityEngine.Component)
inline OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* QuickUtils_GetOrCreateComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m93D6077164DF76139D9D2BC58A58489158C20E93 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// T QuickVR.QuickUtils::GetOrCreateComponent<OVRMesh>(UnityEngine.Component)
inline OVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C* QuickUtils_GetOrCreateComponent_TisOVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C_mC89FB6A4F93158441F2C226109607456A829EC45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  OVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// T QuickVR.QuickUtils::GetOrCreateComponent<OVRMeshRenderer>(UnityEngine.Component)
inline OVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76* QuickUtils_GetOrCreateComponent_TisOVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76_m8D2C09BF01B9B66AA3479FB7D8D721B6DE1C7345 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  OVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// T QuickVR.QuickUtils::GetOrCreateComponent<UnityEngine.SkinnedMeshRenderer>(UnityEngine.Component)
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* QuickUtils_GetOrCreateComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mC39BCB1F818F75102D1630303645399257C0A546 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// T UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<QuickVR.QuickVRPlayArea>()
inline QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* Component_GetComponentInParent_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_mA5BB432A288497354D7D408B6290A0724543AFE4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void QuickVR.QuickVRManager/QuickVRManagerAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManagerAction__ctor_mA9D23CA7B64DB68B5CA46097BCCA1F4548136979 (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::add_OnPostUpdateVRNodes(QuickVR.QuickVRManager/QuickVRManagerAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManager_add_OnPostUpdateVRNodes_m0EFB4F52EFB3774ACCFC64AA98CA2D20DE98CA7E (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::remove_OnPostUpdateVRNodes(QuickVR.QuickVRManager/QuickVRManagerAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManager_remove_OnPostUpdateVRNodes_m89CE06686D7282117025386A774B8B8C06155681 (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___0_value, const RuntimeMethod* method) ;
// T QuickVR.QuickSingletonManager::GetInstance<QuickVR.QuickVRManager>()
inline QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A (const RuntimeMethod* method)
{
	return ((  QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* (*) (const RuntimeMethod*))QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared)(method);
}
// QuickVR.QuickHumanFingers[] QuickVR.QuickHumanTrait::GetHumanFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* QuickHumanTrait_GetHumanFingers_m675B2D31D99E9247E642BCF8B4CCC168B7E6FEFA (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<QuickVR.QuickHumanBodyBones> QuickVR.QuickHumanTrait::GetBonesFromFinger(QuickVR.QuickHumanFingers,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316* QuickHumanTrait_GetBonesFromFinger_m4817A63E2D697DAF1E834FCA300E26FC827DA763 (int32_t ___0_finger, bool ___1_isLeft, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<QuickVR.QuickHumanBodyBones>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m1234B209C6A6C276306507810B158DAF03E3F629 (List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316*, int32_t, const RuntimeMethod*))List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared)(__this, ___0_index, method);
}
// UnityEngine.Transform QuickVR.QuickHumanTrait::GetBoneTransform(UnityEngine.Animator,QuickVR.QuickHumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* QuickHumanTrait_GetBoneTransform_m3BA220BB6C6F88C015F63C980416DD0AB45D994B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_boneID, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QuickVR.QuickOVRHandBonePhysics>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD47469842DD668DECFF0942597F7FB3303AECDD2 (Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA* __this, int32_t ___0_key, QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA*, int32_t, QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform QuickVR.QuickUtils::CreateChild(UnityEngine.Transform,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* QuickUtils_CreateChild_m0C5DD3E950843A8609469C9CE7B40FE7D41E48E1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, String_t* ___1_name, bool ___2_checkName, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<UnityEngine.BoxCollider>(UnityEngine.Component)
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* QuickUtils_GetOrCreateComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m7E1D5314D2A967EE063C6FB876380AAC7D0C3EB2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// T QuickVR.QuickUtils::GetOrCreateComponent<UnityEngine.MeshRenderer>(UnityEngine.Component)
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldUp, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<QuickVR.QuickOVRHandBonePhysics>(UnityEngine.Component)
inline QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* QuickUtils_GetOrCreateComponent_TisQuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526_mA00BC8E2E9A51CE437CFCA487B3A97430083F945 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// System.Boolean OVRSkeleton::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRBone::get_Transform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Boolean QuickVR.QuickOVRHand::GetFingerIsTouchingHand(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_finger, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// OVRSkeleton/SkeletonType OVRSkeleton::GetSkeletonType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OVRSkeleton_GetSkeletonType_m8CC2C1B6913553428216E3636C51C23B9874E5B8 (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
// System.Boolean OVRHand::get_IsDataHighConfidence()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsDataHighConfidence_m02001F39FF11C4A20209D626C1C68B219F07FF07_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Boolean OVRPlugin::GetNodePositionTracked(OVRPlugin/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B (int32_t ___0_nodeId, const RuntimeMethod* method) ;
// OVRPlugin/Posef OVRPlugin::GetNodePose(OVRPlugin/Node,OVRPlugin/Step)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3 (int32_t ___0_nodeId, int32_t ___1_stepId, const RuntimeMethod* method) ;
// OVRPose OVRExtensions::ToOVRPose(OVRPlugin/Posef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F (Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___0_p, const RuntimeMethod* method) ;
// System.Boolean OVRPlugin::GetNodeOrientationTracked(OVRPlugin/Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRPlugin_GetNodeOrientationTracked_m2F4F1AF81CEA7FB1BC6B8025E99A1D0E93CBDC9F (int32_t ___0_nodeId, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, int32_t ___2_relativeTo, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QuickVR.QuickOVRHandBonePhysics>::.ctor()
inline void Dictionary_2__ctor_mD63B6FEAF0BF884EBAF33EAB37386010AC962141 (Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void OVRHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRHand__ctor_m2AE1AFA461194C0E08A763D33C8E6CA1A8F0A42E (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// T QuickVR.QuickSingletonManager::GetInstance<QuickVR.QuickOVRHandsInitializer>()
inline QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* QuickSingletonManager_GetInstance_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA67CA68148F051290F0F3993531E93A91017A1BB (const RuntimeMethod* method)
{
	return ((  QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* (*) (const RuntimeMethod*))QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared)(method);
}
// T QuickVR.QuickUtils::GetOrCreateComponent<UnityEngine.SphereCollider>(UnityEngine.Component)
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* QuickUtils_GetOrCreateComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mB4AEAA36AA03BFACB1D70FFEFA7316E5B10A864D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// System.Void UnityEngine.SphereCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, float ___0_value, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<UnityEngine.Rigidbody>(UnityEngine.Component)
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* QuickUtils_GetOrCreateComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m0FC0EEA3D55DA1D7F9998D754F3874AAF916E537 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<UnityEngine.MeshFilter>(UnityEngine.Component)
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* QuickUtils_GetOrCreateComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDCCD4242042582B557A0F288E79DB6B9A50C7E7C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// UnityEngine.Mesh QuickVR.QuickUtils::GetUnityPrimitiveMesh(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* QuickUtils_GetUnityPrimitiveMesh_m1979A06474DB6C640E894DCC1D0BF843AA573351 (int32_t ___0_primitiveType, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::add_OnPreUpdateVRNodes(QuickVR.QuickVRManager/QuickVRManagerAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManager_add_OnPreUpdateVRNodes_m18C1A5110F1B0816F6276B204126AA45DB49A79D (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::remove_OnPreUpdateVRNodes(QuickVR.QuickVRManager/QuickVRManagerAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManager_remove_OnPreUpdateVRNodes_m045ACDDCB90A29DC046955D1CE67193625F78E7E (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* ___0_value, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<QuickVR.QuickOVRHandsInitializer>(UnityEngine.Component)
inline QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* QuickUtils_GetOrCreateComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_m09EC983817BFF432460CE0D9310FB68AFFA5F529 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// T QuickVR.QuickSingletonManager::GetInstance<QuickVR.InputManager>()
inline InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5* QuickSingletonManager_GetInstance_TisInputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5_m8914BA7B61E897BA5F366BFC1D7C84DFED17247A (const RuntimeMethod* method)
{
	return ((  InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5* (*) (const RuntimeMethod*))QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared)(method);
}
// T QuickVR.QuickSingletonManager::GetInstance<QuickVR.QuickVRPlayArea>()
inline QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* QuickSingletonManager_GetInstance_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_m864964384BCCF53E5F90FCC5C40AA99E1226E7A5 (const RuntimeMethod* method)
{
	return ((  QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* (*) (const RuntimeMethod*))QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared)(method);
}
// T UnityEngine.Resources::Load<QuickVR.QuickOVRHand>(System.String)
inline QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* Resources_Load_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_m74E34C151194648931B02EBA4EDFC3B663AF2B79 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.Object::Instantiate<QuickVR.QuickOVRHand>(T,UnityEngine.Transform)
inline QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* Object_Instantiate_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_mB55E17F4CE1C5B664EC95828699BDC2E79C62CCA (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* (*) (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void QuickVR.QuickUtils::ResetTransformation(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickUtils_ResetTransformation_mC08CCA638DDC3FDCA034EE7C2F261C81D3BE3EB3 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// System.Boolean OVRPlugin::GetHandTrackingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05 (const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::set__handTrackingMode(QuickVR.QuickVRManager/HandTrackingMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QuickVRManager_set__handTrackingMode_mFE47C69A109EECAED49555CE6C6B725434C03764_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void OVRInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076 (const RuntimeMethod* method) ;
// System.Boolean OVRPlugin::get_faceTrackingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRPlugin_get_faceTrackingSupported_m309FC12CACF9C70F552B0F3B96E554CF11F53387 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___0_permission, const RuntimeMethod* method) ;
// System.Boolean OVRPlugin::get_eyeTrackingSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OVRPlugin_get_eyeTrackingSupported_m7192CA66A8AB4E4C9958C741256E29CB3C0DB17A (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<OVRManager>()
inline OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* Object_FindObjectOfType_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_mD54C604B88A664C7C4D817124CF11D4586970E92 (const RuntimeMethod* method)
{
	return ((  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T QuickVR.QuickUtils::GetOrCreateComponent<OVRManager>(UnityEngine.Component)
inline OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* QuickUtils_GetOrCreateComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m3DE43431705322E63B8F1115C4889C5FE5806BF4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_c, const RuntimeMethod* method)
{
	return ((  OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_mB352406501682057C04B016B9E8492043B955812_gshared)(___0_c, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QuickVR.QuickOVRHandsInitializer QuickVR.InputManagerOVRHands::get__ovrHands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* InputManagerOVRHands_get__ovrHands_mF11F85BAFF580EC335B8ED1A4DD097AA40AEE330 (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA11D5C689F8DE42D5A8AAC98875DA4D6150F1941_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (!m_OVRHands && _unityVR)
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_0 = __this->___m_OVRHands_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* L_2 = __this->____unityVR_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// m_OVRHands = _unityVR.GetComponent<QuickOVRHandsInitializer>();
		QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* L_5 = __this->____unityVR_13;
		NullCheck(L_5);
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_6;
		L_6 = Component_GetComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA11D5C689F8DE42D5A8AAC98875DA4D6150F1941(L_5, Component_GetComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA11D5C689F8DE42D5A8AAC98875DA4D6150F1941_RuntimeMethod_var);
		__this->___m_OVRHands_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OVRHands_14), (void*)L_6);
	}

IL_0033:
	{
		// return m_OVRHands;
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_7 = __this->___m_OVRHands_14;
		V_1 = L_7;
		goto IL_003c;
	}

IL_003c:
	{
		// }
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_8 = V_1;
		return L_8;
	}
}
// System.Void QuickVR.InputManagerOVRHands::ResetDefaultConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManagerOVRHands_ResetDefaultConfiguration_m8F6170D85548EC69C269534111F263B09DB8285D (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE586D26F2F2D2462A182B41FF7B0C66457161A10);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ConfigureDefaultButton(InputManager.DEFAULT_BUTTON_CONTINUE, ButtonCodes.ThumbUp + "Right", ButtonCodes.ThumbUp + "Left");
		V_0 = 4;
		Il2CppFakeBox<int32_t> L_0(ButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, NULL);
		V_0 = 4;
		Il2CppFakeBox<int32_t> L_3(ButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		VirtualActionInvoker3< String_t*, String_t*, String_t* >::Invoke(13 /* System.Void QuickVR.BaseInputManager::ConfigureDefaultButton(System.String,System.String,System.String) */, __this, _stringLiteralE586D26F2F2D2462A182B41FF7B0C66457161A10, L_2, L_5);
		// }
		return;
	}
}
// System.Void QuickVR.InputManagerOVRHands::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManagerOVRHands_OnEnable_m0159B7ADE6AC23628CDC19784375438861B6E298 (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnSourceAnimatorSet += ActionSourceAnimatorSet;
		QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* L_0 = (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637*)il2cpp_codegen_object_new(QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 24)), NULL);
		QuickVRManager_add_OnSourceAnimatorSet_m66F5AD58CCCFCF56A8951DC3D7853DFFF621CC55(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.InputManagerOVRHands::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManagerOVRHands_OnDisable_m51CF5FA691EFC69721485B5428339F4E4C1009AC (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnSourceAnimatorSet += ActionSourceAnimatorSet;
		QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* L_0 = (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637*)il2cpp_codegen_object_new(QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 24)), NULL);
		QuickVRManager_add_OnSourceAnimatorSet_m66F5AD58CCCFCF56A8951DC3D7853DFFF621CC55(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.InputManagerOVRHands::ActionSourceAnimatorSet(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManagerOVRHands_ActionSourceAnimatorSet_m28632D895D7B60B895FB8185AAC0F29E430F323A (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _unityVR = animator.GetComponent<QuickUnityVR>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		NullCheck(L_0);
		QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* L_1;
		L_1 = Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411(L_0, Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411_RuntimeMethod_var);
		__this->____unityVR_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unityVR_13), (void*)L_1);
		// }
		return;
	}
}
// System.String[] QuickVR.InputManagerOVRHands::GetButtonCodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* InputManagerOVRHands_GetButtonCodes_m877E90E04511F1651D3633A507552E14A61C5DFC (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC4E2C27B688B083756DCBA938CB2201F47648BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m09723AAB382EB63B4BC118793453A535042CCF45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m816B89A07AF472899201C4DE3092C3247667F710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0DE0F537197E3158540C6B10BC1B8557ABE22361_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetEnumValues_TisButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_mAC38B38D7FF33F31C705004E08C19CEECD3454FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	{
		// string[] sufix = { "Left", "Right" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		V_0 = L_2;
		// List<string> codes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_3;
		// foreach (string s in sufix)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		V_2 = L_4;
		V_3 = 0;
		goto IL_007f;
	}

IL_0025:
	{
		// foreach (string s in sufix)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// foreach (ButtonCodes b in QuickUtils.GetEnumValues<ButtonCodes>())
		List_1_t68ACD81194FD238E4F7B27497D4EC7AE96BB914C* L_9;
		L_9 = QuickUtils_GetEnumValues_TisButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_mAC38B38D7FF33F31C705004E08C19CEECD3454FE(QuickUtils_GetEnumValues_TisButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_mAC38B38D7FF33F31C705004E08C19CEECD3454FE_RuntimeMethod_var);
		NullCheck(L_9);
		Enumerator_t57825372D47A9658B530BB8EC7FDFBF045C54300 L_10;
		L_10 = List_1_GetEnumerator_m0DE0F537197E3158540C6B10BC1B8557ABE22361(L_9, List_1_GetEnumerator_m0DE0F537197E3158540C6B10BC1B8557ABE22361_RuntimeMethod_var);
		V_5 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC4E2C27B688B083756DCBA938CB2201F47648BC9((&V_5), Enumerator_Dispose_mC4E2C27B688B083756DCBA938CB2201F47648BC9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_003a_1:
			{
				// foreach (ButtonCodes b in QuickUtils.GetEnumValues<ButtonCodes>())
				int32_t L_11;
				L_11 = Enumerator_get_Current_m816B89A07AF472899201C4DE3092C3247667F710_inline((&V_5), Enumerator_get_Current_m816B89A07AF472899201C4DE3092C3247667F710_RuntimeMethod_var);
				V_6 = L_11;
				// codes.Add(b.ToString() + s);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_1;
				Il2CppFakeBox<int32_t> L_13(ButtonCodes_tF5F88101A34CBC03EA985132436F841EFC1F0FD8_il2cpp_TypeInfo_var, (&V_6));
				String_t* L_14;
				L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
				String_t* L_15 = V_4;
				String_t* L_16;
				L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, L_15, NULL);
				NullCheck(L_12);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0060_1:
			{
				// foreach (ButtonCodes b in QuickUtils.GetEnumValues<ButtonCodes>())
				bool L_17;
				L_17 = Enumerator_MoveNext_m09723AAB382EB63B4BC118793453A535042CCF45((&V_5), Enumerator_MoveNext_m09723AAB382EB63B4BC118793453A535042CCF45_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007f:
	{
		// foreach (string s in sufix)
		int32_t L_19 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// return GetCodes(codes);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22;
		L_22 = VirtualFuncInvoker1< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(19 /* System.String[] QuickVR.BaseInputManager::GetCodes(System.Collections.Generic.List`1<System.String>) */, __this, L_21);
		V_7 = L_22;
		goto IL_0090;
	}

IL_0090:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_7;
		return L_23;
	}
}
// QuickVR.QuickOVRHand QuickVR.InputManagerOVRHands::GetOVRhand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* InputManagerOVRHands_GetOVRhand_m98DA31E6544CDD703F624BA6AD8916657AD95C9D (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, String_t* ___0_button, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		s_Il2CppMethodInitialized = true;
	}
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* V_0 = NULL;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B3_0 = NULL;
	{
		// return _ovrHands? _ovrHands.GetOVRHand(button.Contains("Left")) : null;
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_0;
		L_0 = InputManagerOVRHands_get__ovrHands_mF11F85BAFF580EC335B8ED1A4DD097AA40AEE330(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*)(NULL));
		goto IL_0027;
	}

IL_0011:
	{
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_2;
		L_2 = InputManagerOVRHands_get__ovrHands_mF11F85BAFF580EC335B8ED1A4DD097AA40AEE330(__this, NULL);
		String_t* L_3 = ___0_button;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_3, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, NULL);
		NullCheck(L_2);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_5;
		L_5 = VirtualFuncInvoker1< QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*, bool >::Invoke(7 /* QuickVR.QuickOVRHand QuickVR.QuickOVRHandsInitializer::GetOVRHand(System.Boolean) */, L_2, L_4);
		G_B3_0 = L_5;
	}

IL_0027:
	{
		V_0 = G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_6 = V_0;
		return L_6;
	}
}
// System.Single QuickVR.InputManagerOVRHands::ImpGetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputManagerOVRHands_ImpGetAxis_m3EE655908BDAAC4EF7ACAA28A8E6D8D4E36FE5D9 (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, String_t* ___0_axis, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return 0.0f;
		V_0 = (0.0f);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		float L_0 = V_0;
		return L_0;
	}
}
// System.Boolean QuickVR.InputManagerOVRHands::ImpGetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManagerOVRHands_ImpGetButton_m03E7ADC094F0860E21FA671B0E39955FCE1ED714 (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, String_t* ___0_button, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05018F5B3265BF9AB0916448F96F059F9230AA6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C3B83E7128DFE5344885801249731AA7F849057);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral504F34D2CBECF3DFC4F450CBDE74ECFDEFDCF3CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85854D21F273A756078468B1F896F112B0E08118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87B3F6E1AA5CDEBB5C0505DB4D4C8535C5A009B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral913AB5956D078918F002777CFE8B176BCAAF62C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B3_0 = 0;
	{
		// if (QuickVRManager._handTrackingMode == QuickVRManager.HandTrackingMode.Hands && _ovrHands)
		int32_t L_0;
		L_0 = QuickVRManager_get__handTrackingMode_m10A87F4A1914C04D89A62DF0875E402E8EE8C809_inline(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_1;
		L_1 = InputManagerOVRHands_get__ovrHands_mF11F85BAFF580EC335B8ED1A4DD097AA40AEE330(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0115;
		}
	}
	{
		// QuickOVRHand h = GetOVRhand(button);
		String_t* L_4 = ___0_button;
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_5;
		L_5 = VirtualFuncInvoker1< QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*, String_t* >::Invoke(25 /* QuickVR.QuickOVRHand QuickVR.InputManagerOVRHands::GetOVRhand(System.String) */, __this, L_4);
		V_1 = L_5;
		// if (h.IsInitialized())
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_6 = V_1;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(16 /* System.Boolean QuickVR.QuickOVRHand::IsInitialized() */, L_6);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0114;
		}
	}
	{
		// if (button.Contains("Pinch"))
		String_t* L_9 = ___0_button;
		NullCheck(L_9);
		bool L_10;
		L_10 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_9, _stringLiteral7E85ECCB7093F5018C9F13499309750C0A65403D, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_00dd;
		}
	}
	{
		// if (button.Contains("Thumb")) return h.GetFingerIsPinching(OVRHand.HandFinger.Thumb);
		String_t* L_12 = ___0_button;
		NullCheck(L_12);
		bool L_13;
		L_13 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_12, _stringLiteral85854D21F273A756078468B1F896F112B0E08118, NULL);
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		// if (button.Contains("Thumb")) return h.GetFingerIsPinching(OVRHand.HandFinger.Thumb);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_15, 0, NULL);
		V_5 = L_16;
		goto IL_011a;
	}

IL_0067:
	{
		// if (button.Contains("Index")) return h.GetFingerIsPinching(OVRHand.HandFinger.Index);
		String_t* L_17 = ___0_button;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_17, _stringLiteral1C3B83E7128DFE5344885801249731AA7F849057, NULL);
		V_6 = L_18;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0086;
		}
	}
	{
		// if (button.Contains("Index")) return h.GetFingerIsPinching(OVRHand.HandFinger.Index);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_20, 1, NULL);
		V_5 = L_21;
		goto IL_011a;
	}

IL_0086:
	{
		// if (button.Contains("Middle")) return h.GetFingerIsPinching(OVRHand.HandFinger.Middle);
		String_t* L_22 = ___0_button;
		NullCheck(L_22);
		bool L_23;
		L_23 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_22, _stringLiteralE32F71F01B50192A097A0D355AA140AD6D6D0529, NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00a2;
		}
	}
	{
		// if (button.Contains("Middle")) return h.GetFingerIsPinching(OVRHand.HandFinger.Middle);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_25 = V_1;
		NullCheck(L_25);
		bool L_26;
		L_26 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_25, 2, NULL);
		V_5 = L_26;
		goto IL_011a;
	}

IL_00a2:
	{
		// if (button.Contains("Ring")) return h.GetFingerIsPinching(OVRHand.HandFinger.Ring);
		String_t* L_27 = ___0_button;
		NullCheck(L_27);
		bool L_28;
		L_28 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_27, _stringLiteral87B3F6E1AA5CDEBB5C0505DB4D4C8535C5A009B3, NULL);
		V_8 = L_28;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00be;
		}
	}
	{
		// if (button.Contains("Ring")) return h.GetFingerIsPinching(OVRHand.HandFinger.Ring);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_30 = V_1;
		NullCheck(L_30);
		bool L_31;
		L_31 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_30, 3, NULL);
		V_5 = L_31;
		goto IL_011a;
	}

IL_00be:
	{
		// if (button.Contains("Little")) return h.GetFingerIsPinching(OVRHand.HandFinger.Pinky);
		String_t* L_32 = ___0_button;
		NullCheck(L_32);
		bool L_33;
		L_33 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_32, _stringLiteral05018F5B3265BF9AB0916448F96F059F9230AA6C, NULL);
		V_9 = L_33;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_00da;
		}
	}
	{
		// if (button.Contains("Little")) return h.GetFingerIsPinching(OVRHand.HandFinger.Pinky);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_35 = V_1;
		NullCheck(L_35);
		bool L_36;
		L_36 = OVRHand_GetFingerIsPinching_mC0FAC991CEA8B0B07F6DBA92CB56BEA09D4726FD(L_35, 4, NULL);
		V_5 = L_36;
		goto IL_011a;
	}

IL_00da:
	{
		goto IL_0113;
	}

IL_00dd:
	{
		// else if (button.Contains("ThumbUp")) return h.IsThumbUp();
		String_t* L_37 = ___0_button;
		NullCheck(L_37);
		bool L_38;
		L_38 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_37, _stringLiteral504F34D2CBECF3DFC4F450CBDE74ECFDEFDCF3CA, NULL);
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_00f8;
		}
	}
	{
		// else if (button.Contains("ThumbUp")) return h.IsThumbUp();
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_40 = V_1;
		NullCheck(L_40);
		bool L_41;
		L_41 = VirtualFuncInvoker0< bool >::Invoke(23 /* System.Boolean QuickVR.QuickOVRHand::IsThumbUp() */, L_40);
		V_5 = L_41;
		goto IL_011a;
	}

IL_00f8:
	{
		// else if (button.Contains("ThumbDown")) return h.IsThumbDown();
		String_t* L_42 = ___0_button;
		NullCheck(L_42);
		bool L_43;
		L_43 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_42, _stringLiteral913AB5956D078918F002777CFE8B176BCAAF62C1, NULL);
		V_11 = L_43;
		bool L_44 = V_11;
		if (!L_44)
		{
			goto IL_0113;
		}
	}
	{
		// else if (button.Contains("ThumbDown")) return h.IsThumbDown();
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_45 = V_1;
		NullCheck(L_45);
		bool L_46;
		L_46 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean QuickVR.QuickOVRHand::IsThumbDown() */, L_45);
		V_5 = L_46;
		goto IL_011a;
	}

IL_0113:
	{
	}

IL_0114:
	{
	}

IL_0115:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_011a;
	}

IL_011a:
	{
		// }
		bool L_47 = V_5;
		return L_47;
	}
}
// System.Void QuickVR.InputManagerOVRHands::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManagerOVRHands__ctor_m8A114322ED5F2F710B1C88EDB0E6E2D67D9067BB (InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* __this, const RuntimeMethod* method) 
{
	{
		// protected QuickUnityVR _unityVR = null;
		__this->____unityVR_13 = (QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____unityVR_13), (void*)(QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A*)NULL);
		// protected QuickOVRHandsInitializer m_OVRHands = null;
		__this->___m_OVRHands_14 = (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OVRHands_14), (void*)(QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42*)NULL);
		BaseInputManager__ctor_m4180A8E3FAB2CF8F8B4916F22FF145A4F0EF70F9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuickVR.QuickOVRHand::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand_Start_m9F3174937D0E32DEC2E623E4AA4629C3437543EB (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_mA5BB432A288497354D7D408B6290A0724543AFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisOVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76_m8D2C09BF01B9B66AA3479FB7D8D721B6DE1C7345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisOVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C_mC89FB6A4F93158441F2C226109607456A829EC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m93D6077164DF76139D9D2BC58A58489158C20E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mC39BCB1F818F75102D1630303645399257C0A546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E7B68BDBDE290C8A6962666BCDC943B09F2C2B0);
		s_Il2CppMethodInitialized = true;
	}
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* G_B2_0 = NULL;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B2_1 = NULL;
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* G_B1_0 = NULL;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* G_B3_1 = NULL;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B3_2 = NULL;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B5_0 = NULL;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B6_1 = NULL;
	{
		// _skeleton = transform.GetOrCreateComponent<OVRSkeleton>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_1;
		L_1 = QuickUtils_GetOrCreateComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m93D6077164DF76139D9D2BC58A58489158C20E93(L_0, QuickUtils_GetOrCreateComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m93D6077164DF76139D9D2BC58A58489158C20E93_RuntimeMethod_var);
		__this->____skeleton_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____skeleton_17), (void*)L_1);
		// transform.GetOrCreateComponent<OVRMesh>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		OVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C* L_3;
		L_3 = QuickUtils_GetOrCreateComponent_TisOVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C_mC89FB6A4F93158441F2C226109607456A829EC45(L_2, QuickUtils_GetOrCreateComponent_TisOVRMesh_t756948B40B5EB9969B164170047E3FAF57DBAE5C_mC89FB6A4F93158441F2C226109607456A829EC45_RuntimeMethod_var);
		// transform.GetOrCreateComponent<OVRMeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		OVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76* L_5;
		L_5 = QuickUtils_GetOrCreateComponent_TisOVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76_m8D2C09BF01B9B66AA3479FB7D8D721B6DE1C7345(L_4, QuickUtils_GetOrCreateComponent_TisOVRMeshRenderer_t23CDF8B7FB77C9DE7FE7EE9148DC8589B2FD1A76_m8D2C09BF01B9B66AA3479FB7D8D721B6DE1C7345_RuntimeMethod_var);
		// _renderer = transform.GetOrCreateComponent<SkinnedMeshRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_7;
		L_7 = QuickUtils_GetOrCreateComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mC39BCB1F818F75102D1630303645399257C0A546(L_6, QuickUtils_GetOrCreateComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mC39BCB1F818F75102D1630303645399257C0A546_RuntimeMethod_var);
		__this->____renderer_18 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_18), (void*)L_7);
		// _renderer.material = Resources.Load<Material>("Materials/QuickOVRHandMaterial");
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_8 = __this->____renderer_18;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(_stringLiteral9E7B68BDBDE290C8A6962666BCDC943B09F2C2B0, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		NullCheck(L_8);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_8, L_9, NULL);
		// _playArea = GetComponentInParent<QuickVRPlayArea>();
		QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* L_10;
		L_10 = Component_GetComponentInParent_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_mA5BB432A288497354D7D408B6290A0724543AFE4(__this, Component_GetComponentInParent_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_mA5BB432A288497354D7D408B6290A0724543AFE4_RuntimeMethod_var);
		__this->____playArea_23 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playArea_23), (void*)L_10);
		// _vrNodeHand = _playArea.GetVRNode(IsLeft() ? HumanBodyBones.LeftHand : HumanBodyBones.RightHand);
		QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* L_11 = __this->____playArea_23;
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(26 /* System.Boolean QuickVR.QuickOVRHand::IsLeft() */, __this);
		G_B1_0 = L_11;
		G_B1_1 = __this;
		if (L_12)
		{
			G_B2_0 = L_11;
			G_B2_1 = __this;
			goto IL_0070;
		}
	}
	{
		G_B3_0 = ((int32_t)18);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0072;
	}

IL_0070:
	{
		G_B3_0 = ((int32_t)17);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0072:
	{
		NullCheck(G_B3_1);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_13;
		L_13 = VirtualFuncInvoker1< QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904*, int32_t >::Invoke(11 /* QuickVR.QuickVRNode QuickVR.QuickVRPlayArea::GetVRNode(UnityEngine.HumanBodyBones) */, G_B3_1, G_B3_0);
		NullCheck(G_B3_2);
		G_B3_2->____vrNodeHand_25 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_2->____vrNodeHand_25), (void*)L_13);
		// _ovrNodeHand = IsLeft() ? OVRPlugin.Node.HandLeft : OVRPlugin.Node.HandRight;
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(26 /* System.Boolean QuickVR.QuickOVRHand::IsLeft() */, __this);
		G_B4_0 = __this;
		if (L_14)
		{
			G_B5_0 = __this;
			goto IL_0088;
		}
	}
	{
		G_B6_0 = 4;
		G_B6_1 = G_B4_0;
		goto IL_0089;
	}

IL_0088:
	{
		G_B6_0 = 3;
		G_B6_1 = G_B5_0;
	}

IL_0089:
	{
		NullCheck(G_B6_1);
		G_B6_1->____ovrNodeHand_28 = G_B6_0;
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHand::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand_OnEnable_mEDD50C83EE53C7FF3C25B4F0ACC615DEECB500F0 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnPostUpdateVRNodes += UpdateVRNodeTracked;
		QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* L_0 = (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4*)il2cpp_codegen_object_new(QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerAction__ctor_mA9D23CA7B64DB68B5CA46097BCCA1F4548136979(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		QuickVRManager_add_OnPostUpdateVRNodes_m0EFB4F52EFB3774ACCFC64AA98CA2D20DE98CA7E(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHand::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand_OnDisable_mF59F54A6B594D8CEE7FBAA1B5EB55561B16AED91 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnPostUpdateVRNodes -= UpdateVRNodeTracked;
		QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* L_0 = (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4*)il2cpp_codegen_object_new(QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerAction__ctor_mA9D23CA7B64DB68B5CA46097BCCA1F4548136979(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 28)), NULL);
		QuickVRManager_remove_OnPostUpdateVRNodes_m89CE06686D7282117025386A774B8B8C06155681(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHand::InitFingersData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand_InitFingersData_mBBD13F51A176055226E6EF0F9F958D2DB9E4184A (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1234B209C6A6C276306507810B158DAF03E3F629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickHumanTrait_t943725820B7935B6E75896CEF9A899C3A97591CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	{
		// Animator animator = QuickSingletonManager.GetInstance<QuickVRManager>().GetAnimatorSource();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* L_0;
		L_0 = QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A(QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = VirtualFuncInvoker0< Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* >::Invoke(10 /* UnityEngine.Animator QuickVR.QuickVRManager::GetAnimatorSource() */, L_0);
		V_0 = L_1;
		// QuickHumanFingers[] fingers = QuickHumanTrait.GetHumanFingers();
		il2cpp_codegen_runtime_class_init_inline(QuickHumanTrait_t943725820B7935B6E75896CEF9A899C3A97591CE_il2cpp_TypeInfo_var);
		QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* L_2;
		L_2 = QuickHumanTrait_GetHumanFingers_m675B2D31D99E9247E642BCF8B4CCC168B7E6FEFA(NULL);
		V_1 = L_2;
		// int numFingers = fingers.Length;
		QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* L_3 = V_1;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// _handFingerConfidence = new int[numFingers];
		int32_t L_4 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->____handFingerConfidence_24 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handFingerConfidence_24), (void*)L_5);
		// _vrNodeFingers = new QuickVRNode[numFingers * NUM_BONES_PER_FINGER];
		int32_t L_6 = V_2;
		QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4* L_7 = (QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4*)(QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4*)SZArrayNew(QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 4)));
		__this->____vrNodeFingers_26 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vrNodeFingers_26), (void*)L_7);
		// _tBoneFingers = new Transform[numFingers * NUM_BONES_PER_FINGER];
		int32_t L_8 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 4)));
		__this->____tBoneFingers_27 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tBoneFingers_27), (void*)L_9);
		// for (int i = 0; i < numFingers; i++)
		V_3 = 0;
		goto IL_00ba;
	}

IL_0042:
	{
		// _handFingerConfidence[i] = NUM_FRAMES_CONFIDENCE;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____handFingerConfidence_24;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)5);
		// List<QuickHumanBodyBones> fingerBones = QuickHumanTrait.GetBonesFromFinger(fingers[i], IsLeft());
		QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (int32_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(26 /* System.Boolean QuickVR.QuickOVRHand::IsLeft() */, __this);
		il2cpp_codegen_runtime_class_init_inline(QuickHumanTrait_t943725820B7935B6E75896CEF9A899C3A97591CE_il2cpp_TypeInfo_var);
		List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316* L_17;
		L_17 = QuickHumanTrait_GetBonesFromFinger_m4817A63E2D697DAF1E834FCA300E26FC827DA763(L_15, L_16, NULL);
		V_4 = L_17;
		// for (int j = 0; j < NUM_BONES_PER_FINGER; j++)
		V_5 = 0;
		goto IL_00aa;
	}

IL_0061:
	{
		// int fingerBoneID = (i * NUM_BONES_PER_FINGER) + j;
		int32_t L_18 = V_3;
		int32_t L_19 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, 4)), L_19));
		// Transform tBone = animator.GetBoneTransform(fingerBones[j]);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = V_0;
		List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316* L_21 = V_4;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23;
		L_23 = List_1_get_Item_m1234B209C6A6C276306507810B158DAF03E3F629(L_21, L_22, List_1_get_Item_m1234B209C6A6C276306507810B158DAF03E3F629_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(QuickHumanTrait_t943725820B7935B6E75896CEF9A899C3A97591CE_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = QuickHumanTrait_GetBoneTransform_m3BA220BB6C6F88C015F63C980416DD0AB45D994B(L_20, L_23, NULL);
		V_7 = L_24;
		// _vrNodeFingers[fingerBoneID] = _playArea.GetVRNode(fingerBones[j]);
		QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4* L_25 = __this->____vrNodeFingers_26;
		int32_t L_26 = V_6;
		QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* L_27 = __this->____playArea_23;
		List_1_t9B4D1F4B3BABDE96DCF8990B796A9366F7CED316* L_28 = V_4;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30;
		L_30 = List_1_get_Item_m1234B209C6A6C276306507810B158DAF03E3F629(L_28, L_29, List_1_get_Item_m1234B209C6A6C276306507810B158DAF03E3F629_RuntimeMethod_var);
		NullCheck(L_27);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_31;
		L_31 = VirtualFuncInvoker1< QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904*, int32_t >::Invoke(10 /* QuickVR.QuickVRNode QuickVR.QuickVRPlayArea::GetVRNode(QuickVR.QuickHumanBodyBones) */, L_27, L_30);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_31);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904*)L_31);
		// _tBoneFingers[fingerBoneID] = tBone;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->____tBoneFingers_27;
		int32_t L_33 = V_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_7;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_34);
		// for (int j = 0; j < NUM_BONES_PER_FINGER; j++)
		int32_t L_35 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00aa:
	{
		// for (int j = 0; j < NUM_BONES_PER_FINGER; j++)
		int32_t L_36 = V_5;
		V_8 = (bool)((((int32_t)L_36) < ((int32_t)4))? 1 : 0);
		bool L_37 = V_8;
		if (L_37)
		{
			goto IL_0061;
		}
	}
	{
		// for (int i = 0; i < numFingers; i++)
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00ba:
	{
		// for (int i = 0; i < numFingers; i++)
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		V_9 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_9;
		if (L_41)
		{
			goto IL_0042;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHand::CreatePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand_CreatePhysics_mD35B2A152345B2CB8C1BE8323D2F7B5F5C25B00A (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD47469842DD668DECFF0942597F7FB3303AECDD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m7E1D5314D2A967EE063C6FB876380AAC7D0C3EB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9265A4304CBAAD756094EBCEF6AC585F5BAAA6EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF830B1C2DD52546857C1D8AEB27D887C47B34E5B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_4 = NULL;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* V_9 = NULL;
	bool V_10 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// for (int f = 0; f < (int)OVRSkeleton.BoneId.Hand_End; f++)
		V_8 = 0;
		goto IL_002d;
	}

IL_0006:
	{
		// QuickOVRHandBonePhysics result = CreatePhysicsBone(f, BONE_RADIUS);
		int32_t L_0 = V_8;
		QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* L_1;
		L_1 = VirtualFuncInvoker2< QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526*, int32_t, float >::Invoke(15 /* QuickVR.QuickOVRHandBonePhysics QuickVR.QuickOVRHand::CreatePhysicsBone(System.Int32,System.Single) */, __this, L_0, (0.00749999983f));
		V_9 = L_1;
		// _handBonePhysics[f] = result;
		Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA* L_2 = __this->____handBonePhysics_21;
		int32_t L_3 = V_8;
		QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* L_4 = V_9;
		NullCheck(L_2);
		Dictionary_2_set_Item_mD47469842DD668DECFF0942597F7FB3303AECDD2(L_2, L_3, L_4, Dictionary_2_set_Item_mD47469842DD668DECFF0942597F7FB3303AECDD2_RuntimeMethod_var);
		// for (int f = 0; f < (int)OVRSkeleton.BoneId.Hand_End; f++)
		int32_t L_5 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002d:
	{
		// for (int f = 0; f < (int)OVRSkeleton.BoneId.Hand_End; f++)
		int32_t L_6 = V_8;
		V_10 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)24)))? 1 : 0);
		bool L_7 = V_10;
		if (L_7)
		{
			goto IL_0006;
		}
	}
	{
		// Vector3 p1 = GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Thumb1).position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, 3);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_0 = L_9;
		// Vector3 p2 = GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Index1).position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, 6);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_1 = L_11;
		// Vector3 p3 = GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky1).position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)16));
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_2 = L_13;
		// Vector3 p4 = GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky0).position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)15));
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		V_3 = L_15;
		// _handCollider = transform.CreateChild("__HandCollider__").GetOrCreateComponent<BoxCollider>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = QuickUtils_CreateChild_m0C5DD3E950843A8609469C9CE7B40FE7D41E48E1(L_16, _stringLiteralF830B1C2DD52546857C1D8AEB27D887C47B34E5B, (bool)1, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_18;
		L_18 = QuickUtils_GetOrCreateComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m7E1D5314D2A967EE063C6FB876380AAC7D0C3EB2(L_17, QuickUtils_GetOrCreateComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m7E1D5314D2A967EE063C6FB876380AAC7D0C3EB2_RuntimeMethod_var);
		__this->____handCollider_22 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handCollider_22), (void*)L_18);
		// MeshRenderer r = _handCollider.GetOrCreateComponent<MeshRenderer>();
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_19 = __this->____handCollider_22;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_20;
		L_20 = QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442(L_19, QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442_RuntimeMethod_var);
		V_4 = L_20;
		// r.material = Resources.Load<Material>("Materials/QuickDiffuseWhite");
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_21 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(_stringLiteral9265A4304CBAAD756094EBCEF6AC585F5BAAA6EB, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		NullCheck(L_21);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_21, L_22, NULL);
		// _handCollider.isTrigger = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_23 = __this->____handCollider_22;
		NullCheck(L_23);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_23, (bool)1, NULL);
		// _handCollider.transform.position = (p1 + p2 + p3 + p4) * 0.25f;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_24 = __this->____handCollider_22;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, (0.25f), NULL);
		NullCheck(L_25);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_33, NULL);
		// _handCollider.transform.LookAt(_handCollider.transform.position + (p2 - p3).normalized, transform.up);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_34 = __this->____handCollider_22;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_36 = __this->____handCollider_22;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_39, L_40, NULL);
		V_11 = L_41;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_11), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_42, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_44, NULL);
		NullCheck(L_35);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_35, L_43, L_45, NULL);
		// float sx = Vector3.Distance(p3, p4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_3;
		float L_48;
		L_48 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_46, L_47, NULL);
		V_5 = L_48;
		// float sz = Vector3.Distance(p2, p3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_2;
		float L_51;
		L_51 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_49, L_50, NULL);
		V_6 = L_51;
		// float sy = Vector3.Distance(p1, p2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_1;
		float L_54;
		L_54 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_52, L_53, NULL);
		V_7 = L_54;
		// _handCollider.transform.localScale = Vector3.Scale(new Vector3(sx, sy, sz), new Vector3(1.75f, 1.75f, 1.2f));
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_55 = __this->____handCollider_22;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		float L_57 = V_5;
		float L_58 = V_7;
		float L_59 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), L_57, L_58, L_59, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), (1.75f), (1.75f), (1.20000005f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline(L_60, L_61, NULL);
		NullCheck(L_56);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_56, L_62, NULL);
		// }
		return;
	}
}
// QuickVR.QuickOVRHandBonePhysics QuickVR.QuickOVRHand::CreatePhysicsBone(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* QuickOVRHand_CreatePhysicsBone_mD437048432758B26E7E4819607106DE7FC079AB2 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_boneID, float ___1_boneRadius, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisQuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526_mA00BC8E2E9A51CE437CFCA487B3A97430083F945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEFC98B66081D6B54F61C6EC64F95344D22767BF);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* V_1 = NULL;
	QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* V_2 = NULL;
	{
		// Transform tBone = GetOVRBoneTransform(boneID);
		int32_t L_0 = ___0_boneID;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(18 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(System.Int32) */, __this, L_0);
		V_0 = L_1;
		// QuickOVRHandBonePhysics result = tBone.CreateChild("__Physics__").GetOrCreateComponent<QuickOVRHandBonePhysics>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = QuickUtils_CreateChild_m0C5DD3E950843A8609469C9CE7B40FE7D41E48E1(L_2, _stringLiteralCEFC98B66081D6B54F61C6EC64F95344D22767BF, (bool)1, NULL);
		QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* L_4;
		L_4 = QuickUtils_GetOrCreateComponent_TisQuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526_mA00BC8E2E9A51CE437CFCA487B3A97430083F945(L_3, QuickUtils_GetOrCreateComponent_TisQuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526_mA00BC8E2E9A51CE437CFCA487B3A97430083F945_RuntimeMethod_var);
		V_1 = L_4;
		// result.SetRadius(boneRadius);
		QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* L_5 = V_1;
		float L_6 = ___1_boneRadius;
		NullCheck(L_5);
		VirtualActionInvoker1< float >::Invoke(5 /* System.Void QuickVR.QuickOVRHandBonePhysics::SetRadius(System.Single) */, L_5, L_6);
		// return result;
		QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* L_7 = V_1;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* L_8 = V_2;
		return L_8;
	}
}
// System.Boolean QuickVR.QuickOVRHand::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_IsInitialized_m33F14DBB8812F2263AB72FD2E2EC006253DEFE61 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _skeleton.IsInitialized;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_0 = __this->____skeleton_17;
		NullCheck(L_0);
		bool L_1;
		L_1 = OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* QuickOVRHand_GetOVRBoneTransform_m2AA0508AFB97093C3B744E1AF5AB28D1F884F60E (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_boneID, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// return GetOVRBoneTransform((int)boneID);
		int32_t L_0 = ___0_boneID;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(18 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(System.Int32) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* QuickOVRHand_GetOVRBoneTransform_m6785EC59AE5D61DADD11186977CE0F48C8B1D904 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_boneID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_0 = NULL;
	{
		// return IsInitialized()? _skeleton.Bones[boneID].Transform : null;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(16 /* System.Boolean QuickVR.QuickOVRHand::IsInitialized() */, __this);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)(NULL));
		goto IL_0022;
	}

IL_000c:
	{
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_1 = __this->____skeleton_17;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_1, NULL);
		int32_t L_3 = ___0_boneID;
		NullCheck(L_2);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_4;
		L_4 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_2, L_3);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0022:
	{
		V_0 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRHand/HandFinger,QuickVR.QuickOVRHand/FingerPhalange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* QuickOVRHand_GetOVRBoneTransform_mA918429B99B7ECD6B7E162E7E93212D526515774 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_fingerID, int32_t ___1_phalangeID, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	{
		// if (fingerID == HandFinger.Index)
		int32_t L_0 = ___0_fingerID;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Index1);
		int32_t L_2 = ___1_phalangeID;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Index1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, 6);
		V_2 = L_4;
		goto IL_016b;
	}

IL_001f:
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Index2);
		int32_t L_5 = ___1_phalangeID;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Index2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, 7);
		V_2 = L_7;
		goto IL_016b;
	}

IL_0034:
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Index3);
		int32_t L_8 = ___1_phalangeID;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Index3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, 8);
		V_2 = L_10;
		goto IL_016b;
	}

IL_004b:
	{
		// return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_IndexTip);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)20));
		V_2 = L_11;
		goto IL_016b;
	}

IL_0059:
	{
		// if (fingerID == HandFinger.Middle)
		int32_t L_12 = ___0_fingerID;
		V_5 = (bool)((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Middle1);
		int32_t L_14 = ___1_phalangeID;
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Middle1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)9));
		V_2 = L_16;
		goto IL_016b;
	}

IL_007c:
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Middle2);
		int32_t L_17 = ___1_phalangeID;
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)1))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0094;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Middle2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)10));
		V_2 = L_19;
		goto IL_016b;
	}

IL_0094:
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Middle3);
		int32_t L_20 = ___1_phalangeID;
		V_8 = (bool)((((int32_t)L_20) == ((int32_t)2))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Middle3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)11));
		V_2 = L_22;
		goto IL_016b;
	}

IL_00ac:
	{
		// return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_MiddleTip);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)21));
		V_2 = L_23;
		goto IL_016b;
	}

IL_00ba:
	{
		// if (fingerID == HandFinger.Ring)
		int32_t L_24 = ___0_fingerID;
		V_9 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_0112;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Ring1);
		int32_t L_26 = ___1_phalangeID;
		V_10 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_00dd;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Ring1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)12));
		V_2 = L_28;
		goto IL_016b;
	}

IL_00dd:
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Ring2);
		int32_t L_29 = ___1_phalangeID;
		V_11 = (bool)((((int32_t)L_29) == ((int32_t)1))? 1 : 0);
		bool L_30 = V_11;
		if (!L_30)
		{
			goto IL_00f2;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Ring2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)13));
		V_2 = L_31;
		goto IL_016b;
	}

IL_00f2:
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Ring3);
		int32_t L_32 = ___1_phalangeID;
		V_12 = (bool)((((int32_t)L_32) == ((int32_t)2))? 1 : 0);
		bool L_33 = V_12;
		if (!L_33)
		{
			goto IL_0107;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Ring3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)14));
		V_2 = L_34;
		goto IL_016b;
	}

IL_0107:
	{
		// return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_RingTip);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)22));
		V_2 = L_35;
		goto IL_016b;
	}

IL_0112:
	{
		// if (fingerID == HandFinger.Pinky)
		int32_t L_36 = ___0_fingerID;
		V_13 = (bool)((((int32_t)L_36) == ((int32_t)4))? 1 : 0);
		bool L_37 = V_13;
		if (!L_37)
		{
			goto IL_0167;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky1);
		int32_t L_38 = ___1_phalangeID;
		V_14 = (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_14;
		if (!L_39)
		{
			goto IL_0132;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Proximal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)16));
		V_2 = L_40;
		goto IL_016b;
	}

IL_0132:
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky2);
		int32_t L_41 = ___1_phalangeID;
		V_15 = (bool)((((int32_t)L_41) == ((int32_t)1))? 1 : 0);
		bool L_42 = V_15;
		if (!L_42)
		{
			goto IL_0147;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Intermediate) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)17));
		V_2 = L_43;
		goto IL_016b;
	}

IL_0147:
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky3);
		int32_t L_44 = ___1_phalangeID;
		V_16 = (bool)((((int32_t)L_44) == ((int32_t)2))? 1 : 0);
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		// if (phalangeID == FingerPhalange.Distal) return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Pinky3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)18));
		V_2 = L_46;
		goto IL_016b;
	}

IL_015c:
	{
		// return GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_PinkyTip);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)23));
		V_2 = L_47;
		goto IL_016b;
	}

IL_0167:
	{
		// return null;
		V_2 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		goto IL_016b;
	}

IL_016b:
	{
		// }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = V_2;
		return L_48;
	}
}
// OVRSkeleton/BoneId QuickVR.QuickOVRHand::GetHandBoneTip(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuickOVRHand_GetHandBoneTip_m57D90F7B3019DD9D4328887DC3055EA36E868DDB (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (finger == HandFinger.Thumb) return OVRSkeleton.BoneId.Hand_Thumb3;
		int32_t L_0 = ___0_finger;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (finger == HandFinger.Thumb) return OVRSkeleton.BoneId.Hand_Thumb3;
		V_1 = 5;
		goto IL_003a;
	}

IL_000d:
	{
		// if (finger == HandFinger.Index) return OVRSkeleton.BoneId.Hand_Index3;
		int32_t L_2 = ___0_finger;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// if (finger == HandFinger.Index) return OVRSkeleton.BoneId.Hand_Index3;
		V_1 = 8;
		goto IL_003a;
	}

IL_0019:
	{
		// if (finger == HandFinger.Middle) return OVRSkeleton.BoneId.Hand_Middle3;
		int32_t L_4 = ___0_finger;
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)2))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (finger == HandFinger.Middle) return OVRSkeleton.BoneId.Hand_Middle3;
		V_1 = ((int32_t)11);
		goto IL_003a;
	}

IL_0026:
	{
		// if (finger == HandFinger.Ring) return OVRSkeleton.BoneId.Hand_Ring3;
		int32_t L_6 = ___0_finger;
		V_4 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// if (finger == HandFinger.Ring) return OVRSkeleton.BoneId.Hand_Ring3;
		V_1 = ((int32_t)14);
		goto IL_003a;
	}

IL_0035:
	{
		// return OVRSkeleton.BoneId.Hand_Pinky3;
		V_1 = ((int32_t)18);
		goto IL_003a;
	}

IL_003a:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.BoxCollider QuickVR.QuickOVRHand::GetHandCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* QuickOVRHand_GetHandCollider_mE391834E5F083643F385BB02745B822C4EFEF40D (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_0 = NULL;
	{
		// return _handCollider;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_0 = __this->____handCollider_22;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean QuickVR.QuickOVRHand::GetFingerIsTouchingHand(OVRHand/HandFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	{
		// Transform t1 = GetOVRBoneTransform(finger, FingerPhalange.Proximal);
		int32_t L_0 = ___0_finger;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = VirtualFuncInvoker2< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t, int32_t >::Invoke(19 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRHand/HandFinger,QuickVR.QuickOVRHand/FingerPhalange) */, __this, L_0, 0);
		V_0 = L_1;
		// Transform t2 = GetOVRBoneTransform(finger, FingerPhalange.Intermediate);
		int32_t L_2 = ___0_finger;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = VirtualFuncInvoker2< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t, int32_t >::Invoke(19 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRHand/HandFinger,QuickVR.QuickOVRHand/FingerPhalange) */, __this, L_2, 1);
		V_1 = L_3;
		// Transform t3 = GetOVRBoneTransform(finger, FingerPhalange.Distal);
		int32_t L_4 = ___0_finger;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = VirtualFuncInvoker2< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t, int32_t >::Invoke(19 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRHand/HandFinger,QuickVR.QuickOVRHand/FingerPhalange) */, __this, L_4, 2);
		V_2 = L_5;
		// Transform t4 = GetOVRBoneTransform(finger, FingerPhalange.Tip);
		int32_t L_6 = ___0_finger;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = VirtualFuncInvoker2< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t, int32_t >::Invoke(19 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRHand/HandFinger,QuickVR.QuickOVRHand/FingerPhalange) */, __this, L_6, 3);
		V_3 = L_7;
		// Vector3 u = t4.position - t3.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_3;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_2;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_4 = L_12;
		// Vector3 v = t2.position - t3.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_2;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_14, L_16, NULL);
		V_5 = L_17;
		// return Vector3.Angle(u, v) < 150;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
		float L_20;
		L_20 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_18, L_19, NULL);
		V_6 = (bool)((((float)L_20) < ((float)(150.0f)))? 1 : 0);
		goto IL_005f;
	}

IL_005f:
	{
		// }
		bool L_21 = V_6;
		return L_21;
	}
}
// System.Boolean QuickVR.QuickOVRHand::IsFist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_IsFist_mE1D922E3EF3D90D63DEEC66B7F3C762248C2D561 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		// return
		//     (
		//     GetFingerIsTouchingHand(HandFinger.Thumb) &&
		//     GetFingerIsTouchingHand(HandFinger.Index) &&
		//     GetFingerIsTouchingHand(HandFinger.Middle) &&
		//     GetFingerIsTouchingHand(HandFinger.Ring) &&
		//     GetFingerIsTouchingHand(HandFinger.Pinky)
		//     );
		bool L_0;
		L_0 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 0, NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1;
		L_1 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 1, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		bool L_2;
		L_2 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 2, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3;
		L_3 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 3, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		bool L_4;
		L_4 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 4, NULL);
		G_B6_0 = ((int32_t)(L_4));
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
	}

IL_002f:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean QuickVR.QuickOVRHand::IsThumbUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_IsThumbUp_m52CF39029209556AA87D2D7C259E143869A9C5E3 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return IsThumb(true);
		bool L_0;
		L_0 = VirtualFuncInvoker1< bool, bool >::Invoke(25 /* System.Boolean QuickVR.QuickOVRHand::IsThumb(System.Boolean) */, __this, (bool)1);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean QuickVR.QuickOVRHand::IsThumbDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_IsThumbDown_mC704C05B173B6A25B56DC051D1AB416698FA83DE (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return IsThumb(false);
		bool L_0;
		L_0 = VirtualFuncInvoker1< bool, bool >::Invoke(25 /* System.Boolean QuickVR.QuickOVRHand::IsThumb(System.Boolean) */, __this, (bool)0);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean QuickVR.QuickOVRHand::IsThumb(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_IsThumb_mFDF4B5CD447E99810DEB3C1A66E55EE283C835B2 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, bool ___0_isUp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	int32_t G_B12_0 = 0;
	{
		// if (
		//     GetFingerIsTouchingHand(HandFinger.Index) &&
		//     GetFingerIsTouchingHand(HandFinger.Middle) &&
		//     GetFingerIsTouchingHand(HandFinger.Ring) &&
		//     GetFingerIsTouchingHand(HandFinger.Pinky)
		//     )
		bool L_0;
		L_0 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 1, NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1;
		L_1 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 2, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		bool L_2;
		L_2 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 3, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		bool L_3;
		L_3 = QuickOVRHand_GetFingerIsTouchingHand_mAE1AEE5819F42CA7761E084515ACC370A7500E32(__this, 4, NULL);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0026;
	}

IL_0025:
	{
		G_B5_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B5_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0088;
		}
	}
	{
		// Vector3 thumbDir = (GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_ThumbTip).position - GetOVRBoneTransform(OVRSkeleton.BoneId.Hand_Thumb2).position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, ((int32_t)19));
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, 4);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_4 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_4), NULL);
		V_1 = L_10;
		// Vector3 globalUp = isUp ? Vector3.up : Vector3.down;
		bool L_11 = ___0_isUp;
		if (L_11)
		{
			goto IL_005d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		G_B9_0 = L_12;
		goto IL_0062;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		G_B9_0 = L_13;
	}

IL_0062:
	{
		V_2 = G_B9_0;
		// float d = Vector3.Dot(thumbDir, globalUp);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		float L_16;
		L_16 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_14, L_15, NULL);
		V_3 = L_16;
		// return (d > 0) && (Vector3.Angle(thumbDir, globalUp) < 45.0f);
		float L_17 = V_3;
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20;
		L_20 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_18, L_19, NULL);
		G_B12_0 = ((((float)L_20) < ((float)(45.0f)))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B12_0 = 0;
	}

IL_0084:
	{
		V_5 = (bool)G_B12_0;
		goto IL_008d;
	}

IL_0088:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_008d;
	}

IL_008d:
	{
		// }
		bool L_21 = V_5;
		return L_21;
	}
}
// System.Boolean QuickVR.QuickOVRHand::IsLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_IsLeft_mCA23F55B35C5CD8D7CDB77A5B6EFAE333249B86A (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _skeleton.GetSkeletonType() == OVRSkeleton.SkeletonType.HandLeft;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_0 = __this->____skeleton_17;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = OVRSkeleton_GetSkeletonType_m8CC2C1B6913553428216E3636C51C23B9874E5B8(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean QuickVR.QuickOVRHand::IsDataHighConfidenceFinger(QuickVR.QuickHumanFingers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuickOVRHand_IsDataHighConfidenceFinger_mF28C86E0319587CA8A0894698C13394371B40172 (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, int32_t ___0_finger, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return IsDataHighConfidence && _handFingerConfidence[(int)finger] >= NUM_FRAMES_CONFIDENCE;
		bool L_0;
		L_0 = OVRHand_get_IsDataHighConfidence_m02001F39FF11C4A20209D626C1C68B219F07FF07_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____handFingerConfidence_24;
		int32_t L_2 = ___0_finger;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		G_B3_0 = ((((int32_t)((((int32_t)L_4) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void QuickVR.QuickOVRHand::UpdateVRNodeTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand_UpdateVRNodeTracked_m6479522E7E306D605C9AAE9DD7B70D531115569D (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (QuickVRManager._handTrackingMode == QuickVRManager.HandTrackingMode.Hands)
		int32_t L_0;
		L_0 = QuickVRManager_get__handTrackingMode_m10A87F4A1914C04D89A62DF0875E402E8EE8C809_inline(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0154;
		}
	}
	{
		// Transform tObject = _vrNodeHand.GetTrackedObject().transform;
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_2 = __this->____vrNodeHand_25;
		NullCheck(L_2);
		QuickTrackedObject_t3848756E39E5AA7326462B44D3C5F7C957D23D30* L_3;
		L_3 = VirtualFuncInvoker0< QuickTrackedObject_t3848756E39E5AA7326462B44D3C5F7C957D23D30* >::Invoke(13 /* QuickVR.QuickTrackedObject QuickVR.QuickVRNode::GetTrackedObject() */, L_2);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		V_1 = L_4;
		// tObject.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// tObject.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_8, NULL);
		// bool isTrackedPos = OVRPlugin.GetNodePositionTracked(_ovrNodeHand);
		int32_t L_9 = __this->____ovrNodeHand_28;
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(L_9, NULL);
		V_2 = L_10;
		// if (isTrackedPos)
		bool L_11 = V_2;
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// _vrNodeHand.transform.localPosition = OVRPlugin.GetNodePose(_ovrNodeHand, OVRPlugin.Step.Render).ToOVRPose().position;
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_13 = __this->____vrNodeHand_25;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		int32_t L_15 = __this->____ovrNodeHand_28;
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_16;
		L_16 = OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(L_15, (-1), NULL);
		OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB L_17;
		L_17 = OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17.___position_0;
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_18, NULL);
	}

IL_0076:
	{
		// bool isTrackedRot = OVRPlugin.GetNodeOrientationTracked(_ovrNodeHand);
		int32_t L_19 = __this->____ovrNodeHand_28;
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = OVRPlugin_GetNodeOrientationTracked_m2F4F1AF81CEA7FB1BC6B8025E99A1D0E93CBDC9F(L_19, NULL);
		V_3 = L_20;
		// if (isTrackedRot)
		bool L_21 = V_3;
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_013a;
		}
	}
	{
		// _vrNodeHand.transform.localRotation = OVRPlugin.GetNodePose(_ovrNodeHand, OVRPlugin.Step.Render).ToOVRPose().orientation;
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_23 = __this->____vrNodeHand_25;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		int32_t L_25 = __this->____ovrNodeHand_28;
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 L_26;
		L_26 = OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(L_25, (-1), NULL);
		OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB L_27;
		L_27 = OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = L_27.___orientation_1;
		NullCheck(L_24);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_24, L_28, NULL);
		// if (IsLeft())
		bool L_29;
		L_29 = VirtualFuncInvoker0< bool >::Invoke(26 /* System.Boolean QuickVR.QuickOVRHand::IsLeft() */, __this);
		V_6 = L_29;
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0100;
		}
	}
	{
		// tObject.LookAt(tObject.transform.position + _vrNodeHand.transform.right, -_vrNodeHand.transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_1;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_35 = __this->____vrNodeHand_25;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_35, NULL);
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_37, NULL);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_39 = __this->____vrNodeHand_25;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_41, NULL);
		NullCheck(L_31);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_31, L_38, L_42, NULL);
		goto IL_0139;
	}

IL_0100:
	{
		// tObject.LookAt(tObject.transform.position - _vrNodeHand.transform.right, _vrNodeHand.transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_1;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_47 = __this->____vrNodeHand_25;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_49, NULL);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_51 = __this->____vrNodeHand_25;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_52, NULL);
		NullCheck(L_43);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_43, L_50, L_53, NULL);
	}

IL_0139:
	{
	}

IL_013a:
	{
		// _vrNodeHand.SetTracked(IsDataHighConfidence);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_54 = __this->____vrNodeHand_25;
		bool L_55;
		L_55 = OVRHand_get_IsDataHighConfidence_m02001F39FF11C4A20209D626C1C68B219F07FF07_inline(__this, NULL);
		NullCheck(L_54);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void QuickVR.QuickVRNode::SetTracked(System.Boolean) */, L_54, L_55);
		// UpdateVRNodeFingers();
		VirtualActionInvoker0::Invoke(29 /* System.Void QuickVR.QuickOVRHand::UpdateVRNodeFingers() */, __this);
	}

IL_0154:
	{
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHand::UpdateVRNodeFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand_UpdateVRNodeFingers_m22235E075C5B10317314086CB83AFE162703F1DE (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickHumanTrait_t943725820B7935B6E75896CEF9A899C3A97591CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B6_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B7_2 = NULL;
	{
		// if (IsInitialized())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(16 /* System.Boolean QuickVR.QuickOVRHand::IsInitialized() */, __this);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_015c;
		}
	}
	{
		// if (!_fingersDataInitialized)
		bool L_2 = __this->____fingersDataInitialized_20;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// InitFingersData();
		VirtualActionInvoker0::Invoke(13 /* System.Void QuickVR.QuickOVRHand::InitFingersData() */, __this);
		// _fingersDataInitialized = true;
		__this->____fingersDataInitialized_20 = (bool)1;
	}

IL_002c:
	{
		// foreach (QuickHumanFingers f in QuickHumanTrait.GetHumanFingers())
		il2cpp_codegen_runtime_class_init_inline(QuickHumanTrait_t943725820B7935B6E75896CEF9A899C3A97591CE_il2cpp_TypeInfo_var);
		QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* L_4;
		L_4 = QuickHumanTrait_GetHumanFingers_m675B2D31D99E9247E642BCF8B4CCC168B7E6FEFA(NULL);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0152;
	}

IL_003a:
	{
		// foreach (QuickHumanFingers f in QuickHumanTrait.GetHumanFingers())
		QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (int32_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// _handFingerConfidence[(int)f] = IsDataHighConfidence ? Mathf.Min(_handFingerConfidence[(int)f] + 1, NUM_FRAMES_CONFIDENCE) : 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____handFingerConfidence_24;
		int32_t L_10 = V_4;
		bool L_11;
		L_11 = OVRHand_get_IsDataHighConfidence_m02001F39FF11C4A20209D626C1C68B219F07FF07_inline(__this, NULL);
		G_B5_0 = L_10;
		G_B5_1 = L_9;
		if (L_11)
		{
			G_B6_0 = L_10;
			G_B6_1 = L_9;
			goto IL_0053;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0064;
	}

IL_0053:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____handFingerConfidence_24;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16;
		L_16 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_15, 1)), 5, NULL);
		G_B7_0 = L_16;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0064:
	{
		NullCheck(G_B7_2);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (int32_t)G_B7_0);
		// for (int i = 0; i < NUM_BONES_PER_FINGER; i++)
		V_5 = 0;
		goto IL_013f;
	}

IL_006d:
	{
		// int boneID = ((int)f) * NUM_BONES_PER_FINGER + i;
		int32_t L_17 = V_4;
		int32_t L_18 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, 4)), L_18));
		// QuickVRNode nFinger = _vrNodeFingers[boneID]; //_playArea.GetVRNode(fingerBones[i]);
		QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4* L_19 = __this->____vrNodeFingers_26;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_7 = L_22;
		// if (IsDataHighConfidenceFinger(f))
		int32_t L_23 = V_4;
		bool L_24;
		L_24 = VirtualFuncInvoker1< bool, int32_t >::Invoke(27 /* System.Boolean QuickVR.QuickOVRHand::IsDataHighConfidenceFinger(QuickVR.QuickHumanFingers) */, __this, L_23);
		V_8 = L_24;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_012d;
		}
	}
	{
		// OVRSkeleton.BoneId ovrBoneID = _ovrFingerBones[boneID];
		il2cpp_codegen_runtime_class_init_inline(QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_il2cpp_TypeInfo_var);
		BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478* L_26 = ((QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_StaticFields*)il2cpp_codegen_static_fields_for(QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_il2cpp_TypeInfo_var))->____ovrFingerBones_32;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (int32_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		// Transform ovrBone = GetOVRBoneTransform(ovrBoneID);
		int32_t L_30 = V_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = VirtualFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, int32_t >::Invoke(17 /* UnityEngine.Transform QuickVR.QuickOVRHand::GetOVRBoneTransform(OVRSkeleton/BoneId) */, __this, L_30);
		V_10 = L_31;
		// nFinger.transform.position = ovrBone.position;
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_32 = V_7;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_10;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		NullCheck(L_33);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_33, L_35, NULL);
		// nFinger.transform.rotation = ovrBone.rotation;
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_36 = V_7;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = V_10;
		NullCheck(L_38);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_38, NULL);
		NullCheck(L_37);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_37, L_39, NULL);
		// if (IsLeft())
		bool L_40;
		L_40 = VirtualFuncInvoker0< bool >::Invoke(26 /* System.Boolean QuickVR.QuickOVRHand::IsLeft() */, __this);
		V_11 = L_40;
		bool L_41 = V_11;
		if (!L_41)
		{
			goto IL_0110;
		}
	}
	{
		// nFinger.transform.Rotate(Vector3.right, 180, Space.Self);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_42 = V_7;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		NullCheck(L_43);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_43, L_44, (180.0f), 1, NULL);
		// nFinger.transform.Rotate(Vector3.up, -90, Space.Self);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_45 = V_7;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_46);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_46, L_47, (-90.0f), 1, NULL);
		goto IL_012a;
	}

IL_0110:
	{
		// nFinger.transform.Rotate(Vector3.up, 90, Space.Self);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_48 = V_7;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_49);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_49, L_50, (90.0f), 1, NULL);
	}

IL_012a:
	{
		goto IL_012f;
	}

IL_012d:
	{
	}

IL_012f:
	{
		// nFinger.SetTracked(true);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_51 = V_7;
		NullCheck(L_51);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void QuickVR.QuickVRNode::SetTracked(System.Boolean) */, L_51, (bool)1);
		// for (int i = 0; i < NUM_BONES_PER_FINGER; i++)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013f:
	{
		// for (int i = 0; i < NUM_BONES_PER_FINGER; i++)
		int32_t L_53 = V_5;
		V_12 = (bool)((((int32_t)L_53) < ((int32_t)4))? 1 : 0);
		bool L_54 = V_12;
		if (L_54)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_55 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0152:
	{
		// foreach (QuickHumanFingers f in QuickHumanTrait.GetHumanFingers())
		int32_t L_56 = V_3;
		QuickHumanFingersU5BU5D_tC5B3876B9E8A638CEE3BFAF52BC36C754BB3C87D* L_57 = V_2;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
	}

IL_015c:
	{
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand__ctor_m87DFE8E0803E10B5896A42663A1A2E4FB9C7185E (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD63B6FEAF0BF884EBAF33EAB37386010AC962141_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected OVRSkeleton _skeleton = null;
		__this->____skeleton_17 = (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____skeleton_17), (void*)(OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374*)NULL);
		// protected SkinnedMeshRenderer _renderer = null;
		__this->____renderer_18 = (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_18), (void*)(SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)NULL);
		// protected bool _physicsInitialized = false;
		__this->____physicsInitialized_19 = (bool)0;
		// protected bool _fingersDataInitialized = false;
		__this->____fingersDataInitialized_20 = (bool)0;
		// protected Dictionary<int, QuickOVRHandBonePhysics> _handBonePhysics = new Dictionary<int, QuickOVRHandBonePhysics>();
		Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA* L_0 = (Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA*)il2cpp_codegen_object_new(Dictionary_2_tB5063A04514147C8547AA6640785373326E2E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD63B6FEAF0BF884EBAF33EAB37386010AC962141(L_0, Dictionary_2__ctor_mD63B6FEAF0BF884EBAF33EAB37386010AC962141_RuntimeMethod_var);
		__this->____handBonePhysics_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handBonePhysics_21), (void*)L_0);
		// protected BoxCollider _handCollider = null;
		__this->____handCollider_22 = (BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handCollider_22), (void*)(BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)NULL);
		// protected QuickVRPlayArea _playArea = null;
		__this->____playArea_23 = (QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____playArea_23), (void*)(QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28*)NULL);
		// protected int[] _handFingerConfidence = null;           //The confidence of the finger
		__this->____handFingerConfidence_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____handFingerConfidence_24), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		// protected QuickVRNode _vrNodeHand = null;
		__this->____vrNodeHand_25 = (QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vrNodeHand_25), (void*)(QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904*)NULL);
		// protected QuickVRNode[] _vrNodeFingers = null;
		__this->____vrNodeFingers_26 = (QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vrNodeFingers_26), (void*)(QuickVRNodeU5BU5D_tE04CF02EE1515113F0266E38BB95C5793A0568F4*)NULL);
		// protected Transform[] _tBoneFingers = null;
		__this->____tBoneFingers_27 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tBoneFingers_27), (void*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)NULL);
		// protected OVRPlugin.Node _ovrNodeHand = OVRPlugin.Node.None;
		__this->____ovrNodeHand_28 = (-1);
		OVRHand__ctor_m2AE1AFA461194C0E08A763D33C8E6CA1A8F0A42E(__this, NULL);
		return;
	}
}
// System.Void QuickVR.QuickOVRHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHand__cctor_m9CB175ED8A04254F04DE080FBF3E7345FB75AEE6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tAB17D8141B1443D487B2D49915367564FAB2237C____B9650E8EE65338EC33D74865E7E202594485EE812011505936AEB8C906D5CE2E_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static OVRSkeleton.BoneId[] _ovrFingerBones = new OVRSkeleton.BoneId[]
		// {
		//     OVRSkeleton.BoneId.Hand_Thumb1,
		//     OVRSkeleton.BoneId.Hand_Thumb2,
		//     OVRSkeleton.BoneId.Hand_Thumb3,
		//     OVRSkeleton.BoneId.Hand_ThumbTip,
		// 
		//     OVRSkeleton.BoneId.Hand_Index1,
		//     OVRSkeleton.BoneId.Hand_Index2,
		//     OVRSkeleton.BoneId.Hand_Index3,
		//     OVRSkeleton.BoneId.Hand_IndexTip,
		// 
		//     OVRSkeleton.BoneId.Hand_Middle1,
		//     OVRSkeleton.BoneId.Hand_Middle2,
		//     OVRSkeleton.BoneId.Hand_Middle3,
		//     OVRSkeleton.BoneId.Hand_MiddleTip,
		// 
		//     OVRSkeleton.BoneId.Hand_Ring1,
		//     OVRSkeleton.BoneId.Hand_Ring2,
		//     OVRSkeleton.BoneId.Hand_Ring3,
		//     OVRSkeleton.BoneId.Hand_RingTip,
		// 
		//     OVRSkeleton.BoneId.Hand_Pinky1,
		//     OVRSkeleton.BoneId.Hand_Pinky2,
		//     OVRSkeleton.BoneId.Hand_Pinky3,
		//     OVRSkeleton.BoneId.Hand_PinkyTip,
		// };
		BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478* L_0 = (BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478*)(BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478*)SZArrayNew(BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		BoneIdU5BU5D_tDA59C6B3F2C79E751AAA54B8565A1EFF583E7478* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tAB17D8141B1443D487B2D49915367564FAB2237C____B9650E8EE65338EC33D74865E7E202594485EE812011505936AEB8C906D5CE2E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_StaticFields*)il2cpp_codegen_static_fields_for(QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_il2cpp_TypeInfo_var))->____ovrFingerBones_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_StaticFields*)il2cpp_codegen_static_fields_for(QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_il2cpp_TypeInfo_var))->____ovrFingerBones_32), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuickVR.QuickOVRHandBonePhysics::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandBonePhysics_Awake_mAAD40A46C3F42B59E06BA3FF8D865E8E8B296DBA (QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA67CA68148F051290F0F3993531E93A91017A1BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDCCD4242042582B557A0F288E79DB6B9A50C7E7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m0FC0EEA3D55DA1D7F9998D754F3874AAF916E537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mB4AEAA36AA03BFACB1D70FFEFA7316E5B10A864D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D66F876998498F1F38A2A71730D8F682E1F34D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38248F9FA838C0166207D9F28C5D3A13DF3D8583);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ovrHandsInitializer = QuickSingletonManager.GetInstance<QuickOVRHandsInitializer>();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_0;
		L_0 = QuickSingletonManager_GetInstance_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA67CA68148F051290F0F3993531E93A91017A1BB(QuickSingletonManager_GetInstance_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_mA67CA68148F051290F0F3993531E93A91017A1BB_RuntimeMethod_var);
		__this->____ovrHandsInitializer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrHandsInitializer_7), (void*)L_0);
		// _collider = transform.GetOrCreateComponent<SphereCollider>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_2;
		L_2 = QuickUtils_GetOrCreateComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mB4AEAA36AA03BFACB1D70FFEFA7316E5B10A864D(L_1, QuickUtils_GetOrCreateComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_mB4AEAA36AA03BFACB1D70FFEFA7316E5B10A864D_RuntimeMethod_var);
		__this->____collider_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_4), (void*)L_2);
		// _collider.radius = 0.5f;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_3 = __this->____collider_4;
		NullCheck(L_3);
		SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF(L_3, (0.5f), NULL);
		// _collider.isTrigger = true;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_4 = __this->____collider_4;
		NullCheck(L_4);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_4, (bool)1, NULL);
		// _rigidBody = transform.GetOrCreateComponent<Rigidbody>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = QuickUtils_GetOrCreateComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m0FC0EEA3D55DA1D7F9998D754F3874AAF916E537(L_5, QuickUtils_GetOrCreateComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m0FC0EEA3D55DA1D7F9998D754F3874AAF916E537_RuntimeMethod_var);
		__this->____rigidBody_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidBody_5), (void*)L_6);
		// _rigidBody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->____rigidBody_5;
		NullCheck(L_7);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_7, (bool)1, NULL);
		// _debugger = transform.CreateChild("__Debugger__");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = QuickUtils_CreateChild_m0C5DD3E950843A8609469C9CE7B40FE7D41E48E1(L_8, _stringLiteral38248F9FA838C0166207D9F28C5D3A13DF3D8583, (bool)1, NULL);
		__this->____debugger_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debugger_6), (void*)L_9);
		// _debugger.GetOrCreateComponent<MeshRenderer>().material = Resources.Load<Material>("Materials/QuickDiffuseRed");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____debugger_6;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11;
		L_11 = QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442(L_10, QuickUtils_GetOrCreateComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m135E39186EE2710852CDF73A296F141A5E885442_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(_stringLiteral0D66F876998498F1F38A2A71730D8F682E1F34D0, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		NullCheck(L_11);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_11, L_12, NULL);
		// _debugger.GetOrCreateComponent<MeshFilter>().mesh = QuickUtils.GetUnityPrimitiveMesh(PrimitiveType.Sphere);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->____debugger_6;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_14;
		L_14 = QuickUtils_GetOrCreateComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDCCD4242042582B557A0F288E79DB6B9A50C7E7C(L_13, QuickUtils_GetOrCreateComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDCCD4242042582B557A0F288E79DB6B9A50C7E7C_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_15;
		L_15 = QuickUtils_GetUnityPrimitiveMesh_m1979A06474DB6C640E894DCC1D0BF843AA573351(0, NULL);
		NullCheck(L_14);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_14, L_15, NULL);
		// _debugger.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____debugger_6;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHandBonePhysics::SetRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandBonePhysics_SetRadius_m42B8969D110037D39039CA2938352C48C983F53D (QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* __this, float ___0_radius, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// _collider.radius = radius;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_0 = __this->____collider_4;
		float L_1 = ___0_radius;
		NullCheck(L_0);
		SphereCollider_set_radius_m6119FE18C6739B077AB17334B1B53984911017FF(L_0, L_1, NULL);
		// float sf = radius * 2.0f;
		float L_2 = ___0_radius;
		V_0 = ((float)il2cpp_codegen_multiply(L_2, (2.0f)));
		// _debugger.transform.localScale = new Vector3(sf, sf, sf);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____debugger_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		float L_5 = V_0;
		float L_6 = V_0;
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.SphereCollider QuickVR.QuickOVRHandBonePhysics::GetCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* QuickOVRHandBonePhysics_GetCollider_m3D4D81FC765C48A37F703386670D8D8A0C1AC738 (QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* __this, const RuntimeMethod* method) 
{
	SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* V_0 = NULL;
	{
		// return _collider;
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_0 = __this->____collider_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_1 = V_0;
		return L_1;
	}
}
// System.Void QuickVR.QuickOVRHandBonePhysics::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandBonePhysics_OnDrawGizmos_m72866E5227153C02596753D1A1659BD08C12E477 (QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_debugger.gameObject.activeSelf != _ovrHandsInitializer._debug)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____debugger_6;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_3 = __this->____ovrHandsInitializer_7;
		NullCheck(L_3);
		bool L_4 = L_3->____debug_4;
		V_0 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// _debugger.gameObject.SetActive(_ovrHandsInitializer._debug);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->____debugger_6;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_8 = __this->____ovrHandsInitializer_7;
		NullCheck(L_8);
		bool L_9 = L_8->____debug_4;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_9, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHandBonePhysics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandBonePhysics__ctor_m7355FDDC312CE549CCA7FFA10981835C7D6699E7 (QuickOVRHandBonePhysics_t9F37E2A8C12DD1B19F1244E2BDBC97A4277B7526* __this, const RuntimeMethod* method) 
{
	{
		// protected SphereCollider _collider = null;
		__this->____collider_4 = (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_4), (void*)(SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275*)NULL);
		// protected Rigidbody _rigidBody = null;
		__this->____rigidBody_5 = (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidBody_5), (void*)(Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL);
		// protected Transform _debugger = null;
		__this->____debugger_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debugger_6), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// protected QuickOVRHandsInitializer _ovrHandsInitializer = null;
		__this->____ovrHandsInitializer_7 = (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ovrHandsInitializer_7), (void*)(QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QuickVR.QuickUnityVR QuickVR.QuickOVRHandsInitializer::get__hTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* QuickOVRHandsInitializer_get__hTracking_m7D07581498437149940095E28056DBAE3CAE783F (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* V_1 = NULL;
	{
		// if (!m_hTracking)
		QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* L_0 = __this->___m_hTracking_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// m_hTracking = QuickSingletonManager.GetInstance<QuickVRManager>().GetAnimatorSource().GetComponent<QuickUnityVR>();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* L_3;
		L_3 = QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A(QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = VirtualFuncInvoker0< Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* >::Invoke(10 /* UnityEngine.Animator QuickVR.QuickVRManager::GetAnimatorSource() */, L_3);
		NullCheck(L_4);
		QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* L_5;
		L_5 = Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411(L_4, Component_GetComponent_TisQuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A_mED2FC0B5610DFBFCB04B8F8E036ED08AA50B7411_RuntimeMethod_var);
		__this->___m_hTracking_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_hTracking_7), (void*)L_5);
	}

IL_002a:
	{
		// return m_hTracking;
		QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* L_6 = __this->___m_hTracking_7;
		V_1 = L_6;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A* L_7 = V_1;
		return L_7;
	}
}
// System.Void QuickVR.QuickOVRHandsInitializer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandsInitializer_Init_m5A582DA9281667E7176D39FA85F7FFF3BC9BBC9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickOVRHandsInitializer_OnSourceAnimatorSet_m074FFC99AEC79DAD57D7FFA6E6120C15812FAFA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnSourceAnimatorSet += OnSourceAnimatorSet;
		QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* L_0 = (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637*)il2cpp_codegen_object_new(QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99(L_0, NULL, (intptr_t)((void*)QuickOVRHandsInitializer_OnSourceAnimatorSet_m074FFC99AEC79DAD57D7FFA6E6120C15812FAFA2_RuntimeMethod_var), NULL);
		QuickVRManager_add_OnSourceAnimatorSet_m66F5AD58CCCFCF56A8951DC3D7853DFFF621CC55(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHandsInitializer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandsInitializer_OnEnable_mFDD90E554BA1057C1A8C0F3434D3DEE5B2E1B39A (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnPreUpdateVRNodes += UpdateOVR;
		QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* L_0 = (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4*)il2cpp_codegen_object_new(QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerAction__ctor_mA9D23CA7B64DB68B5CA46097BCCA1F4548136979(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		QuickVRManager_add_OnPreUpdateVRNodes_m18C1A5110F1B0816F6276B204126AA45DB49A79D(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHandsInitializer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandsInitializer_OnDisable_m72914EA0CA989280AB7CEC01E2549EDBA4BF904F (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnPreUpdateVRNodes -= UpdateOVR;
		QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4* L_0 = (QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4*)il2cpp_codegen_object_new(QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerAction__ctor_mA9D23CA7B64DB68B5CA46097BCCA1F4548136979(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		QuickVRManager_remove_OnPreUpdateVRNodes_m045ACDDCB90A29DC046955D1CE67193625F78E7E(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHandsInitializer::OnSourceAnimatorSet(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandsInitializer_OnSourceAnimatorSet_m074FFC99AEC79DAD57D7FFA6E6120C15812FAFA2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_CreateDefaultImplementation_TisInputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B_m11B7315EFFDA61FEA361E023BD09DB71E1B12FDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisInputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5_m8914BA7B61E897BA5F366BFC1D7C84DFED17247A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_m09EC983817BFF432460CE0D9310FB68AFFA5F529_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.GetOrCreateComponent<QuickOVRHandsInitializer>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* L_1;
		L_1 = QuickUtils_GetOrCreateComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_m09EC983817BFF432460CE0D9310FB68AFFA5F529(L_0, QuickUtils_GetOrCreateComponent_TisQuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42_m09EC983817BFF432460CE0D9310FB68AFFA5F529_RuntimeMethod_var);
		// QuickSingletonManager.GetInstance<InputManager>().CreateDefaultImplementation<InputManagerOVRHands>();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5* L_2;
		L_2 = QuickSingletonManager_GetInstance_TisInputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5_m8914BA7B61E897BA5F366BFC1D7C84DFED17247A(QuickSingletonManager_GetInstance_TisInputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5_m8914BA7B61E897BA5F366BFC1D7C84DFED17247A_RuntimeMethod_var);
		NullCheck(L_2);
		InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* L_3;
		L_3 = GenericVirtualFuncInvoker0< InputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B* >::Invoke(InputManager_CreateDefaultImplementation_TisInputManagerOVRHands_tEE515A08844C3E30232DA537BF42BE04D12C103B_m11B7315EFFDA61FEA361E023BD09DB71E1B12FDE_RuntimeMethod_var, L_2);
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHandsInitializer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandsInitializer_Start_m3B54DA142BFC50D7E0911809C454D627A221DF0C (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_mB55E17F4CE1C5B664EC95828699BDC2E79C62CCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_m864964384BCCF53E5F90FCC5C40AA99E1226E7A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_m74E34C151194648931B02EBA4EDFC3B663AF2B79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3173A9743F3E2F36902E9C597439AFA586985B34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF176A522C7CA5404A97B1ECCB934C0440B783959);
		s_Il2CppMethodInitialized = true;
	}
	QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* V_0 = NULL;
	{
		// QuickVRPlayArea vrPlayArea = QuickSingletonManager.GetInstance<QuickVRPlayArea>();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* L_0;
		L_0 = QuickSingletonManager_GetInstance_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_m864964384BCCF53E5F90FCC5C40AA99E1226E7A5(QuickSingletonManager_GetInstance_TisQuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28_m864964384BCCF53E5F90FCC5C40AA99E1226E7A5_RuntimeMethod_var);
		V_0 = L_0;
		// _leftHand = Instantiate(Resources.Load<QuickOVRHand>("Prefabs/pf_QuickOVRHandLeft"), vrPlayArea.GetVRNode(HumanBodyBones.LeftHand).transform);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_1;
		L_1 = Resources_Load_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_m74E34C151194648931B02EBA4EDFC3B663AF2B79(_stringLiteral3173A9743F3E2F36902E9C597439AFA586985B34, Resources_Load_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_m74E34C151194648931B02EBA4EDFC3B663AF2B79_RuntimeMethod_var);
		QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* L_2 = V_0;
		NullCheck(L_2);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_3;
		L_3 = VirtualFuncInvoker1< QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904*, int32_t >::Invoke(11 /* QuickVR.QuickVRNode QuickVR.QuickVRPlayArea::GetVRNode(UnityEngine.HumanBodyBones) */, L_2, ((int32_t)17));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_5;
		L_5 = Object_Instantiate_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_mB55E17F4CE1C5B664EC95828699BDC2E79C62CCA(L_1, L_4, Object_Instantiate_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_mB55E17F4CE1C5B664EC95828699BDC2E79C62CCA_RuntimeMethod_var);
		__this->____leftHand_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftHand_5), (void*)L_5);
		// _leftHand.transform.ResetTransformation();
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_6 = __this->____leftHand_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		QuickUtils_ResetTransformation_mC08CCA638DDC3FDCA034EE7C2F261C81D3BE3EB3(L_7, NULL);
		// _rightHand = Instantiate(Resources.Load<QuickOVRHand>("Prefabs/pf_QuickOVRHandRight"), vrPlayArea.GetVRNode(HumanBodyBones.RightHand).transform);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_8;
		L_8 = Resources_Load_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_m74E34C151194648931B02EBA4EDFC3B663AF2B79(_stringLiteralF176A522C7CA5404A97B1ECCB934C0440B783959, Resources_Load_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_m74E34C151194648931B02EBA4EDFC3B663AF2B79_RuntimeMethod_var);
		QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28* L_9 = V_0;
		NullCheck(L_9);
		QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904* L_10;
		L_10 = VirtualFuncInvoker1< QuickVRNode_t48B4A504C3E933E2CF0F5A01CC6DEF0BF92B9904*, int32_t >::Invoke(11 /* QuickVR.QuickVRNode QuickVR.QuickVRPlayArea::GetVRNode(UnityEngine.HumanBodyBones) */, L_9, ((int32_t)18));
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_12;
		L_12 = Object_Instantiate_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_mB55E17F4CE1C5B664EC95828699BDC2E79C62CCA(L_8, L_11, Object_Instantiate_TisQuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208_mB55E17F4CE1C5B664EC95828699BDC2E79C62CCA_RuntimeMethod_var);
		__this->____rightHand_6 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightHand_6), (void*)L_12);
		// _rightHand.transform.ResetTransformation();
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_13 = __this->____rightHand_6;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		QuickUtils_ResetTransformation_mC08CCA638DDC3FDCA034EE7C2F261C81D3BE3EB3(L_14, NULL);
		// }
		return;
	}
}
// QuickVR.QuickOVRHand QuickVR.QuickOVRHandsInitializer::GetOVRHand(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* QuickOVRHandsInitializer_GetOVRHand_m126ED5848163CEB5E25392CCC5ADC056900E6C8B (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* __this, bool ___0_left, const RuntimeMethod* method) 
{
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* V_0 = NULL;
	QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* G_B3_0 = NULL;
	{
		// return left ? _leftHand : _rightHand;
		bool L_0 = ___0_left;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_1 = __this->____rightHand_6;
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_2 = __this->____leftHand_5;
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208* L_3 = V_0;
		return L_3;
	}
}
// System.Void QuickVR.QuickOVRHandsInitializer::UpdateOVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandsInitializer_UpdateOVR_m6906BBAF780D318A63426333DD1142C4CF8E6150 (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (OVRPlugin.GetHandTrackingEnabled())
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = OVRPlugin_GetHandTrackingEnabled_mA027BFA6D39F5D90DA4776E71A778513C13CDB05(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// QuickVRManager._handTrackingMode = QuickVRManager.HandTrackingMode.Hands;
		QuickVRManager_set__handTrackingMode_mFE47C69A109EECAED49555CE6C6B725434C03764_inline(1, NULL);
		// OVRInput.Update();
		il2cpp_codegen_runtime_class_init_inline(OVRInput_t759D9CC8F14D8539AD78A0375A2306C39D77100A_il2cpp_TypeInfo_var);
		OVRInput_Update_m46BEA0A1B8C6592A25FBA12F61D471770EC72076(NULL);
		goto IL_0024;
	}

IL_001b:
	{
		// QuickVRManager._handTrackingMode = QuickVRManager.HandTrackingMode.Controllers;
		QuickVRManager_set__handTrackingMode_mFE47C69A109EECAED49555CE6C6B725434C03764_inline(0, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRHandsInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRHandsInitializer__ctor_mED596EE905946D1B52E146ECC161BFB40FC06433 (QuickOVRHandsInitializer_tB88ADF91E068AE25E582252A47AAADA0A6BD1A42* __this, const RuntimeMethod* method) 
{
	{
		// public bool _debug = false;
		__this->____debug_4 = (bool)0;
		// protected QuickOVRHand _leftHand = null;
		__this->____leftHand_5 = (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftHand_5), (void*)(QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*)NULL);
		// protected QuickOVRHand _rightHand = null;
		__this->____rightHand_6 = (QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightHand_6), (void*)(QuickOVRHand_tCAC969BF38CF9AB4A5149C9286C55FECD6F1E208*)NULL);
		// protected QuickUnityVR m_hTracking = null;
		__this->___m_hTracking_7 = (QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_hTracking_7), (void*)(QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuickVR.QuickOVRInitializer::InitPermissions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRInitializer_InitPermissions_m217AC480E6A21EB4AA64AF70FE0A1A9DCE33108E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7CFC7467EDD19C10E4146415BACEAFEC5F2CE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFBC2C924E5DC9232A3732A59008339C044352A3);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (OVRPlugin.faceTrackingSupported)
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = OVRPlugin_get_faceTrackingSupported_m309FC12CACF9C70F552B0F3B96E554CF11F53387(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// UnityEngine.Android.Permission.RequestUserPermission(FaceTrackingPermission);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral4A7CFC7467EDD19C10E4146415BACEAFEC5F2CE9, NULL);
	}

IL_0017:
	{
		// if (OVRPlugin.eyeTrackingSupported)
		il2cpp_codegen_runtime_class_init_inline(OVRPlugin_t0BF53CAD10A7503BB132A303469F2E0A639E696B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = OVRPlugin_get_eyeTrackingSupported_m7192CA66A8AB4E4C9958C741256E29CB3C0DB17A(NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// UnityEngine.Android.Permission.RequestUserPermission(EyeTrackingPermission);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteralFFBC2C924E5DC9232A3732A59008339C044352A3, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRInitializer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRInitializer_Init_mED536062BFD32B1AAC116FC8F7CDE4C3FF5A55D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_mD54C604B88A664C7C4D817124CF11D4586970E92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m3DE43431705322E63B8F1115C4889C5FE5806BF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!GameObject.FindObjectOfType<OVRManager>())
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* L_0;
		L_0 = Object_FindObjectOfType_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_mD54C604B88A664C7C4D817124CF11D4586970E92(Object_FindObjectOfType_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_mD54C604B88A664C7C4D817124CF11D4586970E92_RuntimeMethod_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// QuickSingletonManager.GetInstance<QuickVRManager>().GetOrCreateComponent<OVRManager>();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* L_3;
		L_3 = QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A(QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		OVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4* L_4;
		L_4 = QuickUtils_GetOrCreateComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m3DE43431705322E63B8F1115C4889C5FE5806BF4(L_3, QuickUtils_GetOrCreateComponent_TisOVRManager_t21429E69CA88C5E9C6EE3AAB75EAFBE6E1B129D4_m3DE43431705322E63B8F1115C4889C5FE5806BF4_RuntimeMethod_var);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void QuickVR.QuickOVRInitializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickOVRInitializer__ctor_m8FD0C108A681A5B5F6D0372E496C7C32393E6602 (QuickOVRInitializer_t0FAD954F60CB6F306EAA0D5DF223AA7E22D354F0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QuickVRManager_get__handTrackingMode_m10A87F4A1914C04D89A62DF0875E402E8EE8C809_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HandTrackingMode _handTrackingMode { get; set; }
		int32_t L_0 = ((QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_StaticFields*)il2cpp_codegen_static_fields_for(QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_il2cpp_TypeInfo_var))->___U3C_handTrackingModeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		// public IList<OVRBone> Bones { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Transform { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTransformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRHand_get_IsDataHighConfidence_m02001F39FF11C4A20209D626C1C68B219F07FF07_inline (OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDataHighConfidence { get; private set; }
		bool L_0 = __this->___U3CIsDataHighConfidenceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QuickVRManager_set__handTrackingMode_mFE47C69A109EECAED49555CE6C6B725434C03764_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static HandTrackingMode _handTrackingMode { get; set; }
		int32_t L_0 = ___0_value;
		((QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_StaticFields*)il2cpp_codegen_static_fields_for(QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_il2cpp_TypeInfo_var))->___U3C_handTrackingModeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
