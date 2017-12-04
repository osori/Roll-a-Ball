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

// System.IntPtr[]
struct IntPtrU5BU5D_t4094463794;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2656043535;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2393899933;
// System.UInt32[]
struct UInt32U5BU5D_t1963282761;
// System.Byte[]
struct ByteU5BU5D_t1253693350;
// System.UInt64[]
struct UInt64U5BU5D_t1925346252;
// System.Collections.ArrayList
struct ArrayList_t1928578342;
// System.Collections.IEnumerator
struct IEnumerator_t1893617380;
// System.Reflection.Assembly
struct Assembly_t186857450;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t750169182;
// System.Version
struct Version_t3015821251;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t3719880633;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1269141297;
// System.Collections.Hashtable
struct Hashtable_t1134794124;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3202266359;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3369925776;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t4045540145;
// System.Security.Cryptography.RSA
struct RSA_t1712712457;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2359299845;
// System.Void
struct Void_t2671038178;
// System.Security.Cryptography.DESTransform
struct DESTransform_t274438714;
// System.Char[]
struct CharU5BU5D_t1398441924;
// System.Security.Cryptography.DSA
struct DSA_t2063588458;
// System.UInt16[]
struct UInt16U5BU5D_t3849896957;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3534250601;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3646907686;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t796419833;
// System.Security.Cryptography.TripleDES
struct TripleDES_t1531269230;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t441785882;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t2764426764;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2201019223;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1170853151;
// System.Byte[,]
struct ByteU5BU2CU5D_t1253693351;




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
#ifndef EXCEPTION_T3561552745_H
#define EXCEPTION_T3561552745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3561552745  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4094463794* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3561552745 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4094463794* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4094463794** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4094463794* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___inner_exception_1)); }
	inline Exception_t3561552745 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3561552745 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3561552745 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3561552745, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3561552745_H
#ifndef ATTRIBUTE_T3395395733_H
#define ATTRIBUTE_T3395395733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3395395733  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3395395733_H
#ifndef RANDOMNUMBERGENERATOR_T3369925776_H
#define RANDOMNUMBERGENERATOR_T3369925776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t3369925776  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T3369925776_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T1235471457_H
#define RIJNDAELMANAGEDTRANSFORM_T1235471457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t1235471457  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t2393899933 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t1235471457, ____st_0)); }
	inline RijndaelTransform_t2393899933 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t2393899933 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t2393899933 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t1235471457, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T1235471457_H
#ifndef SHA1INTERNAL_T2764426764_H
#define SHA1INTERNAL_T2764426764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t2764426764  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t1963282761* ____H_0;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_1;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t1253693350* ____ProcessingBuffer_2;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_3;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t1963282761* ___buff_4;

public:
	inline static int32_t get_offset_of__H_0() { return static_cast<int32_t>(offsetof(SHA1Internal_t2764426764, ____H_0)); }
	inline UInt32U5BU5D_t1963282761* get__H_0() const { return ____H_0; }
	inline UInt32U5BU5D_t1963282761** get_address_of__H_0() { return &____H_0; }
	inline void set__H_0(UInt32U5BU5D_t1963282761* value)
	{
		____H_0 = value;
		Il2CppCodeGenWriteBarrier((&____H_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t2764426764, ___count_1)); }
	inline uint64_t get_count_1() const { return ___count_1; }
	inline uint64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(uint64_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t2764426764, ____ProcessingBuffer_2)); }
	inline ByteU5BU5D_t1253693350* get__ProcessingBuffer_2() const { return ____ProcessingBuffer_2; }
	inline ByteU5BU5D_t1253693350** get_address_of__ProcessingBuffer_2() { return &____ProcessingBuffer_2; }
	inline void set__ProcessingBuffer_2(ByteU5BU5D_t1253693350* value)
	{
		____ProcessingBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_2), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t2764426764, ____ProcessingBufferCount_3)); }
	inline int32_t get__ProcessingBufferCount_3() const { return ____ProcessingBufferCount_3; }
	inline int32_t* get_address_of__ProcessingBufferCount_3() { return &____ProcessingBufferCount_3; }
	inline void set__ProcessingBufferCount_3(int32_t value)
	{
		____ProcessingBufferCount_3 = value;
	}

	inline static int32_t get_offset_of_buff_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t2764426764, ___buff_4)); }
	inline UInt32U5BU5D_t1963282761* get_buff_4() const { return ___buff_4; }
	inline UInt32U5BU5D_t1963282761** get_address_of_buff_4() { return &___buff_4; }
	inline void set_buff_4(UInt32U5BU5D_t1963282761* value)
	{
		___buff_4 = value;
		Il2CppCodeGenWriteBarrier((&___buff_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T2764426764_H
#ifndef KEYSIZES_T2858832016_H
#define KEYSIZES_T2858832016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t2858832016  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t2858832016, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t2858832016, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t2858832016, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T2858832016_H
#ifndef HASHALGORITHM_T2359299845_H
#define HASHALGORITHM_T2359299845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t2359299845  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t1253693350* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2359299845, ___HashValue_0)); }
	inline ByteU5BU5D_t1253693350* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t1253693350** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t1253693350* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2359299845, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2359299845, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2359299845, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T2359299845_H
#ifndef SHACONSTANTS_T3717070591_H
#define SHACONSTANTS_T3717070591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t3717070591  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t3717070591_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t1963282761* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t1925346252* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t3717070591_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t1963282761* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t1963282761** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t1963282761* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t3717070591_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t1925346252* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t1925346252** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t1925346252* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T3717070591_H
#ifndef SIGNATUREDESCRIPTION_T2875508167_H
#define SIGNATUREDESCRIPTION_T2875508167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t2875508167  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t2875508167, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t2875508167, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t2875508167, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t2875508167, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T2875508167_H
#ifndef TOBASE64TRANSFORM_T780592538_H
#define TOBASE64TRANSFORM_T780592538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t780592538  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(ToBase64Transform_t780592538, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T780592538_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T750169182_H
#define STRONGNAMEPUBLICKEYBLOB_T750169182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t750169182  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t1253693350* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t750169182, ___pubkey_0)); }
	inline ByteU5BU5D_t1253693350* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t1253693350** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t1253693350* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T750169182_H
#ifndef EVIDENCE_T1805126727_H
#define EVIDENCE_T1805126727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t1805126727  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t1928578342 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t1928578342 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t1805126727, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t1805126727, ___hostEvidenceList_1)); }
	inline ArrayList_t1928578342 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t1928578342 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t1928578342 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t1805126727, ___assemblyEvidenceList_2)); }
	inline ArrayList_t1928578342 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t1928578342 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t1928578342 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t1805126727, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T1805126727_H
