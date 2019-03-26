// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/Each.uno.
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
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :94
// {
::g::Fuse::Reactive::Instantiator_type* Each_typeof();
void Each__get_Limit1_fn(Each* __this, int32_t* __retval);
void Each__set_Limit1_fn(Each* __this, int32_t* value);
void Each__get_Offset1_fn(Each* __this, int32_t* __retval);
void Each__set_Offset1_fn(Each* __this, int32_t* value);

struct Each : ::g::Fuse::Reactive::Instantiator
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _eachHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _eachHandle() { return Each_typeof()->Init(), _eachHandle_; }

    int32_t Limit1();
    void Limit1(int32_t value);
    int32_t Offset1();
    void Offset1(int32_t value);
};
// }

}}} // ::g::Fuse::Reactive
