// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/LocalDatePattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct LocalDatePattern__LocalDateBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class LocalDatePattern.LocalDateBucket :102
// {
uType* LocalDatePattern__LocalDateBucket_typeof();
void LocalDatePattern__LocalDateBucket__ctor__fn(LocalDatePattern__LocalDateBucket* __this);
void LocalDatePattern__LocalDateBucket__New1_fn(LocalDatePattern__LocalDateBucket** __retval);

struct LocalDatePattern__LocalDateBucket : uObject
{
    int32_t Sign;
    int32_t Year;
    int32_t Month;
    int32_t Day;

    void ctor_();
    static LocalDatePattern__LocalDateBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
