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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9;
// System.Collections.Generic.Dictionary`2<QuickVR.InteractorType,UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>
struct Dictionary_2_t16CBD2415905E9D12E05E51FDA2122085B552680;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,QuickVR.QuickAnimationCurve>
struct Dictionary_2_tA2F32D91F0E89A6EE7FAF34CBE132811E6009D63;
// System.Collections.Generic.Dictionary`2<QuickVR.QuickVRInteractionManager/DefaultLocomotionProvider,UnityEngine.XR.Interaction.Toolkit.LocomotionProvider>
struct Dictionary_2_t51476E782EAB443A6845B4BB509614A9B286C234;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<QuickVR.QuickAnimationPlayer>
struct HashSet_1_tA3D4D002C5FC2522F50FA75ABAF98B818CD73E1E;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F;
// System.Collections.Generic.List`1<QuickVR.AxisMapping>
struct List_1_t527AB95AEC4AC6F88D5947E95FF0405F97CDDDC1;
// System.Collections.Generic.List`1<QuickVR.ButtonMapping>
struct List_1_t185D7732C427D19DB8200C94F2F1C9EA7EEB8387;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<QuickVR.QuickAnimationKeyframe>
struct List_1_tB4DF269450B3F9D90E41DC591EEE156A66AE8CD9;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable>
struct List_1_tDBAFFAAB9984EB2B11366D9A886D10A4051A5CE1;
// System.Collections.Generic.Stack`1<QuickVR.QuickStageBase>
struct Stack_1_t75E832881EEF51972F692BEC65FAA29BC0DBD2C6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// QuickVR.BaseInputManager
struct BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// QuickVR.Samples.CharacterController
struct CharacterController_t81B1A3443C55AAA5205D84CF44D182ED65DBB22F;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Gun
struct Gun_tC94A5211767826EEB157A2311C715E83D4CFC903;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// QuickVR.InputManager
struct InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5;
// InputManagerBodyPose
struct InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// QuickVR.PerformanceFPS
struct PerformanceFPS_tFDBB71BEDE36BD7202F189C79C24D64970BC2ACE;
// QuickVR.QuickAnimation
struct QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5;
// QuickVR.QuickAnimationPlayer
struct QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7;
// QuickVR.QuickBaseGameManager
struct QuickBaseGameManager_t3E9DE43CE7A087D17FF3061A4BC4BD44FF9A5064;
// QuickVR.QuickCopyPoseBase
struct QuickCopyPoseBase_t269B0D75F10E4ABAADF00A6401D9C6ACB02B1E46;
// QuickVR.QuickCoroutineManager
struct QuickCoroutineManager_t93B680F0E97182220125E0D2900AC31C07384922;
// QuickVR.QuickInstructionsManager
struct QuickInstructionsManager_tED50EADFEEC2D6367A4FAC722358E6DF02C85A2A;
// QuickVR.QuickSceneManager
struct QuickSceneManager_tFE08F29EE2E6E69CBC91BF152982C1685CCA4ED5;
// QuickVR.QuickStageBase
struct QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C;
// QuickVR.QuickStageCondition
struct QuickStageCondition_t19A7BD27FF6F4AF2879B9E9517054516744FF522;
// QuickVR.QuickStageGroup
struct QuickStageGroup_tE50037E998B8B916C1530D36E4376C914F844E29;
// QuickVR.QuickUIButton
struct QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD;
// QuickVR.QuickUIInteractiveItem
struct QuickUIInteractiveItem_tA2E54DFDA334ECDB2F3D86959EDFC6021807CDF1;
// QuickVR.QuickUnityVR
struct QuickUnityVR_tD3F1F164B0550D50D3646E9CB49A12A8C460544A;
// QuickVR.QuickVRCameraController
struct QuickVRCameraController_t333174E6D06338041E26DA265475910423729ED4;
// QuickVR.QuickVRHandAnimator
struct QuickVRHandAnimator_t82E83C2D3D16839E63036FDE280741A73392212F;
// QuickVR.QuickVRInteractionManager
struct QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0;
// QuickVR.QuickVRInteractor
struct QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B;
// QuickVR.QuickVRInteractorHand
struct QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C;
// QuickVR.QuickVRManager
struct QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A;
// QuickVR.QuickVRPlayArea
struct QuickVRPlayArea_tB5259531EE836EE5CCA6D81DFDF3E2439F1F5C28;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// QuickVR.SampleInteraction.SampleInteractionStage
struct SampleInteractionStage_tCC1C5351FA6AB238293BE1604A1B853122C8E43C;
// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI
struct SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// QuickVR.Samples.Workflow.StageCheckIsCube
struct StageCheckIsCube_t85F1F4BFC95D168CE83A3048EA4432A0CF959D14;
// QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation
struct StageSampleRecordAnimation_t1E1D96EBC1C8CC162EBF75953A2078D6DC89B1F2;
// QuickVR.Samples.Workflow.StageSpawnCube
struct StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B;
// QuickVR.Samples.Workflow.StageSpawnSphere
struct StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// QuickVR.SampleInteraction.TestInteractionUI
struct TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5;
// QuickVR.SampleInteraction.TestLocomotion
struct TestLocomotion_t055E212D128475163A9443B32E460FBCF7802652;
// TestObjectSelected
struct TestObjectSelected_t4C3C43B751E210C09BBDCF58C744126FA829085E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// QuickVR.QuickStageBase/OnInstructionAction
struct OnInstructionAction_t86668493395BA11F1701A9F27F328967E8023F3A;
// QuickVR.QuickStageBase/OnStageAction
struct OnStageAction_tF148ABE7472CEDA8385A801E2BE1D9911A19CC6C;
// QuickVR.QuickUIInteractiveItem/ButtonAction
struct ButtonAction_t0FE295215AD0E0B75C57849ADF342FC358936231;
// QuickVR.QuickUIInteractiveItem/ItemAction
struct ItemAction_t7B81AD7BA82C20A21941C87B86F4E7ABB68AA2ED;
// QuickVR.QuickVRManager/QuickVRManagerAction
struct QuickVRManagerAction_t70A2BCAE51989EEBD0B01E2693E07C4F354AFDB4;
// QuickVR.QuickVRManager/QuickVRManagerActionAnimator
struct QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637;
// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32
struct U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B;
// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33
struct U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641;
// QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2
struct U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1;
// QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2
struct U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1;
// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29
struct U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE;
// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30
struct U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisCodes_t86E8CD51165B3E565039087D3AD61E1D74C9915E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonCodes_tDFC9F1C39FF566CB36DCA90B1E59F9116656DFF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputManagerVR_t8A9ED011D340908B9432A345A4C806A18EED56F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickAnimationUtils_tA5C76A765DDEF1D266083AA23EAA20F55AB4A4CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D66038BB0EBCA726A8CD9131AF88C6F4FD56295;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1D657DEA1FEA3931DC41B5E68D364A1630958B;
IL2CPP_EXTERN_C String_t* _stringLiteral65EF31E0739D9BE6EA1C1AE20338CFB110A6BFAF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9A25B524CB22B2E03291D7392189EFCD67D6663B;
IL2CPP_EXTERN_C String_t* _stringLiteralEA5DBB3DBB5AE9C54173C66B57A7933864609E12;
IL2CPP_EXTERN_C const RuntimeMethod* BaseInputManager_GetCodes_TisAxisCodes_t86E8CD51165B3E565039087D3AD61E1D74C9915E_mE5421E200234C316499BE26BE26A18315B49ED53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseInputManager_GetCodes_TisButtonCodes_tDFC9F1C39FF566CB36DCA90B1E59F9116656DFF4_mC1D4B0D3F1876CD03E7E0D449827BB3F0FF4B41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleRecordAnimationUI_ButtonPlayback_Down_m6B9ED14CECAAF9ABFCD8F20404789F6C692D7A7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SampleRecordAnimationUI_ButtonRecordStop_Down_m71B43B29D9694B1CAC35935AEDC52E47A94A371C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoUpdatePositionU3Ed__29_System_Collections_IEnumerator_Reset_mFF83275923A737442D230BCB55F2DE1F514A599D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoUpdatePositionU3Ed__32_System_Collections_IEnumerator_Reset_mB92A79537C27FDC72D7ABE82AC06ADF208D9AFED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoUpdateTargetForwardU3Ed__30_System_Collections_IEnumerator_Reset_mA919931F84A3357AE0A46149BBB762FD922A28A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoUpdateTargetForwardU3Ed__33_System_Collections_IEnumerator_Reset_m83C28FAD429F5938C5B4080DF025E236367C70D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_Reset_m31C8AA1D743BDA8E09CA04599549807530BA094F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_Reset_m920BDE6645BDD7FC8DE43BE3934C48BC6891A42A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t0C112E5CAA92B84246F32571AEE3CF07A67970A3 
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33
struct U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641  : public RuntimeObject
{
	// System.Int32 QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::<>4__this
	SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* ___U3CU3E4__this_2;
};

// QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2
struct U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1  : public RuntimeObject
{
	// System.Int32 QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuickVR.Samples.Workflow.StageSpawnCube QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::<>4__this
	StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B* ___U3CU3E4__this_2;
	// UnityEngine.GameObject QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::<cube>5__1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CcubeU3E5__1_3;
};

// QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2
struct U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1  : public RuntimeObject
{
	// System.Int32 QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuickVR.Samples.Workflow.StageSpawnSphere QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::<>4__this
	StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1* ___U3CU3E4__this_2;
	// UnityEngine.GameObject QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::<cube>5__1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CcubeU3E5__1_3;
};

// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30
struct U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3  : public RuntimeObject
{
	// System.Int32 QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuickVR.SampleInteraction.TestInteractionUI QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::<>4__this
	TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.HumanPose
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A 
{
	// UnityEngine.Vector3 UnityEngine.HumanPose::bodyPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bodyPosition_0;
	// UnityEngine.Quaternion UnityEngine.HumanPose::bodyRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___bodyRotation_1;
	// System.Single[] UnityEngine.HumanPose::muscles
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___muscles_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanPose
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bodyPosition_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___bodyRotation_1;
	Il2CppSafeArray/*NONE*/* ___muscles_2;
};
// Native definition for COM marshalling of UnityEngine.HumanPose
struct HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bodyPosition_0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___bodyRotation_1;
	Il2CppSafeArray/*NONE*/* ___muscles_2;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32
struct U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B  : public RuntimeObject
{
	// System.Int32 QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::<>4__this
	SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::<offset>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoffsetU3E5__1_3;
};

// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29
struct U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE  : public RuntimeObject
{
	// System.Int32 QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// QuickVR.SampleInteraction.TestInteractionUI QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::<>4__this
	TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::<offset>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CoffsetU3E5__1_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// QuickVR.QuickAnimation
struct QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5  : public RuntimeObject
{
	// System.Single QuickVR.QuickAnimation::_timeLength
	float ____timeLength_0;
	// System.Collections.Generic.Dictionary`2<System.String,QuickVR.QuickAnimationCurve> QuickVR.QuickAnimation::_curves
	Dictionary_2_tA2F32D91F0E89A6EE7FAF34CBE132811E6009D63* ____curves_1;
	// UnityEngine.Animator QuickVR.QuickAnimation::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_2;
	// UnityEngine.HumanPose QuickVR.QuickAnimation::_pose
	HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A ____pose_3;
	// System.Collections.Generic.List`1<QuickVR.QuickAnimationKeyframe> QuickVR.QuickAnimation::_keyFrames
	List_1_tB4DF269450B3F9D90E41DC591EEE156A66AE8CD9* ____keyFrames_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> QuickVR.QuickAnimation::_toCurveID
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ____toCurveID_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> QuickVR.QuickAnimation::_toCurveName
	Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* ____toCurveName_6;
	// System.Int32 QuickVR.QuickAnimation::_currentCurveID
	int32_t ____currentCurveID_7;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// QuickVR.QuickVRManager/QuickVRManagerActionAnimator
struct QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
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

// QuickVR.Samples.CharacterController
struct CharacterController_t81B1A3443C55AAA5205D84CF44D182ED65DBB22F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean QuickVR.Samples.CharacterController::_move
	bool ____move_4;
	// System.Single QuickVR.Samples.CharacterController::_maxLinearSpeed
	float ____maxLinearSpeed_5;
	// System.Single QuickVR.Samples.CharacterController::_maxAngularSpeed
	float ____maxAngularSpeed_6;
};

// Gun
struct Gun_tC94A5211767826EEB157A2311C715E83D4CFC903  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Gun::_speed
	float ____speed_4;
	// UnityEngine.GameObject Gun::_pfBullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pfBullet_5;
	// UnityEngine.Transform Gun::_barrel
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____barrel_6;
	// UnityEngine.AudioClip Gun::_audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____audioClip_7;
	// UnityEngine.AudioSource Gun::m_Auciosource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_Auciosource_8;
};

// QuickVR.QuickAnimationPlayer
struct QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QuickVR.QuickAnimation QuickVR.QuickAnimationPlayer::_playAnimationClip
	QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* ____playAnimationClip_4;
	// System.Boolean QuickVR.QuickAnimationPlayer::_playLoop
	bool ____playLoop_5;
	// QuickVR.QuickAnimEvaluateMethod QuickVR.QuickAnimationPlayer::_playMode
	int32_t ____playMode_6;
	// System.Int32 QuickVR.QuickAnimationPlayer::_recordFPS
	int32_t ____recordFPS_7;
	// System.Single QuickVR.QuickAnimationPlayer::_recordTimeFrame
	float ____recordTimeFrame_9;
	// System.Single QuickVR.QuickAnimationPlayer::_recordTimeStart
	float ____recordTimeStart_10;
	// System.Single QuickVR.QuickAnimationPlayer::_recordTimeLastFrame
	float ____recordTimeLastFrame_11;
	// System.Single QuickVR.QuickAnimationPlayer::_playTimeStart
	float ____playTimeStart_12;
	// System.Single QuickVR.QuickAnimationPlayer::_playTimeEnd
	float ____playTimeEnd_13;
	// System.Single QuickVR.QuickAnimationPlayer::_playTimeCurrent
	float ____playTimeCurrent_14;
	// System.Single QuickVR.QuickAnimationPlayer::_playTimePrev
	float ____playTimePrev_15;
	// UnityEngine.Animator QuickVR.QuickAnimationPlayer::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_16;
	// UnityEngine.HumanPose QuickVR.QuickAnimationPlayer::_humanPose
	HumanPose_t4FD3BF9D666DD3F1B7361BD77E5BFD46560DAB6A ____humanPose_17;
	// QuickVR.QuickAnimationPlayer/State QuickVR.QuickAnimationPlayer::_state
	int32_t ____state_18;
	// QuickVR.QuickAnimation QuickVR.QuickAnimationPlayer::_recordedAnimation
	QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* ____recordedAnimation_19;
};

