#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// CameraController
struct CameraController_t1624689672;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3951852586;
// UnityEngine.Component
struct Component_t905158671;
// UnityEngine.Transform
struct Transform_t2697907848;
// UnityEngine.GameObject
struct GameObject_t799730568;
// PlayerController
struct PlayerController_t1858083037;
// UnityEngine.Rigidbody
struct Rigidbody_t316385021;
// System.String
struct String_t;
// UnityEngine.Collider
struct Collider_t3401528857;
// Rotater
struct Rotater_t1064341730;
// System.Char[]
struct CharU5BU5D_t1398441924;
// System.Void
struct Void_t2671038178;
// UnityEngine.UI.Text
struct Text_t1205065389;
// UnityEngine.Material
struct Material_t1947193701;
// UnityEngine.Texture2D
struct Texture2D_t3669562728;
// UnityEngine.RectTransform
struct RectTransform_t217224053;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2524321695;
// UnityEngine.Canvas
struct Canvas_t3536696272;
// UnityEngine.Events.UnityAction
struct UnityAction_t1120727090;
// UnityEngine.Mesh
struct Mesh_t388128140;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2984965220;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t2221418517;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t576153785;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t143242387;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2835206469;
// UnityEngine.UI.FontData
struct FontData_t1222636604;
// UnityEngine.TextGenerator
struct TextGenerator_t1000991072;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t2833342457;

extern RuntimeClass* Vector3_t273693964_il2cpp_TypeInfo_var;
extern const uint32_t CameraController_Start_m858103265_MetadataUsageId;
extern const uint32_t CameraController_LateUpdate_m1879185956_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t316385021_m1225557656_RuntimeMethod_var;
extern const uint32_t PlayerController_Start_m237218809_MetadataUsageId;
extern RuntimeClass* Input_t3615515753_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3420429171;
extern Il2CppCodeGenString* _stringLiteral1862963445;
extern const uint32_t PlayerController_FixedUpdate_m3752769620_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2426538849;
extern const uint32_t PlayerController_OnTriggerEnter_m1328488746_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral989838550;
extern Il2CppCodeGenString* _stringLiteral594265167;
extern const uint32_t PlayerController_SetCountText_m1286509772_MetadataUsageId;
extern const uint32_t Rotater_Update_m1377939334_MetadataUsageId;



#ifndef U3CMODULEU3E_T487841897_H
#define U3CMODULEU3E_T487841897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t487841897 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T487841897_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T31236793_H
#define VALUETYPE_T31236793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t31236793  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t31236793_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t31236793_marshaled_com
{
};
#endif // VALUETYPE_T31236793_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1398441924* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1398441924* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1398441924** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1398441924* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VECTOR3_T273693964_H
#define VECTOR3_T273693964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t273693964 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t273693964, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t273693964, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t273693964, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t273693964_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t273693964  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t273693964  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t273693964  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t273693964  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t273693964  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t273693964  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t273693964  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t273693964  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t273693964  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t273693964  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___zeroVector_4)); }
	inline Vector3_t273693964  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t273693964 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t273693964  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___oneVector_5)); }
	inline Vector3_t273693964  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t273693964 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t273693964  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___upVector_6)); }
	inline Vector3_t273693964  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t273693964 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t273693964  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___downVector_7)); }
	inline Vector3_t273693964  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t273693964 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t273693964  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___leftVector_8)); }
	inline Vector3_t273693964  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t273693964 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t273693964  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___rightVector_9)); }
	inline Vector3_t273693964  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t273693964 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t273693964  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___forwardVector_10)); }
	inline Vector3_t273693964  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t273693964 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t273693964  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___backVector_11)); }
	inline Vector3_t273693964  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t273693964 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t273693964  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t273693964  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t273693964 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t273693964  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t273693964_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t273693964  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t273693964 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t273693964  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T273693964_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T2671038178_H
