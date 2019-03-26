// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.9.0/VectorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Array;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal class Array :24
// {
struct Array_type : uType
{
    ::g::Fuse::IArray interface0;
};

Array_type* Array_typeof();
void Array__ctor__fn(Array* __this, uArray* args);
void Array__FuseIArrayget_Item_fn(Array* __this, int32_t* index, uObject** __retval);
void Array__FuseIArrayget_Length_fn(Array* __this, int32_t* __retval);
void Array__New1_fn(uArray* args, Array** __retval);
void Array__ToString_fn(Array* __this, uString** __retval);

struct Array : uObject
{
    uStrong<uArray*> _items;

    void ctor_(uArray* args);
    static Array* New1(uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
