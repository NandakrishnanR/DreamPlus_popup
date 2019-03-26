// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public abstract interface ITypeMap :12
// {
uInterfaceType* ITypeMap_typeof();

struct ITypeMap
{
    void(*fp_ResolveType)(uObject*, uString*, uType**);
    static uType* ResolveType(const uInterface& __this, uString* typeName) { uType* __retval; return __this.VTable<ITypeMap>()->fp_ResolveType(__this, typeName, &__retval), __retval; }
};
// }

}}}} // ::g::Outracks::Simulator::Client
