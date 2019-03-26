// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls/1.9.0/KeyframeAccessors.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}
namespace g{namespace Fuse{namespace Controls{struct KeyframeAccessors;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public static class KeyframeAccessors :9
// {
uClassType* KeyframeAccessors_typeof();
void KeyframeAccessors__SetVisibility_fn(::g::Fuse::Animations::Keyframe* kf, int32_t* __retval);
void KeyframeAccessors__SetVisibility1_fn(::g::Fuse::Animations::Keyframe* kf, int32_t* v);

struct KeyframeAccessors : uObject
{
    static int32_t SetVisibility(::g::Fuse::Animations::Keyframe* kf);
    static void SetVisibility1(::g::Fuse::Animations::Keyframe* kf, int32_t v);
};
// }

}}} // ::g::Fuse::Controls
