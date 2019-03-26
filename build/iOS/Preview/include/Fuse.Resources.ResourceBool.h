// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/ResourceSetter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Resources.ResourceSetter-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceBool;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ResourceBool :70
// {
::g::Fuse::Node_type* ResourceBool_typeof();
void ResourceBool__ctor_4_fn(ResourceBool* __this);
void ResourceBool__New2_fn(ResourceBool** __retval);

struct ResourceBool : ::g::Fuse::Resources::ResourceSetter
{
    void ctor_4();
    static ResourceBool* New2();
};
// }

}}} // ::g::Fuse::Resources
