// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Runs;}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Runs__Range;}}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct Stack;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{

// public static class Runs :28
// {
uClassType* Runs_typeof();
void Runs__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval);
void Runs__GetVisual_fn(::g::Fuse::Text::SinglyLinkedList* run, ::g::Fuse::Text::SinglyLinkedList** __retval);
void Runs__GetVisual1_fn(::g::Uno::Collections::List* runs, ::g::Uno::Collections::List** __retval);
void Runs__GetVisual2_fn(::g::Uno::Collections::List* lines, ::g::Uno::Collections::List** __retval);
void Runs__IsRightToLeft_fn(int32_t* level, bool* __retval);
void Runs__MergeRange_fn(::g::Uno::Collections::Stack* ranges, Runs__Range* range);
void Runs__TryMergeRangeWithPrevious_fn(::g::Uno::Collections::Stack* ranges, int32_t* runLevel, bool* __retval);

struct Runs : uObject
{
    static ::g::Uno::Collections::List* GetLogical(::g::Fuse::Text::Substring* text);
    static ::g::Fuse::Text::SinglyLinkedList* GetVisual(::g::Fuse::Text::SinglyLinkedList* run);
    static ::g::Uno::Collections::List* GetVisual1(::g::Uno::Collections::List* runs);
    static ::g::Uno::Collections::List* GetVisual2(::g::Uno::Collections::List* lines);
    static bool IsRightToLeft(int32_t level);
    static void MergeRange(::g::Uno::Collections::Stack* ranges, Runs__Range* range);
    static bool TryMergeRangeWithPrevious(::g::Uno::Collections::Stack* ranges, int32_t runLevel);
};
// }

}}}} // ::g::Fuse::Text::Bidirectional
