// This file was generated based on /usr/local/share/uno/Packages/Fuse.Designer/1.9.0/Attributes.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct GroupAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class GroupAttribute :44
// {
uType* GroupAttribute_typeof();
void GroupAttribute__ctor_1_fn(GroupAttribute* __this, uString* name, int32_t* priority);
void GroupAttribute__New1_fn(uString* name, int32_t* priority, GroupAttribute** __retval);

struct GroupAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> Name;
    int32_t Priority;

    void ctor_1(uString* name, int32_t priority);
    static GroupAttribute* New1(uString* name, int32_t priority);
};
// }

}}} // ::g::Fuse::Designer
