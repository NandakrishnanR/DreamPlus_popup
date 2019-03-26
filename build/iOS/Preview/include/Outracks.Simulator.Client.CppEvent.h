// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.IEvent.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct CppEvent;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed extern class CppEvent :381
// {
struct CppEvent_type : uType
{
    ::g::Outracks::Simulator::Client::IEvent interface0;
};

CppEvent_type* CppEvent_typeof();
void CppEvent__ctor__fn(CppEvent* __this, uType* declaringType, uType* type, uString* name);
void CppEvent__get_AddMethod_fn(CppEvent* __this, uObject** __retval);
void CppEvent__get_DeclaringType_fn(CppEvent* __this, uType** __retval);
void CppEvent__New1_fn(uType* declaringType, uType* type, uString* name, CppEvent** __retval);
void CppEvent__get_RemoveMethod_fn(CppEvent* __this, uObject** __retval);

struct CppEvent : uObject
{
    uStrong<uType*> _declaringType;
    uStrong<uType*> _type;
    uStrong<uString*> _name;

    void ctor_(uType* declaringType, uType* type, uString* name);
    uObject* AddMethod();
    uType* DeclaringType();
    uObject* RemoveMethod();
    static CppEvent* New1(uType* declaringType, uType* type, uString* name);
};
// }

}}}} // ::g::Outracks::Simulator::Client
