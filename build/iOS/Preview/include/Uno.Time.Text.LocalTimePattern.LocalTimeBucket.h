// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalTimePattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalTimePattern__LocalTimeBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalTimePattern.LocalTimeBucket :103
// {
uType* LocalTimePattern__LocalTimeBucket_typeof();
void LocalTimePattern__LocalTimeBucket__ctor__fn(LocalTimePattern__LocalTimeBucket* __this);
void LocalTimePattern__LocalTimeBucket__New1_fn(LocalTimePattern__LocalTimeBucket** __retval);

struct LocalTimePattern__LocalTimeBucket : uObject
{
    int32_t Hour;
    int32_t Minute;
    int32_t Second;
    int32_t Millisecond;

    void ctor_();
    static LocalTimePattern__LocalTimeBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
