// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Time/Text/PatternPart.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal abstract interface IPatternPart<T> :3
// {
uInterfaceType* IPatternPart_typeof();

struct IPatternPart
{
    void(*fp_Read)(uObject*, uString*, int32_t*, void*, int32_t*);
    void(*fp_get_SkipNextPartsCountIfThisNotSpecified)(uObject*, int32_t*);
    void(*fp_Write)(uObject*, void*, uString**);
    template<class T>
    static int32_t Read(const uInterface& __this, uString* line, int32_t position, T value) { int32_t __retval; return __this.VTable<IPatternPart>()->fp_Read(__this, line, &position, uConstrain(__this->__type->GetBase(IPatternPart_typeof())->T(0), value), &__retval), __retval; }
    static void Read_ex(const uInterface& __this, uString* line, int32_t* position, void* value, int32_t* __retval) { __this.VTable<IPatternPart>()->fp_Read(__this, line, position, value, __retval); }
    static int32_t SkipNextPartsCountIfThisNotSpecified(const uInterface& __this) { int32_t __retval; return __this.VTable<IPatternPart>()->fp_get_SkipNextPartsCountIfThisNotSpecified(__this, &__retval), __retval; }
    template<class T>
    static uString* Write(const uInterface& __this, T value) { uString* __retval; return __this.VTable<IPatternPart>()->fp_Write(__this, uConstrain(__this->__type->GetBase(IPatternPart_typeof())->T(0), value), &__retval), __retval; }
    static void Write_ex(const uInterface& __this, void* value, uString** __retval) { __this.VTable<IPatternPart>()->fp_Write(__this, value, __retval); }
};
// }

}}}} // ::g::Uno::Time::Text
