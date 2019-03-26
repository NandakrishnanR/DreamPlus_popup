// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/DataBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObserver.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct ResourceBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ResourceBinding :340
// {
::g::Fuse::Reactive::DataBinding_type* ResourceBinding_typeof();
void ResourceBinding__ctor_3_fn(ResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key);
void ResourceBinding__New2_fn(::g::Uno::UX::Property* target, uString* key, ResourceBinding** __retval);

struct ResourceBinding : ::g::Fuse::Reactive::DataBinding
{
    void ctor_3(::g::Uno::UX::Property* target, uString* key);
    static ResourceBinding* New2(::g::Uno::UX::Property* target, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
