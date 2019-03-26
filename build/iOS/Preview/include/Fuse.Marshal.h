// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.9.0/Marshal.Cast.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Computer;}}
namespace g{namespace Fuse{struct Marshal;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public partial static class Marshal :12
// {
uClassType* Marshal_typeof();
void Marshal__Add_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__AddConverter_fn(uObject* conv);
void Marshal__CanConvertClass_fn(uType* t, bool* __retval);
void Marshal__DepOp_fn(int32_t* op, uObject* a, uObject* b, uObject** __retval);
void Marshal__DepOp1_fn(int32_t* op, uObject* a, uObject* b, uObject** __retval);
void Marshal__Divide_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__DominantType_fn(uType* a, uType* b, uType** __retval);
void Marshal__EqualTo_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__GreaterOrEqual_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__GreaterThan_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__Is_fn(uObject* obj, uType* t, bool* __retval);
void Marshal__LessOrEqual_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__LessThan_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__Max_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__Min_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__Multiply_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__Parse_fn(uString* s, uObject** __retval);
void Marshal__Subtract_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__ToBool_fn(uObject* v, bool* __retval);
void Marshal__ToByte_fn(uObject* o, int16_t* __retval);
void Marshal__ToDouble_fn(uObject* v, double* __retval);
void Marshal__ToDouble1_fn(uObject* v, double* res, bool* __retval);
void Marshal__ToDouble2_fn(uString* s, double* res, bool* __retval);
void Marshal__ToFloat_fn(uObject* o, float* __retval);
void Marshal__ToFloat2_fn(uObject* o, ::g::Uno::Float2* __retval);
void Marshal__ToFloat3_fn(uObject* o, ::g::Uno::Float3* __retval);
void Marshal__ToFloat4_fn(float* f, ::g::Uno::Float4* __retval);
void Marshal__ToFloat41_fn(::g::Uno::Float2* f, ::g::Uno::Float4* __retval);
void Marshal__ToFloat42_fn(::g::Uno::Float3* f, ::g::Uno::Float4* __retval);
void Marshal__ToFloat43_fn(uObject* o, ::g::Uno::Float4* __retval);
void Marshal__ToInt_fn(uObject* o, int32_t* __retval);
void Marshal__ToSByte_fn(uObject* o, int8_t* __retval);
void Marshal__ToShort_fn(uObject* o, int16_t* __retval);
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval);
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval);
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval);
void Marshal__ToUInt_fn(uObject* o, uint32_t* __retval);
void Marshal__ToUShort_fn(uObject* o, uint16_t* __retval);
void Marshal__ToVector_fn(uObject* arr, uObject** __retval);
void Marshal__TryAdd_fn(uObject* a, uObject* b, uObject** result, bool* __retval);
void Marshal__TryConvertArrayToVector_fn(uObject* arg, uObject** __retval);
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** res, uObject* diagnosticSource, bool* __retval);
void Marshal__TryDivide_fn(uObject* a, uObject* b, uObject** result, bool* __retval);
void Marshal__TryEqualTo_fn(uObject* a, uObject* b, bool* result, bool* __retval);
void Marshal__TryGreaterOrEqual_fn(uObject* a, uObject* b, bool* result, bool* __retval);
void Marshal__TryGreaterThan_fn(uObject* a, uObject* b, bool* result, bool* __retval);
void Marshal__TryLessOrEqual_fn(uObject* a, uObject* b, bool* result, bool* __retval);
void Marshal__TryLessThan_fn(uObject* a, uObject* b, bool* result, bool* __retval);
void Marshal__TryMax_fn(uObject* a, uObject* b, uObject** result, bool* __retval);
void Marshal__TryMin_fn(uObject* a, uObject* b, uObject** result, bool* __retval);
void Marshal__TryMultiply_fn(uObject* a, uObject* b, uObject** result, bool* __retval);
void Marshal__TryOp_fn(int32_t* op, uObject* a, uObject* b, bool* result, bool* __retval);
void Marshal__TryOp1_fn(int32_t* op, uObject* a, uObject* b, uObject** result, bool* __retval);
void Marshal__TryStringToSize_fn(uString* o, ::g::Uno::UX::Size* result, bool* __retval);
void Marshal__TryStringToSize2_fn(uString* o, ::g::Uno::UX::Size2* result, int32_t* count, bool* __retval);
void Marshal__TrySubtract_fn(uObject* a, uObject* b, uObject** result, bool* __retval);
void Marshal__TryToColorFloat4_fn(uObject* o, ::g::Uno::Float4* value, bool* __retval);
void Marshal__TryToDouble_fn(uObject* v, double* res, bool* __retval);
void Marshal__TryToDouble1_fn(uString* s, double* res, bool* __retval);
void Marshal__TryToFloat_fn(uObject* v, float* res, bool* __retval);
void Marshal__TryToSize_fn(uObject* o, ::g::Uno::UX::Size* result, bool* __retval);
void Marshal__TryToSize2_fn(uObject* o, ::g::Uno::UX::Size2* result, bool* __retval);
void Marshal__TryToSize21_fn(uObject* o, ::g::Uno::UX::Size2* result, int32_t* count, bool* __retval);
void Marshal__TryToType_fn(uType* __type, uObject* o, uTRef res, bool* __retval);
void Marshal__TryToZeroFloat4_fn(uObject* o, ::g::Uno::Float4* value, int32_t* size, bool* __retval);

