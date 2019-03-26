// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.9.0/TrackAnimator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface KeyframeTrack :32
// {
uInterfaceType* KeyframeTrack_typeof();

struct KeyframeTrack
{
    void(*fp_get_Interpolation)(uObject*, int32_t*);
    void(*fp_set_Interpolation)(uObject*, int32_t*);
    void(*fp_get_Keyframes)(uObject*, uObject**);
    static int32_t Interpolation(const uInterface& __this) { int32_t __retval; return __this.VTable<KeyframeTrack>()->fp_get_Interpolation(__this, &__retval), __retval; }
    static void Interpolation(const uInterface& __this, int32_t value) { __this.VTable<KeyframeTrack>()->fp_set_Interpolation(__this, &value); }
    static uObject* Keyframes(const uInterface& __this) { uObject* __retval; return __this.VTable<KeyframeTrack>()->fp_get_Keyframes(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
