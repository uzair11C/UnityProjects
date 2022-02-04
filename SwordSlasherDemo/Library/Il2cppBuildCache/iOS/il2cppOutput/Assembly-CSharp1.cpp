#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`1<EasyInput.Core.ButtonClick>
struct UnityEvent_1_tDCA911CC0B0DB5E480EBC833F516109E46B738CE;
// UnityEngine.Events.UnityEvent`1<EasyInput.Core.ControllerAxis>
struct UnityEvent_1_t7A2520776069E10CD98ABE7D27AEBFEEBB0DE628;
// UnityEngine.Events.UnityEvent`1<EasyInput.Core.InputTouch>
struct UnityEvent_1_tCA3CC69489A3E45D5E4B0D326C19688602046F62;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829;
// UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct UnityEvent_2_t7498A4B8C5E75A81F4E86F3F28CDC2E585CBE4D5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// EasyInput.Core.ButtonClick
struct ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// EasyInput.Core.ControllerAxis
struct ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// EasyInput.Core.InputTouch
struct InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// EasyInput.Core.Motion
struct Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// EasyInput.StandardControllers.StandardTouchpadController
struct StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165;
// EasyInput.Misc.Steering
struct Steering_t7721821869E4257C330E9AE355FE30666731BD08;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// EasyInput.Misc.TouchDiagnostics
struct TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36
struct U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8;
// EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31
struct U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A;
// EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29
struct U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327;
// EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34
struct U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC;
// EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26
struct U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C;
// EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24
struct U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5;
// EasyInput.StandardControllers.CustomAxisController/AxisHandler
struct AxisHandler_t14D89929DE69C6AEA63055C828F32991DFBAF7F5;
// EasyInput.StandardControllers.CustomButtonClickController/ButtonHandler
struct ButtonHandler_t345A11A6BAB5285AEFBB28858F028BB5FDA3760D;
// EasyInput.StandardControllers.CustomButtonVoidController/ButtonHandler
struct ButtonHandler_t6148EBFB022E628729B22C104582415A4977B3C4;
// EasyInput.StandardControllers.CustomMotionController/AccelerometerHandler
struct AccelerometerHandler_t1C7172D0267EEBB75435F675B3264685913CFDD9;
// EasyInput.StandardControllers.CustomMotionController/GyroHandler
struct GyroHandler_t23A8F07BA50CD11B1A2A9340BBCA08475429FCD9;
// EasyInput.StandardControllers.CustomTouchInputController/TouchHandler
struct TouchHandler_t3518D8AEA9CAB00B8C92AB6122C3CA94973616D3;
// EasyInput.StandardControllers.CustomTouchVoidController/TouchHandler
struct TouchHandler_tE081577B9B7FACFC7D31781FFF4F66F526CE8A2B;
// EasyInput.Core.EasyInputHelper/AccelerometerHandler
struct AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93;
// EasyInput.Core.EasyInputHelper/GyroHandler
struct GyroHandler_t1150F909839ECD716336152E4835017495C9EB63;
// EasyInput.Core.EasyInputHelper/MotionHandler
struct MotionHandler_t7DFBED96A53BABB65431051DE551FA91779A6A86;
// EasyInput.Core.EasyInputHelper/doubleClickEndHandler
struct doubleClickEndHandler_tAD931AA14D746AA44D665104343FCDBCFEF994EC;
// EasyInput.Core.EasyInputHelper/doubleTouchEndHandler
struct doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04;
// EasyInput.Core.EasyInputHelper/longClickEndHandler
struct longClickEndHandler_t46C56619A7057738687BAD1EEF4147451D8A9E02;
// EasyInput.Core.EasyInputHelper/longClickHandler
struct longClickHandler_t78C9D39A86F9317C64CB4EF196FED88DECBB1B89;
// EasyInput.Core.EasyInputHelper/longClickStartHandler
struct longClickStartHandler_t66152905869AFA1988101991AA6652EEC6ACCA27;
// EasyInput.Core.EasyInputHelper/longTouchEndHandler
struct longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21;
// EasyInput.Core.EasyInputHelper/longTouchHandler
struct longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96;
// EasyInput.Core.EasyInputHelper/longTouchStartHandler
struct longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023;
// EasyInput.Core.EasyInputHelper/onAxisHandler
struct onAxisHandler_t51A99E4C3C496FA232D4C4FCEB8BD4C9F40C08A6;
// EasyInput.Core.EasyInputHelper/onClickEndHandler
struct onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC;
// EasyInput.Core.EasyInputHelper/onClickHandler
struct onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917;
// EasyInput.Core.EasyInputHelper/onClickStartHandler
struct onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449;
// EasyInput.Core.EasyInputHelper/onTouchEndHandler
struct onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF;
// EasyInput.Core.EasyInputHelper/onTouchHandler
struct onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B;
// EasyInput.Core.EasyInputHelper/onTouchStartHandler
struct onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC;
// EasyInput.Core.EasyInputHelper/quickClickEndHandler
struct quickClickEndHandler_t2ABFD780F58ED99E5EDFDB654DA601EC067FE85B;
// EasyInput.Core.EasyInputHelper/quickTouchEndHandler
struct quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258;
// EasyInput.Core.EasyInputHelper/swipeDistanceHandler
struct swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36
struct U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C;
// EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31
struct U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565;
// EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29
struct U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2;
// EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34
struct U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD;
// EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38
struct U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E;
// EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26
struct U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6;
// EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24
struct U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6;

