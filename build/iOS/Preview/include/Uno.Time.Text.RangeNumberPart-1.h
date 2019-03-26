// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct RangeNumberPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class RangeNumberPart<T> :85
// {
::g::Uno::Time::Text::PatternPart_type* RangeNumberPart_typeof();
void RangeNumberPart__ctor_1_fn(RangeNumberPart* __this, int32_t* size, int32_t* maxSize, uDelegate* setter, uDelegate* getter);
void RangeNumberPart__New1_fn(uType* __type, int32_t* size, int32_t* maxSize, uDelegate* setter, uDelegate* getter, RangeNumberPart** __retval);
void RangeNumberPart__Read_fn(RangeNumberPart* __this, uString* line, int32_t* position, void* value, int32_t* __retval);
void RangeNumberPart__Write_fn(RangeNumberPart* __this, void* value, uString** __retval);

struct RangeNumberPart : ::g::Uno::Time::Text::PatternPart
{
    int32_t _maxSize;

    void ctor_1(int32_t size, int32_t maxSize, uDelegate* setter, uDelegate* getter);
    static RangeNumberPart* New1(uType* __type, int32_t size, int32_t maxSize, uDelegate* setter, uDelegate* getter);
};
// }

}}}} // ::g::Uno::Time::Text
