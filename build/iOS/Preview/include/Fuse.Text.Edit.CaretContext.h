// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Edit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Edit.Caret.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Edit{struct CaretContext;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Text{
namespace Edit{

// public struct CaretContext :25
// {
uStructType* CaretContext_typeof();
void CaretContext__ctor__fn(CaretContext* __this, ::g::Uno::Collections::List* pruns, uString* source);
void CaretContext__Backspace_fn(CaretContext* __this, int32_t* i, uString** __retval);
void CaretContext__Clamp_fn(CaretContext* __this, int32_t* i, int32_t* __retval);
void CaretContext__ClosestCaretOnLine_fn(CaretContext* __this, ::g::Uno::Float2* pos, int32_t* desiredLine, int32_t* def, int32_t* __retval);
void CaretContext__Delete_fn(CaretContext* __this, int32_t* i, uString** __retval);
void CaretContext__DeleteSpan_fn(CaretContext* __this, int32_t* start, int32_t* caret, uString** __retval);
void CaretContext__GetClosest_fn(CaretContext* __this, ::g::Uno::Float2* pos, float* lineHeight, int32_t* __retval);
void CaretContext__GetVisualPosition_fn(CaretContext* __this, int32_t* i, ::g::Uno::Float2* __retval);
void CaretContext__GetVisualRects_fn(CaretContext* __this, int32_t* i1, int32_t* i2, float* lineHeight, ::g::Uno::Collections::List** __retval);
void CaretContext__Insert_fn(CaretContext* __this, char16_t* c, int32_t* i, uString** __retval);
void CaretContext__LeftMost_fn(CaretContext* __this, int32_t* __retval);
void CaretContext__LeftToRight_fn(CaretContext* __this, int32_t* i, bool* __retval);
void CaretContext__LerpClustersLTR_fn(uString* source, int32_t* cluster1, ::g::Uno::Float2* pos1, int32_t* cluster2, ::g::Uno::Float2* pos2, int32_t* lineIndex, int32_t* runIndex, ::g::Uno::Collections::List* result);
void CaretContext__LerpClustersRTL_fn(uString* source, int32_t* cluster1, ::g::Uno::Float2* pos1, int32_t* cluster2, ::g::Uno::Float2* pos2, int32_t* lineIndex, int32_t* runIndex, ::g::Uno::Collections::List* result);
void CaretContext__MoveDown_fn(CaretContext* __this, int32_t* currentIndex, int32_t* __retval);
void CaretContext__MoveLeft_fn(CaretContext* __this, int32_t* i, int32_t* __retval);
void CaretContext__MoveRight_fn(CaretContext* __this, int32_t* i, int32_t* __retval);
void CaretContext__MoveUp_fn(CaretContext* __this, int32_t* currentIndex, int32_t* __retval);
void CaretContext__New1_fn(::g::Uno::Collections::List* pruns, uString* source, CaretContext* __retval);
void CaretContext__PossibleCaretPositions_fn(::g::Uno::Collections::List* lines, uString* source, ::g::Uno::Collections::List** __retval);
void CaretContext__RightMost_fn(CaretContext* __this, int32_t* __retval);
void CaretContext__SquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* __retval);
void CaretContext__StringRangeLength_fn(uString* source, int32_t* cluster1, int32_t* cluster2, int32_t* __retval);
void CaretContext__WeightedSquaredDist_fn(::g::Uno::Float2* p, ::g::Uno::Float2* q, float* yweight, float* __retval);

struct CaretContext
{
    uStrong< ::g::Uno::Collections::List*> _runs;
    uStrong<uString*> _source;
    uStrong< ::g::Uno::Collections::List*> _carets;
    uStrong<uArray*> _runIndices;

    void ctor_(::g::Uno::Collections::List* pruns, uString* source);
    uString* Backspace(int32_t* i);
    int32_t Clamp(int32_t i);
    int32_t ClosestCaretOnLine(::g::Uno::Float2 pos, int32_t desiredLine, int32_t def);
    uString* Delete(int32_t* i);
    uString* DeleteSpan(int32_t start, int32_t* caret);
    int32_t GetClosest(::g::Uno::Float2 pos, float lineHeight);
    ::g::Uno::Float2 GetVisualPosition(int32_t i);
    ::g::Uno::Collections::List* GetVisualRects(int32_t i1, int32_t i2, float lineHeight);
    uString* Insert(char16_t c, int32_t* i);
    int32_t LeftMost();
    bool LeftToRight(int32_t i);
    int32_t MoveDown(int32_t currentIndex);
    int32_t MoveLeft(int32_t i);
    int32_t MoveRight(int32_t i);
    int32_t MoveUp(int32_t currentIndex);
    int32_t RightMost();
    static ::g::Uno::Collections::List* PossibleCaretPositions(::g::Uno::Collections::List* lines, uString* source);
    static int32_t StringRangeLength(uString* source, int32_t cluster1, int32_t cluster2);
};

void CaretContext__LerpClustersLTR(uString* source, int32_t cluster1, ::g::Uno::Float2 pos1, int32_t cluster2, ::g::Uno::Float2 pos2, int32_t lineIndex, int32_t runIndex, ::g::Uno::Collections::List* result);
void CaretContext__LerpClustersRTL(uString* source, int32_t cluster1, ::g::Uno::Float2 pos1, int32_t cluster2, ::g::Uno::Float2 pos2, int32_t lineIndex, int32_t runIndex, ::g::Uno::Collections::List* result);
CaretContext CaretContext__New1(::g::Uno::Collections::List* pruns, uString* source);
float CaretContext__SquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q);
float CaretContext__WeightedSquaredDist(::g::Uno::Float2 p, ::g::Uno::Float2 q, float yweight);
// }

}}}} // ::g::Fuse::Text::Edit
