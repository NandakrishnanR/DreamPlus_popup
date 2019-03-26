// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <android/asset_manager.h>
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct AAssetStream;}}}

namespace g{
namespace Uno{
namespace IO{

// internal sealed extern class AAssetStream :342
// {
::g::Uno::IO::Stream_type* AAssetStream_typeof();
void AAssetStream__ctor_1_fn(AAssetStream* __this, uString* filename);
void AAssetStream__CheckDisposed_fn(AAssetStream* __this);
void AAssetStream__Dispose1_fn(AAssetStream* __this, bool* disposing);
void AAssetStream__Flush_fn(AAssetStream* __this);
void AAssetStream__get_Length_fn(AAssetStream* __this, int64_t* __retval);
void AAssetStream__New1_fn(uString* filename, AAssetStream** __retval);
void AAssetStream__Read_fn(AAssetStream* __this, uArray* dst, int32_t* byteOffset, int32_t* byteCount, int32_t* __retval);
void AAssetStream__Write_fn(AAssetStream* __this, uArray* src, int32_t* byteOffset, int32_t* byteCount);

struct AAssetStream : ::g::Uno::IO::Stream
{
    ::AAsset* _fp;

    void ctor_1(uString* filename);
    void CheckDisposed();
    static AAssetStream* New1(uString* filename);
};
// }

}}} // ::g::Uno::IO
