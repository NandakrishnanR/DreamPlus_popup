// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/Instance.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.ItemsWindowList-1.IListener.h>
#include <Fuse.Reactive.WindowItem.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Instance;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Instance :12
// {
::g::Fuse::Reactive::Instantiator_type* Instance_typeof();
void Instance__ctor_5_fn(Instance* __this);
void Instance__get_IsEnabled_fn(Instance* __this, bool* __retval);
void Instance__set_IsEnabled_fn(Instance* __this, bool* value);
void Instance__get_Item_fn(Instance* __this, uObject** __retval);
void Instance__set_Item_fn(Instance* __this, uObject* value);
void Instance__New4_fn(Instance** __retval);
void Instance__UpdateItems_fn(Instance* __this);

struct Instance : ::g::Fuse::Reactive::Instantiator
{
    uStrong<uObject*> _item;
    bool _isEnabled;

    void ctor_5();
    bool IsEnabled();
    void IsEnabled(bool value);
    uObject* Item();
    void Item(uObject* value);
    void UpdateItems();
    static Instance* New4();
};
// }

}}} // ::g::Fuse::Reactive