#ifndef EVIDENCEENUMERATOR_T2762973121_H
#define EVIDENCEENUMERATOR_T2762973121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t2762973121  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2762973121, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2762973121, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2762973121, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T2762973121_H
#ifndef HASH_T1953062567_H
#define HASH_T1953062567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t1953062567  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t186857450 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t1253693350* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t1953062567, ___assembly_0)); }
	inline Assembly_t186857450 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t186857450 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t186857450 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t1953062567, ___data_1)); }
	inline ByteU5BU5D_t1253693350* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t1253693350** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t1253693350* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T1953062567_H
#ifndef STRONGNAME_T630778083_H
#define STRONGNAME_T630778083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t630778083  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t750169182 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t3015821251 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t630778083, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t750169182 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t750169182 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t750169182 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t630778083, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t630778083, ___version_2)); }
	inline Version_t3015821251 * get_version_2() const { return ___version_2; }
	inline Version_t3015821251 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t3015821251 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T630778083_H
#ifndef APPLICATIONTRUST_T188041458_H
#define APPLICATIONTRUST_T188041458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t188041458  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t188041458, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T188041458_H
#ifndef CODEACCESSPERMISSION_T3482334505_H
#define CODEACCESSPERMISSION_T3482334505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t3482334505  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T3482334505_H
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
#ifndef X509CERTIFICATE_T3798142600_H
#define X509CERTIFICATE_T3798142600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t3798142600  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t1269141297 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t1253693350* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t3798142600, ___x509_0)); }
	inline X509Certificate_t1269141297 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t1269141297 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t1269141297 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t3798142600, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t3798142600, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t1253693350* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t1253693350** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t1253693350* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t3798142600, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t3798142600, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T3798142600_H
#ifndef CRYPTOCONFIG_T3248910856_H
#define CRYPTOCONFIG_T3248910856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t3248910856  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t3248910856_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t1134794124 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t1134794124 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t3248910856_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t3248910856_StaticFields, ___algorithms_1)); }
	inline Hashtable_t1134794124 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t1134794124 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t1134794124 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t3248910856_StaticFields, ___oid_2)); }
	inline Hashtable_t1134794124 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t1134794124 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t1134794124 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T3248910856_H
#ifndef SYMMETRICTRANSFORM_T3976086048_H
#define SYMMETRICTRANSFORM_T3976086048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3976086048  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t3202266359 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t1253693350* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t1253693350* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t1253693350* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t1253693350* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3369925776 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___algo_0)); }
	inline SymmetricAlgorithm_t3202266359 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t3202266359 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t3202266359 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___temp_3)); }
	inline ByteU5BU5D_t1253693350* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t1253693350** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t1253693350* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___temp2_4)); }
	inline ByteU5BU5D_t1253693350* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t1253693350** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t1253693350* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___workBuff_5)); }
	inline ByteU5BU5D_t1253693350* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t1253693350** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t1253693350* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___workout_6)); }
	inline ByteU5BU5D_t1253693350* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t1253693350** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t1253693350* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3976086048, ____rng_11)); }
	inline RandomNumberGenerator_t3369925776 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3369925776 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3369925776 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3976086048_H
#ifndef BASE64CONSTANTS_T610276351_H
#define BASE64CONSTANTS_T610276351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t610276351  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t610276351_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t1253693350* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t1253693350* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t610276351_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t1253693350* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t1253693350** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t1253693350* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t610276351_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t1253693350* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t1253693350** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t1253693350* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T610276351_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T3026413913_H
#define ASYMMETRICSIGNATUREFORMATTER_T3026413913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t3026413913  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T3026413913_H
#ifndef ASYMMETRICALGORITHM_T2517230227_H
#define ASYMMETRICALGORITHM_T2517230227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t2517230227  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t4045540145* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2517230227, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2517230227, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t4045540145* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t4045540145** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t4045540145* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T2517230227_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T2561255353_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T2561255353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t2561255353  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T2561255353_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T1780202196_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T1780202196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t1780202196  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T1780202196_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T2472654804_H
#define RSAPKCS1SIGNATUREFORMATTER_T2472654804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t2472654804  : public AsymmetricSignatureFormatter_t3026413913
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t1712712457 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t2359299845 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2472654804, ___rsa_0)); }
	inline RSA_t1712712457 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1712712457 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1712712457 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2472654804, ___hash_1)); }
	inline HashAlgorithm_t2359299845 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t2359299845 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t2359299845 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T2472654804_H
#ifndef SECURITYATTRIBUTE_T1431902760_H
#define SECURITYATTRIBUTE_T1431902760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t1431902760  : public Attribute_t3395395733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T1431902760_H
#ifndef RIJNDAELTRANSFORM_T2393899933_H
#define RIJNDAELTRANSFORM_T2393899933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t2393899933  : public SymmetricTransform_t3976086048
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t1963282761* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933, ___expandedKey_12)); }
	inline UInt32U5BU5D_t1963282761* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t1963282761** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t1963282761* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t2393899933_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t1963282761* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t1253693350* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t1253693350* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t1963282761* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t1963282761* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t1963282761* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t1963282761* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t1963282761* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t1963282761* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t1963282761* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t1963282761* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t1963282761* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t1963282761** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t1963282761* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t1253693350* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t1253693350** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t1253693350* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t1253693350* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t1253693350** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t1253693350* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t1963282761* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t1963282761** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t1963282761* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t1963282761* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t1963282761** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t1963282761* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t1963282761* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t1963282761** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t1963282761* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t1963282761* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t1963282761** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t1963282761* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t1963282761* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t1963282761** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t1963282761* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t1963282761* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t1963282761** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t1963282761* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t1963282761* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t1963282761** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t1963282761* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2393899933_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t1963282761* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t1963282761** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t1963282761* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T2393899933_H
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
#ifndef SHA1_T368131897_H
#define SHA1_T368131897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t368131897  : public HashAlgorithm_t2359299845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T368131897_H
#ifndef SHA256_T2107405627_H
#define SHA256_T2107405627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t2107405627  : public HashAlgorithm_t2359299845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T2107405627_H
#ifndef SHA512_T1486946535_H
#define SHA512_T1486946535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t1486946535  : public HashAlgorithm_t2359299845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T1486946535_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3815068302_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3815068302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t3815068302  : public Attribute_t3395395733
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3815068302_H
#ifndef DSASIGNATUREDESCRIPTION_T4155448102_H
#define DSASIGNATUREDESCRIPTION_T4155448102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t4155448102  : public SignatureDescription_t2875508167
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T4155448102_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2157215280_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2157215280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t2157215280  : public SignatureDescription_t2875508167
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2157215280_H
#ifndef TRIPLEDESTRANSFORM_T1297191731_H
#define TRIPLEDESTRANSFORM_T1297191731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t1297191731  : public SymmetricTransform_t3976086048
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t274438714 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t274438714 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t274438714 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t274438714 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t274438714 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t274438714 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1297191731, ___E1_12)); }
	inline DESTransform_t274438714 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t274438714 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t274438714 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1297191731, ___D2_13)); }
	inline DESTransform_t274438714 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t274438714 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t274438714 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1297191731, ___E3_14)); }
	inline DESTransform_t274438714 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t274438714 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t274438714 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1297191731, ___D1_15)); }
	inline DESTransform_t274438714 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t274438714 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t274438714 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1297191731, ___E2_16)); }
	inline DESTransform_t274438714 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t274438714 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t274438714 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1297191731, ___D3_17)); }
	inline DESTransform_t274438714 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t274438714 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t274438714 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T1297191731_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T3725793581_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T3725793581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t3725793581  : public AsymmetricSignatureDeformatter_t2561255353
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t1712712457 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3725793581, ___rsa_0)); }
	inline RSA_t1712712457 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1712712457 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1712712457 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3725793581, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T3725793581_H
