// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/FontFace.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Cache;}}}
namespace g{namespace Fuse{namespace Internal{struct CacheItem;}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct FontFace;}}}

namespace g{
namespace Fuse{
namespace Text{

// public abstract class FontFace :52
// {
struct FontFace_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Text::FontFace*);
    void(*fp_GetOfPixelSizeInternal)(::g::Fuse::Text::FontFace*, int32_t*, ::g::Fuse::Text::Font**);
};

FontFace_type* FontFace_typeof();
void FontFace__ctor__fn(FontFace* __this);
void FontFace__Dispose_fn(FontFace* __this);
void FontFace__GetOfPixelSize_fn(FontFace* __this, int32_t* size, ::g::Fuse::Internal::CacheItem* __retval);
void FontFace__Load_fn(uArray* data, int32_t* index, uDelegate* stylePredicate, FontFace** __retval);
void FontFace__Load1_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, FontFace** __retval);
void FontFace__Load2_fn(uString* fileName, int32_t* index, uDelegate* stylePredicate, FontFace** __retval);

struct FontFace : uObject
{
    uStrong< ::g::Fuse::Internal::Cache*> _fontCache;

    void ctor_();
    void Dispose() { (((FontFace_type*)__type)->fp_Dispose)(this); }
    ::g::Fuse::Internal::CacheItem GetOfPixelSize(int32_t size);
    ::g::Fuse::Text::Font* GetOfPixelSizeInternal(int32_t size) { ::g::Fuse::Text::Font* __retval; return (((FontFace_type*)__type)->fp_GetOfPixelSizeInternal)(this, &size, &__retval), __retval; }
    static void Dispose(FontFace* __this) { FontFace__Dispose_fn(__this); }
    static FontFace* Load(uArray* data, int32_t index, uDelegate* stylePredicate);
    static FontFace* Load1(::g::Fuse::Internal::FontFaceDescriptor* descriptor);
    static FontFace* Load2(uString* fileName, int32_t index, uDelegate* stylePredicate);
};
// }

}}} // ::g::Fuse::Text
