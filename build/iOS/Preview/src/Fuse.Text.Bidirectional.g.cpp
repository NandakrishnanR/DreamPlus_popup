// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Text.Bidirectional.Implementation.UBidiRuns.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Bidirectional.Runs.h>
#include <Fuse.Text.Bidirectional.Runs.Range.h>
#include <Fuse.Text.ShapedRun.h>
#include <Fuse.Text.SinglyLinkedList-1.h>
#include <Fuse.Text.Substring.h>
#include <Fuse.Text.TextDirection.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Stack-1.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno
// ---------------------------------------------------------------

// private sealed class Runs.Range :153
// {
static void Runs__Range_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Runs__Range, Level), 0,
        ::g::Fuse::Text::SinglyLinkedList_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), offsetof(Runs__Range, Left), 0,
        ::g::Fuse::Text::SinglyLinkedList_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), offsetof(Runs__Range, Right), 0);
}

uType* Runs__Range_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Runs__Range);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Text.Bidirectional.Runs.Range", options);
    type->fp_build_ = Runs__Range_build;
    return type;
}

// public Range(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) :159
void Runs__Range__ctor__fn(Runs__Range* __this, int32_t* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right)
{
    __this->ctor_(*level, left, right);
}

// public Range New(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) :159
void Runs__Range__New1_fn(int32_t* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right, Runs__Range** __retval)
{
    *__retval = Runs__Range::New1(*level, left, right);
}

// public Range(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) [instance] :159
void Runs__Range::ctor_(int32_t level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right)
{
    Level = level;
    Left = left;
    Right = right;
}

// public Range New(int level, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> left, Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> right) [static] :159
Runs__Range* Runs__Range::New1(int32_t level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right)
{
    Runs__Range* obj1 = (Runs__Range*)uNew(Runs__Range_typeof());
    obj1->ctor_(level, left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno
// ---------------------------------------------------------------

// public struct Run :6
// {
static void Run_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Text::Substring_typeof(), offsetof(Run, String), 0,
        ::g::Uno::Int_typeof(), offsetof(Run, Level), 0);
    type->Reflection.SetFields(2,
        new uField("Level", 1),
        new uField("String", 0));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Direction", NULL, (void*)Run__get_Direction_fn, 0, false, ::g::Fuse::Text::TextDirection_typeof(), 0),
        new uFunction("get_IsLeftToRight", NULL, (void*)Run__get_IsLeftToRight_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsRightToLeft", NULL, (void*)Run__get_IsRightToLeft_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Run__New1_fn, 0, true, type, 2, ::g::Fuse::Text::Substring_typeof(), ::g::Uno::Int_typeof()));
}

uStructType* Run_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Run);
    options.ValueSize = sizeof(Run);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Text.Bidirectional.Run", options);
    type->fp_build_ = Run_build;
    return type;
}

// public Run(Fuse.Text.Substring str, int level) :11
void Run__ctor__fn(Run* __this, ::g::Fuse::Text::Substring* str, int32_t* level)
{
    __this->ctor_(str, *level);
}

// public Fuse.Text.TextDirection get_Direction() :19
void Run__get_Direction_fn(Run* __this, int32_t* __retval)
{
    *__retval = __this->Direction();
}

// public bool get_IsLeftToRight() :17
void Run__get_IsLeftToRight_fn(Run* __this, bool* __retval)
{
    *__retval = __this->IsLeftToRight();
}

// public bool get_IsRightToLeft() :18
void Run__get_IsRightToLeft_fn(Run* __this, bool* __retval)
{
    *__retval = __this->IsRightToLeft();
}

// internal int get_LogicalEnd() :22
void Run__get_LogicalEnd_fn(Run* __this, int32_t* __retval)
{
    *__retval = __this->LogicalEnd();
}

// internal int get_LogicalStart() :21
void Run__get_LogicalStart_fn(Run* __this, int32_t* __retval)
{
    *__retval = __this->LogicalStart();
}

// public Run New(Fuse.Text.Substring str, int level) :11
void Run__New1_fn(::g::Fuse::Text::Substring* str, int32_t* level, Run* __retval)
{
    *__retval = Run__New1(str, *level);
}

