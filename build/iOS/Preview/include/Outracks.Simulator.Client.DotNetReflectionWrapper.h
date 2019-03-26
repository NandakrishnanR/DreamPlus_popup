// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/DotNetReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct DotNetReflection;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct DotNetReflectionWrapper;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public sealed class DotNetReflectionWrapper :37
// {
struct DotNetReflectionWrapper_type : uType
{
    ::g::Outracks::Simulator::Runtime::IReflection interface0;
};

DotNetReflectionWrapper_type* DotNetReflectionWrapper_typeof();
void DotNetReflectionWrapper__ctor__fn(DotNetReflectionWrapper* __this, ::g::Outracks::Simulator::Client::DotNetReflection* reflection);
void DotNetReflectionWrapper__get__reflection_fn(DotNetReflectionWrapper* __this, ::g::Outracks::Simulator::Client::DotNetReflection** __retval);
void DotNetReflectionWrapper__set__reflection_fn(DotNetReflectionWrapper* __this, ::g::Outracks::Simulator::Client::DotNetReflection* value);
void DotNetReflectionWrapper__AddEventHandler_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* member, uObject* handlerDelegate);
void DotNetReflectionWrapper__CallDynamic_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* methodName, uArray* arguments, uObject** __retval);
void DotNetReflectionWrapper__CallStatic_fn(DotNetReflectionWrapper* __this, uString* typeName, uString* methodName, uArray* arguments, uObject** __retval);
void DotNetReflectionWrapper__CreateDelegate_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName, uObject** __retval);
void DotNetReflectionWrapper__GetEnumValue_fn(DotNetReflectionWrapper* __this, uString* enumType, uString* valueName, uObject** __retval);
void DotNetReflectionWrapper__GetPropertyValue_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* propertyName, uObject** __retval);
void DotNetReflectionWrapper__GetStaticPropertyOrFieldValue_fn(DotNetReflectionWrapper* __this, uString* typeName, uString* memberName, uObject** __retval);
void DotNetReflectionWrapper__Instantiate_fn(DotNetReflectionWrapper* __this, uString* typeName, uArray* args, uObject** __retval);
void DotNetReflectionWrapper__IsSubtype_fn(DotNetReflectionWrapper* __this, uObject* obj, uString* typeName, bool* __retval);
void DotNetReflectionWrapper__IsType_fn(DotNetReflectionWrapper* __this, uObject* obj, uString* typeName, bool* __retval);
void DotNetReflectionWrapper__New1_fn(::g::Outracks::Simulator::Client::DotNetReflection* reflection, DotNetReflectionWrapper** __retval);
void DotNetReflectionWrapper__RemoveEventHandler_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* member, uObject* handlerDelegate);
void DotNetReflectionWrapper__SetPropertyValue_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* propertyName, uObject* value);

struct DotNetReflectionWrapper : uObject
{
    uStrong< ::g::Outracks::Simulator::Client::DotNetReflection*> __reflection1;

    void ctor_(::g::Outracks::Simulator::Client::DotNetReflection* reflection);
    ::g::Outracks::Simulator::Client::DotNetReflection* _reflection();
    void _reflection(::g::Outracks::Simulator::Client::DotNetReflection* value);
    void AddEventHandler(uObject* instance, uString* member, uObject* handlerDelegate);
    uObject* CallDynamic(uObject* instance, uString* methodName, uArray* arguments);
    uObject* CallStatic(uString* typeName, uString* methodName, uArray* arguments);
    uObject* CreateDelegate(uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName);
    uObject* GetEnumValue(uString* enumType, uString* valueName);
    uObject* GetPropertyValue(uObject* instance, uString* propertyName);
    uObject* GetStaticPropertyOrFieldValue(uString* typeName, uString* memberName);
    uObject* Instantiate(uString* typeName, uArray* args);
    bool IsSubtype(uObject* obj, uString* typeName);
    bool IsType(uObject* obj, uString* typeName);
    void RemoveEventHandler(uObject* instance, uString* member, uObject* handlerDelegate);
    void SetPropertyValue(uObject* instance, uString* propertyName, uObject* value);
    static DotNetReflectionWrapper* New1(::g::Outracks::Simulator::Client::DotNetReflection* reflection);
};
// }

}}}} // ::g::Outracks::Simulator::Client
