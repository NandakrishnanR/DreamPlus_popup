// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/Let.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IObject.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.LetBase.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct Let;}}}
namespace g{namespace Fuse{namespace Reactive{struct NodeExpressionBinding;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Let :261
// {
struct Let_type : ::g::Fuse::Reactive::LetBase_type
{
    ::g::Fuse::Reactive::IListener interface10;
};

Let_type* Let_typeof();
void Let__ctor_4_fn(Let* __this);
void Let__CleanupExpression_fn(Let* __this);
void Let__get_Expression_fn(Let* __this, uObject** __retval);
void Let__set_Expression_fn(Let* __this, uObject* value);
void Let__FuseReactiveIListenerOnLostData_fn(Let* __this, uObject* source);
void Let__FuseReactiveIListenerOnNewData_fn(Let* __this, uObject* source, uObject* value);
void Let__New2_fn(Let** __retval);
void Let__OnRootedValue_fn(Let* __this);
void Let__OnUnrooted_fn(Let* __this);
void Let__SetValue_fn(Let* __this, uObject* value, uObject* origin);
void Let__SubscribeExpression_fn(Let* __this);
void Let__get_Value_fn(Let* __this, uObject** __retval);
void Let__set_Value_fn(Let* __this, uObject* value);

struct Let : ::g::Fuse::Reactive::LetBase
{
    uStrong<uObject*> _expr;
    uStrong< ::g::Fuse::Reactive::NodeExpressionBinding*> _exprSub;

    void ctor_4();
    void CleanupExpression();
    uObject* Expression();
    void Expression(uObject* value);
    void SetValue(uObject* value, uObject* origin);
    void SubscribeExpression();
    uObject* Value();
    void Value(uObject* value);
    static Let* New2();
};
// }

}}} // ::g::Fuse::Reactive
