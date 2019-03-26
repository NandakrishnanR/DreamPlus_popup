// This file was generated based on /usr/local/share/uno/Packages/Uno.Threading/1.9.0/IDispatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Threading{struct IDispatcherExtensions;}}}

namespace g{
namespace Uno{
namespace Threading{

// public static class IDispatcherExtensions :10
// {
uClassType* IDispatcherExtensions_typeof();
void IDispatcherExtensions__Invoke1_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg);

struct IDispatcherExtensions : uObject
{
    template<class T>
    static void Invoke1(uType* __type, uObject* dispatcher, uDelegate* action, T arg) { IDispatcherExtensions__Invoke1_fn(__type, dispatcher, action, uConstrain(__type->U(0), arg)); }
};
// }

}}} // ::g::Uno::Threading
