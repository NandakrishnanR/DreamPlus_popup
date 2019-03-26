// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Bundle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <android/asset_manager.h>
#include <Uno.h>
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace IO{struct AAssetManager;}}}

namespace g{
namespace Uno{
namespace IO{

// internal static extern class AAssetManager :315
// {
uClassType* AAssetManager_typeof();
void AAssetManager__GetJavaObject_fn(::g::Java::Object** __retval);
void AAssetManager__GetPtr_fn(::AAssetManager** __retval);
void AAssetManager__OpenOrThrow_fn(uString* filename, ::AAsset** __retval);

struct AAssetManager : uObject
{
    static ::AAssetManager* Ptr_;
    static ::AAssetManager*& Ptr() { return AAssetManager_typeof()->Init(), Ptr_; }

    static ::g::Java::Object* GetJavaObject();
    static ::AAssetManager* GetPtr();
    static ::AAsset* OpenOrThrow(uString* filename);
};
// }

}}} // ::g::Uno::IO
