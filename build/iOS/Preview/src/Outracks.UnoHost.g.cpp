// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Outracks.Simulator.Client.Context.h>
#include <Outracks.Simulator.Client.FakeApp.h>
#include <Outracks.UnoHost.FusionInterop.h>
#include <Outracks.UnoHost.HitTestQuery.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
static uType* TYPES[5];

namespace g{
namespace Outracks{
namespace UnoHost{

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno
// ---------------------------------------------------------------------

// public sealed class FusionInterop :15
// {
static void FusionInterop_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::HitTestCallback_typeof();
    ::TYPES[1] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[2] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL), offsetof(FusionInterop, _handler), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("HitTest", NULL, (void*)FusionInterop__HitTest_fn, 0, true, ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)FusionInterop__New1_fn, 0, true, type, 0),
        new uFunction("OnPointerMoved", NULL, (void*)FusionInterop__OnPointerMoved_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)),
        new uFunction("OnPointerPressed", NULL, (void*)FusionInterop__OnPointerPressed_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)));
}

uType* FusionInterop_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FusionInterop);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.UnoHost.FusionInterop", options);
    type->fp_build_ = FusionInterop_build;
    type->fp_ctor_ = (void*)FusionInterop__New1_fn;
    return type;
}

// public generated FusionInterop() :15
void FusionInterop__ctor__fn(FusionInterop* __this)
{
    __this->ctor_();
}

// private void Handler(object sender, Fuse.Input.PointerMovedArgs args) :44
void FusionInterop__Handler_fn(FusionInterop* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->Handler(sender, args);
}

// private void Handler(object sender, Fuse.Input.PointerPressedArgs args) :39
void FusionInterop__Handler1_fn(FusionInterop* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->Handler1(sender, args);
}

// public static Uno.Collections.IList<object> HitTest(float2 point) :49
void FusionInterop__HitTest_fn(::g::Uno::Float2* point, uObject** __retval)
{
    *__retval = FusionInterop::HitTest(*point);
}

// public generated FusionInterop New() :15
void FusionInterop__New1_fn(FusionInterop** __retval)
{
    *__retval = FusionInterop::New1();
}

// public static void OnPointerMoved(object obj, Uno.Action<float2> handler) :27
void FusionInterop__OnPointerMoved_fn(uObject* obj, uDelegate* handler)
{
    FusionInterop::OnPointerMoved(obj, handler);
}

// public static void OnPointerPressed(object obj, Uno.Action<float2> handler) :17
void FusionInterop__OnPointerPressed_fn(uObject* obj, uDelegate* handler)
{
    FusionInterop::OnPointerPressed(obj, handler);
}

// public generated FusionInterop() [instance] :15
void FusionInterop::ctor_()
{
}

// private void Handler(object sender, Fuse.Input.PointerMovedArgs args) [instance] :44
void FusionInterop::Handler(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "Handler(object,Fuse.Input.PointerMovedArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(args)->WindowPoint()));
}

// private void Handler(object sender, Fuse.Input.PointerPressedArgs args) [instance] :39
void FusionInterop::Handler1(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "Handler(object,Fuse.Input.PointerPressedArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(args)->WindowPoint()));
}

// public static Uno.Collections.IList<object> HitTest(float2 point) [static] :49
uObject* FusionInterop::HitTest(::g::Uno::Float2 point)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "HitTest(float2)");
    ::g::Outracks::Simulator::Client::FakeApp* visual = ::g::Outracks::Simulator::Client::Context::App();
    ::g::Outracks::UnoHost::HitTestQuery* query = ::g::Outracks::UnoHost::HitTestQuery::New1();
    ::g::Fuse::HitTestContext* args = ::g::Fuse::HitTestContext::New1(point, uDelegate::New(::TYPES[0/*Fuse.HitTestCallback*/], (void*)::g::Outracks::UnoHost::HitTestQuery__Select_fn, query));
    uPtr(visual)->HitTest(args);
    args->Dispose();
    return (uObject*)query->HitObjects;
}

// public generated FusionInterop New() [static] :15
FusionInterop* FusionInterop::New1()
{
    FusionInterop* obj3 = (FusionInterop*)uNew(FusionInterop_typeof());
    obj3->ctor_();
    return obj3;
}

// public static void OnPointerMoved(object obj, Uno.Action<float2> handler) [static] :27
void FusionInterop::OnPointerMoved(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "OnPointerMoved(object,Uno.Action<float2>)");
    FusionInterop* collection2;
    ::g::Fuse::Elements::Element* visual = uAs< ::g::Fuse::Elements::Element*>(obj, ::TYPES[1/*Fuse.Elements.Element*/]);

    if (visual == NULL)
        return;

    uPtr(visual)->HitTestMode(2);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), visual, uDelegate::New(::TYPES[2/*Fuse.Input.PointerMovedHandler*/], (void*)FusionInterop__Handler_fn, uPtr((collection2 = FusionInterop::New1(), uPtr(collection2)->_handler = handler, collection2))));
}

// public static void OnPointerPressed(object obj, Uno.Action<float2> handler) [static] :17
void FusionInterop::OnPointerPressed(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Outracks.UnoHost.FusionInterop", "OnPointerPressed(object,Uno.Action<float2>)");
    FusionInterop* collection1;
    ::g::Fuse::Elements::Element* visual = uAs< ::g::Fuse::Elements::Element*>(obj, ::TYPES[1/*Fuse.Elements.Element*/]);

    if (visual == NULL)
        return;

    uPtr(visual)->HitTestMode(2);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), visual, uDelegate::New(::TYPES[3/*Fuse.Input.PointerPressedHandler*/], (void*)FusionInterop__Handler1_fn, uPtr((collection1 = FusionInterop::New1(), uPtr(collection1)->_handler = handler, collection1))));
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno
// ---------------------------------------------------------------------

// internal sealed class HitTestQuery :60
// {
static void HitTestQuery_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.List<object>*/], offsetof(HitTestQuery, HitObjects), 0);
}

uType* HitTestQuery_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HitTestQuery);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.UnoHost.HitTestQuery", options);
    type->fp_build_ = HitTestQuery_build;
    type->fp_ctor_ = (void*)HitTestQuery__New1_fn;
    return type;
}

// public generated HitTestQuery() :60
void HitTestQuery__ctor__fn(HitTestQuery* __this)
{
    __this->ctor_();
}

// public generated HitTestQuery New() :60
void HitTestQuery__New1_fn(HitTestQuery** __retval)
{
    *__retval = HitTestQuery::New1();
}

// public void Select(Fuse.HitTestResult result) :63
void HitTestQuery__Select_fn(HitTestQuery* __this, ::g::Fuse::HitTestResult* result)
{
    __this->Select(result);
}

// public generated HitTestQuery() [instance] :60
void HitTestQuery::ctor_()
{
    HitObjects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<object>*/]));
}

// public void Select(Fuse.HitTestResult result) [instance] :63
void HitTestQuery::Select(::g::Fuse::HitTestResult* result)
{
    uStackFrame __("Outracks.UnoHost.HitTestQuery", "Select(Fuse.HitTestResult)");
    ::g::Uno::Collections::List__Add_fn(uPtr(HitObjects), uPtr(result)->HitObject());
}

// public generated HitTestQuery New() [static] :60
HitTestQuery* HitTestQuery::New1()
{
    HitTestQuery* obj1 = (HitTestQuery*)uNew(HitTestQuery_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Outracks::UnoHost
