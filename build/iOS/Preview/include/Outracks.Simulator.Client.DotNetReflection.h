// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/DotNetReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct DotNetReflection;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public sealed class DotNetReflection :9
// {
struct DotNetReflection_type : uType
{
    ::g::Outracks::Simulator::Runtime::IReflection interface0;
};

DotNetReflection_type* DotNetReflection_typeof();
void DotNetReflection__ctor__fn(DotNetReflection* __this);
void DotNetReflection__AddEventHandler_fn(DotNetReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate);
void DotNetReflection__CallDynamic_fn(DotNetReflection* __this, uObject* instance, uString* methodName, uArray* arguments, uObject** __retval);
void DotNetReflection__CallStatic_fn(DotNetReflection* __this, uString* typeName, uString* methodName, uArray* arguments, uObject** __retval);
void DotNetReflection__CreateDelegate_fn(DotNetReflection* __this, uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName, uObject** __retval);
void DotNetReflection__GetEnumValue_fn(DotNetReflection* __this, uString* enumType, uString* valueName, uObject** __retval);
void DotNetReflection__GetPropertyValue_fn(DotNetReflection* __this, uObject* instance, uString* propertyName, uObject** __retval);
void DotNetReflection__GetStaticPropertyOrFieldValue_fn(DotNetReflection* __this, uString* typeName, uString* memberName, uObject** __retval);
void DotNetReflection__Instantiate_fn(DotNetReflection* __this, uString* typeName, uArray* args, uObject** __retval);
void DotNetReflection__IsSubtype_fn(DotNetReflection* __this, uObject* obj, uString* typeName, bool* __retval);
void DotNetReflection__IsType_fn(DotNetReflection* __this, uObject* obj, uString* typeName, bool* __retval);
void DotNetReflection__Load_fn(uString* outputDir, DotNetReflection** __retval);
void DotNetReflection__New1_fn(DotNetReflection** __retval);
void DotNetReflection__RemoveEventHandler_fn(DotNetReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate);
void DotNetReflection__SetPropertyValue_fn(DotNetReflection* __this, uObject* instance, uString* propertyName, uObject* value);

struct DotNetReflection : uObject
{
    void ctor_();
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
    static DotNetReflection* Load(uString* outputDir);
    static DotNetReflection* New1();
};
// }

}}}} // ::g::Outracks::Simulator::Client
