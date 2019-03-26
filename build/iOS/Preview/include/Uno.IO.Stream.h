// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Stream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public abstract class Stream :7
// {
struct Stream_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_get_CanRead)(::g::Uno::IO::Stream*, bool*);
    void(*fp_get_CanSeek)(::g::Uno::IO::Stream*, bool*);
    void(*fp_get_CanTimeout)(::g::Uno::IO::Stream*, bool*);
    void(*fp_get_CanWrite)(::g::Uno::IO::Stream*, bool*);
    void(*fp_Dispose1)(::g::Uno::IO::Stream*, bool*);
    void(*fp_Flush)(::g::Uno::IO::Stream*);
    void(*fp_get_Length)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_get_Position)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_set_Position)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_Read)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*, int32_t*);
    void(*fp_Seek)(::g::Uno::IO::Stream*, int64_t*, int32_t*, int64_t*);
    void(*fp_SetLength)(::g::Uno::IO::Stream*, int64_t*);
    void(*fp_Write)(::g::Uno::IO::Stream*, uArray*, int32_t*, int32_t*);
};

Stream_type* Stream_typeof();
void Stream__ctor__fn(Stream* __this);
void Stream__get_CanTimeout_fn(Stream* __this, bool* __retval);
void Stream__Close_fn(Stream* __this);
void Stream__Dispose_fn(Stream* __this);
void Stream__Dispose1_fn(Stream* __this, bool* disposing);
void Stream__get_ReadTimeout_fn(Stream* __this, int32_t* __retval);
void Stream__set_ReadTimeout_fn(Stream* __this, int32_t* value);
void Stream__get_WriteTimeout_fn(Stream* __this, int32_t* __retval);
void Stream__set_WriteTimeout_fn(Stream* __this, int32_t* value);

struct Stream : uObject
{
    void ctor_();
    bool CanRead() { bool __retval; return (((Stream_type*)__type)->fp_get_CanRead)(this, &__retval), __retval; }
    bool CanSeek() { bool __retval; return (((Stream_type*)__type)->fp_get_CanSeek)(this, &__retval), __retval; }
    bool CanTimeout() { bool __retval; return (((Stream_type*)__type)->fp_get_CanTimeout)(this, &__retval), __retval; }
    bool CanWrite() { bool __retval; return (((Stream_type*)__type)->fp_get_CanWrite)(this, &__retval), __retval; }
    void Close();
    void Dispose();
    void Dispose1(bool disposing) { (((Stream_type*)__type)->fp_Dispose1)(this, &disposing); }
    void Flush() { (((Stream_type*)__type)->fp_Flush)(this); }
    int64_t Length() { int64_t __retval; return (((Stream_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
    int64_t Position() { int64_t __retval; return (((Stream_type*)__type)->fp_get_Position)(this, &__retval), __retval; }
    void Position(int64_t value) { (((Stream_type*)__type)->fp_set_Position)(this, &value); }
    int32_t Read(uArray* dst, int32_t byteOffset, int32_t byteCount) { int32_t __retval; return (((Stream_type*)__type)->fp_Read)(this, dst, &byteOffset, &byteCount, &__retval), __retval; }
    int32_t ReadTimeout();
    void ReadTimeout(int32_t value);
    int64_t Seek(int64_t byteOffset, int32_t origin) { int64_t __retval; return (((Stream_type*)__type)->fp_Seek)(this, &byteOffset, &origin, &__retval), __retval; }
    void SetLength(int64_t value) { (((Stream_type*)__type)->fp_SetLength)(this, &value); }
    void Write(uArray* src, int32_t byteOffset, int32_t byteCount) { (((Stream_type*)__type)->fp_Write)(this, src, &byteOffset, &byteCount); }
    int32_t WriteTimeout();
    void WriteTimeout(int32_t value);
    static void Dispose1(Stream* __this, bool disposing) { Stream__Dispose1_fn(__this, &disposing); }
    static bool CanTimeout(Stream* __this) { bool __retval; return Stream__get_CanTimeout_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::IO