// QuickVR.QuickStageBase
struct QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single QuickVR.QuickStageBase::_maxTimeOut
	float ____maxTimeOut_4;
	// System.Boolean QuickVR.QuickStageBase::_pressKeyToFinish
	bool ____pressKeyToFinish_5;
	// System.Boolean QuickVR.QuickStageBase::_avoidable
	bool ____avoidable_6;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> QuickVR.QuickStageBase::_instructionsSpanish
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ____instructionsSpanish_7;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> QuickVR.QuickStageBase::_instructionsEnglish
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ____instructionsEnglish_8;
	// UnityEngine.AudioSource QuickVR.QuickStageBase::_instructionsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____instructionsAudioSource_9;
	// System.Single QuickVR.QuickStageBase::_instructionsVolume
	float ____instructionsVolume_10;
	// System.Single QuickVR.QuickStageBase::_instructionsTimePause
	float ____instructionsTimePause_11;
	// QuickVR.QuickVRManager QuickVR.QuickStageBase::_vrManager
	QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* ____vrManager_12;
	// QuickVR.QuickVRInteractionManager QuickVR.QuickStageBase::_interactionManager
	QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* ____interactionManager_13;
	// QuickVR.QuickInstructionsManager QuickVR.QuickStageBase::_instructionsManager
	QuickInstructionsManager_tED50EADFEEC2D6367A4FAC722358E6DF02C85A2A* ____instructionsManager_14;
	// QuickVR.QuickSceneManager QuickVR.QuickStageBase::_sceneManager
	QuickSceneManager_tFE08F29EE2E6E69CBC91BF152982C1685CCA4ED5* ____sceneManager_15;
	// QuickVR.QuickBaseGameManager QuickVR.QuickStageBase::_gameManager
	QuickBaseGameManager_t3E9DE43CE7A087D17FF3061A4BC4BD44FF9A5064* ____gameManager_16;
	// System.Single QuickVR.QuickStageBase::_timeStart
	float ____timeStart_17;
	// QuickVR.QuickCoroutineManager QuickVR.QuickStageBase::_coManager
	QuickCoroutineManager_t93B680F0E97182220125E0D2900AC31C07384922* ____coManager_18;
	// System.Int32 QuickVR.QuickStageBase::_coSet
	int32_t ____coSet_19;
	// System.Boolean QuickVR.QuickStageBase::_finishing
	bool ____finishing_20;
	// QuickVR.QuickStageBase/OnStageAction QuickVR.QuickStageBase::OnInit
	OnStageAction_tF148ABE7472CEDA8385A801E2BE1D9911A19CC6C* ___OnInit_22;
	// QuickVR.QuickStageBase/OnStageAction QuickVR.QuickStageBase::OnFinish
	OnStageAction_tF148ABE7472CEDA8385A801E2BE1D9911A19CC6C* ___OnFinish_23;
	// QuickVR.QuickStageBase/OnInstructionAction QuickVR.QuickStageBase::OnInstructionPre
	OnInstructionAction_t86668493395BA11F1701A9F27F328967E8023F3A* ___OnInstructionPre_24;
	// QuickVR.QuickStageBase/OnInstructionAction QuickVR.QuickStageBase::OnInstructionPost
	OnInstructionAction_t86668493395BA11F1701A9F27F328967E8023F3A* ___OnInstructionPost_25;
};

// QuickVR.QuickUIInteractiveItem
struct QuickUIInteractiveItem_tA2E54DFDA334ECDB2F3D86959EDFC6021807CDF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String QuickVR.QuickUIInteractiveItem::_description
	String_t* ____description_4;
	// System.Boolean QuickVR.QuickUIInteractiveItem::_isOver
	bool ____isOver_5;
	// System.Boolean QuickVR.QuickUIInteractiveItem::_isDown
	bool ____isDown_6;
	// System.Single QuickVR.QuickUIInteractiveItem::_timeOver
	float ____timeOver_7;
	// UnityEngine.Coroutine QuickVR.QuickUIInteractiveItem::_coTimeOver
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coTimeOver_8;
	// System.Action QuickVR.QuickUIInteractiveItem::OnOver
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnOver_9;
	// System.Action QuickVR.QuickUIInteractiveItem::OnOut
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnOut_10;
	// System.Action QuickVR.QuickUIInteractiveItem::OnUp
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnUp_11;
	// System.Action QuickVR.QuickUIInteractiveItem::OnDown
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnDown_12;
};

// QuickVR.QuickVRInteractionManager
struct QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor QuickVR.QuickVRInteractionManager::_pfInteractorGrabDirect
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* ____pfInteractorGrabDirect_4;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor QuickVR.QuickVRInteractionManager::_pfInteractorGrabRay
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* ____pfInteractorGrabRay_5;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor QuickVR.QuickVRInteractionManager::_pfInteractorTeleportRay
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* ____pfInteractorTeleportRay_6;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor QuickVR.QuickVRInteractionManager::_pfInteractorUIRay
	XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E* ____pfInteractorUIRay_7;
	// QuickVR.QuickVRInteractor QuickVR.QuickVRInteractionManager::<_interactorHead>k__BackingField
	QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* ___U3C_interactorHeadU3Ek__BackingField_8;
	// QuickVR.QuickVRInteractorHand QuickVR.QuickVRInteractionManager::<_interactorHandLeft>k__BackingField
	QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* ___U3C_interactorHandLeftU3Ek__BackingField_9;
	// QuickVR.QuickVRInteractorHand QuickVR.QuickVRInteractionManager::<_interactorHandRight>k__BackingField
	QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* ___U3C_interactorHandRightU3Ek__BackingField_10;
	// QuickVR.QuickVRManager QuickVR.QuickVRInteractionManager::_vrManager
	QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* ____vrManager_11;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager QuickVR.QuickVRInteractionManager::_xrInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ____xrInteractionManager_12;
	// Unity.XR.CoreUtils.XROrigin QuickVR.QuickVRInteractionManager::_xrRig
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ____xrRig_13;
	// UnityEngine.CharacterController QuickVR.QuickVRInteractionManager::_characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ____characterController_14;
	// QuickVR.QuickVRHandAnimator QuickVR.QuickVRInteractionManager::_handAnimatorLeft
	QuickVRHandAnimator_t82E83C2D3D16839E63036FDE280741A73392212F* ____handAnimatorLeft_15;
	// QuickVR.QuickVRHandAnimator QuickVR.QuickVRInteractionManager::_handAnimatorRight
	QuickVRHandAnimator_t82E83C2D3D16839E63036FDE280741A73392212F* ____handAnimatorRight_16;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable> QuickVR.QuickVRInteractionManager::_grabInteractables
	List_1_tDBAFFAAB9984EB2B11366D9A886D10A4051A5CE1* ____grabInteractables_17;
	// System.Collections.Generic.Dictionary`2<QuickVR.QuickVRInteractionManager/DefaultLocomotionProvider,UnityEngine.XR.Interaction.Toolkit.LocomotionProvider> QuickVR.QuickVRInteractionManager::_locomotionProviders
	Dictionary_2_t51476E782EAB443A6845B4BB509614A9B286C234* ____locomotionProviders_18;
};

// QuickVR.QuickVRInteractor
struct QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.XRNode QuickVR.QuickVRInteractor::<_xrNode>k__BackingField
	int32_t ___U3C_xrNodeU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<QuickVR.InteractorType,UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor> QuickVR.QuickVRInteractor::_interactors
	Dictionary_2_t16CBD2415905E9D12E05E51FDA2122085B552680* ____interactors_5;
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

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI
struct SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_guiDistance
	float ____guiDistance_4;
	// System.Single QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_guiDeadAngle
	float ____guiDeadAngle_5;
	// QuickVR.QuickUIButton QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_buttonRecordStop
	QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* ____buttonRecordStop_6;
	// QuickVR.QuickUIButton QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_buttonPlayback
	QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* ____buttonPlayback_7;
	// QuickVR.QuickUIButton QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_buttonExportToAnim
	QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* ____buttonExportToAnim_8;
	// QuickVR.QuickUIButton QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_buttonExportToJSON
	QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* ____buttonExportToJSON_9;
	// QuickVR.QuickUIButton QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_buttonLoadFromJSON
	QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* ____buttonLoadFromJSON_10;
	// QuickVR.QuickAnimationPlayer QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_animationPlayerSrc
	QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* ____animationPlayerSrc_11;
	// QuickVR.QuickAnimationPlayer QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_animationPlayerDst
	QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* ____animationPlayerDst_12;
	// QuickVR.QuickVRInteractionManager QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_interactionManager
	QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* ____interactionManager_13;
	// QuickVR.QuickVRInteractor QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_interactorLeftHand
	QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* ____interactorLeftHand_14;
	// QuickVR.QuickVRInteractor QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_interactorRightHand
	QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* ____interactorRightHand_15;
	// System.Boolean QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_show
	bool ____show_16;
	// UnityEngine.CanvasGroup QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ____canvasGroup_17;
	// UnityEngine.Coroutine QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_coUpdatePosition
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coUpdatePosition_18;
	// UnityEngine.Animator QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::m_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Animator_19;
	// UnityEngine.Coroutine QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::_coUpdateTargetFwd
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coUpdateTargetFwd_20;
};

// QuickVR.SampleInteraction.TestInteractionUI
struct TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single QuickVR.SampleInteraction.TestInteractionUI::_guiDistance
	float ____guiDistance_4;
	// System.Single QuickVR.SampleInteraction.TestInteractionUI::_guiDeadAngle
	float ____guiDeadAngle_5;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleDirectMove
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleDirectMove_6;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleDirectTurn
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleDirectTurn_7;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleContinuousMove
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleContinuousMove_8;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleContinuousTurn
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleContinuousTurn_9;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleTeleportLeftHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleTeleportLeftHand_10;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleTeleportRightHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleTeleportRightHand_11;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleGrabDirectLeftHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleGrabDirectLeftHand_12;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleGrabDirectRightHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleGrabDirectRightHand_13;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleGrabRayLeftHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleGrabRayLeftHand_14;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleGrabRayRightHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleGrabRayRightHand_15;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleUIRayLeftHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleUIRayLeftHand_16;
	// UnityEngine.UI.Toggle QuickVR.SampleInteraction.TestInteractionUI::_toggleUIRayRightHand
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____toggleUIRayRightHand_17;
	// QuickVR.QuickVRInteractionManager QuickVR.SampleInteraction.TestInteractionUI::_interactionManager
	QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* ____interactionManager_18;
	// QuickVR.QuickVRInteractor QuickVR.SampleInteraction.TestInteractionUI::_interactorLeftHand
	QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* ____interactorLeftHand_19;
	// QuickVR.QuickVRInteractor QuickVR.SampleInteraction.TestInteractionUI::_interactorRightHand
	QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* ____interactorRightHand_20;
	// System.Boolean QuickVR.SampleInteraction.TestInteractionUI::_show
	bool ____show_21;
	// UnityEngine.CanvasGroup QuickVR.SampleInteraction.TestInteractionUI::_canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ____canvasGroup_22;
	// UnityEngine.Coroutine QuickVR.SampleInteraction.TestInteractionUI::_coUpdatePosition
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coUpdatePosition_23;
	// UnityEngine.Animator QuickVR.SampleInteraction.TestInteractionUI::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_24;
	// UnityEngine.Coroutine QuickVR.SampleInteraction.TestInteractionUI::_coUpdateTargetFwd
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____coUpdateTargetFwd_25;
};

// QuickVR.SampleInteraction.TestLocomotion
struct TestLocomotion_t055E212D128475163A9443B32E460FBCF7802652  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator QuickVR.SampleInteraction.TestLocomotion::_targetAnimator1
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____targetAnimator1_4;
	// UnityEngine.Animator QuickVR.SampleInteraction.TestLocomotion::_targetAnimator2
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____targetAnimator2_5;
};

// TestObjectSelected
struct TestObjectSelected_t4C3C43B751E210C09BBDCF58C744126FA829085E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TestObjectSelected::_currentSelection
	int32_t ____currentSelection_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// InputManagerBodyPose
struct InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927  : public BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15
{
	// UnityEngine.Animator InputManagerBodyPose::_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ____animator_13;
	// System.Single InputManagerBodyPose::_deadLeanAngle
	float ____deadLeanAngle_14;
	// System.Single InputManagerBodyPose::_maxLeanAngle
	float ____maxLeanAngle_15;
	// System.Single InputManagerBodyPose::_tPoseThresholdAngle
	float ____tPoseThresholdAngle_16;
};

// QuickVR.QuickStageCondition
struct QuickStageCondition_t19A7BD27FF6F4AF2879B9E9517054516744FF522  : public QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C
{
	// QuickVR.QuickStageGroup QuickVR.QuickStageCondition::_ifGroup
	QuickStageGroup_tE50037E998B8B916C1530D36E4376C914F844E29* ____ifGroup_26;
	// QuickVR.QuickStageGroup QuickVR.QuickStageCondition::_elseGroup
	QuickStageGroup_tE50037E998B8B916C1530D36E4376C914F844E29* ____elseGroup_27;
};

// QuickVR.QuickUIButton
struct QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD  : public QuickUIInteractiveItem_tA2E54DFDA334ECDB2F3D86959EDFC6021807CDF1
{
	// UnityEngine.Material QuickVR.QuickUIButton::_buttonBGMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ____buttonBGMaterial_15;
	// UnityEngine.Color QuickVR.QuickUIButton::_colorNormal
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____colorNormal_16;
	// UnityEngine.Color QuickVR.QuickUIButton::_colorSelected
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____colorSelected_17;
	// UnityEngine.UI.Image QuickVR.QuickUIButton::_buttonBG
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____buttonBG_18;
	// TMPro.TextMeshProUGUI QuickVR.QuickUIButton::_label
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____label_19;
};

// QuickVR.QuickVRInteractorHand
struct QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C  : public QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B
{
	// UnityEngine.XR.XRNode QuickVR.QuickVRInteractorHand::m_XRNode
	int32_t ___m_XRNode_6;
	// UnityEngine.InputSystem.InputActionMap QuickVR.QuickVRInteractorHand::_actionMapDefault
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ____actionMapDefault_7;
};

