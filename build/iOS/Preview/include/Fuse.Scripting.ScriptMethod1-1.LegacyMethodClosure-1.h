// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.9.0/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1__LegacyMethodClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptMethod<T>.LegacyMethodClosure<T> :137
// {
uType* ScriptMethod1__LegacyMethodClosure_typeof();
void ScriptMethod1__LegacyMethodClosure__ctor__fn(ScriptMethod1__LegacyMethodClosure* __this, uDelegate* action, int32_t* thread);
void ScriptMethod1__LegacyMethodClosure__New1_fn(uType* __type, uDelegate* action, int32_t* thread, ScriptMethod1__LegacyMethodClosure** __retval);
void ScriptMethod1__LegacyMethodClosure__Run_fn(ScriptMethod1__LegacyMethodClosure* __this, ::g::Fuse::Scripting::Context* c, void* obj, uArray* args, uObject** __retval);

struct ScriptMethod1__LegacyMethodClosure : uObject
{
    uStrong<uDelegate*> _action;
    int32_t _thread;

    void ctor_(uDelegate* action, int32_t thread);
    template<class T>
    uObject* Run(::g::Fuse::Scripting::Context* c, T obj, uArray* args) { uObject* __retval; return ScriptMethod1__LegacyMethodClosure__Run_fn(this, c, uConstrain(__type->T(1), obj), args, &__retval), __retval; }
    static ScriptMethod1__LegacyMethodClosure* New1(uType* __type, uDelegate* action, int32_t thread);
};
// }

}}} // ::g::Fuse::Scripting
