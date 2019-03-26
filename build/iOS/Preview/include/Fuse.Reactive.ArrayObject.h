// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/Object.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.IObject.h>
#include <Fuse.Reactive.Array.h>
namespace g{namespace Fuse{namespace Reactive{struct ArrayObject;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ArrayObject :24
// {
struct ArrayObject_type : ::g::Fuse::Reactive::Array_type
{
    ::g::Fuse::IObject interface1;
};

ArrayObject_type* ArrayObject_typeof();
void ArrayObject__ctor_1_fn(ArrayObject* __this, uArray* args);
void ArrayObject__FuseIObjectContainsKey_fn(ArrayObject* __this, uString* key, bool* __retval);
void ArrayObject__FuseIObjectget_Item_fn(ArrayObject* __this, uString* key, uObject** __retval);
void ArrayObject__FuseIObjectget_Keys_fn(ArrayObject* __this, uArray** __retval);
void ArrayObject__New2_fn(uArray* args, ArrayObject** __retval);

struct ArrayObject : ::g::Fuse::Reactive::Array
{
    uStrong< ::g::Uno::Collections::Dictionary*> _dict;

    void ctor_1(uArray* args);
    static ArrayObject* New2(uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
