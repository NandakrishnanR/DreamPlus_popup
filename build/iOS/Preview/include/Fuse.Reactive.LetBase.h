// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/Let.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IObject.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct LetBase;}}}
namespace g{namespace Fuse{namespace Reactive{struct LetObservable;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class LetBase :11
// {
struct LetBase_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Node__ISiblingDataProvider interface7;
    ::g::Fuse::IObject interface8;
    ::g::Uno::UX::IPropertyListener interface9;
    void(*fp_OnRootedValue)(::g::Fuse::Reactive::LetBase*);
};

LetBase_type* LetBase_typeof();
void LetBase__ctor_3_fn(LetBase* __this);
void LetBase__get_ContextValue_fn(LetBase* __this, uObject** __retval);
void LetBase__DataChanged_fn(LetBase* __this, uObject* newValue);
void LetBase__FuseIObjectContainsKey_fn(LetBase* __this, uString* key, bool* __retval);
void LetBase__FuseIObjectget_Item_fn(LetBase* __this, uString* key, uObject** __retval);
void LetBase__FuseIObjectget_Keys_fn(LetBase* __this, uArray** __retval);
void LetBase__FuseNodeISiblingDataProviderTryGetDataProvider_fn(LetBase* __this, int32_t* type, uObject** provider, int32_t* __retval);
void LetBase__get_HasValue_fn(LetBase* __this, bool* __retval);
void LetBase__get_ObjectValue_fn(LetBase* __this, uObject** __retval);
void LetBase__OnRooted_fn(LetBase* __this);
void LetBase__OnRootedValue_fn(LetBase* __this);
void LetBase__OnUnrooted_fn(LetBase* __this);
void LetBase__ResetObjectValue_fn(LetBase* __this);
void LetBase__SetObjectValue_fn(LetBase* __this, uObject* value, uObject* origin);
void LetBase__UnoUXIPropertyListenerOnPropertyChanged_fn(LetBase* __this, ::g::Uno::UX::PropertyObject* source, ::g::Uno::UX::Selector* selector);
void LetBase__UpdateValue_fn(LetBase* __this, uObject* origin);

struct LetBase : ::g::Fuse::Behavior
{
    static ::g::Uno::UX::Selector ValueName_;
    static ::g::Uno::UX::Selector& ValueName() { return LetBase_typeof()->Init(), ValueName_; }
    bool _hasValue;
    uStrong<uObject*> _value;
    uStrong< ::g::Fuse::Reactive::LetObservable*> _observable;
    bool _updated;

    void ctor_3();
    uObject* ContextValue();
    void DataChanged(uObject* newValue);
    bool HasValue();
    uObject* ObjectValue();
    void OnRootedValue() { (((LetBase_type*)__type)->fp_OnRootedValue)(this); }
    void ResetObjectValue();
    void SetObjectValue(uObject* value, uObject* origin);
    void UpdateValue(uObject* origin);
    static void OnRootedValue(LetBase* __this) { LetBase__OnRootedValue_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
