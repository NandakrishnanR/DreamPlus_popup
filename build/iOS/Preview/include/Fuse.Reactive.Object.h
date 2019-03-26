// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Object.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.SimpleVarArgFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Object :16
// {
::g::Fuse::Reactive::SimpleVarArgFunction_type* Object_typeof();
void Object__ctor_3_fn(Object* __this);
void Object__New1_fn(Object** __retval);
void Object__OnNewArguments_fn(Object* __this, uArray* args, uObject* listener);

struct Object : ::g::Fuse::Reactive::SimpleVarArgFunction
{
    void ctor_3();
    static Object* New1();
};
// }

}}} // ::g::Fuse::Reactive
