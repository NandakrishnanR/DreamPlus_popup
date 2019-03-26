// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.9.0/JSCallback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__FuncClosure2;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.FuncClosure<TArg, TArg1, TResult> :132
// {
uType* JSCallback__FuncClosure2_typeof();
void JSCallback__FuncClosure2__ctor__fn(JSCallback__FuncClosure2* __this, uDelegate* method);
void JSCallback__FuncClosure2__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure2** __retval);
void JSCallback__FuncClosure2__Run_fn(JSCallback__FuncClosure2* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct JSCallback__FuncClosure2 : uObject
{
    uStrong<uDelegate*> _method;

    void ctor_(uDelegate* method);
    uObject* Run(::g::Fuse::Scripting::Context* context, uArray* args);
    static JSCallback__FuncClosure2* New1(uType* __type, uDelegate* method);
};
// }

}}} // ::g::Fuse::Scripting
