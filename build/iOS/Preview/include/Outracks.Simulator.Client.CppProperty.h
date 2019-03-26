// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Client.IProperty.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct CppProperty;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal sealed extern class CppProperty :411
// {
struct CppProperty_type : uType
{
    ::g::Outracks::Simulator::Client::IProperty interface0;
};

CppProperty_type* CppProperty_typeof();
void CppProperty__ctor__fn(CppProperty* __this, uType* declaringType, uType* type, uString* name);
void CppProperty__get_DeclaringType_fn(CppProperty* __this, uType** __retval);
void CppProperty__get_GetMethod_fn(CppProperty* __this, uObject** __retval);
void CppProperty__New1_fn(uType* declaringType, uType* type, uString* name, CppProperty** __retval);
void CppProperty__get_SetMethod_fn(CppProperty* __this, uObject** __retval);

struct CppProperty : uObject
{
    uStrong<uType*> _declaringType;
    uStrong<uType*> _type;
    uStrong<uString*> _name;

    void ctor_(uType* declaringType, uType* type, uString* name);
    uType* DeclaringType();
    uObject* GetMethod();
    uObject* SetMethod();
    static CppProperty* New1(uType* declaringType, uType* type, uString* name);
};
// }

}}}} // ::g::Outracks::Simulator::Client