#define VOID_T2671038178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2671038178 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2671038178_H
#ifndef BOOLEAN_T1689618957_H
#define BOOLEAN_T1689618957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1689618957 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1689618957, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1689618957_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1689618957_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1689618957_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T1689618957_H
#ifndef SINGLE_T3018269559_H
#define SINGLE_T3018269559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3018269559 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3018269559, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T3018269559_H
#ifndef INT32_T486212891_H
#define INT32_T486212891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t486212891 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t486212891, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T486212891_H
#ifndef COLOR_T1276466530_H
#define COLOR_T1276466530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t1276466530 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t1276466530, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t1276466530, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t1276466530, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t1276466530, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T1276466530_H
#ifndef OBJECT_T3534009664_H
#define OBJECT_T3534009664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3534009664  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3534009664, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3534009664_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3534009664_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3534009664_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3534009664_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3534009664_H
#ifndef GAMEOBJECT_T799730568_H
#define GAMEOBJECT_T799730568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t799730568  : public Object_t3534009664
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T799730568_H
#ifndef COMPONENT_T905158671_H
#define COMPONENT_T905158671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t905158671  : public Object_t3534009664
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T905158671_H
#ifndef BEHAVIOUR_T258253239_H
#define BEHAVIOUR_T258253239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t258253239  : public Component_t905158671
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T258253239_H
#ifndef TRANSFORM_T2697907848_H
#define TRANSFORM_T2697907848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t2697907848  : public Component_t905158671
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T2697907848_H
#ifndef RIGIDBODY_T316385021_H
#define RIGIDBODY_T316385021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t316385021  : public Component_t905158671
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T316385021_H
#ifndef COLLIDER_T3401528857_H
#define COLLIDER_T3401528857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t3401528857  : public Component_t905158671
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T3401528857_H
#ifndef MONOBEHAVIOUR_T3951852586_H
#define MONOBEHAVIOUR_T3951852586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3951852586  : public Behaviour_t258253239
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3951852586_H
#ifndef UIBEHAVIOUR_T2130677217_H
#define UIBEHAVIOUR_T2130677217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t2130677217  : public MonoBehaviour_t3951852586
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T2130677217_H
#ifndef PLAYERCONTROLLER_T1858083037_H
#define PLAYERCONTROLLER_T1858083037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t1858083037  : public MonoBehaviour_t3951852586
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t1205065389 * ___countText_3;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t1205065389 * ___winText_4;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t316385021 * ___rb_5;
	// System.Int32 PlayerController::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t1858083037, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_countText_3() { return static_cast<int32_t>(offsetof(PlayerController_t1858083037, ___countText_3)); }
	inline Text_t1205065389 * get_countText_3() const { return ___countText_3; }
	inline Text_t1205065389 ** get_address_of_countText_3() { return &___countText_3; }
	inline void set_countText_3(Text_t1205065389 * value)
	{
		___countText_3 = value;
		Il2CppCodeGenWriteBarrier((&___countText_3), value);
	}

	inline static int32_t get_offset_of_winText_4() { return static_cast<int32_t>(offsetof(PlayerController_t1858083037, ___winText_4)); }
	inline Text_t1205065389 * get_winText_4() const { return ___winText_4; }
	inline Text_t1205065389 ** get_address_of_winText_4() { return &___winText_4; }
	inline void set_winText_4(Text_t1205065389 * value)
	{
		___winText_4 = value;
		Il2CppCodeGenWriteBarrier((&___winText_4), value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(PlayerController_t1858083037, ___rb_5)); }
	inline Rigidbody_t316385021 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t316385021 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t316385021 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((&___rb_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(PlayerController_t1858083037, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T1858083037_H
#ifndef ROTATER_T1064341730_H
#define ROTATER_T1064341730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotater
struct  Rotater_t1064341730  : public MonoBehaviour_t3951852586
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATER_T1064341730_H
#ifndef CAMERACONTROLLER_T1624689672_H
#define CAMERACONTROLLER_T1624689672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t1624689672  : public MonoBehaviour_t3951852586
{
public:
	// UnityEngine.GameObject CameraController::player
	GameObject_t799730568 * ___player_2;
	// UnityEngine.Vector3 CameraController::offset
	Vector3_t273693964  ___offset_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraController_t1624689672, ___player_2)); }
	inline GameObject_t799730568 * get_player_2() const { return ___player_2; }
	inline GameObject_t799730568 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t799730568 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(CameraController_t1624689672, ___offset_3)); }
	inline Vector3_t273693964  get_offset_3() const { return ___offset_3; }
	inline Vector3_t273693964 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t273693964  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONTROLLER_T1624689672_H