struct Marshal : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _computers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _computers() { return Marshal_typeof()->Init(), _computers_; }
    static uSStrong< ::g::Uno::Collections::List*> _converters_;
    static uSStrong< ::g::Uno::Collections::List*>& _converters() { return Marshal_typeof()->Init(), _converters_; }

    static uObject* Add(uObject* a, uObject* b);
    static void AddConverter(uObject* conv);
    static bool CanConvertClass(uType* t);
    static uObject* DepOp(int32_t op, uObject* a, uObject* b);
    static uObject* DepOp1(int32_t op, uObject* a, uObject* b);
    static uObject* Divide(uObject* a, uObject* b);
    static uType* DominantType(uType* a, uType* b);
    static uObject* EqualTo(uObject* a, uObject* b);
    static uObject* GreaterOrEqual(uObject* a, uObject* b);
    static uObject* GreaterThan(uObject* a, uObject* b);
    static bool Is(uObject* obj, uType* t);
    static uObject* LessOrEqual(uObject* a, uObject* b);
    static uObject* LessThan(uObject* a, uObject* b);
    static uObject* Max(uObject* a, uObject* b);
    static uObject* Min(uObject* a, uObject* b);
    static uObject* Multiply(uObject* a, uObject* b);
    static uObject* Parse(uString* s);
    static uObject* Subtract(uObject* a, uObject* b);
    static bool ToBool(uObject* v);
    static int16_t ToByte(uObject* o);
    static double ToDouble(uObject* v);
    static bool ToDouble1(uObject* v, double* res);
    static bool ToDouble2(uString* s, double* res);
    static float ToFloat(uObject* o);
    static ::g::Uno::Float2 ToFloat2(uObject* o);
    static ::g::Uno::Float3 ToFloat3(uObject* o);
    static ::g::Uno::Float4 ToFloat4(float f);
    static ::g::Uno::Float4 ToFloat41(::g::Uno::Float2 f);
    static ::g::Uno::Float4 ToFloat42(::g::Uno::Float3 f);
    static ::g::Uno::Float4 ToFloat43(uObject* o);
    static int32_t ToInt(uObject* o);
    static int8_t ToSByte(uObject* o);
    static int16_t ToShort(uObject* o);
    static ::g::Uno::UX::Size ToSize(uObject* o);
    static ::g::Uno::UX::Size2 ToSize2(uObject* o);
    template<class T>
    static T ToType(uType* __type, uObject* o) { T __retval; return Marshal__ToType_fn(__type, o, &__retval), __retval; }
    static uint32_t ToUInt(uObject* o);
    static uint16_t ToUShort(uObject* o);
    static uObject* ToVector(uObject* arr);
    static bool TryAdd(uObject* a, uObject* b, uObject** result);
    static uObject* TryConvertArrayToVector(uObject* arg);
    static bool TryConvertTo(uType* t, uObject* o, uObject** res, uObject* diagnosticSource);
    static bool TryDivide(uObject* a, uObject* b, uObject** result);
    static bool TryEqualTo(uObject* a, uObject* b, bool* result);
    static bool TryGreaterOrEqual(uObject* a, uObject* b, bool* result);
    static bool TryGreaterThan(uObject* a, uObject* b, bool* result);
    static bool TryLessOrEqual(uObject* a, uObject* b, bool* result);
    static bool TryLessThan(uObject* a, uObject* b, bool* result);
    static bool TryMax(uObject* a, uObject* b, uObject** result);
    static bool TryMin(uObject* a, uObject* b, uObject** result);
    static bool TryMultiply(uObject* a, uObject* b, uObject** result);
    static bool TryOp(int32_t op, uObject* a, uObject* b, bool* result);
    static bool TryOp1(int32_t op, uObject* a, uObject* b, uObject** result);
    static bool TryStringToSize(uString* o, ::g::Uno::UX::Size* result);
    static bool TryStringToSize2(uString* o, ::g::Uno::UX::Size2* result, int32_t* count);
    static bool TrySubtract(uObject* a, uObject* b, uObject** result);
    static bool TryToColorFloat4(uObject* o, ::g::Uno::Float4* value);
    static bool TryToDouble(uObject* v, double* res);
    static bool TryToDouble1(uString* s, double* res);
    static bool TryToFloat(uObject* v, float* res);
    static bool TryToSize(uObject* o, ::g::Uno::UX::Size* result);
    static bool TryToSize2(uObject* o, ::g::Uno::UX::Size2* result);
    static bool TryToSize21(uObject* o, ::g::Uno::UX::Size2* result, int32_t* count);
    template<class T>
    static bool TryToType(uType* __type, uObject* o, T* res) { bool __retval; return Marshal__TryToType_fn(__type, o, uConstrain(__type->U(0), res), &__retval), __retval; }
    static bool TryToZeroFloat4(uObject* o, ::g::Uno::Float4* value, int32_t* size);
};
// }

}} // ::g::Fuse