// internal int get_VisualLeft() :24
void Run__get_VisualLeft_fn(Run* __this, int32_t* __retval)
{
    *__retval = __this->VisualLeft();
}

// internal int get_VisualRight() :25
void Run__get_VisualRight_fn(Run* __this, int32_t* __retval)
{
    *__retval = __this->VisualRight();
}

// public Run(Fuse.Text.Substring str, int level) [instance] :11
void Run::ctor_(::g::Fuse::Text::Substring* str, int32_t level)
{
    String = str;
    Level = level;
}

// public Fuse.Text.TextDirection get_Direction() [instance] :19
int32_t Run::Direction()
{
    return IsLeftToRight() ? 0 : 1;
}

// public bool get_IsLeftToRight() [instance] :17
bool Run::IsLeftToRight()
{
    return (Level % 2) == 0;
}

// public bool get_IsRightToLeft() [instance] :18
bool Run::IsRightToLeft()
{
    return (Level % 2) != 0;
}

// internal int get_LogicalEnd() [instance] :22
int32_t Run::LogicalEnd()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_LogicalEnd()");
    return uPtr(String)->_start + uPtr(String)->Length;
}

// internal int get_LogicalStart() [instance] :21
int32_t Run::LogicalStart()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_LogicalStart()");
    return uPtr(String)->_start;
}

// internal int get_VisualLeft() [instance] :24
int32_t Run::VisualLeft()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_VisualLeft()");
    return IsLeftToRight() ? LogicalStart() : LogicalEnd();
}

// internal int get_VisualRight() [instance] :25
int32_t Run::VisualRight()
{
    uStackFrame __("Fuse.Text.Bidirectional.Run", "get_VisualRight()");
    return IsLeftToRight() ? LogicalEnd() : LogicalStart();
}

// public Run New(Fuse.Text.Substring str, int level) [static] :11
Run Run__New1(::g::Fuse::Text::Substring* str, int32_t level)
{
    Run obj1;
    obj1.ctor_(str, level);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno
// ---------------------------------------------------------------

// public static class Runs :28
// {
static void Runs_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->Reflection.SetFunctions(3,
        new uFunction("GetLogical", NULL, (void*)Runs__GetLogical_fn, 0, true, ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL), 1, ::g::Fuse::Text::Substring_typeof()),
        new uFunction("GetVisual", NULL, (void*)Runs__GetVisual1_fn, 0, true, ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), 1, ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL)),
        new uFunction("GetVisual", NULL, (void*)Runs__GetVisual2_fn, 0, true, ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL), 1, ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL)));
}

uClassType* Runs_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Bidirectional.Runs", options);
    type->fp_build_ = Runs_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) :30
void Runs__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = Runs::GetLogical(text);
}

// private static Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> GetVisual(Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> run) :59
void Runs__GetVisual_fn(::g::Fuse::Text::SinglyLinkedList* run, ::g::Fuse::Text::SinglyLinkedList** __retval)
{
    *__retval = Runs::GetVisual(run);
}