#ifndef SYSTEMEXCEPTION_T1911519444_H
#define SYSTEMEXCEPTION_T1911519444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1911519444  : public Exception_t3561552745
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1911519444_H
#ifndef ENUM_T219764039_H
#define ENUM_T219764039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t219764039  : public ValueType_t31236793
{
public:

public:
};

struct Enum_t219764039_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1398441924* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t219764039_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1398441924* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1398441924** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1398441924* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t219764039_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t219764039_marshaled_com
{
};
#endif // ENUM_T219764039_H
#ifndef SHA384_T2478886576_H
#define SHA384_T2478886576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t2478886576  : public HashAlgorithm_t2359299845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T2478886576_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T2901273860_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T2901273860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t2901273860  : public AsymmetricKeyExchangeFormatter_t1780202196
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t1712712457 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t3369925776 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2901273860, ___rsa_0)); }
	inline RSA_t1712712457 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1712712457 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1712712457 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2901273860, ___random_1)); }
	inline RandomNumberGenerator_t3369925776 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3369925776 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3369925776 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T2901273860_H
#ifndef RSAPARAMETERS_T2412512288_H
#define RSAPARAMETERS_T2412512288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t2412512288 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t1253693350* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t1253693350* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t1253693350* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t1253693350* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t1253693350* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t1253693350* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t1253693350* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t1253693350* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___P_0)); }
	inline ByteU5BU5D_t1253693350* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t1253693350** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t1253693350* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___Q_1)); }
	inline ByteU5BU5D_t1253693350* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t1253693350** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t1253693350* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___D_2)); }
	inline ByteU5BU5D_t1253693350* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t1253693350** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t1253693350* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___DP_3)); }
	inline ByteU5BU5D_t1253693350* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t1253693350** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t1253693350* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___DQ_4)); }
	inline ByteU5BU5D_t1253693350* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t1253693350** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t1253693350* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___InverseQ_5)); }
	inline ByteU5BU5D_t1253693350* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t1253693350** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t1253693350* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___Modulus_6)); }
	inline ByteU5BU5D_t1253693350* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t1253693350** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t1253693350* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t2412512288, ___Exponent_7)); }
	inline ByteU5BU5D_t1253693350* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t1253693350** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t1253693350* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2412512288_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2412512288_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T2412512288_H
#ifndef DSASIGNATUREDEFORMATTER_T2601749267_H
#define DSASIGNATUREDEFORMATTER_T2601749267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t2601749267  : public AsymmetricSignatureDeformatter_t2561255353
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t2063588458 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t2601749267, ___dsa_0)); }
	inline DSA_t2063588458 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2063588458 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2063588458 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T2601749267_H
#ifndef KEYEDHASHALGORITHM_T2652047758_H
#define KEYEDHASHALGORITHM_T2652047758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t2652047758  : public HashAlgorithm_t2359299845
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t1253693350* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t2652047758, ___KeyValue_4)); }
	inline ByteU5BU5D_t1253693350* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t1253693350** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t1253693350* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T2652047758_H
#ifndef DESTRANSFORM_T274438714_H
#define DESTRANSFORM_T274438714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t274438714  : public SymmetricTransform_t3976086048
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t1253693350* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t1253693350* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1963282761* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t274438714, ___keySchedule_16)); }
	inline ByteU5BU5D_t1253693350* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t1253693350** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t1253693350* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t274438714, ___byteBuff_17)); }
	inline ByteU5BU5D_t1253693350* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t1253693350** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t1253693350* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t274438714, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1963282761* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1963282761** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1963282761* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t274438714_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1963282761* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t1253693350* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t1253693350* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t1253693350* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1963282761* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1963282761* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1963282761* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1963282761** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1963282761* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t1253693350* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t1253693350** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t1253693350* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t1253693350* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t1253693350** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t1253693350* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t1253693350* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t1253693350** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t1253693350* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1963282761* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1963282761** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1963282761* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t274438714_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1963282761* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1963282761** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1963282761* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T274438714_H
#ifndef MD5_T649439110_H
#define MD5_T649439110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t649439110  : public HashAlgorithm_t2359299845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T649439110_H
#ifndef RSA_T1712712457_H
#define RSA_T1712712457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t1712712457  : public AsymmetricAlgorithm_t2517230227
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T1712712457_H
#ifndef DSASIGNATUREFORMATTER_T3985136331_H
#define DSASIGNATUREFORMATTER_T3985136331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t3985136331  : public AsymmetricSignatureFormatter_t3026413913
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t2063588458 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t3985136331, ___dsa_0)); }
	inline DSA_t2063588458 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2063588458 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2063588458 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T3985136331_H
#ifndef DSA_T2063588458_H
#define DSA_T2063588458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2063588458  : public AsymmetricAlgorithm_t2517230227
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2063588458_H
#ifndef RC2TRANSFORM_T3834319653_H
#define RC2TRANSFORM_T3834319653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t3834319653  : public SymmetricTransform_t3976086048
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t3849896957* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t3834319653, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t3834319653, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t3834319653, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t3834319653, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t3834319653, ___K_16)); }
	inline UInt16U5BU5D_t3849896957* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t3849896957** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t3849896957* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t3834319653, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t3834319653_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t1253693350* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t3834319653_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t1253693350* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t1253693350** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t1253693350* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T3834319653_H
