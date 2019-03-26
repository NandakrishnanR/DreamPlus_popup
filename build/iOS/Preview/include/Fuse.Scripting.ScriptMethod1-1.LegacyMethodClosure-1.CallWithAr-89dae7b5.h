// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.9.0/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptMethod<T>.LegacyMethodClosure<T>.CallWithArgumentsClosure :156
// {
uType* ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure_typeof();
void ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure__ctor__fn(ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure* __this, uDelegate* action, ::g::Fuse::Scripting::Context* context, void* obj, uArray* args);
void ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure__New1_fn(uType* __type, uDelegate* action, ::g::Fuse::Scripting::Context* context, void* obj, uArray* args, ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure** __retval);
void ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure__Run_fn(ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure* __this);

struct ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uTField _obj() { return __type->Field(this, 2); }
    uStrong<uArray*> _args;

    template<class T>
    void ctor_(uDelegate* action, ::g::Fuse::Scripting::Context* context, T obj, uArray* args) { ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure__ctor__fn(this, action, context, uConstrain(__type->T(1), obj), args); }
    void Run();
    template<class T>
    static ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure* New1(uType* __type, uDelegate* action, ::g::Fuse::Scripting::Context* context, T obj, uArray* args) { ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure* __retval; return ScriptMethod1__LegacyMethodClosure__CallWithArgumentsClosure__New1_fn(__type, action, context, uConstrain(__type->T(1), obj), args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
