// This file was generated based on /usr/local/share/uno/Packages/Fuse.Designer/1.9.0/Attributes.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct ComponentOfAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class ComponentOfAttribute :93
// {
uType* ComponentOfAttribute_typeof();
void ComponentOfAttribute__ctor_1_fn(ComponentOfAttribute* __this, uString* entityClass);
void ComponentOfAttribute__New1_fn(uString* entityClass, ComponentOfAttribute** __retval);

struct ComponentOfAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> EntityClass;

    void ctor_1(uString* entityClass);
    static ComponentOfAttribute* New1(uString* entityClass);
};
// }

}}} // ::g::Fuse::Designer
