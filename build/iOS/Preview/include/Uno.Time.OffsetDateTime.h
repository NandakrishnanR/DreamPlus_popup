// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/OffsetDateTime.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.Offset.h>
namespace g{namespace Uno{namespace Time{struct OffsetDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct OffsetDateTime :6
// {
uStructType* OffsetDateTime_typeof();
void OffsetDateTime__ctor__fn(OffsetDateTime* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset);
void OffsetDateTime__get_Day_fn(OffsetDateTime* __this, int32_t* __retval);
void OffsetDateTime__Equals_fn(OffsetDateTime* __this, uType* __type, uObject* obj, bool* __retval);
void OffsetDateTime__Equals2_fn(OffsetDateTime* __this, OffsetDateTime* other, bool* __retval);
void OffsetDateTime__GetHashCode_fn(OffsetDateTime* __this, uType* __type, int32_t* __retval);
void OffsetDateTime__get_Hour_fn(OffsetDateTime* __this, int32_t* __retval);
void OffsetDateTime__get_Millisecond_fn(OffsetDateTime* __this, int32_t* __retval);
void OffsetDateTime__get_Minute_fn(OffsetDateTime* __this, int32_t* __retval);
void OffsetDateTime__get_Month_fn(OffsetDateTime* __this, int32_t* __retval);
void OffsetDateTime__New1_fn(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::Offset* offset, OffsetDateTime* __retval);
void OffsetDateTime__get_Offset_fn(OffsetDateTime* __this, ::g::Uno::Time::Offset* __retval);
void OffsetDateTime__op_Equality_fn(OffsetDateTime* left, OffsetDateTime* right, bool* __retval);
void OffsetDateTime__get_Second_fn(OffsetDateTime* __this, int32_t* __retval);
void OffsetDateTime__ToString_fn(OffsetDateTime* __this, uType* __type, uString** __retval);
void OffsetDateTime__get_Year_fn(OffsetDateTime* __this, int32_t* __retval);

struct OffsetDateTime
{
    ::g::Uno::Time::LocalDateTime _localDateTime;
    ::g::Uno::Time::Offset _offset;

    void ctor_(::g::Uno::Time::LocalDateTime localDateTime, ::g::Uno::Time::Offset offset);
    int32_t Day();
    bool Equals(uType* __type, uObject* obj) { bool __retval; return OffsetDateTime__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(OffsetDateTime other);
    int32_t GetHashCode(uType* __type) { int32_t __retval; return OffsetDateTime__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Hour();
    int32_t Millisecond();
    int32_t Minute();
    int32_t Month();
    ::g::Uno::Time::Offset Offset();
    int32_t Second();
    uString* ToString(uType* __type) { uString* __retval; return OffsetDateTime__ToString_fn(this, __type, &__retval), __retval; }
    int32_t Year();
};

OffsetDateTime OffsetDateTime__New1(::g::Uno::Time::LocalDateTime localDateTime, ::g::Uno::Time::Offset offset);
bool OffsetDateTime__op_Equality(OffsetDateTime left, OffsetDateTime right);
// }

}}} // ::g::Uno::Time