// QuickVR.SampleInteraction.SampleInteractionStage
struct SampleInteractionStage_tCC1C5351FA6AB238293BE1604A1B853122C8E43C  : public QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C
{
	// UnityEngine.Canvas QuickVR.SampleInteraction.SampleInteractionStage::_gui
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____gui_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation
struct StageSampleRecordAnimation_t1E1D96EBC1C8CC162EBF75953A2078D6DC89B1F2  : public QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C
{
	// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation::_gui
	SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* ____gui_26;
};

// QuickVR.Samples.Workflow.StageSpawnCube
struct StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B  : public QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C
{
	// UnityEngine.Transform QuickVR.Samples.Workflow.StageSpawnCube::_spawnCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____spawnCenter_26;
	// System.Single QuickVR.Samples.Workflow.StageSpawnCube::_spawnRadius
	float ____spawnRadius_27;
};

// QuickVR.Samples.Workflow.StageSpawnSphere
struct StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1  : public QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C
{
	// UnityEngine.Transform QuickVR.Samples.Workflow.StageSpawnSphere::_spawnCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____spawnCenter_26;
	// System.Single QuickVR.Samples.Workflow.StageSpawnSphere::_spawnRadius
	float ____spawnRadius_27;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// QuickVR.Samples.Workflow.StageCheckIsCube
struct StageCheckIsCube_t85F1F4BFC95D168CE83A3048EA4432A0CF959D14  : public QuickStageCondition_t19A7BD27FF6F4AF2879B9E9517054516744FF522
{
	// System.Boolean QuickVR.Samples.Workflow.StageCheckIsCube::_spawnCubes
	bool ____spawnCubes_28;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33

// QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2

// QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2

// QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2

// QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2

// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30

// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

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

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32

// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29

// QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// QuickVR.QuickAnimation

// QuickVR.QuickAnimation

// System.Action

// System.Action

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// QuickVR.QuickVRManager/QuickVRManagerActionAnimator

// QuickVR.QuickVRManager/QuickVRManagerActionAnimator

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// QuickVR.BaseInputManager
struct BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15_StaticFields
{
	// QuickVR.InputManager QuickVR.BaseInputManager::m_InputManager
	InputManager_tB3AE2069CF70E110046C3CD4B20E5ED1D8F455A5* ___m_InputManager_4;
};

// QuickVR.BaseInputManager

// QuickVR.Samples.CharacterController

// QuickVR.Samples.CharacterController

// Gun

// Gun

// QuickVR.QuickAnimationPlayer
struct QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7_StaticFields
{
	// System.Collections.Generic.HashSet`1<QuickVR.QuickAnimationPlayer> QuickVR.QuickAnimationPlayer::_instances
	HashSet_1_tA3D4D002C5FC2522F50FA75ABAF98B818CD73E1E* ____instances_8;
};

// QuickVR.QuickAnimationPlayer

// QuickVR.QuickStageBase
struct QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_StaticFields
{
	// System.Collections.Generic.Stack`1<QuickVR.QuickStageBase> QuickVR.QuickStageBase::_stackStages
	Stack_1_t75E832881EEF51972F692BEC65FAA29BC0DBD2C6* ____stackStages_21;
};

// QuickVR.QuickStageBase

// QuickVR.QuickUIInteractiveItem
struct QuickUIInteractiveItem_tA2E54DFDA334ECDB2F3D86959EDFC6021807CDF1_StaticFields
{
	// QuickVR.QuickUIInteractiveItem/ItemAction QuickVR.QuickUIInteractiveItem::OnInteractiveItemSelected
	ItemAction_t7B81AD7BA82C20A21941C87B86F4E7ABB68AA2ED* ___OnInteractiveItemSelected_13;
	// QuickVR.QuickUIInteractiveItem/ButtonAction QuickVR.QuickUIInteractiveItem::OnButtonSelected
	ButtonAction_t0FE295215AD0E0B75C57849ADF342FC358936231* ___OnButtonSelected_14;
};

// QuickVR.QuickUIInteractiveItem

// QuickVR.QuickVRInteractionManager

// QuickVR.QuickVRInteractionManager

// QuickVR.QuickVRInteractor

// QuickVR.QuickVRInteractor

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

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI

// QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI

// QuickVR.SampleInteraction.TestInteractionUI

// QuickVR.SampleInteraction.TestInteractionUI

// QuickVR.SampleInteraction.TestLocomotion

// QuickVR.SampleInteraction.TestLocomotion

// TestObjectSelected

// TestObjectSelected

// InputManagerBodyPose

// InputManagerBodyPose

// QuickVR.QuickStageCondition

// QuickVR.QuickStageCondition

// QuickVR.QuickUIButton

// QuickVR.QuickUIButton

// QuickVR.QuickVRInteractorHand

// QuickVR.QuickVRInteractorHand

// QuickVR.SampleInteraction.SampleInteractionStage

// QuickVR.SampleInteraction.SampleInteractionStage

// QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation

// QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation

// QuickVR.Samples.Workflow.StageSpawnCube

// QuickVR.Samples.Workflow.StageSpawnCube

// QuickVR.Samples.Workflow.StageSpawnSphere

// QuickVR.Samples.Workflow.StageSpawnSphere

// QuickVR.Samples.Workflow.StageCheckIsCube

// QuickVR.Samples.Workflow.StageCheckIsCube

// UnityEngine.UI.Toggle

// UnityEngine.UI.Toggle

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuickUtils_GetOrCreateComponent_TisRuntimeObject_m6DCD8D70ECAE888C92FD3C16C23FE06721C716E2_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) ;
// T QuickVR.QuickSingletonManager::GetInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared (const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Void QuickVR.BaseInputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputManager__ctor_m4180A8E3FAB2CF8F8B4916F22FF145A4F0EF70F9 (BaseInputManager_t270D301B8A33CAFFE2D15C8B7E1B1B89982DAD15* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.AudioSource Gun::get__audioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Gun_get__audioSource_mB0303839BAD59BA51DED439D7007AEF6AF166757 (Gun_tC94A5211767826EEB157A2311C715E83D4CFC903* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickStageBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickStageBase_Awake_m1A03866949275640A8091B844B6D3BE1C4EC922F (QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickStageBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickStageBase_Init_mC2A41361935F931D3278376B300015E67F0B24AF (QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickStageBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickStageBase__ctor_m1A429E7471660F607E2DEB75D1224E6CB698AF6B (QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager/QuickVRManagerActionAnimator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99 (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::add_OnTargetAnimatorSet(QuickVR.QuickVRManager/QuickVRManagerActionAnimator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManager_add_OnTargetAnimatorSet_m0D36A46168B9DF569D014FCDC915E9A650C3BBBB (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickVRManager::remove_OnTargetAnimatorSet(QuickVR.QuickVRManager/QuickVRManagerActionAnimator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickVRManager_remove_OnTargetAnimatorSet_mACF2FC990E5577CBC701A6A9E0AB0295B93F8A16 (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T QuickVR.QuickUtils::GetOrCreateComponent<UnityEngine.CanvasGroup>(UnityEngine.GameObject)
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))QuickUtils_GetOrCreateComponent_TisRuntimeObject_m6DCD8D70ECAE888C92FD3C16C23FE06721C716E2_gshared)(___0_go, method);
}
// T QuickVR.QuickSingletonManager::GetInstance<QuickVR.QuickVRInteractionManager>()
inline QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C (const RuntimeMethod* method)
{
	return ((  QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* (*) (const RuntimeMethod*))QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared)(method);
}
// QuickVR.QuickVRInteractorHand QuickVR.QuickVRInteractionManager::get__interactorHandLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* QuickVRInteractionManager_get__interactorHandLeft_m9C710E6B694D258BF135216A1EDEBDD8A6A2FC72_inline (QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* __this, const RuntimeMethod* method) ;
// QuickVR.QuickVRInteractorHand QuickVR.QuickVRInteractionManager::get__interactorHandRight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* QuickVRInteractionManager_get__interactorHandRight_m29BA81B98C87D42045D2AE30C9E8A96CCB1838C1_inline (QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean QuickVR.InputManagerVR::GetKeyDown(QuickVR.InputManagerVR/ButtonCodes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManagerVR_GetKeyDown_mD314CF0813F10EC21480851A8E535539783957F6 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean QuickVR.InputManagerKeyboard::GetKeyDown(UnityEngine.InputSystem.Key)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManagerKeyboard_GetKeyDown_mBF48075A1C48E9246B570B9D2E97C23AB3A135A9 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__29__ctor_mA4EA16DD2D3CF43B1702D00C8407E8F63D68CDE4 (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__30__ctor_m571D9A63174B7787A3F223982CC5341E6339517E (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T QuickVR.QuickSingletonManager::GetInstance<QuickVR.QuickVRManager>()
inline QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A (const RuntimeMethod* method)
{
	return ((  QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* (*) (const RuntimeMethod*))QuickSingletonManager_GetInstance_TisRuntimeObject_mDFB4037F8002C857FF1A87DD5508678CE5E5508B_gshared)(method);
}
// System.Boolean QuickVR.InputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManager_GetButtonDown_mDA43761261D607FC5E023B3267BC566ED31F8DD0 (String_t* ___0_button, const RuntimeMethod* method) ;
// System.Single QuickVR.InputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputManager_GetAxis_m831192AE1EAA81281311BCDD4EACBE6ADEDFC034 (String_t* ___0_axis, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, int32_t ___2_relativeTo, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickUIInteractiveItem::add_OnDown(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickUIInteractiveItem_add_OnDown_mE381E147ED8A2A9B9B1230F8E7375DB5369B1D5C (QuickUIInteractiveItem_tA2E54DFDA334ECDB2F3D86959EDFC6021807CDF1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickUIInteractiveItem::remove_OnDown(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickUIInteractiveItem_remove_OnDown_mD9C2ADA3838A72DF1C25B4AAC7CB9ED86BC9F877 (QuickUIInteractiveItem_tA2E54DFDA334ECDB2F3D86959EDFC6021807CDF1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickAnimationUtils::SaveToAnim(System.String,QuickVR.QuickAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickAnimationUtils_SaveToAnim_m03BC7729A7429B54FFF9026927244B034328ED70 (String_t* ___0_path, QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* ___1_animation, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickAnimationUtils::SaveToJson(System.String,QuickVR.QuickAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickAnimationUtils_SaveToJson_m3F2594FF80E9285E3398DB8FCDC7DD781C542297 (String_t* ___0_path, QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* ___1_animation, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// QuickVR.QuickAnimation QuickVR.QuickAnimationUtils::FromJson(System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* QuickAnimationUtils_FromJson_mDF5D299C246B1EDF03915E852E65242F92EDDE54 (String_t* ___0_json, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___1_animator, const RuntimeMethod* method) ;
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::set__animator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_set__animator_mC4D127AA7D2B72BD991EB40FB92AA4908644E012 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method) ;
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__32__ctor_m7A099ADFCC12384AF414E6638B4F8C1247F81FCF (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__33__ctor_m5E319FB9D5AB9FEF9B805022C565858B4648F5D1 (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Animator QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::get__animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickStageBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickStageBase_Start_mC38B3375C82704B80E5CD481C1AA6C6839521E00 (QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickStageBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickStageBase_Update_mE8A5E033C55FEC639992822F1E94A6F65FBECD63 (QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.QuickStageCondition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickStageCondition__ctor_mA313AE716F92D3AEEC482DC85D18C3A5567AEAE4 (QuickStageCondition_t19A7BD27FF6F4AF2879B9E9517054516744FF522* __this, const RuntimeMethod* method) ;
// System.Void QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2__ctor_mF35F7434673F2FC422C41C554A13948887563966 (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// System.Void QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2__ctor_mE22F1C767CD77DE431FA346E5AA7A391A9AE1A3D (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.String[] InputManagerBodyPose::GetAxisCodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* InputManagerBodyPose_GetAxisCodes_m993CFFB9A0FA034C3C659977A503994797186DD0 (InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputManager_GetCodes_TisAxisCodes_t86E8CD51165B3E565039087D3AD61E1D74C9915E_mE5421E200234C316499BE26BE26A18315B49ED53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// return GetCodes<AxisCodes>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = GenericVirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(BaseInputManager_GetCodes_TisAxisCodes_t86E8CD51165B3E565039087D3AD61E1D74C9915E_mE5421E200234C316499BE26BE26A18315B49ED53_RuntimeMethod_var, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.String[] InputManagerBodyPose::GetButtonCodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* InputManagerBodyPose_GetButtonCodes_m92EE66032BEA298B912A40475FD7CF69CBAB3DEB (InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputManager_GetCodes_TisButtonCodes_tDFC9F1C39FF566CB36DCA90B1E59F9116656DFF4_mC1D4B0D3F1876CD03E7E0D449827BB3F0FF4B41F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// return GetCodes<ButtonCodes>();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = GenericVirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(BaseInputManager_GetCodes_TisButtonCodes_tDFC9F1C39FF566CB36DCA90B1E59F9116656DFF4_mC1D4B0D3F1876CD03E7E0D449827BB3F0FF4B41F_RuntimeMethod_var, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.Single InputManagerBodyPose::ImpGetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputManagerBodyPose_ImpGetAxis_m94F621B7943D2C638BD500666806CF3A2875DA3B (InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927* __this, String_t* ___0_axis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisCodes_t86E8CD51165B3E565039087D3AD61E1D74C9915E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	float V_12 = 0.0f;
	{
		// float result = 0;
		V_0 = (0.0f);
		// if (_animator)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_014a;
		}
	}
	{
		// Transform tHead = _animator.GetBoneTransform(HumanBodyBones.Head);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->____animator_13;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_3, ((int32_t)10), NULL);
		V_2 = L_4;
		// Transform tHips = _animator.GetBoneTransform(HumanBodyBones.Hips);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->____animator_13;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_5, 0, NULL);
		V_3 = L_6;
		// Vector3 bodyPose = tHead.position - tHips.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_2;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_3;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_10, NULL);
		V_4 = L_11;
		// float angle = 0;
		V_5 = (0.0f);
		// if (axis == AxisCodes.LeanForward.ToString())
		String_t* L_12 = ___0_axis;
		V_7 = 0;
		Il2CppFakeBox<int32_t> L_13(AxisCodes_t86E8CD51165B3E565039087D3AD61E1D74C9915E_il2cpp_TypeInfo_var, (&V_7));
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, L_14, NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00b1;
		}
	}
	{
		// Vector3 v = Vector3.ProjectOnPlane(bodyPose, _animator.transform.right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->____animator_13;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_17, L_20, NULL);
		V_8 = L_21;
		// angle = Vector3.SignedAngle(_animator.transform.up, v, _animator.transform.right);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->____animator_13;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_8;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->____animator_13;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_27, NULL);
		float L_29;
		L_29 = Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline(L_24, L_25, L_28, NULL);
		V_5 = L_29;
		goto IL_0116;
	}

IL_00b1:
	{
		// else if (axis == AxisCodes.LeanSide.ToString())
		String_t* L_30 = ___0_axis;
		V_7 = 1;
		Il2CppFakeBox<int32_t> L_31(AxisCodes_t86E8CD51165B3E565039087D3AD61E1D74C9915E_il2cpp_TypeInfo_var, (&V_7));
		String_t* L_32;
		L_32 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_31), NULL);
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, L_32, NULL);
		V_9 = L_33;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_0116;
		}
	}
	{
		// Vector3 v = Vector3.ProjectOnPlane(bodyPose, _animator.transform.forward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_4;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = __this->____animator_13;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_35, L_38, NULL);
		V_10 = L_39;
		// angle = Vector3.SignedAngle(_animator.transform.up, v, -_animator.transform.forward);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_40 = __this->____animator_13;
		NullCheck(L_40);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_40, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_10;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_44 = __this->____animator_13;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_46, NULL);
		float L_48;
		L_48 = Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline(L_42, L_43, L_47, NULL);
		V_5 = L_48;
	}

IL_0116:
	{
		// if (Mathf.Abs(angle) > _deadLeanAngle)
		float L_49 = V_5;
		float L_50;
		L_50 = fabsf(L_49);
		float L_51 = __this->____deadLeanAngle_14;
		V_11 = (bool)((((float)L_50) > ((float)L_51))? 1 : 0);
		bool L_52 = V_11;
		if (!L_52)
		{
			goto IL_0149;
		}
	}
	{
		// result = Mathf.Sign(angle) * Mathf.Clamp01(Mathf.Abs(angle) / _maxLeanAngle);
		float L_53 = V_5;
		float L_54;
		L_54 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_53, NULL);
		float L_55 = V_5;
		float L_56;
		L_56 = fabsf(L_55);
		float L_57 = __this->____maxLeanAngle_15;
		float L_58;
		L_58 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_56/L_57)), NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_54, L_58));
	}

