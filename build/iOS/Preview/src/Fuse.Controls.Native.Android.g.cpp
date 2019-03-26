// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.DatePicker.h>
#include <Fuse.Controls.Native.Android.Button.h>
#include <Fuse.Controls.Native.Android.DatePickerView.h>
#include <Fuse.Controls.Native.Android.GraphicsViewBase.h>
#include <Fuse.Controls.Native.Android.ScrollView.h>
#include <Fuse.Controls.Native.Android.Slider.h>
#include <Fuse.Controls.Native.Android.SurfaceView.h>
#include <Fuse.Controls.Native.Android.Switch.h>
#include <Fuse.Controls.Native.Android.TextureView.h>
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.Android.TimePickerView.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.TimePicker.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/Button.uno
// ---------------------------------------------------------------------------

// public sealed extern class Button :6
// {
static void Button_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, type, 0));
}

uType* Button_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.Button", options);
    type->fp_build_ = Button_build;
    type->fp_ctor_ = (void*)Button__New1_fn;
    return type;
}

// public generated Button() :6
void Button__ctor__fn(Button* __this)
{
    __this->ctor_();
}

// public generated Button New() :6
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// public generated Button() [instance] :6
void Button::ctor_()
{
}

// public generated Button New() [static] :6
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.9.0/Android/DatePicker.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class DatePickerView :11
// {
static void DatePickerView_build(uType* type)
{
}

uType* DatePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    return type;
}

// public DatePickerView(Fuse.Controls.DatePicker host) :14
void DatePickerView__ctor__fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host)
{
    __this->ctor_(host);
}

// public DatePickerView New(Fuse.Controls.DatePicker host) :14
void DatePickerView__New1_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New1(host);
}

// public DatePickerView(Fuse.Controls.DatePicker host) [instance] :14
void DatePickerView::ctor_(::g::Fuse::Controls::DatePicker* host)
{
}

// public DatePickerView New(Fuse.Controls.DatePicker host) [static] :14
DatePickerView* DatePickerView::New1(::g::Fuse::Controls::DatePicker* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/GraphicsView.uno
// ---------------------------------------------------------------------------------

// public abstract extern class GraphicsViewBase :8
// {
static void GraphicsViewBase_build(uType* type)
{
}

uType* GraphicsViewBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsViewBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.GraphicsViewBase", options);
    type->fp_build_ = GraphicsViewBase_build;
    return type;
}

// protected generated GraphicsViewBase() :8
void GraphicsViewBase__ctor__fn(GraphicsViewBase* __this)
{
    __this->ctor_();
}

// protected generated GraphicsViewBase() [instance] :8
void GraphicsViewBase::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/ScrollView.uno
// -------------------------------------------------------------------------------

// public sealed extern class ScrollView :7
// {
static void ScrollView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScrollView__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IScrollViewHost_typeof()));
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :10
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :10
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/Slider.uno
// ---------------------------------------------------------------------------

// public sealed extern class Slider :7
// {
static void Slider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IRangeView_typeof(), offsetof(Slider_type, interface0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Slider__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IRangeViewHost_typeof()),
        new uFunction("set_Progress", NULL, (void*)Slider__set_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()));
}

Slider_type* Slider_typeof()
{
    static uSStrong<Slider_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Slider);
    options.TypeSize = sizeof(Slider_type);
    type = (Slider_type*)uClassType::New("Fuse.Controls.Native.Android.Slider", options);
    type->fp_build_ = Slider_build;
    type->interface0.fp_set_Progress = (void(*)(uObject*, double*))Slider__set_Progress_fn;
    return type;
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) :12
void Slider__ctor__fn(Slider* __this, uObject* host)
{
    __this->ctor_(host);
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) :12
void Slider__New1_fn(uObject* host, Slider** __retval)
{
    *__retval = Slider::New1(host);
}

// public void set_Progress(double value) :9
void Slider__set_Progress_fn(Slider* __this, double* value)
{
    __this->Progress(*value);
}

// public Slider(Fuse.Controls.Native.IRangeViewHost host) [instance] :12
void Slider::ctor_(uObject* host)
{
}

// public void set_Progress(double value) [instance] :9
void Slider::Progress(double value)
{
}

// public Slider New(Fuse.Controls.Native.IRangeViewHost host) [static] :12
Slider* Slider::New1(uObject* host)
{
    Slider* obj1 = (Slider*)uNew(Slider_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/SurfaceView.uno
// --------------------------------------------------------------------------------

// public sealed extern class SurfaceView :7
// {
static void SurfaceView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SurfaceView__New1_fn, 0, true, type, 0));
}

