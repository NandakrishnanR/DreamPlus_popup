// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/NativeViewHost.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__Enable;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class NativeViewHost.Enable :69
// {
struct NativeViewHost__Enable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

NativeViewHost__Enable_type* NativeViewHost__Enable_typeof();
void NativeViewHost__Enable__ctor__fn(NativeViewHost__Enable* __this, ::g::Fuse::Controls::NativeViewHost* host);
void NativeViewHost__Enable__New1_fn(::g::Fuse::Controls::NativeViewHost* host, NativeViewHost__Enable** __retval);
void NativeViewHost__Enable__NextFrame_fn(NativeViewHost__Enable* __this);
void NativeViewHost__Enable__UnoIDisposableDispose_fn(NativeViewHost__Enable* __this);

struct NativeViewHost__Enable : uObject
{
    uStrong< ::g::Fuse::Controls::NativeViewHost*> _host;
    bool _canceled;

    void ctor_(::g::Fuse::Controls::NativeViewHost* host);
    void NextFrame();
    static NativeViewHost__Enable* New1(::g::Fuse::Controls::NativeViewHost* host);
};
// }

}}} // ::g::Fuse::Controls