IL_0149:
	{
	}

IL_014a:
	{
		// return result;
		float L_59 = V_0;
		V_12 = L_59;
		goto IL_014f;
	}

IL_014f:
	{
		// }
		float L_60 = V_12;
		return L_60;
	}
}
// System.Boolean InputManagerBodyPose::ImpGetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManagerBodyPose_ImpGetButton_mF8F4EA4DF60FDEE74373EE1E3323B36B7B175743 (InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927* __this, String_t* ___0_buttonName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonCodes_tDFC9F1C39FF566CB36DCA90B1E59F9116656DFF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (buttonName == ButtonCodes.TPose.ToString())
		String_t* L_0 = ___0_buttonName;
		V_2 = 0;
		Il2CppFakeBox<int32_t> L_1(ButtonCodes_tDFC9F1C39FF566CB36DCA90B1E59F9116656DFF4_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// bool isTPoseLeft = IsArmTPose(HumanBodyBones.LeftUpperArm, HumanBodyBones.LeftHand);
		bool L_5;
		L_5 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(22 /* System.Boolean InputManagerBodyPose::IsArmTPose(UnityEngine.HumanBodyBones,UnityEngine.HumanBodyBones) */, __this, ((int32_t)13), ((int32_t)17));
		V_3 = L_5;
		// bool isTPoseRight = IsArmTPose(HumanBodyBones.RightUpperArm, HumanBodyBones.RightHand);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int32_t, int32_t >::Invoke(22 /* System.Boolean InputManagerBodyPose::IsArmTPose(UnityEngine.HumanBodyBones,UnityEngine.HumanBodyBones) */, __this, ((int32_t)14), ((int32_t)18));
		V_4 = L_6;
		// result = isTPoseLeft && isTPoseRight;
		bool L_7 = V_3;
		bool L_8 = V_4;
		V_0 = (bool)((int32_t)((int32_t)L_7&(int32_t)L_8));
	}

IL_003a:
	{
		// return result;
		bool L_9 = V_0;
		V_5 = L_9;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		bool L_10 = V_5;
		return L_10;
	}
}
// System.Boolean InputManagerBodyPose::IsArmTPose(UnityEngine.HumanBodyBones,UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManagerBodyPose_IsArmTPose_m8539ABF00875986530051FC8900E53FB28366558 (InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927* __this, int32_t ___0_boneUpperID, int32_t ___1_boneHandID, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// Vector3 v = _animator.GetBoneTransform(boneHandID).position - _animator.GetBoneTransform(boneUpperID).position;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->____animator_13;
		int32_t L_1 = ___1_boneHandID;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_0, L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->____animator_13;
		int32_t L_5 = ___0_boneUpperID;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56(L_4, L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// float angleUp = Vector3.Angle(_animator.transform.up, Vector3.ProjectOnPlane(v, _animator.transform.forward));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->____animator_13;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->____animator_13;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_12, L_15, NULL);
		float L_17;
		L_17 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_11, L_16, NULL);
		V_1 = L_17;
		// float angleFwd = Vector3.Angle(_animator.transform.forward, Vector3.ProjectOnPlane(v, _animator.transform.up));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->____animator_13;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22 = __this->____animator_13;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_21, L_24, NULL);
		float L_26;
		L_26 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_20, L_25, NULL);
		V_2 = L_26;
		// bool b1 = (angleUp >= 90.0f - _tPoseThresholdAngle && angleUp <= 90.0f + _tPoseThresholdAngle);
		float L_27 = V_1;
		float L_28 = __this->____tPoseThresholdAngle_16;
		if ((!(((float)L_27) >= ((float)((float)il2cpp_codegen_subtract((90.0f), L_28))))))
		{
			goto IL_00a4;
		}
	}
	{
		float L_29 = V_1;
		float L_30 = __this->____tPoseThresholdAngle_16;
		G_B3_0 = ((((int32_t)((!(((float)L_29) <= ((float)((float)il2cpp_codegen_add((90.0f), L_30)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00a5;
	}

IL_00a4:
	{
		G_B3_0 = 0;
	}

IL_00a5:
	{
		V_3 = (bool)G_B3_0;
		// bool b2 = (angleFwd >= 90.0f - _tPoseThresholdAngle && angleFwd <= 90.0f + _tPoseThresholdAngle);
		float L_31 = V_2;
		float L_32 = __this->____tPoseThresholdAngle_16;
		if ((!(((float)L_31) >= ((float)((float)il2cpp_codegen_subtract((90.0f), L_32))))))
		{
			goto IL_00c9;
		}
	}
	{
		float L_33 = V_2;
		float L_34 = __this->____tPoseThresholdAngle_16;
		G_B6_0 = ((((int32_t)((!(((float)L_33) <= ((float)((float)il2cpp_codegen_add((90.0f), L_34)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B6_0 = 0;
	}

IL_00ca:
	{
		V_4 = (bool)G_B6_0;
		// return b1 && b2;
		bool L_35 = V_3;
		bool L_36 = V_4;
		V_5 = (bool)((int32_t)((int32_t)L_35&(int32_t)L_36));
		goto IL_00d4;
	}

IL_00d4:
	{
		// }
		bool L_37 = V_5;
		return L_37;
	}
}
// System.Void InputManagerBodyPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManagerBodyPose__ctor_mA801725139B5996B9E9CC4CCB70306E1FB0E9372 (InputManagerBodyPose_t88770251075B90250D760377DA98EFDDBFFA9927* __this, const RuntimeMethod* method) 
{
	{
		// public Animator _animator = null;
		__this->____animator_13 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_13), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		// public float _deadLeanAngle = 5.0f;
		__this->____deadLeanAngle_14 = (5.0f);
		// public float _maxLeanAngle = 15.0f;
		__this->____maxLeanAngle_15 = (15.0f);
		// public float _tPoseThresholdAngle = 25.0f;
		__this->____tPoseThresholdAngle_16 = (25.0f);
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
// UnityEngine.AudioSource Gun::get__audioSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Gun_get__audioSource_mB0303839BAD59BA51DED439D7007AEF6AF166757 (Gun_tC94A5211767826EEB157A2311C715E83D4CFC903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_2 = NULL;
	{
		// if (!m_Auciosource)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___m_Auciosource_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (!gameObject.GetComponent<AudioSource>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_3, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// gameObject.AddComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8;
		L_8 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_7, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
	}

IL_0039:
	{
		// m_Auciosource = gameObject.GetComponent<AudioSource>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10;
		L_10 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_9, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		__this->___m_Auciosource_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Auciosource_8), (void*)L_10);
	}

IL_004b:
	{
		// return m_Auciosource;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = __this->___m_Auciosource_8;
		V_2 = L_11;
		goto IL_0054;
	}

IL_0054:
	{
		// }
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = V_2;
		return L_12;
	}
}
// System.Void Gun::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Shoot_m5A6B20D713102A33DBFD3670BD22F50D5CB13C84 (Gun_tC94A5211767826EEB157A2311C715E83D4CFC903* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject goBullet = Instantiate(_pfBullet, _barrel.position, _barrel.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____pfBullet_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____barrel_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____barrel_6;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_5;
		// goBullet.GetComponent<Rigidbody>().velocity = _speed * _barrel.forward;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7;
		L_7 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_6, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		float L_8 = __this->____speed_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->____barrel_6;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_8, L_10, NULL);
		NullCheck(L_7);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_7, L_11, NULL);
		// _audioSource.PlayOneShot(_audioClip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12;
		L_12 = Gun_get__audioSource_mB0303839BAD59BA51DED439D7007AEF6AF166757(__this, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_13 = __this->____audioClip_7;
		NullCheck(L_12);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_12, L_13, NULL);
		// Destroy(goBullet, 2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_14, (2.0f), NULL);
		// }
		return;
	}
}
// System.Void Gun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun__ctor_m29A6C8476138A388403C3813248AB45424092604 (Gun_tC94A5211767826EEB157A2311C715E83D4CFC903* __this, const RuntimeMethod* method) 
{
	{
		// public float _speed = 40.0f;
		__this->____speed_4 = (40.0f);
		// public GameObject _pfBullet = null;
		__this->____pfBullet_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pfBullet_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// public Transform _barrel = null;
		__this->____barrel_6 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____barrel_6), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// protected AudioSource m_Auciosource = null;
		__this->___m_Auciosource_8 = (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Auciosource_8), (void*)(AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)NULL);
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
// System.Void TestObjectSelected::ObjectSelectedAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestObjectSelected_ObjectSelectedAction_m027AD51551F1F7214F5F935B906C90278926AFE7 (TestObjectSelected_t4C3C43B751E210C09BBDCF58C744126FA829085E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (_currentSelection == 0)
		int32_t L_0 = __this->____currentSelection_4;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// color = Color.cyan;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		V_0 = L_2;
		goto IL_0037;
	}

IL_0018:
	{
		// else if (_currentSelection == 1)
		int32_t L_3 = __this->____currentSelection_4;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// color = Color.magenta;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		V_0 = L_5;
		goto IL_0037;
	}

IL_002f:
	{
		// color = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		// GetComponent<Renderer>().material.color = color;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		NullCheck(L_8);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_8, L_9, NULL);
		// _currentSelection = (_currentSelection + 1) % 3;
		int32_t L_10 = __this->____currentSelection_4;
		__this->____currentSelection_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_10, 1))%3));
		// }
		return;
	}
}
// System.Void TestObjectSelected::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestObjectSelected__ctor_mAA0A0B6FD129A7F5845F9B4D0FF6E13867792F74 (TestObjectSelected_t4C3C43B751E210C09BBDCF58C744126FA829085E* __this, const RuntimeMethod* method) 
{
	{
		// protected int _currentSelection = 0;
		__this->____currentSelection_4 = 0;
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
// System.Void QuickVR.SampleInteraction.SampleInteractionStage::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleInteractionStage_Awake_m4304F8715AA2FF1A6890AE3DEE2CF294EE046FF0 (SampleInteractionStage_tCC1C5351FA6AB238293BE1604A1B853122C8E43C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		QuickStageBase_Awake_m1A03866949275640A8091B844B6D3BE1C4EC922F(__this, NULL);
		// _gui = GetComponentInChildren<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18(__this, Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		__this->____gui_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gui_26), (void*)L_0);
		// _gui.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->____gui_26;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.SampleInteractionStage::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleInteractionStage_Init_mF28BF1487C608DB2D56F2A44496438E18D4F20FA (SampleInteractionStage_tCC1C5351FA6AB238293BE1604A1B853122C8E43C* __this, const RuntimeMethod* method) 
{
	{
		// _gui.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->____gui_26;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// base.Init();
		QuickStageBase_Init_mC2A41361935F931D3278376B300015E67F0B24AF(__this, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.SampleInteractionStage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleInteractionStage__ctor_m6DEDE38DFD7475A0FF2DB47727A0A8A1F2027B77 (SampleInteractionStage_tCC1C5351FA6AB238293BE1604A1B853122C8E43C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Canvas _gui = null;
		__this->____gui_26 = (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gui_26), (void*)(Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26*)NULL);
		il2cpp_codegen_runtime_class_init_inline(QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		QuickStageBase__ctor_m1A429E7471660F607E2DEB75D1224E6CB698AF6B(__this, NULL);
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
// System.Void QuickVR.SampleInteraction.TestInteractionUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI_Awake_mA23F87877B0C845C994B8AF1A0F3D218A96EF5D0 (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnTargetAnimatorSet += OnTargetAnimatorSetAction;
		QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* L_0 = (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637*)il2cpp_codegen_object_new(QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		QuickVRManager_add_OnTargetAnimatorSet_m0D36A46168B9DF569D014FCDC915E9A650C3BBBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI_OnDestroy_m4907A1BDA68CF266E36A6A0A770C0E693B1E9E7F (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnTargetAnimatorSet -= OnTargetAnimatorSetAction;
		QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* L_0 = (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637*)il2cpp_codegen_object_new(QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		QuickVRManager_remove_OnTargetAnimatorSet_mACF2FC990E5577CBC701A6A9E0AB0295B93F8A16(L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI_OnEnable_m51B1D1F9BB6338DF0B0CC50FA7EF06DF68C526AB (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	{
		// _coUpdatePosition = StartCoroutine(CoUpdatePosition());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Collections.IEnumerator QuickVR.SampleInteraction.TestInteractionUI::CoUpdatePosition() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		__this->____coUpdatePosition_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdatePosition_23), (void*)L_1);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI_OnDisable_m25E34C5D1D81E52AB086751C4C84C58DF4B4EFFD (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// _coUpdatePosition = null;
		__this->____coUpdatePosition_23 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdatePosition_23), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// _coUpdateTargetFwd = null;
		__this->____coUpdateTargetFwd_25 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdateTargetFwd_25), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI_Start_m457B436773E62D531B4D6A68878897FDDFCE5299 (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _canvasGroup = gameObject.GetOrCreateComponent<CanvasGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1;
		L_1 = QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509(L_0, QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509_RuntimeMethod_var);
		__this->____canvasGroup_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasGroup_22), (void*)L_1);
		// _interactionManager = QuickSingletonManager.GetInstance<QuickVRInteractionManager>();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_2;
		L_2 = QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C(QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C_RuntimeMethod_var);
		__this->____interactionManager_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactionManager_18), (void*)L_2);
		// _interactorLeftHand = _interactionManager._interactorHandLeft;
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_3 = __this->____interactionManager_18;
		NullCheck(L_3);
		QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* L_4;
		L_4 = QuickVRInteractionManager_get__interactorHandLeft_m9C710E6B694D258BF135216A1EDEBDD8A6A2FC72_inline(L_3, NULL);
		__this->____interactorLeftHand_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorLeftHand_19), (void*)L_4);
		// _interactorRightHand = _interactionManager._interactorHandRight;
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_5 = __this->____interactionManager_18;
		NullCheck(L_5);
		QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* L_6;
		L_6 = QuickVRInteractionManager_get__interactorHandRight_m29BA81B98C87D42045D2AE30C9E8A96CCB1838C1_inline(L_5, NULL);
		__this->____interactorRightHand_20 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorRightHand_20), (void*)L_6);
		// _toggleUIRayRightHand.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_7 = __this->____toggleUIRayRightHand_17;
		NullCheck(L_7);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_7, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI::OnTargetAnimatorSetAction(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI_OnTargetAnimatorSetAction_m06A52305B9165A4D0A507FC0C3A44F7A8CC4A72B (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, const RuntimeMethod* method) 
{
	{
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		__this->____animator_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_24), (void*)L_0);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI_Update_m1DF724D4E573D6AF99E23730AE6E379651B43187 (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManagerVR_t8A9ED011D340908B9432A345A4C806A18EED56F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B6_0 = NULL;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B7_1 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B16_0 = 0;
	QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* G_B15_1 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* G_B17_2 = NULL;
	{
		// if (InputManagerVR.GetKeyDown(InputManagerVR.ButtonCodes.LeftPrimaryPress) || InputManagerKeyboard.GetKeyDown(UnityEngine.InputSystem.Key.X))
		il2cpp_codegen_runtime_class_init_inline(InputManagerVR_t8A9ED011D340908B9432A345A4C806A18EED56F6_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InputManagerVR_GetKeyDown_mD314CF0813F10EC21480851A8E535539783957F6(0, NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = InputManagerKeyboard_GetKeyDown_mBF48075A1C48E9246B570B9D2E97C23AB3A135A9(((int32_t)38), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_007e;
		}
	}
	{
		// _show = !_show;
		bool L_3 = __this->____show_21;
		__this->____show_21 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// _canvasGroup.alpha = _show ? 1 : 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->____canvasGroup_22;
		bool L_5 = __this->____show_21;
		G_B5_0 = L_4;
		if (L_5)
		{
			G_B6_0 = L_4;
			goto IL_0038;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0039:
	{
		NullCheck(G_B7_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(G_B7_1, ((float)G_B7_0), NULL);
		// _canvasGroup.blocksRaycasts = _show;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->____canvasGroup_22;
		bool L_7 = __this->____show_21;
		NullCheck(L_6);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_6, L_7, NULL);
		// _canvasGroup.interactable = _show;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->____canvasGroup_22;
		bool L_9 = __this->____show_21;
		NullCheck(L_8);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_8, L_9, NULL);
		// if (_show)
		bool L_10 = __this->____show_21;
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		// _toggleUIRayRightHand.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = __this->____toggleUIRayRightHand_17;
		NullCheck(L_12);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_12, (bool)1, NULL);
	}

IL_007d:
	{
	}

IL_007e:
	{
		// if (_show && _interactionManager)
		bool L_13 = __this->____show_21;
		if (!L_13)
		{
			goto IL_0093;
		}
	}
	{
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_14 = __this->____interactionManager_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		G_B13_0 = ((int32_t)(L_15));
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
	}

IL_0094:
	{
		V_2 = (bool)G_B13_0;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_01e5;
		}
	}
	{
		// _interactionManager.SetEnabledLocomotionSystem(QuickVRInteractionManager.DefaultLocomotionProvider.DirectMove, _toggleDirectMove.isOn);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_17 = __this->____interactionManager_18;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = __this->____toggleDirectMove_6;
		NullCheck(L_18);
		bool L_19;
		L_19 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_18, NULL);
		NullCheck(L_17);
		VirtualActionInvoker2< int32_t, bool >::Invoke(20 /* System.Void QuickVR.QuickVRInteractionManager::SetEnabledLocomotionSystem(QuickVR.QuickVRInteractionManager/DefaultLocomotionProvider,System.Boolean) */, L_17, 1, L_19);
		// _interactionManager.SetEnabledLocomotionSystem(QuickVRInteractionManager.DefaultLocomotionProvider.DirectTurn, _toggleDirectTurn.isOn);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_20 = __this->____interactionManager_18;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_21 = __this->____toggleDirectTurn_7;
		NullCheck(L_21);
		bool L_22;
		L_22 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_21, NULL);
		NullCheck(L_20);
		VirtualActionInvoker2< int32_t, bool >::Invoke(20 /* System.Void QuickVR.QuickVRInteractionManager::SetEnabledLocomotionSystem(QuickVR.QuickVRInteractionManager/DefaultLocomotionProvider,System.Boolean) */, L_20, 2, L_22);
		// _interactionManager.SetEnabledLocomotionSystem(QuickVRInteractionManager.DefaultLocomotionProvider.ContinuousMove, _toggleContinuousMove.isOn);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_23 = __this->____interactionManager_18;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_24 = __this->____toggleContinuousMove_8;
		NullCheck(L_24);
		bool L_25;
		L_25 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_24, NULL);
		NullCheck(L_23);
		VirtualActionInvoker2< int32_t, bool >::Invoke(20 /* System.Void QuickVR.QuickVRInteractionManager::SetEnabledLocomotionSystem(QuickVR.QuickVRInteractionManager/DefaultLocomotionProvider,System.Boolean) */, L_23, 3, L_25);
		// _interactionManager.SetEnabledLocomotionSystem(QuickVRInteractionManager.DefaultLocomotionProvider.ContinuousTurn, _toggleContinuousTurn.isOn);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_26 = __this->____interactionManager_18;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_27 = __this->____toggleContinuousTurn_9;
		NullCheck(L_27);
		bool L_28;
		L_28 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_27, NULL);
		NullCheck(L_26);
		VirtualActionInvoker2< int32_t, bool >::Invoke(20 /* System.Void QuickVR.QuickVRInteractionManager::SetEnabledLocomotionSystem(QuickVR.QuickVRInteractionManager/DefaultLocomotionProvider,System.Boolean) */, L_26, 4, L_28);
		// _interactionManager.SetEnabledLocomotionSystem(QuickVRInteractionManager.DefaultLocomotionProvider.Teleport, _toggleTeleportLeftHand.isOn || _toggleTeleportRightHand.isOn);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_29 = __this->____interactionManager_18;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_30 = __this->____toggleTeleportLeftHand_10;
		NullCheck(L_30);
		bool L_31;
		L_31 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_30, NULL);
		G_B15_0 = 0;
		G_B15_1 = L_29;
		if (L_31)
		{
			G_B16_0 = 0;
			G_B16_1 = L_29;
			goto IL_011d;
		}
	}
	{
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_32 = __this->____toggleTeleportRightHand_11;
		NullCheck(L_32);
		bool L_33;
		L_33 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_32, NULL);
		G_B17_0 = ((int32_t)(L_33));
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_011e;
	}

IL_011d:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_011e:
	{
		NullCheck(G_B17_2);
		VirtualActionInvoker2< int32_t, bool >::Invoke(20 /* System.Void QuickVR.QuickVRInteractionManager::SetEnabledLocomotionSystem(QuickVR.QuickVRInteractionManager/DefaultLocomotionProvider,System.Boolean) */, G_B17_2, G_B17_1, (bool)G_B17_0);
		// _interactorLeftHand.SetInteractorEnabled(InteractorType.Teleport, _toggleTeleportLeftHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_34 = __this->____interactorLeftHand_19;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_35 = __this->____toggleTeleportLeftHand_10;
		NullCheck(L_35);
		bool L_36;
		L_36 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_35, NULL);
		NullCheck(L_34);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_34, 2, L_36);
		// _interactorRightHand.SetInteractorEnabled(InteractorType.Teleport, _toggleTeleportRightHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_37 = __this->____interactorRightHand_20;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_38 = __this->____toggleTeleportRightHand_11;
		NullCheck(L_38);
		bool L_39;
		L_39 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_38, NULL);
		NullCheck(L_37);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_37, 2, L_39);
		// _interactorLeftHand.SetInteractorEnabled(InteractorType.GrabDirect, _toggleGrabDirectLeftHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_40 = __this->____interactorLeftHand_19;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_41 = __this->____toggleGrabDirectLeftHand_12;
		NullCheck(L_41);
		bool L_42;
		L_42 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_41, NULL);
		NullCheck(L_40);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_40, 0, L_42);
		// _interactorRightHand.SetInteractorEnabled(InteractorType.GrabDirect, _toggleGrabDirectRightHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_43 = __this->____interactorRightHand_20;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_44 = __this->____toggleGrabDirectRightHand_13;
		NullCheck(L_44);
		bool L_45;
		L_45 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_44, NULL);
		NullCheck(L_43);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_43, 0, L_45);
		// _interactorLeftHand.SetInteractorEnabled(InteractorType.Grab, _toggleGrabRayLeftHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_46 = __this->____interactorLeftHand_19;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_47 = __this->____toggleGrabRayLeftHand_14;
		NullCheck(L_47);
		bool L_48;
		L_48 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_47, NULL);
		NullCheck(L_46);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_46, 1, L_48);
		// _interactorRightHand.SetInteractorEnabled(InteractorType.Grab, _toggleGrabRayRightHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_49 = __this->____interactorRightHand_20;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_50 = __this->____toggleGrabRayRightHand_15;
		NullCheck(L_50);
		bool L_51;
		L_51 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_50, NULL);
		NullCheck(L_49);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_49, 1, L_51);
		// _interactorLeftHand.SetInteractorEnabled(InteractorType.UI, _toggleUIRayLeftHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_52 = __this->____interactorLeftHand_19;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_53 = __this->____toggleUIRayLeftHand_16;
		NullCheck(L_53);
		bool L_54;
		L_54 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_53, NULL);
		NullCheck(L_52);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_52, 3, L_54);
		// _interactorRightHand.SetInteractorEnabled(InteractorType.UI, _toggleUIRayRightHand.isOn);
		QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B* L_55 = __this->____interactorRightHand_20;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_56 = __this->____toggleUIRayRightHand_17;
		NullCheck(L_56);
		bool L_57;
		L_57 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_56, NULL);
		NullCheck(L_55);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_55, 3, L_57);
	}