#ifndef GRAPHIC_T935284009_H
#define GRAPHIC_T935284009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t935284009  : public UIBehaviour_t2130677217
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t1947193701 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t1276466530  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t217224053 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2524321695 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3536696272 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t1120727090 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t1120727090 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t1120727090 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t2221418517 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_Material_4)); }
	inline Material_t1947193701 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t1947193701 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t1947193701 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_Color_5)); }
	inline Color_t1276466530  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t1276466530 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t1276466530  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_RectTransform_7)); }
	inline RectTransform_t217224053 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t217224053 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t217224053 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2524321695 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2524321695 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2524321695 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_Canvas_9)); }
	inline Canvas_t3536696272 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3536696272 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3536696272 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t1120727090 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t1120727090 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t1120727090 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t1120727090 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t1120727090 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t1120727090 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t1120727090 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t1120727090 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t1120727090 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t2221418517 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t2221418517 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t2221418517 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t935284009, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t935284009_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t1947193701 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3669562728 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t388128140 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2984965220 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t935284009_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t1947193701 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t1947193701 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t1947193701 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t935284009_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3669562728 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3669562728 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3669562728 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t935284009_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t388128140 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t388128140 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t388128140 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t935284009_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2984965220 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2984965220 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2984965220 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T935284009_H
#ifndef MASKABLEGRAPHIC_T3339722439_H
#define MASKABLEGRAPHIC_T3339722439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3339722439  : public Graphic_t935284009
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t1947193701 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t576153785 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t143242387 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t2835206469* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_MaskMaterial_20)); }
	inline Material_t1947193701 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t1947193701 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t1947193701 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_ParentMask_21)); }
	inline RectMask2D_t576153785 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t576153785 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t576153785 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t143242387 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t143242387 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t143242387 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3339722439, ___m_Corners_27)); }
	inline Vector3U5BU5D_t2835206469* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t2835206469** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t2835206469* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3339722439_H