// public static Uno.Collections.List<Fuse.Text.ShapedRun> GetVisual(Uno.Collections.List<Fuse.Text.ShapedRun> runs) :39
void Runs__GetVisual1_fn(::g::Uno::Collections::List* runs, ::g::Uno::Collections::List** __retval)
{
    *__retval = Runs::GetVisual1(runs);
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> GetVisual(Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) :49
void Runs__GetVisual2_fn(::g::Uno::Collections::List* lines, ::g::Uno::Collections::List** __retval)
{
    *__retval = Runs::GetVisual2(lines);
}

// private static bool IsRightToLeft(int level) :111
void Runs__IsRightToLeft_fn(int32_t* level, bool* __retval)
{
    *__retval = Runs::IsRightToLeft(*level);
}

// private static void MergeRange(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, Fuse.Text.Bidirectional.Runs.Range range) :116
void Runs__MergeRange_fn(::g::Uno::Collections::Stack* ranges, Runs__Range* range)
{
    Runs::MergeRange(ranges, range);
}

// private static bool TryMergeRangeWithPrevious(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, int runLevel) :136
void Runs__TryMergeRangeWithPrevious_fn(::g::Uno::Collections::Stack* ranges, int32_t* runLevel, bool* __retval)
{
    *__retval = Runs::TryMergeRangeWithPrevious(ranges, *runLevel);
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) [static] :30
::g::Uno::Collections::List* Runs::GetLogical(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetLogical(Fuse.Text.Substring)");
    return ::g::Fuse::Text::Bidirectional::Implementation::UBidiRuns::GetLogical(text);
}

// private static Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> GetVisual(Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun> run) [static] :59
::g::Fuse::Text::SinglyLinkedList* Runs::GetVisual(::g::Fuse::Text::SinglyLinkedList* run)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetVisual(Fuse.Text.SinglyLinkedList<Fuse.Text.ShapedRun>)");
    int32_t assert4;
    ::g::Fuse::Text::ShapedRun* ret6;
    Runs__Range* ret7;
    Runs__Range* ret8;
    Runs__Range* ret9;
    Runs__Range* ret10;

    if (run == NULL)
        return NULL;

    ::g::Uno::Collections::Stack* ranges = (::g::Uno::Collections::Stack*)::g::Uno::Collections::Stack::New1(::g::Uno::Collections::Stack_typeof()->MakeType(Runs__Range_typeof(), NULL));

    while (run != NULL)
    {
        int32_t runLevel = uPtr((::g::Fuse::Text::SinglyLinkedList__get_Value_fn(uPtr(run), &ret6), ret6))->Run().Level;
        ::g::Fuse::Text::SinglyLinkedList* nextRun = (::g::Fuse::Text::SinglyLinkedList*)run->Next;

        while (Runs::TryMergeRangeWithPrevious(ranges, runLevel))
            ;

        if ((uPtr(ranges)->Count() >= 1) && (uPtr((::g::Uno::Collections::Stack__Peek_fn(uPtr(ranges), &ret7), ret7))->Level >= runLevel))
        {
            Runs__Range* range = (::g::Uno::Collections::Stack__Peek_fn(uPtr(ranges), &ret8), ret8);

            if (Runs::IsRightToLeft(runLevel))
            {
                uPtr(run)->Next = uPtr(range)->Left;
                range->Left = run;
            }
            else
            {
                uPtr(uPtr(range)->Right)->Next = run;
                range->Right = run;
            }

            uPtr(range)->Level = runLevel;
        }
        else
            ::g::Uno::Collections::Stack__Push_fn(uPtr(ranges), Runs__Range::New1(runLevel, run, run));

        run = nextRun;
    }

    assert4 = ranges->Count();
    ::g::Uno::Diagnostics::Debug::Assert(assert4 >= 1, uString::Const("ranges.Count >= 1"), uString::Const("/usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno"), 98, uArray::Init<uObject*>(uObject_typeof()->Array(), 2, uBox<int32_t>(::g::Uno::Int_typeof(), assert4), uBox<int32_t>(::g::Uno::Int_typeof(), 1)));

    while (ranges->Count() >= 2)
    {
        Runs__Range* range1 = (::g::Uno::Collections::Stack__Pop_fn(uPtr(ranges), &ret9), ret9);
        Runs::MergeRange(ranges, range1);
    }

    Runs__Range* resultRange = (::g::Uno::Collections::Stack__Pop_fn(ranges, &ret10), ret10);
    uPtr(uPtr(resultRange)->Right)->Next = NULL;
    return resultRange->Left;
}

