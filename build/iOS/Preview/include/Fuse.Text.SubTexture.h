// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/TextureAtlas.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Text{struct SubTexture;}}}

namespace g{
namespace Fuse{
namespace Text{

// public struct SubTexture :9
// {
uStructType* SubTexture_typeof();
void SubTexture__ctor__fn(SubTexture* __this, int32_t* textureIndex, ::g::Uno::Recti* rect);
void SubTexture__New1_fn(int32_t* textureIndex, ::g::Uno::Recti* rect, SubTexture* __retval);

struct SubTexture
{
    int32_t TextureIndex;
    ::g::Uno::Recti Rect;

    void ctor_(int32_t textureIndex, ::g::Uno::Recti rect);
};

SubTexture SubTexture__New1(int32_t textureIndex, ::g::Uno::Recti rect);
// }

}}} // ::g::Fuse::Text
