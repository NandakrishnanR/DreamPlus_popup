// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/IReflection.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public abstract interface IReflection :44
// {
uInterfaceType* IReflection_typeof();

struct IReflection
{
    void(*fp_AddEventHandler)(uObject*, uObject*, uString*, uObject*);
    void(*fp_CallDynamic)(uObject*, uObject*, uString*, uArray*, uObject**);
    void(*fp_CallStatic)(uObject*, uString*, uString*, uArray*, uObject**);
    void(*fp_CreateDelegate)(uObject*, uObject*, uString*, uArray*, uString*, uObject**);
    void(*fp_GetEnumValue)(uObject*, uString*, uString*, uObject**);
    void(*fp_GetPropertyValue)(uObject*, uObject*, uString*, uObject**);
    void(*fp_GetStaticPropertyOrFieldValue)(uObject*, uString*, uString*, uObject**);
    void(*fp_Instantiate)(uObject*, uString*, uArray*, uObject**);
    void(*fp_IsSubtype)(uObject*, uObject*, uString*, bool*);
    void(*fp_IsType)(uObject*, uObject*, uString*, bool*);
    void(*fp_RemoveEventHandler)(uObject*, uObject*, uString*, uObject*);
    void(*fp_SetPropertyValue)(uObject*, uObject*, uString*, uObject*);
    static void AddEventHandler(const uInterface& __this, uObject* instance, uString* member, uObject* handlerDelegate) { __this.VTable<IReflection>()->fp_AddEventHandler(__this, instance, member, handlerDelegate); }
    static uObject* CallDynamic(const uInterface& __this, uObject* instance, uString* methodName, uArray* arguments) { uObject* __retval; return __this.VTable<IReflection>()->fp_CallDynamic(__this, instance, methodName, arguments, &__retval), __retval; }
    static uObject* CallStatic(const uInterface& __this, uString* typeName, uString* methodName, uArray* arguments) { uObject* __retval; return __this.VTable<IReflection>()->fp_CallStatic(__this, typeName, methodName, arguments, &__retval), __retval; }
    static uObject* CreateDelegate(const uInterface& __this, uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName) { uObject* __retval; return __this.VTable<IReflection>()->fp_CreateDelegate(__this, instance, methodName, methodArgumentTypes, delegateTypeName, &__retval), __retval; }
    static uObject* GetEnumValue(const uInterface& __this, uString* enumType, uString* valueName) { uObject* __retval; return __this.VTable<IReflection>()->fp_GetEnumValue(__this, enumType, valueName, &__retval), __retval; }
    static uObject* GetPropertyValue(const uInterface& __this, uObject* instance, uString* propertyName) { uObject* __retval; return __this.VTable<IReflection>()->fp_GetPropertyValue(__this, instance, propertyName, &__retval), __retval; }
    static uObject* GetStaticPropertyOrFieldValue(const uInterface& __this, uString* typeName, uString* memberName) { uObject* __retval; return __this.VTable<IReflection>()->fp_GetStaticPropertyOrFieldValue(__this, typeName, memberName, &__retval), __retval; }
    static uObject* Instantiate(const uInterface& __this, uString* typeName, uArray* args) { uObject* __retval; return __this.VTable<IReflection>()->fp_Instantiate(__this, typeName, args, &__retval), __retval; }
    static bool IsSubtype(const uInterface& __this, uObject* obj, uString* typeName) { bool __retval; return __this.VTable<IReflection>()->fp_IsSubtype(__this, obj, typeName, &__retval), __retval; }
    static bool IsType(const uInterface& __this, uObject* obj, uString* typeName) { bool __retval; return __this.VTable<IReflection>()->fp_IsType(__this, obj, typeName, &__retval), __retval; }
    static void RemoveEventHandler(const uInterface& __this, uObject* instance, uString* member, uObject* handlerDelegate) { __this.VTable<IReflection>()->fp_RemoveEventHandler(__this, instance, member, handlerDelegate); }
    static void SetPropertyValue(const uInterface& __this, uObject* instance, uString* propertyName, uObject* value) { __this.VTable<IReflection>()->fp_SetPropertyValue(__this, instance, propertyName, value); }
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