// public static Uno.Collections.List<Fuse.Text.ShapedRun> GetVisual(Uno.Collections.List<Fuse.Text.ShapedRun> runs) [static] :39
::g::Uno::Collections::List* Runs::GetVisual1(::g::Uno::Collections::List* runs)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetVisual(Uno.Collections.List<Fuse.Text.ShapedRun>)");
    int32_t assert1;
    int32_t assert2;
    ::g::Fuse::Text::SinglyLinkedList* resultLinkedList = Runs::GetVisual((::g::Fuse::Text::SinglyLinkedList*)::g::Fuse::Text::SinglyLinkedList::FromEnumerable(::g::Fuse::Text::SinglyLinkedList_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), (uObject*)runs));
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL));

    if (resultLinkedList != NULL)
        uPtr(result)->AddRange((uObject*)resultLinkedList);

    assert1 = result->Count();
    assert2 = uPtr(runs)->Count();
    ::g::Uno::Diagnostics::Debug::Assert(assert1 == assert2, uString::Const("result.Count == runs.Count"), uString::Const("/usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno"), 45, uArray::Init<uObject*>(uObject_typeof()->Array(), 2, uBox<int32_t>(::g::Uno::Int_typeof(), assert1), uBox<int32_t>(::g::Uno::Int_typeof(), assert2)));
    return result;
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> GetVisual(Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> lines) [static] :49
::g::Uno::Collections::List* Runs::GetVisual2(::g::Uno::Collections::List* lines)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "GetVisual(Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > ret11;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL));
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::List*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(lines), &ret11), ret11);

    {
        try
        {
            {
                while (enum3.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL)))
                {
                    ::g::Uno::Collections::List* line = enum3.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL));
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), Runs::GetVisual1(line));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum3.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum3.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL));
        }
        __after_finally_0:;
    }

    return result;
}

// private static bool IsRightToLeft(int level) [static] :111
bool Runs::IsRightToLeft(int32_t level)
{
    return (level % 2) != 0;
}

// private static void MergeRange(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, Fuse.Text.Bidirectional.Runs.Range range) [static] :116
void Runs::MergeRange(::g::Uno::Collections::Stack* ranges, Runs__Range* range)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "MergeRange(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range>,Fuse.Text.Bidirectional.Runs.Range)");
    int32_t assert5;
    Runs__Range* ret12;
    assert5 = uPtr(ranges)->Count();
    ::g::Uno::Diagnostics::Debug::Assert(assert5 >= 1, uString::Const("ranges.Count >= 1"), uString::Const("/usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno"), 118, uArray::Init<uObject*>(uObject_typeof()->Array(), 2, uBox<int32_t>(::g::Uno::Int_typeof(), assert5), uBox<int32_t>(::g::Uno::Int_typeof(), 1)));
    Runs__Range* previous = (::g::Uno::Collections::Stack__Peek_fn(ranges, &ret12), ret12);
    ::g::Uno::Diagnostics::Debug::Assert(uPtr(previous)->Level < uPtr(range)->Level, uString::Const("previous.Level < range.Level"), uString::Const("/usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno"), 122, uArray::Init<uObject*>(uObject_typeof()->Array(), 2, uBox<int32_t>(::g::Uno::Int_typeof(), uPtr(previous)->Level), uBox<int32_t>(::g::Uno::Int_typeof(), uPtr(range)->Level)));

    if (Runs::IsRightToLeft(previous->Level))
    {
        uPtr(uPtr(range)->Right)->Next = uPtr(previous)->Left;
        previous->Left = range->Left;
    }
    else
    {
        uPtr(uPtr(previous)->Right)->Next = uPtr(range)->Left;
        previous->Right = range->Right;
    }
}

// private static bool TryMergeRangeWithPrevious(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range> ranges, int runLevel) [static] :136
bool Runs::TryMergeRangeWithPrevious(::g::Uno::Collections::Stack* ranges, int32_t runLevel)
{
    uStackFrame __("Fuse.Text.Bidirectional.Runs", "TryMergeRangeWithPrevious(Uno.Collections.Stack<Fuse.Text.Bidirectional.Runs.Range>,int)");
    Runs__Range* ret13;
    Runs__Range* ret14;
    Runs__Range* ret15;

    if ((uPtr(ranges)->Count() >= 2) && (uPtr((::g::Uno::Collections::Stack__Peek_fn(uPtr(ranges), &ret13), ret13))->Level > runLevel))
    {
        Runs__Range* range = (::g::Uno::Collections::Stack__Pop_fn(uPtr(ranges), &ret14), ret14);

        if (uPtr((::g::Uno::Collections::Stack__Peek_fn(ranges, &ret15), ret15))->Level >= runLevel)
        {
            Runs::MergeRange(ranges, range);
            return true;
        }

        ::g::Uno::Collections::Stack__Push_fn(ranges, range);
    }

    return false;
}
// }

}}}} // ::g::Fuse::Text::Bidirectional
