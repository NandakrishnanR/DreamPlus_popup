// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/NameValuePair.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct NameValuePair;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NameValuePair :6
// {
::g::Fuse::Reactive::BinaryOperator_type* NameValuePair_typeof();
void NameValuePair__ctor_4_fn(NameValuePair* __this, ::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value);
void NameValuePair__New1_fn(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value, NameValuePair** __retval);
void NameValuePair__TryCompute1_fn(NameValuePair* __this, uObject* name, uObject* value, uObject** result, bool* __retval);

struct NameValuePair : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value);
    static NameValuePair* New1(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