uType* SurfaceView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.ObjectSize = sizeof(SurfaceView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.SurfaceView", options);
    type->fp_build_ = SurfaceView_build;
    type->fp_ctor_ = (void*)SurfaceView__New1_fn;
    return type;
}

// public generated SurfaceView() :7
void SurfaceView__ctor_1_fn(SurfaceView* __this)
{
    __this->ctor_1();
}

// public generated SurfaceView New() :7
void SurfaceView__New1_fn(SurfaceView** __retval)
{
    *__retval = SurfaceView::New1();
}

// public generated SurfaceView() [instance] :7
void SurfaceView::ctor_1()
{
    ctor_();
}

// public generated SurfaceView New() [static] :7
SurfaceView* SurfaceView::New1()
{
    SurfaceView* obj1 = (SurfaceView*)uNew(SurfaceView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/Switch.uno
// ---------------------------------------------------------------------------

// public sealed extern class Switch :8
// {
static void Switch_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IToggleView_typeof(), offsetof(Switch_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("set_Host", NULL, (void*)Switch__set_Host_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, type, 1, ::g::Fuse::Controls::Native::IToggleViewHost_typeof()),
        new uFunction("set_Value", NULL, (void*)Switch__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

Switch_type* Switch_typeof()
{
    static uSStrong<Switch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(Switch_type);
    type = (Switch_type*)uClassType::New("Fuse.Controls.Native.Android.Switch", options);
    type->fp_build_ = Switch_build;
    type->interface0.fp_set_Value = (void(*)(uObject*, bool*))Switch__set_Value_fn;
    return type;
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) :14
void Switch__ctor__fn(Switch* __this, uObject* host)
{
    __this->ctor_(host);
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) :11
void Switch__set_Host_fn(Switch* __this, uObject* value)
{
    __this->Host(value);
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) :14
void Switch__New1_fn(uObject* host, Switch** __retval)
{
    *__retval = Switch::New1(host);
}

// public void set_Value(bool value) :10
void Switch__set_Value_fn(Switch* __this, bool* value)
{
    __this->Value(*value);
}

// public Switch(Fuse.Controls.Native.IToggleViewHost host) [instance] :14
void Switch::ctor_(uObject* host)
{
}

// public void set_Host(Fuse.Controls.Native.IToggleViewHost value) [instance] :11
void Switch::Host(uObject* value)
{
}

// public void set_Value(bool value) [instance] :10
void Switch::Value(bool value)
{
}

// public Switch New(Fuse.Controls.Native.IToggleViewHost host) [static] :14
Switch* Switch::New1(uObject* host)
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/TextureView.uno
// --------------------------------------------------------------------------------

// public sealed extern class TextureView :6
// {
static void TextureView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextureView__New1_fn, 0, true, type, 0));
}

uType* TextureView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TextureView", options);
    type->fp_build_ = TextureView_build;
    type->fp_ctor_ = (void*)TextureView__New1_fn;
    return type;
}

// public generated TextureView() :6
void TextureView__ctor_1_fn(TextureView* __this)
{
    __this->ctor_1();
}

// public generated TextureView New() :6
void TextureView__New1_fn(TextureView** __retval)
{
    *__retval = TextureView::New1();
}

// public generated TextureView() [instance] :6
void TextureView::ctor_1()
{
    ctor_();
}

// public generated TextureView New() [static] :6
TextureView* TextureView::New1()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/Android/TextView.uno
// -----------------------------------------------------------------------------

// public sealed extern class TextView :7
// {
static void TextView_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, type, 0));
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView() :7
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New() :7
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :7
void TextView::ctor_()
{
}

// public generated TextView New() [static] :7
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.9.0/Android/TimePicker.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class TimePickerView :11
// {
static void TimePickerView_build(uType* type)
{
}

uType* TimePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    return type;
}

// public TimePickerView(Fuse.Controls.TimePicker host) :14
void TimePickerView__ctor__fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host)
{
    __this->ctor_(host);
}

// public TimePickerView New(Fuse.Controls.TimePicker host) :14
void TimePickerView__New1_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New1(host);
}

// public TimePickerView(Fuse.Controls.TimePicker host) [instance] :14
void TimePickerView::ctor_(::g::Fuse::Controls::TimePicker* host)
{
}

// public TimePickerView New(Fuse.Controls.TimePicker host) [static] :14
TimePickerView* TimePickerView::New1(::g::Fuse::Controls::TimePicker* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
