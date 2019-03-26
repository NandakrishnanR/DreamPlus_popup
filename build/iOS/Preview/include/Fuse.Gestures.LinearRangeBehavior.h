// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/RangeControls/LinearRangeBehavior.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Input.IGesture.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct LinearRangeBehavior;}}}
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class LinearRangeBehavior :38
// {
struct LinearRangeBehavior_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Input::IGesture interface7;
};

LinearRangeBehavior_type* LinearRangeBehavior_typeof();
void LinearRangeBehavior__ctor_3_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__get_Direction_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* __retval);
void LinearRangeBehavior__FindRangeControl_fn(LinearRangeBehavior* __this, ::g::Fuse::Controls::RangeControl** __retval);
void LinearRangeBehavior__FuseInputIGestureOnCaptureChanged_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev);
void LinearRangeBehavior__FuseInputIGestureOnLostCapture_fn(LinearRangeBehavior* __this, bool* forced);
void LinearRangeBehavior__FuseInputIGestureOnPointerMoved_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerMovedArgs* c, int32_t* __retval);
void LinearRangeBehavior__FuseInputIGestureOnPointerPressed_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerPressedArgs* c, int32_t* __retval);
void LinearRangeBehavior__FuseInputIGestureOnPointerReleased_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::PointerReleasedArgs* c, int32_t* __retval);
void LinearRangeBehavior__FuseInputIGestureget_Priority_fn(LinearRangeBehavior* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval);
void LinearRangeBehavior__get_GesturePriority_fn(LinearRangeBehavior* __this, int32_t* __retval);
void LinearRangeBehavior__set_GesturePriority_fn(LinearRangeBehavior* __this, int32_t* value);
void LinearRangeBehavior__New2_fn(LinearRangeBehavior** __retval);
void LinearRangeBehavior__OnRooted_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__OnUnrooted_fn(LinearRangeBehavior* __this);
void LinearRangeBehavior__get_Orientation_fn(LinearRangeBehavior* __this, int32_t* __retval);
void LinearRangeBehavior__set_Orientation_fn(LinearRangeBehavior* __this, int32_t* value);
void LinearRangeBehavior__PositionToValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos, double* __retval);
void LinearRangeBehavior__UpdateValue_fn(LinearRangeBehavior* __this, ::g::Uno::Float2* pos);

struct LinearRangeBehavior : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Controls::RangeControl*> Control;
    int32_t _orientation;
    uStrong< ::g::Fuse::Elements::Element*> _boundsElement;
    uStrong< ::g::Fuse::Input::Gesture*> _gesture;
    int32_t _gesturePriority;
    ::g::Uno::Float2 _startCoord;
    ::g::Uno::Float2 _currentCoord;
    double _initialValue;

    void ctor_3();
    ::g::Uno::Float2 Direction();
    ::g::Fuse::Controls::RangeControl* FindRangeControl();
    int32_t GesturePriority();
    void GesturePriority(int32_t value);
    int32_t Orientation();
    void Orientation(int32_t value);
    double PositionToValue(::g::Uno::Float2 pos);
    void UpdateValue(::g::Uno::Float2 pos);
    static LinearRangeBehavior* New2();
};
// }

}}} // ::g::Fuse::Gestures
