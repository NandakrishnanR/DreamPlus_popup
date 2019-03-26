// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Runtime/Implementation/BufferImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct BufferImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// public static class BufferImpl :6
// {
uClassType* BufferImpl_typeof();
void BufferImpl__GetDouble_fn(uArray* buffer, int32_t* offset, bool* littleEndian, double* __retval);
void BufferImpl__GetFloat_fn(uArray* buffer, int32_t* offset, bool* littleEndian, float* __retval);
void BufferImpl__GetInt_fn(uArray* buffer, int32_t* offset, bool* littleEndian, int32_t* __retval);
void BufferImpl__GetUInt_fn(uArray* buffer, int32_t* offset, bool* littleEndian, uint32_t* __retval);
void BufferImpl__SetDouble_fn(uArray* buffer, int32_t* offset, double* value, bool* littleEndian);
void BufferImpl__SetFloat_fn(uArray* buffer, int32_t* offset, float* value, bool* littleEndian);
void BufferImpl__SetInt_fn(uArray* buffer, int32_t* offset, int32_t* value, bool* littleEndian);
void BufferImpl__SetShort_fn(uArray* buffer, int32_t* offset, int16_t* value, bool* littleEndian);
void BufferImpl__SetUShort_fn(uArray* buffer, int32_t* offset, uint16_t* value, bool* littleEndian);

struct BufferImpl : uObject
{
    static double GetDouble(uArray* buffer, int32_t offset, bool littleEndian);
    static float GetFloat(uArray* buffer, int32_t offset, bool littleEndian);
    static int32_t GetInt(uArray* buffer, int32_t offset, bool littleEndian);
    static uint32_t GetUInt(uArray* buffer, int32_t offset, bool littleEndian);
    static void SetDouble(uArray* buffer, int32_t offset, double value, bool littleEndian);
    static void SetFloat(uArray* buffer, int32_t offset, float value, bool littleEndian);
    static void SetInt(uArray* buffer, int32_t offset, int32_t value, bool littleEndian);
    static void SetShort(uArray* buffer, int32_t offset, int16_t value, bool littleEndian);
    static void SetUShort(uArray* buffer, int32_t offset, uint16_t value, bool littleEndian);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