#ifndef RIPEMD160_T677481172_H
#define RIPEMD160_T677481172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t677481172  : public HashAlgorithm_t2359299845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T677481172_H
#ifndef DSAPARAMETERS_T1488086414_H
#define DSAPARAMETERS_T1488086414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1488086414 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t1253693350* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t1253693350* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t1253693350* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t1253693350* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t1253693350* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t1253693350* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t1253693350* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___G_1)); }
	inline ByteU5BU5D_t1253693350* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t1253693350** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t1253693350* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___J_2)); }
	inline ByteU5BU5D_t1253693350* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t1253693350** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t1253693350* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___P_3)); }
	inline ByteU5BU5D_t1253693350* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t1253693350** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t1253693350* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___Q_4)); }
	inline ByteU5BU5D_t1253693350* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t1253693350** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t1253693350* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___Seed_5)); }
	inline ByteU5BU5D_t1253693350* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t1253693350** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t1253693350* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___X_6)); }
	inline ByteU5BU5D_t1253693350* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t1253693350** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t1253693350* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1488086414, ___Y_7)); }
	inline ByteU5BU5D_t1253693350* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t1253693350** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t1253693350* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1488086414_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1488086414_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T1488086414_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T4190990133_H
#define CODEACCESSSECURITYATTRIBUTE_T4190990133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t4190990133  : public SecurityAttribute_t1431902760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T4190990133_H
#ifndef HMAC_T1301160811_H
#define HMAC_T1301160811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t1301160811  : public KeyedHashAlgorithm_t2652047758
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t2359299845 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t3534250601 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t1301160811, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t1301160811, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t1301160811, ____algo_7)); }
	inline HashAlgorithm_t2359299845 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t2359299845 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t2359299845 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t1301160811, ____block_8)); }
	inline BlockProcessor_t3534250601 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t3534250601 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t3534250601 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t1301160811, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T1301160811_H
#ifndef DSACRYPTOSERVICEPROVIDER_T423742274_H
#define DSACRYPTOSERVICEPROVIDER_T423742274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t423742274  : public DSA_t2063588458
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t3646907686 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t796419833 * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t423742274, ___store_2)); }
	inline KeyPairPersistence_t3646907686 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3646907686 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3646907686 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t423742274, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t423742274, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t423742274, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t423742274, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t423742274, ___dsa_7)); }
	inline DSAManaged_t796419833 * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_t796419833 ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_t796419833 * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t423742274_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t423742274_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T423742274_H
#ifndef PRINCIPALPOLICY_T1920003104_H
#define PRINCIPALPOLICY_T1920003104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t1920003104 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t1920003104, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRINCIPALPOLICY_T1920003104_H
#ifndef WINDOWSACCOUNTTYPE_T1606450108_H
#define WINDOWSACCOUNTTYPE_T1606450108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t1606450108 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t1606450108, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSACCOUNTTYPE_T1606450108_H
#ifndef CSPPROVIDERFLAGS_T3615962000_H
#define CSPPROVIDERFLAGS_T3615962000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t3615962000 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t3615962000, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPROVIDERFLAGS_T3615962000_H
#ifndef SECURITYPERMISSIONFLAG_T2440962475_H
#define SECURITYPERMISSIONFLAG_T2440962475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t2440962475 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t2440962475, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONFLAG_T2440962475_H
#ifndef SECURITYACTION_T2200124884_H
#define SECURITYACTION_T2200124884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t2200124884 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t2200124884, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYACTION_T2200124884_H
#ifndef SHA512MANAGED_T1440381697_H
#define SHA512MANAGED_T1440381697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t1440381697  : public SHA512_t1486946535
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t1253693350* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t1925346252* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___xBuf_4)); }
	inline ByteU5BU5D_t1253693350* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t1253693350** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t1253693350* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___W_16)); }
	inline UInt64U5BU5D_t1925346252* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1925346252** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1925346252* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t1440381697, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T1440381697_H
#ifndef SHA384MANAGED_T518847581_H
#define SHA384MANAGED_T518847581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t518847581  : public SHA384_t2478886576
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t1253693350* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t1925346252* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___xBuf_4)); }
	inline ByteU5BU5D_t1253693350* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t1253693350** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t1253693350* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___W_16)); }
	inline UInt64U5BU5D_t1925346252* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1925346252** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1925346252* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t518847581, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T518847581_H
#ifndef SHA256MANAGED_T2130248504_H
#define SHA256MANAGED_T2130248504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t2130248504  : public SHA256_t2107405627
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t1963282761* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t1253693350* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t1963282761* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t2130248504, ____H_4)); }
	inline UInt32U5BU5D_t1963282761* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1963282761** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1963282761* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t2130248504, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t2130248504, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t1253693350* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t1253693350** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t1253693350* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_6), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t2130248504, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t2130248504, ___buff_8)); }
	inline UInt32U5BU5D_t1963282761* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t1963282761** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t1963282761* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier((&___buff_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T2130248504_H
#ifndef MACTRIPLEDES_T4013336621_H
#define MACTRIPLEDES_T4013336621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t4013336621  : public KeyedHashAlgorithm_t2652047758
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t1531269230 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t441785882 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t4013336621, ___tdes_5)); }
	inline TripleDES_t1531269230 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t1531269230 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t1531269230 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t4013336621, ___mac_6)); }
	inline MACAlgorithm_t441785882 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t441785882 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t441785882 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t4013336621, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T4013336621_H
#ifndef SHA1MANAGED_T3725340081_H
#define SHA1MANAGED_T3725340081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t3725340081  : public SHA1_t368131897
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t2764426764 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t3725340081, ___sha_4)); }
	inline SHA1Internal_t2764426764 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2764426764 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2764426764 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T3725340081_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T1416721320_H
#define SHA1CRYPTOSERVICEPROVIDER_T1416721320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t1416721320  : public SHA1_t368131897
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t2764426764 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t1416721320, ___sha_4)); }
	inline SHA1Internal_t2764426764 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2764426764 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2764426764 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T1416721320_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T3161728815_H
