#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// com.heparo.terrain.toolkit.TerrainToolkit/ErosionProgressDelegate
struct ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B;
// com.heparo.terrain.toolkit.TerrainToolkit/GeneratorProgressDelegate
struct GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871;
// com.heparo.terrain.toolkit.TerrainToolkit/PeakDistance
struct PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69;
// com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D
struct PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD;
// com.heparo.terrain.toolkit.TerrainToolkit/TextureProgressDelegate
struct TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482;
// com.heparo.terrain.toolkit.TerrainToolkit/fastHydraulicErosionPresetData
struct fastHydraulicErosionPresetData_t75927B0B29D2BA800818BB5206159A325733AAC0;
// com.heparo.terrain.toolkit.TerrainToolkit/fractalPresetData
struct fractalPresetData_tFE2AFB423BF00A0C77CB20D9B21D5884CBA654C9;
// com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData
struct fullHydraulicErosionPresetData_t47344DDCDCD71447E44D01909192001ECC990A51;
// com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData
struct perlinPresetData_t433677DB0E2692252D7F3DD8732708AAC80521E2;
// com.heparo.terrain.toolkit.TerrainToolkit/thermalErosionPresetData
struct thermalErosionPresetData_tBDD8EBFDCA3D9B4DBA98496995A57C340F23A4D9;
// com.heparo.terrain.toolkit.TerrainToolkit/tidalErosionPresetData
struct tidalErosionPresetData_t6387728E59A2B52C8966FF07E096E8CC8CF03C57;
// com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData
struct velocityHydraulicErosionPresetData_tACAB9FF4EC01A1B581B88B28AB89274766D262C4;
// com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData
struct voronoiPresetData_t2080029282148A0DF00C411252BDE13242AF939D;
// com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData
struct windErosionPresetData_t4ABD7B87D266783CA595F923B11D33E87C8DBE0E;

IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// com.heparo.terrain.toolkit.TerrainToolkit/PeakDistance
struct PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69  : public RuntimeObject
{
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/PeakDistance::id
	int32_t ___id_0;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/PeakDistance::dist
	float ___dist_1;
};

// com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D
struct PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD  : public RuntimeObject
{
	// System.Double[,] com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::p_noiseValues
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___p_noiseValues_0;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::p_amplitude
	float ___p_amplitude_1;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::p_frequency
	int32_t ___p_frequency_2;
};

// com.heparo.terrain.toolkit.TerrainToolkit/fastHydraulicErosionPresetData
struct fastHydraulicErosionPresetData_t75927B0B29D2BA800818BB5206159A325733AAC0  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/fastHydraulicErosionPresetData::presetName
	String_t* ___presetName_0;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/fastHydraulicErosionPresetData::hydraulicIterations
	int32_t ___hydraulicIterations_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fastHydraulicErosionPresetData::hydraulicMaxSlope
	float ___hydraulicMaxSlope_2;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fastHydraulicErosionPresetData::hydraulicFalloff
	float ___hydraulicFalloff_3;
};

// com.heparo.terrain.toolkit.TerrainToolkit/fractalPresetData
struct fractalPresetData_tFE2AFB423BF00A0C77CB20D9B21D5884CBA654C9  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/fractalPresetData::presetName
	String_t* ___presetName_0;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fractalPresetData::diamondSquareDelta
	float ___diamondSquareDelta_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fractalPresetData::diamondSquareBlend
	float ___diamondSquareBlend_2;
};

// com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData
struct fullHydraulicErosionPresetData_t47344DDCDCD71447E44D01909192001ECC990A51  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData::presetName
	String_t* ___presetName_0;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData::hydraulicIterations
	int32_t ___hydraulicIterations_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData::hydraulicRainfall
	float ___hydraulicRainfall_2;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData::hydraulicEvaporation
	float ___hydraulicEvaporation_3;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData::hydraulicSedimentSolubility
	float ___hydraulicSedimentSolubility_4;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData::hydraulicSedimentSaturation
	float ___hydraulicSedimentSaturation_5;
};

// com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData
struct perlinPresetData_t433677DB0E2692252D7F3DD8732708AAC80521E2  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData::presetName
	String_t* ___presetName_0;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData::perlinFrequency
	int32_t ___perlinFrequency_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData::perlinAmplitude
	float ___perlinAmplitude_2;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData::perlinOctaves
	int32_t ___perlinOctaves_3;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData::perlinBlend
	float ___perlinBlend_4;
};

