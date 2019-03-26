// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Implementation/FreeTypeFontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Implementation.HarfbuzzFont.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct FreeTypeFont;}}}}
namespace g{namespace Fuse{namespace Text{struct Glyph;}}}
namespace g{namespace Fuse{namespace Text{struct PositionedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct RenderedGlyph;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed extern class FreeTypeFont :129
// {
::g::Fuse::Text::Implementation::HarfbuzzFont_type* FreeTypeFont_typeof();
void FreeTypeFont__ctor_2_fn(FreeTypeFont* __this, void** ftFace, void** ftSize, int32_t* pixelSize, float* scale);
void FreeTypeFont__get_Ascender_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__get_Descender_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__Dispose_fn(FreeTypeFont* __this);
void FreeTypeFont__get_LineHeight_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__New1_fn(void** ftFace, void** ftSize, int32_t* pixelSize, float* scale, FreeTypeFont** __retval);
void FreeTypeFont__get_NumGlyphs_fn(FreeTypeFont* __this, int32_t* __retval);
void FreeTypeFont__get_PixelSize_fn(FreeTypeFont* __this, int32_t* __retval);
void FreeTypeFont__Render_fn(FreeTypeFont* __this, ::g::Fuse::Text::Glyph* glyph, ::g::Fuse::Text::RenderedGlyph* __retval);
void FreeTypeFont__get_Scale_fn(FreeTypeFont* __this, float* __retval);
void FreeTypeFont__Shape_fn(FreeTypeFont* __this, ::g::Fuse::Text::Substring* text, int32_t* fontIndex, int32_t* dir, uArray** __retval);

struct FreeTypeFont : ::g::Fuse::Text::Implementation::HarfbuzzFont
{
    int32_t _pixelSize;
    void* _ftFace;
    void* _ftSize;
    uStrong<uObject*> _faceMutex;
    float _scale;

    void ctor_2(void* ftFace, void* ftSize, int32_t pixelSize, float scale);
    static FreeTypeFont* New1(void* ftFace, void* ftSize, int32_t pixelSize, float scale);
};
// }

}}}} // ::g::Fuse::Text::Implementation
