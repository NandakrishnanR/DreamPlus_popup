// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.9.0/DiscreteKeyframeTrack.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.ITrackProvider.h>
#include <Fuse.Animations.KeyframeTrack.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteKeyframeTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteKeyframeTrack :7
// {
struct DiscreteKeyframeTrack_type : uType
{
    ::g::Fuse::Animations::DiscreteTrackProvider interface0;
    ::g::Fuse::Animations::ITrackProvider interface1;
    ::g::Fuse::Animations::KeyframeTrack interface2;
    ::g::Fuse::Animations::TrackProvider interface3;
};

DiscreteKeyframeTrack_type* DiscreteKeyframeTrack_typeof();
void DiscreteKeyframeTrack__ctor__fn(DiscreteKeyframeTrack* __this);
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int32_t* dir, uObject** value, double* strength, int32_t* __retval);
void DiscreteKeyframeTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int32_t* dir, uObject** value, double* strength, int32_t* __retval);
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int32_t* __retval);
void DiscreteKeyframeTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteKeyframeTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int32_t* variant, double* __retval);
void DiscreteKeyframeTrack__Init_fn(DiscreteKeyframeTrack* __this);
void DiscreteKeyframeTrack__get_Interpolation_fn(DiscreteKeyframeTrack* __this, int32_t* __retval);
void DiscreteKeyframeTrack__set_Interpolation_fn(DiscreteKeyframeTrack* __this, int32_t* value);
void DiscreteKeyframeTrack__get_Keyframes_fn(DiscreteKeyframeTrack* __this, uObject** __retval);
void DiscreteKeyframeTrack__New1_fn(DiscreteKeyframeTrack** __retval);

struct DiscreteKeyframeTrack : uObject
{
    uStrong< ::g::Uno::Collections::List*> _frames;
    double _duration;
    bool _init;
    int32_t _Interpolation;

    void ctor_();
    void Init();
    int32_t Interpolation();
    void Interpolation(int32_t value);
    uObject* Keyframes();
    static DiscreteKeyframeTrack* New1();
};
// }

}}} // ::g::Fuse::Animations
