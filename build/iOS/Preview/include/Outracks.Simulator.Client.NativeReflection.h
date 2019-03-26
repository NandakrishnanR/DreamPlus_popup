// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct NativeReflection;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public sealed extern class NativeReflection :95
// {
struct NativeReflection_type : uType
{
    ::g::Outracks::Simulator::Runtime::IReflection interface0;
};

NativeReflection_type* NativeReflection_typeof();
void NativeReflection__ctor__fn(NativeReflection* __this, uObject* typeMap);
void NativeReflection__AddEventHandler_fn(NativeReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate);
void NativeReflection__CallDynamic_fn(NativeReflection* __this, uObject* obj, uString* methodName, uArray* arguments, uObject** __retval);
void NativeReflection__CallStatic_fn(NativeReflection* __this, uString* typeName, uString* methodName, uArray* arguments, uObject** __retval);
void NativeReflection__CreateDelegate_fn(NativeReflection* __this, uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName, uObject** __retval);
void NativeReflection__GetEnumValue_fn(NativeReflection* __this, uString* enumType, uString* valueName, uObject** __retval);
void NativeReflection__GetPropertyValue_fn(NativeReflection* __this, uObject* obj, uString* propertyName, uObject** __retval);
void NativeReflection__GetStaticPropertyOrFieldValue_fn(NativeReflection* __this, uString* typeName, uString* memberName, uObject** __retval);
void NativeReflection__Instantiate_fn(NativeReflection* __this, uString* typeName, uArray* args, uObject** __retval);
void NativeReflection__IsSubtype_fn(NativeReflection* __this, uObject* obj, uString* typeName, bool* __retval);
void NativeReflection__IsType_fn(NativeReflection* __this, uObject* obj, uString* typeName, bool* __retval);
void NativeReflection__New1_fn(uObject* typeMap, NativeReflection** __retval);
void NativeReflection__RemoveEventHandler_fn(NativeReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate);
void NativeReflection__ResolveProperty_fn(NativeReflection* __this, uObject* obj, uString* propertyName, uType* propertyType, uObject** __retval);
void NativeReflection__SetPropertyValue_fn(NativeReflection* __this, uObject* obj, uString* propertyName, uObject* value);
void NativeReflection__SetStaticField_fn(NativeReflection* __this, uString* typeName, uString* fieldName, uObject* value);

struct NativeReflection : uObject
{
    uStrong<uObject*> _typeMap;

    void ctor_(uObject* typeMap);
    void AddEventHandler(uObject* instance, uString* member, uObject* handlerDelegate);
    uObject* CallDynamic(uObject* obj, uString* methodName, uArray* arguments);
    uObject* CallStatic(uString* typeName, uString* methodName, uArray* arguments);
    uObject* CreateDelegate(uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName);
    uObject* GetEnumValue(uString* enumType, uString* valueName);
    uObject* GetPropertyValue(uObject* obj, uString* propertyName);
    uObject* GetStaticPropertyOrFieldValue(uString* typeName, uString* memberName);
    uObject* Instantiate(uString* typeName, uArray* args);
    bool IsSubtype(uObject* obj, uString* typeName);
    bool IsType(uObject* obj, uString* typeName);
    void RemoveEventHandler(uObject* instance, uString* member, uObject* handlerDelegate);
    uObject* ResolveProperty(uObject* obj, uString* propertyName, uType* propertyType);
    void SetPropertyValue(uObject* obj, uString* propertyName, uObject* value);
    void SetStaticField(uString* typeName, uString* fieldName, uObject* value);
    static NativeReflection* New1(uObject* typeMap);
};
// }

}}}} // ::g::Outracks::Simulator::Client
