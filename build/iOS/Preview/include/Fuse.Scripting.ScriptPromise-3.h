// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.9.0/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMethod.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptPromise;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptPromise<TSelf, TResult, TJSResult> :294
// {
::g::Fuse::Scripting::ScriptMethod_type* ScriptPromise_typeof();
void ScriptPromise__ctor_2_fn(ScriptPromise* __this, uString* name, int32_t* thread, uDelegate* futureFactory, uDelegate* resultConverter);
void ScriptPromise__Call_fn(ScriptPromise* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval);
void ScriptPromise__InvokeFutureFactory_fn(ScriptPromise* __this, ::g::Fuse::Scripting::Context* context, void* self, uArray* args, ::g::Uno::Threading::Future1** __retval);
void ScriptPromise__New1_fn(uType* __type, uString* name, int32_t* thread, uDelegate* futureFactory, uDelegate* resultConverter, ScriptPromise** __retval);

struct ScriptPromise : ::g::Fuse::Scripting::ScriptMethod
{
    int32_t Thread;
    uStrong<uDelegate*> _futureFactory;
    uStrong<uDelegate*> _resultConverter;

    void ctor_2(uString* name, int32_t thread, uDelegate* futureFactory, uDelegate* resultConverter);
    template<class TSelf>
    ::g::Uno::Threading::Future1* InvokeFutureFactory(::g::Fuse::Scripting::Context* context, TSelf self, uArray* args) { ::g::Uno::Threading::Future1* __retval; return ScriptPromise__InvokeFutureFactory_fn(this, context, uConstrain(__type->T(0), self), args, &__retval), __retval; }
    static ScriptPromise* New1(uType* __type, uString* name, int32_t thread, uDelegate* futureFactory, uDelegate* resultConverter);
};
// }

}}} // ::g::Fuse::Scripting
