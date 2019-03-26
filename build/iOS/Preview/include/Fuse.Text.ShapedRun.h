// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/ShapedRun.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.PositionedGlyph.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class ShapedRun :7
// {
struct ShapedRun_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

ShapedRun_type* ShapedRun_typeof();
void ShapedRun__ctor__fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* run, uArray* parent);
void ShapedRun__ctor_1_fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, int32_t* start, int32_t* count, int32_t* clusterOffset, ::g::Fuse::Text::Implementation::BitArray* lineBreakClusters, int32_t* lineBreakClusterOffset);
void ShapedRun__CacheLineBreaks_fn(ShapedRun* __this);
void ShapedRun__CanLineBreak_fn(ShapedRun* __this, int32_t* cluster, bool* __retval);
void ShapedRun__GetEnumerator_fn(ShapedRun* __this, uObject** __retval);
void ShapedRun__get_Item_fn(ShapedRun* __this, int32_t* index, ::g::Fuse::Text::PositionedGlyph* __retval);
void ShapedRun__Measure_fn(ShapedRun* __this, ::g::Uno::Float2* __retval);
void ShapedRun__New1_fn(::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, ShapedRun** __retval);
void ShapedRun__New2_fn(::g::Fuse::Text::Bidirectional::Run* run, uArray* parent, int32_t* start, int32_t* count, int32_t* clusterOffset, ::g::Fuse::Text::Implementation::BitArray* lineBreakClusters, int32_t* lineBreakClusterOffset, ShapedRun** __retval);
void ShapedRun__get_Run_fn(ShapedRun* __this, ::g::Fuse::Text::Bidirectional::Run* __retval);
void ShapedRun__SubShapedRun_fn(ShapedRun* __this, int32_t* start, ShapedRun** __retval);
void ShapedRun__SubShapedRun1_fn(ShapedRun* __this, int32_t* start, int32_t* count, ShapedRun** __retval);

struct ShapedRun : uObject
{
    ::g::Fuse::Text::Bidirectional::Run _run;
    uStrong<uArray*> _parent;
    int32_t _start;
    int32_t Count;
    int32_t _clusterOffset;
    uStrong< ::g::Fuse::Text::Implementation::BitArray*> _lineBreakClusters;
    int32_t _lineBreakClusterOffset;
    ::g::Uno::Float2 _measureCache;

    void ctor_(::g::Fuse::Text::Bidirectional::Run run, uArray* parent);
    void ctor_1(::g::Fuse::Text::Bidirectional::Run run, uArray* parent, int32_t start, int32_t count, int32_t clusterOffset, ::g::Fuse::Text::Implementation::BitArray* lineBreakClusters, int32_t lineBreakClusterOffset);
    void CacheLineBreaks();
    bool CanLineBreak(int32_t cluster);
    uObject* GetEnumerator();
    ::g::Fuse::Text::PositionedGlyph Item(int32_t index);
    ::g::Uno::Float2 Measure();
    ::g::Fuse::Text::Bidirectional::Run Run();
    ShapedRun* SubShapedRun(int32_t start);
    ShapedRun* SubShapedRun1(int32_t start, int32_t count);
    static ShapedRun* New1(::g::Fuse::Text::Bidirectional::Run run, uArray* parent);
    static ShapedRun* New2(::g::Fuse::Text::Bidirectional::Run run, uArray* parent, int32_t start, int32_t count, int32_t clusterOffset, ::g::Fuse::Text::Implementation::BitArray* lineBreakClusters, int32_t lineBreakClusterOffset);
};
// }

}}} // ::g::Fuse::Text
