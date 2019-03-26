// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/TextControls/FallbackTextEdit/LineCacheLine.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCacheLine;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WrappedLine;}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class LineCacheLine :9
// {
uType* LineCacheLine_typeof();
void LineCacheLine__ctor__fn(LineCacheLine* __this, uString* text, uObject* transform);
void LineCacheLine__Backspace_fn(LineCacheLine* __this, int32_t* p, int32_t* __retval);
void LineCacheLine__BoundsToPos_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t* textAlignment, float* boundsWidth, ::g::Uno::Float2* p, int32_t* __retval);
void LineCacheLine__BoundsToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Float2* p, ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine** __retval);
void LineCacheLine__Delete_fn(LineCacheLine* __this, int32_t* p);
void LineCacheLine__End_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t* p, int32_t* __retval);
void LineCacheLine__GetTotalHeight_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, float* __retval);
void LineCacheLine__GetWrappedLines_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, uArray** __retval);
void LineCacheLine__Home_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t* p, int32_t* __retval);
void LineCacheLine__InsertChar_fn(LineCacheLine* __this, int32_t* p, char16_t* c);
void LineCacheLine__Invalidate_fn(LineCacheLine* __this);
void LineCacheLine__New1_fn(uString* text, uObject* transform, LineCacheLine** __retval);
void LineCacheLine__PosToBounds_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t* textAlignment, float* boundsWidth, int32_t* p, ::g::Uno::Float2* __retval);
void LineCacheLine__PosToWrappedLine_fn(LineCacheLine* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t* p, ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine** __retval);
void LineCacheLine__get_Text_fn(LineCacheLine* __this, uString** __retval);
void LineCacheLine__set_Text_fn(LineCacheLine* __this, uString* value);
void LineCacheLine__get_Transform_fn(LineCacheLine* __this, uObject** __retval);
void LineCacheLine__set_Transform_fn(LineCacheLine* __this, uObject* value);
void LineCacheLine__get_VisualText_fn(LineCacheLine* __this, uString** __retval);

struct LineCacheLine : uObject
{
    uStrong<uString*> _text;
    uStrong<uObject*> _transform;
    uStrong<uArray*> _wrappedLinesCache;
    uStrong< ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo*> _wordWrapInfoCache;

    void ctor_(uString* text, uObject* transform);
    int32_t Backspace(int32_t p);
    int32_t BoundsToPos(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t textAlignment, float boundsWidth, ::g::Uno::Float2 p);
    ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* BoundsToWrappedLine(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Float2 p);
    void Delete(int32_t p);
    int32_t End(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t p);
    float GetTotalHeight(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo);
    uArray* GetWrappedLines(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo);
    int32_t Home(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t p);
    void InsertChar(int32_t p, char16_t c);
    void Invalidate();
    ::g::Uno::Float2 PosToBounds(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t textAlignment, float boundsWidth, int32_t p);
    ::g::Fuse::Controls::FallbackTextRenderer::WrappedLine* PosToWrappedLine(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int32_t p);
    uString* Text();
    void Text(uString* value);
    uObject* Transform();
    void Transform(uObject* value);
    uString* VisualText();
    static LineCacheLine* New1(uString* text, uObject* transform);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