IL_01e5:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator QuickVR.SampleInteraction.TestInteractionUI::CoUpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestInteractionUI_CoUpdatePosition_m64CC9B2215C4BA71AC7E02FCACF53653EA58922D (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* L_0 = (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE*)il2cpp_codegen_object_new(U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoUpdatePositionU3Ed__29__ctor_mA4EA16DD2D3CF43B1702D00C8407E8F63D68CDE4(L_0, 0, NULL);
		U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator QuickVR.SampleInteraction.TestInteractionUI::CoUpdateTargetForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestInteractionUI_CoUpdateTargetForward_m00CDF168147FE6BFE9A4C6DB5F9BB28F47F6CDD1 (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* L_0 = (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3*)il2cpp_codegen_object_new(U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoUpdateTargetForwardU3Ed__30__ctor_m571D9A63174B7787A3F223982CC5341E6339517E(L_0, 0, NULL);
		U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestInteractionUI__ctor_mAFB3B2856D92153005106F6A37047DA77979C3E7 (TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* __this, const RuntimeMethod* method) 
{
	{
		// public float _guiDistance = 2.5f;
		__this->____guiDistance_4 = (2.5f);
		// public float _guiDeadAngle = 45.0f;
		__this->____guiDeadAngle_5 = (45.0f);
		// public Toggle _toggleDirectMove = null;
		__this->____toggleDirectMove_6 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleDirectMove_6), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleDirectTurn = null;
		__this->____toggleDirectTurn_7 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleDirectTurn_7), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleContinuousMove = null;
		__this->____toggleContinuousMove_8 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleContinuousMove_8), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleContinuousTurn = null;
		__this->____toggleContinuousTurn_9 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleContinuousTurn_9), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleTeleportLeftHand = null;
		__this->____toggleTeleportLeftHand_10 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleTeleportLeftHand_10), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleTeleportRightHand = null;
		__this->____toggleTeleportRightHand_11 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleTeleportRightHand_11), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleGrabDirectLeftHand = null;
		__this->____toggleGrabDirectLeftHand_12 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleGrabDirectLeftHand_12), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleGrabDirectRightHand = null;
		__this->____toggleGrabDirectRightHand_13 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleGrabDirectRightHand_13), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleGrabRayLeftHand = null;
		__this->____toggleGrabRayLeftHand_14 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleGrabRayLeftHand_14), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleGrabRayRightHand = null;
		__this->____toggleGrabRayRightHand_15 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleGrabRayRightHand_15), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleUIRayLeftHand = null;
		__this->____toggleUIRayLeftHand_16 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleUIRayLeftHand_16), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// public Toggle _toggleUIRayRightHand = null;
		__this->____toggleUIRayRightHand_17 = (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toggleUIRayRightHand_17), (void*)(Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)NULL);
		// protected QuickVRInteractionManager _interactionManager = null;
		__this->____interactionManager_18 = (QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactionManager_18), (void*)(QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0*)NULL);
		// protected QuickVRInteractor _interactorLeftHand = null;
		__this->____interactorLeftHand_19 = (QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorLeftHand_19), (void*)(QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL);
		// protected QuickVRInteractor _interactorRightHand = null;
		__this->____interactorRightHand_20 = (QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorRightHand_20), (void*)(QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL);
		// protected bool _show = true;
		__this->____show_21 = (bool)1;
		// protected CanvasGroup _canvasGroup = null;
		__this->____canvasGroup_22 = (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasGroup_22), (void*)(CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)NULL);
		// protected Coroutine _coUpdatePosition = null;
		__this->____coUpdatePosition_23 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdatePosition_23), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// protected Animator _animator = null;
		__this->____animator_24 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animator_24), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		// protected Coroutine _coUpdateTargetFwd = null;
		__this->____coUpdateTargetFwd_25 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdateTargetFwd_25), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
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
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__29__ctor_mA4EA16DD2D3CF43B1702D00C8407E8F63D68CDE4 (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__29_System_IDisposable_Dispose_m07AE4AA0CDDDD73528760FA76AC426727FBC8280 (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoUpdatePositionU3Ed__29_MoveNext_m7310410AEB509B0A83272857E9C87D6D54B86912 (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0138;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0140;
	}

IL_0028:
	{
		// if (_animator)
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = L_3->____animator_24;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0128;
		}
	}
	{
		// if ((Vector3.Angle(transform.forward, _animator.transform.forward) > 45) && _coUpdateTargetFwd == null)
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = L_10->____animator_24;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		float L_14;
		L_14 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_9, L_13, NULL);
		if ((!(((float)L_14) > ((float)(45.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16 = L_15->____coUpdateTargetFwd_25;
		G_B12_0 = ((((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B12_0 = 0;
	}

IL_0083:
	{
		V_2 = (bool)G_B12_0;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// _coUpdateTargetFwd = StartCoroutine(CoUpdateTargetForward());
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_18 = __this->___U3CU3E4__this_2;
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_19 = __this->___U3CU3E4__this_2;
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(12 /* System.Collections.IEnumerator QuickVR.SampleInteraction.TestInteractionUI::CoUpdateTargetForward() */, L_20);
		NullCheck(L_19);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_19, L_21, NULL);
		NullCheck(L_18);
		L_18->____coUpdateTargetFwd_25 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____coUpdateTargetFwd_25), (void*)L_22);
	}

IL_00aa:
	{
		// Vector3 offset = transform.forward * _guiDistance + _animator.transform.up;
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_24, NULL);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		float L_27 = L_26->____guiDistance_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_27, NULL);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_29 = __this->___U3CU3E4__this_2;
		NullCheck(L_29);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = L_29->____animator_24;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_32, NULL);
		__this->___U3CoffsetU3E5__1_3 = L_33;
		// transform.position = _animator.transform.position + offset;
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_36 = __this->___U3CU3E4__this_2;
		NullCheck(L_36);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37 = L_36->____animator_24;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->___U3CoffsetU3E5__1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_40, NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&__this->___U3CoffsetU3E5__1_3);
		il2cpp_codegen_initobj(L_42, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_0128:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0138:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0140:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0028;
	}
}
// System.Object QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdatePositionU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF46D99C29E134221D5172CE12E43E04224A79AD1 (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__29_System_Collections_IEnumerator_Reset_mFF83275923A737442D230BCB55F2DE1F514A599D (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoUpdatePositionU3Ed__29_System_Collections_IEnumerator_Reset_mFF83275923A737442D230BCB55F2DE1F514A599D_RuntimeMethod_var)));
	}
}
// System.Object QuickVR.SampleInteraction.TestInteractionUI/<CoUpdatePosition>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdatePositionU3Ed__29_System_Collections_IEnumerator_get_Current_mAE49DDCD906A42CB0F9A70A0B6C604613BAD91B7 (U3CCoUpdatePositionU3Ed__29_tDB3E108410D25E139C3D099974655B52C8B556EE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__30__ctor_m571D9A63174B7787A3F223982CC5341E6339517E (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__30_System_IDisposable_Dispose_m55EDBF85014135B51254CA929AA9CAEE5044758B (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoUpdateTargetForwardU3Ed__30_MoveNext_mA4E879CEEB3508F8D97B4E92594E3F939D54C8E5 (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0073;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_007b;
	}