// com.heparo.terrain.toolkit.TerrainToolkit/thermalErosionPresetData
struct thermalErosionPresetData_tBDD8EBFDCA3D9B4DBA98496995A57C340F23A4D9  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/thermalErosionPresetData::presetName
	String_t* ___presetName_0;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/thermalErosionPresetData::thermalIterations
	int32_t ___thermalIterations_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/thermalErosionPresetData::thermalMinSlope
	float ___thermalMinSlope_2;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/thermalErosionPresetData::thermalFalloff
	float ___thermalFalloff_3;
};

// com.heparo.terrain.toolkit.TerrainToolkit/tidalErosionPresetData
struct tidalErosionPresetData_t6387728E59A2B52C8966FF07E096E8CC8CF03C57  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/tidalErosionPresetData::presetName
	String_t* ___presetName_0;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/tidalErosionPresetData::tidalIterations
	int32_t ___tidalIterations_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/tidalErosionPresetData::tidalRangeAmount
	float ___tidalRangeAmount_2;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/tidalErosionPresetData::tidalCliffLimit
	float ___tidalCliffLimit_3;
};

// com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData
struct velocityHydraulicErosionPresetData_tACAB9FF4EC01A1B581B88B28AB89274766D262C4  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::presetName
	String_t* ___presetName_0;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicIterations
	int32_t ___hydraulicIterations_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicVelocityRainfall
	float ___hydraulicVelocityRainfall_2;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicVelocityEvaporation
	float ___hydraulicVelocityEvaporation_3;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicVelocitySedimentSolubility
	float ___hydraulicVelocitySedimentSolubility_4;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicVelocitySedimentSaturation
	float ___hydraulicVelocitySedimentSaturation_5;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicVelocity
	float ___hydraulicVelocity_6;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicMomentum
	float ___hydraulicMomentum_7;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicEntropy
	float ___hydraulicEntropy_8;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::hydraulicDowncutting
	float ___hydraulicDowncutting_9;
};

// com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData
struct voronoiPresetData_t2080029282148A0DF00C411252BDE13242AF939D  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData::presetName
	String_t* ___presetName_0;
	// com.heparo.terrain.toolkit.TerrainToolkit/VoronoiType com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData::p_voronoiType
	int32_t ___p_voronoiType_1;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData::voronoiCells
	int32_t ___voronoiCells_2;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData::voronoiFeatures
	float ___voronoiFeatures_3;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData::voronoiScale
	float ___voronoiScale_4;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData::voronoiBlend
	float ___voronoiBlend_5;
};