#ifndef TEXT_T1205065389_H
#define TEXT_T1205065389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1205065389  : public MaskableGraphic_t3339722439
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t1222636604 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t1000991072 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t1000991072 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t2833342457* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1205065389, ___m_FontData_28)); }
	inline FontData_t1222636604 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t1222636604 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t1222636604 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1205065389, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1205065389, ___m_TextCache_30)); }
	inline TextGenerator_t1000991072 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t1000991072 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t1000991072 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1205065389, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t1000991072 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t1000991072 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t1000991072 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1205065389, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1205065389, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t2833342457* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t2833342457** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t2833342457* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1205065389_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t1947193701 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1205065389_StaticFields, ___s_DefaultText_32)); }
	inline Material_t1947193701 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t1947193701 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t1947193701 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1205065389_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m3281382443_gshared (Component_t905158671 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1934304923 (MonoBehaviour_t3951852586 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t2697907848 * Component_get_transform_m2857846072 (Component_t905158671 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t273693964  Transform_get_position_m3175199420 (Transform_t2697907848 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t2697907848 * GameObject_get_transform_m1160071233 (GameObject_t799730568 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t273693964  Vector3_op_Subtraction_m1720743953 (RuntimeObject * __this /* static, unused */, Vector3_t273693964  p0, Vector3_t273693964  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t273693964  Vector3_op_Addition_m2035142691 (RuntimeObject * __this /* static, unused */, Vector3_t273693964  p0, Vector3_t273693964  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3946003531 (Transform_t2697907848 * __this, Vector3_t273693964  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t316385021_m1225557656(__this, method) ((  Rigidbody_t316385021 * (*) (Component_t905158671 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3281382443_gshared)(__this, method)
// System.Void PlayerController::SetCountText()
extern "C"  void PlayerController_SetCountText_m1286509772 (PlayerController_t1858083037 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m3748710933 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2027121296 (Vector3_t273693964 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t273693964  Vector3_op_Multiply_m1871260204 (RuntimeObject * __this /* static, unused */, Vector3_t273693964  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m2143678931 (Rigidbody_t316385021 * __this, Vector3_t273693964  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t799730568 * Component_get_gameObject_m3080005374 (Component_t905158671 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m2810484919 (GameObject_t799730568 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m523581404 (GameObject_t799730568 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m436597878 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m772335762 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m913002742 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m73789826 (Transform_t2697907848 * __this, Vector3_t273693964  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m1482839740 (CameraController_t1624689672 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1934304923(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m858103265 (CameraController_t1624689672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_Start_m858103265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t2697907848 * L_0 = Component_get_transform_m2857846072(__this, /*hidden argument*/NULL);
		Vector3_t273693964  L_1 = Transform_get_position_m3175199420(L_0, /*hidden argument*/NULL);
		GameObject_t799730568 * L_2 = __this->get_player_2();
		Transform_t2697907848 * L_3 = GameObject_get_transform_m1160071233(L_2, /*hidden argument*/NULL);
		Vector3_t273693964  L_4 = Transform_get_position_m3175199420(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t273693964_il2cpp_TypeInfo_var);
		Vector3_t273693964  L_5 = Vector3_op_Subtraction_m1720743953(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_3(L_5);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m1879185956 (CameraController_t1624689672 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraController_LateUpdate_m1879185956_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t2697907848 * L_0 = Component_get_transform_m2857846072(__this, /*hidden argument*/NULL);
		GameObject_t799730568 * L_1 = __this->get_player_2();
		Transform_t2697907848 * L_2 = GameObject_get_transform_m1160071233(L_1, /*hidden argument*/NULL);
		Vector3_t273693964  L_3 = Transform_get_position_m3175199420(L_2, /*hidden argument*/NULL);
		Vector3_t273693964  L_4 = __this->get_offset_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t273693964_il2cpp_TypeInfo_var);
		Vector3_t273693964  L_5 = Vector3_op_Addition_m2035142691(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_m3946003531(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m29889280 (PlayerController_t1858083037 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1934304923(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m237218809 (PlayerController_t1858083037 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m237218809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t316385021 * L_0 = Component_GetComponent_TisRigidbody_t316385021_m1225557656(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t316385021_m1225557656_RuntimeMethod_var);
		__this->set_rb_5(L_0);
		__this->set_count_6(0);
		Text_t1205065389 * L_1 = __this->get_winText_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		PlayerController_SetCountText_m1286509772(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m3752769620 (PlayerController_t1858083037 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m3752769620_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t273693964  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t3615515753_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m3748710933(NULL /*static, unused*/, _stringLiteral3420429171, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m3748710933(NULL /*static, unused*/, _stringLiteral1862963445, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m2027121296((&V_2), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		Rigidbody_t316385021 * L_4 = __this->get_rb_5();
		Vector3_t273693964  L_5 = V_2;
		float L_6 = __this->get_speed_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t273693964_il2cpp_TypeInfo_var);
		Vector3_t273693964  L_7 = Vector3_op_Multiply_m1871260204(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Rigidbody_AddForce_m2143678931(L_4, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerController_OnTriggerEnter_m1328488746 (PlayerController_t1858083037 * __this, Collider_t3401528857 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m1328488746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t3401528857 * L_0 = ___other0;
		GameObject_t799730568 * L_1 = Component_get_gameObject_m3080005374(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m2810484919(L_1, _stringLiteral2426538849, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t3401528857 * L_3 = ___other0;
		GameObject_t799730568 * L_4 = Component_get_gameObject_m3080005374(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m523581404(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_count_6();
		__this->set_count_6(((int32_t)((int32_t)L_5+(int32_t)1)));
		PlayerController_SetCountText_m1286509772(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerController::SetCountText()
extern "C"  void PlayerController_SetCountText_m1286509772 (PlayerController_t1858083037 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_SetCountText_m1286509772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1205065389 * L_0 = __this->get_countText_3();
		int32_t* L_1 = __this->get_address_of_count_6();
		String_t* L_2 = Int32_ToString_m436597878(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m772335762(NULL /*static, unused*/, _stringLiteral989838550, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = __this->get_count_6();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)12))))
		{
			goto IL_0043;
		}
	}
	{
		Text_t1205065389 * L_5 = __this->get_winText_4();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral594265167);
	}

IL_0043:
	{
		return;
	}
}
// System.Void Rotater::.ctor()
extern "C"  void Rotater__ctor_m3090314303 (Rotater_t1064341730 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1934304923(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotater::Update()
extern "C"  void Rotater_Update_m1377939334 (Rotater_t1064341730 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rotater_Update_m1377939334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t2697907848 * L_0 = Component_get_transform_m2857846072(__this, /*hidden argument*/NULL);
		Vector3_t273693964  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2027121296((&L_1), (15.0f), (30.0f), (45.0f), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m913002742(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t273693964_il2cpp_TypeInfo_var);
		Vector3_t273693964  L_3 = Vector3_op_Multiply_m1871260204(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Transform_Rotate_m73789826(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
