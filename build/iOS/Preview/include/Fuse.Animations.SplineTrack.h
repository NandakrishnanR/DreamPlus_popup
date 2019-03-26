// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.9.0/SplineTrack.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.ITrackProvider.h>
#include <Fuse.Animations.KeyframeTrack.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Keyframe;}}}
namespace g{namespace Fuse{namespace Animations{struct SplineTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class SplineTrack :26
// {
struct SplineTrack_type : uType
{
    ::g::Fuse::Animations::ContinuousTrackProvider interface0;
    ::g::Fuse::Animations::ITrackProvider interface1;
    ::g::Fuse::Animations::KeyframeTrack interface2;
    ::g::Fuse::Animations::TrackProvider interface3;
};

SplineTrack_type* SplineTrack_typeof();
void SplineTrack__ctor__fn(SplineTrack* __this);
void SplineTrack__get_Bias_fn(SplineTrack* __this, float* __retval);
void SplineTrack__set_Bias_fn(SplineTrack* __this, float* value);
void SplineTrack__get_Continuity_fn(SplineTrack* __this, float* __retval);
void SplineTrack__set_Continuity_fn(SplineTrack* __this, float* value);
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int32_t* dir, ::g::Uno::Float4* value, double* strength, int32_t* __retval);
void SplineTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int32_t* dir, ::g::Uno::Float4* value, double* strength, int32_t* __retval);
void SplineTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* tas, int32_t* __retval);
void SplineTrack__FuseAnimationsTrackProviderGetDuration_fn(SplineTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int32_t* variant, double* __retval);
void SplineTrack__Init_fn(SplineTrack* __this);
void SplineTrack__get_Interpolation_fn(SplineTrack* __this, int32_t* __retval);
void SplineTrack__set_Interpolation_fn(SplineTrack* __this, int32_t* value);
void SplineTrack__get_Keyframes_fn(SplineTrack* __this, uObject** __retval);
void SplineTrack__New1_fn(SplineTrack** __retval);
void SplineTrack__get_Tension_fn(SplineTrack* __this, float* __retval);
void SplineTrack__set_Tension_fn(SplineTrack* __this, float* value);

struct SplineTrack : uObject
{
    uStrong< ::g::Uno::Collections::List*> _frames;
    float _tension;
    float _bias;
    float _continuity;
    uStrong<uDelegate*> _pointInterpolater;
    int32_t _style;
    double _duration;
    bool _init;

    void ctor_();
    float Bias();
    void Bias(float value);
    float Continuity();
    void Continuity(float value);
    void Init();
    int32_t Interpolation();
    void Interpolation(int32_t value);
    uObject* Keyframes();
    float Tension();
    void Tension(float value);
    static SplineTrack* New1();
};
// }

}}} // ::g::Fuse::Animations