IL_0022:
	{
		// transform.forward = Vector3.Lerp(transform.forward, _animator.transform.forward, Time.deltaTime);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = L_8->____animator_24;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_7, L_11, L_12, NULL);
		NullCheck(L_4);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_4, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0073:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007b:
	{
		// while (Vector3.Angle(transform.forward, _animator.transform.forward) > 1)
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = L_17->____animator_24;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		float L_21;
		L_21 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_16, L_20, NULL);
		V_1 = (bool)((((float)L_21) > ((float)(1.0f)))? 1 : 0);
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_0022;
		}
	}
	{
		// _coUpdateTargetFwd = null;
		TestInteractionUI_t43783DBB67B01DAE4C8A681725363CA7C0A7CBF5* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		L_23->____coUpdateTargetFwd_25 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____coUpdateTargetFwd_25), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateTargetForwardU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82A335D8B56EF16DC1F03A61DB9EAF9119F8ED66 (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__30_System_Collections_IEnumerator_Reset_mA919931F84A3357AE0A46149BBB762FD922A28A6 (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoUpdateTargetForwardU3Ed__30_System_Collections_IEnumerator_Reset_mA919931F84A3357AE0A46149BBB762FD922A28A6_RuntimeMethod_var)));
	}
}
// System.Object QuickVR.SampleInteraction.TestInteractionUI/<CoUpdateTargetForward>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateTargetForwardU3Ed__30_System_Collections_IEnumerator_get_Current_m8EAA422BC935930BFB6803DCD5A1A05B0D3F02E5 (U3CCoUpdateTargetForwardU3Ed__30_tFDA4E15A0A0136A8C43DF8CD8514440161D814E3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void QuickVR.SampleInteraction.TestLocomotion::SetTargetAvatar1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestLocomotion_SetTargetAvatar1_m28C582E1AF8E24ABFBAA9EC96D39349B1AA3FEEB (TestLocomotion_t055E212D128475163A9443B32E460FBCF7802652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickSingletonManager.GetInstance<QuickVRManager>().SetAnimatorTarget(_targetAnimator1);
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* L_0;
		L_0 = QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A(QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____targetAnimator1_4;
		NullCheck(L_0);
		VirtualActionInvoker1< Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* >::Invoke(9 /* System.Void QuickVR.QuickVRManager::SetAnimatorTarget(UnityEngine.Animator) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestLocomotion::SetTargetAvatar2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestLocomotion_SetTargetAvatar2_mB0CA4A7248160003056184A0AB1A827DEC89D559 (TestLocomotion_t055E212D128475163A9443B32E460FBCF7802652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickSingletonManager.GetInstance<QuickVRManager>().SetAnimatorTarget(_targetAnimator2);
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* L_0;
		L_0 = QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A(QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->____targetAnimator2_5;
		NullCheck(L_0);
		VirtualActionInvoker1< Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* >::Invoke(9 /* System.Void QuickVR.QuickVRManager::SetAnimatorTarget(UnityEngine.Animator) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void QuickVR.SampleInteraction.TestLocomotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestLocomotion__ctor_m351B7CA39C8E64257777DF0B71A048FFFED2A9E9 (TestLocomotion_t055E212D128475163A9443B32E460FBCF7802652* __this, const RuntimeMethod* method) 
{
	{
		// public Animator _targetAnimator1 = null;
		__this->____targetAnimator1_4 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetAnimator1_4), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		// public Animator _targetAnimator2 = null;
		__this->____targetAnimator2_5 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetAnimator2_5), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
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
// System.Void QuickVR.Samples.CharacterController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController_Update_m9D43A09031E611DB2C7F96892B1CA0D56197B96E (CharacterController_t81B1A3443C55AAA5205D84CF44D182ED65DBB22F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65EF31E0739D9BE6EA1C1AE20338CFB110A6BFAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// if (InputManager.GetButtonDown("ToggleMove"))
		bool L_0;
		L_0 = InputManager_GetButtonDown_mDA43761261D607FC5E023B3267BC566ED31F8DD0(_stringLiteral65EF31E0739D9BE6EA1C1AE20338CFB110A6BFAF, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// _move = !_move;
		bool L_2 = __this->____move_4;
		__this->____move_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		// if (_move)
		bool L_3 = __this->____move_4;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		// float vValue = InputManager.GetAxis(InputManager.DEFAULT_AXIS_VERTICAL);
		float L_5;
		L_5 = InputManager_GetAxis_m831192AE1EAA81281311BCDD4EACBE6ADEDFC034(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_2 = L_5;
		// transform.Translate(Vector3.forward * vValue * _maxLinearSpeed * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_8 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		float L_10 = __this->____maxLinearSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		NullCheck(L_6);
		Transform_Translate_m4A9E3D8836586E7562F6A18EBF5F5B6089D8B649(L_6, L_13, 1, NULL);
		// float hValue = InputManager.GetAxis(InputManager.DEFAULT_AXIS_HORIZONTAL);
		float L_14;
		L_14 = InputManager_GetAxis_m831192AE1EAA81281311BCDD4EACBE6ADEDFC034(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_3 = L_14;
		// transform.Rotate(Vector3.up, hValue * _maxAngularSpeed * Time.deltaTime, Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_17 = V_3;
		float L_18 = __this->____maxAngularSpeed_6;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_15);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_15, L_16, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, L_18)), L_19)), 1, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void QuickVR.Samples.CharacterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController__ctor_m5A329BA3993558844C46A70C4A05EF9D2BA6B066 (CharacterController_t81B1A3443C55AAA5205D84CF44D182ED65DBB22F* __this, const RuntimeMethod* method) 
{
	{
		// public bool _move = true;
		__this->____move_4 = (bool)1;
		// public float _maxLinearSpeed = 3;
		__this->____maxLinearSpeed_5 = (3.0f);
		// public float _maxAngularSpeed = 45;
		__this->____maxAngularSpeed_6 = (45.0f);
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
// UnityEngine.Animator QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::get__animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_1 = NULL;
	{
		// if (!m_Animator)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_Animator_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// m_Animator = QuickSingletonManager.GetInstance<QuickVRManager>().GetAnimatorSource();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A* L_3;
		L_3 = QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A(QuickSingletonManager_GetInstance_TisQuickVRManager_tBFD59D4B8034A619A75A67341D99E6D52842051A_m13E7D9B4F7E08A41262C029CF47678C40E423E0A_RuntimeMethod_var);
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = VirtualFuncInvoker0< Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* >::Invoke(10 /* UnityEngine.Animator QuickVR.QuickVRManager::GetAnimatorSource() */, L_3);
		__this->___m_Animator_19 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Animator_19), (void*)L_4);
	}

IL_0025:
	{
		// return m_Animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___m_Animator_19;
		V_1 = L_5;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = V_1;
		return L_6;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::set__animator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_set__animator_mC4D127AA7D2B72BD991EB40FB92AA4908644E012 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_value, const RuntimeMethod* method) 
{
	{
		// m_Animator = value;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_value;
		__this->___m_Animator_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Animator_19), (void*)L_0);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_Awake_mAFE980F3E035CD4E47A26F98F9776F59EF64F7A8 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleRecordAnimationUI_ButtonPlayback_Down_m6B9ED14CECAAF9ABFCD8F20404789F6C692D7A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleRecordAnimationUI_ButtonRecordStop_Down_m71B43B29D9694B1CAC35935AEDC52E47A94A371C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickVRManager.OnTargetAnimatorSet += OnTargetAnimatorSetAction;
		QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* L_0 = (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637*)il2cpp_codegen_object_new(QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 12)), NULL);
		QuickVRManager_add_OnTargetAnimatorSet_m0D36A46168B9DF569D014FCDC915E9A650C3BBBB(L_0, NULL);
		// _buttonRecordStop.OnDown += ButtonRecordStop_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_1 = __this->____buttonRecordStop_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)SampleRecordAnimationUI_ButtonRecordStop_Down_m71B43B29D9694B1CAC35935AEDC52E47A94A371C_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		QuickUIInteractiveItem_add_OnDown_mE381E147ED8A2A9B9B1230F8E7375DB5369B1D5C(L_1, L_2, NULL);
		// _buttonPlayback.OnDown += ButtonPlayback_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_3 = __this->____buttonPlayback_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)SampleRecordAnimationUI_ButtonPlayback_Down_m6B9ED14CECAAF9ABFCD8F20404789F6C692D7A7E_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		QuickUIInteractiveItem_add_OnDown_mE381E147ED8A2A9B9B1230F8E7375DB5369B1D5C(L_3, L_4, NULL);
		// _buttonExportToAnim.OnDown += ButtonExportToAnim_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_5 = __this->____buttonExportToAnim_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_5);
		QuickUIInteractiveItem_add_OnDown_mE381E147ED8A2A9B9B1230F8E7375DB5369B1D5C(L_5, L_6, NULL);
		// _buttonExportToJSON.OnDown += ButtonExportToJSON_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_7 = __this->____buttonExportToJSON_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		NullCheck(L_7);
		QuickUIInteractiveItem_add_OnDown_mE381E147ED8A2A9B9B1230F8E7375DB5369B1D5C(L_7, L_8, NULL);
		// _buttonLoadFromJSON.OnDown += ButtonLoadFromJSON_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_9 = __this->____buttonLoadFromJSON_10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 11)), NULL);
		NullCheck(L_9);
		QuickUIInteractiveItem_add_OnDown_mE381E147ED8A2A9B9B1230F8E7375DB5369B1D5C(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_OnDestroy_m193262E2C5845966D104990335CD00FC4AE9EFF1 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleRecordAnimationUI_ButtonPlayback_Down_m6B9ED14CECAAF9ABFCD8F20404789F6C692D7A7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SampleRecordAnimationUI_ButtonRecordStop_Down_m71B43B29D9694B1CAC35935AEDC52E47A94A371C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// QuickVRManager.OnTargetAnimatorSet -= OnTargetAnimatorSetAction;
		QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637* L_0 = (QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637*)il2cpp_codegen_object_new(QuickVRManagerActionAnimator_t415A953ED31E5A4F9E181E8D495503749C6A3637_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		QuickVRManagerActionAnimator__ctor_m2E5253F1C90106F610393384DDC75E38953C3C99(L_0, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 12)), NULL);
		QuickVRManager_remove_OnTargetAnimatorSet_mACF2FC990E5577CBC701A6A9E0AB0295B93F8A16(L_0, NULL);
		// if (_buttonRecordStop)
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_1 = __this->____buttonRecordStop_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// _buttonRecordStop.OnDown -= ButtonRecordStop_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_4 = __this->____buttonRecordStop_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)SampleRecordAnimationUI_ButtonRecordStop_Down_m71B43B29D9694B1CAC35935AEDC52E47A94A371C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		QuickUIInteractiveItem_remove_OnDown_mD9C2ADA3838A72DF1C25B4AAC7CB9ED86BC9F877(L_4, L_5, NULL);
	}

IL_003d:
	{
		// if (_buttonPlayback)
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_6 = __this->____buttonPlayback_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		// _buttonPlayback.OnDown -= ButtonPlayback_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_9 = __this->____buttonPlayback_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)SampleRecordAnimationUI_ButtonPlayback_Down_m6B9ED14CECAAF9ABFCD8F20404789F6C692D7A7E_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		QuickUIInteractiveItem_remove_OnDown_mD9C2ADA3838A72DF1C25B4AAC7CB9ED86BC9F877(L_9, L_10, NULL);
	}

IL_0066:
	{
		// if (_buttonExportToAnim)
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_11 = __this->____buttonExportToAnim_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_11, NULL);
		V_2 = L_12;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0090;
		}
	}
	{
		// _buttonExportToAnim.OnDown += ButtonExportToAnim_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_14 = __this->____buttonExportToAnim_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_15, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_14);
		QuickUIInteractiveItem_add_OnDown_mE381E147ED8A2A9B9B1230F8E7375DB5369B1D5C(L_14, L_15, NULL);
	}

IL_0090:
	{
		// if (_buttonExportToJSON)
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_16 = __this->____buttonExportToJSON_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_16, NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00ba;
		}
	}
	{
		// _buttonExportToJSON.OnDown -= ButtonExportToJSON_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_19 = __this->____buttonExportToJSON_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_20 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_20, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		NullCheck(L_19);
		QuickUIInteractiveItem_remove_OnDown_mD9C2ADA3838A72DF1C25B4AAC7CB9ED86BC9F877(L_19, L_20, NULL);
	}

IL_00ba:
	{
		// if (_buttonLoadFromJSON)
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_21 = __this->____buttonLoadFromJSON_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		V_4 = L_22;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		// _buttonLoadFromJSON.OnDown -= ButtonLoadFromJSON_Down;
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_24 = __this->____buttonLoadFromJSON_10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_25 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_25, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 11)), NULL);
		NullCheck(L_24);
		QuickUIInteractiveItem_remove_OnDown_mD9C2ADA3838A72DF1C25B4AAC7CB9ED86BC9F877(L_24, L_25, NULL);
	}

IL_00e6:
	{
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_OnEnable_m9BADFF156ABA8B748165A720ACF32D5F4885E252 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	{
		// _coUpdatePosition = StartCoroutine(CoUpdatePosition());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(14 /* System.Collections.IEnumerator QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::CoUpdatePosition() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		__this->____coUpdatePosition_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdatePosition_18), (void*)L_1);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_OnDisable_m556D7B4028CF6B288EFDBF9E9BCAF9C6B47A153F (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// _coUpdatePosition = null;
		__this->____coUpdatePosition_18 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdatePosition_18), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// _coUpdateTargetFwd = null;
		__this->____coUpdateTargetFwd_20 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdateTargetFwd_20), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_Start_m7D4D0BF803ABF2B44507C7FD60CEE445953E42AC (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _canvasGroup = gameObject.GetOrCreateComponent<CanvasGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1;
		L_1 = QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509(L_0, QuickUtils_GetOrCreateComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mB67A656DFE546644DCF4E8F4306F460846D5C509_RuntimeMethod_var);
		__this->____canvasGroup_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasGroup_17), (void*)L_1);
		// _interactionManager = QuickSingletonManager.GetInstance<QuickVRInteractionManager>();
		il2cpp_codegen_runtime_class_init_inline(QuickSingletonManager_tE49D83832A9437641D48A3AF35F2607F57395F34_il2cpp_TypeInfo_var);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_2;
		L_2 = QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C(QuickSingletonManager_GetInstance_TisQuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0_mE2E59C8192B95F53393C1492CA14E638693C192C_RuntimeMethod_var);
		__this->____interactionManager_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactionManager_13), (void*)L_2);
		// _interactorLeftHand = _interactionManager._interactorHandLeft;
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_3 = __this->____interactionManager_13;
		NullCheck(L_3);
		QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* L_4;
		L_4 = QuickVRInteractionManager_get__interactorHandLeft_m9C710E6B694D258BF135216A1EDEBDD8A6A2FC72_inline(L_3, NULL);
		__this->____interactorLeftHand_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorLeftHand_14), (void*)L_4);
		// _interactorRightHand = _interactionManager._interactorHandRight;
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_5 = __this->____interactionManager_13;
		NullCheck(L_5);
		QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* L_6;
		L_6 = QuickVRInteractionManager_get__interactorHandRight_m29BA81B98C87D42045D2AE30C9E8A96CCB1838C1_inline(L_5, NULL);
		__this->____interactorRightHand_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorRightHand_15), (void*)L_6);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::ButtonRecordStop_Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_ButtonRecordStop_Down_m71B43B29D9694B1CAC35935AEDC52E47A94A371C (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_animationPlayerSrc.IsRecording())
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_0 = __this->____animationPlayerSrc_11;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean QuickVR.QuickAnimationPlayer::IsRecording() */, L_0);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// _animationPlayerSrc.StopRecording();
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_3 = __this->____animationPlayerSrc_11;
		NullCheck(L_3);
		QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* L_4;
		L_4 = VirtualFuncInvoker0< QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* >::Invoke(10 /* QuickVR.QuickAnimation QuickVR.QuickAnimationPlayer::StopRecording() */, L_3);
		goto IL_002e;
	}

