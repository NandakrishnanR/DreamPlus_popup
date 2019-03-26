// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Graphics/TextureCube.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct TextureCube;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public intrinsic sealed class TextureCube :9
// {
struct TextureCube_type : uType
{
    ::g::Uno::IDisposable interface0;
};

TextureCube_type* TextureCube_typeof();
void TextureCube__Dispose_fn(TextureCube* __this);
void TextureCube__get_GLTextureHandle_fn(TextureCube* __this, uint32_t* __retval);
void TextureCube__set_GLTextureHandle_fn(TextureCube* __this, uint32_t* value);
void TextureCube__get_IsDisposed_fn(TextureCube* __this, bool* __retval);
void TextureCube__set_IsDisposed_fn(TextureCube* __this, bool* value);
void TextureCube__get_Size_fn(TextureCube* __this, int32_t* __retval);
void TextureCube__set_Size_fn(TextureCube* __this, int32_t* value);

struct TextureCube : uObject
{
    uint32_t _GLTextureHandle;
    bool _IsDisposed;
    int32_t _Size;

    void Dispose();
    uint32_t GLTextureHandle();
    void GLTextureHandle(uint32_t value);
    bool IsDisposed();
    void IsDisposed(bool value);
    int32_t Size();
    void Size(int32_t value);
};
// }

}}} // ::g::Uno::Graphics