// com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData
struct windErosionPresetData_t4ABD7B87D266783CA595F923B11D33E87C8DBE0E  : public RuntimeObject
{
	// System.String com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::presetName
	String_t* ___presetName_0;
	// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windIterations
	int32_t ___windIterations_1;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windDirection
	float ___windDirection_2;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windForce
	float ___windForce_3;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windLift
	float ___windLift_4;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windGravity
	float ___windGravity_5;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windCapacity
	float ___windCapacity_6;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windEntropy
	float ___windEntropy_7;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::windSmoothing
	float ___windSmoothing_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// com.heparo.terrain.toolkit.TerrainToolkit/Peak
struct Peak_t1A1C2B73032A62FBF295DBBF73E31D041A72CDE8 
{
	// UnityEngine.Vector2 com.heparo.terrain.toolkit.TerrainToolkit/Peak::peakPoint
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___peakPoint_0;
	// System.Single com.heparo.terrain.toolkit.TerrainToolkit/Peak::peakHeight
	float ___peakHeight_1;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// com.heparo.terrain.toolkit.TerrainToolkit/ErosionProgressDelegate
struct ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B  : public MulticastDelegate_t
{
};

// com.heparo.terrain.toolkit.TerrainToolkit/GeneratorProgressDelegate
struct GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871  : public MulticastDelegate_t
{
};

// com.heparo.terrain.toolkit.TerrainToolkit/TextureProgressDelegate
struct TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};



// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276 (const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___Seed0, const RuntimeMethod* method) ;
// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, const RuntimeMethod* method) ;
// System.Double com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::interpolate(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, double ___Pa0, double ___Pb1, double ___Px2, const RuntimeMethod* method) ;
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
void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_Multicast(ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___titleString0, String_t* ___displayString1, int32_t ___iteration2, int32_t ___nIterations3, float ___percentComplete4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* currentDelegate = reinterpret_cast<ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, int32_t, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___titleString0, ___displayString1, ___iteration2, ___nIterations3, ___percentComplete4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_Open(ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___titleString0, String_t* ___displayString1, int32_t ___iteration2, int32_t ___nIterations3, float ___percentComplete4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___titleString0, ___displayString1, ___iteration2, ___nIterations3, ___percentComplete4, method);
}
void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_OpenStaticInvoker(ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___titleString0, String_t* ___displayString1, int32_t ___iteration2, int32_t ___nIterations3, float ___percentComplete4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< String_t*, String_t*, int32_t, int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, ___titleString0, ___displayString1, ___iteration2, ___nIterations3, ___percentComplete4);
}
void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_ClosedStaticInvoker(ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___titleString0, String_t* ___displayString1, int32_t ___iteration2, int32_t ___nIterations3, float ___percentComplete4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, String_t*, String_t*, int32_t, int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___titleString0, ___displayString1, ___iteration2, ___nIterations3, ___percentComplete4);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___titleString0, String_t* ___displayString1, int32_t ___iteration2, int32_t ___nIterations3, float ___percentComplete4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, int32_t, int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___titleString0' to native representation
	char* ____titleString0_marshaled = NULL;
	____titleString0_marshaled = il2cpp_codegen_marshal_string(___titleString0);

	// Marshaling of parameter '___displayString1' to native representation
	char* ____displayString1_marshaled = NULL;
	____displayString1_marshaled = il2cpp_codegen_marshal_string(___displayString1);

	// Native function invocation
	il2cppPInvokeFunc(____titleString0_marshaled, ____displayString1_marshaled, ___iteration2, ___nIterations3, ___percentComplete4);

	// Marshaling cleanup of parameter '___titleString0' native representation
	il2cpp_codegen_marshal_free(____titleString0_marshaled);
	____titleString0_marshaled = NULL;

	// Marshaling cleanup of parameter '___displayString1' native representation
	il2cpp_codegen_marshal_free(____displayString1_marshaled);
	____displayString1_marshaled = NULL;

}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/ErosionProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErosionProgressDelegate__ctor_m132F272BAA5236A82DFF5A8025F8BF18006F209D (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05_Multicast;
}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/ErosionProgressDelegate::Invoke(System.String,System.String,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErosionProgressDelegate_Invoke_mD4E1D321CDCD0727989DC85363C051E7AAB8CD05 (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___titleString0, String_t* ___displayString1, int32_t ___iteration2, int32_t ___nIterations3, float ___percentComplete4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, int32_t, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___titleString0, ___displayString1, ___iteration2, ___nIterations3, ___percentComplete4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult com.heparo.terrain.toolkit.TerrainToolkit/ErosionProgressDelegate::BeginInvoke(System.String,System.String,System.Int32,System.Int32,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErosionProgressDelegate_BeginInvoke_mD1D92762000CD3BC634394A0F789599B1AC92981 (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, String_t* ___titleString0, String_t* ___displayString1, int32_t ___iteration2, int32_t ___nIterations3, float ___percentComplete4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___titleString0;
	__d_args[1] = ___displayString1;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___iteration2);
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___nIterations3);
	__d_args[4] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___percentComplete4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/ErosionProgressDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErosionProgressDelegate_EndInvoke_m18264B264C198B061DDC8D8C7827149A9DF968E3 (ErosionProgressDelegate_t6C71242246296B3E8D88ADE7BF49D5CB73A1442B* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_Multicast(TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* currentDelegate = reinterpret_cast<TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___titleString0, ___displayString1, ___percentComplete2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_Open(TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___titleString0, ___displayString1, ___percentComplete2, method);
}
void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_OpenStaticInvoker(TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, String_t*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___titleString0, ___displayString1, ___percentComplete2);
}
void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_ClosedStaticInvoker(TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, String_t*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___titleString0, ___displayString1, ___percentComplete2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482 (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___titleString0' to native representation
	char* ____titleString0_marshaled = NULL;
	____titleString0_marshaled = il2cpp_codegen_marshal_string(___titleString0);

	// Marshaling of parameter '___displayString1' to native representation
	char* ____displayString1_marshaled = NULL;
	____displayString1_marshaled = il2cpp_codegen_marshal_string(___displayString1);

	// Native function invocation
	il2cppPInvokeFunc(____titleString0_marshaled, ____displayString1_marshaled, ___percentComplete2);

	// Marshaling cleanup of parameter '___titleString0' native representation
	il2cpp_codegen_marshal_free(____titleString0_marshaled);
	____titleString0_marshaled = NULL;

	// Marshaling cleanup of parameter '___displayString1' native representation
	il2cpp_codegen_marshal_free(____displayString1_marshaled);
	____displayString1_marshaled = NULL;

}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/TextureProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureProgressDelegate__ctor_m19E10770AFA66903879D76F4A58303181F8B8FFB (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C_Multicast;
}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/TextureProgressDelegate::Invoke(System.String,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureProgressDelegate_Invoke_m76BDDE31E4039D1143E9ADE2840259B39573F38C (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___titleString0, ___displayString1, ___percentComplete2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult com.heparo.terrain.toolkit.TerrainToolkit/TextureProgressDelegate::BeginInvoke(System.String,System.String,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextureProgressDelegate_BeginInvoke_m3E192A432E320E07283754E78C8BF3432A625EF3 (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___titleString0;
	__d_args[1] = ___displayString1;
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___percentComplete2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/TextureProgressDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureProgressDelegate_EndInvoke_m9BD09AFDBBF0698D5F9F88BF1F27E22A7BD2170D (TextureProgressDelegate_t0402C7C3FA6E4FBE63E9F931638E7CA0D56EA482* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_Multicast(GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* currentDelegate = reinterpret_cast<GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___titleString0, ___displayString1, ___percentComplete2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_Open(GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___titleString0, ___displayString1, ___percentComplete2, method);
}
void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_OpenStaticInvoker(GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, String_t*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___titleString0, ___displayString1, ___percentComplete2);
}
void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_ClosedStaticInvoker(GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, String_t*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___titleString0, ___displayString1, ___percentComplete2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___titleString0' to native representation
	char* ____titleString0_marshaled = NULL;
	____titleString0_marshaled = il2cpp_codegen_marshal_string(___titleString0);

	// Marshaling of parameter '___displayString1' to native representation
	char* ____displayString1_marshaled = NULL;
	____displayString1_marshaled = il2cpp_codegen_marshal_string(___displayString1);

	// Native function invocation
	il2cppPInvokeFunc(____titleString0_marshaled, ____displayString1_marshaled, ___percentComplete2);

	// Marshaling cleanup of parameter '___titleString0' native representation
	il2cpp_codegen_marshal_free(____titleString0_marshaled);
	____titleString0_marshaled = NULL;

	// Marshaling cleanup of parameter '___displayString1' native representation
	il2cpp_codegen_marshal_free(____displayString1_marshaled);
	____displayString1_marshaled = NULL;

}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/GeneratorProgressDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorProgressDelegate__ctor_m65515E579E6789B5B69A1405F09E73A431F70223 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63_Multicast;
}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/GeneratorProgressDelegate::Invoke(System.String,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorProgressDelegate_Invoke_m73E81F4E4591E7DDED8352A44CFCD47B2AE6CC63 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___titleString0, ___displayString1, ___percentComplete2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult com.heparo.terrain.toolkit.TerrainToolkit/GeneratorProgressDelegate::BeginInvoke(System.String,System.String,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeneratorProgressDelegate_BeginInvoke_mFFA5E2B2CA2A9FE7A2560718DC69CD7B95296997 (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, String_t* ___titleString0, String_t* ___displayString1, float ___percentComplete2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___titleString0;
	__d_args[1] = ___displayString1;
	__d_args[2] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___percentComplete2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/GeneratorProgressDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratorProgressDelegate_EndInvoke_m452BD54385A29FAD25A0DD6479FF7FD4437A57CB (GeneratorProgressDelegate_t3B805E170A08E5AF6B8C8EB760F5738CEEE6F871* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/PeakDistance::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PeakDistance_CompareTo_mB182EAA2301192A08E384F45205112808FB64675 (PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// PeakDistance Compare = (PeakDistance) obj;
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69*)CastclassClass((RuntimeObject*)L_0, PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69_il2cpp_TypeInfo_var));
		// int result = this.dist.CompareTo(Compare.dist);
		float* L_1 = (&__this->___dist_1);
		PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* L_2 = V_0;
		float L_3 = L_2->___dist_1;
		int32_t L_4;
		L_4 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_1, L_3, NULL);
		V_1 = L_4;
		// if( result==0 )    result = this.dist.CompareTo(Compare.dist);
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// if( result==0 )    result = this.dist.CompareTo(Compare.dist);
		float* L_7 = (&__this->___dist_1);
		PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* L_8 = V_0;
		float L_9 = L_8->___dist_1;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_7, L_9, NULL);
		V_1 = L_10;
	}

IL_0034:
	{
		// return(result);
		int32_t L_11 = V_1;
		V_3 = L_11;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		int32_t L_12 = V_3;
		return L_12;
	}
}
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/PeakDistance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeakDistance__ctor_m9CD2B070E23281025FC7F496F5C7786D1C4CD21C (PeakDistance_t8AD26EF32D0322D2669C151AAE61B9D191B19A69* __this, const RuntimeMethod* method) 
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/voronoiPresetData::.ctor(System.String,com.heparo.terrain.toolkit.TerrainToolkit/VoronoiType,System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void voronoiPresetData__ctor_m0D0EB67A403D495B5C32EFD6D7867EE5AAD70220 (voronoiPresetData_t2080029282148A0DF00C411252BDE13242AF939D* __this, String_t* ___pn0, int32_t ___vt1, int32_t ___c2, float ___vf3, float ___vs4, float ___vb5, const RuntimeMethod* method) 
{
	{
		// public voronoiPresetData(string pn, VoronoiType vt, int c, float vf, float vs, float vb){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// p_voronoiType = vt;
		int32_t L_1 = ___vt1;
		__this->___p_voronoiType_1 = L_1;
		// voronoiCells = c;
		int32_t L_2 = ___c2;
		__this->___voronoiCells_2 = L_2;
		// voronoiFeatures = vf;
		float L_3 = ___vf3;
		__this->___voronoiFeatures_3 = L_3;
		// voronoiScale = vs;
		float L_4 = ___vs4;
		__this->___voronoiScale_4 = L_4;
		// voronoiBlend = vb;
		float L_5 = ___vb5;
		__this->___voronoiBlend_5 = L_5;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/fractalPresetData::.ctor(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fractalPresetData__ctor_m75C4C7962F270D1FB220FB19398FA2860EB1F5E0 (fractalPresetData_tFE2AFB423BF00A0C77CB20D9B21D5884CBA654C9* __this, String_t* ___pn0, float ___dsd1, float ___dsb2, const RuntimeMethod* method) 
{
	{
		// public fractalPresetData(string pn, float dsd, float dsb){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// diamondSquareDelta = dsd;
		float L_1 = ___dsd1;
		__this->___diamondSquareDelta_1 = L_1;
		// diamondSquareBlend = dsb;
		float L_2 = ___dsb2;
		__this->___diamondSquareBlend_2 = L_2;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/perlinPresetData::.ctor(System.String,System.Int32,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void perlinPresetData__ctor_mA2DD413BEF15E33ED6BBBD0049AABBBAE338EDC2 (perlinPresetData_t433677DB0E2692252D7F3DD8732708AAC80521E2* __this, String_t* ___pn0, int32_t ___pf1, float ___pa2, int32_t ___po3, float ___pb4, const RuntimeMethod* method) 
{
	{
		// public perlinPresetData(string pn, int pf, float pa, int po, float pb){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// perlinFrequency = pf;
		int32_t L_1 = ___pf1;
		__this->___perlinFrequency_1 = L_1;
		// perlinAmplitude = pa;
		float L_2 = ___pa2;
		__this->___perlinAmplitude_2 = L_2;
		// perlinOctaves = po;
		int32_t L_3 = ___po3;
		__this->___perlinOctaves_3 = L_3;
		// perlinBlend = pb;
		float L_4 = ___pb4;
		__this->___perlinBlend_4 = L_4;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/thermalErosionPresetData::.ctor(System.String,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void thermalErosionPresetData__ctor_m4346746DE88F3F82CF637FCE751F48E143D27F26 (thermalErosionPresetData_tBDD8EBFDCA3D9B4DBA98496995A57C340F23A4D9* __this, String_t* ___pn0, int32_t ___ti1, float ___tms2, float ___tba3, const RuntimeMethod* method) 
{
	{
		// public thermalErosionPresetData(string pn, int ti, float tms, float tba){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// thermalIterations = ti;
		int32_t L_1 = ___ti1;
		__this->___thermalIterations_1 = L_1;
		// thermalMinSlope = tms;
		float L_2 = ___tms2;
		__this->___thermalMinSlope_2 = L_2;
		// thermalFalloff = tba;
		float L_3 = ___tba3;
		__this->___thermalFalloff_3 = L_3;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/fastHydraulicErosionPresetData::.ctor(System.String,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fastHydraulicErosionPresetData__ctor_mDD306D0F7CE0D02FB41FB59C8B3851859429CA33 (fastHydraulicErosionPresetData_t75927B0B29D2BA800818BB5206159A325733AAC0* __this, String_t* ___pn0, int32_t ___hi1, float ___hms2, float ___hba3, const RuntimeMethod* method) 
{
	{
		// public fastHydraulicErosionPresetData(string pn, int hi, float hms, float hba){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// hydraulicIterations = hi;
		int32_t L_1 = ___hi1;
		__this->___hydraulicIterations_1 = L_1;
		// hydraulicMaxSlope = hms;
		float L_2 = ___hms2;
		__this->___hydraulicMaxSlope_2 = L_2;
		// hydraulicFalloff = hba;
		float L_3 = ___hba3;
		__this->___hydraulicFalloff_3 = L_3;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/fullHydraulicErosionPresetData::.ctor(System.String,System.Int32,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fullHydraulicErosionPresetData__ctor_m98805C526E404DA7EC42C3F4EC119B709E0C3881 (fullHydraulicErosionPresetData_t47344DDCDCD71447E44D01909192001ECC990A51* __this, String_t* ___pn0, int32_t ___hi1, float ___hr2, float ___he3, float ___hso4, float ___hsa5, const RuntimeMethod* method) 
{
	{
		// public fullHydraulicErosionPresetData(string pn, int hi, float hr, float he, float hso, float hsa){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// hydraulicIterations = hi;
		int32_t L_1 = ___hi1;
		__this->___hydraulicIterations_1 = L_1;
		// hydraulicRainfall = hr;
		float L_2 = ___hr2;
		__this->___hydraulicRainfall_2 = L_2;
		// hydraulicEvaporation = he;
		float L_3 = ___he3;
		__this->___hydraulicEvaporation_3 = L_3;
		// hydraulicSedimentSolubility = hso;
		float L_4 = ___hso4;
		__this->___hydraulicSedimentSolubility_4 = L_4;
		// hydraulicSedimentSaturation = hsa;
		float L_5 = ___hsa5;
		__this->___hydraulicSedimentSaturation_5 = L_5;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/velocityHydraulicErosionPresetData::.ctor(System.String,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void velocityHydraulicErosionPresetData__ctor_mD19B51EB2C9C6E4FBBB673962BE5A05E953AD865 (velocityHydraulicErosionPresetData_tACAB9FF4EC01A1B581B88B28AB89274766D262C4* __this, String_t* ___pn0, int32_t ___hi1, float ___hvr2, float ___hve3, float ___hso4, float ___hsa5, float ___hv6, float ___hm7, float ___he8, float ___hd9, const RuntimeMethod* method) 
{
	{
		// public velocityHydraulicErosionPresetData(string pn, int hi, float hvr, float hve, float hso, float hsa, float hv, float hm, float he, float hd){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// hydraulicIterations = hi;
		int32_t L_1 = ___hi1;
		__this->___hydraulicIterations_1 = L_1;
		// hydraulicVelocityRainfall = hvr;
		float L_2 = ___hvr2;
		__this->___hydraulicVelocityRainfall_2 = L_2;
		// hydraulicVelocityEvaporation = hve;
		float L_3 = ___hve3;
		__this->___hydraulicVelocityEvaporation_3 = L_3;
		// hydraulicVelocitySedimentSolubility = hso;
		float L_4 = ___hso4;
		__this->___hydraulicVelocitySedimentSolubility_4 = L_4;
		// hydraulicVelocitySedimentSaturation = hsa;
		float L_5 = ___hsa5;
		__this->___hydraulicVelocitySedimentSaturation_5 = L_5;
		// hydraulicVelocity = hv;
		float L_6 = ___hv6;
		__this->___hydraulicVelocity_6 = L_6;
		// hydraulicMomentum = hm;
		float L_7 = ___hm7;
		__this->___hydraulicMomentum_7 = L_7;
		// hydraulicEntropy = he;
		float L_8 = ___he8;
		__this->___hydraulicEntropy_8 = L_8;
		// hydraulicDowncutting = hd;
		float L_9 = ___hd9;
		__this->___hydraulicDowncutting_9 = L_9;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/tidalErosionPresetData::.ctor(System.String,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tidalErosionPresetData__ctor_mF18C35D402E88359592BA76ED66CCF94439CF342 (tidalErosionPresetData_t6387728E59A2B52C8966FF07E096E8CC8CF03C57* __this, String_t* ___pn0, int32_t ___ti1, float ___tra2, float ___tcl3, const RuntimeMethod* method) 
{
	{
		// public tidalErosionPresetData(string pn, int ti, float tra, float tcl){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// tidalIterations = ti;
		int32_t L_1 = ___ti1;
		__this->___tidalIterations_1 = L_1;
		// tidalRangeAmount = tra;
		float L_2 = ___tra2;
		__this->___tidalRangeAmount_2 = L_2;
		// tidalCliffLimit = tcl;
		float L_3 = ___tcl3;
		__this->___tidalCliffLimit_3 = L_3;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/windErosionPresetData::.ctor(System.String,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void windErosionPresetData__ctor_mA8140B2AA6977AA24F3C2D3CB1F29A9BAFFA4EF5 (windErosionPresetData_t4ABD7B87D266783CA595F923B11D33E87C8DBE0E* __this, String_t* ___pn0, int32_t ___wi1, float ___wd2, float ___wf3, float ___wl4, float ___wg5, float ___wc6, float ___we7, float ___ws8, const RuntimeMethod* method) 
{
	{
		// public windErosionPresetData(string pn, int wi, float wd, float wf, float wl, float wg, float wc, float we, float ws){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// presetName = pn;
		String_t* L_0 = ___pn0;
		__this->___presetName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___presetName_0), (void*)L_0);
		// windIterations = wi;
		int32_t L_1 = ___wi1;
		__this->___windIterations_1 = L_1;
		// windDirection = wd;
		float L_2 = ___wd2;
		__this->___windDirection_2 = L_2;
		// windForce = wf;
		float L_3 = ___wf3;
		__this->___windForce_3 = L_3;
		// windLift = wl;
		float L_4 = ___wl4;
		__this->___windLift_4 = L_4;
		// windGravity = wg;
		float L_5 = ___wg5;
		__this->___windGravity_5 = L_5;
		// windCapacity = wc;
		float L_6 = ___wc6;
		__this->___windCapacity_6 = L_6;
		// windEntropy = we;
		float L_7 = ___we7;
		__this->___windEntropy_7 = L_7;
		// windSmoothing = ws;
		float L_8 = ___ws8;
		__this->___windSmoothing_8 = L_8;
		// }
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
// System.Void com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerlinNoise2D__ctor_m4E453EB11C8CF39C3903995CF6EC18DD9C175281 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, int32_t ___freq0, float ____amp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// private float p_amplitude = 1.0f;
		__this->___p_amplitude_1 = (1.0f);
		// private int p_frequency = 1;
		__this->___p_frequency_2 = 1;
		// public PerlinNoise2D(int freq, float _amp){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// System.Random rand = new System.Random(System.Environment.TickCount);
		int32_t L_0;
		L_0 = Environment_get_TickCount_m3499A4943E060ECB90E790A097D9691448AD1276(NULL);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_1, L_0, NULL);
		V_0 = L_1;
		// p_noiseValues = new double[freq, freq];
		int32_t L_2 = ___freq0;
		int32_t L_3 = ___freq0;
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_5);
		__this->___p_noiseValues_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___p_noiseValues_0), (void*)L_4);
		// p_amplitude = _amp;
		float L_6 = ____amp1;
		__this->___p_amplitude_1 = L_6;
		// p_frequency = freq;
		int32_t L_7 = ___freq0;
		__this->___p_frequency_2 = L_7;
		// for( int i = 0; i<freq; i++ ){
		V_1 = 0;
		goto IL_006f;
	}

IL_0044:
	{
		// for( int j = 0; j<freq; j++ ){
		V_2 = 0;
		goto IL_0062;
	}

IL_0049:
	{
		// p_noiseValues[i, j] = rand.NextDouble();
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_8 = __this->___p_noiseValues_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_11 = V_0;
		double L_12;
		L_12 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_11);
		(L_8)->SetAtUnchecked(L_9, L_10, L_12);
		// for( int j = 0; j<freq; j++ ){
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0062:
	{
		// for( int j = 0; j<freq; j++ ){
		int32_t L_14 = V_2;
		int32_t L_15 = ___freq0;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0049;
		}
	}
	{
		// for( int i = 0; i<freq; i++ ){
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_006f:
	{
		// for( int i = 0; i<freq; i++ ){
		int32_t L_18 = V_1;
		int32_t L_19 = ___freq0;
		V_4 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_4;
		if (L_20)
		{
			goto IL_0044;
		}
	}
	{
		// }
		return;
	}
}
// System.Double com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::getInterpolatedPoint(System.Int32,System.Int32,System.Int32,System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PerlinNoise2D_getInterpolatedPoint_m2B88A3D7FA705AEBFB178E0A1821948EDBB9A47D (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, int32_t ____xa0, int32_t ____xb1, int32_t ____ya2, int32_t ____yb3, double ___Px4, double ___Py5, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// double i1 = interpolate(p_noiseValues[_xa % Frequency, _ya % p_frequency], p_noiseValues[_xb % Frequency, _ya % p_frequency], Px);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___p_noiseValues_0;
		int32_t L_1 = ____xa0;
		int32_t L_2;
		L_2 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3(__this, NULL);
		int32_t L_3 = ____ya2;
		int32_t L_4 = __this->___p_frequency_2;
		double L_5;
		L_5 = (L_0)->GetAtUnchecked(((int32_t)(L_1%L_2)), ((int32_t)(L_3%L_4)));
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_6 = __this->___p_noiseValues_0;
		int32_t L_7 = ____xb1;
		int32_t L_8;
		L_8 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3(__this, NULL);
		int32_t L_9 = ____ya2;
		int32_t L_10 = __this->___p_frequency_2;
		double L_11;
		L_11 = (L_6)->GetAtUnchecked(((int32_t)(L_7%L_8)), ((int32_t)(L_9%L_10)));
		double L_12 = ___Px4;
		double L_13;
		L_13 = PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762(__this, L_5, L_11, L_12, NULL);
		V_0 = L_13;
		// double i2 = interpolate(p_noiseValues[_xa % Frequency, _yb % p_frequency], p_noiseValues[_xb % Frequency, _yb % p_frequency], Px);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_14 = __this->___p_noiseValues_0;
		int32_t L_15 = ____xa0;
		int32_t L_16;
		L_16 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3(__this, NULL);
		int32_t L_17 = ____yb3;
		int32_t L_18 = __this->___p_frequency_2;
		double L_19;
		L_19 = (L_14)->GetAtUnchecked(((int32_t)(L_15%L_16)), ((int32_t)(L_17%L_18)));
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_20 = __this->___p_noiseValues_0;
		int32_t L_21 = ____xb1;
		int32_t L_22;
		L_22 = PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3(__this, NULL);
		int32_t L_23 = ____yb3;
		int32_t L_24 = __this->___p_frequency_2;
		double L_25;
		L_25 = (L_20)->GetAtUnchecked(((int32_t)(L_21%L_22)), ((int32_t)(L_23%L_24)));
		double L_26 = ___Px4;
		double L_27;
		L_27 = PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762(__this, L_19, L_25, L_26, NULL);
		V_1 = L_27;
		// return interpolate(i1, i2, Py);
		double L_28 = V_0;
		double L_29 = V_1;
		double L_30 = ___Py5;
		double L_31;
		L_31 = PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762(__this, L_28, L_29, L_30, NULL);
		V_2 = L_31;
		goto IL_008e;
	}

IL_008e:
	{
		// }
		double L_32 = V_2;
		return L_32;
	}
}
// System.Double com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::interpolate(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PerlinNoise2D_interpolate_m5736E3CEF8721C76ADF3899FB9F131C5285AC762 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, double ___Pa0, double ___Pb1, double ___Px2, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// double ft = Px * Mathf.PI;
		double L_0 = ___Px2;
		V_0 = ((double)il2cpp_codegen_multiply(L_0, (3.1415927410125732)));
		// double f = (1 - Mathf.Cos((float) ft)) * 0.5;
		double L_1 = V_0;
		float L_2;
		L_2 = cosf(((float)L_1));
		V_1 = ((double)il2cpp_codegen_multiply(((double)((float)il2cpp_codegen_subtract((1.0f), L_2))), (0.5)));
		// return Pa * (1 - f) + Pb * f;
		double L_3 = ___Pa0;
		double L_4 = V_1;
		double L_5 = ___Pb1;
		double L_6 = V_1;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_3, ((double)il2cpp_codegen_subtract((1.0), L_4)))), ((double)il2cpp_codegen_multiply(L_5, L_6))));
		goto IL_003a;
	}

IL_003a:
	{
		// }
		double L_7 = V_2;
		return L_7;
	}
}
// System.Single com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::get_Amplitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerlinNoise2D_get_Amplitude_m696A42745CBE5733B812F6191CE1352F043E018F (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return p_amplitude;
		float L_0 = __this->___p_amplitude_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Int32 com.heparo.terrain.toolkit.TerrainToolkit/PerlinNoise2D::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerlinNoise2D_get_Frequency_mA74CC0E1A0DEFABE3A2DB0DB5B2AC21F1B0C14E3 (PerlinNoise2D_t6081B24D5D120F7D48FFB773C160142BDEF6E7FD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return p_frequency;
		int32_t L_0 = __this->___p_frequency_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