#define MD5CRYPTOSERVICEPROVIDER_T3161728815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t3161728815  : public MD5_t649439110
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t1963282761* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t1963282761* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t1253693350* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3161728815, ____H_4)); }
	inline UInt32U5BU5D_t1963282761* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1963282761** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1963282761* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3161728815, ___buff_5)); }
	inline UInt32U5BU5D_t1963282761* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t1963282761** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t1963282761* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3161728815, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3161728815, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t1253693350* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t1253693350** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t1253693350* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_7), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3161728815, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t3161728815_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t1963282761* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3161728815_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t1963282761* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t1963282761** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t1963282761* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((&___K_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T3161728815_H
#ifndef PADDINGMODE_T2197596387_H
#define PADDINGMODE_T2197596387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2197596387 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2197596387, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T2197596387_H
#ifndef CRYPTOGRAPHICEXCEPTION_T4013484398_H
#define CRYPTOGRAPHICEXCEPTION_T4013484398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t4013484398  : public SystemException_t1911519444
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T4013484398_H
#ifndef CIPHERMODE_T3866831184_H
#define CIPHERMODE_T3866831184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3866831184 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3866831184, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T3866831184_H
#ifndef X509KEYSTORAGEFLAGS_T1977923430_H
#define X509KEYSTORAGEFLAGS_T1977923430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t1977923430 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t1977923430, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYSTORAGEFLAGS_T1977923430_H
#ifndef STREAMINGCONTEXTSTATES_T376331618_H
#define STREAMINGCONTEXTSTATES_T376331618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t376331618 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t376331618, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T376331618_H
#ifndef RIPEMD160MANAGED_T4278873206_H
#define RIPEMD160MANAGED_T4278873206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t4278873206  : public RIPEMD160_t677481172
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t1253693350* ____ProcessingBuffer_4;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t1963282761* ____X_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t1963282761* ____HashValue_6;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_7;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t4278873206, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t1253693350* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t1253693350** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t1253693350* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__X_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t4278873206, ____X_5)); }
	inline UInt32U5BU5D_t1963282761* get__X_5() const { return ____X_5; }
	inline UInt32U5BU5D_t1963282761** get_address_of__X_5() { return &____X_5; }
	inline void set__X_5(UInt32U5BU5D_t1963282761* value)
	{
		____X_5 = value;
		Il2CppCodeGenWriteBarrier((&____X_5), value);
	}

	inline static int32_t get_offset_of__HashValue_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t4278873206, ____HashValue_6)); }
	inline UInt32U5BU5D_t1963282761* get__HashValue_6() const { return ____HashValue_6; }
	inline UInt32U5BU5D_t1963282761** get_address_of__HashValue_6() { return &____HashValue_6; }
	inline void set__HashValue_6(UInt32U5BU5D_t1963282761* value)
	{
		____HashValue_6 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_6), value);
	}

	inline static int32_t get_offset_of__Length_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t4278873206, ____Length_7)); }
	inline uint64_t get__Length_7() const { return ____Length_7; }
	inline uint64_t* get_address_of__Length_7() { return &____Length_7; }
	inline void set__Length_7(uint64_t value)
	{
		____Length_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t4278873206, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T4278873206_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T1876740012_H
#define RNGCRYPTOSERVICEPROVIDER_T1876740012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t1876740012  : public RandomNumberGenerator_t3369925776
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1876740012, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t1876740012_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1876740012_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T1876740012_H
#ifndef RSACRYPTOSERVICEPROVIDER_T579854726_H
#define RSACRYPTOSERVICEPROVIDER_T579854726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t579854726  : public RSA_t1712712457
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t3646907686 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t2201019223 * ___rsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t579854726, ___store_2)); }
	inline KeyPairPersistence_t3646907686 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3646907686 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3646907686 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t579854726, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t579854726, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t579854726, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t579854726, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t579854726, ___rsa_7)); }
	inline RSAManaged_t2201019223 * get_rsa_7() const { return ___rsa_7; }
	inline RSAManaged_t2201019223 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSAManaged_t2201019223 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_7), value);
	}
};

struct RSACryptoServiceProvider_t579854726_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t579854726_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T579854726_H
#ifndef CSPPARAMETERS_T733233256_H
#define CSPPARAMETERS_T733233256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t733233256  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t733233256, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t733233256, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t733233256, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t733233256, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t733233256, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T733233256_H
#ifndef WINDOWSIDENTITY_T2250393747_H
#define WINDOWSIDENTITY_T2250393747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t2250393747  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t1170853151 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2250393747, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2250393747, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2250393747, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2250393747, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2250393747, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2250393747, ____info_5)); }
	inline SerializationInfo_t1170853151 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t1170853151 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t1170853151 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t2250393747_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2250393747_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T2250393747_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3187086554_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3187086554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t3187086554  : public CryptographicException_t4013484398
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3187086554_H
#ifndef STREAMINGCONTEXT_T2008591280_H
#define STREAMINGCONTEXT_T2008591280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2008591280 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2008591280, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2008591280, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2008591280_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2008591280_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T2008591280_H
#ifndef SECURITYPERMISSION_T2176026393_H
#define SECURITYPERMISSION_T2176026393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2176026393  : public CodeAccessPermission_t3482334505
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t2176026393, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2176026393_H
#ifndef HMACSHA512_T3164196381_H
#define HMACSHA512_T3164196381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t3164196381  : public HMAC_t1301160811
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t3164196381, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t3164196381_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t3164196381_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T3164196381_H
#ifndef HMACSHA384_T443505622_H
#define HMACSHA384_T443505622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t443505622  : public HMAC_t1301160811
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t443505622, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t443505622_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t443505622_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T443505622_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T907466490_H
#define SECURITYPERMISSIONATTRIBUTE_T907466490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t907466490  : public CodeAccessSecurityAttribute_t4190990133
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t907466490, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T907466490_H
#ifndef HMACSHA1_T2897686226_H
#define HMACSHA1_T2897686226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t2897686226  : public HMAC_t1301160811
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T2897686226_H
#ifndef HMACSHA256_T2625977119_H
#define HMACSHA256_T2625977119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t2625977119  : public HMAC_t1301160811
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T2625977119_H
#ifndef SYMMETRICALGORITHM_T3202266359_H
#define SYMMETRICALGORITHM_T3202266359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t3202266359  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t1253693350* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t1253693350* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t4045540145* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t4045540145* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___IVValue_1)); }
	inline ByteU5BU5D_t1253693350* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t1253693350** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t1253693350* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___KeyValue_3)); }
	inline ByteU5BU5D_t1253693350* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t1253693350** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t1253693350* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t4045540145* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t4045540145** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t4045540145* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t4045540145* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t4045540145** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t4045540145* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3202266359, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T3202266359_H
