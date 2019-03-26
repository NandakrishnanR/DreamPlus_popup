// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Runs__Range;}}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{

// private sealed class Runs.Range :153
// {
uType* Runs__Range_typeof();
void Runs__Range__ctor__fn(Runs__Range* __this, int32_t* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right);
void Runs__Range__New1_fn(int32_t* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right, Runs__Range** __retval);

struct Runs__Range : uObject
{
    int32_t Level;
    uStrong< ::g::Fuse::Text::SinglyLinkedList*> Left;
    uStrong< ::g::Fuse::Text::SinglyLinkedList*> Right;

    void ctor_(int32_t level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right);
    static Runs__Range* New1(int32_t level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right);
};
// }

}}}} // ::g::Fuse::Text::Bidirectional
