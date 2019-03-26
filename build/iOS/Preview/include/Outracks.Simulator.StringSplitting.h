// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/StringExtensions.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct StringSplitting;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class StringSplitting :21
// {
uClassType* StringSplitting_typeof();
void StringSplitting__AfterFirst_fn(uString* s, uString* seperator, uString** __retval);
void StringSplitting__AfterLast_fn(uString* s, uString* seperator, uString** __retval);
void StringSplitting__BeforeFirst_fn(uString* s, uString* seperator, uString** __retval);
void StringSplitting__BeforeLast_fn(uString* s, uString* seperator, uString** __retval);
void StringSplitting__Join_fn(uObject* si, uString* separator, uString** __retval);
void StringSplitting__JoinToString_fn(uType* __type, uObject* objects, uString* separator, uString** __retval);
void StringSplitting__OrdinalIndexOf_fn(uString* str, uString* seperator, int32_t* __retval);
void StringSplitting__OrdinalLastIndexOf_fn(uString* str, uString* seperator, int32_t* __retval);

struct StringSplitting : uObject
{
    static uString* AfterFirst(uString* s, uString* seperator);
    static uString* AfterLast(uString* s, uString* seperator);
    static uString* BeforeFirst(uString* s, uString* seperator);
    static uString* BeforeLast(uString* s, uString* seperator);
    static uString* Join(uObject* si, uString* separator);
    static uString* JoinToString(uType* __type, uObject* objects, uString* separator);
    static int32_t OrdinalIndexOf(uString* str, uString* seperator);
    static int32_t OrdinalLastIndexOf(uString* str, uString* seperator);
};
// }

}}} // ::g::Outracks::Simulator
