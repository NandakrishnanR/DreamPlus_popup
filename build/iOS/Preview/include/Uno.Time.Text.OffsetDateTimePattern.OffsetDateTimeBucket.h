// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/OffsetDateTimePattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.Offset.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetDateTimePattern__OffsetDateTimeBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class OffsetDateTimePattern.OffsetDateTimeBucket :169
// {
uType* OffsetDateTimePattern__OffsetDateTimeBucket_typeof();
void OffsetDateTimePattern__OffsetDateTimeBucket__ctor__fn(OffsetDateTimePattern__OffsetDateTimeBucket* __this);
void OffsetDateTimePattern__OffsetDateTimeBucket__New1_fn(OffsetDateTimePattern__OffsetDateTimeBucket** __retval);

struct OffsetDateTimePattern__OffsetDateTimeBucket : uObject
{
    int32_t Sign;
    int32_t Year;
    int32_t Month;
    int32_t Day;
    int32_t Hour;
    int32_t Minute;
    int32_t Second;
    int32_t Millisecond;
    ::g::Uno::Time::Offset Offset;

    void ctor_();
    static OffsetDateTimePattern__OffsetDateTimeBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