#ifndef HMACMD5_T2431558152_H
#define HMACMD5_T2431558152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t2431558152  : public HMAC_t1301160811
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T2431558152_H
#ifndef HMACRIPEMD160_T3202256270_H
#define HMACRIPEMD160_T3202256270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t3202256270  : public HMAC_t1301160811
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T3202256270_H
#ifndef DES_T109948922_H
#define DES_T109948922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t109948922  : public SymmetricAlgorithm_t3202266359
{
public:

public:
};

struct DES_t109948922_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t1253693351* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t1253693351* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t109948922_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t1253693351* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t1253693351** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t1253693351* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_10), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t109948922_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t1253693351* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t1253693351** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t1253693351* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T109948922_H
#ifndef RC2_T796098452_H
#define RC2_T796098452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t796098452  : public SymmetricAlgorithm_t3202266359
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t796098452, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T796098452_H
#ifndef RIJNDAEL_T1227279565_H
#define RIJNDAEL_T1227279565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t1227279565  : public SymmetricAlgorithm_t3202266359
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T1227279565_H
#ifndef TRIPLEDES_T1531269230_H
#define TRIPLEDES_T1531269230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t1531269230  : public SymmetricAlgorithm_t3202266359
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T1531269230_H
#ifndef DESCRYPTOSERVICEPROVIDER_T256284488_H
#define DESCRYPTOSERVICEPROVIDER_T256284488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t256284488  : public DES_t109948922
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T256284488_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T1128404862_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T1128404862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t1128404862  : public TripleDES_t1531269230
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T1128404862_H
#ifndef RIJNDAELMANAGED_T3129491024_H
#define RIJNDAELMANAGED_T3129491024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t3129491024  : public Rijndael_t1227279565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T3129491024_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T1572487608_H
#define RC2CRYPTOSERVICEPROVIDER_T1572487608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t1572487608  : public RC2_t796098452
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T1572487608_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (StreamingContext_t2008591280)+ sizeof (RuntimeObject), sizeof(StreamingContext_t2008591280_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable600[2] = 
{
	StreamingContext_t2008591280::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t2008591280::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (StreamingContextStates_t376331618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable601[10] = 
{
	StreamingContextStates_t376331618::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (X509Certificate_t3798142600), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable602[5] = 
{
	X509Certificate_t3798142600::get_offset_of_x509_0(),
	X509Certificate_t3798142600::get_offset_of_hideDates_1(),
	X509Certificate_t3798142600::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t3798142600::get_offset_of_issuer_name_3(),
	X509Certificate_t3798142600::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (X509KeyStorageFlags_t1977923430)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable603[7] = 
{
	X509KeyStorageFlags_t1977923430::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (AsymmetricAlgorithm_t2517230227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable604[2] = 
{
	AsymmetricAlgorithm_t2517230227::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t2517230227::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (AsymmetricKeyExchangeFormatter_t1780202196), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (AsymmetricSignatureDeformatter_t2561255353), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (AsymmetricSignatureFormatter_t3026413913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (Base64Constants_t610276351), -1, sizeof(Base64Constants_t610276351_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable608[2] = 
{
	Base64Constants_t610276351_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t610276351_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (CipherMode_t3866831184)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable609[6] = 
{
	CipherMode_t3866831184::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (CryptoConfig_t3248910856), -1, sizeof(CryptoConfig_t3248910856_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable610[3] = 
{
	CryptoConfig_t3248910856_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t3248910856_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t3248910856_StaticFields::get_offset_of_oid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (CryptographicException_t4013484398), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (CryptographicUnexpectedOperationException_t3187086554), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (CspParameters_t733233256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable613[5] = 
{
	CspParameters_t733233256::get_offset_of__Flags_0(),
	CspParameters_t733233256::get_offset_of_KeyContainerName_1(),
	CspParameters_t733233256::get_offset_of_KeyNumber_2(),
	CspParameters_t733233256::get_offset_of_ProviderName_3(),
	CspParameters_t733233256::get_offset_of_ProviderType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (CspProviderFlags_t3615962000)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable614[9] = 
{
	CspProviderFlags_t3615962000::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (DES_t109948922), -1, sizeof(DES_t109948922_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable615[2] = 
{
	DES_t109948922_StaticFields::get_offset_of_weakKeys_10(),
	DES_t109948922_StaticFields::get_offset_of_semiWeakKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (DESTransform_t274438714), -1, sizeof(DESTransform_t274438714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable616[13] = 
{
	DESTransform_t274438714_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t274438714_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t274438714_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t274438714_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t274438714::get_offset_of_keySchedule_16(),
	DESTransform_t274438714::get_offset_of_byteBuff_17(),
	DESTransform_t274438714::get_offset_of_dwordBuff_18(),
	DESTransform_t274438714_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t274438714_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t274438714_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t274438714_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t274438714_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t274438714_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (DESCryptoServiceProvider_t256284488), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (DSA_t2063588458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (DSACryptoServiceProvider_t423742274), -1, sizeof(DSACryptoServiceProvider_t423742274_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable619[7] = 
{
	DSACryptoServiceProvider_t423742274::get_offset_of_store_2(),
	DSACryptoServiceProvider_t423742274::get_offset_of_persistKey_3(),
	DSACryptoServiceProvider_t423742274::get_offset_of_persisted_4(),
	DSACryptoServiceProvider_t423742274::get_offset_of_privateKeyExportable_5(),
	DSACryptoServiceProvider_t423742274::get_offset_of_m_disposed_6(),
	DSACryptoServiceProvider_t423742274::get_offset_of_dsa_7(),
	DSACryptoServiceProvider_t423742274_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (DSAParameters_t1488086414)+ sizeof (RuntimeObject), sizeof(DSAParameters_t1488086414_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable620[8] = 
{
	DSAParameters_t1488086414::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1488086414::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1488086414::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1488086414::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1488086414::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1488086414::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1488086414::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1488086414::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (DSASignatureDeformatter_t2601749267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable621[1] = 
{
	DSASignatureDeformatter_t2601749267::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (DSASignatureFormatter_t3985136331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable622[1] = 
{
	DSASignatureFormatter_t3985136331::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (HMAC_t1301160811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable623[5] = 
{
	HMAC_t1301160811::get_offset_of__disposed_5(),
	HMAC_t1301160811::get_offset_of__hashName_6(),
	HMAC_t1301160811::get_offset_of__algo_7(),
	HMAC_t1301160811::get_offset_of__block_8(),
	HMAC_t1301160811::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (HMACMD5_t2431558152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (HMACRIPEMD160_t3202256270), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (HMACSHA1_t2897686226), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (HMACSHA256_t2625977119), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (HMACSHA384_t443505622), -1, sizeof(HMACSHA384_t443505622_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable628[2] = 
{
	HMACSHA384_t443505622_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t443505622::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (HMACSHA512_t3164196381), -1, sizeof(HMACSHA512_t3164196381_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable629[2] = 
{
	HMACSHA512_t3164196381_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t3164196381::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (HashAlgorithm_t2359299845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable630[4] = 
{
	HashAlgorithm_t2359299845::get_offset_of_HashValue_0(),
	HashAlgorithm_t2359299845::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t2359299845::get_offset_of_State_2(),
	HashAlgorithm_t2359299845::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (KeySizes_t2858832016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable633[3] = 
{
	KeySizes_t2858832016::get_offset_of__maxSize_0(),
	KeySizes_t2858832016::get_offset_of__minSize_1(),
	KeySizes_t2858832016::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (KeyedHashAlgorithm_t2652047758), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable634[1] = 
{
	KeyedHashAlgorithm_t2652047758::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (MACTripleDES_t4013336621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable635[3] = 
{
	MACTripleDES_t4013336621::get_offset_of_tdes_5(),
	MACTripleDES_t4013336621::get_offset_of_mac_6(),
	MACTripleDES_t4013336621::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (MD5_t649439110), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (MD5CryptoServiceProvider_t3161728815), -1, sizeof(MD5CryptoServiceProvider_t3161728815_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable637[6] = 
{
	MD5CryptoServiceProvider_t3161728815::get_offset_of__H_4(),
	MD5CryptoServiceProvider_t3161728815::get_offset_of_buff_5(),
	MD5CryptoServiceProvider_t3161728815::get_offset_of_count_6(),
	MD5CryptoServiceProvider_t3161728815::get_offset_of__ProcessingBuffer_7(),
	MD5CryptoServiceProvider_t3161728815::get_offset_of__ProcessingBufferCount_8(),
	MD5CryptoServiceProvider_t3161728815_StaticFields::get_offset_of_K_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (PaddingMode_t2197596387)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable638[6] = 
{
	PaddingMode_t2197596387::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (RC2_t796098452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable639[1] = 
{
	RC2_t796098452::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (RC2CryptoServiceProvider_t1572487608), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (RC2Transform_t3834319653), -1, sizeof(RC2Transform_t3834319653_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable641[7] = 
{
	RC2Transform_t3834319653::get_offset_of_R0_12(),
	RC2Transform_t3834319653::get_offset_of_R1_13(),
	RC2Transform_t3834319653::get_offset_of_R2_14(),
	RC2Transform_t3834319653::get_offset_of_R3_15(),
	RC2Transform_t3834319653::get_offset_of_K_16(),
	RC2Transform_t3834319653::get_offset_of_j_17(),
	RC2Transform_t3834319653_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (RIPEMD160_t677481172), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (RIPEMD160Managed_t4278873206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable643[5] = 
{
	RIPEMD160Managed_t4278873206::get_offset_of__ProcessingBuffer_4(),
	RIPEMD160Managed_t4278873206::get_offset_of__X_5(),
	RIPEMD160Managed_t4278873206::get_offset_of__HashValue_6(),
	RIPEMD160Managed_t4278873206::get_offset_of__Length_7(),
	RIPEMD160Managed_t4278873206::get_offset_of__ProcessingBufferCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (RNGCryptoServiceProvider_t1876740012), -1, sizeof(RNGCryptoServiceProvider_t1876740012_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable644[2] = 
{
	RNGCryptoServiceProvider_t1876740012_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t1876740012::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (RSA_t1712712457), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (RSACryptoServiceProvider_t579854726), -1, sizeof(RSACryptoServiceProvider_t579854726_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable646[7] = 
{
	RSACryptoServiceProvider_t579854726::get_offset_of_store_2(),
	RSACryptoServiceProvider_t579854726::get_offset_of_persistKey_3(),
	RSACryptoServiceProvider_t579854726::get_offset_of_persisted_4(),
	RSACryptoServiceProvider_t579854726::get_offset_of_privateKeyExportable_5(),
	RSACryptoServiceProvider_t579854726::get_offset_of_m_disposed_6(),
	RSACryptoServiceProvider_t579854726::get_offset_of_rsa_7(),
	RSACryptoServiceProvider_t579854726_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (RSAPKCS1KeyExchangeFormatter_t2901273860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable647[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t2901273860::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t2901273860::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (RSAPKCS1SignatureDeformatter_t3725793581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[2] = 
{
	RSAPKCS1SignatureDeformatter_t3725793581::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t3725793581::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (RSAPKCS1SignatureFormatter_t2472654804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable649[2] = 
{
	RSAPKCS1SignatureFormatter_t2472654804::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t2472654804::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (RSAParameters_t2412512288)+ sizeof (RuntimeObject), sizeof(RSAParameters_t2412512288_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable650[8] = 
{
	RSAParameters_t2412512288::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2412512288::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2412512288::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2412512288::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2412512288::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2412512288::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2412512288::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2412512288::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (RandomNumberGenerator_t3369925776), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (Rijndael_t1227279565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (RijndaelManaged_t3129491024), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (RijndaelTransform_t2393899933), -1, sizeof(RijndaelTransform_t2393899933_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable654[15] = 
{
	RijndaelTransform_t2393899933::get_offset_of_expandedKey_12(),
	RijndaelTransform_t2393899933::get_offset_of_Nb_13(),
	RijndaelTransform_t2393899933::get_offset_of_Nk_14(),
	RijndaelTransform_t2393899933::get_offset_of_Nr_15(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t2393899933_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (RijndaelManagedTransform_t1235471457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable655[2] = 
{
	RijndaelManagedTransform_t1235471457::get_offset_of__st_0(),
	RijndaelManagedTransform_t1235471457::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (SHA1_t368131897), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (SHA1Internal_t2764426764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable657[5] = 
{
	SHA1Internal_t2764426764::get_offset_of__H_0(),
	SHA1Internal_t2764426764::get_offset_of_count_1(),
	SHA1Internal_t2764426764::get_offset_of__ProcessingBuffer_2(),
	SHA1Internal_t2764426764::get_offset_of__ProcessingBufferCount_3(),
	SHA1Internal_t2764426764::get_offset_of_buff_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (SHA1CryptoServiceProvider_t1416721320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable658[1] = 
{
	SHA1CryptoServiceProvider_t1416721320::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (SHA1Managed_t3725340081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable659[1] = 
{
	SHA1Managed_t3725340081::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (SHA256_t2107405627), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (SHA256Managed_t2130248504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable661[5] = 
{
	SHA256Managed_t2130248504::get_offset_of__H_4(),
	SHA256Managed_t2130248504::get_offset_of_count_5(),
	SHA256Managed_t2130248504::get_offset_of__ProcessingBuffer_6(),
	SHA256Managed_t2130248504::get_offset_of__ProcessingBufferCount_7(),
	SHA256Managed_t2130248504::get_offset_of_buff_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (SHA384_t2478886576), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (SHA384Managed_t518847581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable663[14] = 
{
	SHA384Managed_t518847581::get_offset_of_xBuf_4(),
	SHA384Managed_t518847581::get_offset_of_xBufOff_5(),
	SHA384Managed_t518847581::get_offset_of_byteCount1_6(),
	SHA384Managed_t518847581::get_offset_of_byteCount2_7(),
	SHA384Managed_t518847581::get_offset_of_H1_8(),
	SHA384Managed_t518847581::get_offset_of_H2_9(),
	SHA384Managed_t518847581::get_offset_of_H3_10(),
	SHA384Managed_t518847581::get_offset_of_H4_11(),
	SHA384Managed_t518847581::get_offset_of_H5_12(),
	SHA384Managed_t518847581::get_offset_of_H6_13(),
	SHA384Managed_t518847581::get_offset_of_H7_14(),
	SHA384Managed_t518847581::get_offset_of_H8_15(),
	SHA384Managed_t518847581::get_offset_of_W_16(),
	SHA384Managed_t518847581::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (SHA512_t1486946535), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (SHA512Managed_t1440381697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable665[14] = 
{
	SHA512Managed_t1440381697::get_offset_of_xBuf_4(),
	SHA512Managed_t1440381697::get_offset_of_xBufOff_5(),
	SHA512Managed_t1440381697::get_offset_of_byteCount1_6(),
	SHA512Managed_t1440381697::get_offset_of_byteCount2_7(),
	SHA512Managed_t1440381697::get_offset_of_H1_8(),
	SHA512Managed_t1440381697::get_offset_of_H2_9(),
	SHA512Managed_t1440381697::get_offset_of_H3_10(),
	SHA512Managed_t1440381697::get_offset_of_H4_11(),
	SHA512Managed_t1440381697::get_offset_of_H5_12(),
	SHA512Managed_t1440381697::get_offset_of_H6_13(),
	SHA512Managed_t1440381697::get_offset_of_H7_14(),
	SHA512Managed_t1440381697::get_offset_of_H8_15(),
	SHA512Managed_t1440381697::get_offset_of_W_16(),
	SHA512Managed_t1440381697::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (SHAConstants_t3717070591), -1, sizeof(SHAConstants_t3717070591_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable666[2] = 
{
	SHAConstants_t3717070591_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t3717070591_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (SignatureDescription_t2875508167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable667[4] = 
{
	SignatureDescription_t2875508167::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t2875508167::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t2875508167::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t2875508167::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (DSASignatureDescription_t4155448102), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (RSAPKCS1SHA1SignatureDescription_t2157215280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (SymmetricAlgorithm_t3202266359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable670[10] = 
{
	SymmetricAlgorithm_t3202266359::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t3202266359::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t3202266359::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t3202266359::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t3202266359::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t3202266359::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t3202266359::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t3202266359::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t3202266359::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t3202266359::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (ToBase64Transform_t780592538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable671[1] = 
{
	ToBase64Transform_t780592538::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (TripleDES_t1531269230), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (TripleDESCryptoServiceProvider_t1128404862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (TripleDESTransform_t1297191731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable674[6] = 
{
	TripleDESTransform_t1297191731::get_offset_of_E1_12(),
	TripleDESTransform_t1297191731::get_offset_of_D2_13(),
	TripleDESTransform_t1297191731::get_offset_of_E3_14(),
	TripleDESTransform_t1297191731::get_offset_of_D1_15(),
	TripleDESTransform_t1297191731::get_offset_of_E2_16(),
	TripleDESTransform_t1297191731::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (CodeAccessSecurityAttribute_t4190990133), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (SecurityAction_t2200124884)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable678[10] = 
{
	SecurityAction_t2200124884::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (SecurityPermission_t2176026393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable679[1] = 
{
	SecurityPermission_t2176026393::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (SecurityPermissionAttribute_t907466490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable680[1] = 
{
	SecurityPermissionAttribute_t907466490::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (SecurityPermissionFlag_t2440962475)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable681[17] = 
{
	SecurityPermissionFlag_t2440962475::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (StrongNamePublicKeyBlob_t750169182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable682[1] = 
{
	StrongNamePublicKeyBlob_t750169182::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (ApplicationTrust_t188041458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable683[1] = 
{
	ApplicationTrust_t188041458::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (Evidence_t1805126727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable684[4] = 
{
	Evidence_t1805126727::get_offset_of__locked_0(),
	Evidence_t1805126727::get_offset_of_hostEvidenceList_1(),
	Evidence_t1805126727::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t1805126727::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (EvidenceEnumerator_t2762973121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable685[3] = 
{
	EvidenceEnumerator_t2762973121::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t2762973121::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t2762973121::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (Hash_t1953062567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable686[2] = 
{
	Hash_t1953062567::get_offset_of_assembly_0(),
	Hash_t1953062567::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (StrongName_t630778083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable689[3] = 
{
	StrongName_t630778083::get_offset_of_publickey_0(),
	StrongName_t630778083::get_offset_of_name_1(),
	StrongName_t630778083::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (PrincipalPolicy_t1920003104)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable692[4] = 
{
	PrincipalPolicy_t1920003104::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (WindowsAccountType_t1606450108)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable693[5] = 
{
	WindowsAccountType_t1606450108::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (WindowsIdentity_t2250393747), -1, sizeof(WindowsIdentity_t2250393747_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable694[7] = 
{
	WindowsIdentity_t2250393747::get_offset_of__token_0(),
	WindowsIdentity_t2250393747::get_offset_of__type_1(),
	WindowsIdentity_t2250393747::get_offset_of__account_2(),
	WindowsIdentity_t2250393747::get_offset_of__authenticated_3(),
	WindowsIdentity_t2250393747::get_offset_of__name_4(),
	WindowsIdentity_t2250393747::get_offset_of__info_5(),
	WindowsIdentity_t2250393747_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (AllowPartiallyTrustedCallersAttribute_t3815068302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (CodeAccessPermission_t3482334505), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