IL_0020:
	{
		// _animationPlayerSrc.Record();
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_5 = __this->____animationPlayerSrc_11;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(9 /* System.Void QuickVR.QuickAnimationPlayer::Record() */, L_5);
	}

IL_002e:
	{
		// UpdateStateButtonRecordStop();
		VirtualActionInvoker0::Invoke(16 /* System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::UpdateStateButtonRecordStop() */, __this);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::ButtonPlayback_Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_ButtonPlayback_Down_m6B9ED14CECAAF9ABFCD8F20404789F6C692D7A7E (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	{
		// _animationPlayerDst.Play(_animationPlayerSrc.GetRecordedAnimation());
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_0 = __this->____animationPlayerDst_12;
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_1 = __this->____animationPlayerSrc_11;
		NullCheck(L_1);
		QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* L_2;
		L_2 = VirtualFuncInvoker0< QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* >::Invoke(11 /* QuickVR.QuickAnimation QuickVR.QuickAnimationPlayer::GetRecordedAnimation() */, L_1);
		NullCheck(L_0);
		VirtualActionInvoker3< QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5*, float, float >::Invoke(12 /* System.Void QuickVR.QuickAnimationPlayer::Play(QuickVR.QuickAnimation,System.Single,System.Single) */, L_0, L_2, (0.0f), (std::numeric_limits<float>::infinity()));
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::ButtonExportToAnim_Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_ButtonExportToAnim_Down_mB5C26EF7619131DF6389F284237784289EC680AE (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickAnimationUtils_tA5C76A765DDEF1D266083AA23EAA20F55AB4A4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA5DBB3DBB5AE9C54173C66B57A7933864609E12);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickAnimationUtils.SaveToAnim("test.anim", _animationPlayerSrc.GetRecordedAnimation());
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_0 = __this->____animationPlayerSrc_11;
		NullCheck(L_0);
		QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* L_1;
		L_1 = VirtualFuncInvoker0< QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* >::Invoke(11 /* QuickVR.QuickAnimation QuickVR.QuickAnimationPlayer::GetRecordedAnimation() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(QuickAnimationUtils_tA5C76A765DDEF1D266083AA23EAA20F55AB4A4CE_il2cpp_TypeInfo_var);
		QuickAnimationUtils_SaveToAnim_m03BC7729A7429B54FFF9026927244B034328ED70(_stringLiteralEA5DBB3DBB5AE9C54173C66B57A7933864609E12, L_1, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::ButtonExportToJSON_Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_ButtonExportToJSON_Down_mC18A159D9B634665E9F66CA16CD4218DB027D6D8 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickAnimationUtils_tA5C76A765DDEF1D266083AA23EAA20F55AB4A4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D66038BB0EBCA726A8CD9131AF88C6F4FD56295);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QuickAnimationUtils.SaveToJson("test.json", _animationPlayerSrc.GetRecordedAnimation());
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_0 = __this->____animationPlayerSrc_11;
		NullCheck(L_0);
		QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* L_1;
		L_1 = VirtualFuncInvoker0< QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* >::Invoke(11 /* QuickVR.QuickAnimation QuickVR.QuickAnimationPlayer::GetRecordedAnimation() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(QuickAnimationUtils_tA5C76A765DDEF1D266083AA23EAA20F55AB4A4CE_il2cpp_TypeInfo_var);
		QuickAnimationUtils_SaveToJson_m3F2594FF80E9285E3398DB8FCDC7DD781C542297(_stringLiteral0D66038BB0EBCA726A8CD9131AF88C6F4FD56295, L_1, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::ButtonLoadFromJSON_Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_ButtonLoadFromJSON_Down_m799A1A0C88A3235DEE30E86E84C87958EB2EE2C9 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickAnimationUtils_tA5C76A765DDEF1D266083AA23EAA20F55AB4A4CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D66038BB0EBCA726A8CD9131AF88C6F4FD56295);
		s_Il2CppMethodInitialized = true;
	}
	QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* V_0 = NULL;
	{
		// QuickAnimation animation = QuickAnimationUtils.FromJson(System.IO.File.ReadAllText("test.json"), _animationPlayerDst.GetComponent<Animator>());
		String_t* L_0;
		L_0 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(_stringLiteral0D66038BB0EBCA726A8CD9131AF88C6F4FD56295, NULL);
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_1 = __this->____animationPlayerDst_12;
		NullCheck(L_1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_1, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(QuickAnimationUtils_tA5C76A765DDEF1D266083AA23EAA20F55AB4A4CE_il2cpp_TypeInfo_var);
		QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* L_3;
		L_3 = QuickAnimationUtils_FromJson_mDF5D299C246B1EDF03915E852E65242F92EDDE54(L_0, L_2, NULL);
		V_0 = L_3;
		// _animationPlayerDst.Play(animation);
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_4 = __this->____animationPlayerDst_12;
		QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5* L_5 = V_0;
		NullCheck(L_4);
		VirtualActionInvoker3< QuickAnimation_t792878BA2D8AF49E33F942D9E7A56AC47E6C35B5*, float, float >::Invoke(12 /* System.Void QuickVR.QuickAnimationPlayer::Play(QuickVR.QuickAnimation,System.Single,System.Single) */, L_4, L_5, (0.0f), (std::numeric_limits<float>::infinity()));
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::OnTargetAnimatorSetAction(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_OnTargetAnimatorSetAction_mA21FAA4C3126EE04C5A5563DA5885020DDE0D06A (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, const RuntimeMethod* method) 
{
	{
		// _animator = animator;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___0_animator;
		SampleRecordAnimationUI_set__animator_mC4D127AA7D2B72BD991EB40FB92AA4908644E012(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_Update_mA40375F80304090E09A10502B7E3F2B3635DA3C0 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManagerVR_t8A9ED011D340908B9432A345A4C806A18EED56F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B6_0 = NULL;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B7_1 = NULL;
	{
		// if (InputManagerVR.GetKeyDown(InputManagerVR.ButtonCodes.LeftPrimaryPress) || InputManagerKeyboard.GetKeyDown(UnityEngine.InputSystem.Key.X))
		il2cpp_codegen_runtime_class_init_inline(InputManagerVR_t8A9ED011D340908B9432A345A4C806A18EED56F6_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InputManagerVR_GetKeyDown_mD314CF0813F10EC21480851A8E535539783957F6(0, NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1;
		L_1 = InputManagerKeyboard_GetKeyDown_mBF48075A1C48E9246B570B9D2E97C23AB3A135A9(((int32_t)38), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		// _show = !_show;
		bool L_3 = __this->____show_16;
		__this->____show_16 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		// _canvasGroup.alpha = _show ? 1 : 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = __this->____canvasGroup_17;
		bool L_5 = __this->____show_16;
		G_B5_0 = L_4;
		if (L_5)
		{
			G_B6_0 = L_4;
			goto IL_0038;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0039:
	{
		NullCheck(G_B7_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(G_B7_1, ((float)G_B7_0), NULL);
		// _canvasGroup.blocksRaycasts = _show;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->____canvasGroup_17;
		bool L_7 = __this->____show_16;
		NullCheck(L_6);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_6, L_7, NULL);
		// _canvasGroup.interactable = _show;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->____canvasGroup_17;
		bool L_9 = __this->____show_16;
		NullCheck(L_8);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_8, L_9, NULL);
		// if (_show)
		bool L_10 = __this->____show_16;
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0070;
		}
	}
	{
	}

IL_0070:
	{
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::CoUpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SampleRecordAnimationUI_CoUpdatePosition_mC7B807812D9C2D4654B7777D29DF6A85BC293E5F (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* L_0 = (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B*)il2cpp_codegen_object_new(U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoUpdatePositionU3Ed__32__ctor_m7A099ADFCC12384AF414E6638B4F8C1247F81FCF(L_0, 0, NULL);
		U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::CoUpdateTargetForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SampleRecordAnimationUI_CoUpdateTargetForward_m9721B3CA1B7A581E50FD3C56697094B240617408 (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* L_0 = (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641*)il2cpp_codegen_object_new(U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoUpdateTargetForwardU3Ed__33__ctor_m5E319FB9D5AB9FEF9B805022C565858B4648F5D1(L_0, 0, NULL);
		U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::UpdateStateButtonRecordStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI_UpdateStateButtonRecordStop_m1B8FB1A116CB5CC6129C2556D54D6B3DD1440E2E (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A25B524CB22B2E03291D7392189EFCD67D6663B);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B2_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B3_1 = NULL;
	{
		// _buttonRecordStop.GetComponentInChildren<TextMeshProUGUI>().text = (_animationPlayerSrc.IsRecording())? "Stop Recording" : "Record";
		QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD* L_0 = __this->____buttonRecordStop_6;
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_0, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7* L_2 = __this->____animationPlayerSrc_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean QuickVR.QuickAnimationPlayer::IsRecording() */, L_2);
		G_B1_0 = L_1;
		if (L_3)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		G_B3_0 = _stringLiteral2E3D8376A2AF9873C3CE7D5139856AE599C8F0F1;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = _stringLiteral9A25B524CB22B2E03291D7392189EFCD67D6663B;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleRecordAnimationUI__ctor_mD123F1DF6A67A6ADCA14F3FBF5AEDF99115E71BF (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* __this, const RuntimeMethod* method) 
{
	{
		// public float _guiDistance = 2.5f;
		__this->____guiDistance_4 = (2.5f);
		// public float _guiDeadAngle = 45.0f;
		__this->____guiDeadAngle_5 = (45.0f);
		// public QuickUIButton _buttonRecordStop = null;
		__this->____buttonRecordStop_6 = (QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonRecordStop_6), (void*)(QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL);
		// public QuickUIButton _buttonPlayback = null;
		__this->____buttonPlayback_7 = (QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonPlayback_7), (void*)(QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL);
		// public QuickUIButton _buttonExportToAnim = null;
		__this->____buttonExportToAnim_8 = (QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonExportToAnim_8), (void*)(QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL);
		// public QuickUIButton _buttonExportToJSON = null;
		__this->____buttonExportToJSON_9 = (QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonExportToJSON_9), (void*)(QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL);
		// public QuickUIButton _buttonLoadFromJSON = null;
		__this->____buttonLoadFromJSON_10 = (QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonLoadFromJSON_10), (void*)(QuickUIButton_t57F1A288305957C30AFAADA89C711F345D5708FD*)NULL);
		// public QuickAnimationPlayer _animationPlayerSrc = null;
		__this->____animationPlayerSrc_11 = (QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animationPlayerSrc_11), (void*)(QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7*)NULL);
		// public QuickAnimationPlayer _animationPlayerDst = null;
		__this->____animationPlayerDst_12 = (QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____animationPlayerDst_12), (void*)(QuickAnimationPlayer_tBCE96715D69317A61D64FFB6FA0359E47918CBE7*)NULL);
		// protected QuickVRInteractionManager _interactionManager = null;
		__this->____interactionManager_13 = (QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactionManager_13), (void*)(QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0*)NULL);
		// protected QuickVRInteractor _interactorLeftHand = null;
		__this->____interactorLeftHand_14 = (QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorLeftHand_14), (void*)(QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL);
		// protected QuickVRInteractor _interactorRightHand = null;
		__this->____interactorRightHand_15 = (QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactorRightHand_15), (void*)(QuickVRInteractor_t5F6DBBC8FCD4E94A82053910233BFDC75F44666B*)NULL);
		// protected bool _show = true;
		__this->____show_16 = (bool)1;
		// protected CanvasGroup _canvasGroup = null;
		__this->____canvasGroup_17 = (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvasGroup_17), (void*)(CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)NULL);
		// protected Coroutine _coUpdatePosition = null;
		__this->____coUpdatePosition_18 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdatePosition_18), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// protected Animator m_Animator = null;
		__this->___m_Animator_19 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Animator_19), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		// protected Coroutine _coUpdateTargetFwd = null;
		__this->____coUpdateTargetFwd_20 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____coUpdateTargetFwd_20), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
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
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__32__ctor_m7A099ADFCC12384AF414E6638B4F8C1247F81FCF (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__32_System_IDisposable_Dispose_mA4FEBAFD8DF6E36FCB5352B22149FE5249800A41 (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoUpdatePositionU3Ed__32_MoveNext_m7888C90FF7C928AC3D2FF4365A5534F3138EF29C (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0138;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0140;
	}

IL_0028:
	{
		// if (_animator)
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0128;
		}
	}
	{
		// if ((Vector3.Angle(transform.forward, _animator.transform.forward) > 45) && _coUpdateTargetFwd == null)
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		float L_14;
		L_14 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_9, L_13, NULL);
		if ((!(((float)L_14) > ((float)(45.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_16 = L_15->____coUpdateTargetFwd_20;
		G_B12_0 = ((((RuntimeObject*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B12_0 = 0;
	}

IL_0083:
	{
		V_2 = (bool)G_B12_0;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_00aa;
		}
	}
	{
		// _coUpdateTargetFwd = StartCoroutine(CoUpdateTargetForward());
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_18 = __this->___U3CU3E4__this_2;
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_19 = __this->___U3CU3E4__this_2;
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Collections.IEnumerator QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI::CoUpdateTargetForward() */, L_20);
		NullCheck(L_19);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_22;
		L_22 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_19, L_21, NULL);
		NullCheck(L_18);
		L_18->____coUpdateTargetFwd_20 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____coUpdateTargetFwd_20), (void*)L_22);
	}

IL_00aa:
	{
		// Vector3 offset = transform.forward * _guiDistance + _animator.transform.up;
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_24, NULL);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		float L_27 = L_26->____guiDistance_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_27, NULL);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_29 = __this->___U3CU3E4__this_2;
		NullCheck(L_29);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30;
		L_30 = SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7(L_29, NULL);
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_28, L_32, NULL);
		__this->___U3CoffsetU3E5__1_3 = L_33;
		// transform.position = _animator.transform.position + offset;
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_36 = __this->___U3CU3E4__this_2;
		NullCheck(L_36);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_37;
		L_37 = SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7(L_36, NULL);
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->___U3CoffsetU3E5__1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_40, NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&__this->___U3CoffsetU3E5__1_3);
		il2cpp_codegen_initobj(L_42, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_0128:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0138:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0140:
	{
		// while (true)
		V_3 = (bool)1;
		goto IL_0028;
	}
}
// System.Object QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdatePositionU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C5DD8CFDEF843FC9717A94B81DA5C64335859E2 (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdatePositionU3Ed__32_System_Collections_IEnumerator_Reset_mB92A79537C27FDC72D7ABE82AC06ADF208D9AFED (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoUpdatePositionU3Ed__32_System_Collections_IEnumerator_Reset_mB92A79537C27FDC72D7ABE82AC06ADF208D9AFED_RuntimeMethod_var)));
	}
}
// System.Object QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdatePosition>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdatePositionU3Ed__32_System_Collections_IEnumerator_get_Current_mBACBEA17C4EAF14E266F5555E084CCF08717B712 (U3CCoUpdatePositionU3Ed__32_t7B84B0FCB487541DE7D7B940AD7F0D2D08D57D4B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__33__ctor_m5E319FB9D5AB9FEF9B805022C565858B4648F5D1 (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__33_System_IDisposable_Dispose_m6C238B30BB8BDEAEF0B1D482C147FB220F4DD1C6 (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoUpdateTargetForwardU3Ed__33_MoveNext_mD3EC73544827EA288906C610DB69AD89F2D97E1B (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0073;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_007b;
	}

IL_0022:
	{
		// transform.forward = Vector3.Lerp(transform.forward, _animator.transform.forward, Time.deltaTime);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9;
		L_9 = SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_7, L_11, L_12, NULL);
		NullCheck(L_4);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_4, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0073:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007b:
	{
		// while (Vector3.Angle(transform.forward, _animator.transform.forward) > 1)
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18;
		L_18 = SampleRecordAnimationUI_get__animator_mCE689236F1B65B1ACBF17E3C0103AF15D389CCD7(L_17, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		float L_21;
		L_21 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_16, L_20, NULL);
		V_1 = (bool)((((float)L_21) > ((float)(1.0f)))? 1 : 0);
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_0022;
		}
	}
	{
		// _coUpdateTargetFwd = null;
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		L_23->____coUpdateTargetFwd_20 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____coUpdateTargetFwd_20), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateTargetForwardU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF8C18BEC834D20C48796A9D96FA1F05E5E25FA41 (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateTargetForwardU3Ed__33_System_Collections_IEnumerator_Reset_m83C28FAD429F5938C5B4080DF025E236367C70D7 (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoUpdateTargetForwardU3Ed__33_System_Collections_IEnumerator_Reset_m83C28FAD429F5938C5B4080DF025E236367C70D7_RuntimeMethod_var)));
	}
}
// System.Object QuickVR.Samples.RecordAnimation.SampleRecordAnimationUI/<CoUpdateTargetForward>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateTargetForwardU3Ed__33_System_Collections_IEnumerator_get_Current_mCD31B128A93039EADDD6FFA4A61CE0C17B4FF173 (U3CCoUpdateTargetForwardU3Ed__33_tD482FE4F197DDC59CF1DF87807DF571262E46641* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageSampleRecordAnimation_Start_m72C429BC1ED4E8CFC2F003BB5C136C85E2C6FDDD (StageSampleRecordAnimation_t1E1D96EBC1C8CC162EBF75953A2078D6DC89B1F2* __this, const RuntimeMethod* method) 
{
	{
		// _maxTimeOut = -1;   //Just to ensure that this stage is executed forever.
		((QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C*)__this)->____maxTimeOut_4 = (-1.0f);
		// ShowGUI(false);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation::ShowGUI(System.Boolean) */, __this, (bool)0);
		// base.Start();
		QuickStageBase_Start_mC38B3375C82704B80E5CD481C1AA6C6839521E00(__this, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation::ShowGUI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageSampleRecordAnimation_ShowGUI_m12DC05B24AE6BC9075866C5F1246BAEE0218CA04 (StageSampleRecordAnimation_t1E1D96EBC1C8CC162EBF75953A2078D6DC89B1F2* __this, bool ___0_show, const RuntimeMethod* method) 
{
	{
		// _gui.gameObject.SetActive(show);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_0 = __this->____gui_26;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		bool L_2 = ___0_show;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, L_2, NULL);
		// _interactionManager._interactorHandRight.SetInteractorEnabled(InteractorType.UI, show);
		QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* L_3 = ((QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C*)__this)->____interactionManager_13;
		NullCheck(L_3);
		QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* L_4;
		L_4 = QuickVRInteractionManager_get__interactorHandRight_m29BA81B98C87D42045D2AE30C9E8A96CCB1838C1_inline(L_3, NULL);
		bool L_5 = ___0_show;
		NullCheck(L_4);
		VirtualActionInvoker2< int32_t, bool >::Invoke(10 /* System.Void QuickVR.QuickVRInteractor::SetInteractorEnabled(QuickVR.InteractorType,System.Boolean) */, L_4, 3, L_5);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageSampleRecordAnimation_Update_m70305F5BF76FA3EB8E9A34847711DC3BFFA75A45 (StageSampleRecordAnimation_t1E1D96EBC1C8CC162EBF75953A2078D6DC89B1F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F1D657DEA1FEA3931DC41B5E68D364A1630958B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (InputManager.GetButtonDown("ShowGUI"))
		bool L_0;
		L_0 = InputManager_GetButtonDown_mDA43761261D607FC5E023B3267BC566ED31F8DD0(_stringLiteral5F1D657DEA1FEA3931DC41B5E68D364A1630958B, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// ShowGUI(!_gui.gameObject.activeSelf);
		SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7* L_2 = __this->____gui_26;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_3, NULL);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation::ShowGUI(System.Boolean) */, __this, (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
	}

IL_002b:
	{
		// base.Update();
		QuickStageBase_Update_mE8A5E033C55FEC639992822F1E94A6F65FBECD63(__this, NULL);
		// }
		return;
	}
}
// System.Void QuickVR.Samples.RecordAnimation.StageSampleRecordAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageSampleRecordAnimation__ctor_mE0C530B9E3E9AB74F4234C53EAFD9896E0CE1A95 (StageSampleRecordAnimation_t1E1D96EBC1C8CC162EBF75953A2078D6DC89B1F2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SampleRecordAnimationUI _gui = null;
		__this->____gui_26 = (SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gui_26), (void*)(SampleRecordAnimationUI_t66AD2F57BCA1EDF46A5483FBC07FFAC24C0A25A7*)NULL);
		il2cpp_codegen_runtime_class_init_inline(QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		QuickStageBase__ctor_m1A429E7471660F607E2DEB75D1224E6CB698AF6B(__this, NULL);
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
// System.Boolean QuickVR.Samples.Workflow.StageCheckIsCube::Condition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StageCheckIsCube_Condition_m79A29F6E1AF1FB1CBC4C896950CDA14B08B1461A (StageCheckIsCube_t85F1F4BFC95D168CE83A3048EA4432A0CF959D14* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return _spawnCubes;
		bool L_0 = __this->____spawnCubes_28;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void QuickVR.Samples.Workflow.StageCheckIsCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageCheckIsCube__ctor_m89BB48A473E3E220C08BF4E3BDE055596F0DF347 (StageCheckIsCube_t85F1F4BFC95D168CE83A3048EA4432A0CF959D14* __this, const RuntimeMethod* method) 
{
	{
		// public bool _spawnCubes = true;
		__this->____spawnCubes_28 = (bool)1;
		QuickStageCondition__ctor_mA313AE716F92D3AEEC482DC85D18C3A5567AEAE4(__this, NULL);
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
// System.Collections.IEnumerator QuickVR.Samples.Workflow.StageSpawnCube::CoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StageSpawnCube_CoUpdate_mED882C395EB71BB31FC58CC91E6BACE4CC563299 (StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* L_0 = (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1*)il2cpp_codegen_object_new(U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoUpdateU3Ed__2__ctor_mF35F7434673F2FC422C41C554A13948887563966(L_0, 0, NULL);
		U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void QuickVR.Samples.Workflow.StageSpawnCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageSpawnCube__ctor_m59FB929CA4D8DABCF84FB18AC7516E6BEC430D04 (StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Transform _spawnCenter = null;
		__this->____spawnCenter_26 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawnCenter_26), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// public float _spawnRadius = 1.0f;
		__this->____spawnRadius_27 = (1.0f);
		il2cpp_codegen_runtime_class_init_inline(QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		QuickStageBase__ctor_m1A429E7471660F607E2DEB75D1224E6CB698AF6B(__this, NULL);
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
// System.Void QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2__ctor_mF35F7434673F2FC422C41C554A13948887563966 (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2_System_IDisposable_Dispose_m83DED6ECE032061B91E8F88FE4501BFF809D142C (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoUpdateU3Ed__2_MoveNext_m3F4FD63F718AEDBF9AD36B62A5B06E6257F58C43 (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		__this->___U3CcubeU3E5__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcubeU3E5__1_3), (void*)L_4);
		// cube.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___U3CcubeU3E5__1_3;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_8, NULL);
		// cube.transform.localScale = Vector3.one * 0.25f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___U3CcubeU3E5__1_3;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, (0.25f), NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_12, NULL);
		// cube.transform.position = _spawnCenter.position + (Random.insideUnitSphere * _spawnRadius);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___U3CcubeU3E5__1_3;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->____spawnCenter_26;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		StageSpawnCube_t63E99DE0E6366FDCA532EB992C2630241513C87B* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		float L_20 = L_19->____spawnRadius_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_21, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_22, NULL);
		// }
		return (bool)0;
	}
}
// System.Object QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB62B9EEC5CECA1A8C22F214AA3C321A1433C1DBA (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_Reset_m920BDE6645BDD7FC8DE43BE3934C48BC6891A42A (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_Reset_m920BDE6645BDD7FC8DE43BE3934C48BC6891A42A_RuntimeMethod_var)));
	}
}
// System.Object QuickVR.Samples.Workflow.StageSpawnCube/<CoUpdate>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_get_Current_mA0046713160796D9F6BF0AB3A148DC096BCC8F5C (U3CCoUpdateU3Ed__2_t0F19F7EA05883F8FE41220ADCDBF58812ADAB0B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Collections.IEnumerator QuickVR.Samples.Workflow.StageSpawnSphere::CoUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StageSpawnSphere_CoUpdate_mFA9BC8B57CE32C75CE69B62C755EDDC233C0F0AC (StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* L_0 = (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1*)il2cpp_codegen_object_new(U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoUpdateU3Ed__2__ctor_mE22F1C767CD77DE431FA346E5AA7A391A9AE1A3D(L_0, 0, NULL);
		U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void QuickVR.Samples.Workflow.StageSpawnSphere::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageSpawnSphere__ctor_mE47A0BC062E6FCF90A080D39CBBF4CF5B7E07B8E (StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Transform _spawnCenter = null;
		__this->____spawnCenter_26 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____spawnCenter_26), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// public float _spawnRadius = 1.0f;
		__this->____spawnRadius_27 = (1.0f);
		il2cpp_codegen_runtime_class_init_inline(QuickStageBase_tAD59DAD937AD5041B5D1B1415705A33BF717962C_il2cpp_TypeInfo_var);
		QuickStageBase__ctor_m1A429E7471660F607E2DEB75D1224E6CB698AF6B(__this, NULL);
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
// System.Void QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2__ctor_mE22F1C767CD77DE431FA346E5AA7A391A9AE1A3D (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2_System_IDisposable_Dispose_m7DF0ACD55AAC8782BA7507E6A42F78630480AB32 (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoUpdateU3Ed__2_MoveNext_m4CD9DC0D1129AF45A4793CC4ABDE415700C23FF1 (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0039;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(0, NULL);
		__this->___U3CcubeU3E5__1_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcubeU3E5__1_3), (void*)L_4);
		// cube.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___U3CcubeU3E5__1_3;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_6);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, L_8, NULL);
		// cube.transform.localScale = Vector3.one * 0.25f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___U3CcubeU3E5__1_3;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, (0.25f), NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_12, NULL);
		// cube.transform.position = _spawnCenter.position + (Random.insideUnitSphere * _spawnRadius);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___U3CcubeU3E5__1_3;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->____spawnCenter_26;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		StageSpawnSphere_tD405440D33E513C3DBC1848FFE3A1456AA6353E1* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		float L_20 = L_19->____spawnRadius_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_21, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_22, NULL);
		// }
		return (bool)0;
	}
}
// System.Object QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m494DBAFAFEF788CF60DE7B972AC4B0F2282DB2A6 (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_Reset_m31C8AA1D743BDA8E09CA04599549807530BA094F (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_Reset_m31C8AA1D743BDA8E09CA04599549807530BA094F_RuntimeMethod_var)));
	}
}
// System.Object QuickVR.Samples.Workflow.StageSpawnSphere/<CoUpdate>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoUpdateU3Ed__2_System_Collections_IEnumerator_get_Current_mC3AF30647CC0BFFF4C9F61FC96D72BD2C2CD5D5E (U3CCoUpdateU3Ed__2_t89B88450D76545245B0E18A987C25323E32E20B1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_planeNormal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_planeNormal;
		float L_2;
		L_2 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_planeNormal;
		float L_9;
		L_9 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___1_planeNormal;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_vector;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_planeNormal;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___0_vector;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_planeNormal;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m76C77F9D7BAF5969FA5B7500ED2D5FF9F9FA4153_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_axis, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_to;
		float L_2;
		L_2 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_from;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___1_to;
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_from;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_to;
		float L_10 = L_9.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_from;
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___1_to;
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_from;
		float L_16 = L_15.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___1_to;
		float L_18 = L_17.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)il2cpp_codegen_multiply(L_16, L_18))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_from;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___1_to;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_from;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___1_to;
		float L_26 = L_25.___x_2;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_20, L_22)), ((float)il2cpp_codegen_multiply(L_24, L_26))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___2_axis;
		float L_28 = L_27.___x_2;
		float L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___2_axis;
		float L_31 = L_30.___y_3;
		float L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___2_axis;
		float L_34 = L_33.___z_4;
		float L_35 = V_3;
		float L_36;
		L_36 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_29)), ((float)il2cpp_codegen_multiply(L_31, L_32)))), ((float)il2cpp_codegen_multiply(L_34, L_35)))), NULL);
		V_4 = L_36;
		float L_37 = V_0;
		float L_38 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		goto IL_0086;
	}

IL_0086:
	{
		float L_39 = V_5;
		return L_39;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* QuickVRInteractionManager_get__interactorHandLeft_m9C710E6B694D258BF135216A1EDEBDD8A6A2FC72_inline (QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* __this, const RuntimeMethod* method) 
{
	{
		// public QuickVRInteractorHand _interactorHandLeft { get; protected set; }
		QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* L_0 = __this->___U3C_interactorHandLeftU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* QuickVRInteractionManager_get__interactorHandRight_m29BA81B98C87D42045D2AE30C9E8A96CCB1838C1_inline (QuickVRInteractionManager_tB6B37E8EE22971AEFFEDE23D145212CEE1F706D0* __this, const RuntimeMethod* method) 
{
	{
		// public QuickVRInteractorHand _interactorHandRight { get; protected set; }
		QuickVRInteractorHand_t51B35AE2453208E0A6A7F903C62EDC7C9074240C* L_0 = __this->___U3C_interactorHandRightU3Ek__BackingField_10;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