IL2CPP_EXTERN_C RuntimeClass* AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GyroHandler_t1150F909839ECD716336152E4835017495C9EB63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2A061F1D30406F8F7C715EF8D9D6387D21BCCCC0;
IL2CPP_EXTERN_C String_t* _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardTouchpadController_localAxisEnd_mF04FD6EFB660DF706D6E935E6371519A5501CD50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardTouchpadController_localAxis_m18E85B087AED184776BC0071109614AC4089FE8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Steering_localAccelerometer_mA56D94949FA1A8A8B72AA424FBB5F5AE6391BC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Steering_localClickEnd_mB622B1A8166603FE9BDC95691E17D1F53117E710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Steering_localClickStart_mC1A68FCC0A99CF0CB91ED626E9E8D470C28BE967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localAccel_mB3AA539DFA504CBBDF9FA35EF908CB42A4061734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localDoubleTouchEnd_m5178EF1E2F4446D9A4ED6210FDF9BF7B82C12F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localGyro_mEE220048CCE6DC7F96C429293772377A3CFCCEBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localLongTouchEnd_mBFDB3899948FA3EF72EE463D8C85A3C2FBC64BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localLongTouchStart_mB194BBA47420330F9E780910AF74AF2E68629604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localLongTouch_m2BDD32EEDDA6F4B089D5E891BAED72FA4FDFD855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localQuickTouchEnd_mBE59A582CE90D6CB3D542F6176776BAB1597ECE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localSwipe_m360D9C8371A518C56990FEAEE7E8FC4398272F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localTouchEnd_mCF5129C62C6E0DA3248B7F81BF832394EDF4B14A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localTouchStart_m0DC977785720A220ABDF4CFE98E3BEAFB838CE89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TouchDiagnostics_localTouch_mCAD018FD8480A3A8CFBBC1DB4FDC26EE1F9CAA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_Reset_m6540A39F57107F083F6F6F4A4B3D2BFB3C4FE45F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_Reset_m916DF896FB0D2B6357A25AE3F4FFC3822E9213B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_Reset_mA0DEA969C178498E221491DFC6AB8CBEA35A511F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_Reset_mEBBBF22485BCBC5CC47D0E11821E461135B69F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_Reset_m149878D17DA9701D2F708672F324A249549C9541_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_Reset_mC467C9BE67A2C14E2AC17D2052E508754492E8B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_Reset_m0BC5409E1A71138CFF96ED81B1EB2D834A5FFC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_Reset_m13D890E52D5E1D85C830CAF312F0F3FD12E1752C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearSwipeTextTouchEndU3Ed__38_System_Collections_IEnumerator_Reset_m3975CA0DBCE45F5088E8C1DA4099F1FB3CF4A194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_Reset_m63F0C413FDCBDD82E154AF79D65C9AD1FD014B9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_Reset_m728180ED96E6114E48F7FF754CFC196DBA7EB8C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_Reset_mA8A590127005F3ECCF3AB8EFFEA383BD8481B926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_Reset_mEE8F1F7937DDF2D58CFBCD520ECE735B6EF85CF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m52EF391B0FCF9BDC619781AC4ECF07EB6979AFAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA1BB7202EF9CB703F7474880ED1630015FBB5BB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDDC486EAA938D391327A4B49DFE8C9FE4A9AFAE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mB0024D2F132EC65C8DA83C650ECE1ADA38960E10_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36
struct U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31
struct U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29
struct U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34
struct U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26
struct U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24
struct U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36
struct U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31
struct U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29
struct U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34
struct U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38
struct U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26
struct U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24
struct U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6  : public RuntimeObject
{
public:
	// System.Int32 EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::delay
	float ___delay_2;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::textObject
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_textObject_3() { return static_cast<int32_t>(offsetof(U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6, ___textObject_3)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textObject_3() const { return ___textObject_3; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textObject_3() { return &___textObject_3; }
	inline void set_textObject_3(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<EasyInput.Core.ButtonClick>
struct UnityEvent_1_tDCA911CC0B0DB5E480EBC833F516109E46B738CE  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tDCA911CC0B0DB5E480EBC833F516109E46B738CE, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<EasyInput.Core.ControllerAxis>
struct UnityEvent_1_t7A2520776069E10CD98ABE7D27AEBFEEBB0DE628  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t7A2520776069E10CD98ABE7D27AEBFEEBB0DE628, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<EasyInput.Core.InputTouch>
struct UnityEvent_1_tCA3CC69489A3E45D5E4B0D326C19688602046F62  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tCA3CC69489A3E45D5E4B0D326C19688602046F62, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>
struct UnityEvent_2_t7498A4B8C5E75A81F4E86F3F28CDC2E585CBE4D5  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_t7498A4B8C5E75A81F4E86F3F28CDC2E585CBE4D5, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// EasyInput.Core.EasyInputConstants
struct EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F  : public RuntimeObject
{
public:

public:
};

struct EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields
{
public:
	// UnityEngine.Vector2 EasyInput.Core.EasyInputConstants::NOT_TOUCHING
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___NOT_TOUCHING_0;
	// System.Single EasyInput.Core.EasyInputConstants::NO_TIMESTAMP
	float ___NO_TIMESTAMP_1;
	// UnityEngine.Vector3 EasyInput.Core.EasyInputConstants::NOT_VALID
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___NOT_VALID_2;
	// System.Single EasyInput.Core.EasyInputConstants::MINUMUM_NOISE_THRESHOLD
	float ___MINUMUM_NOISE_THRESHOLD_3;
	// System.Int32 EasyInput.Core.EasyInputConstants::CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO
	int32_t ___CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4;

public:
	inline static int32_t get_offset_of_NOT_TOUCHING_0() { return static_cast<int32_t>(offsetof(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields, ___NOT_TOUCHING_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_NOT_TOUCHING_0() const { return ___NOT_TOUCHING_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_NOT_TOUCHING_0() { return &___NOT_TOUCHING_0; }
	inline void set_NOT_TOUCHING_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___NOT_TOUCHING_0 = value;
	}

	inline static int32_t get_offset_of_NO_TIMESTAMP_1() { return static_cast<int32_t>(offsetof(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields, ___NO_TIMESTAMP_1)); }
	inline float get_NO_TIMESTAMP_1() const { return ___NO_TIMESTAMP_1; }
	inline float* get_address_of_NO_TIMESTAMP_1() { return &___NO_TIMESTAMP_1; }
	inline void set_NO_TIMESTAMP_1(float value)
	{
		___NO_TIMESTAMP_1 = value;
	}

	inline static int32_t get_offset_of_NOT_VALID_2() { return static_cast<int32_t>(offsetof(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields, ___NOT_VALID_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_NOT_VALID_2() const { return ___NOT_VALID_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_NOT_VALID_2() { return &___NOT_VALID_2; }
	inline void set_NOT_VALID_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___NOT_VALID_2 = value;
	}

	inline static int32_t get_offset_of_MINUMUM_NOISE_THRESHOLD_3() { return static_cast<int32_t>(offsetof(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields, ___MINUMUM_NOISE_THRESHOLD_3)); }
	inline float get_MINUMUM_NOISE_THRESHOLD_3() const { return ___MINUMUM_NOISE_THRESHOLD_3; }
	inline float* get_address_of_MINUMUM_NOISE_THRESHOLD_3() { return &___MINUMUM_NOISE_THRESHOLD_3; }
	inline void set_MINUMUM_NOISE_THRESHOLD_3(float value)
	{
		___MINUMUM_NOISE_THRESHOLD_3 = value;
	}

	inline static int32_t get_offset_of_CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4() { return static_cast<int32_t>(offsetof(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields, ___CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4)); }
	inline int32_t get_CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4() const { return ___CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4; }
	inline int32_t* get_address_of_CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4() { return &___CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4; }
	inline void set_CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4(int32_t value)
	{
		___CONSECUTIVE_FRAMES_MOVE_VELOCITY_TO_ZERO_4 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// EasyInput.Core.Motion
struct Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E  : public RuntimeObject
{
public:
	// System.Single EasyInput.Core.Motion::lastResetTimestamp
	float ___lastResetTimestamp_0;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentRawUserAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentRawUserAcceleration_1;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentRawGravity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentRawGravity_2;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentSmoothedUserAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentSmoothedUserAcceleration_3;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentSmoothedGravity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentSmoothedGravity_4;
	// UnityEngine.Vector3 EasyInput.Core.Motion::lastFrameSmoothedUserAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastFrameSmoothedUserAcceleration_5;
	// UnityEngine.Vector3 EasyInput.Core.Motion::lastFrameSmoothedGravity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastFrameSmoothedGravity_6;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentVelocity_7;
	// UnityEngine.Vector3 EasyInput.Core.Motion::lastFrameVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastFrameVelocity_8;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentRelativePositionSinceReset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentRelativePositionSinceReset_9;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentOrientation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentOrientation_10;
	// UnityEngine.Vector3 EasyInput.Core.Motion::lastFrameOrientation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastFrameOrientation_11;
	// UnityEngine.Vector3 EasyInput.Core.Motion::currentRotationRate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentRotationRate_12;
	// UnityEngine.Vector3 EasyInput.Core.Motion::lastFrameRotationRate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastFrameRotationRate_13;
	// UnityEngine.Vector3 EasyInput.Core.Motion::totalVelocitySinceReset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___totalVelocitySinceReset_14;
	// UnityEngine.Vector3 EasyInput.Core.Motion::totalRotationRateSinceReset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___totalRotationRateSinceReset_15;

public:
	inline static int32_t get_offset_of_lastResetTimestamp_0() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___lastResetTimestamp_0)); }
	inline float get_lastResetTimestamp_0() const { return ___lastResetTimestamp_0; }
	inline float* get_address_of_lastResetTimestamp_0() { return &___lastResetTimestamp_0; }
	inline void set_lastResetTimestamp_0(float value)
	{
		___lastResetTimestamp_0 = value;
	}

	inline static int32_t get_offset_of_currentRawUserAcceleration_1() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentRawUserAcceleration_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentRawUserAcceleration_1() const { return ___currentRawUserAcceleration_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentRawUserAcceleration_1() { return &___currentRawUserAcceleration_1; }
	inline void set_currentRawUserAcceleration_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentRawUserAcceleration_1 = value;
	}

	inline static int32_t get_offset_of_currentRawGravity_2() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentRawGravity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentRawGravity_2() const { return ___currentRawGravity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentRawGravity_2() { return &___currentRawGravity_2; }
	inline void set_currentRawGravity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentRawGravity_2 = value;
	}

	inline static int32_t get_offset_of_currentSmoothedUserAcceleration_3() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentSmoothedUserAcceleration_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentSmoothedUserAcceleration_3() const { return ___currentSmoothedUserAcceleration_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentSmoothedUserAcceleration_3() { return &___currentSmoothedUserAcceleration_3; }
	inline void set_currentSmoothedUserAcceleration_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentSmoothedUserAcceleration_3 = value;
	}

	inline static int32_t get_offset_of_currentSmoothedGravity_4() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentSmoothedGravity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentSmoothedGravity_4() const { return ___currentSmoothedGravity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentSmoothedGravity_4() { return &___currentSmoothedGravity_4; }
	inline void set_currentSmoothedGravity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentSmoothedGravity_4 = value;
	}

	inline static int32_t get_offset_of_lastFrameSmoothedUserAcceleration_5() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___lastFrameSmoothedUserAcceleration_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastFrameSmoothedUserAcceleration_5() const { return ___lastFrameSmoothedUserAcceleration_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastFrameSmoothedUserAcceleration_5() { return &___lastFrameSmoothedUserAcceleration_5; }
	inline void set_lastFrameSmoothedUserAcceleration_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastFrameSmoothedUserAcceleration_5 = value;
	}

	inline static int32_t get_offset_of_lastFrameSmoothedGravity_6() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___lastFrameSmoothedGravity_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastFrameSmoothedGravity_6() const { return ___lastFrameSmoothedGravity_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastFrameSmoothedGravity_6() { return &___lastFrameSmoothedGravity_6; }
	inline void set_lastFrameSmoothedGravity_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastFrameSmoothedGravity_6 = value;
	}

	inline static int32_t get_offset_of_currentVelocity_7() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentVelocity_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentVelocity_7() const { return ___currentVelocity_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentVelocity_7() { return &___currentVelocity_7; }
	inline void set_currentVelocity_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentVelocity_7 = value;
	}

	inline static int32_t get_offset_of_lastFrameVelocity_8() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___lastFrameVelocity_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastFrameVelocity_8() const { return ___lastFrameVelocity_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastFrameVelocity_8() { return &___lastFrameVelocity_8; }
	inline void set_lastFrameVelocity_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastFrameVelocity_8 = value;
	}

	inline static int32_t get_offset_of_currentRelativePositionSinceReset_9() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentRelativePositionSinceReset_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentRelativePositionSinceReset_9() const { return ___currentRelativePositionSinceReset_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentRelativePositionSinceReset_9() { return &___currentRelativePositionSinceReset_9; }
	inline void set_currentRelativePositionSinceReset_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentRelativePositionSinceReset_9 = value;
	}

	inline static int32_t get_offset_of_currentOrientation_10() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentOrientation_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentOrientation_10() const { return ___currentOrientation_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentOrientation_10() { return &___currentOrientation_10; }
	inline void set_currentOrientation_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentOrientation_10 = value;
	}

	inline static int32_t get_offset_of_lastFrameOrientation_11() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___lastFrameOrientation_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastFrameOrientation_11() const { return ___lastFrameOrientation_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastFrameOrientation_11() { return &___lastFrameOrientation_11; }
	inline void set_lastFrameOrientation_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastFrameOrientation_11 = value;
	}

	inline static int32_t get_offset_of_currentRotationRate_12() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___currentRotationRate_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentRotationRate_12() const { return ___currentRotationRate_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentRotationRate_12() { return &___currentRotationRate_12; }
	inline void set_currentRotationRate_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentRotationRate_12 = value;
	}

	inline static int32_t get_offset_of_lastFrameRotationRate_13() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___lastFrameRotationRate_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastFrameRotationRate_13() const { return ___lastFrameRotationRate_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastFrameRotationRate_13() { return &___lastFrameRotationRate_13; }
	inline void set_lastFrameRotationRate_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastFrameRotationRate_13 = value;
	}

	inline static int32_t get_offset_of_totalVelocitySinceReset_14() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___totalVelocitySinceReset_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_totalVelocitySinceReset_14() const { return ___totalVelocitySinceReset_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_totalVelocitySinceReset_14() { return &___totalVelocitySinceReset_14; }
	inline void set_totalVelocitySinceReset_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___totalVelocitySinceReset_14 = value;
	}

	inline static int32_t get_offset_of_totalRotationRateSinceReset_15() { return static_cast<int32_t>(offsetof(Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E, ___totalRotationRateSinceReset_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_totalRotationRateSinceReset_15() const { return ___totalRotationRateSinceReset_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_totalRotationRateSinceReset_15() { return &___totalRotationRateSinceReset_15; }
	inline void set_totalRotationRateSinceReset_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___totalRotationRateSinceReset_15 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Space
struct Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t568D704D2B0AAC3E5894DDFF13DB2E02E2CD539E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.StandardControllers.CustomAxisController/AxisHandler
struct AxisHandler_t14D89929DE69C6AEA63055C828F32991DFBAF7F5  : public UnityEvent_1_t7A2520776069E10CD98ABE7D27AEBFEEBB0DE628
{
public:

public:
};


// EasyInput.StandardControllers.CustomButtonClickController/ButtonHandler
struct ButtonHandler_t345A11A6BAB5285AEFBB28858F028BB5FDA3760D  : public UnityEvent_1_tDCA911CC0B0DB5E480EBC833F516109E46B738CE
{
public:

public:
};


// EasyInput.StandardControllers.CustomButtonVoidController/ButtonHandler
struct ButtonHandler_t6148EBFB022E628729B22C104582415A4977B3C4  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// EasyInput.StandardControllers.CustomMotionController/AccelerometerHandler
struct AccelerometerHandler_t1C7172D0267EEBB75435F675B3264685913CFDD9  : public UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829
{
public:

public:
};


// EasyInput.StandardControllers.CustomMotionController/GyroHandler
struct GyroHandler_t23A8F07BA50CD11B1A2A9340BBCA08475429FCD9  : public UnityEvent_2_t7498A4B8C5E75A81F4E86F3F28CDC2E585CBE4D5
{
public:

public:
};


// EasyInput.StandardControllers.CustomTouchInputController/TouchHandler
struct TouchHandler_t3518D8AEA9CAB00B8C92AB6122C3CA94973616D3  : public UnityEvent_1_tCA3CC69489A3E45D5E4B0D326C19688602046F62
{
public:

public:
};


// EasyInput.StandardControllers.CustomTouchVoidController/TouchHandler
struct TouchHandler_tE081577B9B7FACFC7D31781FFF4F66F526CE8A2B  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// EasyInput.Core.EasyInputConstants/ACTION_TYPE
struct ACTION_TYPE_t892C79F27D4DC2D320C144CA1448C9B7D3CA8CD7 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/ACTION_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ACTION_TYPE_t892C79F27D4DC2D320C144CA1448C9B7D3CA8CD7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/AXIS
struct AXIS_t9DAF8CEC30C13E3BC74924D966B9CADD1FC35CEC 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/AXIS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AXIS_t9DAF8CEC30C13E3BC74924D966B9CADD1FC35CEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/CLICK_TYPE
struct CLICK_TYPE_t395E1B7D0C8236A3673983E45D667022E8F7DC38 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/CLICK_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CLICK_TYPE_t395E1B7D0C8236A3673983E45D667022E8F7DC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/COMPONENT_AXIS
struct COMPONENT_AXIS_t040216C68331D23E98C19B5C80537B631628FA78 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/COMPONENT_AXIS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(COMPONENT_AXIS_t040216C68331D23E98C19B5C80537B631628FA78, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/CONTROLLER_AXIS
struct CONTROLLER_AXIS_t9C51B55A519EABD35E35C77C86FF18C425308ECF 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/CONTROLLER_AXIS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CONTROLLER_AXIS_t9C51B55A519EABD35E35C77C86FF18C425308ECF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/CONTROLLER_BUTTON
struct CONTROLLER_BUTTON_t7AE9073332D0A5A467C5662F1E605A1EBAA1F0EA 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/CONTROLLER_BUTTON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CONTROLLER_BUTTON_t7AE9073332D0A5A467C5662F1E605A1EBAA1F0EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/DPAD_MODE
struct DPAD_MODE_tE692355D00DC030EADE8603CD3B2CC25AD667CBB 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/DPAD_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DPAD_MODE_tE692355D00DC030EADE8603CD3B2CC25AD667CBB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/INPUT_MODULE_BUTTON_MODE
struct INPUT_MODULE_BUTTON_MODE_t740C0CACC8587AC8BAA02E13969D7473AEA43EF0 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/INPUT_MODULE_BUTTON_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(INPUT_MODULE_BUTTON_MODE_t740C0CACC8587AC8BAA02E13969D7473AEA43EF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/PLAYER_NUMBER
struct PLAYER_NUMBER_tB8ED49AEF2C2D5FC7F6181ADBABC96B87CA879C2 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/PLAYER_NUMBER::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PLAYER_NUMBER_tB8ED49AEF2C2D5FC7F6181ADBABC96B87CA879C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/REMOTE_ORIENTATION
struct REMOTE_ORIENTATION_tD3C4D1A6BC3CD1F8167C6EDC9F21E818ED2BD608 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/REMOTE_ORIENTATION::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_ORIENTATION_tD3C4D1A6BC3CD1F8167C6EDC9F21E818ED2BD608, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/SWIPE_TYPE
struct SWIPE_TYPE_t73F19446778700D442DDCAB2841E23986387EAED 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/SWIPE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SWIPE_TYPE_t73F19446778700D442DDCAB2841E23986387EAED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.EasyInputConstants/TOUCH_TYPE
struct TOUCH_TYPE_tFD5E9949DD016C0A24329E23041FCA96A6486004 
{
public:
	// System.Int32 EasyInput.Core.EasyInputConstants/TOUCH_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOUCH_TYPE_tFD5E9949DD016C0A24329E23041FCA96A6486004, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// EasyInput.Core.ButtonClick
struct ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A  : public RuntimeObject
{
public:
	// EasyInput.Core.EasyInputConstants/PLAYER_NUMBER EasyInput.Core.ButtonClick::player
	int32_t ___player_0;
	// EasyInput.Core.EasyInputConstants/CONTROLLER_BUTTON EasyInput.Core.ButtonClick::button
	int32_t ___button_1;
	// System.Single EasyInput.Core.ButtonClick::currentClickBeginTimestamp
	float ___currentClickBeginTimestamp_2;
	// System.Single EasyInput.Core.ButtonClick::previousClickBeginTimestamp
	float ___previousClickBeginTimestamp_3;
	// System.Boolean EasyInput.Core.ButtonClick::currentlyPressed
	bool ___currentlyPressed_4;
	// System.Boolean EasyInput.Core.ButtonClick::previousFramePressed
	bool ___previousFramePressed_5;
	// EasyInput.Core.EasyInputConstants/CLICK_TYPE EasyInput.Core.ButtonClick::clickType
	int32_t ___clickType_6;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A, ___player_0)); }
	inline int32_t get_player_0() const { return ___player_0; }
	inline int32_t* get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(int32_t value)
	{
		___player_0 = value;
	}

	inline static int32_t get_offset_of_button_1() { return static_cast<int32_t>(offsetof(ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A, ___button_1)); }
	inline int32_t get_button_1() const { return ___button_1; }
	inline int32_t* get_address_of_button_1() { return &___button_1; }
	inline void set_button_1(int32_t value)
	{
		___button_1 = value;
	}

	inline static int32_t get_offset_of_currentClickBeginTimestamp_2() { return static_cast<int32_t>(offsetof(ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A, ___currentClickBeginTimestamp_2)); }
	inline float get_currentClickBeginTimestamp_2() const { return ___currentClickBeginTimestamp_2; }
	inline float* get_address_of_currentClickBeginTimestamp_2() { return &___currentClickBeginTimestamp_2; }
	inline void set_currentClickBeginTimestamp_2(float value)
	{
		___currentClickBeginTimestamp_2 = value;
	}

	inline static int32_t get_offset_of_previousClickBeginTimestamp_3() { return static_cast<int32_t>(offsetof(ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A, ___previousClickBeginTimestamp_3)); }
	inline float get_previousClickBeginTimestamp_3() const { return ___previousClickBeginTimestamp_3; }
	inline float* get_address_of_previousClickBeginTimestamp_3() { return &___previousClickBeginTimestamp_3; }
	inline void set_previousClickBeginTimestamp_3(float value)
	{
		___previousClickBeginTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_currentlyPressed_4() { return static_cast<int32_t>(offsetof(ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A, ___currentlyPressed_4)); }
	inline bool get_currentlyPressed_4() const { return ___currentlyPressed_4; }
	inline bool* get_address_of_currentlyPressed_4() { return &___currentlyPressed_4; }
	inline void set_currentlyPressed_4(bool value)
	{
		___currentlyPressed_4 = value;
	}

	inline static int32_t get_offset_of_previousFramePressed_5() { return static_cast<int32_t>(offsetof(ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A, ___previousFramePressed_5)); }
	inline bool get_previousFramePressed_5() const { return ___previousFramePressed_5; }
	inline bool* get_address_of_previousFramePressed_5() { return &___previousFramePressed_5; }
	inline void set_previousFramePressed_5(bool value)
	{
		___previousFramePressed_5 = value;
	}

	inline static int32_t get_offset_of_clickType_6() { return static_cast<int32_t>(offsetof(ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A, ___clickType_6)); }
	inline int32_t get_clickType_6() const { return ___clickType_6; }
	inline int32_t* get_address_of_clickType_6() { return &___clickType_6; }
	inline void set_clickType_6(int32_t value)
	{
		___clickType_6 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// EasyInput.Core.ControllerAxis
struct ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB  : public RuntimeObject
{
public:
	// EasyInput.Core.EasyInputConstants/PLAYER_NUMBER EasyInput.Core.ControllerAxis::player
	int32_t ___player_0;
	// EasyInput.Core.EasyInputConstants/CONTROLLER_AXIS EasyInput.Core.ControllerAxis::axis
	int32_t ___axis_1;
	// UnityEngine.Vector2 EasyInput.Core.ControllerAxis::axisValue
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___axisValue_2;

public:
	inline static int32_t get_offset_of_player_0() { return static_cast<int32_t>(offsetof(ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB, ___player_0)); }
	inline int32_t get_player_0() const { return ___player_0; }
	inline int32_t* get_address_of_player_0() { return &___player_0; }
	inline void set_player_0(int32_t value)
	{
		___player_0 = value;
	}

	inline static int32_t get_offset_of_axis_1() { return static_cast<int32_t>(offsetof(ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB, ___axis_1)); }
	inline int32_t get_axis_1() const { return ___axis_1; }
	inline int32_t* get_address_of_axis_1() { return &___axis_1; }
	inline void set_axis_1(int32_t value)
	{
		___axis_1 = value;
	}

	inline static int32_t get_offset_of_axisValue_2() { return static_cast<int32_t>(offsetof(ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB, ___axisValue_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_axisValue_2() const { return ___axisValue_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_axisValue_2() { return &___axisValue_2; }
	inline void set_axisValue_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___axisValue_2 = value;
	}
};


// EasyInput.Core.InputTouch
struct InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 EasyInput.Core.InputTouch::currentTouchPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentTouchPosition_0;
	// UnityEngine.Vector2 EasyInput.Core.InputTouch::originalTouchPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___originalTouchPosition_1;
	// UnityEngine.Vector2 EasyInput.Core.InputTouch::previousTouchOriginalPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___previousTouchOriginalPosition_2;
	// System.Single EasyInput.Core.InputTouch::currentTouchBeginTimestamp
	float ___currentTouchBeginTimestamp_3;
	// System.Single EasyInput.Core.InputTouch::previousTouchBeginTimestamp
	float ___previousTouchBeginTimestamp_4;
	// EasyInput.Core.EasyInputConstants/TOUCH_TYPE EasyInput.Core.InputTouch::touchType
	int32_t ___touchType_5;
	// EasyInput.Core.EasyInputConstants/SWIPE_TYPE EasyInput.Core.InputTouch::swipeType
	int32_t ___swipeType_6;

public:
	inline static int32_t get_offset_of_currentTouchPosition_0() { return static_cast<int32_t>(offsetof(InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA, ___currentTouchPosition_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentTouchPosition_0() const { return ___currentTouchPosition_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentTouchPosition_0() { return &___currentTouchPosition_0; }
	inline void set_currentTouchPosition_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentTouchPosition_0 = value;
	}

	inline static int32_t get_offset_of_originalTouchPosition_1() { return static_cast<int32_t>(offsetof(InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA, ___originalTouchPosition_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_originalTouchPosition_1() const { return ___originalTouchPosition_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_originalTouchPosition_1() { return &___originalTouchPosition_1; }
	inline void set_originalTouchPosition_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___originalTouchPosition_1 = value;
	}

	inline static int32_t get_offset_of_previousTouchOriginalPosition_2() { return static_cast<int32_t>(offsetof(InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA, ___previousTouchOriginalPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_previousTouchOriginalPosition_2() const { return ___previousTouchOriginalPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_previousTouchOriginalPosition_2() { return &___previousTouchOriginalPosition_2; }
	inline void set_previousTouchOriginalPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___previousTouchOriginalPosition_2 = value;
	}

	inline static int32_t get_offset_of_currentTouchBeginTimestamp_3() { return static_cast<int32_t>(offsetof(InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA, ___currentTouchBeginTimestamp_3)); }
	inline float get_currentTouchBeginTimestamp_3() const { return ___currentTouchBeginTimestamp_3; }
	inline float* get_address_of_currentTouchBeginTimestamp_3() { return &___currentTouchBeginTimestamp_3; }
	inline void set_currentTouchBeginTimestamp_3(float value)
	{
		___currentTouchBeginTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_previousTouchBeginTimestamp_4() { return static_cast<int32_t>(offsetof(InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA, ___previousTouchBeginTimestamp_4)); }
	inline float get_previousTouchBeginTimestamp_4() const { return ___previousTouchBeginTimestamp_4; }
	inline float* get_address_of_previousTouchBeginTimestamp_4() { return &___previousTouchBeginTimestamp_4; }
	inline void set_previousTouchBeginTimestamp_4(float value)
	{
		___previousTouchBeginTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_touchType_5() { return static_cast<int32_t>(offsetof(InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA, ___touchType_5)); }
	inline int32_t get_touchType_5() const { return ___touchType_5; }
	inline int32_t* get_address_of_touchType_5() { return &___touchType_5; }
	inline void set_touchType_5(int32_t value)
	{
		___touchType_5 = value;
	}

	inline static int32_t get_offset_of_swipeType_6() { return static_cast<int32_t>(offsetof(InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA, ___swipeType_6)); }
	inline int32_t get_swipeType_6() const { return ___swipeType_6; }
	inline int32_t* get_address_of_swipeType_6() { return &___swipeType_6; }
	inline void set_swipeType_6(int32_t value)
	{
		___swipeType_6 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/AccelerometerHandler
struct AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/GyroHandler
struct GyroHandler_t1150F909839ECD716336152E4835017495C9EB63  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/MotionHandler
struct MotionHandler_t7DFBED96A53BABB65431051DE551FA91779A6A86  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/doubleClickEndHandler
struct doubleClickEndHandler_tAD931AA14D746AA44D665104343FCDBCFEF994EC  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/doubleTouchEndHandler
struct doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/longClickEndHandler
struct longClickEndHandler_t46C56619A7057738687BAD1EEF4147451D8A9E02  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/longClickHandler
struct longClickHandler_t78C9D39A86F9317C64CB4EF196FED88DECBB1B89  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/longClickStartHandler
struct longClickStartHandler_t66152905869AFA1988101991AA6652EEC6ACCA27  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/longTouchEndHandler
struct longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/longTouchHandler
struct longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/longTouchStartHandler
struct longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/onAxisHandler
struct onAxisHandler_t51A99E4C3C496FA232D4C4FCEB8BD4C9F40C08A6  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/onClickEndHandler
struct onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/onClickHandler
struct onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/onClickStartHandler
struct onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/onTouchEndHandler
struct onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/onTouchHandler
struct onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/onTouchStartHandler
struct onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/quickClickEndHandler
struct quickClickEndHandler_t2ABFD780F58ED99E5EDFDB654DA601EC067FE85B  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/quickTouchEndHandler
struct quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258  : public MulticastDelegate_t
{
public:

public:
};


// EasyInput.Core.EasyInputHelper/swipeDistanceHandler
struct swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// EasyInput.StandardControllers.StandardTouchpadController
struct StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// EasyInput.Core.EasyInputConstants/AXIS EasyInput.StandardControllers.StandardTouchpadController::axisHorizontal
	int32_t ___axisHorizontal_4;
	// EasyInput.Core.EasyInputConstants/AXIS EasyInput.StandardControllers.StandardTouchpadController::axisVertical
	int32_t ___axisVertical_5;
	// EasyInput.Core.EasyInputConstants/ACTION_TYPE EasyInput.StandardControllers.StandardTouchpadController::action
	int32_t ___action_6;
	// System.Single EasyInput.StandardControllers.StandardTouchpadController::sensitivity
	float ___sensitivity_7;
	// UnityEngine.Vector2 EasyInput.StandardControllers.StandardTouchpadController::lastFrameTouch
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lastFrameTouch_8;
	// UnityEngine.Vector3 EasyInput.StandardControllers.StandardTouchpadController::actionVector3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___actionVector3_9;
	// System.Single EasyInput.StandardControllers.StandardTouchpadController::horizontal
	float ___horizontal_10;
	// System.Single EasyInput.StandardControllers.StandardTouchpadController::vertical
	float ___vertical_11;

public:
	inline static int32_t get_offset_of_axisHorizontal_4() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___axisHorizontal_4)); }
	inline int32_t get_axisHorizontal_4() const { return ___axisHorizontal_4; }
	inline int32_t* get_address_of_axisHorizontal_4() { return &___axisHorizontal_4; }
	inline void set_axisHorizontal_4(int32_t value)
	{
		___axisHorizontal_4 = value;
	}

	inline static int32_t get_offset_of_axisVertical_5() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___axisVertical_5)); }
	inline int32_t get_axisVertical_5() const { return ___axisVertical_5; }
	inline int32_t* get_address_of_axisVertical_5() { return &___axisVertical_5; }
	inline void set_axisVertical_5(int32_t value)
	{
		___axisVertical_5 = value;
	}

	inline static int32_t get_offset_of_action_6() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___action_6)); }
	inline int32_t get_action_6() const { return ___action_6; }
	inline int32_t* get_address_of_action_6() { return &___action_6; }
	inline void set_action_6(int32_t value)
	{
		___action_6 = value;
	}

	inline static int32_t get_offset_of_sensitivity_7() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___sensitivity_7)); }
	inline float get_sensitivity_7() const { return ___sensitivity_7; }
	inline float* get_address_of_sensitivity_7() { return &___sensitivity_7; }
	inline void set_sensitivity_7(float value)
	{
		___sensitivity_7 = value;
	}

	inline static int32_t get_offset_of_lastFrameTouch_8() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___lastFrameTouch_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_lastFrameTouch_8() const { return ___lastFrameTouch_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_lastFrameTouch_8() { return &___lastFrameTouch_8; }
	inline void set_lastFrameTouch_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___lastFrameTouch_8 = value;
	}

	inline static int32_t get_offset_of_actionVector3_9() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___actionVector3_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_actionVector3_9() const { return ___actionVector3_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_actionVector3_9() { return &___actionVector3_9; }
	inline void set_actionVector3_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___actionVector3_9 = value;
	}

	inline static int32_t get_offset_of_horizontal_10() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___horizontal_10)); }
	inline float get_horizontal_10() const { return ___horizontal_10; }
	inline float* get_address_of_horizontal_10() { return &___horizontal_10; }
	inline void set_horizontal_10(float value)
	{
		___horizontal_10 = value;
	}

	inline static int32_t get_offset_of_vertical_11() { return static_cast<int32_t>(offsetof(StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165, ___vertical_11)); }
	inline float get_vertical_11() const { return ___vertical_11; }
	inline float* get_address_of_vertical_11() { return &___vertical_11; }
	inline void set_vertical_11(float value)
	{
		___vertical_11 = value;
	}
};


// EasyInput.Misc.Steering
struct Steering_t7721821869E4257C330E9AE355FE30666731BD08  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody EasyInput.Misc.Steering::myRigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___myRigidbody_4;
	// UnityEngine.Vector3 EasyInput.Misc.Steering::myAccel
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___myAccel_5;
	// System.Boolean EasyInput.Misc.Steering::gasPressed
	bool ___gasPressed_6;
	// System.Boolean EasyInput.Misc.Steering::brakePressed
	bool ___brakePressed_7;
	// System.Single EasyInput.Misc.Steering::horizontal
	float ___horizontal_8;
	// System.Single EasyInput.Misc.Steering::vertical
	float ___vertical_9;
	// System.Single EasyInput.Misc.Steering::normalizeDegrees
	float ___normalizeDegrees_10;
	// System.Single EasyInput.Misc.Steering::sensitivity
	float ___sensitivity_11;
	// UnityEngine.Vector3 EasyInput.Misc.Steering::actionVectorPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___actionVectorPosition_12;
	// UnityEngine.Vector3 EasyInput.Misc.Steering::computerVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___computerVector_13;

public:
	inline static int32_t get_offset_of_myRigidbody_4() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___myRigidbody_4)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_myRigidbody_4() const { return ___myRigidbody_4; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_myRigidbody_4() { return &___myRigidbody_4; }
	inline void set_myRigidbody_4(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___myRigidbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRigidbody_4), (void*)value);
	}

	inline static int32_t get_offset_of_myAccel_5() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___myAccel_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_myAccel_5() const { return ___myAccel_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_myAccel_5() { return &___myAccel_5; }
	inline void set_myAccel_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___myAccel_5 = value;
	}

	inline static int32_t get_offset_of_gasPressed_6() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___gasPressed_6)); }
	inline bool get_gasPressed_6() const { return ___gasPressed_6; }
	inline bool* get_address_of_gasPressed_6() { return &___gasPressed_6; }
	inline void set_gasPressed_6(bool value)
	{
		___gasPressed_6 = value;
	}

	inline static int32_t get_offset_of_brakePressed_7() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___brakePressed_7)); }
	inline bool get_brakePressed_7() const { return ___brakePressed_7; }
	inline bool* get_address_of_brakePressed_7() { return &___brakePressed_7; }
	inline void set_brakePressed_7(bool value)
	{
		___brakePressed_7 = value;
	}

	inline static int32_t get_offset_of_horizontal_8() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___horizontal_8)); }
	inline float get_horizontal_8() const { return ___horizontal_8; }
	inline float* get_address_of_horizontal_8() { return &___horizontal_8; }
	inline void set_horizontal_8(float value)
	{
		___horizontal_8 = value;
	}

	inline static int32_t get_offset_of_vertical_9() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___vertical_9)); }
	inline float get_vertical_9() const { return ___vertical_9; }
	inline float* get_address_of_vertical_9() { return &___vertical_9; }
	inline void set_vertical_9(float value)
	{
		___vertical_9 = value;
	}

	inline static int32_t get_offset_of_normalizeDegrees_10() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___normalizeDegrees_10)); }
	inline float get_normalizeDegrees_10() const { return ___normalizeDegrees_10; }
	inline float* get_address_of_normalizeDegrees_10() { return &___normalizeDegrees_10; }
	inline void set_normalizeDegrees_10(float value)
	{
		___normalizeDegrees_10 = value;
	}

	inline static int32_t get_offset_of_sensitivity_11() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___sensitivity_11)); }
	inline float get_sensitivity_11() const { return ___sensitivity_11; }
	inline float* get_address_of_sensitivity_11() { return &___sensitivity_11; }
	inline void set_sensitivity_11(float value)
	{
		___sensitivity_11 = value;
	}

	inline static int32_t get_offset_of_actionVectorPosition_12() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___actionVectorPosition_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_actionVectorPosition_12() const { return ___actionVectorPosition_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_actionVectorPosition_12() { return &___actionVectorPosition_12; }
	inline void set_actionVectorPosition_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___actionVectorPosition_12 = value;
	}

	inline static int32_t get_offset_of_computerVector_13() { return static_cast<int32_t>(offsetof(Steering_t7721821869E4257C330E9AE355FE30666731BD08, ___computerVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_computerVector_13() const { return ___computerVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_computerVector_13() { return &___computerVector_13; }
	inline void set_computerVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___computerVector_13 = value;
	}
};


// EasyInput.Misc.TouchDiagnostics
struct TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::touchStartValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___touchStartValue_4;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::touchEndValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___touchEndValue_5;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::touchValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___touchValue_6;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::LongStartValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LongStartValue_7;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::LongEndValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LongEndValue_8;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::LongValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___LongValue_9;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::quickEndValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___quickEndValue_10;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::doubleEndValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___doubleEndValue_11;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::swipeValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___swipeValue_12;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::accelXValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___accelXValue_13;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::accelYValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___accelYValue_14;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::accelZValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___accelZValue_15;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::userAccelXValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___userAccelXValue_16;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::userAccelYValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___userAccelYValue_17;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::userAccelZValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___userAccelZValue_18;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::gravityXValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gravityXValue_19;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::gravityYValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gravityYValue_20;
	// UnityEngine.UI.Text EasyInput.Misc.TouchDiagnostics::gravityZValue
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gravityZValue_21;
	// System.Boolean EasyInput.Misc.TouchDiagnostics::touching
	bool ___touching_22;
	// System.Boolean EasyInput.Misc.TouchDiagnostics::longTouching
	bool ___longTouching_23;

public:
	inline static int32_t get_offset_of_touchStartValue_4() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___touchStartValue_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_touchStartValue_4() const { return ___touchStartValue_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_touchStartValue_4() { return &___touchStartValue_4; }
	inline void set_touchStartValue_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___touchStartValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchStartValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_touchEndValue_5() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___touchEndValue_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_touchEndValue_5() const { return ___touchEndValue_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_touchEndValue_5() { return &___touchEndValue_5; }
	inline void set_touchEndValue_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___touchEndValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchEndValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_touchValue_6() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___touchValue_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_touchValue_6() const { return ___touchValue_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_touchValue_6() { return &___touchValue_6; }
	inline void set_touchValue_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___touchValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touchValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_LongStartValue_7() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___LongStartValue_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LongStartValue_7() const { return ___LongStartValue_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LongStartValue_7() { return &___LongStartValue_7; }
	inline void set_LongStartValue_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LongStartValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LongStartValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_LongEndValue_8() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___LongEndValue_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LongEndValue_8() const { return ___LongEndValue_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LongEndValue_8() { return &___LongEndValue_8; }
	inline void set_LongEndValue_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LongEndValue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LongEndValue_8), (void*)value);
	}

	inline static int32_t get_offset_of_LongValue_9() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___LongValue_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_LongValue_9() const { return ___LongValue_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_LongValue_9() { return &___LongValue_9; }
	inline void set_LongValue_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___LongValue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LongValue_9), (void*)value);
	}

	inline static int32_t get_offset_of_quickEndValue_10() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___quickEndValue_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_quickEndValue_10() const { return ___quickEndValue_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_quickEndValue_10() { return &___quickEndValue_10; }
	inline void set_quickEndValue_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___quickEndValue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quickEndValue_10), (void*)value);
	}

	inline static int32_t get_offset_of_doubleEndValue_11() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___doubleEndValue_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_doubleEndValue_11() const { return ___doubleEndValue_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_doubleEndValue_11() { return &___doubleEndValue_11; }
	inline void set_doubleEndValue_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___doubleEndValue_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___doubleEndValue_11), (void*)value);
	}

	inline static int32_t get_offset_of_swipeValue_12() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___swipeValue_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_swipeValue_12() const { return ___swipeValue_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_swipeValue_12() { return &___swipeValue_12; }
	inline void set_swipeValue_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___swipeValue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swipeValue_12), (void*)value);
	}

	inline static int32_t get_offset_of_accelXValue_13() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___accelXValue_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_accelXValue_13() const { return ___accelXValue_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_accelXValue_13() { return &___accelXValue_13; }
	inline void set_accelXValue_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___accelXValue_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accelXValue_13), (void*)value);
	}

	inline static int32_t get_offset_of_accelYValue_14() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___accelYValue_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_accelYValue_14() const { return ___accelYValue_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_accelYValue_14() { return &___accelYValue_14; }
	inline void set_accelYValue_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___accelYValue_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accelYValue_14), (void*)value);
	}

	inline static int32_t get_offset_of_accelZValue_15() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___accelZValue_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_accelZValue_15() const { return ___accelZValue_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_accelZValue_15() { return &___accelZValue_15; }
	inline void set_accelZValue_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___accelZValue_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___accelZValue_15), (void*)value);
	}

	inline static int32_t get_offset_of_userAccelXValue_16() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___userAccelXValue_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_userAccelXValue_16() const { return ___userAccelXValue_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_userAccelXValue_16() { return &___userAccelXValue_16; }
	inline void set_userAccelXValue_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___userAccelXValue_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAccelXValue_16), (void*)value);
	}

	inline static int32_t get_offset_of_userAccelYValue_17() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___userAccelYValue_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_userAccelYValue_17() const { return ___userAccelYValue_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_userAccelYValue_17() { return &___userAccelYValue_17; }
	inline void set_userAccelYValue_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___userAccelYValue_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAccelYValue_17), (void*)value);
	}

	inline static int32_t get_offset_of_userAccelZValue_18() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___userAccelZValue_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_userAccelZValue_18() const { return ___userAccelZValue_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_userAccelZValue_18() { return &___userAccelZValue_18; }
	inline void set_userAccelZValue_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___userAccelZValue_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userAccelZValue_18), (void*)value);
	}

	inline static int32_t get_offset_of_gravityXValue_19() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___gravityXValue_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gravityXValue_19() const { return ___gravityXValue_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gravityXValue_19() { return &___gravityXValue_19; }
	inline void set_gravityXValue_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gravityXValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravityXValue_19), (void*)value);
	}

	inline static int32_t get_offset_of_gravityYValue_20() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___gravityYValue_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gravityYValue_20() const { return ___gravityYValue_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gravityYValue_20() { return &___gravityYValue_20; }
	inline void set_gravityYValue_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gravityYValue_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravityYValue_20), (void*)value);
	}

	inline static int32_t get_offset_of_gravityZValue_21() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___gravityZValue_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gravityZValue_21() const { return ___gravityZValue_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gravityZValue_21() { return &___gravityZValue_21; }
	inline void set_gravityZValue_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gravityZValue_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravityZValue_21), (void*)value);
	}

	inline static int32_t get_offset_of_touching_22() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___touching_22)); }
	inline bool get_touching_22() const { return ___touching_22; }
	inline bool* get_address_of_touching_22() { return &___touching_22; }
	inline void set_touching_22(bool value)
	{
		___touching_22 = value;
	}

	inline static int32_t get_offset_of_longTouching_23() { return static_cast<int32_t>(offsetof(TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853, ___longTouching_23)); }
	inline bool get_longTouching_23() const { return ___longTouching_23; }
	inline bool* get_address_of_longTouching_23() { return &___longTouching_23; }
	inline void set_longTouching_23(bool value)
	{
		___longTouching_23 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_gshared (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_mB0024D2F132EC65C8DA83C650ECE1ADA38960E10_gshared (UnityEvent_2_t7498A4B8C5E75A81F4E86F3F28CDC2E585CBE4D5 * __this, const RuntimeMethod* method);

// System.Void EasyInput.Core.EasyInputHelper/onTouchHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchHandler__ctor_m7569B8CDD67B7881FFF47BBE1F822818578E2A36 (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_Touch(EasyInput.Core.EasyInputHelper/onTouchHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_Touch_m93AFFE5330C73F1ED7228781A5C09FD988C9CB82 (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/onTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchEndHandler__ctor_m8234A2F98878EEF574C26BBBC08F29ABA5DA963E (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_TouchEnd(EasyInput.Core.EasyInputHelper/onTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_TouchEnd_m03023DB99A90FADA053D5EA0DB5AEC385D31E23D (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_Touch(EasyInput.Core.EasyInputHelper/onTouchHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_Touch_m9FBAE03DEA39ABF7EB8DEAD213D599AA1857D150 (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_TouchEnd(EasyInput.Core.EasyInputHelper/onTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_TouchEnd_m8832AE6FA6309517CD820AD8B3900BAF746C7525 (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 EasyInput.Core.EasyInputUtilities::getControllerVector3(System.Single,System.Single,EasyInput.Core.EasyInputConstants/AXIS,EasyInput.Core.EasyInputConstants/AXIS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  EasyInputUtilities_getControllerVector3_m4D9F97BCA1D7029E533EC4FF67BC382E35DB89D0 (float ___horizontalMovement0, float ___verticalMovement1, int32_t ___horizontalAxis2, int32_t ___verticalAxis3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/AccelerometerHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccelerometerHandler__ctor_m975712EA3549BBB6B6B6AE56D85E0604C83A42A6 (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_Accelerometer(EasyInput.Core.EasyInputHelper/AccelerometerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_Accelerometer_m89E04F65C05AA5F3714F88D03B05C1166275EAFC (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/onClickStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickStartHandler__ctor_mC5C6D320CC466313F6FC3ABF4AFE81DCEDBA370C (onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_ClickStart(EasyInput.Core.EasyInputHelper/onClickStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_ClickStart_m4D9A545C6831BE680D81BDB488620412D1B3A0EF (onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/onClickEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickEndHandler__ctor_mC220700990BFEA406521378E4E30EF73EFB4F25B (onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_ClickEnd(EasyInput.Core.EasyInputHelper/onClickEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_ClickEnd_mC5D1BB77A7DA0CB98B3215C83710A4A70D791AB1 (onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_Accelerometer(EasyInput.Core.EasyInputHelper/AccelerometerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_Accelerometer_mE6CBB04EF40E806859ECE7F32CD44A8C6DCDA556 (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/onClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickHandler__ctor_mD9F9BB133F0C2DB583EE15B9952D8B8220BB56EE (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_Click(EasyInput.Core.EasyInputHelper/onClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_Click_m0460DFEA4AE6E29032E368894932EC44A1A54FAD (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void EasyInput.Misc.Steering::steerBall(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_steerBall_m6B74FD1BBEF5913041C3556D6C8DD09D0CED85AD (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___accel0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Single EasyInput.Core.EasyInputUtilities::relativeAngleInAxis(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EasyInputUtilities_relativeAngleInAxis_mE35314BE9C36B680A19A0836158B661A3D071219 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___firstVector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___secondVector1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axisVector2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/onTouchStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchStartHandler__ctor_m7BCCE1A4F702E391D8068BA81B35C0D53A388082 (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_TouchStart(EasyInput.Core.EasyInputHelper/onTouchStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_TouchStart_m168C1E46EFAA0C313879B881DCF76FCA7F8F0729 (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/longTouchStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchStartHandler__ctor_m2EE7B6267A7D637AC4AAC7A699E1FF75334DA619 (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_LongTouchStart(EasyInput.Core.EasyInputHelper/longTouchStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_LongTouchStart_mA36126D30CF811FA6AC09B8CABDF34F03814CA32 (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/longTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchEndHandler__ctor_m23586A05271D52F55205FF976A639126596429EA (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_LongTouchEnd(EasyInput.Core.EasyInputHelper/longTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_LongTouchEnd_mAA8D98FD9DDFD938E39318D9F410A625DC84A759 (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/longTouchHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchHandler__ctor_m079B16E356F63EFFFF8C3C34628BFFA844D7D495 (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_LongTouch(EasyInput.Core.EasyInputHelper/longTouchHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_LongTouch_mE4A01CB700DEE32B49AD12F48E7146D2B158BDDC (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/quickTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quickTouchEndHandler__ctor_m42F28C55DB46758F1113CE9C107EAB9C52BF3500 (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_QuickTouchEnd(EasyInput.Core.EasyInputHelper/quickTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_QuickTouchEnd_m04F73A033399FF0F44AA9C5C34E9BE7799BA855A (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/doubleTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void doubleTouchEndHandler__ctor_mE66A3F7EDE0D9CC6827205D7F4E16880A274F8A5 (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_DoubleTouchEnd(EasyInput.Core.EasyInputHelper/doubleTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_DoubleTouchEnd_mE6DE1F150E32924627496E9029E70A0EB0FF04BD (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/swipeDistanceHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swipeDistanceHandler__ctor_m30BEF4809D7D1327A43E1526510C96F81B69D11F (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_SwipeDetected(EasyInput.Core.EasyInputHelper/swipeDistanceHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_SwipeDetected_mC1D23275DC25D4CFDDEAA8D5C78316EA528D1FE0 (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper/GyroHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroHandler__ctor_mEE1D838C8250D86E37D2F59ADE69F44B5C526E24 (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::add_On_Gyro(EasyInput.Core.EasyInputHelper/GyroHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_add_On_Gyro_m950460658FA36B838F7C38E12C2F995BAD8E214D (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_TouchStart(EasyInput.Core.EasyInputHelper/onTouchStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_TouchStart_m6B4185C3734AEA8FE6AF784907F4BC7596F79DDB (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_LongTouchStart(EasyInput.Core.EasyInputHelper/longTouchStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_LongTouchStart_m3E86266B505D0157470340B1D5E552004D1BAC46 (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_LongTouchEnd(EasyInput.Core.EasyInputHelper/longTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_LongTouchEnd_m09C12398C3A60764D1779B21A5C651C159FD14F6 (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_LongTouch(EasyInput.Core.EasyInputHelper/longTouchHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_LongTouch_m321C89E6449D5E32B02847EE6A4C63EAC992CC00 (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_QuickTouchEnd(EasyInput.Core.EasyInputHelper/quickTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_QuickTouchEnd_m32FC02FC9412B0363BC6843B429A9F5DEDDBBE14 (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_DoubleTouchEnd(EasyInput.Core.EasyInputHelper/doubleTouchEndHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_DoubleTouchEnd_m42C6C9012358E14BF40C723BB445A34793AFC0B0 (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_SwipeDetected(EasyInput.Core.EasyInputHelper/swipeDistanceHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_SwipeDetected_m93F68F97261F1772606EA20A4D89B84710C5DB69 (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * ___value0, const RuntimeMethod* method);
// System.Void EasyInput.Core.EasyInputHelper::remove_On_Gyro(EasyInput.Core.EasyInputHelper/GyroHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EasyInputHelper_remove_On_Gyro_mEE6E3DB7BEEAB526A2C546CB40A6BEF1210524C8 (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearTextTouchStart(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearTextTouchStart_m4C9A8AB71E313406F4C11A8087B6F211C788BDC8 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchStartU3Ed__24__ctor_mCB1D5708C30BD5876F031A0A8AAAC93ACECD64CF (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearTextTouchEnd_m4E0DA224F7346E3FD5245F4B8B5C1600B250A6BD (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method);
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchEndU3Ed__26__ctor_m68ED89535B310355F1ED3C1F2F361971955EF206 (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearLongTextTouchStart(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearLongTextTouchStart_m9799578BC1100623F1EA73E92AA4366A02DA30FD (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method);
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchStartU3Ed__29__ctor_mA493E982729C959DFC52718B484E836B35C3F549 (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearLongTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearLongTextTouchEnd_mAB53BF2AB51EE4639F31355202E29F6141807E9D (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method);
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchEndU3Ed__31__ctor_mC84790B31E710221A248D03F203DD4F37AC78AE8 (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearQuickTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearQuickTextTouchEnd_m9B1B575D07E5CDCB328CDDEA03FB6A41E7CB2933 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method);
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearQuickTextTouchEndU3Ed__34__ctor_m11EBC838979B21402E6A5B52450935A2B49DDA3D (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearDoubleTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearDoubleTextTouchEnd_mBC82FEB7E54233EB77B40C355264984FB000F9D0 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method);
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDoubleTextTouchEndU3Ed__36__ctor_m0DEE5CA0137557C898D3BED6E3A7E849AA2BC5E0 (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearSwipeTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearSwipeTextTouchEnd_mA30AE8EE4962AA11DBFC868502669EBA5ECEB683 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method);
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearSwipeTextTouchEndU3Ed__38__ctor_mD728288EBF0577C6B1BB0539B2C2453C4F06CEB1 (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<EasyInput.Core.ControllerAxis>::.ctor()
inline void UnityEvent_1__ctor_mA1BB7202EF9CB703F7474880ED1630015FBB5BB0 (UnityEvent_1_t7A2520776069E10CD98ABE7D27AEBFEEBB0DE628 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7A2520776069E10CD98ABE7D27AEBFEEBB0DE628 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<EasyInput.Core.ButtonClick>::.ctor()
inline void UnityEvent_1__ctor_m52EF391B0FCF9BDC619781AC4ECF07EB6979AFAA (UnityEvent_1_tDCA911CC0B0DB5E480EBC833F516109E46B738CE * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDCA911CC0B0DB5E480EBC833F516109E46B738CE *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
inline void UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8 (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 *, const RuntimeMethod*))UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<UnityEngine.Vector3,UnityEngine.Vector3>::.ctor()
inline void UnityEvent_2__ctor_mB0024D2F132EC65C8DA83C650ECE1ADA38960E10 (UnityEvent_2_t7498A4B8C5E75A81F4E86F3F28CDC2E585CBE4D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t7498A4B8C5E75A81F4E86F3F28CDC2E585CBE4D5 *, const RuntimeMethod*))UnityEvent_2__ctor_mB0024D2F132EC65C8DA83C650ECE1ADA38960E10_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<EasyInput.Core.InputTouch>::.ctor()
inline void UnityEvent_1__ctor_mDDC486EAA938D391327A4B49DFE8C9FE4A9AFAE8 (UnityEvent_1_tCA3CC69489A3E45D5E4B0D326C19688602046F62 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCA3CC69489A3E45D5E4B0D326C19688602046F62 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.StandardControllers.StandardTouchpadController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardTouchpadController_OnEnable_mC1B1576FF655DC6E56A1145021237C16FC16F4FE (StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardTouchpadController_localAxisEnd_mF04FD6EFB660DF706D6E935E6371519A5501CD50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardTouchpadController_localAxis_m18E85B087AED184776BC0071109614AC4089FE8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyInputHelper.On_Touch += localAxis;
		onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * L_0 = (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B *)il2cpp_codegen_object_new(onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		onTouchHandler__ctor_m7569B8CDD67B7881FFF47BBE1F822818578E2A36(L_0, __this, (intptr_t)((intptr_t)StandardTouchpadController_localAxis_m18E85B087AED184776BC0071109614AC4089FE8B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		EasyInputHelper_add_On_Touch_m93AFFE5330C73F1ED7228781A5C09FD988C9CB82(L_0, /*hidden argument*/NULL);
		// EasyInputHelper.On_TouchEnd += localAxisEnd;
		onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * L_1 = (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF *)il2cpp_codegen_object_new(onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		onTouchEndHandler__ctor_m8234A2F98878EEF574C26BBBC08F29ABA5DA963E(L_1, __this, (intptr_t)((intptr_t)StandardTouchpadController_localAxisEnd_mF04FD6EFB660DF706D6E935E6371519A5501CD50_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_TouchEnd_m03023DB99A90FADA053D5EA0DB5AEC385D31E23D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.StandardControllers.StandardTouchpadController::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardTouchpadController_OnDestroy_m9A88779B50DBD619BBE899A29D8A158A34AE1A69 (StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardTouchpadController_localAxisEnd_mF04FD6EFB660DF706D6E935E6371519A5501CD50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardTouchpadController_localAxis_m18E85B087AED184776BC0071109614AC4089FE8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyInputHelper.On_Touch -= localAxis;
		onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * L_0 = (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B *)il2cpp_codegen_object_new(onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		onTouchHandler__ctor_m7569B8CDD67B7881FFF47BBE1F822818578E2A36(L_0, __this, (intptr_t)((intptr_t)StandardTouchpadController_localAxis_m18E85B087AED184776BC0071109614AC4089FE8B_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		EasyInputHelper_remove_On_Touch_m9FBAE03DEA39ABF7EB8DEAD213D599AA1857D150(L_0, /*hidden argument*/NULL);
		// EasyInputHelper.On_TouchEnd -= localAxisEnd;
		onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * L_1 = (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF *)il2cpp_codegen_object_new(onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		onTouchEndHandler__ctor_m8234A2F98878EEF574C26BBBC08F29ABA5DA963E(L_1, __this, (intptr_t)((intptr_t)StandardTouchpadController_localAxisEnd_mF04FD6EFB660DF706D6E935E6371519A5501CD50_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_TouchEnd_m8832AE6FA6309517CD820AD8B3900BAF746C7525(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.StandardControllers.StandardTouchpadController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardTouchpadController_Update_m3BFB3FD6D643AEA9FBAE2C20A9030AA179106CE8 (StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EasyInput.StandardControllers.StandardTouchpadController::localAxisEnd(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardTouchpadController_localAxisEnd_mF04FD6EFB660DF706D6E935E6371519A5501CD50 (StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastFrameTouch = EasyInputConstants.NOT_TOUCHING;
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields*)il2cpp_codegen_static_fields_for(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var))->get_NOT_TOUCHING_0();
		__this->set_lastFrameTouch_8(L_0);
		// }
		return;
	}
}
// System.Void EasyInput.StandardControllers.StandardTouchpadController::localAxis(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardTouchpadController_localAxis_m18E85B087AED184776BC0071109614AC4089FE8B (StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A061F1D30406F8F7C715EF8D9D6387D21BCCCC0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (lastFrameTouch == EasyInputConstants.NOT_TOUCHING)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_lastFrameTouch_8();
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ((EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields*)il2cpp_codegen_static_fields_for(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var))->get_NOT_TOUCHING_0();
		bool L_2;
		L_2 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// lastFrameTouch = touch.currentTouchPosition;
		InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * L_3 = ___touch0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = L_3->get_currentTouchPosition_0();
		__this->set_lastFrameTouch_8(L_4);
		// return;
		return;
	}

IL_001f:
	{
		// horizontal = (touch.currentTouchPosition.x - lastFrameTouch.x) * sensitivity * Time.deltaTime * 100f;
		InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * L_5 = ___touch0;
		NullCheck(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = L_5->get_address_of_currentTouchPosition_0();
		float L_7 = L_6->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_lastFrameTouch_8();
		float L_9 = L_8->get_x_0();
		float L_10 = __this->get_sensitivity_7();
		float L_11;
		L_11 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_horizontal_10(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)), (float)L_10)), (float)L_11)), (float)(100.0f))));
		// vertical = (touch.currentTouchPosition.y - lastFrameTouch.y) * sensitivity * Time.deltaTime * 100f;
		InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * L_12 = ___touch0;
		NullCheck(L_12);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = L_12->get_address_of_currentTouchPosition_0();
		float L_14 = L_13->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = __this->get_address_of_lastFrameTouch_8();
		float L_16 = L_15->get_y_1();
		float L_17 = __this->get_sensitivity_7();
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_vertical_11(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_16)), (float)L_17)), (float)L_18)), (float)(100.0f))));
		// actionVector3 = EasyInputUtilities.getControllerVector3(horizontal, vertical, axisHorizontal, axisVertical);
		float L_19 = __this->get_horizontal_10();
		float L_20 = __this->get_vertical_11();
		int32_t L_21 = __this->get_axisHorizontal_4();
		int32_t L_22 = __this->get_axisVertical_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = EasyInputUtilities_getControllerVector3_m4D9F97BCA1D7029E533EC4FF67BC382E35DB89D0(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		__this->set_actionVector3_9(L_23);
		// switch (action)
		int32_t L_24 = __this->get_action_6();
		V_0 = L_24;
		int32_t L_25 = V_0;
		switch (L_25)
		{
			case 0:
			{
				goto IL_00c5;
			}
			case 1:
			{
				goto IL_00e3;
			}
			case 2:
			{
				goto IL_00f7;
			}
			case 3:
			{
				goto IL_010a;
			}
			case 4:
			{
				goto IL_011d;
			}
		}
	}
	{
		goto IL_013b;
	}

IL_00c5:
	{
		// transform.position += actionVector3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = L_26;
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_actionVector3_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_27, L_30, /*hidden argument*/NULL);
		// break;
		goto IL_0145;
	}

IL_00e3:
	{
		// transform.Rotate(actionVector3, Space.World);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_actionVector3_9();
		NullCheck(L_31);
		Transform_Rotate_m61816C8A09C86A5E157EA89965A9CC0510A1B378(L_31, L_32, 0, /*hidden argument*/NULL);
		// break;
		goto IL_0145;
	}

IL_00f7:
	{
		// transform.Translate(actionVector3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_actionVector3_9();
		NullCheck(L_33);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_33, L_34, /*hidden argument*/NULL);
		// break;
		goto IL_0145;
	}

IL_010a:
	{
		// transform.Rotate(actionVector3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = __this->get_actionVector3_9();
		NullCheck(L_35);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_35, L_36, /*hidden argument*/NULL);
		// break;
		goto IL_0145;
	}

IL_011d:
	{
		// transform.localScale += actionVector3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = L_37;
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_38, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = __this->get_actionVector3_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_38, L_41, /*hidden argument*/NULL);
		// break;
		goto IL_0145;
	}

IL_013b:
	{
		// Debug.Log("Invalid Action");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2A061F1D30406F8F7C715EF8D9D6387D21BCCCC0, /*hidden argument*/NULL);
	}

IL_0145:
	{
		// lastFrameTouch = touch.currentTouchPosition;
		InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * L_42 = ___touch0;
		NullCheck(L_42);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = L_42->get_currentTouchPosition_0();
		__this->set_lastFrameTouch_8(L_43);
		// }
		return;
	}
}
// System.Void EasyInput.StandardControllers.StandardTouchpadController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardTouchpadController__ctor_m474E0A8D8467165314B09AD97E22FBE909DED85F (StandardTouchpadController_t0690C3819E355E5D619533E04F322F8442E1E165 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EasyInputConstants.AXIS axisVertical = EasyInputConstants.AXIS.YAxis;
		__this->set_axisVertical_5(1);
		// public float sensitivity = 1f;
		__this->set_sensitivity_7((1.0f));
		// Vector2 lastFrameTouch = EasyInputConstants.NOT_TOUCHING;
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_StaticFields*)il2cpp_codegen_static_fields_for(EasyInputConstants_t11F635AB7FF2B0AB878E38FA294ECAA13ECDFD4F_il2cpp_TypeInfo_var))->get_NOT_TOUCHING_0();
		__this->set_lastFrameTouch_8(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EasyInput.Misc.Steering::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_OnEnable_mFC8286710FCE4686B496E10AC90F13C71F74D4D0 (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Steering_localAccelerometer_mA56D94949FA1A8A8B72AA424FBB5F5AE6391BC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Steering_localClickEnd_mB622B1A8166603FE9BDC95691E17D1F53117E710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Steering_localClickStart_mC1A68FCC0A99CF0CB91ED626E9E8D470C28BE967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyInputHelper.On_Accelerometer += localAccelerometer;
		AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * L_0 = (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 *)il2cpp_codegen_object_new(AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		AccelerometerHandler__ctor_m975712EA3549BBB6B6B6AE56D85E0604C83A42A6(L_0, __this, (intptr_t)((intptr_t)Steering_localAccelerometer_mA56D94949FA1A8A8B72AA424FBB5F5AE6391BC29_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		EasyInputHelper_add_On_Accelerometer_m89E04F65C05AA5F3714F88D03B05C1166275EAFC(L_0, /*hidden argument*/NULL);
		// EasyInputHelper.On_ClickStart += localClickStart;
		onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 * L_1 = (onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 *)il2cpp_codegen_object_new(onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449_il2cpp_TypeInfo_var);
		onClickStartHandler__ctor_mC5C6D320CC466313F6FC3ABF4AFE81DCEDBA370C(L_1, __this, (intptr_t)((intptr_t)Steering_localClickStart_mC1A68FCC0A99CF0CB91ED626E9E8D470C28BE967_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_ClickStart_m4D9A545C6831BE680D81BDB488620412D1B3A0EF(L_1, /*hidden argument*/NULL);
		// EasyInputHelper.On_ClickEnd += localClickEnd;
		onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC * L_2 = (onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC *)il2cpp_codegen_object_new(onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC_il2cpp_TypeInfo_var);
		onClickEndHandler__ctor_mC220700990BFEA406521378E4E30EF73EFB4F25B(L_2, __this, (intptr_t)((intptr_t)Steering_localClickEnd_mB622B1A8166603FE9BDC95691E17D1F53117E710_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_ClickEnd_mC5D1BB77A7DA0CB98B3215C83710A4A70D791AB1(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_OnDestroy_mDE74308B8764F88033D37E026A642FC843956669 (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Steering_localAccelerometer_mA56D94949FA1A8A8B72AA424FBB5F5AE6391BC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Steering_localClickEnd_mB622B1A8166603FE9BDC95691E17D1F53117E710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Steering_localClickStart_mC1A68FCC0A99CF0CB91ED626E9E8D470C28BE967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyInputHelper.On_Accelerometer -= localAccelerometer;
		AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * L_0 = (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 *)il2cpp_codegen_object_new(AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		AccelerometerHandler__ctor_m975712EA3549BBB6B6B6AE56D85E0604C83A42A6(L_0, __this, (intptr_t)((intptr_t)Steering_localAccelerometer_mA56D94949FA1A8A8B72AA424FBB5F5AE6391BC29_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		EasyInputHelper_remove_On_Accelerometer_mE6CBB04EF40E806859ECE7F32CD44A8C6DCDA556(L_0, /*hidden argument*/NULL);
		// EasyInputHelper.On_Click -= localClickStart;
		onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * L_1 = (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 *)il2cpp_codegen_object_new(onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917_il2cpp_TypeInfo_var);
		onClickHandler__ctor_mD9F9BB133F0C2DB583EE15B9952D8B8220BB56EE(L_1, __this, (intptr_t)((intptr_t)Steering_localClickStart_mC1A68FCC0A99CF0CB91ED626E9E8D470C28BE967_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_Click_m0460DFEA4AE6E29032E368894932EC44A1A54FAD(L_1, /*hidden argument*/NULL);
		// EasyInputHelper.On_Click -= localClickEnd;
		onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * L_2 = (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 *)il2cpp_codegen_object_new(onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917_il2cpp_TypeInfo_var);
		onClickHandler__ctor_mD9F9BB133F0C2DB583EE15B9952D8B8220BB56EE(L_2, __this, (intptr_t)((intptr_t)Steering_localClickEnd_mB622B1A8166603FE9BDC95691E17D1F53117E710_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_Click_m0460DFEA4AE6E29032E368894932EC44A1A54FAD(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_Start_m9067F7D9D1FAF3E8C06B5285717E69EFAC3DA258 (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myRigidbody = this.GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_myRigidbody_4(L_0);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_Update_m1C8315C3839DEB3FF557F65415E302BB5EBB6F0F (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (gasPressed)
		bool L_0 = __this->get_gasPressed_6();
		if (!L_0)
		{
			goto IL_0091;
		}
	}
	{
		// if (myRigidbody.velocity.magnitude > 1f)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_myRigidbody_4();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_3) > ((float)(1.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// myRigidbody.AddForce(myRigidbody.velocity * sensitivity * .5f);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_4 = __this->get_myRigidbody_4();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = __this->get_myRigidbody_4();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_sensitivity_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_4, L_9, /*hidden argument*/NULL);
		goto IL_0091;
	}

IL_0052:
	{
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_10 = __this->get_myRigidbody_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_12, L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_sensitivity_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_10, L_19, /*hidden argument*/NULL);
	}

IL_0091:
	{
		// if (brakePressed)
		bool L_20 = __this->get_brakePressed_7();
		if (!L_20)
		{
			goto IL_0120;
		}
	}
	{
		// if (myRigidbody.velocity.magnitude > 1f)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_21 = __this->get_myRigidbody_4();
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		float L_23;
		L_23 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_23) > ((float)(1.0f)))))
		{
			goto IL_00e7;
		}
	}
	{
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_24 = __this->get_myRigidbody_4();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_25 = __this->get_myRigidbody_4();
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_25, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_27 = __this->get_myRigidbody_4();
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		float L_29;
		L_29 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_26, ((-L_29)), /*hidden argument*/NULL);
		NullCheck(L_24);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_24, L_30, /*hidden argument*/NULL);
		goto IL_0120;
	}

IL_00e7:
	{
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_31 = __this->get_myRigidbody_4();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_32 = __this->get_myRigidbody_4();
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_32, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_34 = __this->get_myRigidbody_4();
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		float L_36;
		L_36 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, ((-L_36)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_37, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_31, L_38, /*hidden argument*/NULL);
	}

IL_0120:
	{
		// steerBall(myAccel);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = __this->get_myAccel_5();
		Steering_steerBall_m6B74FD1BBEF5913041C3556D6C8DD09D0CED85AD(__this, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::steerBall(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_steerBall_m6B74FD1BBEF5913041C3556D6C8DD09D0CED85AD (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___accel0, const RuntimeMethod* method)
{
	{
		// if (accel != Vector3.zero)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___accel0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		// horizontal = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___accel0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_7;
		L_7 = EasyInputUtilities_relativeAngleInAxis_mE35314BE9C36B680A19A0836158B661A3D071219(L_3, L_5, L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_normalizeDegrees_10();
		__this->set_horizontal_8(((float)((float)L_7/(float)L_8)));
		// vertical = EasyInputUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___accel0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_13;
		L_13 = EasyInputUtilities_relativeAngleInAxis_mE35314BE9C36B680A19A0836158B661A3D071219(L_9, L_11, L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_normalizeDegrees_10();
		__this->set_vertical_9(((float)((float)L_13/(float)L_14)));
		// horizontal *= -sensitivity;
		float L_15 = __this->get_horizontal_8();
		float L_16 = __this->get_sensitivity_11();
		__this->set_horizontal_8(((float)il2cpp_codegen_multiply((float)L_15, (float)((-L_16)))));
		// vertical *= -sensitivity;
		float L_17 = __this->get_vertical_9();
		float L_18 = __this->get_sensitivity_11();
		__this->set_vertical_9(((float)il2cpp_codegen_multiply((float)L_17, (float)((-L_18)))));
		// }
		goto IL_0091;
	}

IL_007b:
	{
		// horizontal = 0f;
		__this->set_horizontal_8((0.0f));
		// vertical = 0f;
		__this->set_vertical_9((0.0f));
	}

IL_0091:
	{
		// actionVectorPosition.x = horizontal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_actionVectorPosition_12();
		float L_20 = __this->get_horizontal_8();
		L_19->set_x_2(L_20);
		// actionVectorPosition.y = 0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_actionVectorPosition_12();
		L_21->set_y_3((0.0f));
		// actionVectorPosition.z = vertical;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_actionVectorPosition_12();
		float L_23 = __this->get_vertical_9();
		L_22->set_z_4(L_23);
		// myRigidbody.AddForce(actionVectorPosition);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_24 = __this->get_myRigidbody_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_actionVectorPosition_12();
		NullCheck(L_24);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_24, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::localAccelerometer(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_localAccelerometer_mA56D94949FA1A8A8B72AA424FBB5F5AE6391BC29 (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___accel0, const RuntimeMethod* method)
{
	{
		// myAccel = accel;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___accel0;
		__this->set_myAccel_5(L_0);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::localClickStart(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_localClickStart_mC1A68FCC0A99CF0CB91ED626E9E8D470C28BE967 (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	{
		// if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
		ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * L_0 = ___button0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_button_1();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// brakePressed = true;
		__this->set_brakePressed_7((bool)1);
		// }
		return;
	}

IL_0010:
	{
		// else if (button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton)
		ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * L_2 = ___button0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_button_1();
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * L_4 = ___button0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_button_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}

IL_0022:
	{
		// gasPressed = true;
		__this->set_gasPressed_6((bool)1);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::localClickEnd(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering_localClickEnd_mB622B1A8166603FE9BDC95691E17D1F53117E710 (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	{
		// if (button.button == EasyInputConstants.CONTROLLER_BUTTON.AButton)
		ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * L_0 = ___button0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_button_1();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		// brakePressed = false;
		__this->set_brakePressed_7((bool)0);
		// }
		return;
	}

IL_0010:
	{
		// else if (button.button == EasyInputConstants.CONTROLLER_BUTTON.XButton || button.button == EasyInputConstants.CONTROLLER_BUTTON.BButton)
		ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * L_2 = ___button0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_button_1();
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}
	{
		ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * L_4 = ___button0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_button_1();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}

IL_0022:
	{
		// gasPressed = false;
		__this->set_gasPressed_6((bool)0);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void EasyInput.Misc.Steering::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Steering__ctor_m0BA492490C1CE53AC996EC6B51CD0EEE27058503 (Steering_t7721821869E4257C330E9AE355FE30666731BD08 * __this, const RuntimeMethod* method)
{
	{
		// Vector3 myAccel = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_myAccel_5(L_0);
		// float normalizeDegrees = 90f;
		__this->set_normalizeDegrees_10((90.0f));
		// float sensitivity = 10f;
		__this->set_sensitivity_11((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EasyInput.Misc.TouchDiagnostics::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_OnEnable_mAB689B34847F6DC91DE3325CC95727EB7115A896 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroHandler_t1150F909839ECD716336152E4835017495C9EB63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localAccel_mB3AA539DFA504CBBDF9FA35EF908CB42A4061734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localDoubleTouchEnd_m5178EF1E2F4446D9A4ED6210FDF9BF7B82C12F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localGyro_mEE220048CCE6DC7F96C429293772377A3CFCCEBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localLongTouchEnd_mBFDB3899948FA3EF72EE463D8C85A3C2FBC64BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localLongTouchStart_mB194BBA47420330F9E780910AF74AF2E68629604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localLongTouch_m2BDD32EEDDA6F4B089D5E891BAED72FA4FDFD855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localQuickTouchEnd_mBE59A582CE90D6CB3D542F6176776BAB1597ECE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localSwipe_m360D9C8371A518C56990FEAEE7E8FC4398272F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localTouchEnd_mCF5129C62C6E0DA3248B7F81BF832394EDF4B14A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localTouchStart_m0DC977785720A220ABDF4CFE98E3BEAFB838CE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localTouch_mCAD018FD8480A3A8CFBBC1DB4FDC26EE1F9CAA21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyInputHelper.On_TouchStart += localTouchStart;
		onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * L_0 = (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC *)il2cpp_codegen_object_new(onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC_il2cpp_TypeInfo_var);
		onTouchStartHandler__ctor_m7BCCE1A4F702E391D8068BA81B35C0D53A388082(L_0, __this, (intptr_t)((intptr_t)TouchDiagnostics_localTouchStart_m0DC977785720A220ABDF4CFE98E3BEAFB838CE89_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		EasyInputHelper_add_On_TouchStart_m168C1E46EFAA0C313879B881DCF76FCA7F8F0729(L_0, /*hidden argument*/NULL);
		// EasyInputHelper.On_TouchEnd += localTouchEnd;
		onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * L_1 = (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF *)il2cpp_codegen_object_new(onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		onTouchEndHandler__ctor_m8234A2F98878EEF574C26BBBC08F29ABA5DA963E(L_1, __this, (intptr_t)((intptr_t)TouchDiagnostics_localTouchEnd_mCF5129C62C6E0DA3248B7F81BF832394EDF4B14A_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_TouchEnd_m03023DB99A90FADA053D5EA0DB5AEC385D31E23D(L_1, /*hidden argument*/NULL);
		// EasyInputHelper.On_Touch += localTouch;
		onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * L_2 = (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B *)il2cpp_codegen_object_new(onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		onTouchHandler__ctor_m7569B8CDD67B7881FFF47BBE1F822818578E2A36(L_2, __this, (intptr_t)((intptr_t)TouchDiagnostics_localTouch_mCAD018FD8480A3A8CFBBC1DB4FDC26EE1F9CAA21_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_Touch_m93AFFE5330C73F1ED7228781A5C09FD988C9CB82(L_2, /*hidden argument*/NULL);
		// EasyInputHelper.On_LongTouchStart += localLongTouchStart;
		longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * L_3 = (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 *)il2cpp_codegen_object_new(longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023_il2cpp_TypeInfo_var);
		longTouchStartHandler__ctor_m2EE7B6267A7D637AC4AAC7A699E1FF75334DA619(L_3, __this, (intptr_t)((intptr_t)TouchDiagnostics_localLongTouchStart_mB194BBA47420330F9E780910AF74AF2E68629604_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_LongTouchStart_mA36126D30CF811FA6AC09B8CABDF34F03814CA32(L_3, /*hidden argument*/NULL);
		// EasyInputHelper.On_LongTouchEnd += localLongTouchEnd;
		longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * L_4 = (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 *)il2cpp_codegen_object_new(longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21_il2cpp_TypeInfo_var);
		longTouchEndHandler__ctor_m23586A05271D52F55205FF976A639126596429EA(L_4, __this, (intptr_t)((intptr_t)TouchDiagnostics_localLongTouchEnd_mBFDB3899948FA3EF72EE463D8C85A3C2FBC64BA5_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_LongTouchEnd_mAA8D98FD9DDFD938E39318D9F410A625DC84A759(L_4, /*hidden argument*/NULL);
		// EasyInputHelper.On_LongTouch += localLongTouch;
		longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * L_5 = (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 *)il2cpp_codegen_object_new(longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96_il2cpp_TypeInfo_var);
		longTouchHandler__ctor_m079B16E356F63EFFFF8C3C34628BFFA844D7D495(L_5, __this, (intptr_t)((intptr_t)TouchDiagnostics_localLongTouch_m2BDD32EEDDA6F4B089D5E891BAED72FA4FDFD855_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_LongTouch_mE4A01CB700DEE32B49AD12F48E7146D2B158BDDC(L_5, /*hidden argument*/NULL);
		// EasyInputHelper.On_QuickTouchEnd += localQuickTouchEnd;
		quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * L_6 = (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 *)il2cpp_codegen_object_new(quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258_il2cpp_TypeInfo_var);
		quickTouchEndHandler__ctor_m42F28C55DB46758F1113CE9C107EAB9C52BF3500(L_6, __this, (intptr_t)((intptr_t)TouchDiagnostics_localQuickTouchEnd_mBE59A582CE90D6CB3D542F6176776BAB1597ECE3_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_QuickTouchEnd_m04F73A033399FF0F44AA9C5C34E9BE7799BA855A(L_6, /*hidden argument*/NULL);
		// EasyInputHelper.On_DoubleTouchEnd += localDoubleTouchEnd;
		doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * L_7 = (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 *)il2cpp_codegen_object_new(doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04_il2cpp_TypeInfo_var);
		doubleTouchEndHandler__ctor_mE66A3F7EDE0D9CC6827205D7F4E16880A274F8A5(L_7, __this, (intptr_t)((intptr_t)TouchDiagnostics_localDoubleTouchEnd_m5178EF1E2F4446D9A4ED6210FDF9BF7B82C12F36_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_DoubleTouchEnd_mE6DE1F150E32924627496E9029E70A0EB0FF04BD(L_7, /*hidden argument*/NULL);
		// EasyInputHelper.On_SwipeDetected += localSwipe;
		swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * L_8 = (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 *)il2cpp_codegen_object_new(swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2_il2cpp_TypeInfo_var);
		swipeDistanceHandler__ctor_m30BEF4809D7D1327A43E1526510C96F81B69D11F(L_8, __this, (intptr_t)((intptr_t)TouchDiagnostics_localSwipe_m360D9C8371A518C56990FEAEE7E8FC4398272F92_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_SwipeDetected_mC1D23275DC25D4CFDDEAA8D5C78316EA528D1FE0(L_8, /*hidden argument*/NULL);
		// EasyInputHelper.On_Accelerometer += localAccel;
		AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * L_9 = (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 *)il2cpp_codegen_object_new(AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		AccelerometerHandler__ctor_m975712EA3549BBB6B6B6AE56D85E0604C83A42A6(L_9, __this, (intptr_t)((intptr_t)TouchDiagnostics_localAccel_mB3AA539DFA504CBBDF9FA35EF908CB42A4061734_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_Accelerometer_m89E04F65C05AA5F3714F88D03B05C1166275EAFC(L_9, /*hidden argument*/NULL);
		// EasyInputHelper.On_Gyro += localGyro;
		GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * L_10 = (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 *)il2cpp_codegen_object_new(GyroHandler_t1150F909839ECD716336152E4835017495C9EB63_il2cpp_TypeInfo_var);
		GyroHandler__ctor_mEE1D838C8250D86E37D2F59ADE69F44B5C526E24(L_10, __this, (intptr_t)((intptr_t)TouchDiagnostics_localGyro_mEE220048CCE6DC7F96C429293772377A3CFCCEBF_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_add_On_Gyro_m950460658FA36B838F7C38E12C2F995BAD8E214D(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_OnDestroy_m7863C8E0C916A5C55946F56C10CF11D31C4B9408 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GyroHandler_t1150F909839ECD716336152E4835017495C9EB63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localAccel_mB3AA539DFA504CBBDF9FA35EF908CB42A4061734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localDoubleTouchEnd_m5178EF1E2F4446D9A4ED6210FDF9BF7B82C12F36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localGyro_mEE220048CCE6DC7F96C429293772377A3CFCCEBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localLongTouchEnd_mBFDB3899948FA3EF72EE463D8C85A3C2FBC64BA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localLongTouchStart_mB194BBA47420330F9E780910AF74AF2E68629604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localLongTouch_m2BDD32EEDDA6F4B089D5E891BAED72FA4FDFD855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localQuickTouchEnd_mBE59A582CE90D6CB3D542F6176776BAB1597ECE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localSwipe_m360D9C8371A518C56990FEAEE7E8FC4398272F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localTouchEnd_mCF5129C62C6E0DA3248B7F81BF832394EDF4B14A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localTouchStart_m0DC977785720A220ABDF4CFE98E3BEAFB838CE89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchDiagnostics_localTouch_mCAD018FD8480A3A8CFBBC1DB4FDC26EE1F9CAA21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyInputHelper.On_TouchStart -= localTouchStart;
		onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * L_0 = (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC *)il2cpp_codegen_object_new(onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC_il2cpp_TypeInfo_var);
		onTouchStartHandler__ctor_m7BCCE1A4F702E391D8068BA81B35C0D53A388082(L_0, __this, (intptr_t)((intptr_t)TouchDiagnostics_localTouchStart_m0DC977785720A220ABDF4CFE98E3BEAFB838CE89_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EasyInputHelper_tFC911FD9C77C61CE9F4C79F8612DA5B7928A4E91_il2cpp_TypeInfo_var);
		EasyInputHelper_remove_On_TouchStart_m6B4185C3734AEA8FE6AF784907F4BC7596F79DDB(L_0, /*hidden argument*/NULL);
		// EasyInputHelper.On_TouchEnd -= localTouchEnd;
		onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * L_1 = (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF *)il2cpp_codegen_object_new(onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF_il2cpp_TypeInfo_var);
		onTouchEndHandler__ctor_m8234A2F98878EEF574C26BBBC08F29ABA5DA963E(L_1, __this, (intptr_t)((intptr_t)TouchDiagnostics_localTouchEnd_mCF5129C62C6E0DA3248B7F81BF832394EDF4B14A_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_TouchEnd_m8832AE6FA6309517CD820AD8B3900BAF746C7525(L_1, /*hidden argument*/NULL);
		// EasyInputHelper.On_Touch -= localTouch;
		onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * L_2 = (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B *)il2cpp_codegen_object_new(onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B_il2cpp_TypeInfo_var);
		onTouchHandler__ctor_m7569B8CDD67B7881FFF47BBE1F822818578E2A36(L_2, __this, (intptr_t)((intptr_t)TouchDiagnostics_localTouch_mCAD018FD8480A3A8CFBBC1DB4FDC26EE1F9CAA21_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_Touch_m9FBAE03DEA39ABF7EB8DEAD213D599AA1857D150(L_2, /*hidden argument*/NULL);
		// EasyInputHelper.On_LongTouchStart -= localLongTouchStart;
		longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * L_3 = (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 *)il2cpp_codegen_object_new(longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023_il2cpp_TypeInfo_var);
		longTouchStartHandler__ctor_m2EE7B6267A7D637AC4AAC7A699E1FF75334DA619(L_3, __this, (intptr_t)((intptr_t)TouchDiagnostics_localLongTouchStart_mB194BBA47420330F9E780910AF74AF2E68629604_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_LongTouchStart_m3E86266B505D0157470340B1D5E552004D1BAC46(L_3, /*hidden argument*/NULL);
		// EasyInputHelper.On_LongTouchEnd -= localLongTouchEnd;
		longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * L_4 = (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 *)il2cpp_codegen_object_new(longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21_il2cpp_TypeInfo_var);
		longTouchEndHandler__ctor_m23586A05271D52F55205FF976A639126596429EA(L_4, __this, (intptr_t)((intptr_t)TouchDiagnostics_localLongTouchEnd_mBFDB3899948FA3EF72EE463D8C85A3C2FBC64BA5_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_LongTouchEnd_m09C12398C3A60764D1779B21A5C651C159FD14F6(L_4, /*hidden argument*/NULL);
		// EasyInputHelper.On_LongTouch -= localLongTouch;
		longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * L_5 = (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 *)il2cpp_codegen_object_new(longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96_il2cpp_TypeInfo_var);
		longTouchHandler__ctor_m079B16E356F63EFFFF8C3C34628BFFA844D7D495(L_5, __this, (intptr_t)((intptr_t)TouchDiagnostics_localLongTouch_m2BDD32EEDDA6F4B089D5E891BAED72FA4FDFD855_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_LongTouch_m321C89E6449D5E32B02847EE6A4C63EAC992CC00(L_5, /*hidden argument*/NULL);
		// EasyInputHelper.On_QuickTouchEnd -= localQuickTouchEnd;
		quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * L_6 = (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 *)il2cpp_codegen_object_new(quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258_il2cpp_TypeInfo_var);
		quickTouchEndHandler__ctor_m42F28C55DB46758F1113CE9C107EAB9C52BF3500(L_6, __this, (intptr_t)((intptr_t)TouchDiagnostics_localQuickTouchEnd_mBE59A582CE90D6CB3D542F6176776BAB1597ECE3_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_QuickTouchEnd_m32FC02FC9412B0363BC6843B429A9F5DEDDBBE14(L_6, /*hidden argument*/NULL);
		// EasyInputHelper.On_DoubleTouchEnd -= localDoubleTouchEnd;
		doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * L_7 = (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 *)il2cpp_codegen_object_new(doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04_il2cpp_TypeInfo_var);
		doubleTouchEndHandler__ctor_mE66A3F7EDE0D9CC6827205D7F4E16880A274F8A5(L_7, __this, (intptr_t)((intptr_t)TouchDiagnostics_localDoubleTouchEnd_m5178EF1E2F4446D9A4ED6210FDF9BF7B82C12F36_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_DoubleTouchEnd_m42C6C9012358E14BF40C723BB445A34793AFC0B0(L_7, /*hidden argument*/NULL);
		// EasyInputHelper.On_SwipeDetected -= localSwipe;
		swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * L_8 = (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 *)il2cpp_codegen_object_new(swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2_il2cpp_TypeInfo_var);
		swipeDistanceHandler__ctor_m30BEF4809D7D1327A43E1526510C96F81B69D11F(L_8, __this, (intptr_t)((intptr_t)TouchDiagnostics_localSwipe_m360D9C8371A518C56990FEAEE7E8FC4398272F92_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_SwipeDetected_m93F68F97261F1772606EA20A4D89B84710C5DB69(L_8, /*hidden argument*/NULL);
		// EasyInputHelper.On_Accelerometer -= localAccel;
		AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * L_9 = (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 *)il2cpp_codegen_object_new(AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93_il2cpp_TypeInfo_var);
		AccelerometerHandler__ctor_m975712EA3549BBB6B6B6AE56D85E0604C83A42A6(L_9, __this, (intptr_t)((intptr_t)TouchDiagnostics_localAccel_mB3AA539DFA504CBBDF9FA35EF908CB42A4061734_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_Accelerometer_mE6CBB04EF40E806859ECE7F32CD44A8C6DCDA556(L_9, /*hidden argument*/NULL);
		// EasyInputHelper.On_Gyro -= localGyro;
		GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * L_10 = (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 *)il2cpp_codegen_object_new(GyroHandler_t1150F909839ECD716336152E4835017495C9EB63_il2cpp_TypeInfo_var);
		GyroHandler__ctor_mEE1D838C8250D86E37D2F59ADE69F44B5C526E24(L_10, __this, (intptr_t)((intptr_t)TouchDiagnostics_localGyro_mEE220048CCE6DC7F96C429293772377A3CFCCEBF_RuntimeMethod_var), /*hidden argument*/NULL);
		EasyInputHelper_remove_On_Gyro_mEE6E3DB7BEEAB526A2C546CB40A6BEF1210524C8(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_Update_m436AA27C7CB6E372D35BAD76A77A7055986F1EF3 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!touching)
		bool L_0 = __this->get_touching_22();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// touchValue.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_touchValue_6();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		goto IL_0031;
	}

IL_001a:
	{
		// touchValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_touchValue_6();
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// touching = false;
		__this->set_touching_22((bool)0);
	}

IL_0031:
	{
		// if (!longTouching)
		bool L_3 = __this->get_longTouching_23();
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// LongValue.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_LongValue_9();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		return;
	}

IL_004a:
	{
		// LongValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_LongValue_9();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// longTouching = false;
		__this->set_longTouching_23((bool)0);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localTouchStart(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localTouchStart_m0DC977785720A220ABDF4CFE98E3BEAFB838CE89 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchStartValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_touchStartValue_4();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// StartCoroutine(ClearTextTouchStart(touchStartValue, .5f));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_touchStartValue_4();
		RuntimeObject* L_2;
		L_2 = TouchDiagnostics_ClearTextTouchStart_m4C9A8AB71E313406F4C11A8087B6F211C788BDC8(__this, L_1, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearTextTouchStart(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearTextTouchStart_m4C9A8AB71E313406F4C11A8087B6F211C788BDC8 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * L_0 = (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 *)il2cpp_codegen_object_new(U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6_il2cpp_TypeInfo_var);
		U3CClearTextTouchStartU3Ed__24__ctor_mCB1D5708C30BD5876F031A0A8AAAC93ACECD64CF(L_0, 0, /*hidden argument*/NULL);
		U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___textObject0;
		NullCheck(L_1);
		L_1->set_textObject_3(L_2);
		U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localTouchEnd(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localTouchEnd_mCF5129C62C6E0DA3248B7F81BF832394EDF4B14A (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// touchEndValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_touchEndValue_5();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// StartCoroutine(ClearTextTouchEnd(touchEndValue, .5f));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_touchEndValue_5();
		RuntimeObject* L_2;
		L_2 = TouchDiagnostics_ClearTextTouchEnd_m4E0DA224F7346E3FD5245F4B8B5C1600B250A6BD(__this, L_1, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearTextTouchEnd_m4E0DA224F7346E3FD5245F4B8B5C1600B250A6BD (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * L_0 = (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 *)il2cpp_codegen_object_new(U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6_il2cpp_TypeInfo_var);
		U3CClearTextTouchEndU3Ed__26__ctor_m68ED89535B310355F1ED3C1F2F361971955EF206(L_0, 0, /*hidden argument*/NULL);
		U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___textObject0;
		NullCheck(L_1);
		L_1->set_textObject_3(L_2);
		U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localTouch(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localTouch_mCAD018FD8480A3A8CFBBC1DB4FDC26EE1F9CAA21 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	{
		// touching = true;
		__this->set_touching_22((bool)1);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localLongTouchStart(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localLongTouchStart_mB194BBA47420330F9E780910AF74AF2E68629604 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LongStartValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_LongStartValue_7();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// StartCoroutine(ClearLongTextTouchStart(LongStartValue, .5f));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_LongStartValue_7();
		RuntimeObject* L_2;
		L_2 = TouchDiagnostics_ClearLongTextTouchStart_m9799578BC1100623F1EA73E92AA4366A02DA30FD(__this, L_1, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearLongTextTouchStart(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearLongTextTouchStart_m9799578BC1100623F1EA73E92AA4366A02DA30FD (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * L_0 = (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 *)il2cpp_codegen_object_new(U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2_il2cpp_TypeInfo_var);
		U3CClearLongTextTouchStartU3Ed__29__ctor_mA493E982729C959DFC52718B484E836B35C3F549(L_0, 0, /*hidden argument*/NULL);
		U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___textObject0;
		NullCheck(L_1);
		L_1->set_textObject_3(L_2);
		U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localLongTouchEnd(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localLongTouchEnd_mBFDB3899948FA3EF72EE463D8C85A3C2FBC64BA5 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LongEndValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_LongEndValue_8();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// StartCoroutine(ClearLongTextTouchEnd(LongEndValue, .5f));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_LongEndValue_8();
		RuntimeObject* L_2;
		L_2 = TouchDiagnostics_ClearLongTextTouchEnd_mAB53BF2AB51EE4639F31355202E29F6141807E9D(__this, L_1, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearLongTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearLongTextTouchEnd_mAB53BF2AB51EE4639F31355202E29F6141807E9D (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * L_0 = (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 *)il2cpp_codegen_object_new(U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565_il2cpp_TypeInfo_var);
		U3CClearLongTextTouchEndU3Ed__31__ctor_mC84790B31E710221A248D03F203DD4F37AC78AE8(L_0, 0, /*hidden argument*/NULL);
		U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___textObject0;
		NullCheck(L_1);
		L_1->set_textObject_3(L_2);
		U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localLongTouch(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localLongTouch_m2BDD32EEDDA6F4B089D5E891BAED72FA4FDFD855 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	{
		// longTouching = true;
		__this->set_longTouching_23((bool)1);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localQuickTouchEnd(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localQuickTouchEnd_mBE59A582CE90D6CB3D542F6176776BAB1597ECE3 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// quickEndValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_quickEndValue_10();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// StartCoroutine(ClearQuickTextTouchEnd(quickEndValue, .5f));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_quickEndValue_10();
		RuntimeObject* L_2;
		L_2 = TouchDiagnostics_ClearQuickTextTouchEnd_m9B1B575D07E5CDCB328CDDEA03FB6A41E7CB2933(__this, L_1, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearQuickTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearQuickTextTouchEnd_m9B1B575D07E5CDCB328CDDEA03FB6A41E7CB2933 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * L_0 = (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD *)il2cpp_codegen_object_new(U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD_il2cpp_TypeInfo_var);
		U3CClearQuickTextTouchEndU3Ed__34__ctor_m11EBC838979B21402E6A5B52450935A2B49DDA3D(L_0, 0, /*hidden argument*/NULL);
		U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___textObject0;
		NullCheck(L_1);
		L_1->set_textObject_3(L_2);
		U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localDoubleTouchEnd(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localDoubleTouchEnd_m5178EF1E2F4446D9A4ED6210FDF9BF7B82C12F36 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// doubleEndValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_doubleEndValue_11();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// StartCoroutine(ClearDoubleTextTouchEnd(doubleEndValue, .5f));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_doubleEndValue_11();
		RuntimeObject* L_2;
		L_2 = TouchDiagnostics_ClearDoubleTextTouchEnd_mBC82FEB7E54233EB77B40C355264984FB000F9D0(__this, L_1, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearDoubleTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearDoubleTextTouchEnd_mBC82FEB7E54233EB77B40C355264984FB000F9D0 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * L_0 = (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C *)il2cpp_codegen_object_new(U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C_il2cpp_TypeInfo_var);
		U3CClearDoubleTextTouchEndU3Ed__36__ctor_m0DEE5CA0137557C898D3BED6E3A7E849AA2BC5E0(L_0, 0, /*hidden argument*/NULL);
		U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___textObject0;
		NullCheck(L_1);
		L_1->set_textObject_3(L_2);
		U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localSwipe(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localSwipe_m360D9C8371A518C56990FEAEE7E8FC4398272F92 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// swipeValue.text = "Fired";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_swipeValue_12();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral4A4B17D0397089D8403CCC8311481AA4AB6998CA);
		// StartCoroutine(ClearSwipeTextTouchEnd(swipeValue, .5f));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_swipeValue_12();
		RuntimeObject* L_2;
		L_2 = TouchDiagnostics_ClearSwipeTextTouchEnd_mA30AE8EE4962AA11DBFC868502669EBA5ECEB683(__this, L_1, (0.5f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyInput.Misc.TouchDiagnostics::ClearSwipeTextTouchEnd(UnityEngine.UI.Text,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchDiagnostics_ClearSwipeTextTouchEnd_mA30AE8EE4962AA11DBFC868502669EBA5ECEB683 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textObject0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * L_0 = (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E *)il2cpp_codegen_object_new(U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E_il2cpp_TypeInfo_var);
		U3CClearSwipeTextTouchEndU3Ed__38__ctor_mD728288EBF0577C6B1BB0539B2C2453C4F06CEB1(L_0, 0, /*hidden argument*/NULL);
		U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * L_1 = L_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = ___textObject0;
		NullCheck(L_1);
		L_1->set_textObject_3(L_2);
		U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * L_3 = L_1;
		float L_4 = ___delay1;
		NullCheck(L_3);
		L_3->set_delay_2(L_4);
		return L_3;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localAccel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localAccel_mB3AA539DFA504CBBDF9FA35EF908CB42A4061734 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___accel0, const RuntimeMethod* method)
{
	{
		// accelXValue.text = accel.x.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_accelXValue_13();
		float* L_1 = (&___accel0)->get_address_of_x_2();
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// accelYValue.text = accel.y.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_accelYValue_14();
		float* L_4 = (&___accel0)->get_address_of_y_3();
		String_t* L_5;
		L_5 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// accelZValue.text = accel.z.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_accelZValue_15();
		float* L_7 = (&___accel0)->get_address_of_z_4();
		String_t* L_8;
		L_8 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::localGyro(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics_localGyro_mEE220048CCE6DC7F96C429293772377A3CFCCEBF (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravity0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___userAccel1, const RuntimeMethod* method)
{
	{
		// userAccelXValue.text = userAccel.x.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_userAccelXValue_16();
		float* L_1 = (&___userAccel1)->get_address_of_x_2();
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// userAccelYValue.text = userAccel.y.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_userAccelYValue_17();
		float* L_4 = (&___userAccel1)->get_address_of_y_3();
		String_t* L_5;
		L_5 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// userAccelZValue.text = userAccel.z.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_userAccelZValue_18();
		float* L_7 = (&___userAccel1)->get_address_of_z_4();
		String_t* L_8;
		L_8 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// gravityXValue.text = gravity.x.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_gravityXValue_19();
		float* L_10 = (&___gravity0)->get_address_of_x_2();
		String_t* L_11;
		L_11 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// gravityYValue.text = gravity.y.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_gravityYValue_20();
		float* L_13 = (&___gravity0)->get_address_of_y_3();
		String_t* L_14;
		L_14 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
		// gravityZValue.text = gravity.z.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_gravityZValue_21();
		float* L_16 = (&___gravity0)->get_address_of_z_4();
		String_t* L_17;
		L_17 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		// }
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchDiagnostics__ctor_mCD516A85352DB30B29804B7C46B2ADBD8A0F2E80 (TouchDiagnostics_tC1D7040095479BFFBACAD504F8BE845C4AA5C853 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDoubleTextTouchEndU3Ed__36__ctor_mED7234CC51EC7FF8CE23480C5E6AF4EABFB2AA9B (U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDoubleTextTouchEndU3Ed__36_System_IDisposable_Dispose_m7E1BCAC7899DB31DF8D1CDFBC293FFBDF955F09E (U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearDoubleTextTouchEndU3Ed__36_MoveNext_m53D4AAF72658962959A79774001D1C12A55E4693 (U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1B4BFB29409393E8D60F02F923702D18CF818D03 (U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_Reset_m6540A39F57107F083F6F6F4A4B3D2BFB3C4FE45F (U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_Reset_m6540A39F57107F083F6F6F4A4B3D2BFB3C4FE45F_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_get_Current_m66C69A767D222F42DC65169A76F4FB077DA9A922 (U3CClearDoubleTextTouchEndU3Ed__36_t45D1B789523A5B7172A3579210CE8E15483AA9A8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchEndU3Ed__31__ctor_mF2A59D5D227DDA4F2948ABD94BE96D834BDB48D9 (U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchEndU3Ed__31_System_IDisposable_Dispose_mF537D75AFD42D642EADF0076D7B816E4D44D7889 (U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearLongTextTouchEndU3Ed__31_MoveNext_m33281C0C415FE8512C70290F7A5015B1ABDB8D4C (U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchEndU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE612525A5A4D5F0DBB44D9618F31059E23271203 (U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_Reset_mEBBBF22485BCBC5CC47D0E11821E461135B69F28 (U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_Reset_mEBBBF22485BCBC5CC47D0E11821E461135B69F28_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchEnd>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_get_Current_m64AC3ACED39CA8E32FE4FAE9F6D41ECA485FA183 (U3CClearLongTextTouchEndU3Ed__31_tA0FC44DD1416139C7AA63A077A172E8DE18A3D7A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchStartU3Ed__29__ctor_mD1D564B84B9E299B6A2BB61B05A927C00B6DD941 (U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchStartU3Ed__29_System_IDisposable_Dispose_mC1D197534C8002FC882E31EAB2AB7DD82A60FE10 (U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearLongTextTouchStartU3Ed__29_MoveNext_m20063FAEDD768FB02066942424C87BE3C4BC62F9 (U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchStartU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC77F8E9EAF70EF25086B0FAFB9DE6AD194442315 (U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_Reset_m149878D17DA9701D2F708672F324A249549C9541 (U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_Reset_m149878D17DA9701D2F708672F324A249549C9541_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearLongTextTouchStart>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_get_Current_mABD80A8CE78BB714B2D2ADA0EE31DD27625D5376 (U3CClearLongTextTouchStartU3Ed__29_t9E5F01E5FF57FD99AD77A51F349D279FE7F9E327 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearQuickTextTouchEndU3Ed__34__ctor_m4A4C428E98DEE77CA6D4DA2083CE3F26C8A483EB (U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearQuickTextTouchEndU3Ed__34_System_IDisposable_Dispose_m9A164FE2C43EBB0CEE805ACE9A5BF44D4E4FE6B8 (U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearQuickTextTouchEndU3Ed__34_MoveNext_mD1A54B75402A78F4B289D79B20820ED90DB1CDBB (U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearQuickTextTouchEndU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m751057B9066652F58633F3AB885F35C1FA9651D8 (U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_Reset_m13D890E52D5E1D85C830CAF312F0F3FD12E1752C (U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_Reset_m13D890E52D5E1D85C830CAF312F0F3FD12E1752C_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearQuickTextTouchEnd>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_get_Current_m1280ED275C112353478CFE3D9DA5C43FDFE41EA3 (U3CClearQuickTextTouchEndU3Ed__34_tAA6A3EC5B80E67B5CD748FEEEA8182C7F61577DC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchEndU3Ed__26__ctor_m81303B4D3A15CD65745D83C20197A1D425D52A42 (U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchEndU3Ed__26_System_IDisposable_Dispose_m06D6E064C1DEE5278C37B2A6640425A5D06ABBAA (U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearTextTouchEndU3Ed__26_MoveNext_mD117F6CB85E0359708E9CF9D1F7BB956BCB05DF6 (U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchEndU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC1AA7D09053345FA981E551151D00CC196F44542 (U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_Reset_m63F0C413FDCBDD82E154AF79D65C9AD1FD014B9E (U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_Reset_m63F0C413FDCBDD82E154AF79D65C9AD1FD014B9E_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchEnd>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_get_Current_m839B587B3451C188652F75545777B5F56E7749B8 (U3CClearTextTouchEndU3Ed__26_tC3A19A48641F472BAD12015216181E953F28180C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchStartU3Ed__24__ctor_m3C68725481DB0772BBF54310910B0E6CFD1D1801 (U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchStartU3Ed__24_System_IDisposable_Dispose_mA339F5F2A96C21EC0BDD706DC80D817E659D4BAA (U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearTextTouchStartU3Ed__24_MoveNext_m97030472E5108D72A6B4A4BA245DBF6A03BFD31E (U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchStartU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCFF4BCE26548BCABB38815DA44AA9FF742AABAB2 (U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_Reset_mA8A590127005F3ECCF3AB8EFFEA383BD8481B926 (U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_Reset_mA8A590127005F3ECCF3AB8EFFEA383BD8481B926_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.ControllerDiagnostics/<ClearTextTouchStart>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_get_Current_mADC65F8F9AB63B74388D5AF3B370468B47CD336A (U3CClearTextTouchStartU3Ed__24_tCE0D1167EEC3870472174019D13B1BCA4C334CD5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.StandardControllers.CustomAxisController/AxisHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisHandler__ctor_m692621FBFEDEEFC0CFD9B832A077614B617F4F69 (AxisHandler_t14D89929DE69C6AEA63055C828F32991DFBAF7F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA1BB7202EF9CB703F7474880ED1630015FBB5BB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA1BB7202EF9CB703F7474880ED1630015FBB5BB0(__this, /*hidden argument*/UnityEvent_1__ctor_mA1BB7202EF9CB703F7474880ED1630015FBB5BB0_RuntimeMethod_var);
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
// System.Void EasyInput.StandardControllers.CustomButtonClickController/ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m19C0CBFB555A128E8927D2F06CF4C76AA07ED139 (ButtonHandler_t345A11A6BAB5285AEFBB28858F028BB5FDA3760D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m52EF391B0FCF9BDC619781AC4ECF07EB6979AFAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m52EF391B0FCF9BDC619781AC4ECF07EB6979AFAA(__this, /*hidden argument*/UnityEvent_1__ctor_m52EF391B0FCF9BDC619781AC4ECF07EB6979AFAA_RuntimeMethod_var);
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
// System.Void EasyInput.StandardControllers.CustomButtonVoidController/ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m741BD4A590774F9D691395D634D3BFFA895BC89D (ButtonHandler_t6148EBFB022E628729B22C104582415A4977B3C4 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// System.Void EasyInput.StandardControllers.CustomMotionController/AccelerometerHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccelerometerHandler__ctor_m45DEB803AE342379489DA225EA48D27838B81946 (AccelerometerHandler_t1C7172D0267EEBB75435F675B3264685913CFDD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8(__this, /*hidden argument*/UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var);
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
// System.Void EasyInput.StandardControllers.CustomMotionController/GyroHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroHandler__ctor_m10A1BAC802A64EDA7D83367CB7E266FDA147DFFD (GyroHandler_t23A8F07BA50CD11B1A2A9340BBCA08475429FCD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mB0024D2F132EC65C8DA83C650ECE1ADA38960E10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mB0024D2F132EC65C8DA83C650ECE1ADA38960E10(__this, /*hidden argument*/UnityEvent_2__ctor_mB0024D2F132EC65C8DA83C650ECE1ADA38960E10_RuntimeMethod_var);
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
// System.Void EasyInput.StandardControllers.CustomTouchInputController/TouchHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler__ctor_m839A86EA8053C9702085E43DC19E1A29263D3C28 (TouchHandler_t3518D8AEA9CAB00B8C92AB6122C3CA94973616D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDDC486EAA938D391327A4B49DFE8C9FE4A9AFAE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDDC486EAA938D391327A4B49DFE8C9FE4A9AFAE8(__this, /*hidden argument*/UnityEvent_1__ctor_mDDC486EAA938D391327A4B49DFE8C9FE4A9AFAE8_RuntimeMethod_var);
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
// System.Void EasyInput.StandardControllers.CustomTouchVoidController/TouchHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchHandler__ctor_m2A3EA281DC2A0B0B3F2C19C0B360561264EF76DB (TouchHandler_tE081577B9B7FACFC7D31781FFF4F66F526CE8A2B * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___acceleration0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___acceleration0);

}
// System.Void EasyInput.Core.EasyInputHelper/AccelerometerHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccelerometerHandler__ctor_m975712EA3549BBB6B6B6AE56D85E0604C83A42A6 (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/AccelerometerHandler::Invoke(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccelerometerHandler_Invoke_mD46DF09E649E087AA6C179A69C5D2F04656DAD26 (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___acceleration0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___acceleration0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___acceleration0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___acceleration0);
					else
						GenericVirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___acceleration0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___acceleration0);
					else
						VirtActionInvoker1< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___acceleration0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___acceleration0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___acceleration0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/AccelerometerHandler::BeginInvoke(UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AccelerometerHandler_BeginInvoke_mCF336F7BA99EE0CD8846C3CECDFAF414FF486223 (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___acceleration0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___acceleration0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/AccelerometerHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccelerometerHandler_EndInvoke_m5F344E0FB6498D475CA299E41CD2EB0E9D3EE504 (AccelerometerHandler_tAC9E5B4899E13E1F59587EBB2DA612B9CD97FE93 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravity0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___userAcceleration1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___gravity0, ___userAcceleration1);

}
// System.Void EasyInput.Core.EasyInputHelper/GyroHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroHandler__ctor_mEE1D838C8250D86E37D2F59ADE69F44B5C526E24 (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/GyroHandler::Invoke(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroHandler_Invoke_mC43CFCA5883372C8777DB1D63AA61F279B59C82D (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravity0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___userAcceleration1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___gravity0, ___userAcceleration1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___gravity0, ___userAcceleration1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___gravity0, ___userAcceleration1);
					else
						GenericVirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(targetMethod, targetThis, ___gravity0, ___userAcceleration1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___gravity0, ___userAcceleration1);
					else
						VirtActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___gravity0, ___userAcceleration1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___gravity0) - 1), ___userAcceleration1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___gravity0, ___userAcceleration1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/GyroHandler::BeginInvoke(UnityEngine.Vector3,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GyroHandler_BeginInvoke_m1B0B8A673EF7113C42AB39C9A10AD987A0627333 (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gravity0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___userAcceleration1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___gravity0);
	__d_args[1] = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &___userAcceleration1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void EasyInput.Core.EasyInputHelper/GyroHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GyroHandler_EndInvoke_m8C53A6524463AA0441C692B6D26F8A4E46D95067 (GyroHandler_t1150F909839ECD716336152E4835017495C9EB63 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/MotionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionHandler__ctor_m244C36B2A1292DC648A70B081E7DEBE8F3D4D9E2 (MotionHandler_t7DFBED96A53BABB65431051DE551FA91779A6A86 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/MotionHandler::Invoke(EasyInput.Core.Motion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionHandler_Invoke_m898373DF606E09CA5DF3FCB89EF4AF186F9FAB4B (MotionHandler_t7DFBED96A53BABB65431051DE551FA91779A6A86 * __this, Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E * ___motion0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___motion0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___motion0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___motion0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___motion0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___motion0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___motion0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___motion0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E * >::Invoke(targetMethod, targetThis, ___motion0);
					else
						GenericVirtActionInvoker1< Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E * >::Invoke(targetMethod, targetThis, ___motion0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___motion0);
					else
						VirtActionInvoker1< Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___motion0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___motion0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___motion0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/MotionHandler::BeginInvoke(EasyInput.Core.Motion,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotionHandler_BeginInvoke_m1920ED4EF635230470485A595FA18561E4C3D45C (MotionHandler_t7DFBED96A53BABB65431051DE551FA91779A6A86 * __this, Motion_t1598F19F620C3872A19E836598E30C0AFE12AB6E * ___motion0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___motion0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/MotionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionHandler_EndInvoke_m081A48FF5409F10BE2B62CC61C2DCFD7B1D495CB (MotionHandler_t7DFBED96A53BABB65431051DE551FA91779A6A86 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/doubleClickEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void doubleClickEndHandler__ctor_m2608AA60BC36B5EDEE3773A76C9B3555532368A3 (doubleClickEndHandler_tAD931AA14D746AA44D665104343FCDBCFEF994EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/doubleClickEndHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void doubleClickEndHandler_Invoke_mA7F94A9B26FC8FA39C32CD2DB7219467CEA9792F (doubleClickEndHandler_tAD931AA14D746AA44D665104343FCDBCFEF994EC * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/doubleClickEndHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* doubleClickEndHandler_BeginInvoke_mE6622C2903860D53E79B369BEE605E099C98A816 (doubleClickEndHandler_tAD931AA14D746AA44D665104343FCDBCFEF994EC * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/doubleClickEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void doubleClickEndHandler_EndInvoke_m2A634F3EBD37B9EDFFE4CE15241C4839276988AD (doubleClickEndHandler_tAD931AA14D746AA44D665104343FCDBCFEF994EC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/doubleTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void doubleTouchEndHandler__ctor_mE66A3F7EDE0D9CC6827205D7F4E16880A274F8A5 (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/doubleTouchEndHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void doubleTouchEndHandler_Invoke_m9F9B93DB94D8CE7A648C33A46233037CE22132C1 (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/doubleTouchEndHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* doubleTouchEndHandler_BeginInvoke_mE9AC979B77CA965084DE3DA821D9DAAD5C209C0D (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/doubleTouchEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void doubleTouchEndHandler_EndInvoke_m99F0903E9567295CD7696F479572709F450F826E (doubleTouchEndHandler_t966F91029498ED9F9432131802C9865CF88D1E04 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/longClickEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickEndHandler__ctor_m1A3106C0F6137559C05628E5746B8458BFB76595 (longClickEndHandler_t46C56619A7057738687BAD1EEF4147451D8A9E02 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/longClickEndHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickEndHandler_Invoke_m3FD179FED8675FA431B5AEBF1F4B17D0367F2B97 (longClickEndHandler_t46C56619A7057738687BAD1EEF4147451D8A9E02 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/longClickEndHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* longClickEndHandler_BeginInvoke_m9CB7EF6AECD8F87D99724A065F43BC58BBC5FCDF (longClickEndHandler_t46C56619A7057738687BAD1EEF4147451D8A9E02 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/longClickEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickEndHandler_EndInvoke_m80B76D4744D1884C0AE3480D520507B0C564EDAC (longClickEndHandler_t46C56619A7057738687BAD1EEF4147451D8A9E02 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/longClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickHandler__ctor_m937FC553DF44FE9F89AC13D436F368B25E40AEDF (longClickHandler_t78C9D39A86F9317C64CB4EF196FED88DECBB1B89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/longClickHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickHandler_Invoke_mB4B7B87C1ACA7403590B0D636BB46AE5E92FC1F9 (longClickHandler_t78C9D39A86F9317C64CB4EF196FED88DECBB1B89 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/longClickHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* longClickHandler_BeginInvoke_m0F8A6D50E866131E9E15BF5EE16F5350B59AD712 (longClickHandler_t78C9D39A86F9317C64CB4EF196FED88DECBB1B89 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/longClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickHandler_EndInvoke_mF7D01CC95F227F7B3BC7F903A355D3677616C75A (longClickHandler_t78C9D39A86F9317C64CB4EF196FED88DECBB1B89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/longClickStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickStartHandler__ctor_m7BB5B9D492CAD9E7F336A10887AF28906DA0AE53 (longClickStartHandler_t66152905869AFA1988101991AA6652EEC6ACCA27 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/longClickStartHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickStartHandler_Invoke_mAFC3F47B10EA1DB98DBDAA94C1902BA64699F9D9 (longClickStartHandler_t66152905869AFA1988101991AA6652EEC6ACCA27 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/longClickStartHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* longClickStartHandler_BeginInvoke_m1D5781838E4B72C6D0CBE82B540C945479C8FAA3 (longClickStartHandler_t66152905869AFA1988101991AA6652EEC6ACCA27 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/longClickStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longClickStartHandler_EndInvoke_m8EEB56B0905A98DC41F4C82765359CCF8EBA0919 (longClickStartHandler_t66152905869AFA1988101991AA6652EEC6ACCA27 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/longTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchEndHandler__ctor_m23586A05271D52F55205FF976A639126596429EA (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/longTouchEndHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchEndHandler_Invoke_m93CD7AD4C18DBD72B747F983901F2223BF79A8E9 (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/longTouchEndHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* longTouchEndHandler_BeginInvoke_m578A7EC4CDC10456090568F8D1F51ED316C70682 (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/longTouchEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchEndHandler_EndInvoke_m0485E77E3D60679A3DD817B89CCF562A8DDC068D (longTouchEndHandler_tCA9D99EC6D10567B2E3538817429133238F42F21 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/longTouchHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchHandler__ctor_m079B16E356F63EFFFF8C3C34628BFFA844D7D495 (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/longTouchHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchHandler_Invoke_m00A49520E9D61273173B17B0D2305C2AA2942A3A (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/longTouchHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* longTouchHandler_BeginInvoke_mC136A79EB3C6DFDBAED41E22B76E05ED060198D3 (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/longTouchHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchHandler_EndInvoke_m18E2887DF94B0AEB0FA46933CE2EEBD8EC7E07D2 (longTouchHandler_t73E5A2DC22AFBC4CC73443DF54A686E257D6FC96 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/longTouchStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchStartHandler__ctor_m2EE7B6267A7D637AC4AAC7A699E1FF75334DA619 (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/longTouchStartHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchStartHandler_Invoke_m7B2D314D17E429569A9F85843EF8EE9E53116828 (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/longTouchStartHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* longTouchStartHandler_BeginInvoke_m6B2AA3C834011D1DA8FDF14CD433EAF35AFEDF1C (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/longTouchStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void longTouchStartHandler_EndInvoke_m08D9699FC4F0D3E6C31A5D259A6BDF3B516D95AB (longTouchStartHandler_t76665310066465E6440EC2EADC0F3C926C551023 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/onAxisHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onAxisHandler__ctor_mFD98E497DD3863FBC63C10EF42765EEA1D5D5B0E (onAxisHandler_t51A99E4C3C496FA232D4C4FCEB8BD4C9F40C08A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/onAxisHandler::Invoke(EasyInput.Core.ControllerAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onAxisHandler_Invoke_m3A152ED17A2A5239FD3EF398C205AFBC330AD9EE (onAxisHandler_t51A99E4C3C496FA232D4C4FCEB8BD4C9F40C08A6 * __this, ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB * ___axis0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___axis0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___axis0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___axis0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___axis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___axis0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___axis0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___axis0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB * >::Invoke(targetMethod, targetThis, ___axis0);
					else
						GenericVirtActionInvoker1< ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB * >::Invoke(targetMethod, targetThis, ___axis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___axis0);
					else
						VirtActionInvoker1< ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___axis0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___axis0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___axis0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/onAxisHandler::BeginInvoke(EasyInput.Core.ControllerAxis,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onAxisHandler_BeginInvoke_mE1E9C4743B3C6625394ACBD13A3798671874C6DE (onAxisHandler_t51A99E4C3C496FA232D4C4FCEB8BD4C9F40C08A6 * __this, ControllerAxis_t1D52945377FF241287CF0B231BBDE9A49C48EBFB * ___axis0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___axis0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/onAxisHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onAxisHandler_EndInvoke_m0D2B9C966A0D99012ABAA994ED5FA4FD813A60D0 (onAxisHandler_t51A99E4C3C496FA232D4C4FCEB8BD4C9F40C08A6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/onClickEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickEndHandler__ctor_mC220700990BFEA406521378E4E30EF73EFB4F25B (onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/onClickEndHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickEndHandler_Invoke_m19ABF387EB96D4077933C5C72E7E031459028520 (onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/onClickEndHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onClickEndHandler_BeginInvoke_m1F9772FB973B42257214368448276FF390BBA211 (onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/onClickEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickEndHandler_EndInvoke_mA41542D565F8897C6DD32FB8FCFFE3AABC2841F3 (onClickEndHandler_t1AE26FBF95285CC5D82C9823468B1DA15470EAAC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/onClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickHandler__ctor_mD9F9BB133F0C2DB583EE15B9952D8B8220BB56EE (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/onClickHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickHandler_Invoke_m984326DB33821EFDCB0FD53BE1628F2FA9BD0840 (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/onClickHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onClickHandler_BeginInvoke_m38F633BE12FFDD246A905D5816225261BE9E6145 (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/onClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickHandler_EndInvoke_m8F2FD8427B8B72B3E2695388C3E4F11CF01A0CD5 (onClickHandler_tE6A37C66892F8173F2D9B08A38ECB7838217A917 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/onClickStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickStartHandler__ctor_mC5C6D320CC466313F6FC3ABF4AFE81DCEDBA370C (onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/onClickStartHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickStartHandler_Invoke_m00DAE31C53E5679DA02B4207A7A6A584124BDFF3 (onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/onClickStartHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onClickStartHandler_BeginInvoke_m5AA09F84ACBDE45E7DE5B13372E14F2EB8272CC3 (onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/onClickStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onClickStartHandler_EndInvoke_mD5DA934194A66A569D7EF2BC173B590DC0DC61A4 (onClickStartHandler_tF88526E163A224B6D2FD81ED1DDE0EA48D2E3449 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/onTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchEndHandler__ctor_m8234A2F98878EEF574C26BBBC08F29ABA5DA963E (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/onTouchEndHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchEndHandler_Invoke_m8C2426C4AE996FE12EC11D63474DF8E1A4F83126 (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/onTouchEndHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onTouchEndHandler_BeginInvoke_m19AE6454AA65B9329AC72842F09A8CE9FD252B60 (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/onTouchEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchEndHandler_EndInvoke_m3B5EAE0747989FB1F325D1A02BEB7E29E8F02BF6 (onTouchEndHandler_tC04963E24206B3EF0F00C4369549B36524A4F5FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/onTouchHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchHandler__ctor_m7569B8CDD67B7881FFF47BBE1F822818578E2A36 (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/onTouchHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchHandler_Invoke_m7F1C4EA91FFF852E22C54422D3F0F3C2641E4C2B (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/onTouchHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onTouchHandler_BeginInvoke_mDA375712EBFB1344DA7AB414020D859EA51F00D7 (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/onTouchHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchHandler_EndInvoke_m9CF851CEBC9B1CFE2A1D7A068A9C95EEA060A556 (onTouchHandler_tCDBB18E803717506380658FC764F7E1AB7EB9B5B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/onTouchStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchStartHandler__ctor_m7BCCE1A4F702E391D8068BA81B35C0D53A388082 (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/onTouchStartHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchStartHandler_Invoke_mFC122A7EC36BCD1302BE6977411E41EA4A8890BE (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/onTouchStartHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* onTouchStartHandler_BeginInvoke_m8161276E5B1859223722B03E4F9F1076D4CA3AA3 (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/onTouchStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void onTouchStartHandler_EndInvoke_m6CB9F86F247F92A8ABBBF9D0C8088476F949437C (onTouchStartHandler_tA53842D3533AEE14E42FA4BA94111A21894096DC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/quickClickEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quickClickEndHandler__ctor_m8473C634552E368AD8BEFFECEF7D0C0DE5236869 (quickClickEndHandler_t2ABFD780F58ED99E5EDFDB654DA601EC067FE85B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/quickClickEndHandler::Invoke(EasyInput.Core.ButtonClick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quickClickEndHandler_Invoke_m113873D87420F19270B9B5CA58D1AB73D404C2DE (quickClickEndHandler_t2ABFD780F58ED99E5EDFDB654DA601EC067FE85B * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___button0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___button0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___button0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
					else
						GenericVirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(targetMethod, targetThis, ___button0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___button0);
					else
						VirtActionInvoker1< ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___button0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___button0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___button0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/quickClickEndHandler::BeginInvoke(EasyInput.Core.ButtonClick,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* quickClickEndHandler_BeginInvoke_mF30E00858745A5E398896893469555CB0DAAB1D6 (quickClickEndHandler_t2ABFD780F58ED99E5EDFDB654DA601EC067FE85B * __this, ButtonClick_tBCC42627078CD5BEE640B6CF5556944C40E58B9A * ___button0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___button0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/quickClickEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quickClickEndHandler_EndInvoke_mD984EACBBA60DD81F70BEE499E937C81AF95CAF3 (quickClickEndHandler_t2ABFD780F58ED99E5EDFDB654DA601EC067FE85B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/quickTouchEndHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quickTouchEndHandler__ctor_m42F28C55DB46758F1113CE9C107EAB9C52BF3500 (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/quickTouchEndHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quickTouchEndHandler_Invoke_m921BD16C3481720E7CCD2839CF2B36F25EE13216 (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/quickTouchEndHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* quickTouchEndHandler_BeginInvoke_mFDE77772190DEAFB443B9ED7C6B1D241B5A5DD5F (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/quickTouchEndHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quickTouchEndHandler_EndInvoke_mFACAD28BAF40EDDA8B36C2F8F2CE502843BC08B0 (quickTouchEndHandler_tF05B700A3F0C1482481F566BA4A612A7BFB45258 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Core.EasyInputHelper/swipeDistanceHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swipeDistanceHandler__ctor_m30BEF4809D7D1327A43E1526510C96F81B69D11F (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EasyInput.Core.EasyInputHelper/swipeDistanceHandler::Invoke(EasyInput.Core.InputTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swipeDistanceHandler_Invoke_m2C0E808E0E8CF72DF7DD7E1BB810E0A2885E61E0 (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___touch0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___touch0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___touch0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
					else
						GenericVirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(targetMethod, targetThis, ___touch0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___touch0);
					else
						VirtActionInvoker1< InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___touch0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___touch0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___touch0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EasyInput.Core.EasyInputHelper/swipeDistanceHandler::BeginInvoke(EasyInput.Core.InputTouch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* swipeDistanceHandler_BeginInvoke_m553D299C4745324BC8657D6A84B23916574177A2 (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * __this, InputTouch_t277B560F5A78A2587A024D25FCE00851BFE29DDA * ___touch0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___touch0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EasyInput.Core.EasyInputHelper/swipeDistanceHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swipeDistanceHandler_EndInvoke_m8C43C626E6ACE4462875E71B145D1AABDFBABFB0 (swipeDistanceHandler_t0F1E50CCE18B2819C93DDC91DAD3F06D813793A2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDoubleTextTouchEndU3Ed__36__ctor_m0DEE5CA0137557C898D3BED6E3A7E849AA2BC5E0 (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDoubleTextTouchEndU3Ed__36_System_IDisposable_Dispose_m77FFEA552073DC328726A6CD894F7C37DDA6C4C5 (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearDoubleTextTouchEndU3Ed__36_MoveNext_m906D9639DB98EDF17DE413FC1E7D2B9D629C793C (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0AC757598536ACEA215C70B2AE19D60D78645D47 (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_Reset_m916DF896FB0D2B6357A25AE3F4FFC3822E9213B1 (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_Reset_m916DF896FB0D2B6357A25AE3F4FFC3822E9213B1_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearDoubleTextTouchEnd>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearDoubleTextTouchEndU3Ed__36_System_Collections_IEnumerator_get_Current_mEDDFF39946ECFCF85DC9CE64D864B20769093EAD (U3CClearDoubleTextTouchEndU3Ed__36_t2AD4735222BA1EBCB40ED37A103FA5118D2B6C7C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchEndU3Ed__31__ctor_mC84790B31E710221A248D03F203DD4F37AC78AE8 (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchEndU3Ed__31_System_IDisposable_Dispose_mC675E21900D19DE7EBA1D616E0D14D0BA36FBA45 (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearLongTextTouchEndU3Ed__31_MoveNext_mC8411CF5F12BC72C6BF758F5D980570303110BF6 (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchEndU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8B069B0D0C2A6D2A039983C9D6D1EB2C944B2BB9 (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_Reset_mA0DEA969C178498E221491DFC6AB8CBEA35A511F (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_Reset_mA0DEA969C178498E221491DFC6AB8CBEA35A511F_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchEnd>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchEndU3Ed__31_System_Collections_IEnumerator_get_Current_mB86446AB0C819423F46FC723B9A0CCD0E28F5FBA (U3CClearLongTextTouchEndU3Ed__31_t641F71F9078DBA354F489A6278DB61EFE3557565 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchStartU3Ed__29__ctor_mA493E982729C959DFC52718B484E836B35C3F549 (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchStartU3Ed__29_System_IDisposable_Dispose_mE46977680652239A636FABC4CDA6C7437B5CBB0B (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearLongTextTouchStartU3Ed__29_MoveNext_m290E759553A0FBF3C6ABDD3751A50AC3CE74D916 (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchStartU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7EFD76CA220E0A0376C7B3D26E51DD42E2EB4EF4 (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_Reset_mC467C9BE67A2C14E2AC17D2052E508754492E8B7 (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_Reset_mC467C9BE67A2C14E2AC17D2052E508754492E8B7_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearLongTextTouchStart>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearLongTextTouchStartU3Ed__29_System_Collections_IEnumerator_get_Current_m38EBB335B82E17393024D283A485169694628D8F (U3CClearLongTextTouchStartU3Ed__29_t88F91F3E173C7FA39685C7E87F8BEDCC441376B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearQuickTextTouchEndU3Ed__34__ctor_m11EBC838979B21402E6A5B52450935A2B49DDA3D (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearQuickTextTouchEndU3Ed__34_System_IDisposable_Dispose_m4F8F07F4A8AD9C3792E8C2504B3DD6C1FE1A0DCD (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearQuickTextTouchEndU3Ed__34_MoveNext_m542A3A3CF5C13861A0300A68158AA10266FD3D4C (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearQuickTextTouchEndU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0977AFC77A90F952FE6A1D0D51CCA04A5451B0E2 (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_Reset_m0BC5409E1A71138CFF96ED81B1EB2D834A5FFC9C (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_Reset_m0BC5409E1A71138CFF96ED81B1EB2D834A5FFC9C_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearQuickTextTouchEnd>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearQuickTextTouchEndU3Ed__34_System_Collections_IEnumerator_get_Current_mE140DD8FF82BDE86F08CCC092538A7A149D1B8F1 (U3CClearQuickTextTouchEndU3Ed__34_tFD3B892385372F65984240598171954DE7B051CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearSwipeTextTouchEndU3Ed__38__ctor_mD728288EBF0577C6B1BB0539B2C2453C4F06CEB1 (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearSwipeTextTouchEndU3Ed__38_System_IDisposable_Dispose_m05549DBB88DA69FA33E87F5C8556FD185FD7D3F7 (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearSwipeTextTouchEndU3Ed__38_MoveNext_mD0891611A55F0F99B6016B7D69F8C686514BE306 (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearSwipeTextTouchEndU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDF2AB66F3CF44EB0B071519608A898BC9E054757 (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearSwipeTextTouchEndU3Ed__38_System_Collections_IEnumerator_Reset_m3975CA0DBCE45F5088E8C1DA4099F1FB3CF4A194 (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearSwipeTextTouchEndU3Ed__38_System_Collections_IEnumerator_Reset_m3975CA0DBCE45F5088E8C1DA4099F1FB3CF4A194_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearSwipeTextTouchEnd>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearSwipeTextTouchEndU3Ed__38_System_Collections_IEnumerator_get_Current_m194BECCD7D92FAEA065DE080B250E5993B93C4A4 (U3CClearSwipeTextTouchEndU3Ed__38_t714ACF3AE04FB5A53F2D54D5EBA817D18E77C96E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchEndU3Ed__26__ctor_m68ED89535B310355F1ED3C1F2F361971955EF206 (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchEndU3Ed__26_System_IDisposable_Dispose_mF89799001517D67013F98ED9A9067D89710F17E5 (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearTextTouchEndU3Ed__26_MoveNext_m2C9CD3E25EA09B9AE51ED3CF23BE5EC7EC9B1436 (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchEndU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF9CC9B7FFA42FE3C76E2CE92913ACECCA571629D (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_Reset_m728180ED96E6114E48F7FF754CFC196DBA7EB8C1 (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_Reset_m728180ED96E6114E48F7FF754CFC196DBA7EB8C1_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearTextTouchEnd>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchEndU3Ed__26_System_Collections_IEnumerator_get_Current_m92F2BA2B5E2B3A198600BB9BF2874BF0CD508140 (U3CClearTextTouchEndU3Ed__26_t187725DB01E3EC20ACFA909619AB5BFAC6C708E6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchStartU3Ed__24__ctor_mCB1D5708C30BD5876F031A0A8AAAC93ACECD64CF (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchStartU3Ed__24_System_IDisposable_Dispose_mF6D633C7AF372E8C6BA1A7A67066AA26A54A8BB3 (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearTextTouchStartU3Ed__24_MoveNext_m6DFAD8E149BD65C0C6DC7DA1CBB80A2A87A44799 (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// textObject.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_textObject_3();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		return (bool)0;
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchStartU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m873A921B4D8EF1B2AD954AC8905A49176D1F8022 (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_Reset_mEE8F1F7937DDF2D58CFBCD520ECE735B6EF85CF2 (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_Reset_mEE8F1F7937DDF2D58CFBCD520ECE735B6EF85CF2_RuntimeMethod_var)));
	}
}
// System.Object EasyInput.Misc.TouchDiagnostics/<ClearTextTouchStart>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearTextTouchStartU3Ed__24_System_Collections_IEnumerator_get_Current_m5A5B8A315FCE1E8A0DBB1CC9A918874C428934C1 (U3CClearTextTouchStartU3Ed__24_t9033312F3C73C1B6E7C1AE8D90299E149FA16AA6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
