// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.IArray.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GesturePriority.h>
#include <Fuse.Input.GesturePriorityConfig.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.IObject.h>
#include <Fuse.Json.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Marshal.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.NameValuePair.h>
#include <Fuse.Navigation.Activated.h>
#include <Fuse.Navigation.ActivatedHandler.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.ActivePageChangedHandler.h>
#include <Fuse.Navigation.AllowedNavigationDirections.h>
#include <Fuse.Navigation.BackButtonAction.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.ChildRouterPagesUpdated.h>
#include <Fuse.Navigation.Deactivated.h>
#include <Fuse.Navigation.DeactivatingAnimation.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.DynamicLinearNavigation.Desired.h>
#include <Fuse.Navigation.DynamicLinearNavigation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.EndSeekArgs.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Navigation.ExplicitNavigation.h>
#include <Fuse.Navigation.FindRouter.h>
#include <Fuse.Navigation.FindRouter.Subscription.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.GotoRoute.h>
#include <Fuse.Navigation.GotoRouteCommand.h>
#include <Fuse.Navigation.HierarchicalNavigation.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IPagePropertyListener.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.ModifyRoute.h>
#include <Fuse.Navigation.ModifyRouteCommand.h>
#include <Fuse.Navigation.ModifyRouteHow.h>
#include <Fuse.Navigation.NavigatedArgs.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationDirection.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProgressHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.NavigationPageProxy.h>
#include <Fuse.Navigation.NavigationPageProxy.ObsoleteWrapper.h>
#include <Fuse.Navigation.NavigationPageProxy.StatusChangedHandler.h>
#include <Fuse.Navigation.NavigationPageState.h>
#include <Fuse.Navigation.NavigationState.h>
#include <Fuse.Navigation.NavigationStateChangedHandler.h>
#include <Fuse.Navigation.NavigationTrigger.h>
#include <Fuse.Navigation.NavigationTriggerAction.h>
#include <Fuse.Navigation.NavTriggerUtil.h>
#include <Fuse.Navigation.OutletType.h>
#include <Fuse.Navigation.PageData.h>
#include <Fuse.Navigation.PageExpression.h>
#include <Fuse.Navigation.PageExpression.Subscription.h>
#include <Fuse.Navigation.PageResourceBinding-1.h>
#include <Fuse.Navigation.PagesMap.h>
#include <Fuse.Navigation.PushRoute.h>
#include <Fuse.Navigation.PushRouteCommand.h>
#include <Fuse.Navigation.Route.h>
#include <Fuse.Navigation.RouteModificationCommand.ArgumentArrayAdapter.h>
#include <Fuse.Navigation.RouteModificationCommand.h>
#include <Fuse.Navigation.RouteModificationCommand.InnerSubscription.h>
#include <Fuse.Navigation.RouteModificationCommand.OuterSubscription.h>
#include <Fuse.Navigation.RoutePagePath.h>
#include <Fuse.Navigation.RoutePageProxy.ActiveChanged.h>
#include <Fuse.Navigation.RoutePageProxy.h>
#include <Fuse.Navigation.RoutePageProxy.Level.h>
#include <Fuse.Navigation.RoutePageProxy.ProgressUpdated.h>
#include <Fuse.Navigation.RoutePageTriggerWhen.h>
#include <Fuse.Navigation.Router.BackAtRootPressedHandler.h>
#include <Fuse.Navigation.Router.GetHistoryAt.h>
#include <Fuse.Navigation.Router.GetRouteCallback.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.Router.HistoryAction.h>
#include <Fuse.Navigation.RouterCancelNavigation.h>
#include <Fuse.Navigation.RouterGoBackBehavior.h>
#include <Fuse.Navigation.RouterModify.Flags.h>
#include <Fuse.Navigation.RouterModify.h>
#include <Fuse.Navigation.RouterPage.h>
#include <Fuse.Navigation.RouterPageChangedHandler.h>
#include <Fuse.Navigation.RouterPageRoute.h>
#include <Fuse.Navigation.RouterRequest.Fields.h>
#include <Fuse.Navigation.RouterRequest.Flags.h>
#include <Fuse.Navigation.RouterRequest.h>
#include <Fuse.Navigation.RoutingOperation.h>
#include <Fuse.Navigation.RoutingResult.h>
#include <Fuse.Navigation.SnapTo.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.NavigationStructure.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.UpdateSeekArgs.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileCanGoBack.h>
#include <Fuse.Navigation.WhileCanGoForward.h>
#include <Fuse.Navigation.WhileHistoryTrigger.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Navigation.WhileInEnterState.h>
#include <Fuse.Navigation.WhileInExitState.h>
#include <Fuse.Navigation.WhileNavigating.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Navigation.WhilePageActive.h>
#include <Fuse.Node.h>
#include <Fuse.PreviewState.h>
#include <Fuse.PreviewStateData.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.Expression.Argument.h>
#include <Fuse.Reactive.ExpressionSubscriber.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.NodeExpressionBinding.h>
#include <Fuse.Reactive.ObserverMap-1.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod1-1.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.PulseTrigger-1.PulseHandler.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Func3-4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[69];
static uType* TYPES[60];

namespace g{
namespace Fuse{
namespace Navigation{

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Activated.uno
// -----------------------------------------------------------------

// public sealed class Activated :98
// {
static void Activated_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(0/*AddHandlerImpl<Fuse.Navigation.Activated>*/, type, NULL);
    ::TYPES[1] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(1/*RemoveHandlerImpl<Fuse.Navigation.Activated>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface8));
    type->SetFields(43);
    type->Reflection.SetFunctions(3,
        new uFunction("AddHandler", NULL, (void*)Activated__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)),
        new uFunction(".ctor", NULL, (void*)Activated__New2_fn, 0, true, type, 0),
        new uFunction("RemoveHandler", NULL, (void*)Activated__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)));
}

::g::Fuse::Navigation::NavigationTrigger_type* Activated_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Activated);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTrigger_type);
    type = (::g::Fuse::Navigation::NavigationTrigger_type*)uClassType::New("Fuse.Navigation.Activated", options);
    type->fp_build_ = Activated_build;
    type->fp_ctor_ = (void*)Activated__New2_fn;
    type->fp_ActiveChanged = (void(*)(::g::Fuse::Navigation::NavigationTrigger*, bool*, bool*))Activated__ActiveChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Activated() :98
void Activated__ctor_7_fn(Activated* __this)
{
    __this->ctor_7();
}

// protected override sealed void ActiveChanged(bool isActive, bool isRoot) :113
void Activated__ActiveChanged_fn(Activated* __this, bool* isActive, bool* isRoot)
{
    uStackFrame __("Fuse.Navigation.Activated", "ActiveChanged(bool,bool)");
    bool isActive_ = *isActive;

    if (isActive_)
        __this->Pulse1(::g::Uno::EventArgs::New1());
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :102
void Activated__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Activated::AddHandler(visual, handler);
}

// public generated Activated New() :98
void Activated__New2_fn(Activated** __retval)
{
    *__retval = Activated::New2();
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :108
void Activated__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Activated::RemoveHandler(visual, handler);
}

// public generated Activated() [instance] :98
void Activated::ctor_7()
{
    ctor_6();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :102
void Activated::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Activated", "AddHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::AddHandlerImpl(::TYPES[0/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.AddHandlerImpl<Fuse.Navigation.Activated>*/], visual, handler);
}

// public generated Activated New() [static] :98
Activated* Activated::New2()
{
    Activated* obj1 = (Activated*)uNew(Activated_typeof());
    obj1->ctor_7();
    return obj1;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :108
void Activated::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Activated", "RemoveHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::RemoveHandlerImpl(::TYPES[1/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.RemoveHandlerImpl<Fuse.Navigation.Activated>*/], visual, handler);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Activated.uno
// -----------------------------------------------------------------

// public delegate void ActivatedHandler(object sender, Uno.EventArgs args) :8
uDelegateType* ActivatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.ActivatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::EventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public sealed class ActivatingAnimation :254
// {
static void ActivatingAnimation_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface8));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ActivatingAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ActivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ActivatingAnimation", options);
    type->fp_build_ = ActivatingAnimation_build;
    type->fp_ctor_ = (void*)ActivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))ActivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))ActivatingAnimation__OnNavigationStateChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ActivatingAnimation() :254
void ActivatingAnimation__ctor_6_fn(ActivatingAnimation* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :256
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", "ForceUpdate()");
    __this->Seek(__this->InvertProgress((double)(__this->Scale() * ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress)), 0);
}

// private double InvertProgress(double p) :261
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated ActivatingAnimation New() :254
void ActivatingAnimation__New2_fn(ActivatingAnimation** __retval)
{
    *__retval = ActivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :266
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.ActivatingAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int32_t d = (::g::Uno::Math::Abs1(ps.Progress) < ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress(__this->InvertProgress((double)(__this->Scale() * ps.Progress)), d, state);
}

// public generated ActivatingAnimation() [instance] :254
void ActivatingAnimation::ctor_6()
{
    ctor_5();
}

// private double InvertProgress(double p) [instance] :261
double ActivatingAnimation::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated ActivatingAnimation New() [static] :254
ActivatingAnimation* ActivatingAnimation::New2()
{
    ActivatingAnimation* obj1 = (ActivatingAnimation*)uNew(ActivatingAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public delegate void RoutePageProxy.ActiveChanged(bool isActive, bool isRoot) :35
uDelegateType* RoutePageProxy__ActiveChanged_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.RoutePageProxy.ActiveChanged", 2, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Bool_typeof(),
        ::g::Uno::Bool_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public delegate void ActivePageChangedHandler(object sender, Fuse.Visual active) :50
uDelegateType* ActivePageChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.ActivePageChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Visual_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/SwipeNavigate.uno
// ---------------------------------------------------------------------

// public enum AllowedNavigationDirections :76
uEnumType* AllowedNavigationDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.AllowedNavigationDirections", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 1LL,
        "Backward", 2LL,
        "Both", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// protected sealed class RouteModificationCommand.ArgumentArrayAdapter :120
// {
static void RouteModificationCommand__ArgumentArrayAdapter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(RouteModificationCommand__ArgumentArrayAdapter_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression__Argument_typeof()->Array(), offsetof(RouteModificationCommand__ArgumentArrayAdapter, _args), 0);
}

RouteModificationCommand__ArgumentArrayAdapter_type* RouteModificationCommand__ArgumentArrayAdapter_typeof()
{
    static uSStrong<RouteModificationCommand__ArgumentArrayAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RouteModificationCommand__ArgumentArrayAdapter);
    options.TypeSize = sizeof(RouteModificationCommand__ArgumentArrayAdapter_type);
    type = (RouteModificationCommand__ArgumentArrayAdapter_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand.ArgumentArrayAdapter", options);
    type->fp_build_ = RouteModificationCommand__ArgumentArrayAdapter_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int32_t*))RouteModificationCommand__ArgumentArrayAdapter__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))RouteModificationCommand__ArgumentArrayAdapter__get_Item_fn;
    return type;
}

// public ArgumentArrayAdapter(Fuse.Reactive.Expression.Argument[] args) :124
void RouteModificationCommand__ArgumentArrayAdapter__ctor__fn(RouteModificationCommand__ArgumentArrayAdapter* __this, uArray* args)
{
    __this->ctor_(args);
}

// public object get_Item(int index) :130
void RouteModificationCommand__ArgumentArrayAdapter__get_Item_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :129
void RouteModificationCommand__ArgumentArrayAdapter__get_Length_fn(RouteModificationCommand__ArgumentArrayAdapter* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public ArgumentArrayAdapter New(Fuse.Reactive.Expression.Argument[] args) :124
void RouteModificationCommand__ArgumentArrayAdapter__New1_fn(uArray* args, RouteModificationCommand__ArgumentArrayAdapter** __retval)
{
    *__retval = RouteModificationCommand__ArgumentArrayAdapter::New1(args);
}

// public ArgumentArrayAdapter(Fuse.Reactive.Expression.Argument[] args) [instance] :124
void RouteModificationCommand__ArgumentArrayAdapter::ctor_(uArray* args)
{
    _args = args;
}

// public object get_Item(int index) [instance] :130
uObject* RouteModificationCommand__ArgumentArrayAdapter::Item(int32_t index)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.ArgumentArrayAdapter", "get_Item(int)");
    return uPtr(uPtr(_args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(index))->Value();
}

// public int get_Length() [instance] :129
int32_t RouteModificationCommand__ArgumentArrayAdapter::Length()
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.ArgumentArrayAdapter", "get_Length()");
    return uPtr(_args)->Length();
}

// public ArgumentArrayAdapter New(Fuse.Reactive.Expression.Argument[] args) [static] :124
RouteModificationCommand__ArgumentArrayAdapter* RouteModificationCommand__ArgumentArrayAdapter::New1(uArray* args)
{
    RouteModificationCommand__ArgumentArrayAdapter* obj1 = (RouteModificationCommand__ArgumentArrayAdapter*)uNew(RouteModificationCommand__ArgumentArrayAdapter_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno
// --------------------------------------------------------------

// public delegate void Router.BackAtRootPressedHandler(object sender, Uno.EventArgs args) :160
uDelegateType* Router__BackAtRootPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.Router.BackAtRootPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::EventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno
// --------------------------------------------------------------

// public enum BackButtonAction :8
uEnumType* BackButtonAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.BackButtonAction", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "GoBack", 0LL,
        "None", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno
// ----------------------------------------------------------------------

// public abstract class BackForwardNavigationTriggerAction :137
// {
static void BackForwardNavigationTriggerAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No Navigation context was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(BackForwardNavigationTriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(BackForwardNavigationTriggerAction, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)BackForwardNavigationTriggerAction__get_NavigationContext_fn, 0, false, ::g::Fuse::Navigation::IBaseNavigation_typeof(), 0),
        new uFunction("set_NavigationContext", NULL, (void*)BackForwardNavigationTriggerAction__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::IBaseNavigation_typeof()));
}

BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof()
{
    static uSStrong<BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BackForwardNavigationTriggerAction);
    options.TypeSize = sizeof(BackForwardNavigationTriggerAction_type);
    type = (BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.BackForwardNavigationTriggerAction", options);
    type->fp_build_ = BackForwardNavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BackForwardNavigationTriggerAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected generated BackForwardNavigationTriggerAction() :137
void BackForwardNavigationTriggerAction__ctor_2_fn(BackForwardNavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() :140
void BackForwardNavigationTriggerAction__get_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :140
void BackForwardNavigationTriggerAction__set_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :142
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.BackForwardNavigationTriggerAction", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->NavigationContext();
    uObject* nav = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(n);

    if (nav != NULL)
        __this->Perform1(nav, n);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"No Navigati...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 149, ::STRINGS[2/*"Perform"*/], NULL);
}

// protected generated BackForwardNavigationTriggerAction() [instance] :137
void BackForwardNavigationTriggerAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :140
uObject* BackForwardNavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :140
void BackForwardNavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterPage.uno
// ------------------------------------------------------------------

// internal delegate void ChildRouterPagesUpdated() :8
uDelegateType* ChildRouterPagesUpdated_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.ChildRouterPagesUpdated", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Activated.uno
// -----------------------------------------------------------------

// public sealed class Deactivated :146
// {
static void Deactivated_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(0/*AddHandlerImpl<Fuse.Navigation.Deactivated>*/, type, NULL);
    ::TYPES[4] = ::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)->MakeMethod(1/*RemoveHandlerImpl<Fuse.Navigation.Deactivated>*/, type, NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationTrigger_type, interface8));
    type->SetFields(43);
    type->Reflection.SetFunctions(3,
        new uFunction("AddHandler", NULL, (void*)Deactivated__AddHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)),
        new uFunction(".ctor", NULL, (void*)Deactivated__New2_fn, 0, true, type, 0),
        new uFunction("RemoveHandler", NULL, (void*)Deactivated__RemoveHandler_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL)));
}

::g::Fuse::Navigation::NavigationTrigger_type* Deactivated_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Deactivated);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTrigger_type);
    type = (::g::Fuse::Navigation::NavigationTrigger_type*)uClassType::New("Fuse.Navigation.Deactivated", options);
    type->fp_build_ = Deactivated_build;
    type->fp_ctor_ = (void*)Deactivated__New2_fn;
    type->fp_ActiveChanged = (void(*)(::g::Fuse::Navigation::NavigationTrigger*, bool*, bool*))Deactivated__ActiveChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Deactivated() :146
void Deactivated__ctor_7_fn(Deactivated* __this)
{
    __this->ctor_7();
}

// protected override sealed void ActiveChanged(bool isActive, bool isRoot) :161
void Deactivated__ActiveChanged_fn(Deactivated* __this, bool* isActive, bool* isRoot)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "ActiveChanged(bool,bool)");
    bool isRoot_ = *isRoot;
    bool isActive_ = *isActive;

    if (!isRoot_ && !isActive_)
        __this->Pulse1(::g::Uno::EventArgs::New1());
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :150
void Deactivated__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Deactivated::AddHandler(visual, handler);
}

// public generated Deactivated New() :146
void Deactivated__New2_fn(Deactivated** __retval)
{
    *__retval = Deactivated::New2();
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) :156
void Deactivated__RemoveHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler)
{
    Deactivated::RemoveHandler(visual, handler);
}

// public generated Deactivated() [instance] :146
void Deactivated::ctor_7()
{
    ctor_6();
}

// public static void AddHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :150
void Deactivated::AddHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "AddHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::AddHandlerImpl(::TYPES[3/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.AddHandlerImpl<Fuse.Navigation.Deactivated>*/], visual, handler);
}

// public generated Deactivated New() [static] :146
Deactivated* Deactivated::New2()
{
    Deactivated* obj1 = (Deactivated*)uNew(Deactivated_typeof());
    obj1->ctor_7();
    return obj1;
}

// public static void RemoveHandler(Fuse.Visual visual, Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler handler) [static] :156
void Deactivated::RemoveHandler(::g::Fuse::Visual* visual, uDelegate* handler)
{
    uStackFrame __("Fuse.Navigation.Deactivated", "RemoveHandler(Fuse.Visual,Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler)");
    ::g::Fuse::Triggers::PulseTrigger::RemoveHandlerImpl(::TYPES[4/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.RemoveHandlerImpl<Fuse.Navigation.Deactivated>*/], visual, handler);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public sealed class DeactivatingAnimation :301
// {
static void DeactivatingAnimation_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface8));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DeactivatingAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DeactivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.DeactivatingAnimation", options);
    type->fp_build_ = DeactivatingAnimation_build;
    type->fp_ctor_ = (void*)DeactivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))DeactivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))DeactivatingAnimation__OnNavigationStateChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated DeactivatingAnimation() :301
void DeactivatingAnimation__ctor_6_fn(DeactivatingAnimation* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :303
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.DeactivatingAnimation", "ForceUpdate()");
    __this->Seek((double)::g::Uno::Math::Abs1(__this->Scale() * ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// public generated DeactivatingAnimation New() :301
void DeactivatingAnimation__New2_fn(DeactivatingAnimation** __retval)
{
    *__retval = DeactivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :308
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.DeactivatingAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int32_t d = (::g::Uno::Math::Abs1(ps.Progress) > ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// public generated DeactivatingAnimation() [instance] :301
void DeactivatingAnimation::ctor_6()
{
    ctor_5();
}

// public generated DeactivatingAnimation New() [static] :301
DeactivatingAnimation* DeactivatingAnimation::New2()
{
    DeactivatingAnimation* obj1 = (DeactivatingAnimation*)uNew(DeactivatingAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DynamicLinearNavigation.uno
// -------------------------------------------------------------------------------

// private enum DynamicLinearNavigation.Desired :37
uEnumType* DynamicLinearNavigation__Desired_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.DynamicLinearNavigation.Desired", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Active", 1LL,
        "Index", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DirectNavigation.uno
// ------------------------------------------------------------------------

// public sealed class DirectNavigation :16
// {
static void DirectNavigation_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Unexpected null page");
    ::STRINGS[4] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DirectNavigation.uno");
    ::STRINGS[5] = uString::Const("SetProgressState");
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface9));
    type->SetFields(26,
        ::g::Fuse::Visual_typeof(), offsetof(DirectNavigation, _active), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DirectNavigation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(DirectNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.DirectNavigation", options);
    type->fp_build_ = DirectNavigation_build;
    type->fp_ctor_ = (void*)DirectNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))DirectNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))DirectNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int32_t*))DirectNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DirectNavigation__OnRooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface7.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int32_t*))DirectNavigation__Goto_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_PageProgress = (void(*)(uObject*, double*))DirectNavigation__get_PageProgress_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated DirectNavigation() :16
void DirectNavigation__ctor_4_fn(DirectNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :73
void DirectNavigation__get_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :74
void DirectNavigation__set_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "set_Active(Fuse.Visual)");
    __this->TransitionTo(value, false);
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :37
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, int32_t* mode)
{
    int32_t mode_ = *mode;

    if ((mode_ == 1) || (mode_ == 0))
        __this->TransitionTo(visual, mode_ == 1);
}

// public generated DirectNavigation New() :16
void DirectNavigation__New2_fn(DirectNavigation** __retval)
{
    *__retval = DirectNavigation::New2();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :24
void DirectNavigation__OnChildAddedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->UpdateState(true);
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :30
void DirectNavigation__OnChildRemovedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);

    if (__this->_active == child)
        __this->Goto(NULL, 0);
}

// protected override sealed void OnRooted() :18
void DirectNavigation__OnRooted_fn(DirectNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);
    __this->UpdateState(true);
}

// public override sealed double get_PageProgress() :95
void DirectNavigation__get_PageProgress_fn(DirectNavigation* __this, double* __retval)
{
    if (__this->_active == NULL)
        return *__retval = -1.0, void();

    return *__retval = 0.0, void();
}

// private void SetProgressState(Fuse.Visual elm, int progress) :80
void DirectNavigation__SetProgressState_fn(DirectNavigation* __this, ::g::Fuse::Visual* elm, int32_t* progress)
{
    __this->SetProgressState(elm, *progress);
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) :44
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, bool* bypass)
{
    __this->TransitionTo(visual, *bypass);
}

// private void UpdateState(bool bypass) :57
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass)
{
    __this->UpdateState(*bypass);
}

// public generated DirectNavigation() [instance] :16
void DirectNavigation::ctor_4()
{
    ctor_3();
}

// private void SetProgressState(Fuse.Visual elm, int progress) [instance] :80
void DirectNavigation::SetProgressState(::g::Fuse::Visual* elm, int32_t progress)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "SetProgressState(Fuse.Visual,int)");
    ::g::Fuse::Navigation::PageData* pd = GetPageData(elm);

    if (pd == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[3/*"Unexpected ...*/], elm, ::STRINGS[4/*"/usr/local/...*/], 85, ::STRINGS[5/*"SetProgress...*/]);
        return;
    }

    uPtr(pd)->PreviousProgress = uPtr(pd)->Progress;
    pd->Progress = (float)progress;
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) [instance] :44
void DirectNavigation::TransitionTo(::g::Fuse::Visual* visual, bool bypass)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "TransitionTo(Fuse.Visual,bool)");
    ::g::Fuse::Visual* oldActive = _active;
    _active = visual;
    UpdateState(bypass);

    if (oldActive != _active)
    {
        OnActiveChanged(_active);
        OnNavigated(_active);
    }
}

// private void UpdateState(bool bypass) [instance] :57
void DirectNavigation::UpdateState(bool bypass)
{
    uStackFrame __("Fuse.Navigation.DirectNavigation", "UpdateState(bool)");
    ::g::Fuse::Navigation::PageData* ret2;

    for (int32_t t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Navigation.PageData>*/])); t++)
    {
        ::g::Fuse::Visual* c = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[6/*Uno.Collections.IList<Fuse.Navigation.PageData>*/]), uCRef<int32_t>(t), &ret2), ret2))->Visual();
        bool active = _active == c;
        int32_t newProgress = active ? 0 : -1;
        SetProgressState(c, newProgress);
    }

    OnPageProgressChanged1(bypass ? 1 : 0);
}

// public generated DirectNavigation New() [static] :16
DirectNavigation* DirectNavigation::New2()
{
    DirectNavigation* obj1 = (DirectNavigation*)uNew(DirectNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DynamicLinearNavigation.uno
// -------------------------------------------------------------------------------

// public sealed class DynamicLinearNavigation :13
// {
// static generated DynamicLinearNavigation() :13
static void DynamicLinearNavigation__cctor_2_fn(uType* __type)
{
    DynamicLinearNavigation::DesiredActiveName_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("DesiredActive"));
    DynamicLinearNavigation::DesiredActiveIndexName_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("DesiredActiveIndex"));
}

static void DynamicLinearNavigation_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DynamicLinearNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(DynamicLinearNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(DynamicLinearNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(DynamicLinearNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(DynamicLinearNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DynamicLinearNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(DynamicLinearNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(DynamicLinearNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(DynamicLinearNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(DynamicLinearNavigation_type, interface9),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(DynamicLinearNavigation_type, interface10));
    type->SetFields(26,
        ::g::Uno::Bool_typeof(), offsetof(DynamicLinearNavigation, _reuseExistingVisual), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(DynamicLinearNavigation, _motion), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(DynamicLinearNavigation, _region), 0,
        DynamicLinearNavigation__Desired_typeof(), offsetof(DynamicLinearNavigation, _desired), 0,
        ::g::Fuse::Visual_typeof(), offsetof(DynamicLinearNavigation, _desiredActive), 0,
        ::g::Uno::Int_typeof(), offsetof(DynamicLinearNavigation, _desiredIndex), 0,
        ::g::Fuse::Visual_typeof(), offsetof(DynamicLinearNavigation, _listenComplete), 0,
        ::g::Uno::Bool_typeof(), offsetof(DynamicLinearNavigation, _hasUpdated), 0,
        ::g::Uno::Float_typeof(), offsetof(DynamicLinearNavigation, _progress), 0,
        ::g::Uno::Float_typeof(), offsetof(DynamicLinearNavigation, _prevProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(DynamicLinearNavigation, _queueClearForwardHistory), 0,
        ::g::Fuse::Visual_typeof(), offsetof(DynamicLinearNavigation, _active), 0,
        ::g::Uno::Float_typeof(), offsetof(DynamicLinearNavigation, _seekBase), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DynamicLinearNavigation::DesiredActiveName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DynamicLinearNavigation::DesiredActiveIndexName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_DesiredActive", NULL, (void*)DynamicLinearNavigation__get_DesiredActive_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_DesiredActive", NULL, (void*)DynamicLinearNavigation__set_DesiredActive_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_DesiredActiveIndex", NULL, (void*)DynamicLinearNavigation__get_DesiredActiveIndex_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_DesiredActiveIndex", NULL, (void*)DynamicLinearNavigation__set_DesiredActiveIndex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GotoImpl", NULL, (void*)DynamicLinearNavigation__GotoImpl_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("get_Motion", NULL, (void*)DynamicLinearNavigation__get_Motion_fn, 0, false, ::g::Fuse::Motion::MotionConfig_typeof(), 0),
        new uFunction("set_Motion", NULL, (void*)DynamicLinearNavigation__set_Motion_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionConfig_typeof()),
        new uFunction(".ctor", NULL, (void*)DynamicLinearNavigation__New2_fn, 0, true, type, 0),
        new uFunction("get_Progress", NULL, (void*)DynamicLinearNavigation__get_Progress_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_SeekRange", NULL, (void*)DynamicLinearNavigation__get_SeekRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
}

DynamicLinearNavigation_type* DynamicLinearNavigation_typeof()
{
    static uSStrong<DynamicLinearNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 11;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(DynamicLinearNavigation);
    options.TypeSize = sizeof(DynamicLinearNavigation_type);
    type = (DynamicLinearNavigation_type*)uClassType::New("Fuse.Navigation.DynamicLinearNavigation", options);
    type->fp_build_ = DynamicLinearNavigation_build;
    type->fp_ctor_ = (void*)DynamicLinearNavigation__New2_fn;
    type->fp_cctor_ = DynamicLinearNavigation__cctor_2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))DynamicLinearNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))DynamicLinearNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))DynamicLinearNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))DynamicLinearNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))DynamicLinearNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))DynamicLinearNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*))DynamicLinearNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int32_t*))DynamicLinearNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DynamicLinearNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))DynamicLinearNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))DynamicLinearNavigation__get_PageProgress_fn;
    type->interface10.fp_BeginSeek = (void(*)(uObject*))DynamicLinearNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface10.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))DynamicLinearNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface10.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))DynamicLinearNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface10.fp_get_SeekRange = (void(*)(uObject*, ::g::Uno::Float2*))DynamicLinearNavigation__get_SeekRange_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))DynamicLinearNavigation__GetPageState_fn;
    type->interface7.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int32_t*))DynamicLinearNavigation__Goto_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_PageProgress = (void(*)(uObject*, double*))DynamicLinearNavigation__get_PageProgress_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))DynamicLinearNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))DynamicLinearNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))DynamicLinearNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))DynamicLinearNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DynamicLinearNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated DynamicLinearNavigation() :13
void DynamicLinearNavigation__ctor_4_fn(DynamicLinearNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :401
void DynamicLinearNavigation__get_Active_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :402
void DynamicLinearNavigation__set_Active_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "set_Active(Fuse.Visual)");
    __this->SetDesiredActive(value);
}

// private void AnimationDone() :385
void DynamicLinearNavigation__AnimationDone_fn(DynamicLinearNavigation* __this)
{
    __this->AnimationDone();
}

// private Fuse.Visual get_Back() :540
void DynamicLinearNavigation__get_Back_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Back();
}

// public override sealed bool get_CanGoBack() :298
void DynamicLinearNavigation__get_CanGoBack_fn(DynamicLinearNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_CanGoBack()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :290
void DynamicLinearNavigation__get_CanGoForward_fn(DynamicLinearNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_CanGoForward()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) :272
void DynamicLinearNavigation__ChangeProgress_fn(DynamicLinearNavigation* __this, float* prev, float* next, int32_t* mode)
{
    __this->ChangeProgress(*prev, *next, *mode);
}

// private void CheckNeedUpdate([bool off]) :208
void DynamicLinearNavigation__CheckNeedUpdate_fn(DynamicLinearNavigation* __this, bool* off)
{
    __this->CheckNeedUpdate(*off);
}

// private int ClampProgress(int progress) :528
void DynamicLinearNavigation__ClampProgress1_fn(DynamicLinearNavigation* __this, int32_t* progress, int32_t* __retval)
{
    *__retval = __this->ClampProgress1(*progress);
}

// private void CleanupListenComplete() :64
void DynamicLinearNavigation__CleanupListenComplete_fn(DynamicLinearNavigation* __this)
{
    __this->CleanupListenComplete();
}

// private void ClearForwardHistory() :510
void DynamicLinearNavigation__ClearForwardHistory_fn(DynamicLinearNavigation* __this)
{
    __this->ClearForwardHistory();
}

// public Fuse.Visual get_DesiredActive() :407
void DynamicLinearNavigation__get_DesiredActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->DesiredActive();
}

// public void set_DesiredActive(Fuse.Visual value) :408
void DynamicLinearNavigation__set_DesiredActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->DesiredActive(value);
}

// public int get_DesiredActiveIndex() :413
void DynamicLinearNavigation__get_DesiredActiveIndex_fn(DynamicLinearNavigation* __this, int32_t* __retval)
{
    *__retval = __this->DesiredActiveIndex();
}

// public void set_DesiredActiveIndex(int value) :414
void DynamicLinearNavigation__set_DesiredActiveIndex_fn(DynamicLinearNavigation* __this, int32_t* value)
{
    __this->DesiredActiveIndex(*value);
}

// private void DesiredTransition(Fuse.Visual target) :317
void DynamicLinearNavigation__DesiredTransition_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* target)
{
    __this->DesiredTransition(target);
}

// private void DirectSetActive(Fuse.Visual page) :431
void DynamicLinearNavigation__DirectSetActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->DirectSetActive(page);
}

// private Fuse.Visual get_Front() :545
void DynamicLinearNavigation__get_Front_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Front();
}

// private void Fuse.Navigation.ISeekableNavigation.BeginSeek() :442
void DynamicLinearNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(DynamicLinearNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "Fuse.Navigation.ISeekableNavigation.BeginSeek()");
    __this->_seekBase = __this->Progress();

    if (__this->_region != NULL)
    {
        __this->ResetRegionLimits();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()));
    }

    __this->OnStateChanged(1);
}

// private void Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs args) :476
void DynamicLinearNavigation__FuseNavigationISeekableNavigationEndSeek_fn(DynamicLinearNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs)");
    ::g::Uno::Float2 ret6;

    if (!::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        return;

    int32_t targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = __this->ClampProgress1((int32_t)::g::Uno::Math::Floor1(__this->Progress()));
            break;
        }
        case 2:
        {
            targetIndex = __this->ClampProgress1((int32_t)::g::Uno::Math::Ceil1(__this->Progress()));
            break;
        }
        case 1:
        {
            float diff = __this->Progress() - ::g::Uno::Math::Floor1(__this->Progress());
            targetIndex = __this->ClampProgress1(((double)diff > 0.5) ? (int32_t)::g::Uno::Math::Ceil1(__this->Progress()) : (int32_t)::g::Uno::Math::Floor1(__this->Progress()));
            break;
        }
    }

    if (__this->_region != NULL)
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->Velocity(), 0.0f));

    __this->UpdateDesired(NULL, targetIndex);

    if (!__this->TransitionToChild(__this->GetPage(targetIndex), false, true))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret6), ret6));
}

// private void Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs args) :462
void DynamicLinearNavigation__FuseNavigationISeekableNavigationSeek_fn(DynamicLinearNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs)");
    ::g::Uno::Float2 ret7;

    if (__this->_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Seek being called on an unrooted navigation"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DynamicLinearNavigation.uno"), 466, uString::Const("Fuse.Navigation.ISeekableNavigation.Seek"));
        return;
    }

    float prev = __this->Progress();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->RelativeDelta(), 0.0f));
    __this->ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret7), ret7).X, 2);
    __this->CheckNeedUpdate(false);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :278
void DynamicLinearNavigation__GetPageState_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    ::g::Fuse::Navigation::PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
    {
        collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
        collection1.Progress = 0.0f;
        collection1.PreviousProgress = 0.0f;
        return *__retval = collection1, void();
    }

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = (__this->Progress() - (float)uPtr(pd)->Index);
    collection2.PreviousProgress = (__this->_prevProgress - (float)uPtr(pd)->Index);
    return *__retval = collection2, void();
}

// public override sealed void GoBack() :310
void DynamicLinearNavigation__GoBack_fn(DynamicLinearNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "GoBack()");

    if (__this->CanGoBack())
        __this->DesiredTransition(__this->Previous());
}

// public override sealed void GoForward() :304
void DynamicLinearNavigation__GoForward_fn(DynamicLinearNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "GoForward()");

    if (__this->CanGoForward())
        __this->DesiredTransition(__this->Next());
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :136
void DynamicLinearNavigation__Goto_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int32_t* mode)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int32_t mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    __this->UpdateDesired(element, -1);
    __this->GotoInternal(element, mode_);
}

// private bool GotoDesiredActive() :78
void DynamicLinearNavigation__GotoDesiredActive_fn(DynamicLinearNavigation* __this, bool* __retval)
{
    *__retval = __this->GotoDesiredActive();
}

// private void GotoDesiredActiveAction() :73
void DynamicLinearNavigation__GotoDesiredActiveAction_fn(DynamicLinearNavigation* __this)
{
    __this->GotoDesiredActiveAction();
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :167
void DynamicLinearNavigation__GotoImpl_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int32_t* mode)
{
    __this->GotoImpl(element, *mode);
}

// private void GotoInternal(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :149
void DynamicLinearNavigation__GotoInternal_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int32_t* mode)
{
    __this->GotoInternal(element, *mode);
}

// private int get_MaxIndex() :535
void DynamicLinearNavigation__get_MaxIndex_fn(DynamicLinearNavigation* __this, int32_t* __retval)
{
    *__retval = __this->MaxIndex();
}

// public Fuse.Motion.MotionConfig get_Motion() :21
void DynamicLinearNavigation__get_Motion_fn(DynamicLinearNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :27
void DynamicLinearNavigation__set_Motion_fn(DynamicLinearNavigation* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// public generated DynamicLinearNavigation New() :13
void DynamicLinearNavigation__New2_fn(DynamicLinearNavigation** __retval)
{
    *__retval = DynamicLinearNavigation::New2();
}

// private Fuse.Visual get_Next() :555
void DynamicLinearNavigation__get_Next_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Next();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :350
void DynamicLinearNavigation__OnChildAddedWhileRooted_fn(DynamicLinearNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active != NULL)
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    __this->GotoDesiredActive();
    __this->OnHistoryChanged();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :364
void DynamicLinearNavigation__OnChildRemovedWhileRooted_fn(DynamicLinearNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active == child)
        __this->DirectSetActive(NULL);

    __this->GotoDesiredActive();
    __this->OnHistoryChanged();
    __this->ChangeProgress(__this->Progress(), __this->Progress(), 1);
}

// protected override sealed void OnRooted() :47
void DynamicLinearNavigation__OnRooted_fn(DynamicLinearNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if ((__this->_desired == 0) && (__this->PageCount() > 0))
        __this->_desiredActive = __this->GetPage(0);

    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(__this->_progress, 0.0f)));

    if (!__this->GotoDesiredActive())
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    __this->OnHistoryChanged();
}

// protected override sealed void OnUnrooted() :115
void DynamicLinearNavigation__OnUnrooted_fn(DynamicLinearNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "OnUnrooted()");
    ::g::Uno::Float2 ret8;

    if (__this->_region != NULL)
    {
        __this->_progress = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret8), ret8).X;
        __this->_region = NULL;
        uPtr(__this->Motion())->ReleaseSimulation();
    }

    __this->CheckNeedUpdate(true);
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// private void OnUpdated() :227
void DynamicLinearNavigation__OnUpdated_fn(DynamicLinearNavigation* __this)
{
    __this->OnUpdated();
}

// public override sealed double get_PageProgress() :130
void DynamicLinearNavigation__get_PageProgress_fn(DynamicLinearNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_PageProgress()");
    return *__retval = (double)__this->Progress(), void();
}

// private Fuse.Visual get_Previous() :550
void DynamicLinearNavigation__get_Previous_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Previous();
}

// public float get_Progress() :381
void DynamicLinearNavigation__get_Progress_fn(DynamicLinearNavigation* __this, float* __retval)
{
    *__retval = __this->Progress();
}

// private void ResetRegionLimits() :246
void DynamicLinearNavigation__ResetRegionLimits_fn(DynamicLinearNavigation* __this)
{
    __this->ResetRegionLimits();
}

// public float2 get_SeekRange() :459
void DynamicLinearNavigation__get_SeekRange_fn(DynamicLinearNavigation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SeekRange();
}

// private void SetDesiredActive(Fuse.Visual page) :417
void DynamicLinearNavigation__SetDesiredActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->SetDesiredActive(page);
}

// private void SetDesiredActiveIndex(int index) :424
void DynamicLinearNavigation__SetDesiredActiveIndex_fn(DynamicLinearNavigation* __this, int32_t* index)
{
    __this->SetDesiredActiveIndex(*index);
}

// private void SetProgress(float value) :252
void DynamicLinearNavigation__SetProgress_fn(DynamicLinearNavigation* __this, float* value)
{
    __this->SetProgress(*value);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) :181
void DynamicLinearNavigation__TransitionToChild_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval)
{
    *__retval = __this->TransitionToChild(element, *bypass, *clamp);
}

// private void UpdateDesired(Fuse.Visual target, int index) :326
void DynamicLinearNavigation__UpdateDesired_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* target, int32_t* index)
{
    __this->UpdateDesired(target, *index);
}

::g::Uno::UX::Selector DynamicLinearNavigation::DesiredActiveName_;
::g::Uno::UX::Selector DynamicLinearNavigation::DesiredActiveIndexName_;

// public generated DynamicLinearNavigation() [instance] :13
void DynamicLinearNavigation::ctor_4()
{
    _reuseExistingVisual = true;
    ctor_3();
}

// private void AnimationDone() [instance] :385
void DynamicLinearNavigation::AnimationDone()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "AnimationDone()");

    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    OnStateChanged(0);
}

// private Fuse.Visual get_Back() [instance] :540
::g::Fuse::Visual* DynamicLinearNavigation::Back()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_Back()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(MaxIndex()) : NULL;
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) [instance] :272
void DynamicLinearNavigation::ChangeProgress(float prev, float next, int32_t mode)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "ChangeProgress(float,float,Fuse.Navigation.NavigationMode)");
    _prevProgress = prev;
    OnPageProgressChanged((double)next, (double)prev, mode);
}

// private void CheckNeedUpdate([bool off]) [instance] :208
void DynamicLinearNavigation::CheckNeedUpdate(bool off)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "CheckNeedUpdate([bool])");
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)DynamicLinearNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        AnimationDone();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)DynamicLinearNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private int ClampProgress(int progress) [instance] :528
int32_t DynamicLinearNavigation::ClampProgress1(int32_t progress)
{
    return ::g::Uno::Math::Clamp8(progress, 0, MaxIndex());
}

// private void CleanupListenComplete() [instance] :64
void DynamicLinearNavigation::CleanupListenComplete()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "CleanupListenComplete()");

    if (_listenComplete != NULL)
    {
        uPtr(_listenComplete)->remove_RootingCompleted(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)DynamicLinearNavigation__GotoDesiredActiveAction_fn, this));
        _listenComplete = NULL;
    }
}

// private void ClearForwardHistory() [instance] :510
void DynamicLinearNavigation::ClearForwardHistory()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "ClearForwardHistory()");
    bool ret5;

    if (HasPages() && (_active != Front()))
    {
        int32_t target = GetPageIndex(_active);

        for (int32_t i = target - 1; i >= 0; i--)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[46/*Fuse.Node*/], NULL)), GetPage(i), &ret5);
    }

    OnHistoryChanged();
}

// public Fuse.Visual get_DesiredActive() [instance] :407
::g::Fuse::Visual* DynamicLinearNavigation::DesiredActive()
{
    return _desiredActive;
}

// public void set_DesiredActive(Fuse.Visual value) [instance] :408
void DynamicLinearNavigation::DesiredActive(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "set_DesiredActive(Fuse.Visual)");
    SetDesiredActive(value);
}

// public int get_DesiredActiveIndex() [instance] :413
int32_t DynamicLinearNavigation::DesiredActiveIndex()
{
    return _desiredIndex;
}

// public void set_DesiredActiveIndex(int value) [instance] :414
void DynamicLinearNavigation::DesiredActiveIndex(int32_t value)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "set_DesiredActiveIndex(int)");
    SetDesiredActiveIndex(value);
}

// private void DesiredTransition(Fuse.Visual target) [instance] :317
void DynamicLinearNavigation::DesiredTransition(::g::Fuse::Visual* target)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "DesiredTransition(Fuse.Visual)");
    UpdateDesired(target, -1);
    TransitionToChild(target, false, false);
}

// private void DirectSetActive(Fuse.Visual page) [instance] :431
void DynamicLinearNavigation::DirectSetActive(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "DirectSetActive(Fuse.Visual)");

    if (page == _active)
        return;

    _active = page;
    OnActiveChanged(_active);
    OnHistoryChanged();
}

// private Fuse.Visual get_Front() [instance] :545
::g::Fuse::Visual* DynamicLinearNavigation::Front()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_Front()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(0) : NULL;
}

// private bool GotoDesiredActive() [instance] :78
bool DynamicLinearNavigation::GotoDesiredActive()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "GotoDesiredActive()");
    ::g::Fuse::Visual* ind3;
    ::g::Fuse::Visual* desiredPage = NULL;

    switch (_desired)
    {
        case 0:
        {
            desiredPage = (ind3 = _active, (ind3 != NULL) ? ind3 : (::g::Fuse::Visual*)GetPage(0));
            break;
        }
        case 1:
        {
            desiredPage = _desiredActive;
            break;
        }
        case 2:
        {
            desiredPage = GetPage(_desiredIndex);
            break;
        }
    }

    if (desiredPage == NULL)
        return false;

    if (!uPtr(desiredPage)->IsRootingStarted())
    {
        CleanupListenComplete();
        _listenComplete = desiredPage;
        uPtr(_listenComplete)->add_RootingCompleted(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)DynamicLinearNavigation__GotoDesiredActiveAction_fn, this));
        return false;
    }

    UpdateDesired(desiredPage, -1);

    if (desiredPage == _active)
        return false;

    GotoImpl(desiredPage, 1);
    return true;
}

// private void GotoDesiredActiveAction() [instance] :73
void DynamicLinearNavigation::GotoDesiredActiveAction()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "GotoDesiredActiveAction()");
    GotoDesiredActive();
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :167
void DynamicLinearNavigation::GotoImpl(::g::Fuse::Visual* element, int32_t mode)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "GotoImpl(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");

    if (uPtr(element)->Parent() != Parent())
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Attempting to navigate to element with different parent"), element, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DynamicLinearNavigation.uno"), 171, uString::Const("GotoImpl"), NULL);
        return;
    }

    TransitionToChild(element, (mode & 1) == 1, false);
}

// private void GotoInternal(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :149
void DynamicLinearNavigation::GotoInternal(::g::Fuse::Visual* element, int32_t mode)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "GotoInternal(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");

    if (!IsRootingCompleted())
    {
        DirectSetActive(element);
        return;
    }

    if (element == _active)
        return;

    if (element == NULL)
        DirectSetActive(NULL);
    else
        GotoImpl(element, mode);
}

// private int get_MaxIndex() [instance] :535
int32_t DynamicLinearNavigation::MaxIndex()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_MaxIndex()");
    return PageCount() - 1;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :21
::g::Fuse::Motion::MotionConfig* DynamicLinearNavigation::Motion()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_Motion()");

    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::NavigationMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :27
void DynamicLinearNavigation::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(uString::Const("Motion should not be changed post-rooting"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DynamicLinearNavigation.uno"), 31, uString::Const("set_Motion"), NULL);
}

// private Fuse.Visual get_Next() [instance] :555
::g::Fuse::Visual* DynamicLinearNavigation::Next()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_Next()");
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnUpdated() [instance] :227
void DynamicLinearNavigation::OnUpdated()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "OnUpdated()");
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Updated called without a region"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/DynamicLinearNavigation.uno"), 231, uString::Const("OnUpdated"));
        return;
    }

    float prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret9), ret9).X;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()), ::g::Fuse::Time::FrameInterval());
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret10), ret10).X, 2);
    CheckNeedUpdate(true);
}

// private Fuse.Visual get_Previous() [instance] :550
::g::Fuse::Visual* DynamicLinearNavigation::Previous()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_Previous()");
    return GetPage(GetPageIndex(_active) + 1);
}

// public float get_Progress() [instance] :381
float DynamicLinearNavigation::Progress()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_Progress()");
    ::g::Uno::Float2 ret13;
    return (_region == NULL) ? _progress : (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret13), ret13).X;
}

// private void ResetRegionLimits() [instance] :246
void DynamicLinearNavigation::ResetRegionLimits()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "ResetRegionLimits()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2((float)MaxIndex(), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New1(0.0f));
}

// public float2 get_SeekRange() [instance] :459
::g::Uno::Float2 DynamicLinearNavigation::SeekRange()
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "get_SeekRange()");
    return ::g::Uno::Float2__New2(-_seekBase, (float)MaxIndex() - _seekBase);
}

// private void SetDesiredActive(Fuse.Visual page) [instance] :417
void DynamicLinearNavigation::SetDesiredActive(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "SetDesiredActive(Fuse.Visual)");
    UpdateDesired(page, -1);
    _desired = 1;
    GotoInternal(page, 0);
}

// private void SetDesiredActiveIndex(int index) [instance] :424
void DynamicLinearNavigation::SetDesiredActiveIndex(int32_t index)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "SetDesiredActiveIndex(int)");
    UpdateDesired(NULL, index);
    _desired = 2;
    GotoInternal(_desiredActive, 0);
}

// private void SetProgress(float value) [instance] :252
void DynamicLinearNavigation::SetProgress(float value)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "SetProgress(float)");
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;
    float prev;

    if (_region != NULL)
    {
        ResetRegionLimits();
        prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret11), ret11).X;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(value, 0.0f)));
        value = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret12), ret12).X;
    }
    else
    {
        prev = _progress;
        _progress = value;
    }

    ChangeProgress(prev, value, 1);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) [instance] :181
bool DynamicLinearNavigation::TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "TransitionToChild(Fuse.Visual,[bool],[bool])");
    float targetProgress = (float)GetPageIndex(element);
    DirectSetActive(element);

    if (bypass || !IsRootingCompleted())
    {
        SetProgress(targetProgress);
        OnNavigated(element);
        return false;
    }

    if (Progress() == targetProgress)
    {
        OnStateChanged(0);
        return false;
    }

    OnStateChanged(2);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(targetProgress, 0.0f));
    CheckNeedUpdate(false);
    return true;
}

// private void UpdateDesired(Fuse.Visual target, int index) [instance] :326
void DynamicLinearNavigation::UpdateDesired(::g::Fuse::Visual* target, int32_t index)
{
    uStackFrame __("Fuse.Navigation.DynamicLinearNavigation", "UpdateDesired(Fuse.Visual,int)");

    if (target != NULL)
    {
        ::g::Fuse::Navigation::PageData* pd = GetPageData(target);
        index = (pd == NULL) ? -1 : uPtr(pd)->Index;
    }
    else
        target = GetPage(index);

    if (_desiredActive != target)
    {
        _desiredActive = target;
        OnPropertyChanged(DynamicLinearNavigation::DesiredActiveName_);
    }

    if (_desiredIndex != index)
    {
        _desiredIndex = index;
        OnPropertyChanged(DynamicLinearNavigation::DesiredActiveIndexName_);
    }
}

// public generated DynamicLinearNavigation New() [static] :13
DynamicLinearNavigation* DynamicLinearNavigation::New2()
{
    DynamicLinearNavigation* obj4 = (DynamicLinearNavigation*)uNew(DynamicLinearNavigation_typeof());
    obj4->ctor_4();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/EdgeNavigation.uno
// ----------------------------------------------------------------------

// public sealed class EdgeNavigation :20
// {
// static generated EdgeNavigation() :20
static void EdgeNavigation__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    EdgeNavigation::_edgeHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void EdgeNavigation_build(uType* type)
{
    ::STRINGS[6] = uString::Const("EdgeNavigation may not work as expected with more than one main (non-edge) page.");
    ::STRINGS[7] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/EdgeNavigation.uno");
    ::STRINGS[8] = uString::Const("CheckChildren");
    ::STRINGS[9] = uString::Const("Element");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::STRINGS[11] = uString::Const("EdgeNavigation must be rooted in an Element");
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[10] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    ::TYPES[14] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface9));
    type->SetFields(26,
        ::TYPES[13/*Fuse.Visual*/], offsetof(EdgeNavigation, _active), 0,
        ::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/], offsetof(EdgeNavigation, _swipers), 0,
        ::TYPES[8/*Uno.Collections.List<Fuse.Visual>*/], offsetof(EdgeNavigation, _mains), 0,
        ::g::Uno::Double_typeof(), offsetof(EdgeNavigation, _maxProgress), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&EdgeNavigation::_edgeHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetEdge", NULL, (void*)EdgeNavigation__GetEdge_fn, 0, true, ::g::Fuse::Navigation::NavigationEdge_typeof(), 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction(".ctor", NULL, (void*)EdgeNavigation__New2_fn, 0, true, type, 0),
        new uFunction("ResetEdge", NULL, (void*)EdgeNavigation__ResetEdge_fn, 0, true, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction("SetEdge", NULL, (void*)EdgeNavigation__SetEdge_fn, 0, true, uVoid_typeof(), 2, ::TYPES[13/*Fuse.Visual*/], ::g::Fuse::Navigation::NavigationEdge_typeof()));
}

::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(EdgeNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.EdgeNavigation", options);
    type->fp_build_ = EdgeNavigation_build;
    type->fp_ctor_ = (void*)EdgeNavigation__New2_fn;
    type->fp_cctor_ = EdgeNavigation__cctor_2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))EdgeNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))EdgeNavigation__GoBack_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int32_t*))EdgeNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))EdgeNavigation__get_PageProgress_fn;
    type->fp_Toggle = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->interface7.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int32_t*))EdgeNavigation__Goto_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_PageProgress = (void(*)(uObject*, double*))EdgeNavigation__get_PageProgress_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))EdgeNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated EdgeNavigation() :20
void EdgeNavigation__ctor_4_fn(EdgeNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :73
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_Active()");
    ::g::Fuse::Visual* ret19;

    if ((__this->_active == NULL) && (uPtr(__this->_mains)->Count() > 0))
        return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_mains), uCRef<int32_t>(0), &ret19), ret19), void();

    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :81
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "set_Active(Fuse.Visual)");
    __this->Goto(value, 0);
}

// public override sealed bool get_CanGoBack() :228
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_CanGoBack()");
    return *__retval = __this->IsAnyPanelActive(), void();
}

// private void CheckChildren() :132
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this)
{
    __this->CheckChildren();
}

// private void CheckProgress() :176
void EdgeNavigation__CheckProgress_fn(EdgeNavigation* __this)
{
    __this->CheckProgress();
}

// private void ClearChildren() :121
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) :31
void EdgeNavigation__GetEdge_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = EdgeNavigation::GetEdge(elm);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :235
void EdgeNavigation__GetPageState_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection8;
    ::g::Fuse::Navigation::NavigationPageState collection9;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret14;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum7 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret14), ret14);

    {
        try
        {
            {
                while (enum7.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum7.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

                    if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == page)
                    {
                        collection8 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
                        collection8.Progress = (1.0f - (float)uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress());
                        collection8.PreviousProgress = 0.0f;
                        ::g::Fuse::Navigation::NavigationPageState __uno_retval = collection8;
                        enum7.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
                        return *__retval = __uno_retval, void();
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum7.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum7.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    collection9 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection9.Progress = (float)-__this->_maxProgress;
    collection9.PreviousProgress = 0.0f;
    return *__retval = collection9, void();
}

// public override sealed void GoBack() :222
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GoBack()");
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret15;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum6 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret15), ret15);

    {
        try
        {
            {
                while (enum6.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum6.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
                    uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum6.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            enum6.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        }
        __after_finally_1:;
    }
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :45
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Visual* element, int32_t* mode)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int32_t mode_ = *mode;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret16;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret16), ret16);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

                    if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == element)
                        uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Enable();
                    else
                        uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            enum1.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        }
        __after_finally_2:;
    }

    __this->CheckProgress();
}

// internal bool IsAnyPanelActive() :212
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval)
{
    *__retval = __this->IsAnyPanelActive();
}

// internal bool IsDismissPoint(float2 windowPoint) :200
void EdgeNavigation__IsDismissPoint_fn(EdgeNavigation* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsDismissPoint(*windowPoint);
}

// public generated EdgeNavigation New() :20
void EdgeNavigation__New2_fn(EdgeNavigation** __retval)
{
    *__retval = EdgeNavigation::New2();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :106
void EdgeNavigation__OnChildAddedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :112
void EdgeNavigation__OnChildRemovedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// private void OnProgressChanged(object s, double progress) :165
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged(s, *progress);
}

// protected override sealed void OnRooted() :87
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnRooted()");
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (!uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[9/*Fuse.Elements.Element*/]))
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[9/*"Element"*/], __this->Parent(), __this, ::STRINGS[7/*"/usr/local/...*/], 92, ::STRINGS[10/*"OnRooted"*/]);
        U_THROW(::g::Uno::Exception::New2(::STRINGS[11/*"EdgeNavigat...*/]));
    }

    __this->CheckChildren();
}

// protected override sealed void OnUnrooted() :100
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnUnrooted()");
    __this->ClearChildren();
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// public override sealed double get_PageProgress() :232
void EdgeNavigation__get_PageProgress_fn(EdgeNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "get_PageProgress()");
    return *__retval = (double)__this->GetPageIndex(__this->_active), void();
}

// public static void ResetEdge(Fuse.Visual elm) :40
void EdgeNavigation__ResetEdge_fn(::g::Fuse::Visual* elm)
{
    EdgeNavigation::ResetEdge(elm);
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) :25
void EdgeNavigation__SetEdge_fn(::g::Fuse::Visual* elm, int32_t* edge)
{
    EdgeNavigation::SetEdge(elm, *edge);
}

// public override sealed void Toggle(Fuse.Visual page) :62
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "Toggle(Fuse.Visual)");

    if (__this->Active() == page)
        __this->Active(NULL);
    else
        __this->Active(page);
}

uSStrong< ::g::Fuse::PropertyHandle*> EdgeNavigation::_edgeHandle_;

// public generated EdgeNavigation() [instance] :20
void EdgeNavigation::ctor_4()
{
    _swipers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]));
    _mains = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[8/*Uno.Collections.List<Fuse.Visual>*/]));
    ctor_3();
}

// private void CheckChildren() [instance] :132
void EdgeNavigation::CheckChildren()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "CheckChildren()");
    ::g::Fuse::Navigation::PageData* ret11;
    ClearChildren();

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Navigation.PageData>*/])); i++)
    {
        ::g::Fuse::Visual* nodeChild = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[6/*Uno.Collections.IList<Fuse.Navigation.PageData>*/]), uCRef<int32_t>(i), &ret11), ret11))->Visual();
        ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(nodeChild, ::TYPES[9/*Fuse.Elements.Element*/]);
        int32_t edge = (element == NULL) ? 4 : EdgeNavigation::GetEdge(element);

        if (edge == 4)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_mains), nodeChild);

            if (uPtr(_mains)->Count() > 1)
                ::g::Fuse::Diagnostics::UserWarning(::STRINGS[6/*"EdgeNavigat...*/], this, ::STRINGS[7/*"/usr/local/...*/], 147, ::STRINGS[8/*"CheckChildren"*/]);
        }
        else
        {
            ::g::Fuse::Gestures::Internal::EdgeSwiper* s = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
            s->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(uDelegate::New(::TYPES[10/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            s->Rooted(uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[9/*Fuse.Elements.Element*/]));
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_swipers), uCRef<int32_t>(edge), s);
        }
    }

    OnPageProgressChanged1(1);
}

// private void CheckProgress() [instance] :176
void EdgeNavigation::CheckProgress()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "CheckProgress()");
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret12;
    ::g::Fuse::Visual* maxPage = NULL;
    _maxProgress = 0.0;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret12), ret12);

    {
        try
        {
            {
                while (enum3.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum3.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

                    if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > _maxProgress)
                    {
                        maxPage = uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target();
                        _maxProgress = uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress();
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum3.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            enum3.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        }
        __after_finally_3:;
    }

    ::g::Fuse::Visual* newActive = (_maxProgress == 0.0) ? uCast< ::g::Fuse::Visual*>(NULL, ::TYPES[13/*Fuse.Visual*/]) : maxPage;

    if (newActive != _active)
    {
        _active = newActive;
        OnActiveChanged(_active);
    }

    OnPageProgressChanged1(2);
}

// private void ClearChildren() [instance] :121
void EdgeNavigation::ClearChildren()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "ClearChildren()");
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret13;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret13), ret13);

    {
        try
        {
            {
                while (enum2.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > s = enum2.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
                    uPtr(s.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->remove_ProgressChanged(uDelegate::New(::TYPES[10/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
                    uPtr(s.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Unrooted();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            enum2.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        }
        __after_finally_4:;
    }

    uPtr(_swipers)->Clear();
    uPtr(_mains)->Clear();
}

// internal bool IsAnyPanelActive() [instance] :212
bool EdgeNavigation::IsAnyPanelActive()
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "IsAnyPanelActive()");
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret17;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret17), ret17);

    {
        try
        {
            {
                while (enum5.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum5.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

                    if (uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > 0.0)
                    {
                        bool __uno_retval = true;
                        enum5.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum5.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            enum5.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        }
        __after_finally_5:;
    }

    return false;
}

// internal bool IsDismissPoint(float2 windowPoint) [instance] :200
bool EdgeNavigation::IsDismissPoint(::g::Uno::Float2 windowPoint)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "IsDismissPoint(float2)");
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret18;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret18), ret18);

    {
        try
        {
            {
                while (enum4.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum4.Current(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
                    ::g::Uno::Float2 local = uPtr(uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->WindowToLocal(windowPoint);

                    if (uPtr(uPtr(sw.Value(::TYPES[12/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target())->IsPointInside(local))
                    {
                        bool __uno_retval = false;
                        enum4.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum4.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            enum4.Dispose(::TYPES[11/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        }
        __after_finally_6:;
    }

    return true;
}

// private void OnProgressChanged(object s, double progress) [instance] :165
void EdgeNavigation::OnProgressChanged(uObject* s, double progress)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "OnProgressChanged(object,double)");
    ::g::Fuse::Gestures::Internal::EdgeSwiper* swiper = uAs< ::g::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::TYPES[14/*Fuse.Gestures.Internal.EdgeSwiper*/]);
    ::g::Fuse::Elements::Element* panel = uPtr(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
        return;

    CheckProgress();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) [static] :31
int32_t EdgeNavigation::GetEdge(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "GetEdge(Fuse.Visual)");
    EdgeNavigation_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(elm)->Properties())->TryGet(EdgeNavigation::_edgeHandle_, &res))
        return uUnbox<int32_t>(::g::Fuse::Navigation::NavigationEdge_typeof(), res);

    return 4;
}

// public generated EdgeNavigation New() [static] :20
EdgeNavigation* EdgeNavigation::New2()
{
    EdgeNavigation* obj10 = (EdgeNavigation*)uNew(EdgeNavigation_typeof());
    obj10->ctor_4();
    return obj10;
}

// public static void ResetEdge(Fuse.Visual elm) [static] :40
void EdgeNavigation::ResetEdge(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "ResetEdge(Fuse.Visual)");
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(EdgeNavigation::_edgeHandle_);
}

// public static void SetEdge(Fuse.Visual elm, Fuse.Navigation.NavigationEdge edge) [static] :25
void EdgeNavigation::SetEdge(::g::Fuse::Visual* elm, int32_t edge)
{
    uStackFrame __("Fuse.Navigation.EdgeNavigation", "SetEdge(Fuse.Visual,Fuse.Navigation.NavigationEdge)");
    EdgeNavigation_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(EdgeNavigation::_edgeHandle_, uBox<int32_t>(::g::Fuse::Navigation::NavigationEdge_typeof(), edge));
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/SwipeNavigate.uno
// ---------------------------------------------------------------------

// internal sealed class EndSeekArgs :50
// {
static void EndSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::SnapTo_typeof(), offsetof(EndSeekArgs, _SnapTo), 0,
        ::g::Uno::Float_typeof(), offsetof(EndSeekArgs, _Velocity), 0);
}

uType* EndSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EndSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.EndSeekArgs", options);
    type->fp_build_ = EndSeekArgs_build;
    return type;
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) :55
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int32_t* snapTo, float* velocity)
{
    __this->ctor_(*snapTo, *velocity);
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) :55
void EndSeekArgs__New1_fn(int32_t* snapTo, float* velocity, EndSeekArgs** __retval)
{
    *__retval = EndSeekArgs::New1(*snapTo, *velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() :53
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int32_t* __retval)
{
    *__retval = __this->SnapTo();
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) :53
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int32_t* value)
{
    __this->SnapTo(*value);
}

// public generated float get_Velocity() :52
void EndSeekArgs__get_Velocity_fn(EndSeekArgs* __this, float* __retval)
{
    *__retval = __this->Velocity();
}

// private generated void set_Velocity(float value) :52
void EndSeekArgs__set_Velocity_fn(EndSeekArgs* __this, float* value)
{
    __this->Velocity(*value);
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) [instance] :55
void EndSeekArgs::ctor_(int32_t snapTo, float velocity)
{
    SnapTo(snapTo);
    Velocity(velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() [instance] :53
int32_t EndSeekArgs::SnapTo()
{
    return _SnapTo;
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) [instance] :53
void EndSeekArgs::SnapTo(int32_t value)
{
    _SnapTo = value;
}

// public generated float get_Velocity() [instance] :52
float EndSeekArgs::Velocity()
{
    return _Velocity;
}

// private generated void set_Velocity(float value) [instance] :52
void EndSeekArgs::Velocity(float value)
{
    _Velocity = value;
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) [static] :55
EndSeekArgs* EndSeekArgs::New1(int32_t snapTo, float velocity)
{
    EndSeekArgs* obj1 = (EndSeekArgs*)uNew(EndSeekArgs_typeof());
    obj1->ctor_(snapTo, velocity);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public abstract class EnterExitAnimation :134
// {
static void EnterExitAnimation_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface8));
    type->SetFields(44,
        ::g::Uno::Bool_typeof(), offsetof(EnterExitAnimation, PositiveProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(EnterExitAnimation, NegativeProgress), 0);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 46;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(EnterExitAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnterExitAnimation", options);
    type->fp_build_ = EnterExitAnimation_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))EnterExitAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))EnterExitAnimation__OnNavigationStateChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated EnterExitAnimation() :134
void EnterExitAnimation__ctor_6_fn(EnterExitAnimation* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :136
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", "ForceUpdate()");
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;

    if (__this->IsMatch((double)p))
        __this->Seek((double)(__this->Scale() * ::g::Uno::Math::Abs1(p)), 0);
}

// private bool IsMatch(double progress) :143
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval)
{
    *__retval = __this->IsMatch(*progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :151
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.EnterExitAnimation", "OnNavigationStateChanged(object,Fuse.Navigation.NavigationArgs)");
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int32_t d = (::g::Uno::Math::Abs1(ps.PreviousProgress) < ::g::Uno::Math::Abs1(ps.Progress)) ? 0 : 1;

    if (!__this->IsMatch((double)ps.Progress))
    {
        __this->Seek(0.0, d);
        return;
    }

    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// protected generated EnterExitAnimation() [instance] :134
void EnterExitAnimation::ctor_6()
{
    ctor_5();
}

// private bool IsMatch(double progress) [instance] :143
bool EnterExitAnimation::IsMatch(double progress)
{
    return (PositiveProgress && (progress >= 0.0)) || (NegativeProgress && (progress <= 0.0));
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public class EnteringAnimation :226
// {
static void EnteringAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface8));
    type->SetFields(46);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EnteringAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 46;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(EnteringAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnteringAnimation", options);
    type->fp_build_ = EnteringAnimation_build;
    type->fp_ctor_ = (void*)EnteringAnimation__New2_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EnteringAnimation() :228
void EnteringAnimation__ctor_7_fn(EnteringAnimation* __this)
{
    __this->ctor_7();
}

// public EnteringAnimation New() :228
void EnteringAnimation__New2_fn(EnteringAnimation** __retval)
{
    *__retval = EnteringAnimation::New2();
}

// public EnteringAnimation() [instance] :228
void EnteringAnimation::ctor_7()
{
    ctor_6();
    PositiveProgress = true;
}

// public EnteringAnimation New() [static] :228
EnteringAnimation* EnteringAnimation::New2()
{
    EnteringAnimation* obj1 = (EnteringAnimation*)uNew(EnteringAnimation_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public class ExitingAnimation :191
// {
static void ExitingAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface8));
    type->SetFields(46);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitingAnimation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 46;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(ExitingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ExitingAnimation", options);
    type->fp_build_ = ExitingAnimation_build;
    type->fp_ctor_ = (void*)ExitingAnimation__New2_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ExitingAnimation() :193
void ExitingAnimation__ctor_7_fn(ExitingAnimation* __this)
{
    __this->ctor_7();
}

// public ExitingAnimation New() :193
void ExitingAnimation__New2_fn(ExitingAnimation** __retval)
{
    *__retval = ExitingAnimation::New2();
}

// public ExitingAnimation() [instance] :193
void ExitingAnimation::ctor_7()
{
    ctor_6();
    NegativeProgress = true;
}

// public ExitingAnimation New() [static] :193
ExitingAnimation* ExitingAnimation::New2()
{
    ExitingAnimation* obj1 = (ExitingAnimation*)uNew(ExitingAnimation_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ExplicitNavigation.uno
// --------------------------------------------------------------------------

// internal sealed class ExplicitNavigation :9
// {
static void ExplicitNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface9));
    type->SetFields(26,
        ::g::Fuse::Visual_typeof(), offsetof(ExplicitNavigation, _active), 0);
}

::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(ExplicitNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.ExplicitNavigation", options);
    type->fp_build_ = ExplicitNavigation_build;
    type->fp_ctor_ = (void*)ExplicitNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))ExplicitNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))ExplicitNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int32_t*))ExplicitNavigation__Goto_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))ExplicitNavigation__get_PageProgress_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface7.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int32_t*))ExplicitNavigation__Goto_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_PageProgress = (void(*)(uObject*, double*))ExplicitNavigation__get_PageProgress_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated ExplicitNavigation() :9
void ExplicitNavigation__ctor_4_fn(ExplicitNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :26
void ExplicitNavigation__get_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :27
void ExplicitNavigation__set_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "set_Active(Fuse.Visual)");

    if (__this->_active != value)
    {
        __this->_active = value;
        __this->OnActiveChanged(__this->_active);
        __this->OnNavigated(__this->_active);
    }
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :11
void ExplicitNavigation__Goto_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* visual, int32_t* mode)
{
    int32_t mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    __this->SetPageProgress(visual, 0.0f, false);
    __this->Active(visual);
    __this->OnPageProgressChanged1((mode_ == 1) ? 1 : 0);
}

// public generated ExplicitNavigation New() :9
void ExplicitNavigation__New2_fn(ExplicitNavigation** __retval)
{
    *__retval = ExplicitNavigation::New2();
}

// public override sealed double get_PageProgress() :40
void ExplicitNavigation__get_PageProgress_fn(ExplicitNavigation* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) :59
void ExplicitNavigation__SetPageProgress_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, bool* update)
{
    __this->SetPageProgress(page, *progress, *update);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) :54
void ExplicitNavigation__SetPageProgress1_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update)
{
    __this->SetPageProgress1(page, *progress, *previous, *update);
}

// private void SetPageProgress(Fuse.Visual page, float progress, float previous, bool update, bool havPrev) :43
void ExplicitNavigation__SetPageProgress2_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update, bool* havPrev)
{
    __this->SetPageProgress2(page, *progress, *previous, *update, *havPrev);
}

// public void SetState(Fuse.Navigation.NavigationState state) :69
void ExplicitNavigation__SetState_fn(ExplicitNavigation* __this, int32_t* state)
{
    __this->SetState(*state);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) :64
void ExplicitNavigation__UpdateProgress_fn(ExplicitNavigation* __this, int32_t* mode)
{
    __this->UpdateProgress(*mode);
}

// public generated ExplicitNavigation() [instance] :9
void ExplicitNavigation::ctor_4()
{
    ctor_3();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) [instance] :59
void ExplicitNavigation::SetPageProgress(::g::Fuse::Visual* page, float progress, bool update)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetPageProgress(Fuse.Visual,float,[bool])");
    SetPageProgress2(page, progress, 0.0f, update, false);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) [instance] :54
void ExplicitNavigation::SetPageProgress1(::g::Fuse::Visual* page, float progress, float previous, bool update)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetPageProgress(Fuse.Visual,float,float,[bool])");
    SetPageProgress2(page, progress, previous, update, true);
}

// private void SetPageProgress(Fuse.Visual page, float progress, float previous, bool update, bool havPrev) [instance] :43
void ExplicitNavigation::SetPageProgress2(::g::Fuse::Visual* page, float progress, float previous, bool update, bool havPrev)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetPageProgress(Fuse.Visual,float,float,bool,bool)");
    ::g::Fuse::Navigation::PageData* pd = GetPageData(page);

    if (pd == NULL)
        return;

    uPtr(pd)->PreviousProgress = (havPrev ? previous : uPtr(pd)->Progress);
    pd->Progress = progress;

    if (update)
        OnPageProgressChanged1(0);
}

// public void SetState(Fuse.Navigation.NavigationState state) [instance] :69
void ExplicitNavigation::SetState(int32_t state)
{
    uStackFrame __("Fuse.Navigation.ExplicitNavigation", "SetState(Fuse.Navigation.NavigationState)");
    OnStateChanged(state);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) [instance] :64
void ExplicitNavigation::UpdateProgress(int32_t mode)
{
    OnPageProgressChanged1(mode);
}

// public generated ExplicitNavigation New() [static] :9
ExplicitNavigation* ExplicitNavigation::New2()
{
    ExplicitNavigation* obj1 = (ExplicitNavigation*)uNew(ExplicitNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno
// ---------------------------------------------------------------------

// public enum RouterRequest.Fields :90
uEnumType* RouterRequest__Fields_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RouterRequest.Fields", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "How", 1LL,
        "Route", 2LL,
        "Relative", 4LL,
        "Transition", 8LL,
        "Style", 16LL,
        "Bookmark", 32LL,
        "Path", 64LL,
        "Operation", 128LL,
        "Standard", 127LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/FindRouter.uno
// ------------------------------------------------------------------

// public sealed class FindRouter :25
// {
static void FindRouter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FindRouter__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Expression_type* FindRouter_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FindRouter);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Navigation.FindRouter", options);
    type->fp_build_ = FindRouter_build;
    type->fp_ctor_ = (void*)FindRouter__New1_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))FindRouter__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))FindRouter__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public FindRouter() :28
void FindRouter__ctor_1_fn(FindRouter* __this)
{
    __this->ctor_1();
}

// public FindRouter New() :28
void FindRouter__New1_fn(FindRouter** __retval)
{
    *__retval = FindRouter::New1();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :32
void FindRouter__Subscribe_fn(FindRouter* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Navigation.FindRouter", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)FindRouter__Subscription::New1(__this, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::TYPES[19/*Fuse.Reactive.IContext*/])), listener), void();
}

// public FindRouter() [instance] :28
void FindRouter::ctor_1()
{
    ctor_();
}

// public FindRouter New() [static] :28
FindRouter* FindRouter::New1()
{
    FindRouter* obj1 = (FindRouter*)uNew(FindRouter_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno
// --------------------------------------------------------------------

// internal enum RouterModify.Flags :98
uEnumType* RouterModify__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RouterModify.Flags", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "None", 0LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno
// ---------------------------------------------------------------------

// public enum RouterRequest.Flags :36
uEnumType* RouterRequest__Flags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RouterRequest.Flags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "FlatRoute", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno
// --------------------------------------------------------------

// private sealed class Router.GetHistoryAt :773
// {
static void Router__GetHistoryAt_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Router__GetHistoryAt, At), 0,
        ::g::Fuse::Navigation::RouterPageRoute_typeof(), offsetof(Router__GetHistoryAt, Result), 0);
}

uType* Router__GetHistoryAt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Router__GetHistoryAt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Router.GetHistoryAt", options);
    type->fp_build_ = Router__GetHistoryAt_build;
    type->fp_ctor_ = (void*)Router__GetHistoryAt__New1_fn;
    return type;
}

// public generated GetHistoryAt() :773
void Router__GetHistoryAt__ctor__fn(Router__GetHistoryAt* __this)
{
    __this->ctor_();
}

// public bool HistoryAction(Uno.Collections.List<Fuse.Navigation.RouterPage> stack) :779
void Router__GetHistoryAt__HistoryAction_fn(Router__GetHistoryAt* __this, ::g::Uno::Collections::List* stack, bool* __retval)
{
    *__retval = __this->HistoryAction(stack);
}

// public generated GetHistoryAt New() :773
void Router__GetHistoryAt__New1_fn(Router__GetHistoryAt** __retval)
{
    *__retval = Router__GetHistoryAt::New1();
}

// public generated GetHistoryAt() [instance] :773
void Router__GetHistoryAt::ctor_()
{
}

// public bool HistoryAction(Uno.Collections.List<Fuse.Navigation.RouterPage> stack) [instance] :779
bool Router__GetHistoryAt::HistoryAction(::g::Uno::Collections::List* stack)
{
    uStackFrame __("Fuse.Navigation.Router.GetHistoryAt", "HistoryAction(Uno.Collections.List<Fuse.Navigation.RouterPage>)");
    ::g::Fuse::Navigation::RouterPage* ret2;
    ::g::Fuse::Navigation::RouterPageRoute* r = NULL;

    for (int32_t i = uPtr(stack)->Count() - 1; i >= 0; --i)
        r = ::g::Fuse::Navigation::RouterPageRoute::New1((::g::Uno::Collections::List__get_Item_fn(uPtr(stack), uCRef<int32_t>(i), &ret2), ret2), r);

    if (At == 0)
        Result = r;

    At--;
    return At >= 0;
}

// public generated GetHistoryAt New() [static] :773
Router__GetHistoryAt* Router__GetHistoryAt::New1()
{
    Router__GetHistoryAt* obj1 = (Router__GetHistoryAt*)uNew(Router__GetHistoryAt_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno
// --------------------------------------------------------------------------

// private sealed class Router.GetRouteCallback :323
// {
static void Router__GetRouteCallback_build(uType* type)
{
    ::TYPES[15] = uObject_typeof()->Array();
    ::TYPES[16] = ::g::Fuse::Scripting::IThreadWorker_typeof();
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[16/*Fuse.Scripting.IThreadWorker*/], offsetof(Router__GetRouteCallback, _threadWorker), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Router__GetRouteCallback, _router), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(Router__GetRouteCallback, _callback), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(Router__GetRouteCallback, _route), 0);
}

uType* Router__GetRouteCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Router__GetRouteCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Router.GetRouteCallback", options);
    type->fp_build_ = Router__GetRouteCallback_build;
    return type;
}

// public GetRouteCallback(Fuse.Scripting.IThreadWorker threadWorker, Fuse.Navigation.Router router, Fuse.Scripting.Function callback) :331
void Router__GetRouteCallback__ctor__fn(Router__GetRouteCallback* __this, uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback)
{
    __this->ctor_(threadWorker, router, callback);
}

// public GetRouteCallback New(Fuse.Scripting.IThreadWorker threadWorker, Fuse.Navigation.Router router, Fuse.Scripting.Function callback) :331
void Router__GetRouteCallback__New1_fn(uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback, Router__GetRouteCallback** __retval)
{
    *__retval = Router__GetRouteCallback::New1(threadWorker, router, callback);
}

// public void RunJS(Fuse.Scripting.Context context) :344
void Router__GetRouteCallback__RunJS_fn(Router__GetRouteCallback* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->RunJS(context);
}

// public void RunUI() :338
void Router__GetRouteCallback__RunUI_fn(Router__GetRouteCallback* __this)
{
    __this->RunUI();
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.Context context, Fuse.Navigation.Route route) :349
void Router__GetRouteCallback__ToArray_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = Router__GetRouteCallback::ToArray(context, route);
}

// public GetRouteCallback(Fuse.Scripting.IThreadWorker threadWorker, Fuse.Navigation.Router router, Fuse.Scripting.Function callback) [instance] :331
void Router__GetRouteCallback::ctor_(uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback)
{
    _threadWorker = threadWorker;
    _router = router;
    _callback = callback;
}

// public void RunJS(Fuse.Scripting.Context context) [instance] :344
void Router__GetRouteCallback::RunJS(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Navigation.Router.GetRouteCallback", "RunJS(Fuse.Scripting.Context)");
    uPtr(_callback)->Call(context, uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, (::g::Fuse::Scripting::Array*)Router__GetRouteCallback::ToArray(context, _route)));
}

// public void RunUI() [instance] :338
void Router__GetRouteCallback::RunUI()
{
    uStackFrame __("Fuse.Navigation.Router.GetRouteCallback", "RunUI()");
    _route = uPtr(_router)->GetCurrentRoute();
    ::g::Fuse::Scripting::IThreadWorker::Invoke1(uInterface(uPtr(_threadWorker), ::TYPES[16/*Fuse.Scripting.IThreadWorker*/]), uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Router__GetRouteCallback__RunJS_fn, this));
}

// public GetRouteCallback New(Fuse.Scripting.IThreadWorker threadWorker, Fuse.Navigation.Router router, Fuse.Scripting.Function callback) [static] :331
Router__GetRouteCallback* Router__GetRouteCallback::New1(uObject* threadWorker, ::g::Fuse::Navigation::Router* router, ::g::Fuse::Scripting::Function* callback)
{
    Router__GetRouteCallback* obj1 = (Router__GetRouteCallback*)uNew(Router__GetRouteCallback_typeof());
    obj1->ctor_(threadWorker, router, callback);
    return obj1;
}

// private static Fuse.Scripting.Array ToArray(Fuse.Scripting.Context context, Fuse.Navigation.Route route) [static] :349
::g::Fuse::Scripting::Array* Router__GetRouteCallback::ToArray(::g::Fuse::Scripting::Context* context, ::g::Fuse::Navigation::Route* route)
{
    uStackFrame __("Fuse.Navigation.Router.GetRouteCallback", "ToArray(Fuse.Scripting.Context,Fuse.Navigation.Route)");
    int32_t len = uPtr(route)->Length();
    ::g::Fuse::Scripting::Array* arr = uPtr(context)->NewArray(uArray::Init<uObject*>(::TYPES[15/*object[]*/], 1, uBox<int32_t>(::g::Uno::Int_typeof(), len * 2)));

    for (int32_t i = 0; i < len; i++)
    {
        uPtr(arr)->Item(i * 2, uPtr(route)->Path);
        arr->Item((i * 2) + 1, uPtr(context)->ParseJson(route->Parameter));
        route = uPtr(route)->SubRoute;
    }

    return arr;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class GoBack :182
// {
static void GoBack_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type, interface0));
    type->SetFields(12);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoBack__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoBack", options);
    type->fp_build_ = GoBack_build;
    type->fp_ctor_ = (void*)GoBack__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoBack__Perform1_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated GoBack() :182
void GoBack__ctor_3_fn(GoBack* __this)
{
    __this->ctor_3();
}

// public generated GoBack New() :182
void GoBack__New2_fn(GoBack** __retval)
{
    *__retval = GoBack::New2();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :184
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.GoBack", "Perform(Fuse.Navigation.IBaseNavigation,Fuse.Node)");

    if (::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(ctx), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(ctx), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoBack() [instance] :182
void GoBack::ctor_3()
{
    ctor_2();
}

// public generated GoBack New() [static] :182
GoBack* GoBack::New2()
{
    GoBack* obj1 = (GoBack*)uNew(GoBack_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class GoForward :217
// {
static void GoForward_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type, interface0));
    type->SetFields(12);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GoForward__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoForward", options);
    type->fp_build_ = GoForward_build;
    type->fp_ctor_ = (void*)GoForward__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoForward__Perform1_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated GoForward() :217
void GoForward__ctor_3_fn(GoForward* __this)
{
    __this->ctor_3();
}

// public generated GoForward New() :217
void GoForward__New2_fn(GoForward** __retval)
{
    *__retval = GoForward::New2();
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :220
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.GoForward", "Perform(Fuse.Navigation.IBaseNavigation,Fuse.Node)");

    if (::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(ctx), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(ctx), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]));
}

// public generated GoForward() [instance] :217
void GoForward::ctor_3()
{
    ctor_2();
}

// public generated GoForward New() [static] :217
GoForward* GoForward::New2()
{
    GoForward* obj1 = (GoForward*)uNew(GoForward_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno
// --------------------------------------------------------------------

// public sealed class GotoRoute :238
// {
static void GotoRoute_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::RouterModify_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Navigation::RouterModify_type, interface1));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GotoRoute__New4_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::RouterModify_type* GotoRoute_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouterModify_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouterModify_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GotoRoute);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouterModify_type);
    type = (::g::Fuse::Navigation::RouterModify_type*)uClassType::New("Fuse.Navigation.GotoRoute", options);
    type->fp_build_ = GotoRoute_build;
    type->fp_ctor_ = (void*)GotoRoute__New4_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Navigation::RouterModify__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Navigation::RouterModify__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public GotoRoute() :241
void GotoRoute__ctor_4_fn(GotoRoute* __this)
{
    __this->ctor_4();
}

// public GotoRoute New() :241
void GotoRoute__New4_fn(GotoRoute** __retval)
{
    *__retval = GotoRoute::New4();
}

// public GotoRoute() [instance] :241
void GotoRoute::ctor_4()
{
    uStackFrame __("Fuse.Navigation.GotoRoute", ".ctor()");
    ctor_3(0);
    How(1);
}

// public GotoRoute New() [static] :241
GotoRoute* GotoRoute::New4()
{
    GotoRoute* obj1 = (GotoRoute*)uNew(GotoRoute_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public sealed class GotoRouteCommand :178
// {
static void GotoRouteCommand_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GotoRouteCommand__New1_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::RouteModificationCommand_type* GotoRouteCommand_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouteModificationCommand_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GotoRouteCommand);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouteModificationCommand_type);
    type = (::g::Fuse::Navigation::RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.GotoRouteCommand", options);
    type->fp_build_ = GotoRouteCommand_build;
    type->fp_ctor_ = (void*)GotoRouteCommand__New1_fn;
    type->fp_ProcessArguments = (void(*)(::g::Fuse::Navigation::RouteModificationCommand*, ::g::Fuse::Navigation::RouterRequest*, uArray*, bool*))GotoRouteCommand__ProcessArguments_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Navigation::RouteModificationCommand__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public generated GotoRouteCommand() :178
void GotoRouteCommand__ctor_3_fn(GotoRouteCommand* __this)
{
    __this->ctor_3();
}

// public generated GotoRouteCommand New() :178
void GotoRouteCommand__New1_fn(GotoRouteCommand** __retval)
{
    *__retval = GotoRouteCommand::New1();
}

// internal override sealed bool ProcessArguments(Fuse.Navigation.RouterRequest request, Fuse.Reactive.Expression.Argument[] args) :180
void GotoRouteCommand__ProcessArguments_fn(GotoRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.GotoRouteCommand", "ProcessArguments(Fuse.Navigation.RouterRequest,Fuse.Reactive.Expression.Argument[])");
    return *__retval = uPtr(request)->AddHow(1) && uPtr(request)->AddPath(::g::Fuse::Navigation::RouteModificationCommand__ArgumentArrayAdapter::New1(args)), void();
}

// public generated GotoRouteCommand() [instance] :178
void GotoRouteCommand::ctor_3()
{
    ctor_2();
}

// public generated GotoRouteCommand New() [static] :178
GotoRouteCommand* GotoRouteCommand::New1()
{
    GotoRouteCommand* obj1 = (GotoRouteCommand*)uNew(GotoRouteCommand_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno
// ----------------------------------------------------------------------------

// public sealed class HierarchicalNavigation :515
// {
static void HierarchicalNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface9),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface10));
    type->SetFields(36);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)HierarchicalNavigation__New2_fn, 0, true, type, 0),
        new uFunction("get_ReuseExistingVisual", NULL, (void*)HierarchicalNavigation__get_ReuseExistingVisual_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ReuseExistingVisual", NULL, (void*)HierarchicalNavigation__set_ReuseExistingVisual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Navigation::StructuredNavigation_type* HierarchicalNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    options.FieldCount = 36;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(HierarchicalNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::StructuredNavigation_type);
    type = (::g::Fuse::Navigation::StructuredNavigation_type*)uClassType::New("Fuse.Navigation.HierarchicalNavigation", options);
    type->fp_build_ = HierarchicalNavigation_build;
    type->fp_ctor_ = (void*)HierarchicalNavigation__New2_fn;
    type->interface10.fp_BeginSeek = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface10.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface10.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface10.fp_get_SeekRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Navigation::StructuredNavigation__get_SeekRange_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::StructuredNavigation__GetPageState_fn;
    type->interface7.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int32_t*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public HierarchicalNavigation() :517
void HierarchicalNavigation__ctor_5_fn(HierarchicalNavigation* __this)
{
    __this->ctor_5();
}

// public HierarchicalNavigation New() :517
void HierarchicalNavigation__New2_fn(HierarchicalNavigation** __retval)
{
    *__retval = HierarchicalNavigation::New2();
}

// public bool get_ReuseExistingVisual() :523
void HierarchicalNavigation__get_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* __retval)
{
    *__retval = __this->ReuseExistingVisual();
}

// public void set_ReuseExistingVisual(bool value) :524
void HierarchicalNavigation__set_ReuseExistingVisual_fn(HierarchicalNavigation* __this, bool* value)
{
    __this->ReuseExistingVisual(*value);
}

// public HierarchicalNavigation() [instance] :517
void HierarchicalNavigation::ctor_5()
{
    ctor_4(1);
}

// public bool get_ReuseExistingVisual() [instance] :523
bool HierarchicalNavigation::ReuseExistingVisual()
{
    return _reuseExistingVisual;
}

// public void set_ReuseExistingVisual(bool value) [instance] :524
void HierarchicalNavigation::ReuseExistingVisual(bool value)
{
    _reuseExistingVisual = value;
}

// public HierarchicalNavigation New() [static] :517
HierarchicalNavigation* HierarchicalNavigation::New2()
{
    HierarchicalNavigation* obj1 = (HierarchicalNavigation*)uNew(HierarchicalNavigation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno
// --------------------------------------------------------------

// private delegate bool Router.HistoryAction(Uno.Collections.List<Fuse.Navigation.RouterPage> stack) :815
uDelegateType* Router__HistoryAction_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.Router.HistoryAction", 1, 0);
    type->SetSignature(::g::Uno::Bool_typeof(),
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::RouterPage_typeof(), NULL));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public delegate void HistoryChangedHandler(object sender) :47
uDelegateType* HistoryChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.HistoryChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public abstract interface IBaseNavigation :56
// {
uInterfaceType* IBaseNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IBaseNavigation", 0, 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(IBaseNavigation, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GoBack", NULL, NULL, offsetof(IBaseNavigation, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(IBaseNavigation, fp_GoForward), false, uVoid_typeof(), 0),
        new uFunction("add_HistoryChanged", NULL, NULL, offsetof(IBaseNavigation, fp_add_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, NULL, offsetof(IBaseNavigation, fp_remove_HistoryChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public abstract interface INavigation :77
// {
uInterfaceType* INavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigation", 0, 0);
    type->Reflection.SetFunctions(18,
        new uFunction("get_ActivePage", NULL, NULL, offsetof(INavigation, fp_get_ActivePage), false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("add_ActivePageChanged", NULL, NULL, offsetof(INavigation, fp_add_ActivePageChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::ActivePageChangedHandler_typeof()),
        new uFunction("remove_ActivePageChanged", NULL, NULL, offsetof(INavigation, fp_remove_ActivePageChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::ActivePageChangedHandler_typeof()),
        new uFunction("GetPage", NULL, NULL, offsetof(INavigation, fp_GetPage), false, ::g::Fuse::Visual_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPageState", NULL, NULL, offsetof(INavigation, fp_GetPageState), false, ::g::Fuse::Navigation::NavigationPageState_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Goto", NULL, NULL, offsetof(INavigation, fp_Goto), false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_Navigated", NULL, NULL, offsetof(INavigation, fp_add_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("remove_Navigated", NULL, NULL, offsetof(INavigation, fp_remove_Navigated), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigatedHandler_typeof()),
        new uFunction("get_PageCount", NULL, NULL, offsetof(INavigation, fp_get_PageCount), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_add_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("remove_PageCountChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageCountChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationPageCountHandler_typeof()),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(INavigation, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_add_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("remove_PageProgressChanged", NULL, NULL, offsetof(INavigation, fp_remove_PageProgressChanged), false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationHandler_typeof()),
        new uFunction("get_State", NULL, NULL, offsetof(INavigation, fp_get_State), false, ::g::Fuse::Navigation::NavigationState_typeof(), 0),
        new uFunction("add_StateChanged", NULL, NULL, offsetof(INavigation, fp_add_StateChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL)),
        new uFunction("remove_StateChanged", NULL, NULL, offsetof(INavigation, fp_remove_StateChanged), false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL)),
        new uFunction("Toggle", NULL, NULL, offsetof(INavigation, fp_Toggle), false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// private sealed class RouteModificationCommand.InnerSubscription :68
// {
static void RouteModificationCommand__InnerSubscription_build(uType* type)
{
    ::STRINGS[12] = uString::Const("could not find router");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno");
    ::STRINGS[14] = uString::Const("HandleRequest");
    ::TYPES[19] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[20] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Router_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface1));
    type->SetFields(7,
        ::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription_typeof(), offsetof(RouteModificationCommand__InnerSubscription, _outSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(RouteModificationCommand__InnerSubscription, _triggered), 0);
}

::g::Fuse::Reactive::VarArgFunction__Subscription_type* RouteModificationCommand__InnerSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction__Subscription_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(RouteModificationCommand__InnerSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::VarArgFunction__Subscription_type);
    type = (::g::Fuse::Reactive::VarArgFunction__Subscription_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand.InnerSubscription", options);
    type->fp_build_ = RouteModificationCommand__InnerSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))RouteModificationCommand__InnerSubscription__Dispose_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))RouteModificationCommand__InnerSubscription__OnNewArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))RouteModificationCommand__InnerSubscription__Dispose_fn;
    return type;
}

// public InnerSubscription(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) :73
void RouteModificationCommand__InnerSubscription__ctor_4_fn(RouteModificationCommand__InnerSubscription* __this, ::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub)
{
    __this->ctor_4(outSub);
}

// public override sealed void Dispose() :107
void RouteModificationCommand__InnerSubscription__Dispose_fn(RouteModificationCommand__InnerSubscription* __this)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.InnerSubscription", "Dispose()");

    if (__this->_outSub != NULL)
    {
        uPtr(__this->_outSub)->DisposeInner(true);
        __this->_outSub = NULL;
    }

    ::g::Fuse::Reactive::VarArgFunction__Subscription__Dispose_fn(__this);
}

// private void HandleRequest(Fuse.Reactive.Expression.Argument[] args) :91
void RouteModificationCommand__InnerSubscription__HandleRequest_fn(RouteModificationCommand__InnerSubscription* __this, uArray* args)
{
    __this->HandleRequest(args);
}

// public InnerSubscription New(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) :73
void RouteModificationCommand__InnerSubscription__New1_fn(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub, RouteModificationCommand__InnerSubscription** __retval)
{
    *__retval = RouteModificationCommand__InnerSubscription::New1(outSub);
}

// protected override sealed void OnNewArguments(Fuse.Reactive.Expression.Argument[] args) :79
void RouteModificationCommand__InnerSubscription__OnNewArguments_fn(RouteModificationCommand__InnerSubscription* __this, uArray* args)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.InnerSubscription", "OnNewArguments(Fuse.Reactive.Expression.Argument[])");

    if ((__this->_outSub == NULL) || __this->_triggered)
        return;

    __this->_triggered = true;
    __this->HandleRequest(args);
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[20/*Uno.Action*/], __this, offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, fp_Dispose)), -1, 2);
}

// public InnerSubscription(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) [instance] :73
void RouteModificationCommand__InnerSubscription::ctor_4(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.InnerSubscription", ".ctor(Fuse.Navigation.RouteModificationCommand.OuterSubscription)");
    ctor_2(uPtr(outSub)->_expr);
    _outSub = outSub;
}

// private void HandleRequest(Fuse.Reactive.Expression.Argument[] args) [instance] :91
void RouteModificationCommand__InnerSubscription::HandleRequest(uArray* args)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.InnerSubscription", "HandleRequest(Fuse.Reactive.Expression.Argument[])");
    ::g::Fuse::Navigation::RouterRequest* request = ::g::Fuse::Navigation::RouterRequest::New1(0);

    if (!uPtr(uPtr(_outSub)->_expr)->ProcessArguments(request, args))
        return;

    ::g::Fuse::Navigation::Router* router = ::g::Fuse::Navigation::Router::TryFindRouter(::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(uPtr(_outSub)->_context), ::TYPES[19/*Fuse.Reactive.IContext*/])));

    if (router == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"could not f...*/], this, ::STRINGS[13/*"/usr/local/...*/], 100, ::STRINGS[14/*"HandleRequest"*/], NULL);
        return;
    }

    request->MakeRequest(router);
}

// public InnerSubscription New(Fuse.Navigation.RouteModificationCommand.OuterSubscription outSub) [static] :73
RouteModificationCommand__InnerSubscription* RouteModificationCommand__InnerSubscription::New1(::g::Fuse::Navigation::RouteModificationCommand__OuterSubscription* outSub)
{
    RouteModificationCommand__InnerSubscription* obj1 = (RouteModificationCommand__InnerSubscription*)uNew(RouteModificationCommand__InnerSubscription_typeof());
    obj1->ctor_4(outSub);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageBinding.uno
// -------------------------------------------------------------------

// internal abstract interface IPagePropertyListener :323
// {
uInterfaceType* IPagePropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPagePropertyListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageBinding.uno
// -------------------------------------------------------------------

// internal abstract interface IPageResourceBinding :9
// {
uInterfaceType* IPageResourceBinding_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPageResourceBinding", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal abstract interface IRouterOutlet :42
// {
uInterfaceType* IRouterOutlet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IRouterOutlet", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// internal abstract interface ISeekableNavigation :102
// {
uInterfaceType* ISeekableNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.ISeekableNavigation", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RoutePageProxy.uno
// ----------------------------------------------------------------------

// private struct RoutePageProxy.Level :61
// {
static void RoutePageProxy__Level_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(RoutePageProxy__Level, PageProxy), 0,
        ::g::Uno::Bool_typeof(), offsetof(RoutePageProxy__Level, Listening), 0);
}

uStructType* RoutePageProxy__Level_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(RoutePageProxy__Level);
    options.ValueSize = sizeof(RoutePageProxy__Level);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Navigation.RoutePageProxy.Level", options);
    type->fp_build_ = RoutePageProxy__Level_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno
// ----------------------------------------------------------------------------

// public sealed class LinearNavigation :508
// {
static void LinearNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface9),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface10));
    type->SetFields(36);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LinearNavigation__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::StructuredNavigation_type* LinearNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    options.FieldCount = 36;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(LinearNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::StructuredNavigation_type);
    type = (::g::Fuse::Navigation::StructuredNavigation_type*)uClassType::New("Fuse.Navigation.LinearNavigation", options);
    type->fp_build_ = LinearNavigation_build;
    type->fp_ctor_ = (void*)LinearNavigation__New2_fn;
    type->interface10.fp_BeginSeek = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface10.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface10.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface10.fp_get_SeekRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Navigation::StructuredNavigation__get_SeekRange_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::StructuredNavigation__GetPageState_fn;
    type->interface7.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int32_t*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_PageProgress = (void(*)(uObject*, double*))::g::Fuse::Navigation::StructuredNavigation__get_PageProgress_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public LinearNavigation() :510
void LinearNavigation__ctor_5_fn(LinearNavigation* __this)
{
    __this->ctor_5();
}

// public LinearNavigation New() :510
void LinearNavigation__New2_fn(LinearNavigation** __retval)
{
    *__retval = LinearNavigation::New2();
}

// public LinearNavigation() [instance] :510
void LinearNavigation::ctor_5()
{
    ctor_4(0);
}

// public LinearNavigation New() [static] :510
LinearNavigation* LinearNavigation::New2()
{
    LinearNavigation* obj1 = (LinearNavigation*)uNew(LinearNavigation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno
// --------------------------------------------------------------------

// public sealed class ModifyRoute :224
// {
static void ModifyRoute_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::RouterModify_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Navigation::RouterModify_type, interface1));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ModifyRoute__New4_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::RouterModify_type* ModifyRoute_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouterModify_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouterModify_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ModifyRoute);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouterModify_type);
    type = (::g::Fuse::Navigation::RouterModify_type*)uClassType::New("Fuse.Navigation.ModifyRoute", options);
    type->fp_build_ = ModifyRoute_build;
    type->fp_ctor_ = (void*)ModifyRoute__New4_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Navigation::RouterModify__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Navigation::RouterModify__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public ModifyRoute() :227
void ModifyRoute__ctor_4_fn(ModifyRoute* __this)
{
    __this->ctor_4();
}

// public ModifyRoute New() :227
void ModifyRoute__New4_fn(ModifyRoute** __retval)
{
    *__retval = ModifyRoute::New4();
}

// public ModifyRoute() [instance] :227
void ModifyRoute::ctor_4()
{
    ctor_3(0);
}

// public ModifyRoute New() [static] :227
ModifyRoute* ModifyRoute::New4()
{
    ModifyRoute* obj1 = (ModifyRoute*)uNew(ModifyRoute_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public sealed class ModifyRouteCommand :149
// {
static void ModifyRouteCommand_build(uType* type)
{
    ::STRINGS[15] = uString::Const("arguments to modifyRoute must be name-value-pairs");
    ::STRINGS[13] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno");
    ::STRINGS[16] = uString::Const("ProcessArguments");
    ::TYPES[21] = ::g::Fuse::NameValuePair_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ModifyRouteCommand__New1_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::RouteModificationCommand_type* ModifyRouteCommand_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouteModificationCommand_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ModifyRouteCommand);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouteModificationCommand_type);
    type = (::g::Fuse::Navigation::RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.ModifyRouteCommand", options);
    type->fp_build_ = ModifyRouteCommand_build;
    type->fp_ctor_ = (void*)ModifyRouteCommand__New1_fn;
    type->fp_ProcessArguments = (void(*)(::g::Fuse::Navigation::RouteModificationCommand*, ::g::Fuse::Navigation::RouterRequest*, uArray*, bool*))ModifyRouteCommand__ProcessArguments_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Navigation::RouteModificationCommand__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public generated ModifyRouteCommand() :149
void ModifyRouteCommand__ctor_3_fn(ModifyRouteCommand* __this)
{
    __this->ctor_3();
}

// public generated ModifyRouteCommand New() :149
void ModifyRouteCommand__New1_fn(ModifyRouteCommand** __retval)
{
    *__retval = ModifyRouteCommand::New1();
}

// internal override sealed bool ProcessArguments(Fuse.Navigation.RouterRequest request, Fuse.Reactive.Expression.Argument[] args) :151
void ModifyRouteCommand__ProcessArguments_fn(ModifyRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.ModifyRouteCommand", "ProcessArguments(Fuse.Navigation.RouterRequest,Fuse.Reactive.Expression.Argument[])");

    for (int32_t i = 0; i < uPtr(args)->Length(); ++i)
    {
        ::g::Fuse::NameValuePair* nvp = uAs< ::g::Fuse::NameValuePair*>(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(i))->Value(), ::TYPES[21/*Fuse.NameValuePair*/]);

        if (nvp == NULL)
        {
            ::g::Fuse::Diagnostics::UserError(::STRINGS[15/*"arguments t...*/], __this, ::STRINGS[13/*"/usr/local/...*/], 158, ::STRINGS[16/*"ProcessArgu...*/], NULL);
            return *__retval = false, void();
        }

        if (!uPtr(request)->AddArgument(uPtr(nvp)->Name(), uPtr(nvp)->Value(), 127))
            return *__retval = false, void();
    }

    return *__retval = true, void();
}

// public generated ModifyRouteCommand() [instance] :149
void ModifyRouteCommand::ctor_3()
{
    ctor_2();
}

// public generated ModifyRouteCommand New() [static] :149
ModifyRouteCommand* ModifyRouteCommand::New1()
{
    ModifyRouteCommand* obj1 = (ModifyRouteCommand*)uNew(ModifyRouteCommand_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno
// --------------------------------------------------------------

// public enum ModifyRouteHow :23
uEnumType* ModifyRouteHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.ModifyRouteHow", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Push", 0LL,
        "Goto", 1LL,
        "Replace", 2LL,
        "GoBack", 3LL,
        "PrepareBack", 4LL,
        "PreparePush", 5LL,
        "PrepareGoto", 6LL,
        "FinishPrepared", 7LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public sealed class NavigatedArgs :30
// {
static void NavigatedArgs_build(uType* type)
{
    ::STRINGS[17] = uString::Const("name");
    ::STRINGS[18] = uString::Const("");
    ::TYPES[22] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NavigatedArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigatedArgs, _NewVisual), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NavigatedArgs__New2_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_NewVisual", NULL, (void*)NavigatedArgs__get_NewVisual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0));
}

NavigatedArgs_type* NavigatedArgs_typeof()
{
    static uSStrong<NavigatedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigatedArgs);
    options.TypeSize = sizeof(NavigatedArgs_type);
    type = (NavigatedArgs_type*)uClassType::New("Fuse.Navigation.NavigatedArgs", options);
    type->fp_build_ = NavigatedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NavigatedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public NavigatedArgs(Fuse.Visual newVisual) :34
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Visual* newVisual)
{
    __this->ctor_1(newVisual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :39
void NavigatedArgs__FuseScriptingIScriptEventSerialize_fn(NavigatedArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Navigation.NavigatedArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit2(uPtr(__this->NewVisual())->Name()), NULL))
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[22/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"name"*/], ::g::Uno::UX::Selector__op_Implicit2(uPtr(__this->NewVisual())->Name()));
    else
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[22/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"name"*/], ::STRINGS[18/*""*/]);
}

// public NavigatedArgs New(Fuse.Visual newVisual) :34
void NavigatedArgs__New2_fn(::g::Fuse::Visual* newVisual, NavigatedArgs** __retval)
{
    *__retval = NavigatedArgs::New2(newVisual);
}

// public generated Fuse.Visual get_NewVisual() :32
void NavigatedArgs__get_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->NewVisual();
}

// private generated void set_NewVisual(Fuse.Visual value) :32
void NavigatedArgs__set_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual* value)
{
    __this->NewVisual(value);
}

// public NavigatedArgs(Fuse.Visual newVisual) [instance] :34
void NavigatedArgs::ctor_1(::g::Fuse::Visual* newVisual)
{
    ctor_();
    NewVisual(newVisual);
}

// public generated Fuse.Visual get_NewVisual() [instance] :32
::g::Fuse::Visual* NavigatedArgs::NewVisual()
{
    return _NewVisual;
}

// private generated void set_NewVisual(Fuse.Visual value) [instance] :32
void NavigatedArgs::NewVisual(::g::Fuse::Visual* value)
{
    _NewVisual = value;
}

// public NavigatedArgs New(Fuse.Visual newVisual) [static] :34
NavigatedArgs* NavigatedArgs::New2(::g::Fuse::Visual* newVisual)
{
    NavigatedArgs* obj1 = (NavigatedArgs*)uNew(NavigatedArgs_typeof());
    obj1->ctor_1(newVisual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public delegate void NavigatedHandler(object sender, Fuse.Navigation.NavigatedArgs args) :46
uDelegateType* NavigatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigatedArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class NavigateTo :52
// {
static void NavigateTo_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[23] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTriggerAction_type, interface0));
    type->SetFields(12,
        ::g::Uno::Bool_typeof(), offsetof(NavigateTo, _Bypass), 0,
        ::g::Uno::Bool_typeof(), offsetof(NavigateTo, _ClearForwardHistory), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigateTo, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Bypass", NULL, (void*)NavigateTo__get_Bypass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Bypass", NULL, (void*)NavigateTo__set_Bypass_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ClearForwardHistory", NULL, (void*)NavigateTo__get_ClearForwardHistory_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClearForwardHistory", NULL, (void*)NavigateTo__set_ClearForwardHistory_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)NavigateTo__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)NavigateTo__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)NavigateTo__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTriggerAction_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigateTo);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateTo", options);
    type->fp_build_ = NavigateTo_build;
    type->fp_ctor_ = (void*)NavigateTo__New2_fn;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateTo__Perform1_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated NavigateTo() :52
void NavigateTo__ctor_3_fn(NavigateTo* __this)
{
    __this->ctor_3();
}

// public generated bool get_Bypass() :62
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :62
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated bool get_ClearForwardHistory() :67
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->ClearForwardHistory();
}

// public generated void set_ClearForwardHistory(bool value) :67
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value)
{
    __this->ClearForwardHistory(*value);
}

// public generated NavigateTo New() :52
void NavigateTo__New2_fn(NavigateTo** __retval)
{
    *__retval = NavigateTo::New2();
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :69
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigateTo", "Perform(Fuse.Navigation.INavigation,Fuse.Node)");
    int32_t mode = __this->Bypass() ? 1 : 0;

    if (__this->Target() != NULL)
    {
        ::g::Fuse::Navigation::INavigation::Goto(uInterface(uPtr(ctx), ::TYPES[2/*Fuse.Navigation.INavigation*/]), __this->Target(), mode);

        if (__this->ClearForwardHistory() && uIs(ctx, ::TYPES[23/*Fuse.Navigation.StructuredNavigation*/]))
            uPtr(uAs< ::g::Fuse::Navigation::StructuredNavigation*>(ctx, ::TYPES[23/*Fuse.Navigation.StructuredNavigation*/]))->QueueClearForwardHistory();
    }
}

// public generated Fuse.Visual get_Target() :57
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :57
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated NavigateTo() [instance] :52
void NavigateTo::ctor_3()
{
    ctor_2();
}

// public generated bool get_Bypass() [instance] :62
bool NavigateTo::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :62
void NavigateTo::Bypass(bool value)
{
    _Bypass = value;
}

// public generated bool get_ClearForwardHistory() [instance] :67
bool NavigateTo::ClearForwardHistory()
{
    return _ClearForwardHistory;
}

// public generated void set_ClearForwardHistory(bool value) [instance] :67
void NavigateTo::ClearForwardHistory(bool value)
{
    _ClearForwardHistory = value;
}

// public generated Fuse.Visual get_Target() [instance] :57
::g::Fuse::Visual* NavigateTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :57
void NavigateTo::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated NavigateTo New() [static] :52
NavigateTo* NavigateTo::New2()
{
    NavigateTo* obj1 = (NavigateTo*)uNew(NavigateTo_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno
// ----------------------------------------------------------------------

// public sealed class NavigateToggle :107
// {
static void NavigateToggle_build(uType* type)
{
    ::STRINGS[19] = uString::Const("No Page was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::STRINGS[20] = uString::Const("NavigateToggle.NavigationContext is no longer supported as it isn't needed");
    ::STRINGS[21] = uString::Const("set_NavigationContext");
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::TYPES[2/*Fuse.Navigation.INavigation*/], offsetof(NavigateToggle, _context), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigateToggle, _Target), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_NavigationContext", NULL, (void*)NavigateToggle__get_NavigationContext_fn, 0, false, ::TYPES[2/*Fuse.Navigation.INavigation*/], 0),
        new uFunction("set_NavigationContext", NULL, (void*)NavigateToggle__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Fuse.Navigation.INavigation*/]),
        new uFunction(".ctor", NULL, (void*)NavigateToggle__New2_fn, 0, true, type, 0),
        new uFunction("get_Target", NULL, (void*)NavigateToggle__get_Target_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_Target", NULL, (void*)NavigateToggle__set_Target_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* NavigateToggle_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NavigateToggle);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateToggle", options);
    type->fp_build_ = NavigateToggle_build;
    type->fp_ctor_ = (void*)NavigateToggle__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigateToggle__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated NavigateToggle() :107
void NavigateToggle__ctor_2_fn(NavigateToggle* __this)
{
    __this->ctor_2();
}

// public Fuse.Navigation.INavigation get_NavigationContext() :114
void NavigateToggle__get_NavigationContext_fn(NavigateToggle* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public void set_NavigationContext(Fuse.Navigation.INavigation value) :115
void NavigateToggle__set_NavigationContext_fn(NavigateToggle* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// public generated NavigateToggle New() :107
void NavigateToggle__New2_fn(NavigateToggle** __retval)
{
    *__retval = NavigateToggle::New2();
}

// protected override sealed void Perform(Fuse.Node n) :125
void NavigateToggle__Perform_fn(NavigateToggle* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigateToggle", "Perform(Fuse.Node)");
    ::g::Fuse::Node* ind1;
    uObject* ctx;
    ::g::Fuse::Visual* ignore;
    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage1((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : n), &ctx, &ignore);

    if (page != NULL)
        ::g::Fuse::Navigation::INavigation::Toggle(uInterface(uPtr(ctx), ::TYPES[2/*Fuse.Navigation.INavigation*/]), page);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"No Page was...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 133, ::STRINGS[2/*"Perform"*/], NULL);
}

// public generated Fuse.Visual get_Target() :123
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :123
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated NavigateToggle() [instance] :107
void NavigateToggle::ctor_2()
{
    ctor_1();
}

// public Fuse.Navigation.INavigation get_NavigationContext() [instance] :114
uObject* NavigateToggle::NavigationContext()
{
    return _context;
}

// public void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :115
void NavigateToggle::NavigationContext(uObject* value)
{
    _context = value;
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[20/*"NavigateTog...*/], this, ::STRINGS[1/*"/usr/local/...*/], 118, ::STRINGS[21/*"set_Navigat...*/]);
}

// public generated Fuse.Visual get_Target() [instance] :123
::g::Fuse::Visual* NavigateToggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :123
void NavigateToggle::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public generated NavigateToggle New() [static] :107
NavigateToggle* NavigateToggle::New2()
{
    NavigateToggle* obj2 = (NavigateToggle*)uNew(NavigateToggle_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Navigation.Locators.uno
// ---------------------------------------------------------------------------

// public interfacemodifiers class Navigation :17
// {
// static generated Navigation() :17
static void Navigation__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Navigation::_contextHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Navigation_build(uType* type)
{
    ::STRINGS[22] = uString::Const("TryFindBaseNavigation requires rooting to have started");
    ::STRINGS[23] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Navigation.Locators.uno");
    ::STRINGS[24] = uString::Const("TryFindBaseNavigation");
    ::STRINGS[25] = uString::Const("TryFindPage requires rooting to have started");
    ::STRINGS[26] = uString::Const("TryFindPage");
    ::STRINGS[27] = uString::Const("`Page` set to a value that is not within an navigation");
    ::TYPES[18] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[24] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[25] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::NavigationPageProperty_typeof());
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Navigation::_contextHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(8,
        new uFunction("GetNavigationNavigation", NULL, (void*)Navigation__GetNavigationNavigation_fn, 0, true, ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/], 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction("IsPage", NULL, (void*)Navigation__IsPage_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("ResetNavigationNavigation", NULL, (void*)Navigation__ResetNavigationNavigation_fn, 0, true, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction("SetNavigationNavigation", NULL, (void*)Navigation__SetNavigationNavigation_fn, 0, true, uVoid_typeof(), 2, ::TYPES[13/*Fuse.Visual*/], ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]),
        new uFunction("TryFind", NULL, (void*)Navigation__TryFind_fn, 0, true, ::TYPES[2/*Fuse.Navigation.INavigation*/], 1, ::g::Fuse::Node_typeof()),
        new uFunction("TryFindBaseNavigation", NULL, (void*)Navigation__TryFindBaseNavigation_fn, 0, true, ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/], 1, ::g::Fuse::Node_typeof()),
        new uFunction("TryFindBaseNavigation", NULL, (void*)Navigation__TryFindBaseNavigation1_fn, 0, true, ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/], 2, ::g::Fuse::Node_typeof(), ::TYPES[13/*Fuse.Visual*/]->ByRef()),
        new uFunction("TryFindPage", NULL, (void*)Navigation__TryFindPage_fn, 0, true, ::TYPES[13/*Fuse.Visual*/], 1, ::g::Fuse::Node_typeof()));
}

uType* Navigation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Navigation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Navigation", options);
    type->fp_build_ = Navigation_build;
    type->fp_cctor_ = Navigation__cctor__fn;
    return type;
}

// protected generated Navigation() :17
void Navigation__ctor__fn(Navigation* __this)
{
    __this->ctor_();
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) :19
void Navigation__GetLocalNavigation_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::GetLocalNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) :172
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject** __retval)
{
    *__retval = Navigation::GetNavigationNavigation(n);
}

// public static bool IsPage(Fuse.Node n) :186
void Navigation__IsPage_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Navigation::IsPage(n);
}

// public static void ResetNavigationNavigation(Fuse.Visual n) :181
void Navigation__ResetNavigationNavigation_fn(::g::Fuse::Visual* n)
{
    Navigation::ResetNavigationNavigation(n);
}

// public static void SetNavigationNavigation(Fuse.Visual n, Fuse.Navigation.IBaseNavigation ctx) :166
void Navigation__SetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject* ctx)
{
    Navigation::SetNavigationNavigation(n, ctx);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) :38
void Navigation__TryFind_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFind(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) :72
void Navigation__TryFindBaseNavigation_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) :45
void Navigation__TryFindBaseNavigation1_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** parent, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation1(node, parent);
}

// public static Fuse.Visual TryFindPage(Fuse.Node node) :82
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage(node);
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) :103
void Navigation__TryFindPage1_fn(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage1(node, nav, pageBind);
}

uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_contextHandle_;

// protected generated Navigation() [instance] :17
void Navigation::ctor_()
{
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) [static] :19
uObject* Navigation::GetLocalNavigation(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "GetLocalNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    uObject* n = Navigation::GetNavigationNavigation(node);

    if (n != NULL)
        return n;

    uObject* t = uAs<uObject*>(node, ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]);

    if (t != NULL)
        return t;

    for (::g::Fuse::Node* x = (::g::Fuse::Node*)uPtr(node)->FirstChild(::TYPES[24/*Fuse.Visual.FirstChild<Fuse.Node>*/]); x != NULL; x = (::g::Fuse::Node*)uPtr(x)->NextSibling(::TYPES[25/*Fuse.Node.NextSibling<Fuse.Node>*/]))
    {
        uObject* c = uAs<uObject*>(x, ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]);

        if ((c != NULL) && !uIs(c, ::TYPES[13/*Fuse.Visual*/]))
            return c;
    }

    return NULL;
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) [static] :172
uObject* Navigation::GetNavigationNavigation(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "GetNavigationNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_contextHandle_, &v))
        return (uObject*)v;

    return NULL;
}

// public static bool IsPage(Fuse.Node n) [static] :186
bool Navigation::IsPage(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "IsPage(Fuse.Node)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return uPtr(v)->LayoutRole() == 0;
}

// public static void ResetNavigationNavigation(Fuse.Visual n) [static] :181
void Navigation::ResetNavigationNavigation(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Navigation", "ResetNavigationNavigation(Fuse.Visual)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(Navigation::_contextHandle_);
}

// public static void SetNavigationNavigation(Fuse.Visual n, Fuse.Navigation.IBaseNavigation ctx) [static] :166
void Navigation::SetNavigationNavigation(::g::Fuse::Visual* n, uObject* ctx)
{
    uStackFrame __("Fuse.Navigation.Navigation", "SetNavigationNavigation(Fuse.Visual,Fuse.Navigation.IBaseNavigation)");
    Navigation_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Navigation::_contextHandle_, ctx);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Node node) [static] :38
uObject* Navigation::TryFind(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();
    return uAs<uObject*>(Navigation::TryFindBaseNavigation(node), ::TYPES[2/*Fuse.Navigation.INavigation*/]);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) [static] :72
uObject* Navigation::TryFindBaseNavigation(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindBaseNavigation(Fuse.Node)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* v;
    return Navigation::TryFindBaseNavigation1(node, &v);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) [static] :45
uObject* Navigation::TryFindBaseNavigation1(::g::Fuse::Node* node, ::g::Fuse::Visual** parent)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindBaseNavigation(Fuse.Node,Fuse.Visual&)");
    Navigation_typeof()->Init();
    *parent = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"TryFindBase...*/], node, ::STRINGS[23/*"/usr/local/...*/], 50, ::STRINGS[24/*"TryFindBase...*/]);
        return NULL;
    }

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[13/*Fuse.Visual*/]);

        if (v != NULL)
        {
            uObject* n = Navigation::GetLocalNavigation(v);

            if (n != NULL)
            {
                *parent = v;
                return n;
            }
        }

        node = uPtr(node)->ContextParent();
    }

    return NULL;
}

// public static Fuse.Visual TryFindPage(Fuse.Node node) [static] :82
::g::Fuse::Visual* Navigation::TryFindPage(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindPage(Fuse.Node)");
    Navigation_typeof()->Init();
    uObject* nav;
    ::g::Fuse::Visual* bind;
    return Navigation::TryFindPage1(node, &nav, &bind);
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) [static] :103
::g::Fuse::Visual* Navigation::TryFindPage1(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind)
{
    uStackFrame __("Fuse.Navigation.Navigation", "TryFindPage(Fuse.Node,Fuse.Navigation.INavigation&,Fuse.Visual&)");
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* prev = uAs< ::g::Fuse::Visual*>(node, ::TYPES[13/*Fuse.Visual*/]);
    *nav = NULL;
    *pageBind = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[25/*"TryFindPage...*/], node, ::STRINGS[23/*"/usr/local/...*/], 111, ::STRINGS[26/*"TryFindPage"*/]);
        return NULL;
    }

    bool first = true;

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[13/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* p = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (p != NULL)
            {
                *pageBind = v;

                if (uPtr(p)->IsRootingStarted())
                {
                    *nav = Navigation::TryFind(p);

                    if (*nav == NULL)
                    {
                        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[27/*"`Page` set ...*/], p, ::STRINGS[23/*"/usr/local/...*/], 132, ::STRINGS[26/*"TryFindPage"*/]);
                        return NULL;
                    }
                }

                return p;
            }

            if (!first)
            {
                uObject* n = Navigation::GetLocalNavigation(v);

                if (n != NULL)
                {
                    *nav = uAs<uObject*>(n, ::TYPES[2/*Fuse.Navigation.INavigation*/]);

                    if (*nav == NULL)
                        return NULL;

                    return prev;
                }
            }

            prev = v;
        }

        first = false;
        node = uPtr(node)->ContextParent();
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// public abstract class NavigationAnimation :37
// {
static void NavigationAnimation_build(uType* type)
{
    ::TYPES[20] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[26] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[27] = ::g::Fuse::Navigation::NavigationPageProxy__StatusChangedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(NavigationAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(NavigationAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(NavigationAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(NavigationAnimation_type, interface8));
    type->SetFields(39,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(NavigationAnimation, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(NavigationAnimation, _scale), 0,
        ::g::Uno::Bool_typeof(), offsetof(NavigationAnimation, _delay), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(NavigationAnimation, _delayVariant), 0,
        ::g::Uno::Double_typeof(), offsetof(NavigationAnimation, _delayProgress), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Scale", NULL, (void*)NavigationAnimation__get_Scale_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Scale", NULL, (void*)NavigationAnimation__set_Scale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

NavigationAnimation_type* NavigationAnimation_typeof()
{
    static uSStrong<NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NavigationAnimation);
    options.TypeSize = sizeof(NavigationAnimation_type);
    type = (NavigationAnimation_type*)uClassType::New("Fuse.Navigation.NavigationAnimation", options);
    type->fp_build_ = NavigationAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal NavigationAnimation() :39
void NavigationAnimation__ctor_5_fn(NavigationAnimation* __this)
{
    __this->ctor_5();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) :93
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int32_t* variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(*p, *variant, state);
}

// private void GoProgressPlay() :122
void NavigationAnimation__GoProgressPlay_fn(NavigationAnimation* __this)
{
    __this->GoProgressPlay();
}

// protected Fuse.Navigation.INavigation get_NavContext() :42
void NavigationAnimation__get_NavContext_fn(NavigationAnimation* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady(object s) :52
void NavigationAnimation__NavReady_fn(NavigationAnimation* __this, uObject* s)
{
    __this->NavReady(s);
}

// private void NavUnready(object s) :66
void NavigationAnimation__NavUnready_fn(NavigationAnimation* __this, uObject* s)
{
    __this->NavUnready(s);
}

// protected override sealed void OnRooted() :45
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1();
    uPtr(__this->_proxy)->Init(uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)NavigationAnimation__NavReady_fn, __this), uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)NavigationAnimation__NavUnready_fn, __this), __this->Parent());
}

// protected override sealed void OnUnrooted() :58
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "OnUnrooted()");
    uPtr(__this->_proxy)->Dispose();
    __this->_proxy = NULL;
    __this->_delay = false;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :41
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Scale() :86
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval)
{
    *__retval = __this->Scale();
}

// public void set_Scale(float value) :87
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value)
{
    __this->Scale(*value);
}

// internal NavigationAnimation() [instance] :39
void NavigationAnimation::ctor_5()
{
    _scale = 1.0f;
    ctor_4();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) [instance] :93
void NavigationAnimation::GoProgress(double p, int32_t variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "GoProgress(double,Fuse.Animations.AnimationVariant,Fuse.Navigation.NavigationArgs)");

    if (uPtr(state)->Mode() == 0)
    {
        _delayVariant = variant;
        _delayProgress = p;

        if (!_delay)
        {
            _delay = true;
            ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)NavigationAnimation__GoProgressPlay_fn, this), 0, 1);
        }
    }
    else if (uPtr(state)->Mode() == 2)
    {
        _delay = false;
        DirectSeek(p, variant);
    }
    else
    {
        _delay = false;
        BypassSeek(p, variant);
    }
}

// private void GoProgressPlay() [instance] :122
void NavigationAnimation::GoProgressPlay()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "GoProgressPlay()");

    if (!_delay)
        return;

    _delay = false;
    PlayTo(_delayProgress, _delayVariant);
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :42
uObject* NavigationAnimation::NavContext()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "get_NavContext()");
    return uPtr(_proxy)->Navigation();
}

// private void NavReady(object s) [instance] :52
void NavigationAnimation::NavReady(uObject* s)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "NavReady(object)");
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready(object s) [instance] :66
void NavigationAnimation::NavUnready(uObject* s)
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "NavUnready(object)");
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :41
::g::Fuse::Visual* NavigationAnimation::PageContext()
{
    uStackFrame __("Fuse.Navigation.NavigationAnimation", "get_PageContext()");
    return uPtr(_proxy)->Page();
}

// public float get_Scale() [instance] :86
float NavigationAnimation::Scale()
{
    return _scale;
}

// public void set_Scale(float value) [instance] :87
void NavigationAnimation::Scale(float value)
{
    _scale = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Navigation.Events.uno
// -------------------------------------------------------------------------

// public sealed class NavigationArgs :13
// {
static void NavigationArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationMode_typeof(), offsetof(NavigationArgs, _Mode), 0,
        ::g::Uno::Double_typeof(), offsetof(NavigationArgs, _PreviousProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(NavigationArgs, _Progress), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Mode", NULL, (void*)NavigationArgs__get_Mode_fn, 0, false, ::g::Fuse::Navigation::NavigationMode_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NavigationArgs__New2_fn, 0, true, type, 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Fuse::Navigation::NavigationMode_typeof()),
        new uFunction("get_PreviousProgress", NULL, (void*)NavigationArgs__get_PreviousProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_Progress", NULL, (void*)NavigationArgs__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0));
}

uType* NavigationArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NavigationArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationArgs", options);
    type->fp_build_ = NavigationArgs_build;
    return type;
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :19
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int32_t* mode)
{
    __this->ctor_1(*progress, *prevProgress, *mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() :15
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) :15
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int32_t* value)
{
    __this->Mode(*value);
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :19
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int32_t* mode, NavigationArgs** __retval)
{
    *__retval = NavigationArgs::New2(*progress, *prevProgress, *mode);
}

// public generated double get_PreviousProgress() :17
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// private generated void set_PreviousProgress(double value) :17
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value)
{
    __this->PreviousProgress(*value);
}

// public generated double get_Progress() :16
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :16
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value)
{
    __this->Progress(*value);
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [instance] :19
void NavigationArgs::ctor_1(double progress, double prevProgress, int32_t mode)
{
    ctor_();
    Progress(progress);
    PreviousProgress(prevProgress);
    Mode(mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() [instance] :15
int32_t NavigationArgs::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) [instance] :15
void NavigationArgs::Mode(int32_t value)
{
    _Mode = value;
}

// public generated double get_PreviousProgress() [instance] :17
double NavigationArgs::PreviousProgress()
{
    return _PreviousProgress;
}

// private generated void set_PreviousProgress(double value) [instance] :17
void NavigationArgs::PreviousProgress(double value)
{
    _PreviousProgress = value;
}

// public generated double get_Progress() [instance] :16
double NavigationArgs::Progress()
{
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :16
void NavigationArgs::Progress(double value)
{
    _Progress = value;
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [static] :19
NavigationArgs* NavigationArgs::New2(double progress, double prevProgress, int32_t mode)
{
    NavigationArgs* obj1 = (NavigationArgs*)uNew(NavigationArgs_typeof());
    obj1->ctor_1(progress, prevProgress, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public enum NavigationDirection :8
uEnumType* NavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/EdgeNavigation.uno
// ----------------------------------------------------------------------

// public enum NavigationEdge :11
uEnumType* NavigationEdge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationEdge", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public enum NavigationGotoMode :18
uEnumType* NavigationGotoMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationGotoMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 1LL,
        "Prepare", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Navigation.Events.uno
// -------------------------------------------------------------------------

// public delegate void NavigationHandler(object sender, Fuse.Navigation.NavigationArgs state) :28
uDelegateType* NavigationHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Navigation.Events.uno
// -------------------------------------------------------------------------

// public enum NavigationMode :6
uEnumType* NavigationMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public delegate void NavigationPageCountHandler(object sender) :48
uDelegateType* NavigationPageCountHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageCountHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public delegate void NavigationPageProgressHandler(object sender, double Current, double Previous) :49
uDelegateType* NavigationPageProgressHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageProgressHandler", 3, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageBinding.uno
// -------------------------------------------------------------------

// public static class NavigationPageProperty :328
// {
// static generated NavigationPageProperty() :328
static void NavigationPageProperty__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    NavigationPageProperty::_pageProperty_ = ::g::Fuse::Properties::CreateHandle();
    NavigationPageProperty::RootedBindings_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[28/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/]));
    NavigationPageProperty::_watchers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[29/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/]));
}

static void NavigationPageProperty_build(uType* type)
{
    ::TYPES[28] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof(), NULL);
    ::TYPES[32] = ::g::Fuse::Navigation::IPageResourceBinding_typeof();
    ::TYPES[33] = ::g::Fuse::Navigation::IPagePropertyListener_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&NavigationPageProperty::_pageProperty_, uFieldFlagsStatic,
        ::TYPES[28/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/], (uintptr_t)&NavigationPageProperty::RootedBindings_, uFieldFlagsStatic,
        ::TYPES[29/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/], (uintptr_t)&NavigationPageProperty::_watchers_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetNavigationPage", NULL, (void*)NavigationPageProperty__GetNavigationPage_fn, 0, true, ::TYPES[13/*Fuse.Visual*/], 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction("ResetNavigationPage", NULL, (void*)NavigationPageProperty__ResetNavigationPage_fn, 0, true, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction("SetNavigationPage", NULL, (void*)NavigationPageProperty__SetNavigationPage_fn, 0, true, uVoid_typeof(), 2, ::TYPES[13/*Fuse.Visual*/], ::TYPES[13/*Fuse.Visual*/]));
}

uClassType* NavigationPageProperty_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProperty", options);
    type->fp_build_ = NavigationPageProperty_build;
    type->fp_cctor_ = NavigationPageProperty__cctor__fn;
    return type;
}

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :351
void NavigationPageProperty__AddPageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::AddPageWatcher(where, callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) :405
void NavigationPageProperty__GetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = NavigationPageProperty::GetNavigationPage(n);
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) :337
void NavigationPageProperty__GetWatcherList_fn(::g::Fuse::Visual* where, bool* optional, ::g::Uno::Collections::List** __retval)
{
    *__retval = NavigationPageProperty::GetWatcherList(where, *optional);
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :356
void NavigationPageProperty__RemovePageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::RemovePageWatcher(where, callback);
}

// public static void ResetNavigationPage(Fuse.Visual n) :414
void NavigationPageProperty__ResetNavigationPage_fn(::g::Fuse::Visual* n)
{
    NavigationPageProperty::ResetNavigationPage(n);
}

// public static void SetNavigationPage(Fuse.Visual n, Fuse.Visual page) :368
void NavigationPageProperty__SetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual* page)
{
    NavigationPageProperty::SetNavigationPage(n, page);
}

// private static void UpdateListeners(Fuse.Visual node) :378
void NavigationPageProperty__UpdateListeners_fn(::g::Fuse::Visual* node)
{
    NavigationPageProperty::UpdateListeners(node);
}

uSStrong< ::g::Fuse::PropertyHandle*> NavigationPageProperty::_pageProperty_;
uSStrong< ::g::Uno::Collections::List*> NavigationPageProperty::RootedBindings_;
uSStrong< ::g::Uno::Collections::Dictionary*> NavigationPageProperty::_watchers_;

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :351
void NavigationPageProperty::AddPageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "AddPageWatcher(Fuse.Visual,Fuse.Navigation.IPagePropertyListener)");
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(NavigationPageProperty::GetWatcherList(where, false)), callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) [static] :405
::g::Fuse::Visual* NavigationPageProperty::GetNavigationPage(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "GetNavigationPage(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(NavigationPageProperty::_pageProperty_, &v))
        return uCast< ::g::Fuse::Visual*>(v, ::TYPES[13/*Fuse.Visual*/]);

    return NULL;
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) [static] :337
::g::Uno::Collections::List* NavigationPageProperty::GetWatcherList(::g::Fuse::Visual* where, bool optional)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "GetWatcherList(Fuse.Visual,[bool])");
    NavigationPageProperty_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* o;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NavigationPageProperty::_watchers_), where, (void**)(&o), &ret2), ret2))
        return o;

    if (optional)
        return NULL;

    ::g::Uno::Collections::List* q = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NavigationPageProperty::_watchers_), where, q);
    return q;
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :356
void NavigationPageProperty::RemovePageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "RemovePageWatcher(Fuse.Visual,Fuse.Navigation.IPagePropertyListener)");
    NavigationPageProperty_typeof()->Init();
    bool ret3;
    bool ret4;
    ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(where, true);

    if (list == NULL)
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(list), callback, &ret3);

    if (list->Count() == 0)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NavigationPageProperty::_watchers_), where, &ret4);
}

// public static void ResetNavigationPage(Fuse.Visual n) [static] :414
void NavigationPageProperty::ResetNavigationPage(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "ResetNavigationPage(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(NavigationPageProperty::_pageProperty_);
    NavigationPageProperty::UpdateListeners(n);
}

// public static void SetNavigationPage(Fuse.Visual n, Fuse.Visual page) [static] :368
void NavigationPageProperty::SetNavigationPage(::g::Fuse::Visual* n, ::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "SetNavigationPage(Fuse.Visual,Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    ::g::Fuse::Visual* old = NavigationPageProperty::GetNavigationPage(n);

    if (old == page)
        return;

    uPtr(uPtr(n)->Properties())->Set(NavigationPageProperty::_pageProperty_, page);
    NavigationPageProperty::UpdateListeners(n);
}

// private static void UpdateListeners(Fuse.Visual node) [static] :378
void NavigationPageProperty::UpdateListeners(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProperty", "UpdateListeners(Fuse.Visual)");
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret5;
    uObject* ret6;
    uObject* ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(NavigationPageProperty::RootedBindings_), &ret5), ret5);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[31/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]))
                {
                    uObject* binding = enum1.Current(::TYPES[31/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]);
                    ::g::Fuse::Navigation::IPageResourceBinding::UpdateSource(uInterface(uPtr(binding), ::TYPES[32/*Fuse.Navigation.IPageResourceBinding*/]));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[31/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            enum1.Dispose(::TYPES[31/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator*/]);
        }
        __after_finally_7:;
    }

    while (node != NULL)
    {
        ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(node, true);

        if (list != NULL)
        {
            ::g::Uno::Collections::List* dup = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);

            for (int32_t i = 0; i < uPtr(list)->Count(); ++i)
                ::g::Uno::Collections::List__Add_fn(uPtr(dup), (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int32_t>(i), &ret6), ret6));

            for (int32_t i1 = 0; i1 < dup->Count(); ++i1)
                ::g::Fuse::Navigation::IPagePropertyListener::PageChanged(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(dup), uCRef<int32_t>(i1), &ret7), ret7)), ::TYPES[33/*Fuse.Navigation.IPagePropertyListener*/]), node);
        }

        node = uPtr(node)->Parent();
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno
// ---------------------------------------------------------------------------

// public sealed class NavigationPageProxy :14
// {
static void NavigationPageProxy_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::NavigationPageProperty_typeof());
    type->SetInterfaces(
        ::g::Fuse::Navigation::IPagePropertyListener_typeof(), offsetof(NavigationPageProxy_type, interface0));
    type->SetFields(0,
        NavigationPageProxy__StatusChangedHandler_typeof(), offsetof(NavigationPageProxy, _ready), 0,
        NavigationPageProxy__StatusChangedHandler_typeof(), offsetof(NavigationPageProxy, _unready), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigationPageProxy, _source), 0,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(NavigationPageProxy, _navigation), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigationPageProxy, _pageBind), 0,
        ::g::Uno::Bool_typeof(), offsetof(NavigationPageProxy, _waitRootingCompleted), 0,
        ::g::Fuse::Visual_typeof(), offsetof(NavigationPageProxy, _Page), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("Dispose", NULL, (void*)NavigationPageProxy__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IsReady", NULL, (void*)NavigationPageProxy__get_IsReady_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Navigation", NULL, (void*)NavigationPageProxy__get_Navigation_fn, 0, false, ::g::Fuse::Navigation::INavigation_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)NavigationPageProxy__New2_fn, 0, true, type, 2, ::g::Uno::Action_typeof(), ::g::Uno::Action_typeof()),
        new uFunction("get_Page", NULL, (void*)NavigationPageProxy__get_Page_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("Rooted", NULL, (void*)NavigationPageProxy__Rooted_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Unrooted", NULL, (void*)NavigationPageProxy__Unrooted_fn, 0, false, uVoid_typeof(), 0));
}

NavigationPageProxy_type* NavigationPageProxy_typeof()
{
    static uSStrong<NavigationPageProxy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(NavigationPageProxy);
    options.TypeSize = sizeof(NavigationPageProxy_type);
    type = (NavigationPageProxy_type*)uClassType::New("Fuse.Navigation.NavigationPageProxy", options);
    type->fp_build_ = NavigationPageProxy_build;
    type->fp_ctor_ = (void*)NavigationPageProxy__New1_fn;
    type->interface0.fp_PageChanged = (void(*)(uObject*, ::g::Fuse::Visual*))NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn;
    return type;
}

// internal NavigationPageProxy() :32
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this)
{
    __this->ctor_();
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) :143
void NavigationPageProxy__ctor_1_fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready)
{
    __this->ctor_1(ready, unready);
}

// public void Dispose() :100
void NavigationPageProxy__Dispose_fn(NavigationPageProxy* __this)
{
    __this->Dispose();
}

// private void Fuse.Navigation.IPagePropertyListener.PageChanged(Fuse.Visual n) :130
void NavigationPageProxy__FuseNavigationIPagePropertyListenerPageChanged_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Fuse.Navigation.IPagePropertyListener.PageChanged(Fuse.Visual)");
    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage(__this->_source);

    if (page != __this->Page())
    {
        ::g::Fuse::Visual* source = __this->_source;
        __this->UnrootImpl();
        __this->RootImpl(source);
    }
}

// internal void Init(Fuse.Navigation.NavigationPageProxy.StatusChangedHandler ready, Fuse.Navigation.NavigationPageProxy.StatusChangedHandler unready, Fuse.Visual source) :34
void NavigationPageProxy__Init_fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source)
{
    __this->Init(ready, unready, source);
}

// public bool get_IsReady() :83
void NavigationPageProxy__get_IsReady_fn(NavigationPageProxy* __this, bool* __retval)
{
    *__retval = __this->IsReady();
}

// public Fuse.Navigation.INavigation get_Navigation() :24
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// internal NavigationPageProxy New() :32
void NavigationPageProxy__New1_fn(NavigationPageProxy** __retval)
{
    *__retval = NavigationPageProxy::New1();
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) :143
void NavigationPageProxy__New2_fn(uDelegate* ready, uDelegate* unready, NavigationPageProxy** __retval)
{
    *__retval = NavigationPageProxy::New2(ready, unready);
}

// private void OnPageRootingCompleted() :86
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this)
{
    __this->OnPageRootingCompleted();
}

// public generated Fuse.Visual get_Page() :21
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// private generated void set_Page(Fuse.Visual value) :21
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value)
{
    __this->Page(value);
}

// public void Rooted(Fuse.Visual source) :159
void NavigationPageProxy__Rooted_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source)
{
    __this->Rooted(source);
}

// private void RootImpl(Fuse.Visual source) :41
void NavigationPageProxy__RootImpl_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source)
{
    __this->RootImpl(source);
}

// public void Unrooted() :165
void NavigationPageProxy__Unrooted_fn(NavigationPageProxy* __this)
{
    __this->Unrooted();
}

// private void UnrootImpl() :107
void NavigationPageProxy__UnrootImpl_fn(NavigationPageProxy* __this)
{
    __this->UnrootImpl();
}

// internal NavigationPageProxy() [instance] :32
void NavigationPageProxy::ctor_()
{
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) [instance] :143
void NavigationPageProxy::ctor_1(uDelegate* ready, uDelegate* unready)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", ".ctor(Uno.Action,Uno.Action)");
    NavigationPageProxy__ObsoleteWrapper* collection1;
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("NavigationPageProxy is not meant to be used directly, use specific navigation triggers"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno"), 145, ::STRINGS[34/*".ctor"*/]);
    collection1 = NavigationPageProxy__ObsoleteWrapper::New1();
    uPtr(collection1)->Ready = ready;
    uPtr(collection1)->Unready = unready;
    NavigationPageProxy__ObsoleteWrapper* q = collection1;
    _ready = uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)NavigationPageProxy__ObsoleteWrapper__ReadyImpl_fn, uPtr(q));
    _unready = uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)NavigationPageProxy__ObsoleteWrapper__UnreadyImpl_fn, q);
}

// public void Dispose() [instance] :100
void NavigationPageProxy::Dispose()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Dispose()");
    UnrootImpl();
    _ready = NULL;
    _unready = NULL;
}

// internal void Init(Fuse.Navigation.NavigationPageProxy.StatusChangedHandler ready, Fuse.Navigation.NavigationPageProxy.StatusChangedHandler unready, Fuse.Visual source) [instance] :34
void NavigationPageProxy::Init(uDelegate* ready, uDelegate* unready, ::g::Fuse::Visual* source)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Init(Fuse.Navigation.NavigationPageProxy.StatusChangedHandler,Fuse.Navigation.NavigationPageProxy.StatusChangedHandler,Fuse.Visual)");
    _ready = ready;
    _unready = unready;
    RootImpl(source);
}

// public bool get_IsReady() [instance] :83
bool NavigationPageProxy::IsReady()
{
    return _navigation != NULL;
}

// public Fuse.Navigation.INavigation get_Navigation() [instance] :24
uObject* NavigationPageProxy::Navigation()
{
    return _navigation;
}

// private void OnPageRootingCompleted() [instance] :86
void NavigationPageProxy::OnPageRootingCompleted()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "OnPageRootingCompleted()");

    if ((!_waitRootingCompleted || (Page() == NULL)) || (_source == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Got an undesired ready event"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno"), 90, uString::Const("OnPageRootingCompleted"));
        return;
    }

    uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
    _waitRootingCompleted = false;
    RootImpl(_source);
}

// public generated Fuse.Visual get_Page() [instance] :21
::g::Fuse::Visual* NavigationPageProxy::Page()
{
    return _Page;
}

// private generated void set_Page(Fuse.Visual value) [instance] :21
void NavigationPageProxy::Page(::g::Fuse::Visual* value)
{
    _Page = value;
}

// public void Rooted(Fuse.Visual source) [instance] :159
void NavigationPageProxy::Rooted(::g::Fuse::Visual* source)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Rooted(Fuse.Visual)");
    RootImpl(source);
}

// private void RootImpl(Fuse.Visual source) [instance] :41
void NavigationPageProxy::RootImpl(::g::Fuse::Visual* source)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "RootImpl(Fuse.Visual)");
    _source = source;

    if (_source == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Attempting rooting to null source"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno"), 46, uString::Const("RootImpl"));
        return;
    }

    Page(::g::Fuse::Navigation::Navigation::TryFindPage1(_source, &_navigation, &_pageBind));

    if (Page() == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Unable to locate Page"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno"), 53, uString::Const("RootImpl"), NULL);
        return;
    }

    if (!uPtr(Page())->IsRootingStarted())
    {
        uPtr(Page())->add_RootingCompleted(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
        _waitRootingCompleted = true;
        _navigation = NULL;
        _pageBind = NULL;
        return;
    }

    if (_navigation == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Something went wrong locating a Navigator"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno"), 70, uString::Const("RootImpl"));
        return;
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::AddPageWatcher(_pageBind, (uObject*)this);

    if (::g::Uno::Delegate::op_Inequality(_ready, NULL) && (_navigation != NULL))
        uPtr(_ready)->InvokeVoid(this);
}

// public void Unrooted() [instance] :165
void NavigationPageProxy::Unrooted()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "Unrooted()");
    UnrootImpl();
}

// private void UnrootImpl() [instance] :107
void NavigationPageProxy::UnrootImpl()
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy", "UnrootImpl()");

    if (Page() != NULL)
    {
        if (_navigation != NULL)
            uPtr(_unready)->InvokeVoid(this);

        if (_waitRootingCompleted)
        {
            uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
            _waitRootingCompleted = false;
        }
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::RemovePageWatcher(_pageBind, (uObject*)this);

    Page(NULL);
    _navigation = NULL;
    _source = NULL;
}

// internal NavigationPageProxy New() [static] :32
NavigationPageProxy* NavigationPageProxy::New1()
{
    NavigationPageProxy* obj2 = (NavigationPageProxy*)uNew(NavigationPageProxy_typeof());
    obj2->ctor_();
    return obj2;
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) [static] :143
NavigationPageProxy* NavigationPageProxy::New2(uDelegate* ready, uDelegate* unready)
{
    NavigationPageProxy* obj3 = (NavigationPageProxy*)uNew(NavigationPageProxy_typeof());
    obj3->ctor_1(ready, unready);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public struct NavigationPageState :65
// {
static void NavigationPageState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(NavigationPageState, Progress), 0,
        ::g::Uno::Float_typeof(), offsetof(NavigationPageState, PreviousProgress), 0);
    type->Reflection.SetFields(2,
        new uField("PreviousProgress", 1),
        new uField("Progress", 0));
}

uStructType* NavigationPageState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(NavigationPageState);
    options.ValueSize = sizeof(NavigationPageState);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Navigation.NavigationPageState", options);
    type->fp_build_ = NavigationPageState_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Navigation.Events.uno
// -------------------------------------------------------------------------

// public enum NavigationState :30
uEnumType* NavigationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Stable", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/INavigation.uno
// -------------------------------------------------------------------

// public delegate void NavigationStateChangedHandler(object sender, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> args) :51
uDelegateType* NavigationStateChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationStateChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno
// ----------------------------------------------------------------------------

// internal enum StructuredNavigation.NavigationStructure :15
uEnumType* StructuredNavigation__NavigationStructure_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Activated.uno
// -----------------------------------------------------------------

// public abstract class NavigationTrigger :13
// {
static void NavigationTrigger_build(uType* type)
{
    ::TYPES[34] = ::g::Fuse::Navigation::RoutePageProxy__ActiveChanged_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(NavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(NavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(NavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(NavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(NavigationTrigger_type, interface8));
    type->SetFields(40,
        ::g::Fuse::Navigation::RoutePagePath_typeof(), offsetof(NavigationTrigger, _path), 0,
        ::g::Fuse::Navigation::RoutePageTriggerWhen_typeof(), offsetof(NavigationTrigger, _when), 0,
        ::g::Fuse::Navigation::RoutePageProxy_typeof(), offsetof(NavigationTrigger, _proxy), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Path", NULL, (void*)NavigationTrigger__get_Path_fn, 0, false, ::g::Fuse::Navigation::RoutePagePath_typeof(), 0),
        new uFunction("set_Path", NULL, (void*)NavigationTrigger__set_Path_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::RoutePagePath_typeof()),
        new uFunction("get_When", NULL, (void*)NavigationTrigger__get_When_fn, 0, false, ::g::Fuse::Navigation::RoutePageTriggerWhen_typeof(), 0),
        new uFunction("set_When", NULL, (void*)NavigationTrigger__set_When_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::RoutePageTriggerWhen_typeof()));
}

NavigationTrigger_type* NavigationTrigger_typeof()
{
    static uSStrong<NavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(NavigationTrigger);
    options.TypeSize = sizeof(NavigationTrigger_type);
    type = (NavigationTrigger_type*)uClassType::New("Fuse.Navigation.NavigationTrigger", options);
    type->fp_build_ = NavigationTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NavigationTrigger__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal NavigationTrigger() :15
void NavigationTrigger__ctor_6_fn(NavigationTrigger* __this)
{
    __this->ctor_6();
}

// protected override sealed void OnRooted() :53
void NavigationTrigger__OnRooted_fn(NavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::RoutePageProxy::New1(__this->Parent(), uDelegate::New(::TYPES[34/*Fuse.Navigation.RoutePageProxy.ActiveChanged*/], __this, offsetof(NavigationTrigger_type, fp_ActiveChanged)));
    uPtr(__this->_proxy)->Path(__this->Path());
    uPtr(__this->_proxy)->TriggerWhen(__this->When());
    uPtr(__this->_proxy)->Init();
}

// protected override sealed void OnUnrooted() :64
void NavigationTrigger__OnUnrooted_fn(NavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "OnUnrooted()");
    uPtr(__this->_proxy)->Dispose();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Navigation.RoutePagePath get_Path() :25
void NavigationTrigger__get_Path_fn(NavigationTrigger* __this, int32_t* __retval)
{
    *__retval = __this->Path();
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) :26
void NavigationTrigger__set_Path_fn(NavigationTrigger* __this, int32_t* value)
{
    __this->Path(*value);
}

// public Fuse.Navigation.RoutePageTriggerWhen get_When() :42
void NavigationTrigger__get_When_fn(NavigationTrigger* __this, int32_t* __retval)
{
    *__retval = __this->When();
}

// public void set_When(Fuse.Navigation.RoutePageTriggerWhen value) :43
void NavigationTrigger__set_When_fn(NavigationTrigger* __this, int32_t* value)
{
    __this->When(*value);
}

// internal NavigationTrigger() [instance] :15
void NavigationTrigger::ctor_6()
{
    _path = 1;
    _when = 1;
    ctor_5();
}

// public Fuse.Navigation.RoutePagePath get_Path() [instance] :25
int32_t NavigationTrigger::Path()
{
    return _path;
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) [instance] :26
void NavigationTrigger::Path(int32_t value)
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "set_Path(Fuse.Navigation.RoutePagePath)");
    _path = value;

    if (_proxy != NULL)
        uPtr(_proxy)->Path(value);
}

// public Fuse.Navigation.RoutePageTriggerWhen get_When() [instance] :42
int32_t NavigationTrigger::When()
{
    return _when;
}

// public void set_When(Fuse.Navigation.RoutePageTriggerWhen value) [instance] :43
void NavigationTrigger::When(int32_t value)
{
    uStackFrame __("Fuse.Navigation.NavigationTrigger", "set_When(Fuse.Navigation.RoutePageTriggerWhen)");
    _when = value;

    if (_proxy != NULL)
        uPtr(_proxy)->TriggerWhen(value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno
// ----------------------------------------------------------------------

// public abstract class NavigationTriggerAction :8
// {
static void NavigationTriggerAction_build(uType* type)
{
    ::STRINGS[28] = uString::Const("No navigation context was found");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/TriggerActions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(NavigationTriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(NavigationTriggerAction, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)NavigationTriggerAction__get_NavigationContext_fn, 0, false, ::g::Fuse::Navigation::INavigation_typeof(), 0),
        new uFunction("set_NavigationContext", NULL, (void*)NavigationTriggerAction__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::INavigation_typeof()));
}

NavigationTriggerAction_type* NavigationTriggerAction_typeof()
{
    static uSStrong<NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NavigationTriggerAction);
    options.TypeSize = sizeof(NavigationTriggerAction_type);
    type = (NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigationTriggerAction", options);
    type->fp_build_ = NavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigationTriggerAction__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected generated NavigationTriggerAction() :8
void NavigationTriggerAction__ctor_2_fn(NavigationTriggerAction* __this)
{
    __this->ctor_2();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() :10
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) :10
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :12
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.NavigationTriggerAction", "Perform(Fuse.Node)");
    uObject* ind1;
    ind1 = __this->NavigationContext();
    uObject* ctx = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFind(n);

    if (ctx == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[28/*"No navigati...*/], __this, ::STRINGS[1/*"/usr/local/...*/], 17, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    __this->Perform1(ctx, n);
}

// protected generated NavigationTriggerAction() [instance] :8
void NavigationTriggerAction::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() [instance] :10
uObject* NavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :10
void NavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationAnimations.uno
// ----------------------------------------------------------------------------

// internal static class NavTriggerUtil :9
// {
static void NavTriggerUtil_build(uType* type)
{
}

uClassType* NavTriggerUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavTriggerUtil", options);
    type->fp_build_ = NavTriggerUtil_build;
    return type;
}

// public static bool CrossesZero(double a, double b) :11
void NavTriggerUtil__CrossesZero_fn(double* a, double* b, bool* __retval)
{
    *__retval = NavTriggerUtil::CrossesZero(*a, *b);
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) :17
void NavTriggerUtil__Opposite_fn(int32_t* v, int32_t* __retval)
{
    *__retval = NavTriggerUtil::Opposite(*v);
}

// public static bool CrossesZero(double a, double b) [static] :11
bool NavTriggerUtil::CrossesZero(double a, double b)
{
    return ((a < 0.0) && (b > 0.0)) || ((a > 0.0) && (b < 0.0));
}

// public static Fuse.Animations.AnimationVariant Opposite(Fuse.Animations.AnimationVariant v) [static] :17
int32_t NavTriggerUtil::Opposite(int32_t v)
{
    return (v == 0) ? 1 : 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno
// ---------------------------------------------------------------------------

// private sealed class NavigationPageProxy.ObsoleteWrapper :151
// {
static void NavigationPageProxy__ObsoleteWrapper_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(NavigationPageProxy__ObsoleteWrapper, Ready), 0,
        ::g::Uno::Action_typeof(), offsetof(NavigationPageProxy__ObsoleteWrapper, Unready), 0);
}

uType* NavigationPageProxy__ObsoleteWrapper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NavigationPageProxy__ObsoleteWrapper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProxy.ObsoleteWrapper", options);
    type->fp_build_ = NavigationPageProxy__ObsoleteWrapper_build;
    type->fp_ctor_ = (void*)NavigationPageProxy__ObsoleteWrapper__New1_fn;
    return type;
}

// public generated ObsoleteWrapper() :151
void NavigationPageProxy__ObsoleteWrapper__ctor__fn(NavigationPageProxy__ObsoleteWrapper* __this)
{
    __this->ctor_();
}

// public generated ObsoleteWrapper New() :151
void NavigationPageProxy__ObsoleteWrapper__New1_fn(NavigationPageProxy__ObsoleteWrapper** __retval)
{
    *__retval = NavigationPageProxy__ObsoleteWrapper::New1();
}

// public void ReadyImpl(Fuse.Navigation.NavigationPageProxy npp) :154
void NavigationPageProxy__ObsoleteWrapper__ReadyImpl_fn(NavigationPageProxy__ObsoleteWrapper* __this, ::g::Fuse::Navigation::NavigationPageProxy* npp)
{
    __this->ReadyImpl(npp);
}

// public void UnreadyImpl(Fuse.Navigation.NavigationPageProxy npp) :155
void NavigationPageProxy__ObsoleteWrapper__UnreadyImpl_fn(NavigationPageProxy__ObsoleteWrapper* __this, ::g::Fuse::Navigation::NavigationPageProxy* npp)
{
    __this->UnreadyImpl(npp);
}

// public generated ObsoleteWrapper() [instance] :151
void NavigationPageProxy__ObsoleteWrapper::ctor_()
{
}

// public void ReadyImpl(Fuse.Navigation.NavigationPageProxy npp) [instance] :154
void NavigationPageProxy__ObsoleteWrapper::ReadyImpl(::g::Fuse::Navigation::NavigationPageProxy* npp)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy.ObsoleteWrapper", "ReadyImpl(Fuse.Navigation.NavigationPageProxy)");
    uPtr(Ready)->InvokeVoid();
}

// public void UnreadyImpl(Fuse.Navigation.NavigationPageProxy npp) [instance] :155
void NavigationPageProxy__ObsoleteWrapper::UnreadyImpl(::g::Fuse::Navigation::NavigationPageProxy* npp)
{
    uStackFrame __("Fuse.Navigation.NavigationPageProxy.ObsoleteWrapper", "UnreadyImpl(Fuse.Navigation.NavigationPageProxy)");
    uPtr(Unready)->InvokeVoid();
}

// public generated ObsoleteWrapper New() [static] :151
NavigationPageProxy__ObsoleteWrapper* NavigationPageProxy__ObsoleteWrapper::New1()
{
    NavigationPageProxy__ObsoleteWrapper* obj1 = (NavigationPageProxy__ObsoleteWrapper*)uNew(NavigationPageProxy__ObsoleteWrapper_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// private sealed class RouteModificationCommand.OuterSubscription :17
// {
static void RouteModificationCommand__OuterSubscription_build(uType* type)
{
    ::TYPES[35] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(RouteModificationCommand__OuterSubscription_type, interface0),
        ::TYPES[35/*Fuse.Reactive.IListener*/], offsetof(RouteModificationCommand__OuterSubscription_type, interface1),
        ::g::Fuse::Reactive::IEventHandler_typeof(), offsetof(RouteModificationCommand__OuterSubscription_type, interface2));
    type->SetFields(2,
        ::g::Fuse::Navigation::RouteModificationCommand_typeof(), offsetof(RouteModificationCommand__OuterSubscription, _expr), 0,
        ::TYPES[35/*Fuse.Reactive.IListener*/], offsetof(RouteModificationCommand__OuterSubscription, _listener), 0,
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(RouteModificationCommand__OuterSubscription, _context), 0,
        ::g::Fuse::Navigation::RouteModificationCommand__InnerSubscription_typeof(), offsetof(RouteModificationCommand__OuterSubscription, _innerSub), 0);
}

RouteModificationCommand__OuterSubscription_type* RouteModificationCommand__OuterSubscription_typeof()
{
    static uSStrong<RouteModificationCommand__OuterSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(RouteModificationCommand__OuterSubscription);
    options.TypeSize = sizeof(RouteModificationCommand__OuterSubscription_type);
    type = (RouteModificationCommand__OuterSubscription_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand.OuterSubscription", options);
    type->fp_build_ = RouteModificationCommand__OuterSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))RouteModificationCommand__OuterSubscription__Dispose_fn;
    type->fp_OnLostData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*))RouteModificationCommand__OuterSubscription__OnLostData_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))RouteModificationCommand__OuterSubscription__OnNewData_fn;
    type->interface2.fp_Dispatch = (void(*)(uObject*, uObject*))RouteModificationCommand__OuterSubscription__FuseReactiveIEventHandlerDispatch_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))RouteModificationCommand__OuterSubscription__Dispose_fn;
    return type;
}

// public OuterSubscription(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :24
void RouteModificationCommand__OuterSubscription__ctor_1_fn(RouteModificationCommand__OuterSubscription* __this, ::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener)
{
    __this->ctor_1(expr, context, listener);
}

// public override sealed void Dispose() :32
void RouteModificationCommand__OuterSubscription__Dispose_fn(RouteModificationCommand__OuterSubscription* __this)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.OuterSubscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_expr = NULL;
    __this->_listener = NULL;
    __this->_context = NULL;
    __this->DisposeInner(false);
}

// internal void DisposeInner([bool fromInner]) :41
void RouteModificationCommand__OuterSubscription__DisposeInner_fn(RouteModificationCommand__OuterSubscription* __this, bool* fromInner)
{
    __this->DisposeInner(*fromInner);
}

// private void Fuse.Reactive.IEventHandler.Dispatch(Fuse.Reactive.IEventRecord e) :52
void RouteModificationCommand__OuterSubscription__FuseReactiveIEventHandlerDispatch_fn(RouteModificationCommand__OuterSubscription* __this, uObject* e)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.OuterSubscription", "Fuse.Reactive.IEventHandler.Dispatch(Fuse.Reactive.IEventRecord)");

    if (__this->_innerSub != NULL)
        return;

    __this->_innerSub = ::g::Fuse::Navigation::RouteModificationCommand__InnerSubscription::New1(__this);
    uPtr(__this->_innerSub)->Init(__this->_context);
}

// public OuterSubscription New(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :24
void RouteModificationCommand__OuterSubscription__New1_fn(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener, RouteModificationCommand__OuterSubscription** __retval)
{
    *__retval = RouteModificationCommand__OuterSubscription::New1(expr, context, listener);
}

// protected override sealed void OnLostData(Fuse.Reactive.IExpression expr) :65
void RouteModificationCommand__OuterSubscription__OnLostData_fn(RouteModificationCommand__OuterSubscription* __this, uObject* expr)
{
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression expr, object value) :64
void RouteModificationCommand__OuterSubscription__OnNewData_fn(RouteModificationCommand__OuterSubscription* __this, uObject* expr, uObject* value)
{
}

// public OuterSubscription(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :24
void RouteModificationCommand__OuterSubscription::ctor_1(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.OuterSubscription", ".ctor(Fuse.Navigation.RouteModificationCommand,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_();
    _expr = expr;
    _context = context;
    _listener = listener;
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[35/*Fuse.Reactive.IListener*/]), (uObject*)_expr, this);
}

// internal void DisposeInner([bool fromInner]) [instance] :41
void RouteModificationCommand__OuterSubscription::DisposeInner(bool fromInner)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand.OuterSubscription", "DisposeInner([bool])");

    if (_innerSub != NULL)
    {
        if (!fromInner)
            uPtr(_innerSub)->Dispose();

        _innerSub = NULL;
    }
}

// public OuterSubscription New(Fuse.Navigation.RouteModificationCommand expr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :24
RouteModificationCommand__OuterSubscription* RouteModificationCommand__OuterSubscription::New1(::g::Fuse::Navigation::RouteModificationCommand* expr, uObject* context, uObject* listener)
{
    RouteModificationCommand__OuterSubscription* obj1 = (RouteModificationCommand__OuterSubscription*)uNew(RouteModificationCommand__OuterSubscription_typeof());
    obj1->ctor_1(expr, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal enum OutletType :17
uEnumType* OutletType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.OutletType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Outlet", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageData.uno
// ----------------------------------------------------------------

// internal sealed class PageData :12
// {
// static generated PageData() :12
static void PageData__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    PageData::_propPageData_ = ::g::Fuse::Properties::CreateHandle();
}

static void PageData_build(uType* type)
{
    ::STRINGS[29] = uString::Const("Attaching to null page");
    ::STRINGS[30] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageData.uno");
    ::STRINGS[31] = uString::Const("AttachRouterPage");
    ::TYPES[36] = ::g::Fuse::Navigation::RouterPageChangedHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(PageData, Index), 0,
        ::g::Uno::Float_typeof(), offsetof(PageData, Progress), 0,
        ::g::Uno::Float_typeof(), offsetof(PageData, PreviousProgress), 0,
        uObject_typeof(), offsetof(PageData, ControlPageData), 0,
        uObject_typeof(), offsetof(PageData, _Context), 0,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(PageData, _RouterPage), 0,
        ::g::Fuse::Visual_typeof(), offsetof(PageData, _Visual), uFieldFlagsWeak,
        ::TYPES[36/*Fuse.Navigation.RouterPageChangedHandler*/], offsetof(PageData, RouterPageChanged1), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&PageData::_propPageData_, uFieldFlagsStatic);
}

uType* PageData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PageData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.PageData", options);
    type->fp_build_ = PageData_build;
    type->fp_cctor_ = PageData__cctor__fn;
    return type;
}

// public PageData(Fuse.Visual visual) :33
void PageData__ctor__fn(PageData* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public void AttachRouterPage(Fuse.Navigation.RouterPage rp) :38
void PageData__AttachRouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage* rp)
{
    __this->AttachRouterPage(rp);
}

// public generated object get_Context() :31
void PageData__get_Context_fn(PageData* __this, uObject** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(object value) :31
void PageData__set_Context_fn(PageData* __this, uObject* value)
{
    __this->Context(value);
}

// public static Fuse.Navigation.PageData Get(Fuse.Visual v) :84
void PageData__Get_fn(::g::Fuse::Visual* v, PageData** __retval)
{
    *__retval = PageData::Get(v);
}

// public static Fuse.Navigation.PageData GetOrCreate(Fuse.Visual v, [bool allowCreate]) :70
void PageData__GetOrCreate_fn(::g::Fuse::Visual* v, bool* allowCreate, PageData** __retval)
{
    *__retval = PageData::GetOrCreate(v, *allowCreate);
}

// public PageData New(Fuse.Visual visual) :33
void PageData__New1_fn(::g::Fuse::Visual* visual, PageData** __retval)
{
    *__retval = PageData::New1(visual);
}

// public generated Fuse.Navigation.RouterPage get_RouterPage() :27
void PageData__get_RouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage** __retval)
{
    *__retval = __this->RouterPage();
}

// private generated void set_RouterPage(Fuse.Navigation.RouterPage value) :27
void PageData__set_RouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage* value)
{
    __this->RouterPage(value);
}

// public generated void add_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) :29
void PageData__add_RouterPageChanged_fn(PageData* __this, uDelegate* value)
{
    __this->add_RouterPageChanged(value);
}

// public generated void remove_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) :29
void PageData__remove_RouterPageChanged_fn(PageData* __this, uDelegate* value)
{
    __this->remove_RouterPageChanged(value);
}

// public void SetContext(object data) :63
void PageData__SetContext_fn(PageData* __this, uObject* data)
{
    __this->SetContext(data);
}

// private void UpdateContextData(Fuse.Visual page, object data) :55
void PageData__UpdateContextData_fn(PageData* __this, ::g::Fuse::Visual* page, uObject* data)
{
    __this->UpdateContextData(page, data);
}

// public generated Fuse.Visual get_Visual() :15
void PageData__get_Visual_fn(PageData* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :15
void PageData__set_Visual_fn(PageData* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

uSStrong< ::g::Fuse::PropertyHandle*> PageData::_propPageData_;

// public PageData(Fuse.Visual visual) [instance] :33
void PageData::ctor_(::g::Fuse::Visual* visual)
{
    Visual(visual);
}

// public void AttachRouterPage(Fuse.Navigation.RouterPage rp) [instance] :38
void PageData::AttachRouterPage(::g::Fuse::Navigation::RouterPage* rp)
{
    uStackFrame __("Fuse.Navigation.PageData", "AttachRouterPage(Fuse.Navigation.RouterPage)");
    ::g::Fuse::Visual* visual = Visual();

    if (visual == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[29/*"Attaching t...*/], this, ::STRINGS[30/*"/usr/local/...*/], 43, ::STRINGS[31/*"AttachRoute...*/]);
        return;
    }

    RouterPage(rp);
    UpdateContextData(visual, uPtr(rp)->Context);
    uPtr(visual)->Prepare(rp->Parameter);

    if (::g::Uno::Delegate::op_Inequality(RouterPageChanged1, NULL))
        uPtr(RouterPageChanged1)->Invoke(2, this, rp);
}

// public generated object get_Context() [instance] :31
uObject* PageData::Context()
{
    return _Context;
}

// private generated void set_Context(object value) [instance] :31
void PageData::Context(uObject* value)
{
    _Context = value;
}

// public generated Fuse.Navigation.RouterPage get_RouterPage() [instance] :27
::g::Fuse::Navigation::RouterPage* PageData::RouterPage()
{
    return _RouterPage;
}

// private generated void set_RouterPage(Fuse.Navigation.RouterPage value) [instance] :27
void PageData::RouterPage(::g::Fuse::Navigation::RouterPage* value)
{
    _RouterPage = value;
}

// public generated void add_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) [instance] :29
void PageData::add_RouterPageChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.PageData", "add_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler)");
    RouterPageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RouterPageChanged1, value), ::TYPES[36/*Fuse.Navigation.RouterPageChangedHandler*/]);
}

// public generated void remove_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler value) [instance] :29
void PageData::remove_RouterPageChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.PageData", "remove_RouterPageChanged(Fuse.Navigation.RouterPageChangedHandler)");
    RouterPageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RouterPageChanged1, value), ::TYPES[36/*Fuse.Navigation.RouterPageChangedHandler*/]);
}

// public void SetContext(object data) [instance] :63
void PageData::SetContext(uObject* data)
{
    uStackFrame __("Fuse.Navigation.PageData", "SetContext(object)");
    UpdateContextData(Visual(), data);
}

// private void UpdateContextData(Fuse.Visual page, object data) [instance] :55
void PageData::UpdateContextData(::g::Fuse::Visual* page, uObject* data)
{
    uStackFrame __("Fuse.Navigation.PageData", "UpdateContextData(Fuse.Visual,object)");
    uObject* oldData = Context();
    Context(data);
    uPtr(page)->BroadcastDataChange(oldData, data);
}

// public generated Fuse.Visual get_Visual() [instance] :15
::g::Fuse::Visual* PageData::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :15
void PageData::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public static Fuse.Navigation.PageData Get(Fuse.Visual v) [static] :84
PageData* PageData::Get(::g::Fuse::Visual* v)
{
    uStackFrame __("Fuse.Navigation.PageData", "Get(Fuse.Visual)");
    PageData_typeof()->Init();
    return PageData::GetOrCreate(v, false);
}

// public static Fuse.Navigation.PageData GetOrCreate(Fuse.Visual v, [bool allowCreate]) [static] :70
PageData* PageData::GetOrCreate(::g::Fuse::Visual* v, bool allowCreate)
{
    uStackFrame __("Fuse.Navigation.PageData", "GetOrCreate(Fuse.Visual,[bool])");
    PageData_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(v)->Properties())->TryGet(PageData::_propPageData_, &res))
        return uCast<PageData*>(res, PageData_typeof());

    if (!allowCreate)
        return NULL;

    PageData* pd = PageData::New1(v);
    uPtr(uPtr(v)->Properties())->Set(PageData::_propPageData_, pd);
    return pd;
}

// public PageData New(Fuse.Visual visual) [static] :33
PageData* PageData::New1(::g::Fuse::Visual* visual)
{
    PageData* obj1 = (PageData*)uNew(PageData_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageBinding.uno
// -------------------------------------------------------------------

// public sealed class PageExpression :15
// {
static void PageExpression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(PageExpression, _Key), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Key", NULL, (void*)PageExpression__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)PageExpression__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::Expression_type* PageExpression_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PageExpression);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Navigation.PageExpression", options);
    type->fp_build_ = PageExpression_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))PageExpression__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))PageExpression__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public PageExpression(string key) :21
void PageExpression__ctor_1_fn(PageExpression* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :18
void PageExpression__get_Key_fn(PageExpression* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :18
void PageExpression__set_Key_fn(PageExpression* __this, uString* value)
{
    __this->Key(value);
}

// public PageExpression New(string key) :21
void PageExpression__New1_fn(uString* key, PageExpression** __retval)
{
    *__retval = PageExpression::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext dc, Fuse.Reactive.IListener listener) :26
void PageExpression__Subscribe_fn(PageExpression* __this, uObject* dc, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Navigation.PageExpression", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)PageExpression__Subscription::New1(__this, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(dc), ::TYPES[19/*Fuse.Reactive.IContext*/])), listener), void();
}

// public PageExpression(string key) [instance] :21
void PageExpression::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :18
uString* PageExpression::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :18
void PageExpression::Key(uString* value)
{
    _Key = value;
}

// public PageExpression New(string key) [static] :21
PageExpression* PageExpression::New1(uString* key)
{
    PageExpression* obj1 = (PageExpression*)uNew(PageExpression_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageBinding.uno
// -------------------------------------------------------------------

// public sealed class PageResourceBinding<T> :160
// {
static void PageResourceBinding_build(uType* type)
{
    ::STRINGS[32] = uString::Const("PageResourceBinding has been deprecated. Use DataBinding instead");
    ::STRINGS[33] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageBinding.uno");
    ::STRINGS[34] = uString::Const(".ctor");
    ::STRINGS[35] = uString::Const("target");
    ::STRINGS[36] = uString::Const("Visual");
    ::STRINGS[37] = uString::Const("Node");
    ::TYPES[37] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[38] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::NavigationPageProperty_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PageResourceBinding_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(PageResourceBinding_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(PageResourceBinding_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(PageResourceBinding_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface6),
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageResourceBinding_type, interface7));
    type->SetFields(18,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(PageResourceBinding, _hasDefault), 0,
        ::g::Uno::Bool_typeof(), offsetof(PageResourceBinding, _allowNull), 0,
        ::TYPES[2/*Fuse.Navigation.INavigation*/], offsetof(PageResourceBinding, _nav), 0,
        ::TYPES[13/*Fuse.Visual*/], offsetof(PageResourceBinding, _currentPage), 0,
        ::g::Uno::String_typeof(), offsetof(PageResourceBinding, _Key), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(PageResourceBinding, _Target), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_AllowNull", NULL, (void*)PageResourceBinding__get_AllowNull_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_AllowNull", NULL, (void*)PageResourceBinding__set_AllowNull_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Default", NULL, (void*)PageResourceBinding__get_Default_fn, 0, false, type->T(0), 0),
        new uFunction("set_Default", NULL, (void*)PageResourceBinding__set_Default_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_Key", NULL, (void*)PageResourceBinding__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", type, (void*)PageResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), ::g::Uno::String_typeof()),
        new uFunction("get_Target", NULL, (void*)PageResourceBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), 0));
}

PageResourceBinding_type* PageResourceBinding_typeof()
{
    static uSStrong<PageResourceBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 25;
    options.GenericCount = 1;
    options.InterfaceCount = 8;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(PageResourceBinding);
    options.TypeSize = sizeof(PageResourceBinding_type);
    type = (PageResourceBinding_type*)uClassType::New("Fuse.Navigation.PageResourceBinding`1", options);
    type->fp_build_ = PageResourceBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnUnrooted_fn;
    type->interface7.fp_UpdateSource = (void(*)(uObject*))PageResourceBinding__FuseNavigationIPageResourceBindingUpdateSource_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PageResourceBinding(Uno.UX.Property<T> target, string key) :192
void PageResourceBinding__ctor_3_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_3(target, key);
}

// private bool Acceptor(object obj) :317
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public bool get_AllowNull() :183
void PageResourceBinding__get_AllowNull_fn(PageResourceBinding* __this, bool* __retval)
{
    *__retval = __this->AllowNull();
}

// public void set_AllowNull(bool value) :184
void PageResourceBinding__set_AllowNull_fn(PageResourceBinding* __this, bool* value)
{
    __this->AllowNull(*value);
}

// public T get_Default() :172
void PageResourceBinding__get_Default_fn(PageResourceBinding* __this, uTRef __retval)
{
    return __retval.Store(__this->_default()), void();
}

// public void set_Default(T value) :173
void PageResourceBinding__set_Default_fn(PageResourceBinding* __this, void* value)
{
    __this->_default() = value;
    __this->_hasDefault = true;
}

// private void Fuse.Navigation.IPageResourceBinding.UpdateSource() :235
void PageResourceBinding__FuseNavigationIPageResourceBindingUpdateSource_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "Fuse.Navigation.IPageResourceBinding.UpdateSource()");
    __this->UpdateSource();
}

// private void GotoPage(Fuse.Visual page) :287
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Visual* page)
{
    __this->GotoPage(page);
}

// public generated string get_Key() :166
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :166
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// private object get_LocalObject() :258
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) :192
void PageResourceBinding__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, PageResourceBinding** __retval)
{
    *__retval = PageResourceBinding::New2(__type, target, key);
}

// private void OnChanged() :296
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :282
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// protected override sealed void OnRooted() :206
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this);
    __this->UpdateSource();
}

// protected override sealed void OnUnrooted() :247
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnUnrooted()");
    bool ret2;
    __this->ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseCurrent() :237
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this)
{
    __this->ReleaseCurrent();
}

// public generated Uno.UX.Property<T> get_Target() :163
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :163
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void UpdateSource() :215
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this)
{
    __this->UpdateSource();
}

// public PageResourceBinding(Uno.UX.Property<T> target, string key) [instance] :192
void PageResourceBinding::ctor_3(::g::Uno::UX::Property1* target, uString* key)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", ".ctor(Uno.UX.Property<T>,string)");
    ctor_2();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[32/*"PageResourc...*/], this, ::STRINGS[33/*"/usr/local/...*/], 194, ::STRINGS[34/*".ctor"*/]);

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[35/*"target"*/]));

    Target(target);
    Key(key);
}

// private bool Acceptor(object obj) [instance] :317
bool PageResourceBinding::Acceptor(uObject* obj)
{
    return uIs(obj, __type->T(0));
}

// public bool get_AllowNull() [instance] :183
bool PageResourceBinding::AllowNull()
{
    return _allowNull;
}

// public void set_AllowNull(bool value) [instance] :184
void PageResourceBinding::AllowNull(bool value)
{
    _allowNull = true;
    _hasDefault = true;
}

// private void GotoPage(Fuse.Visual page) [instance] :287
void PageResourceBinding::GotoPage(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "GotoPage(Fuse.Visual)");

    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// public generated string get_Key() [instance] :166
uString* PageResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :166
void PageResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private object get_LocalObject() [instance] :258
uObject* PageResourceBinding::LocalObject()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "get_LocalObject()");
    ::g::Fuse::Node* n = Parent();

    while (n != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[13/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (page != NULL)
                return page;

            uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(v);

            if (navi != NULL)
                return navi;
        }

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private void OnChanged() [instance] :296
void PageResourceBinding::OnChanged()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnChanged()");
    ::g::Fuse::Visual* page = _currentPage;

    if (page != NULL)
    {
        if ((::g::Uno::String::op_Equality(Key(), ::STRINGS[36/*"Visual"*/]) || ::g::Uno::String::op_Equality(Key(), ::STRINGS[37/*"Node"*/])) && uIs(page, __type->T(0)))
            ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), uUnboxAny(__type->T(0), page), NULL);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(Key(), uDelegate::New(::TYPES[37/*Uno.Predicate<object>*/], (void*)PageResourceBinding__Acceptor_fn, this), &resource))
                ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), uUnboxAny(__type->T(0), resource), NULL);
            else if (_hasDefault)
                ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), _default(), NULL);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :282
void PageResourceBinding::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "OnNavigated(object,Fuse.Navigation.NavigatedArgs)");
    GotoPage(uPtr(args)->NewVisual());
}

// private void ReleaseCurrent() [instance] :237
void PageResourceBinding::ReleaseCurrent()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "ReleaseCurrent()");

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[38/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :163
::g::Uno::UX::Property1* PageResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :163
void PageResourceBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void UpdateSource() [instance] :215
void PageResourceBinding::UpdateSource()
{
    uStackFrame __("Fuse.Navigation.PageResourceBinding`1", "UpdateSource()");
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[2/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Visual*>(local, ::TYPES[13/*Fuse.Visual*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[38/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[2/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}

// public PageResourceBinding New(Uno.UX.Property<T> target, string key) [static] :192
PageResourceBinding* PageResourceBinding::New2(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    PageResourceBinding* obj1 = (PageResourceBinding*)uNew(__type);
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterPage.uno
// ------------------------------------------------------------------

// internal sealed class PagesMap :104
// {
static void PagesMap_build(uType* type)
{
    ::STRINGS[38] = uString::Const("$__fuse_classname");
    ::STRINGS[39] = uString::Const("$path");
    ::TYPES[39] = ::g::Fuse::IObject_typeof();
    ::TYPES[40] = ::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[41] = ::g::Fuse::Navigation::ChildRouterPagesUpdated_typeof();
    type->SetBase(::g::Fuse::Reactive::ObserverMap_typeof()->MakeType(::g::Fuse::Navigation::RouterPage_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObserverMap_type, interface0));
    type->SetFields(6,
        ::TYPES[41/*Fuse.Navigation.ChildRouterPagesUpdated*/], offsetof(PagesMap, Updated1), 0);
}

::g::Fuse::Reactive::ObserverMap_type* PagesMap_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ObserverMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ObserverMap_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PagesMap);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ObserverMap_type);
    type = (::g::Fuse::Reactive::ObserverMap_type*)uClassType::New("Fuse.Navigation.PagesMap", options);
    type->fp_build_ = PagesMap_build;
    type->fp_ctor_ = (void*)PagesMap__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Reactive::ObserverMap*, uObject*, uObject**))PagesMap__Map_fn;
    type->fp_OnUpdated = (void(*)(::g::Fuse::Reactive::ObserverMap*))PagesMap__OnUpdated_fn;
    type->fp_Unmap = (void(*)(::g::Fuse::Reactive::ObserverMap*, uObject*, uObject**))PagesMap__Unmap_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ObserverMap__FuseReactiveIObserverOnFailed_fn;
    return type;
}

// public generated PagesMap() :104
void PagesMap__ctor_1_fn(PagesMap* __this)
{
    __this->ctor_1();
}

// public static string GetObjectPath(object data) :106
void PagesMap__GetObjectPath_fn(uObject* data, uString** __retval)
{
    *__retval = PagesMap::GetObjectPath(data);
}

// public static bool HasObjectPath(object data) :118
void PagesMap__HasObjectPath_fn(uObject* data, bool* __retval)
{
    *__retval = PagesMap::HasObjectPath(data);
}

// protected override sealed Fuse.Navigation.RouterPage Map(object v) :128
void PagesMap__Map_fn(PagesMap* __this, uObject* v, ::g::Fuse::Navigation::RouterPage** __retval)
{
    uStackFrame __("Fuse.Navigation.PagesMap", "Map(object)");
    return *__retval = ::g::Fuse::Navigation::RouterPage::New1(PagesMap::GetObjectPath(v), NULL, v), void();
}

// public generated PagesMap New() :104
void PagesMap__New1_fn(PagesMap** __retval)
{
    *__retval = PagesMap::New1();
}

// protected override sealed void OnUpdated() :138
void PagesMap__OnUpdated_fn(PagesMap* __this)
{
    uStackFrame __("Fuse.Navigation.PagesMap", "OnUpdated()");

    if (::g::Uno::Delegate::op_Inequality(__this->Updated1, NULL))
        uPtr(__this->Updated1)->InvokeVoid();
}

// protected override sealed object Unmap(Fuse.Navigation.RouterPage mv) :133
void PagesMap__Unmap_fn(PagesMap* __this, ::g::Fuse::Navigation::RouterPage* mv, uObject** __retval)
{
    uStackFrame __("Fuse.Navigation.PagesMap", "Unmap(Fuse.Navigation.RouterPage)");
    return *__retval = uPtr(mv)->Context, void();
}

// public generated void add_Updated(Fuse.Navigation.ChildRouterPagesUpdated value) :126
void PagesMap__add_Updated_fn(PagesMap* __this, uDelegate* value)
{
    __this->add_Updated(value);
}

// public generated void remove_Updated(Fuse.Navigation.ChildRouterPagesUpdated value) :126
void PagesMap__remove_Updated_fn(PagesMap* __this, uDelegate* value)
{
    __this->remove_Updated(value);
}

// public generated PagesMap() [instance] :104
void PagesMap::ctor_1()
{
    ctor_();
}

// public generated void add_Updated(Fuse.Navigation.ChildRouterPagesUpdated value) [instance] :126
void PagesMap::add_Updated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.PagesMap", "add_Updated(Fuse.Navigation.ChildRouterPagesUpdated)");
    Updated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Updated1, value), ::TYPES[41/*Fuse.Navigation.ChildRouterPagesUpdated*/]);
}

// public generated void remove_Updated(Fuse.Navigation.ChildRouterPagesUpdated value) [instance] :126
void PagesMap::remove_Updated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.PagesMap", "remove_Updated(Fuse.Navigation.ChildRouterPagesUpdated)");
    Updated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Updated1, value), ::TYPES[41/*Fuse.Navigation.ChildRouterPagesUpdated*/]);
}

// public static string GetObjectPath(object data) [static] :106
uString* PagesMap::GetObjectPath(uObject* data)
{
    uStackFrame __("Fuse.Navigation.PagesMap", "GetObjectPath(object)");
    uString* ret2;
    uString* ret3;
    uString* path = NULL;
    uObject* obj = uAs<uObject*>(data, ::TYPES[39/*Fuse.IObject*/]);

    if ((obj != NULL) && ::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[38/*"$__fuse_cla...*/]))
        path = (::g::Fuse::Marshal__ToType_fn(::TYPES[40/*Fuse.Marshal.ToType<string>*/], ::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[38/*"$__fuse_cla...*/]), &ret2), ret2);

    if ((obj != NULL) && ::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[39/*"$path"*/]))
        path = (::g::Fuse::Marshal__ToType_fn(::TYPES[40/*Fuse.Marshal.ToType<string>*/], ::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[39/*"$path"*/]), &ret3), ret3);

    return path;
}

// public static bool HasObjectPath(object data) [static] :118
bool PagesMap::HasObjectPath(uObject* data)
{
    uStackFrame __("Fuse.Navigation.PagesMap", "HasObjectPath(object)");
    uObject* obj = uAs<uObject*>(data, ::TYPES[39/*Fuse.IObject*/]);

    if ((obj != NULL) && (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[39/*"$path"*/]) || ::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[38/*"$__fuse_cla...*/])))
        return true;

    return false;
}

// public generated PagesMap New() [static] :104
PagesMap* PagesMap::New1()
{
    PagesMap* obj1 = (PagesMap*)uNew(PagesMap_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public delegate void RoutePageProxy.ProgressUpdated(double progress) :34
uDelegateType* RoutePageProxy__ProgressUpdated_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.RoutePageProxy.ProgressUpdated", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno
// --------------------------------------------------------------------

// public sealed class PushRoute :254
// {
static void PushRoute_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::RouterModify_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Navigation::RouterModify_type, interface1));
    type->SetFields(15);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PushRoute__New4_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::RouterModify_type* PushRoute_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouterModify_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouterModify_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PushRoute);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouterModify_type);
    type = (::g::Fuse::Navigation::RouterModify_type*)uClassType::New("Fuse.Navigation.PushRoute", options);
    type->fp_build_ = PushRoute_build;
    type->fp_ctor_ = (void*)PushRoute__New4_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Navigation::RouterModify__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Navigation::RouterModify__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public PushRoute() :257
void PushRoute__ctor_4_fn(PushRoute* __this)
{
    __this->ctor_4();
}

// public PushRoute New() :257
void PushRoute__New4_fn(PushRoute** __retval)
{
    *__retval = PushRoute::New4();
}

// public PushRoute() [instance] :257
void PushRoute::ctor_4()
{
    uStackFrame __("Fuse.Navigation.PushRoute", ".ctor()");
    ctor_3(0);
    How(0);
}

// public PushRoute New() [static] :257
PushRoute* PushRoute::New4()
{
    PushRoute* obj1 = (PushRoute*)uNew(PushRoute_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public sealed class PushRouteCommand :193
// {
static void PushRouteCommand_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::RouteModificationCommand_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PushRouteCommand__New1_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::RouteModificationCommand_type* PushRouteCommand_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::RouteModificationCommand_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PushRouteCommand);
    options.TypeSize = sizeof(::g::Fuse::Navigation::RouteModificationCommand_type);
    type = (::g::Fuse::Navigation::RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.PushRouteCommand", options);
    type->fp_build_ = PushRouteCommand_build;
    type->fp_ctor_ = (void*)PushRouteCommand__New1_fn;
    type->fp_ProcessArguments = (void(*)(::g::Fuse::Navigation::RouteModificationCommand*, ::g::Fuse::Navigation::RouterRequest*, uArray*, bool*))PushRouteCommand__ProcessArguments_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Navigation::RouteModificationCommand__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public generated PushRouteCommand() :193
void PushRouteCommand__ctor_3_fn(PushRouteCommand* __this)
{
    __this->ctor_3();
}

// public generated PushRouteCommand New() :193
void PushRouteCommand__New1_fn(PushRouteCommand** __retval)
{
    *__retval = PushRouteCommand::New1();
}

// internal override sealed bool ProcessArguments(Fuse.Navigation.RouterRequest request, Fuse.Reactive.Expression.Argument[] args) :195
void PushRouteCommand__ProcessArguments_fn(PushRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.PushRouteCommand", "ProcessArguments(Fuse.Navigation.RouterRequest,Fuse.Reactive.Expression.Argument[])");
    return *__retval = uPtr(request)->AddHow(0) && uPtr(request)->AddPath(::g::Fuse::Navigation::RouteModificationCommand__ArgumentArrayAdapter::New1(args)), void();
}

// public generated PushRouteCommand() [instance] :193
void PushRouteCommand::ctor_3()
{
    ctor_2();
}

// public generated PushRouteCommand New() [static] :193
PushRouteCommand* PushRouteCommand::New1()
{
    PushRouteCommand* obj1 = (PushRouteCommand*)uNew(PushRouteCommand_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Route.uno
// -------------------------------------------------------------

// public sealed class Route :13
// {
static void Route_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Route, Path), 0,
        ::g::Uno::String_typeof(), offsetof(Route, Parameter), 0,
        type, offsetof(Route, SubRoute), 0,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(Route, RouterPage), 0);
    type->Reflection.SetFields(3,
        new uField("Parameter", 1),
        new uField("Path", 0),
        new uField("SubRoute", 2));
    type->Reflection.SetFunctions(3,
        new uFunction("Append", NULL, (void*)Route__Append_fn, 0, false, type, 1, type),
        new uFunction("get_Length", NULL, (void*)Route__get_Length_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Route__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), type));
}

uType* Route_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Route);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Route", options);
    type->fp_build_ = Route_build;
    return type;
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :33
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute)
{
    __this->ctor_(path, parameter, subRoute);
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) :51
void Route__Append_fn(Route* __this, Route* subRoute, Route** __retval)
{
    *__retval = __this->Append(subRoute);
}

// public int get_Length() :43
void Route__get_Length_fn(Route* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :33
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval)
{
    *__retval = Route::New1(path, parameter, subRoute);
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [instance] :33
void Route::ctor_(uString* path, uString* parameter, Route* subRoute)
{
    Path = path;
    Parameter = parameter;
    SubRoute = subRoute;
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) [instance] :51
Route* Route::Append(Route* subRoute)
{
    uStackFrame __("Fuse.Navigation.Route", "Append(Fuse.Navigation.Route)");
    Route* sub = (SubRoute == NULL) ? subRoute : (Route*)uPtr(SubRoute)->Append(subRoute);
    return Route::New1(Path, Parameter, sub);
}

// public int get_Length() [instance] :43
int32_t Route::Length()
{
    uStackFrame __("Fuse.Navigation.Route", "get_Length()");

    if (SubRoute == NULL)
        return 1;
    else
        return uPtr(SubRoute)->Length() + 1;
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [static] :33
Route* Route::New1(uString* path, uString* parameter, Route* subRoute)
{
    Route* obj3 = (Route*)uNew(Route_typeof());
    obj3->ctor_(path, parameter, subRoute);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno
// --------------------------------------------------------------------------

// public abstract class RouteModificationCommand :8
// {
static void RouteModificationCommand_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(RouteModificationCommand_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(RouteModificationCommand_type, interface1));
    type->SetFields(3);
}

RouteModificationCommand_type* RouteModificationCommand_typeof()
{
    static uSStrong<RouteModificationCommand_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RouteModificationCommand);
    options.TypeSize = sizeof(RouteModificationCommand_type);
    type = (RouteModificationCommand_type*)uClassType::New("Fuse.Navigation.RouteModificationCommand", options);
    type->fp_build_ = RouteModificationCommand_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))RouteModificationCommand__Subscribe_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))RouteModificationCommand__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// internal RouteModificationCommand() :10
void RouteModificationCommand__ctor_2_fn(RouteModificationCommand* __this)
{
    __this->ctor_2();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :12
void RouteModificationCommand__Subscribe_fn(RouteModificationCommand* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Navigation.RouteModificationCommand", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)RouteModificationCommand__OuterSubscription::New1(__this, context, listener), void();
}

// internal RouteModificationCommand() [instance] :10
void RouteModificationCommand::ctor_2()
{
    ctor_1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public enum RoutePagePath :10
uEnumType* RoutePagePath_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutePagePath", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Local", 0LL,
        "Full", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RoutePageProxy.uno
// ----------------------------------------------------------------------

// internal sealed class RoutePageProxy :32
// {
static void RoutePageProxy_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Fuse::Navigation::RoutePagePath_typeof(), offsetof(RoutePageProxy, _path), 0,
        ::g::Fuse::Navigation::RoutePageTriggerWhen_typeof(), offsetof(RoutePageProxy, _triggerWhen), 0,
        ::g::Fuse::Visual_typeof(), offsetof(RoutePageProxy, _source), 0,
        RoutePageProxy__ProgressUpdated_typeof(), offsetof(RoutePageProxy, _progressUpdated), 0,
        RoutePageProxy__ActiveChanged_typeof(), offsetof(RoutePageProxy, _activeChanged), 0,
        ::g::Uno::Bool_typeof(), offsetof(RoutePageProxy, _isActive), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(RoutePageProxy__Level_typeof(), NULL), offsetof(RoutePageProxy, _levels), 0,
        ::g::Uno::Bool_typeof(), offsetof(RoutePageProxy, _activeChangedPending), 0,
        ::g::Fuse::Visual_typeof(), offsetof(RoutePageProxy, _Page), 0);
}

uType* RoutePageProxy_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(RoutePageProxy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.RoutePageProxy", options);
    type->fp_build_ = RoutePageProxy_build;
    return type;
}

// public RoutePageProxy(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ActiveChanged activeChanged) :76
void RoutePageProxy__ctor__fn(RoutePageProxy* __this, ::g::Fuse::Visual* source, uDelegate* activeChanged)
{
    __this->ctor_(source, activeChanged);
}

// public RoutePageProxy(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) :69
void RoutePageProxy__ctor_1_fn(RoutePageProxy* __this, ::g::Fuse::Visual* source, uDelegate* progressUpdated)
{
    __this->ctor_1(source, progressUpdated);
}

// private void DiscardLevels(int start) :194
void RoutePageProxy__DiscardLevels_fn(RoutePageProxy* __this, int32_t* start)
{
    __this->DiscardLevels(*start);
}

// public void Dispose() :92
void RoutePageProxy__Dispose_fn(RoutePageProxy* __this)
{
    __this->Dispose();
}

// private void Dispose(Fuse.Navigation.RoutePageProxy.Level level) :102
void RoutePageProxy__Dispose1_fn(RoutePageProxy* __this, RoutePageProxy__Level* level)
{
    __this->Dispose1(*level);
}

// private bool ExtendListen(Fuse.Navigation.RoutePageProxy.Level level) :141
void RoutePageProxy__ExtendListen_fn(RoutePageProxy* __this, RoutePageProxy__Level* level, bool* __retval)
{
    *__retval = __this->ExtendListen(*level);
}

// private int GetLevel(object sender) :112
void RoutePageProxy__GetLevel_fn(RoutePageProxy* __this, uObject* sender, int32_t* __retval)
{
    *__retval = __this->GetLevel(sender);
}

// private double GetProgress() :213
void RoutePageProxy__GetProgress_fn(RoutePageProxy* __this, double* __retval)
{
    *__retval = __this->GetProgress();
}

// private void GetState(bool& isActive, bool& isStable) :250
void RoutePageProxy__GetState_fn(RoutePageProxy* __this, bool* isActive, bool* isStable)
{
    __this->GetState(isActive, isStable);
}

// public void Init() :83
void RoutePageProxy__Init_fn(RoutePageProxy* __this)
{
    __this->Init();
}

// private void InitialUpdate() :231
void RoutePageProxy__InitialUpdate_fn(RoutePageProxy* __this)
{
    __this->InitialUpdate();
}

// private void Listen(Fuse.Navigation.RoutePageProxy.Level level) :164
void RoutePageProxy__Listen_fn(RoutePageProxy* __this, RoutePageProxy__Level* level)
{
    __this->Listen(*level);
}

// private void NavReady(object sender) :123
void RoutePageProxy__NavReady_fn(RoutePageProxy* __this, uObject* sender)
{
    __this->NavReady(sender);
}

// private void NavUnready(object sender) :203
void RoutePageProxy__NavUnready_fn(RoutePageProxy* __this, uObject* sender)
{
    __this->NavUnready(sender);
}

// public RoutePageProxy New(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ActiveChanged activeChanged) :76
void RoutePageProxy__New1_fn(::g::Fuse::Visual* source, uDelegate* activeChanged, RoutePageProxy** __retval)
{
    *__retval = RoutePageProxy::New1(source, activeChanged);
}

// public RoutePageProxy New(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) :69
void RoutePageProxy__New2_fn(::g::Fuse::Visual* source, uDelegate* progressUpdated, RoutePageProxy** __retval)
{
    *__retval = RoutePageProxy::New2(source, progressUpdated);
}

// private void OnActivePageChanged(object s, Fuse.Visual active) :269
void RoutePageProxy__OnActivePageChanged_fn(RoutePageProxy* __this, uObject* s, ::g::Fuse::Visual* active)
{
    __this->OnActivePageChanged(s, active);
}

// private void OnNavigationProgressChanged(object sender, Fuse.Navigation.NavigationArgs state) :244
void RoutePageProxy__OnNavigationProgressChanged_fn(RoutePageProxy* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->OnNavigationProgressChanged(sender, state);
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> state) :284
void RoutePageProxy__OnStateChanged_fn(RoutePageProxy* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* state)
{
    __this->OnStateChanged(s, state);
}

// public generated Fuse.Visual get_Page() :51
void RoutePageProxy__get_Page_fn(RoutePageProxy* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// private generated void set_Page(Fuse.Visual value) :51
void RoutePageProxy__set_Page_fn(RoutePageProxy* __this, ::g::Fuse::Visual* value)
{
    __this->Page(value);
}

// public Fuse.Navigation.RoutePagePath get_Path() :40
void RoutePageProxy__get_Path_fn(RoutePageProxy* __this, int32_t* __retval)
{
    *__retval = __this->Path();
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) :41
void RoutePageProxy__set_Path_fn(RoutePageProxy* __this, int32_t* value)
{
    __this->Path(*value);
}

// private void ScheduleActiveChanged() :274
void RoutePageProxy__ScheduleActiveChanged_fn(RoutePageProxy* __this)
{
    __this->ScheduleActiveChanged();
}

// public Fuse.Navigation.RoutePageTriggerWhen get_TriggerWhen() :47
void RoutePageProxy__get_TriggerWhen_fn(RoutePageProxy* __this, int32_t* __retval)
{
    *__retval = __this->TriggerWhen();
}

// public void set_TriggerWhen(Fuse.Navigation.RoutePageTriggerWhen value) :48
void RoutePageProxy__set_TriggerWhen_fn(RoutePageProxy* __this, int32_t* value)
{
    __this->TriggerWhen(*value);
}

// private void Unlisten(Fuse.Navigation.RoutePageProxy.Level level) :179
void RoutePageProxy__Unlisten_fn(RoutePageProxy* __this, RoutePageProxy__Level* level)
{
    __this->Unlisten(*level);
}

// private void UpdateActive() :289
void RoutePageProxy__UpdateActive_fn(RoutePageProxy* __this)
{
    __this->UpdateActive();
}

// public RoutePageProxy(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ActiveChanged activeChanged) [instance] :76
void RoutePageProxy::ctor_(::g::Fuse::Visual* source, uDelegate* activeChanged)
{
    _path = 1;
    _triggerWhen = 1;
    _levels = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(RoutePageProxy__Level_typeof(), NULL)));
    _activeChanged = activeChanged;
    _source = source;
}

// public RoutePageProxy(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) [instance] :69
void RoutePageProxy::ctor_1(::g::Fuse::Visual* source, uDelegate* progressUpdated)
{
    _path = 1;
    _triggerWhen = 1;
    _levels = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(RoutePageProxy__Level_typeof(), NULL)));
    _progressUpdated = progressUpdated;
    _source = source;
}

// private void DiscardLevels(int start) [instance] :194
void RoutePageProxy::DiscardLevels(int32_t start)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "DiscardLevels(int)");
    RoutePageProxy__Level ret5;

    for (int32_t i = uPtr(_levels)->Count() - 1; i >= start; --i)
    {
        Dispose1((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(i), &ret5), ret5));
        uPtr(_levels)->RemoveAt(i);
    }
}

// public void Dispose() [instance] :92
void RoutePageProxy::Dispose()
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "Dispose()");
    RoutePageProxy__Level ret6;

    for (int32_t i = 0; i < uPtr(_levels)->Count(); ++i)
        Dispose1((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(i), &ret6), ret6));

    uPtr(_levels)->Clear();
    _source = NULL;
    _progressUpdated = NULL;
    _activeChangedPending = false;
}

// private void Dispose(Fuse.Navigation.RoutePageProxy.Level level) [instance] :102
void RoutePageProxy::Dispose1(RoutePageProxy__Level level)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "Dispose(Fuse.Navigation.RoutePageProxy.Level)");
    Unlisten(level);

    if (level.PageProxy != NULL)
    {
        uPtr(level.PageProxy)->Dispose();
        level.PageProxy = NULL;
    }
}

// private bool ExtendListen(Fuse.Navigation.RoutePageProxy.Level level) [instance] :141
bool RoutePageProxy::ExtendListen(RoutePageProxy__Level level)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "ExtendListen(Fuse.Navigation.RoutePageProxy.Level)");
    RoutePageProxy__Level collection2;
    ::g::Fuse::Visual* nav = uPtr(uPtr(level.PageProxy)->Page())->Parent();
    uObject* outlet = uAs<uObject*>(nav, ::g::Fuse::Navigation::IRouterOutlet_typeof());

    if ((outlet == NULL) || (::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof())) == 0))
        return false;

    uObject* ignoreNav;
    ::g::Fuse::Visual* ignorePage;
    ::g::Fuse::Visual* q = ::g::Fuse::Navigation::Navigation::TryFindPage1(nav, &ignoreNav, &ignorePage);

    if (q == NULL)
        return false;

    collection2 = uDefault<RoutePageProxy__Level>();
    collection2.PageProxy = ::g::Fuse::Navigation::NavigationPageProxy::New1();
    RoutePageProxy__Level nextLevel = collection2;
    ::g::Uno::Collections::List__Add_fn(uPtr(_levels), uCRef(nextLevel));
    uPtr(nextLevel.PageProxy)->Init(uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavReady_fn, this), uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavUnready_fn, this), nav);
    return true;
}

// private int GetLevel(object sender) [instance] :112
int32_t RoutePageProxy::GetLevel(uObject* sender)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "GetLevel(object)");
    RoutePageProxy__Level ret7;

    for (int32_t i = 0; i < uPtr(_levels)->Count(); ++i)
        if (sender == (::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(i), &ret7), ret7).PageProxy)
            return i;

    ::g::Fuse::Diagnostics::InternalError(uString::Const("Unexpected sender"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RoutePageProxy.uno"), 119, uString::Const("GetLevel"));
    return -1;
}

// private double GetProgress() [instance] :213
double RoutePageProxy::GetProgress()
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "GetProgress()");
    RoutePageProxy__Level ret8;
    float p = 1.0f;

    for (int32_t i = 0; i < uPtr(_levels)->Count(); ++i)
    {
        RoutePageProxy__Level level = (::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(i), &ret8), ret8);

        if (!uPtr(level.PageProxy)->IsReady())
            return 1.0;

        ::g::Fuse::Navigation::NavigationPageState pp = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uPtr(level.PageProxy)->Page());
        float lp = pp.Progress;

        if ((i == 0) || (::g::Uno::Math::Abs1(lp) > ::g::Uno::Math::Abs1(p)))
            p = lp;
    }

    return (double)p;
}

// private void GetState(bool& isActive, bool& isStable) [instance] :250
void RoutePageProxy::GetState(bool* isActive, bool* isStable)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "GetState(bool&,bool&)");
    RoutePageProxy__Level ret9;
    RoutePageProxy__Level ret10;
    RoutePageProxy__Level ret11;
    *isActive = false;
    *isStable = true;

    if (uPtr(_levels)->Count() == 0)
        return;

    *isActive = true;

    for (int32_t i = 0; i < uPtr(_levels)->Count(); ++i)
    {
        bool la = ::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(i), &ret9), ret9).PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/])) == uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(i), &ret10), ret10).PageProxy)->Page();
        *isActive = *isActive && la;
        bool s = ::g::Fuse::Navigation::INavigation::State(uInterface(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(i), &ret11), ret11).PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/])) == 0;
        *isStable = *isStable && s;
    }
}

// public void Init() [instance] :83
void RoutePageProxy::Init()
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "Init()");
    RoutePageProxy__Level collection1;
    collection1 = uDefault<RoutePageProxy__Level>();
    collection1.PageProxy = ::g::Fuse::Navigation::NavigationPageProxy::New1();
    RoutePageProxy__Level level = collection1;
    ::g::Uno::Collections::List__Add_fn(uPtr(_levels), uCRef(level));
    uPtr(level.PageProxy)->Init(uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavReady_fn, this), uDelegate::New(::TYPES[27/*Fuse.Navigation.NavigationPageProxy.StatusChangedHandler*/], (void*)RoutePageProxy__NavUnready_fn, this), _source);
}

// private void InitialUpdate() [instance] :231
void RoutePageProxy::InitialUpdate()
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "InitialUpdate()");

    if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
        uPtr(_progressUpdated)->InvokeVoid(uCRef(GetProgress()));

    if (::g::Uno::Delegate::op_Inequality(_activeChanged, NULL))
    {
        bool ignoreStable;
        GetState(&_isActive, &ignoreStable);
        uPtr(_activeChanged)->Invoke(2, uCRef(_isActive), uCRef(true));
    }
}

// private void Listen(Fuse.Navigation.RoutePageProxy.Level level) [instance] :164
void RoutePageProxy::Listen(RoutePageProxy__Level level)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "Listen(Fuse.Navigation.RoutePageProxy.Level)");

    if (!level.Listening)
    {
        if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
            ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], (void*)RoutePageProxy__OnNavigationProgressChanged_fn, this));

        if (::g::Uno::Delegate::op_Inequality(_activeChanged, NULL))
        {
            ::g::Fuse::Navigation::INavigation::add_ActivePageChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)RoutePageProxy__OnActivePageChanged_fn, this));
            ::g::Fuse::Navigation::INavigation::add_StateChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)RoutePageProxy__OnStateChanged_fn, this));
        }

        level.Listening = true;
    }
}

// private void NavReady(object sender) [instance] :123
void RoutePageProxy::NavReady(uObject* sender)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "NavReady(object)");
    RoutePageProxy__Level ret12;
    int32_t levelNdx = GetLevel(sender);

    if (levelNdx == -1)
        return;

    RoutePageProxy__Level level = (::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(levelNdx), &ret12), ret12);
    Listen(level);
    DiscardLevels(levelNdx + 1);

    if (Path() == 1)
    {
        if (ExtendListen(level))
            return;
    }

    InitialUpdate();
}

// private void NavUnready(object sender) [instance] :203
void RoutePageProxy::NavUnready(uObject* sender)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "NavUnready(object)");
    RoutePageProxy__Level ret13;
    int32_t level = GetLevel(sender);

    if (level == -1)
        return;

    Unlisten((::g::Uno::Collections::List__get_Item_fn(uPtr(_levels), uCRef<int32_t>(level), &ret13), ret13));
    DiscardLevels(level + 1);
}

// private void OnActivePageChanged(object s, Fuse.Visual active) [instance] :269
void RoutePageProxy::OnActivePageChanged(uObject* s, ::g::Fuse::Visual* active)
{
    ScheduleActiveChanged();
}

// private void OnNavigationProgressChanged(object sender, Fuse.Navigation.NavigationArgs state) [instance] :244
void RoutePageProxy::OnNavigationProgressChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "OnNavigationProgressChanged(object,Fuse.Navigation.NavigationArgs)");

    if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
        uPtr(_progressUpdated)->InvokeVoid(uCRef(GetProgress()));
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> state) [instance] :284
void RoutePageProxy::OnStateChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* state)
{
    ScheduleActiveChanged();
}

// public generated Fuse.Visual get_Page() [instance] :51
::g::Fuse::Visual* RoutePageProxy::Page()
{
    return _Page;
}

// private generated void set_Page(Fuse.Visual value) [instance] :51
void RoutePageProxy::Page(::g::Fuse::Visual* value)
{
    _Page = value;
}

// public Fuse.Navigation.RoutePagePath get_Path() [instance] :40
int32_t RoutePageProxy::Path()
{
    return _path;
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) [instance] :41
void RoutePageProxy::Path(int32_t value)
{
    _path = value;
}

// private void ScheduleActiveChanged() [instance] :274
void RoutePageProxy::ScheduleActiveChanged()
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "ScheduleActiveChanged()");

    if (_activeChangedPending)
        return;

    _activeChangedPending = true;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)RoutePageProxy__UpdateActive_fn, this), -1, 2);
}

// public Fuse.Navigation.RoutePageTriggerWhen get_TriggerWhen() [instance] :47
int32_t RoutePageProxy::TriggerWhen()
{
    return _triggerWhen;
}

// public void set_TriggerWhen(Fuse.Navigation.RoutePageTriggerWhen value) [instance] :48
void RoutePageProxy::TriggerWhen(int32_t value)
{
    _triggerWhen = value;
}

// private void Unlisten(Fuse.Navigation.RoutePageProxy.Level level) [instance] :179
void RoutePageProxy::Unlisten(RoutePageProxy__Level level)
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "Unlisten(Fuse.Navigation.RoutePageProxy.Level)");

    if (level.Listening)
    {
        if (::g::Uno::Delegate::op_Inequality(_progressUpdated, NULL))
            ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], (void*)RoutePageProxy__OnNavigationProgressChanged_fn, this));

        if (::g::Uno::Delegate::op_Inequality(_activeChanged, NULL))
        {
            ::g::Fuse::Navigation::INavigation::remove_ActivePageChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/], (void*)RoutePageProxy__OnActivePageChanged_fn, this));
            ::g::Fuse::Navigation::INavigation::remove_StateChanged(uInterface(uPtr(uPtr(level.PageProxy)->Navigation()), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)RoutePageProxy__OnStateChanged_fn, this));
        }

        level.Listening = false;
    }
}

// private void UpdateActive() [instance] :289
void RoutePageProxy::UpdateActive()
{
    uStackFrame __("Fuse.Navigation.RoutePageProxy", "UpdateActive()");

    if (!_activeChangedPending)
        return;

    _activeChangedPending = false;
    bool newActive, stable;
    GetState(&newActive, &stable);

    if ((newActive == _isActive) || (!stable && (TriggerWhen() == 1)))
        return;

    _isActive = newActive;
    uPtr(_activeChanged)->Invoke(2, uCRef(_isActive), uCRef(false));
}

// public RoutePageProxy New(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ActiveChanged activeChanged) [static] :76
RoutePageProxy* RoutePageProxy::New1(::g::Fuse::Visual* source, uDelegate* activeChanged)
{
    RoutePageProxy* obj4 = (RoutePageProxy*)uNew(RoutePageProxy_typeof());
    obj4->ctor_(source, activeChanged);
    return obj4;
}

// public RoutePageProxy New(Fuse.Visual source, Fuse.Navigation.RoutePageProxy.ProgressUpdated progressUpdated) [static] :69
RoutePageProxy* RoutePageProxy::New2(::g::Fuse::Visual* source, uDelegate* progressUpdated)
{
    RoutePageProxy* obj3 = (RoutePageProxy*)uNew(RoutePageProxy_typeof());
    obj3->ctor_1(source, progressUpdated);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RoutePageProxy.uno
// ----------------------------------------------------------------------

// public enum RoutePageTriggerWhen :21
uEnumType* RoutePageTriggerWhen_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutePageTriggerWhen", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Immediate", 0LL,
        "Stable", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno
// --------------------------------------------------------------------------

// public partial sealed class Router :5
// {
// static Router() :7
static void Router__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[48/*Fuse.Scripting.ScriptMember[]*/], 8, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("bookmark"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, ::TYPES[15/*object[]*/], NULL), (void*)Router__Bookmark_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New4(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("getRoute"), uDelegate::New(::g::Uno::Func3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), __type, ::TYPES[15/*object[]*/], uObject_typeof(), NULL), (void*)Router__GetRoute_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("goBack"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Router__GoBack1_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[59/*"goto"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, ::TYPES[15/*object[]*/], NULL), (void*)Router__Goto1_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("gotoRelative"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, ::TYPES[15/*object[]*/], NULL), (void*)Router__GotoRelative_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("modify"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, ::TYPES[15/*object[]*/], NULL), (void*)Router__Modify2_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("push"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, ::TYPES[15/*object[]*/], NULL), (void*)Router__Push1_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("pushRelative"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, ::TYPES[15/*object[]*/], NULL), (void*)Router__PushRelative_fn))));
}

static void Router_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Keyboard_typeof(),
        ::g::Fuse::Navigation::PageData_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Router_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Router_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Router_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Router_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface6),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(Router_type, interface7),
        ::g::Fuse::IPreviewStateSaver_typeof(), offsetof(Router_type, interface8));
    type->SetFields(18,
        ::g::Uno::Bool_typeof(), offsetof(Router, _isMasterRouter), 0,
        ::g::Fuse::Navigation::BackButtonAction_typeof(), offsetof(Router, _backButtonAction), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Navigation::RouterPageRoute_typeof(), NULL), offsetof(Router, Bookmarks), 0,
        ::g::Fuse::Navigation::RouterGoBackBehavior_typeof(), offsetof(Router, _goBackBehavior), 0,
        ::g::Fuse::Navigation::RouterPageRoute_typeof(), offsetof(Router, _prepareCurrent), 0,
        ::g::Fuse::Navigation::RouterPageRoute_typeof(), offsetof(Router, _prepareNext), 0,
        ::g::Fuse::Navigation::RoutingOperation_typeof(), offsetof(Router, _prepareOperation), 0,
        ::g::Uno::String_typeof(), offsetof(Router, _prepareOperationStyle), 0,
        ::g::Uno::Double_typeof(), offsetof(Router, _prepareProgress), 0,
        ::g::Fuse::Navigation::IRouterOutlet_typeof(), offsetof(Router, _prepareOutlet), 0,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(Router, _rootPage), 0,
        Router__BackAtRootPressedHandler_typeof(), offsetof(Router, BackAtRootPressed1), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(Router, HistoryChanged1), 0);
    type->Reflection.SetFunctions(19,
        new uFunction("add_BackAtRootPressed", NULL, (void*)Router__add_BackAtRootPressed_fn, 0, false, uVoid_typeof(), 1, Router__BackAtRootPressedHandler_typeof()),
        new uFunction("remove_BackAtRootPressed", NULL, (void*)Router__remove_BackAtRootPressed_fn, 0, false, uVoid_typeof(), 1, Router__BackAtRootPressedHandler_typeof()),
        new uFunction("get_BackButtonAction", NULL, (void*)Router__get_BackButtonAction_fn, 0, false, ::g::Fuse::Navigation::BackButtonAction_typeof(), 0),
        new uFunction("set_BackButtonAction", NULL, (void*)Router__set_BackButtonAction_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::BackButtonAction_typeof()),
        new uFunction("CancelNavigation", NULL, (void*)Router__CancelNavigation_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_CanGoBack", NULL, (void*)Router__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("GetCurrentRoute", NULL, (void*)Router__GetCurrentRoute_fn, 0, false, ::g::Fuse::Navigation::Route_typeof(), 0),
        new uFunction("GoBack", NULL, (void*)Router__GoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_GoBackBehavior", NULL, (void*)Router__get_GoBackBehavior_fn, 0, false, ::g::Fuse::Navigation::RouterGoBackBehavior_typeof(), 0),
        new uFunction("set_GoBackBehavior", NULL, (void*)Router__set_GoBackBehavior_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::RouterGoBackBehavior_typeof()),
        new uFunction("Goto", NULL, (void*)Router__Goto_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Navigation::Route_typeof(), ::g::Uno::String_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)Router__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)Router__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("get_IsMasterRouter", NULL, (void*)Router__get_IsMasterRouter_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsMasterRouter", NULL, (void*)Router__set_IsMasterRouter_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)Router__New2_fn, 0, true, type, 0),
        new uFunction("get_PrepareProgress", NULL, (void*)Router__get_PrepareProgress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_PrepareProgress", NULL, (void*)Router__set_PrepareProgress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Push", NULL, (void*)Router__Push_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Navigation::Route_typeof(), ::g::Uno::String_typeof()));
}

Router_type* Router_typeof()
{
    static uSStrong<Router_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 9;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Router);
    options.TypeSize = sizeof(Router_type);
    type = (Router_type*)uClassType::New("Fuse.Navigation.Router", options);
    type->fp_build_ = Router_build;
    type->fp_ctor_ = (void*)Router__New2_fn;
    type->fp_cctor_ = Router__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Router__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Router__OnUnrooted_fn;
    type->interface8.fp_Save = (void(*)(uObject*, ::g::Fuse::PreviewStateData*))Router__FuseIPreviewStateSaverSave_fn;
    type->interface7.fp_GoBack = (void(*)(uObject*))Router__FuseNavigationIBaseNavigationGoBack_fn;
    type->interface7.fp_GoForward = (void(*)(uObject*))Router__FuseNavigationIBaseNavigationGoForward_fn;
    type->interface7.fp_get_CanGoForward = (void(*)(uObject*, bool*))Router__FuseNavigationIBaseNavigationget_CanGoForward_fn;
    type->interface7.fp_get_CanGoBack = (void(*)(uObject*, bool*))Router__get_CanGoBack_fn;
    type->interface7.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__add_HistoryChanged_fn;
    type->interface7.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))Router__remove_HistoryChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Router() :5
void Router__ctor_2_fn(Router* __this)
{
    __this->ctor_2();
}

// private static Fuse.Navigation.IRouterOutlet AsRouterOutlet(Fuse.Node n) :656
void Router__AsRouterOutlet_fn(::g::Fuse::Node* n, uObject** __retval)
{
    *__retval = Router::AsRouterOutlet(n);
}

// public generated void add_BackAtRootPressed(Fuse.Navigation.Router.BackAtRootPressedHandler value) :164
void Router__add_BackAtRootPressed_fn(Router* __this, uDelegate* value)
{
    __this->add_BackAtRootPressed(value);
}

// public generated void remove_BackAtRootPressed(Fuse.Navigation.Router.BackAtRootPressedHandler value) :164
void Router__remove_BackAtRootPressed_fn(Router* __this, uDelegate* value)
{
    __this->remove_BackAtRootPressed(value);
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() :187
void Router__get_BackButtonAction_fn(Router* __this, int32_t* __retval)
{
    *__retval = __this->BackButtonAction();
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) :188
void Router__set_BackButtonAction_fn(Router* __this, int32_t* value)
{
    __this->BackButtonAction(*value);
}

// private static void Bookmark(Fuse.Navigation.Router r, object[] args) :214
void Router__Bookmark_fn(Router* r, uArray* args)
{
    Router::Bookmark(r, args);
}

// public void CancelNavigation() :404
void Router__CancelNavigation_fn(Router* __this)
{
    __this->CancelNavigation();
}

// public bool get_CanGoBack() :314
void Router__get_CanGoBack_fn(Router* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// private void ClearPrepared() :372
void Router__ClearPrepared_fn(Router* __this)
{
    __this->ClearPrepared();
}

// private bool EnumerateHistory(Fuse.Navigation.Router.HistoryAction action, Uno.Collections.List<Fuse.Navigation.RouterPage> stack, Fuse.Navigation.RouterPage rp) :817
void Router__EnumerateHistory_fn(Router* __this, uDelegate* action, ::g::Uno::Collections::List* stack, ::g::Fuse::Navigation::RouterPage* rp, bool* __retval)
{
    *__retval = __this->EnumerateHistory(action, stack, rp);
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) :634
void Router__FindOutletDown_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletDown(active);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) :663
void Router__FindOutletUp_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletUp(active);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active, Fuse.Node& page) :669
void Router__FindOutletUp1_fn(Router* __this, ::g::Fuse::Node* active, ::g::Fuse::Node** page, uObject** __retval)
{
    *__retval = __this->FindOutletUp1(active, page);
}

// internal static Fuse.Visual FindRouterOutletPage(Fuse.Node from) :598
void Router__FindRouterOutletPage_fn(::g::Fuse::Node* from, ::g::Fuse::Visual** __retval)
{
    *__retval = Router::FindRouterOutletPage(from);
}

// private void FinishPrepared() :363
void Router__FinishPrepared_fn(Router* __this)
{
    __this->FinishPrepared();
}

// private void Fuse.IPreviewStateSaver.Save(Fuse.PreviewStateData psd) :144
void Router__FuseIPreviewStateSaverSave_fn(Router* __this, ::g::Fuse::PreviewStateData* psd)
{
    uStackFrame __("Fuse.Navigation.Router", "Fuse.IPreviewStateSaver.Save(Fuse.PreviewStateData)");
    uPtr(psd)->Set(uString::Const("router"), __this->_rootPage);
}

// private bool Fuse.Navigation.IBaseNavigation.get_CanGoForward() :729
void Router__FuseNavigationIBaseNavigationget_CanGoForward_fn(Router* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void Fuse.Navigation.IBaseNavigation.GoBack() :310
void Router__FuseNavigationIBaseNavigationGoBack_fn(Router* __this)
{
    __this->GoBack();
}

// private void Fuse.Navigation.IBaseNavigation.GoForward() :728
void Router__FuseNavigationIBaseNavigationGoForward_fn(Router* __this)
{
}

// private Fuse.Navigation.RouterPageRoute GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) :556
void Router__GetCurrent_fn(Router* __this, ::g::Fuse::Visual* from, uObject* to, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = __this->GetCurrent(from, to);
}

// public Fuse.Navigation.Route GetCurrentRoute() :191
void Router__GetCurrentRoute_fn(Router* __this, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrentRoute();
}

// private Fuse.Navigation.RouterPageRoute GetCurrentRouterPageRoute() :196
void Router__GetCurrentRouterPageRoute_fn(Router* __this, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = __this->GetCurrentRouterPageRoute();
}

// internal Fuse.Navigation.RouterPageRoute GetHistoryRoute(int at) :765
void Router__GetHistoryRoute_fn(Router* __this, int32_t* at, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = __this->GetHistoryRoute(*at);
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) :619
void Router__GetOutletDepth_fn(Router* __this, uObject* outlet, int32_t* __retval)
{
    *__retval = __this->GetOutletDepth(outlet);
}

// private static Fuse.Navigation.RouterPageRoute GetRelative(Fuse.Navigation.Router r, object[] args) :92
void Router__GetRelative_fn(Router* r, uArray* args, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = Router::GetRelative(r, args);
}

// internal Fuse.Navigation.RouterPageRoute GetRelativeRoute(Fuse.Node from, Fuse.Navigation.RouterPageRoute rel) :693
void Router__GetRelativeRoute1_fn(Router* __this, ::g::Fuse::Node* from, ::g::Fuse::Navigation::RouterPageRoute* rel, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = __this->GetRelativeRoute1(from, rel);
}

// private static object GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :305
void Router__GetRoute_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args, uObject** __retval)
{
    *__retval = Router::GetRoute(c, r, args);
}

// private Fuse.Navigation.RouterPageRoute GetRouteUpToRouter(Fuse.Node from) :570
void Router__GetRouteUpToRouter_fn(Router* __this, ::g::Fuse::Node* from, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = __this->GetRouteUpToRouter(from);
}

// public bool GoBack() :296
void Router__GoBack_fn(Router* __this, bool* __retval)
{
    *__retval = __this->GoBack();
}

// private static void GoBack(Fuse.Navigation.Router r) :135
void Router__GoBack1_fn(Router* r)
{
    Router::GoBack1(r);
}

// public Fuse.Navigation.RouterGoBackBehavior get_GoBackBehavior() :279
void Router__get_GoBackBehavior_fn(Router* __this, int32_t* __retval)
{
    *__retval = __this->GoBackBehavior();
}

// public void set_GoBackBehavior(Fuse.Navigation.RouterGoBackBehavior value) :280
void Router__set_GoBackBehavior_fn(Router* __this, int32_t* value)
{
    __this->GoBackBehavior(*value);
}

// public void Goto(Fuse.Navigation.Route route, [string operationStyle]) :202
void Router__Goto_fn(Router* __this, ::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    __this->Goto(route, operationStyle);
}

// private static void Goto(Fuse.Navigation.Router r, object[] args) :34
void Router__Goto1_fn(Router* r, uArray* args)
{
    Router::Goto1(r, args);
}

// private static void GotoRelative(Fuse.Navigation.Router r, object[] args) :70
void Router__GotoRelative_fn(Router* r, uArray* args)
{
    Router::GotoRelative(r, args);
}

// private bool GoUp() :321
void Router__GoUp_fn(Router* __this, bool* __retval)
{
    *__retval = __this->GoUp();
}

// private bool HasOtherRouter(Fuse.Visual n) :714
void Router__HasOtherRouter_fn(Router* __this, ::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = __this->HasOtherRouter(n);
}

// private static bool HasRouter(Fuse.Node n) :720
void Router__HasRouter_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Router::HasRouter(n);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :731
void Router__add_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :731
void Router__remove_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public bool get_IsMasterRouter() :156
void Router__get_IsMasterRouter_fn(Router* __this, bool* __retval)
{
    *__retval = __this->IsMasterRouter();
}

// public void set_IsMasterRouter(bool value) :157
void Router__set_IsMasterRouter_fn(Router* __this, bool* value)
{
    __this->IsMasterRouter(*value);
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.RouterPageRoute route, Fuse.Navigation.NavigationGotoMode mode, string operationStyle) :219
void Router__Modify1_fn(Router* __this, int32_t* how, ::g::Fuse::Navigation::RouterPageRoute* route, int32_t* mode, uString* operationStyle)
{
    __this->Modify1(*how, route, *mode, operationStyle);
}

// private static void Modify(Fuse.Navigation.Router r, object[] args) :173
void Router__Modify2_fn(Router* r, uArray* args)
{
    Router::Modify2(r, args);
}

// public generated Router New() :5
void Router__New2_fn(Router** __retval)
{
    *__retval = Router::New2();
}

// internal void OnHistoryChanged() :732
void Router__OnHistoryChanged_fn(Router* __this)
{
    __this->OnHistoryChanged();
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) :165
void Router__OnKeyPressed_fn(Router* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override sealed void OnRooted() :92
void Router__OnRooted_fn(Router* __this)
{
    uStackFrame __("Fuse.Navigation.Router", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::g::Fuse::Input::KeyPressedHandler_typeof(), (void*)Router__OnKeyPressed_fn, __this));

    if (__this->IsMasterRouter())
    {
        ::g::Fuse::Visual* n = __this->Parent();
        bool root = true;

        while (n != NULL)
        {
            if (__this->HasOtherRouter(n))
            {
                root = false;
                break;
            }

            n = uPtr(n)->Parent();
        }

        if (root)
        {
            ::g::Fuse::PreviewState* ps = ::g::Fuse::PreviewState::Find(__this);

            if (ps != NULL)
            {
                uPtr(ps)->AddSaver((uObject*)__this);
                ::g::Fuse::PreviewStateData* psd = ps->Current();

                if (psd != NULL)
                {
                    ::g::Fuse::Navigation::RouterPage* storedPage = uAs< ::g::Fuse::Navigation::RouterPage*>(uPtr(psd)->Consume(uString::Const("router")), ::g::Fuse::Navigation::RouterPage_typeof());

                    if (storedPage != NULL)
                        __this->_rootPage = storedPage;
                }
            }
        }
    }
}

// protected override sealed void OnUnrooted() :132
void Router__OnUnrooted_fn(Router* __this)
{
    uStackFrame __("Fuse.Navigation.Router", "OnUnrooted()");
    ::g::Fuse::PreviewState* ps = ::g::Fuse::PreviewState::Find(__this);

    if (ps != NULL)
        uPtr(ps)->RemoveSaver((uObject*)__this);

    ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::g::Fuse::Input::KeyPressedHandler_typeof(), (void*)Router__OnKeyPressed_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void Pop() :337
void Router__Pop_fn(Router* __this)
{
    __this->Pop();
}

// public double get_PrepareProgress() :381
void Router__get_PrepareProgress_fn(Router* __this, double* __retval)
{
    *__retval = __this->PrepareProgress();
}

// public void set_PrepareProgress(double value) :382
void Router__set_PrepareProgress_fn(Router* __this, double* value)
{
    __this->PrepareProgress(*value);
}

// private void PrepareRoute(Fuse.Navigation.RouterPageRoute r, Fuse.Navigation.RoutingOperation operation, string operationStyle) :353
void Router__PrepareRoute_fn(Router* __this, ::g::Fuse::Navigation::RouterPageRoute* r, int32_t* operation, uString* operationStyle)
{
    __this->PrepareRoute(r, *operation, operationStyle);
}

// public void Push(Fuse.Navigation.Route route, [string operationStyle]) :208
void Router__Push_fn(Router* __this, ::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    __this->Push(route, operationStyle);
}

// private static void Push(Fuse.Navigation.Router r, object[] args) :121
void Router__Push1_fn(Router* r, uArray* args)
{
    Router::Push1(r, args);
}

// private static void PushRelative(Fuse.Navigation.Router r, object[] args) :85
void Router__PushRelative_fn(Router* r, uArray* args)
{
    Router::PushRelative(r, args);
}

// internal Fuse.Navigation.RouterPage get_RootPage() :761
void Router__get_RootPage_fn(Router* __this, ::g::Fuse::Navigation::RouterPage** __retval)
{
    *__retval = __this->RootPage();
}

// private void SetPrepareProgress(double value) :385
void Router__SetPrepareProgress_fn(Router* __this, double* value)
{
    __this->SetPrepareProgress(*value);
}

// private Fuse.Navigation.RouterPageRoute SetRoute(Fuse.Navigation.RouterPageRoute r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, [bool userRequest]) :419
void Router__SetRoute_fn(Router* __this, ::g::Fuse::Navigation::RouterPageRoute* r, int32_t* gotoMode, int32_t* operation, uString* operationStyle, bool* userRequest, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = __this->SetRoute(r, *gotoMode, *operation, operationStyle, *userRequest);
}

// private Fuse.Navigation.RouterPageRoute SetRouteImpl(Fuse.Visual root, Fuse.Navigation.RouterPage rootPage, Fuse.Navigation.RouterPageRoute r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, Fuse.Navigation.IRouterOutlet& majorChange, [bool canReuse]) :450
void Router__SetRouteImpl_fn(Router* __this, ::g::Fuse::Visual* root, ::g::Fuse::Navigation::RouterPage* rootPage, ::g::Fuse::Navigation::RouterPageRoute* r, int32_t* gotoMode, int32_t* operation, uString* operationStyle, uObject** majorChange, bool* canReuse, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = __this->SetRouteImpl(root, rootPage, r, *gotoMode, *operation, operationStyle, majorChange, *canReuse);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) :738
void Router__TryFindRouter_fn(::g::Fuse::Node* n, Router** __retval)
{
    *__retval = Router::TryFindRouter(n);
}

// public generated Router() [instance] :5
void Router::ctor_2()
{
    _isMasterRouter = true;
    Bookmarks = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Navigation::RouterPageRoute_typeof(), NULL)));
    _prepareProgress = 0.0;
    _rootPage = ::g::Fuse::Navigation::RouterPage::CreateDefault();
    ctor_1();
}

// public generated void add_BackAtRootPressed(Fuse.Navigation.Router.BackAtRootPressedHandler value) [instance] :164
void Router::add_BackAtRootPressed(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "add_BackAtRootPressed(Fuse.Navigation.Router.BackAtRootPressedHandler)");
    BackAtRootPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BackAtRootPressed1, value), Router__BackAtRootPressedHandler_typeof());
}

// public generated void remove_BackAtRootPressed(Fuse.Navigation.Router.BackAtRootPressedHandler value) [instance] :164
void Router::remove_BackAtRootPressed(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "remove_BackAtRootPressed(Fuse.Navigation.Router.BackAtRootPressedHandler)");
    BackAtRootPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BackAtRootPressed1, value), Router__BackAtRootPressedHandler_typeof());
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() [instance] :187
int32_t Router::BackButtonAction()
{
    return _backButtonAction;
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) [instance] :188
void Router::BackButtonAction(int32_t value)
{
    _backButtonAction = value;
}

// public void CancelNavigation() [instance] :404
void Router::CancelNavigation()
{
    uStackFrame __("Fuse.Navigation.Router", "CancelNavigation()");

    if (_prepareOutlet != NULL)
    {
        ::g::Fuse::Navigation::IRouterOutlet::CancelPrepare(uInterface(uPtr(_prepareOutlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()));
        ClearPrepared();
    }
    else
        ::g::Fuse::Diagnostics::InternalError(uString::Const("No active navigation that can be cancelled"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 415, uString::Const("CancelNavigation"));
}

// public bool get_CanGoBack() [instance] :314
bool Router::CanGoBack()
{
    uStackFrame __("Fuse.Navigation.Router", "get_CanGoBack()");
    return GetHistoryRoute(1) != NULL;
}

// private void ClearPrepared() [instance] :372
void Router::ClearPrepared()
{
    _prepareOutlet = NULL;
    _prepareCurrent = NULL;
    _prepareNext = NULL;
}

// private bool EnumerateHistory(Fuse.Navigation.Router.HistoryAction action, Uno.Collections.List<Fuse.Navigation.RouterPage> stack, Fuse.Navigation.RouterPage rp) [instance] :817
bool Router::EnumerateHistory(uDelegate* action, ::g::Uno::Collections::List* stack, ::g::Fuse::Navigation::RouterPage* rp)
{
    uStackFrame __("Fuse.Navigation.Router", "EnumerateHistory(Fuse.Navigation.Router.HistoryAction,Uno.Collections.List<Fuse.Navigation.RouterPage>,Fuse.Navigation.RouterPage)");
    bool ret4;

    if (rp == NULL)
        return true;

    ::g::Fuse::Reactive::ObserverMap* cp = uPtr(rp)->ChildRouterPages();

    if ((cp == NULL) || (uPtr(cp)->Count() == 0))
        return (uPtr(action)->Invoke(&ret4, 1, stack), ret4);

    for (int32_t i = uPtr(cp)->Count() - 1; i >= 0; --i)
    {
        ::g::Fuse::Navigation::RouterPage* childPage = (::g::Fuse::Navigation::RouterPage*)uPtr(cp)->Item(i);
        ::g::Uno::Collections::List__Add_fn(uPtr(stack), childPage);
        bool q = EnumerateHistory(action, stack, childPage);
        stack->RemoveAt(stack->Count() - 1);

        if (!q)
            return false;
    }

    return true;
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) [instance] :634
uObject* Router::FindOutletDown(::g::Fuse::Node* active)
{
    uStackFrame __("Fuse.Navigation.Router", "FindOutletDown(Fuse.Node)");
    uObject* ro = Router::AsRouterOutlet(active);

    if (ro != NULL)
        return ro;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[13/*Fuse.Visual*/]);

    if (v != NULL)
    {
        if (HasOtherRouter(v))
            return NULL;

        for (::g::Fuse::Node* ue = (::g::Fuse::Node*)uPtr(v)->FirstChild(::TYPES[24/*Fuse.Visual.FirstChild<Fuse.Node>*/]); ue != NULL; ue = (::g::Fuse::Node*)uPtr(ue)->NextSibling(::TYPES[25/*Fuse.Node.NextSibling<Fuse.Node>*/]))
        {
            ro = FindOutletDown(ue);

            if (ro != NULL)
                return ro;
        }
    }

    return NULL;
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) [instance] :663
uObject* Router::FindOutletUp(::g::Fuse::Node* active)
{
    uStackFrame __("Fuse.Navigation.Router", "FindOutletUp(Fuse.Node)");
    ::g::Fuse::Node* ignore;
    return FindOutletUp1(active, &ignore);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active, Fuse.Node& page) [instance] :669
uObject* Router::FindOutletUp1(::g::Fuse::Node* active, ::g::Fuse::Node** page)
{
    uStackFrame __("Fuse.Navigation.Router", "FindOutletUp(Fuse.Node,Fuse.Node&)");
    *page = active;

    while (active != NULL)
    {
        uObject* ro = Router::AsRouterOutlet(active);

        if (ro != NULL)
            return ro;

        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[13/*Fuse.Visual*/]);

        if ((v != NULL) && Router::HasRouter(v))
            return NULL;

        *page = active;
        active = uPtr(active)->Parent();
    }

    return NULL;
}

// private void FinishPrepared() [instance] :363
void Router::FinishPrepared()
{
    uStackFrame __("Fuse.Navigation.Router", "FinishPrepared()");

    if (_prepareOutlet == NULL)
        return;

    SetRoute(_prepareNext, 0, _prepareOperation, _prepareOperationStyle, true);
    ClearPrepared();
}

// private Fuse.Navigation.RouterPageRoute GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) [instance] :556
::g::Fuse::Navigation::RouterPageRoute* Router::GetCurrent(::g::Fuse::Visual* from, uObject* to)
{
    uStackFrame __("Fuse.Navigation.Router", "GetCurrent(Fuse.Visual,[Fuse.Navigation.IRouterOutlet])");

    if (from == NULL)
        return NULL;

    uObject* outlet = FindOutletDown(from);

    if ((outlet == NULL) || (outlet == to))
        return NULL;

    ::g::Fuse::Visual* pageVisual;
    ::g::Fuse::Navigation::RouterPage* page = ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), &pageVisual);
    return ::g::Fuse::Navigation::RouterPageRoute::New1(page, GetCurrent(pageVisual, to));
}

// public Fuse.Navigation.Route GetCurrentRoute() [instance] :191
::g::Fuse::Navigation::Route* Router::GetCurrentRoute()
{
    uStackFrame __("Fuse.Navigation.Router", "GetCurrentRoute()");
    return uPtr(GetHistoryRoute(0))->ToRoute();
}

// private Fuse.Navigation.RouterPageRoute GetCurrentRouterPageRoute() [instance] :196
::g::Fuse::Navigation::RouterPageRoute* Router::GetCurrentRouterPageRoute()
{
    uStackFrame __("Fuse.Navigation.Router", "GetCurrentRouterPageRoute()");
    return GetHistoryRoute(0);
}

// internal Fuse.Navigation.RouterPageRoute GetHistoryRoute(int at) [instance] :765
::g::Fuse::Navigation::RouterPageRoute* Router::GetHistoryRoute(int32_t at)
{
    uStackFrame __("Fuse.Navigation.Router", "GetHistoryRoute(int)");
    Router__GetHistoryAt* collection1;
    collection1 = Router__GetHistoryAt::New1();
    uPtr(collection1)->At = at;
    Router__GetHistoryAt* gha = collection1;
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::RouterPage_typeof(), NULL));
    EnumerateHistory(uDelegate::New(Router__HistoryAction_typeof(), (void*)Router__GetHistoryAt__HistoryAction_fn, uPtr(gha)), list, _rootPage);
    return gha->Result;
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) [instance] :619
int32_t Router::GetOutletDepth(uObject* outlet)
{
    uStackFrame __("Fuse.Navigation.Router", "GetOutletDepth(Fuse.Navigation.IRouterOutlet)");
    int32_t c = 0;
    ::g::Fuse::Visual* n = uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[46/*Fuse.Node*/]))->Parent();

    while ((n != NULL) && (n != Parent()))
    {
        n = uPtr(n)->Parent();

        if (uIs(n, ::g::Fuse::Navigation::IRouterOutlet_typeof()))
            c++;
    }

    return c;
}

// internal Fuse.Navigation.RouterPageRoute GetRelativeRoute(Fuse.Node from, Fuse.Navigation.RouterPageRoute rel) [instance] :693
::g::Fuse::Navigation::RouterPageRoute* Router::GetRelativeRoute1(::g::Fuse::Node* from, ::g::Fuse::Navigation::RouterPageRoute* rel)
{
    uStackFrame __("Fuse.Navigation.Router", "GetRelativeRoute(Fuse.Node,Fuse.Navigation.RouterPageRoute)");

    if (!IsRootingCompleted() || !uPtr(from)->IsRootingCompleted())
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Cannot calculate relative node if not rooted"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 697, uString::Const("GetRelativeRoute"), NULL);
        return NULL;
    }

    uObject* outlet = FindOutletUp(from);

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Did not find an outlet relative to the provided Node"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 704, uString::Const("GetRelativeRoute"), NULL);
        return NULL;
    }

    ::g::Fuse::Navigation::RouterPageRoute* current = GetRouteUpToRouter(uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[46/*Fuse.Node*/]))->Parent());
    ::g::Fuse::Navigation::RouterPageRoute* route = (current == NULL) ? rel : (::g::Fuse::Navigation::RouterPageRoute*)uPtr(current)->Append(rel);
    return route;
}

// private Fuse.Navigation.RouterPageRoute GetRouteUpToRouter(Fuse.Node from) [instance] :570
::g::Fuse::Navigation::RouterPageRoute* Router::GetRouteUpToRouter(::g::Fuse::Node* from)
{
    uStackFrame __("Fuse.Navigation.Router", "GetRouteUpToRouter(Fuse.Node)");
    ::g::Fuse::Navigation::RouterPageRoute* route = NULL;

    while (from != NULL)
    {
        ::g::Fuse::Node* page;
        uObject* outlet = FindOutletUp1(from, &page);

        if (outlet == NULL)
            break;

        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(page, ::TYPES[13/*Fuse.Visual*/]);
        ::g::Fuse::Navigation::PageData* pd = (v != NULL) ? (::g::Fuse::Navigation::PageData*)::g::Fuse::Navigation::PageData::Get(v) : NULL;
        ::g::Fuse::Navigation::RouterPage* opage = NULL;
        ::g::Fuse::Visual* ignore;

        if ((pd == NULL) || (uPtr(pd)->RouterPage() == NULL))
            opage = ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), &ignore);
        else
            opage = uPtr(pd)->RouterPage();

        route = ::g::Fuse::Navigation::RouterPageRoute::New1(opage, route);
        from = uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[46/*Fuse.Node*/]))->Parent();
    }

    return route;
}

// public bool GoBack() [instance] :296
bool Router::GoBack()
{
    uStackFrame __("Fuse.Navigation.Router", "GoBack()");

    if (CanGoBack())
    {
        Pop();
        return true;
    }
    else if (GoBackBehavior() == 1)
        return GoUp();

    return false;
}

// public Fuse.Navigation.RouterGoBackBehavior get_GoBackBehavior() [instance] :279
int32_t Router::GoBackBehavior()
{
    return _goBackBehavior;
}

// public void set_GoBackBehavior(Fuse.Navigation.RouterGoBackBehavior value) [instance] :280
void Router::GoBackBehavior(int32_t value)
{
    _goBackBehavior = value;

    if (value == 1)
        ::g::Fuse::Diagnostics::Deprecated(uString::Const("Up behavior is deprecated as it isn't well defined."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 284, uString::Const("set_GoBackBehavior"));
}

// public void Goto(Fuse.Navigation.Route route, [string operationStyle]) [instance] :202
void Router::Goto(::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    uStackFrame __("Fuse.Navigation.Router", "Goto(Fuse.Navigation.Route,[string])");
    Modify1(1, ::g::Fuse::Navigation::RouterPageRoute::Convert(route), 0, operationStyle);
}

// private bool GoUp() [instance] :321
bool Router::GoUp()
{
    uStackFrame __("Fuse.Navigation.Router", "GoUp()");
    ::g::Fuse::Navigation::RouterPageRoute* cur = GetCurrentRouterPageRoute();

    if (cur == NULL)
        return false;

    ::g::Fuse::Navigation::RouterPageRoute* up = uPtr(cur)->Up();

    if (up != cur)
    {
        SetRoute(up, 0, 3, ::STRINGS[18/*""*/], true);
        return true;
    }

    return false;
}

// private bool HasOtherRouter(Fuse.Visual n) [instance] :714
bool Router::HasOtherRouter(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Navigation.Router", "HasOtherRouter(Fuse.Visual)");
    Router* r = (Router*)uPtr(n)->FirstChild(::TYPES[13/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Navigation.Router>*/, __type, NULL));
    return (r != NULL) && (r != this);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :731
void Router::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :731
void Router::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.Router", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public bool get_IsMasterRouter() [instance] :156
bool Router::IsMasterRouter()
{
    return _isMasterRouter;
}

// public void set_IsMasterRouter(bool value) [instance] :157
void Router::IsMasterRouter(bool value)
{
    _isMasterRouter = value;
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.RouterPageRoute route, Fuse.Navigation.NavigationGotoMode mode, string operationStyle) [instance] :219
void Router::Modify1(int32_t how, ::g::Fuse::Navigation::RouterPageRoute* route, int32_t mode, uString* operationStyle)
{
    uStackFrame __("Fuse.Navigation.Router", "Modify(Fuse.Navigation.ModifyRouteHow,Fuse.Navigation.RouterPageRoute,Fuse.Navigation.NavigationGotoMode,string)");

    switch (how)
    {
        case 1:
        {
            SetRoute(route, mode, 0, operationStyle, true);
            break;
        }
        case 0:
        {
            SetRoute(route, mode, 1, operationStyle, true);
            break;
        }
        case 2:
        {
            SetRoute(route, mode, 2, operationStyle, true);
            break;
        }
        case 3:
        {
            Pop();
            break;
        }
        case 4:
        {
            if (route != NULL)
                ::g::Fuse::Diagnostics::UserWarning(uString::Const("PrepareBack does not support an explicit route"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 242, uString::Const("Modify"));

            ::g::Fuse::Navigation::RouterPageRoute* popRoute = GetHistoryRoute(1);

            if (popRoute == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(uString::Const("There is no history for PrepareBack"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 247, uString::Const("Modify"), NULL);
                return;
            }

            PrepareRoute(popRoute, 3, operationStyle);
            break;
        }
        case 5:
        {
            PrepareRoute(route, 1, operationStyle);
            break;
        }
        case 6:
        {
            PrepareRoute(route, 0, operationStyle);
            break;
        }
        case 7:
        {
            FinishPrepared();
            break;
        }
    }
}

// internal void OnHistoryChanged() [instance] :732
void Router::OnHistoryChanged()
{
    uStackFrame __("Fuse.Navigation.Router", "OnHistoryChanged()");

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance] :165
void Router::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    uStackFrame __("Fuse.Navigation.Router", "OnKeyPressed(object,Fuse.Input.KeyEventArgs)");

    if (uPtr(args)->Key() == 201)
    {
        if (BackButtonAction() == 0)
        {
            if (!GoBack())
            {
                if (::g::Uno::Delegate::op_Inequality(BackAtRootPressed1, NULL))
                    uPtr(BackAtRootPressed1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());
            }
        }
    }
}

// private void Pop() [instance] :337
void Router::Pop()
{
    uStackFrame __("Fuse.Navigation.Router", "Pop()");
    ::g::Fuse::Navigation::RouterPageRoute* route = GetHistoryRoute(1);

    if (route == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Cannot pop() - history is empty"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 342, uString::Const("Pop"), NULL);
        return;
    }

    SetRoute(route, 0, 3, ::STRINGS[18/*""*/], true);
}

// public double get_PrepareProgress() [instance] :381
double Router::PrepareProgress()
{
    return _prepareProgress;
}

// public void set_PrepareProgress(double value) [instance] :382
void Router::PrepareProgress(double value)
{
    uStackFrame __("Fuse.Navigation.Router", "set_PrepareProgress(double)");
    SetPrepareProgress(value);
}

// private void PrepareRoute(Fuse.Navigation.RouterPageRoute r, Fuse.Navigation.RoutingOperation operation, string operationStyle) [instance] :353
void Router::PrepareRoute(::g::Fuse::Navigation::RouterPageRoute* r, int32_t operation, uString* operationStyle)
{
    uStackFrame __("Fuse.Navigation.Router", "PrepareRoute(Fuse.Navigation.RouterPageRoute,Fuse.Navigation.RoutingOperation,string)");
    _prepareCurrent = GetCurrentRouterPageRoute();
    _prepareNext = SetRouteImpl(Parent(), _rootPage, r, 2, operation, operationStyle, &_prepareOutlet, true);
    _prepareOperation = operation;
    _prepareProgress = 0.0;
    _prepareOperationStyle = operationStyle;
}

// public void Push(Fuse.Navigation.Route route, [string operationStyle]) [instance] :208
void Router::Push(::g::Fuse::Navigation::Route* route, uString* operationStyle)
{
    uStackFrame __("Fuse.Navigation.Router", "Push(Fuse.Navigation.Route,[string])");
    Modify1(0, ::g::Fuse::Navigation::RouterPageRoute::Convert(route), 0, operationStyle);
}

// internal Fuse.Navigation.RouterPage get_RootPage() [instance] :761
::g::Fuse::Navigation::RouterPage* Router::RootPage()
{
    return _rootPage;
}

// private void SetPrepareProgress(double value) [instance] :385
void Router::SetPrepareProgress(double value)
{
    uStackFrame __("Fuse.Navigation.Router", "SetPrepareProgress(double)");

    if (((_prepareCurrent == NULL) || (_prepareNext == NULL)) || (_prepareOutlet == NULL))
        return;

    int32_t depth = GetOutletDepth(_prepareOutlet);
    ::g::Fuse::Navigation::RouterPageRoute* pc = uPtr(_prepareCurrent)->SubDepth(depth);
    ::g::Fuse::Navigation::RouterPageRoute* pn = uPtr(_prepareNext)->SubDepth(depth);

    if ((pc == NULL) || (pn == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid outlet depth in prepare progress"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 396, uString::Const("SetPrepareProgress"));
        return;
    }

    _prepareProgress = value;
    ::g::Fuse::Navigation::IRouterOutlet::PartialPrepareGoto(uInterface(uPtr(_prepareOutlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), _prepareProgress);
}

// private Fuse.Navigation.RouterPageRoute SetRoute(Fuse.Navigation.RouterPageRoute r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, [bool userRequest]) [instance] :419
::g::Fuse::Navigation::RouterPageRoute* Router::SetRoute(::g::Fuse::Navigation::RouterPageRoute* r, int32_t gotoMode, int32_t operation, uString* operationStyle, bool userRequest)
{
    uStackFrame __("Fuse.Navigation.Router", "SetRoute(Fuse.Navigation.RouterPageRoute,Fuse.Navigation.NavigationGotoMode,Fuse.Navigation.RoutingOperation,string,[bool])");

    if (r == NULL)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Route cannot be null")));

    ClearPrepared();
    ::g::Fuse::Navigation::RouterPageRoute* current = GetCurrentRouterPageRoute();
    uObject* ignore;
    ::g::Fuse::Navigation::RouterPageRoute* outR = SetRouteImpl(Parent(), _rootPage, r, gotoMode, operation, operationStyle, &ignore, true);

    if (outR == NULL)
    {
        uString* msg = ::g::Uno::String::op_Addition2(uString::Const("Unable to navigate to route: "), uPtr(r)->Format());

        if (userRequest)
            ::g::Fuse::Diagnostics::UserError(msg, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 436, uString::Const("SetRoute"), NULL);
        else
            ::g::Fuse::Diagnostics::InternalError(msg, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 438, uString::Const("SetRoute"));

        SetRouteImpl(Parent(), _rootPage, current, 1, 0, ::STRINGS[18/*""*/], &ignore, true);
    }

    OnHistoryChanged();
    return outR;
}

// private Fuse.Navigation.RouterPageRoute SetRouteImpl(Fuse.Visual root, Fuse.Navigation.RouterPage rootPage, Fuse.Navigation.RouterPageRoute r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, string operationStyle, Fuse.Navigation.IRouterOutlet& majorChange, [bool canReuse]) [instance] :450
::g::Fuse::Navigation::RouterPageRoute* Router::SetRouteImpl(::g::Fuse::Visual* root, ::g::Fuse::Navigation::RouterPage* rootPage, ::g::Fuse::Navigation::RouterPageRoute* r, int32_t gotoMode, int32_t operation, uString* operationStyle, uObject** majorChange, bool canReuse)
{
    uStackFrame __("Fuse.Navigation.Router", "SetRouteImpl(Fuse.Visual,Fuse.Navigation.RouterPage,Fuse.Navigation.RouterPageRoute,Fuse.Navigation.NavigationGotoMode,Fuse.Navigation.RoutingOperation,string,Fuse.Navigation.IRouterOutlet&,[bool])");
    ::g::Fuse::Reactive::ObserverMap* pages = uPtr(rootPage)->ChildRouterPages();
    *majorChange = NULL;
    uObject* outlet = FindOutletDown(root);

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(uString::Const("No router outlet found to handle route: "), r), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 460, uString::Const("SetRouteImpl"));
        return NULL;
    }

    ::g::Fuse::Navigation::RouterPage* page = uPtr(r)->RouterPage;
    ::g::Fuse::Visual* pageVisual = NULL;
    int32_t didTransition = ::g::Fuse::Navigation::IRouterOutlet::CompareCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), page, &pageVisual);

    if (didTransition == 3)
        return NULL;

    bool leafOp = (r->SubRoute == NULL) && (operation != 0);
    bool reusePage = (canReuse && (didTransition == 0)) && !leafOp;

    if (reusePage)
        page = ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), &pageVisual);

    if (gotoMode != 2)

        switch (operation)
        {
            case 0:
            {
                uPtr(pages)->Clear();
                pages->Add(page);
                break;
            }
            case 1:
            {
                if (!canReuse)
                {
                    uPtr(pages)->Clear();
                    pages->Add(page);
                }
                else if (!reusePage)
                    uPtr(pages)->Add(page);

                break;
            }
            case 2:
            {
                if (!reusePage)
                {
                    if (uPtr(pages)->Count() > 0)
                        uPtr(pages)->Item(uPtr(pages)->Count() - 1, page);
                    else
                        uPtr(pages)->Add(page);
                }

                break;
            }
            case 3:
            {
                if (canReuse && !reusePage)
                {
                    if (uPtr(pages)->Count() > 0)
                        uPtr(pages)->RemoveAt(uPtr(pages)->Count() - 1);
                }

                break;
            }
        }

    if (didTransition != 0)
    {
        didTransition = ::g::Fuse::Navigation::IRouterOutlet::Goto(uInterface(uPtr(outlet), ::g::Fuse::Navigation::IRouterOutlet_typeof()), page, gotoMode, operation, operationStyle, &pageVisual);

        if (didTransition == 3)
            return NULL;
    }

    bool trackMajorChange = true;

    if (didTransition == 2)
    {
        gotoMode = 1;
        *majorChange = outlet;
        trackMajorChange = false;
    }

    ::g::Fuse::Navigation::RouterPageRoute* outSubRoute = NULL;

    if (r->SubRoute != NULL)
    {
        if (pageVisual == NULL)
        {
            ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(uString::Const("SubRoute requested but outlet has no active path: "), r), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 536, uString::Const("SetRouteImpl"));
            return NULL;
        }

        uObject* subMajorChange;
        outSubRoute = SetRouteImpl(pageVisual, page, uPtr(r)->SubRoute, gotoMode, operation, operationStyle, &subMajorChange, reusePage);

        if (trackMajorChange)
            *majorChange = subMajorChange;

        if (outSubRoute == NULL)
            return NULL;
    }
    else
        outSubRoute = GetCurrent(pageVisual, NULL);

    return ::g::Fuse::Navigation::RouterPageRoute::New1(page, outSubRoute);
}

// private static Fuse.Navigation.IRouterOutlet AsRouterOutlet(Fuse.Node n) [static] :656
uObject* Router::AsRouterOutlet(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.Router", "AsRouterOutlet(Fuse.Node)");
    Router_typeof()->Init();
    uObject* ro = uAs<uObject*>(n, ::g::Fuse::Navigation::IRouterOutlet_typeof());

    if ((ro != NULL) && ((::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(ro), ::g::Fuse::Navigation::IRouterOutlet_typeof())) & 2) == 2))
        return ro;

    return NULL;
}

// private static void Bookmark(Fuse.Navigation.Router r, object[] args) [static] :214
void Router::Bookmark(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Bookmark(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    uString* ret3;

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.bookmark` takes one argument"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 220, uString::Const("Bookmark"), NULL);
        return;
    }

    uObject* obj = uAs<uObject*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[39/*Fuse.IObject*/]);

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.bookmark` should be passed an object"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 227, uString::Const("Bookmark"), NULL);
        return;
    }

    uString* name = NULL;
    uObject* relative = NULL;
    ::g::Fuse::Navigation::RouterPageRoute* route = NULL;
    uArray* keys = ::g::Fuse::IObject::Keys(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]));

    for (int32_t i = 0; i < uPtr(keys)->Length(); ++i)
    {
        uString* p = uPtr(keys)->Strong<uString*>(i);
        uObject* o = ::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), p);

        if (::g::Uno::String::op_Equality(p, ::STRINGS[17/*"name"*/]))
            name = (::g::Fuse::Marshal__ToType_fn(::TYPES[40/*Fuse.Marshal.ToType<string>*/], o, &ret3), ret3);
        else if (::g::Uno::String::op_Equality(p, uString::Const("relative")))
        {
            ::g::Fuse::Node* node = uAs< ::g::Fuse::Node*>(o, ::TYPES[46/*Fuse.Node*/]);
            relative = uPtr(r)->FindOutletUp(node);

            if (relative == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(uString::Const("Could not find an outlet from the `relative` node"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 252, uString::Const("Bookmark"), NULL);
                return;
            }
        }
        else if (::g::Uno::String::op_Equality(p, uString::Const("path")))
        {
            uObject* path = uAs<uObject*>(o, ::g::Fuse::IArray_typeof());

            if (path == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(uString::Const("`path` should be an array"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 261, uString::Const("Bookmark"), NULL);
                return;
            }

            route = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute(path);
        }
        else
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unrecognized argument: "), p), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 269, uString::Const("Bookmark"), NULL);
            return;
        }
    }

    if (relative != NULL)
    {
        ::g::Fuse::Navigation::RouterPageRoute* current = uPtr(r)->GetCurrent(uPtr(r)->Parent(), relative);
        route = (current == NULL) ? route : (::g::Fuse::Navigation::RouterPageRoute*)uPtr(current)->Append(route);
    }

    if (::g::Uno::String::op_Equality(name, NULL))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("A `name` is required for the bookmark"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 282, uString::Const("Bookmark"), NULL);
        return;
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(r)->Bookmarks), name, route);
}

// internal static Fuse.Visual FindRouterOutletPage(Fuse.Node from) [static] :598
::g::Fuse::Visual* Router::FindRouterOutletPage(::g::Fuse::Node* from)
{
    uStackFrame __("Fuse.Navigation.Router", "FindRouterOutletPage(Fuse.Node)");
    Router_typeof()->Init();

    while ((from != NULL) && (uPtr(from)->Parent() != NULL))
    {
        if (Router::HasRouter(from))
            return NULL;

        uObject* ro = Router::AsRouterOutlet(uPtr(from)->Parent());

        if (ro != NULL)
        {
            ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(from, ::TYPES[13/*Fuse.Visual*/]);

            if (v != NULL)
                return v;

            ::g::Fuse::Diagnostics::InternalError(uString::Const("Unexpected request for RouterOutlet page"), from, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno"), 610, uString::Const("FindRouterOutletPage"));
        }

        from = uPtr(from)->Parent();
    }

    return NULL;
}

// private static Fuse.Navigation.RouterPageRoute GetRelative(Fuse.Navigation.Router r, object[] args) [static] :92
::g::Fuse::Navigation::RouterPageRoute* Router::GetRelative(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GetRelative(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (uPtr(args)->Length() < 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.gotoRelative(): requires 1+ parameters"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 96, uString::Const("GetRelative"), NULL);
        return NULL;
    }

    ::g::Fuse::Node* node = uAs< ::g::Fuse::Node*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[46/*Fuse.Node*/]);
    ::g::Fuse::Navigation::RouterPageRoute* where = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute1(args, 1);
    return uPtr(r)->GetRelativeRoute1(node, where);
}

// private static object GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :305
uObject* Router::GetRoute(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GetRoute(Fuse.Scripting.Context,Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.getRoute(): must provide exactly 1 argument."), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 309, uString::Const("GetRoute"), NULL);
        return NULL;
    }

    ::g::Fuse::Scripting::Function* callback = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::g::Fuse::Scripting::Function_typeof());

    if (callback == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.getRoute(): argument must be a function."), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 315, uString::Const("GetRoute"), NULL);
        return NULL;
    }

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)Router__GetRouteCallback__RunUI_fn, Router__GetRouteCallback::New1(uPtr(c)->ThreadWorker(), r, callback)));
    return NULL;
}

// private static void GoBack(Fuse.Navigation.Router r) [static] :135
void Router::GoBack1(Router* r)
{
    uStackFrame __("Fuse.Navigation.Router", "GoBack(Fuse.Navigation.Router)");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    uPtr(r)->GoBack();
}

// private static void Goto(Fuse.Navigation.Router r, object[] args) [static] :34
void Router::Goto1(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Goto(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::RouterPageRoute* where = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute1(args, 0);

    if (where != NULL)
        uPtr(r)->Modify1(1, where, 0, ::STRINGS[18/*""*/]);
    else
        ::g::Fuse::Diagnostics::UserError(uString::Const("Router.goto(): invalid route provided"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 45, uString::Const("Goto"), NULL);
}

// private static void GotoRelative(Fuse.Navigation.Router r, object[] args) [static] :70
void Router::GotoRelative(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "GotoRelative(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    ::g::Fuse::Navigation::RouterPageRoute* route = Router::GetRelative(r, args);

    if (route != NULL)
        uPtr(r)->Modify1(1, route, 0, ::STRINGS[18/*""*/]);
}

// private static bool HasRouter(Fuse.Node n) [static] :720
bool Router::HasRouter(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.Router", "HasRouter(Fuse.Node)");
    Router_typeof()->Init();
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return ((Router*)uPtr(v)->FirstChild(::TYPES[13/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Navigation.Router>*/, Router_typeof(), NULL))) != NULL;
}

// private static void Modify(Fuse.Navigation.Router r, object[] args) [static] :173
void Router::Modify2(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Modify(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.modify` takes one argument"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 179, uString::Const("Modify"), NULL);
        return;
    }

    uObject* obj = uAs<uObject*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[39/*Fuse.IObject*/]);

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Router.modify` should be passed an object"), r, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.ScriptClass.uno"), 186, uString::Const("Modify"), NULL);
        return;
    }

    ::g::Fuse::Navigation::RouterRequest* request = ::g::Fuse::Navigation::RouterRequest::New1(1);

    if (!request->AddArguments(obj, 127))
        return;

    request->MakeRequest(r);
}

// public generated Router New() [static] :5
Router* Router::New2()
{
    Router* obj2 = (Router*)uNew(Router_typeof());
    obj2->ctor_2();
    return obj2;
}

// private static void Push(Fuse.Navigation.Router r, object[] args) [static] :121
void Router::Push1(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "Push(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::RouterPageRoute* where = ::g::Fuse::Navigation::RouterRequest::ParseFlatRoute1(args, 0);
    uPtr(r)->Modify1(0, where, 0, ::STRINGS[18/*""*/]);
}

// private static void PushRelative(Fuse.Navigation.Router r, object[] args) [static] :85
void Router::PushRelative(Router* r, uArray* args)
{
    uStackFrame __("Fuse.Navigation.Router", "PushRelative(Fuse.Navigation.Router,object[])");
    Router_typeof()->Init();
    ::g::Fuse::Navigation::RouterPageRoute* route = Router::GetRelative(r, args);

    if (route != NULL)
        uPtr(r)->Modify1(0, route, 0, ::STRINGS[18/*""*/]);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) [static] :738
Router* Router::TryFindRouter(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.Router", "TryFindRouter(Fuse.Node)");
    Router_typeof()->Init();
    ::g::Fuse::Node* p = n;

    while (p != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(p, ::TYPES[13/*Fuse.Visual*/]);

        if (v != NULL)
        {
            Router* r = (Router*)uPtr(v)->FirstChild(::TYPES[13/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Navigation.Router>*/, Router_typeof(), NULL));

            if (r != NULL)
                return r;
        }

        p = uPtr(p)->Parent();
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterCancelNavigation.uno
// ------------------------------------------------------------------------------

// public sealed class RouterCancelNavigation :10
// {
static void RouterCancelNavigation_build(uType* type)
{
    ::STRINGS[40] = uString::Const("Router not set and none could be found");
    ::STRINGS[41] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterCancelNavigation.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Navigation::Router_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(RouterCancelNavigation, _Router), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)RouterCancelNavigation__New2_fn, 0, true, type, 0),
        new uFunction("get_Router", NULL, (void*)RouterCancelNavigation__get_Router_fn, 0, false, ::g::Fuse::Navigation::Router_typeof(), 0),
        new uFunction("set_Router", NULL, (void*)RouterCancelNavigation__set_Router_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RouterCancelNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RouterCancelNavigation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Navigation.RouterCancelNavigation", options);
    type->fp_build_ = RouterCancelNavigation_build;
    type->fp_ctor_ = (void*)RouterCancelNavigation__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RouterCancelNavigation__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated RouterCancelNavigation() :10
void RouterCancelNavigation__ctor_2_fn(RouterCancelNavigation* __this)
{
    __this->ctor_2();
}

// public generated RouterCancelNavigation New() :10
void RouterCancelNavigation__New2_fn(RouterCancelNavigation** __retval)
{
    *__retval = RouterCancelNavigation::New2();
}

// protected override sealed void Perform(Fuse.Node n) :15
void RouterCancelNavigation__Perform_fn(RouterCancelNavigation* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.RouterCancelNavigation", "Perform(Fuse.Node)");
    ::g::Fuse::Navigation::Router* ind1;
    ind1 = __this->Router();
    ::g::Fuse::Navigation::Router* useRouter = (ind1 != NULL) ? ind1 : (::g::Fuse::Navigation::Router*)::g::Fuse::Navigation::Router::TryFindRouter(n);

    if (useRouter == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[40/*"Router not ...*/], __this, ::STRINGS[41/*"/usr/local/...*/], 20, ::STRINGS[2/*"Perform"*/], NULL);
        return;
    }

    uPtr(useRouter)->CancelNavigation();
}

// public generated Fuse.Navigation.Router get_Router() :13
void RouterCancelNavigation__get_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router** __retval)
{
    *__retval = __this->Router();
}

// public generated void set_Router(Fuse.Navigation.Router value) :13
void RouterCancelNavigation__set_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router* value)
{
    __this->Router(value);
}

// public generated RouterCancelNavigation() [instance] :10
void RouterCancelNavigation::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.Router get_Router() [instance] :13
::g::Fuse::Navigation::Router* RouterCancelNavigation::Router()
{
    return _Router;
}

// public generated void set_Router(Fuse.Navigation.Router value) [instance] :13
void RouterCancelNavigation::Router(::g::Fuse::Navigation::Router* value)
{
    _Router = value;
}

// public generated RouterCancelNavigation New() [static] :10
RouterCancelNavigation* RouterCancelNavigation::New2()
{
    RouterCancelNavigation* obj2 = (RouterCancelNavigation*)uNew(RouterCancelNavigation_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/Router.uno
// --------------------------------------------------------------

// public enum RouterGoBackBehavior :17
uEnumType* RouterGoBackBehavior_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RouterGoBackBehavior", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "GoBack", 0LL,
        "GoBackAndUp", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno
// --------------------------------------------------------------------

// public class RouterModify :84
// {
static void RouterModify_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Navigation::Router_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(RouterModify_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(RouterModify_type, interface1));
    type->SetFields(11,
        ::g::Fuse::Navigation::RouterRequest_typeof(), offsetof(RouterModify, _request), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(RouterModify, _path), 0,
        ::g::Fuse::Reactive::NodeExpressionBinding_typeof(), offsetof(RouterModify, _pathSub), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(RouterModify, _Router), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get_Bookmark", NULL, (void*)RouterModify__get_Bookmark_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Bookmark", NULL, (void*)RouterModify__set_Bookmark_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_How", NULL, (void*)RouterModify__get_How_fn, 0, false, ::g::Fuse::Navigation::ModifyRouteHow_typeof(), 0),
        new uFunction("set_How", NULL, (void*)RouterModify__set_How_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::ModifyRouteHow_typeof()),
        new uFunction(".ctor", NULL, (void*)RouterModify__New2_fn, 0, true, type, 0),
        new uFunction("get_Path", NULL, (void*)RouterModify__get_Path_fn, 0, false, ::g::Fuse::Reactive::IExpression_typeof(), 0),
        new uFunction("set_Path", NULL, (void*)RouterModify__set_Path_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::IExpression_typeof()),
        new uFunction("get_Relative", NULL, (void*)RouterModify__get_Relative_fn, 0, false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("set_Relative", NULL, (void*)RouterModify__set_Relative_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_Router", NULL, (void*)RouterModify__get_Router_fn, 0, false, ::g::Fuse::Navigation::Router_typeof(), 0),
        new uFunction("set_Router", NULL, (void*)RouterModify__set_Router_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::Router_typeof()),
        new uFunction("get_Style", NULL, (void*)RouterModify__get_Style_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Style", NULL, (void*)RouterModify__set_Style_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Transition", NULL, (void*)RouterModify__get_Transition_fn, 0, false, ::g::Fuse::Navigation::NavigationGotoMode_typeof(), 0),
        new uFunction("set_Transition", NULL, (void*)RouterModify__set_Transition_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::NavigationGotoMode_typeof()));
}

RouterModify_type* RouterModify_typeof()
{
    static uSStrong<RouterModify_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RouterModify);
    options.TypeSize = sizeof(RouterModify_type);
    type = (RouterModify_type*)uClassType::New("Fuse.Navigation.RouterModify", options);
    type->fp_build_ = RouterModify_build;
    type->fp_ctor_ = (void*)RouterModify__New2_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*))RouterModify__OnUnrooted_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RouterModify__Perform_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))RouterModify__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))RouterModify__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public RouterModify() :92
void RouterModify__ctor_2_fn(RouterModify* __this)
{
    __this->ctor_2();
}

// internal RouterModify(Fuse.Navigation.RouterModify.Flags flags) :103
void RouterModify__ctor_3_fn(RouterModify* __this, int32_t* flags)
{
    __this->ctor_3(*flags);
}

// public string get_Bookmark() :119
void RouterModify__get_Bookmark_fn(RouterModify* __this, uString** __retval)
{
    *__retval = __this->Bookmark();
}

// public void set_Bookmark(string value) :120
void RouterModify__set_Bookmark_fn(RouterModify* __this, uString* value)
{
    __this->Bookmark(value);
}

// private void DisposePathSub() :176
void RouterModify__DisposePathSub_fn(RouterModify* __this)
{
    __this->DisposePathSub();
}

// private void Fuse.Reactive.IListener.OnLostData(Fuse.Reactive.IExpression source) :204
void RouterModify__FuseReactiveIListenerOnLostData_fn(RouterModify* __this, uObject* source)
{
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :185
void RouterModify__FuseReactiveIListenerOnNewData_fn(RouterModify* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");

    if ((source != __this->Path()) || (__this->_pathSub == NULL))
        return;

    {
        try
        {
            {
                ::g::Fuse::Navigation::RouterPageRoute* route = NULL;

                if (!::g::Fuse::Navigation::RouterRequest::ParseUXRoute(value, &route))
                {
                    __this->DisposePathSub();
                    return;
                }

                __this->PerformRoute(::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(uAs<uObject*>(__this->_pathSub, ::TYPES[19/*Fuse.Reactive.IContext*/])), ::TYPES[19/*Fuse.Reactive.IContext*/])), route);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                __this->DisposePathSub();
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            __this->DisposePathSub();
        }
        __after_finally_8:;
    }
}

// public Fuse.Navigation.ModifyRouteHow get_How() :112
void RouterModify__get_How_fn(RouterModify* __this, int32_t* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) :113
void RouterModify__set_How_fn(RouterModify* __this, int32_t* value)
{
    __this->How(*value);
}

// public RouterModify New() :92
void RouterModify__New2_fn(RouterModify** __retval)
{
    *__retval = RouterModify::New2();
}

// internal RouterModify New(Fuse.Navigation.RouterModify.Flags flags) :103
void RouterModify__New3_fn(int32_t* flags, RouterModify** __retval)
{
    *__retval = RouterModify::New3(*flags);
}

// protected override sealed void OnUnrooted() :157
void RouterModify__OnUnrooted_fn(RouterModify* __this)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "OnUnrooted()");
    __this->DisposePathSub();
    ::g::Fuse::Triggers::Actions::TriggerAction__OnUnrooted_fn(__this);
}

// public Fuse.Reactive.IExpression get_Path() :151
void RouterModify__get_Path_fn(RouterModify* __this, uObject** __retval)
{
    *__retval = __this->Path();
}

// public void set_Path(Fuse.Reactive.IExpression value) :152
void RouterModify__set_Path_fn(RouterModify* __this, uObject* value)
{
    __this->Path(value);
}

// protected override sealed void Perform(Fuse.Node n) :163
void RouterModify__Perform_fn(RouterModify* __this, ::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "Perform(Fuse.Node)");

    if (__this->Path() != NULL)
    {
        __this->DisposePathSub();
        __this->_pathSub = ::g::Fuse::Reactive::NodeExpressionBinding::New1(__this->Path(), n, (uObject*)__this);
    }
    else
        __this->PerformRoute(n, NULL);
}

// private void PerformRoute(Fuse.Node n, Fuse.Navigation.RouterPageRoute route) :209
void RouterModify__PerformRoute_fn(RouterModify* __this, ::g::Fuse::Node* n, ::g::Fuse::Navigation::RouterPageRoute* route)
{
    __this->PerformRoute(n, route);
}

// public Fuse.Node get_Relative() :139
void RouterModify__get_Relative_fn(RouterModify* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Relative();
}

// public void set_Relative(Fuse.Node value) :140
void RouterModify__set_Relative_fn(RouterModify* __this, ::g::Fuse::Node* value)
{
    __this->Relative(value);
}

// public generated Fuse.Navigation.Router get_Router() :87
void RouterModify__get_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router** __retval)
{
    *__retval = __this->Router();
}

// public generated void set_Router(Fuse.Navigation.Router value) :87
void RouterModify__set_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router* value)
{
    __this->Router(value);
}

// public string get_Style() :133
void RouterModify__get_Style_fn(RouterModify* __this, uString** __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(string value) :134
void RouterModify__set_Style_fn(RouterModify* __this, uString* value)
{
    __this->Style(value);
}

// public Fuse.Navigation.NavigationGotoMode get_Transition() :126
void RouterModify__get_Transition_fn(RouterModify* __this, int32_t* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Navigation.NavigationGotoMode value) :127
void RouterModify__set_Transition_fn(RouterModify* __this, int32_t* value)
{
    __this->Transition(*value);
}

// public RouterModify() [instance] :92
void RouterModify::ctor_2()
{
    _request = ::g::Fuse::Navigation::RouterRequest::New1(0);
    ctor_1();
    ::g::Fuse::Diagnostics::UserWarning(uString::Const("RouterModify is deprecated. Use one of `ModifyRoute`, `GotoRoute` or `PushRoute` instead."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno"), 94, ::STRINGS[34/*".ctor"*/]);
}

// internal RouterModify(Fuse.Navigation.RouterModify.Flags flags) [instance] :103
void RouterModify::ctor_3(int32_t flags)
{
    _request = ::g::Fuse::Navigation::RouterRequest::New1(0);
    ctor_1();
}

// public string get_Bookmark() [instance] :119
uString* RouterModify::Bookmark()
{
    uStackFrame __("Fuse.Navigation.RouterModify", "get_Bookmark()");
    return uPtr(_request)->Bookmark;
}

// public void set_Bookmark(string value) [instance] :120
void RouterModify::Bookmark(uString* value)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "set_Bookmark(string)");
    uPtr(_request)->Bookmark = value;
}

// private void DisposePathSub() [instance] :176
void RouterModify::DisposePathSub()
{
    uStackFrame __("Fuse.Navigation.RouterModify", "DisposePathSub()");

    if (_pathSub != NULL)
    {
        uPtr(_pathSub)->Dispose();
        _pathSub = NULL;
    }
}

// public Fuse.Navigation.ModifyRouteHow get_How() [instance] :112
int32_t RouterModify::How()
{
    uStackFrame __("Fuse.Navigation.RouterModify", "get_How()");
    return uPtr(_request)->How;
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) [instance] :113
void RouterModify::How(int32_t value)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "set_How(Fuse.Navigation.ModifyRouteHow)");
    uPtr(_request)->How = value;
}

// public Fuse.Reactive.IExpression get_Path() [instance] :151
uObject* RouterModify::Path()
{
    return _path;
}

// public void set_Path(Fuse.Reactive.IExpression value) [instance] :152
void RouterModify::Path(uObject* value)
{
    _path = value;
}

// private void PerformRoute(Fuse.Node n, Fuse.Navigation.RouterPageRoute route) [instance] :209
void RouterModify::PerformRoute(::g::Fuse::Node* n, ::g::Fuse::Navigation::RouterPageRoute* route)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "PerformRoute(Fuse.Node,Fuse.Navigation.RouterPageRoute)");
    ::g::Fuse::Navigation::Router* ind1;
    uPtr(_request)->Route = route;
    ind1 = Router();
    ::g::Fuse::Navigation::Router* useRouter = (ind1 != NULL) ? ind1 : (::g::Fuse::Navigation::Router*)::g::Fuse::Navigation::Router::TryFindRouter(n);

    if (useRouter == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[40/*"Router not ...*/], this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterModify.uno"), 216, uString::Const("PerformRoute"), NULL);
        return;
    }

    uPtr(_request)->MakeRequest(useRouter);
}

// public Fuse.Node get_Relative() [instance] :139
::g::Fuse::Node* RouterModify::Relative()
{
    uStackFrame __("Fuse.Navigation.RouterModify", "get_Relative()");
    return uPtr(_request)->Relative;
}

// public void set_Relative(Fuse.Node value) [instance] :140
void RouterModify::Relative(::g::Fuse::Node* value)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "set_Relative(Fuse.Node)");
    uPtr(_request)->Relative = value;
}

// public generated Fuse.Navigation.Router get_Router() [instance] :87
::g::Fuse::Navigation::Router* RouterModify::Router()
{
    return _Router;
}

// public generated void set_Router(Fuse.Navigation.Router value) [instance] :87
void RouterModify::Router(::g::Fuse::Navigation::Router* value)
{
    _Router = value;
}

// public string get_Style() [instance] :133
uString* RouterModify::Style()
{
    uStackFrame __("Fuse.Navigation.RouterModify", "get_Style()");
    return uPtr(_request)->Style;
}

// public void set_Style(string value) [instance] :134
void RouterModify::Style(uString* value)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "set_Style(string)");
    uPtr(_request)->Style = value;
}

// public Fuse.Navigation.NavigationGotoMode get_Transition() [instance] :126
int32_t RouterModify::Transition()
{
    uStackFrame __("Fuse.Navigation.RouterModify", "get_Transition()");
    return uPtr(_request)->Transition;
}

// public void set_Transition(Fuse.Navigation.NavigationGotoMode value) [instance] :127
void RouterModify::Transition(int32_t value)
{
    uStackFrame __("Fuse.Navigation.RouterModify", "set_Transition(Fuse.Navigation.NavigationGotoMode)");
    uPtr(_request)->Transition = value;
}

// public RouterModify New() [static] :92
RouterModify* RouterModify::New2()
{
    RouterModify* obj2 = (RouterModify*)uNew(RouterModify_typeof());
    obj2->ctor_2();
    return obj2;
}

// internal RouterModify New(Fuse.Navigation.RouterModify.Flags flags) [static] :103
RouterModify* RouterModify::New3(int32_t flags)
{
    RouterModify* obj3 = (RouterModify*)uNew(RouterModify_typeof());
    obj3->ctor_3(flags);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterPage.uno
// ------------------------------------------------------------------

// internal sealed class RouterPage :22
// {
static void RouterPage_build(uType* type)
{
    ::STRINGS[18] = uString::Const("");
    ::STRINGS[42] = uString::Const("$navigationRequest");
    ::STRINGS[43] = uString::Const("?");
    ::STRINGS[44] = uString::Const("<");
    ::STRINGS[45] = uString::Const(">");
    ::STRINGS[46] = uString::Const(" ");
    ::STRINGS[47] = uString::Const("no-ctx");
    ::STRINGS[48] = uString::Const("@");
    ::TYPES[42] = ::g::Fuse::Node_typeof()->MakeMethod(0/*FindBehavior<Fuse.Navigation.Router>*/, ::g::Fuse::Navigation::Router_typeof(), NULL);
    ::TYPES[39] = ::g::Fuse::IObject_typeof();
    ::TYPES[43] = ::g::Fuse::Navigation::PagesMap_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(RouterPage, Parameter), 0,
        uObject_typeof(), offsetof(RouterPage, Context), 0,
        ::TYPES[43/*Fuse.Navigation.PagesMap*/], offsetof(RouterPage, _childRouterPages), 0,
        ::g::Uno::String_typeof(), offsetof(RouterPage, _Path), 0);
}

uType* RouterPage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RouterPage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.RouterPage", options);
    type->fp_build_ = RouterPage_build;
    type->fp_ToString = (void(*)(uObject*, uString**))RouterPage__ToString_fn;
    return type;
}

// public RouterPage(string path, [string parameter], [object context]) :29
void RouterPage__ctor__fn(RouterPage* __this, uString* path, uString* parameter, uObject* context)
{
    __this->ctor_(path, parameter, context);
}

// internal static void BubbleHistoryChanged(Fuse.Node at) :87
void RouterPage__BubbleHistoryChanged_fn(::g::Fuse::Node* at)
{
    RouterPage::BubbleHistoryChanged(at);
}

// public Fuse.Reactive.ObserverMap<Fuse.Navigation.RouterPage> get_ChildRouterPages() :57
void RouterPage__get_ChildRouterPages_fn(RouterPage* __this, ::g::Fuse::Reactive::ObserverMap** __retval)
{
    *__retval = __this->ChildRouterPages();
}

// public void add_ChildRouterPagesUpdated(Fuse.Navigation.ChildRouterPagesUpdated value) :67
void RouterPage__add_ChildRouterPagesUpdated_fn(RouterPage* __this, uDelegate* value)
{
    __this->add_ChildRouterPagesUpdated(value);
}

// public void remove_ChildRouterPagesUpdated(Fuse.Navigation.ChildRouterPagesUpdated value) :68
void RouterPage__remove_ChildRouterPagesUpdated_fn(RouterPage* __this, uDelegate* value)
{
    __this->remove_ChildRouterPagesUpdated(value);
}

// public static Fuse.Navigation.RouterPage CreateDefault() :39
void RouterPage__CreateDefault_fn(RouterPage** __retval)
{
    *__retval = RouterPage::CreateDefault();
}

// public void DefaultPath(string defaultPath) :45
void RouterPage__DefaultPath_fn(RouterPage* __this, uString* defaultPath)
{
    __this->DefaultPath(defaultPath);
}

// public static Fuse.IObject GetNavigationRequest(object data) :95
void RouterPage__GetNavigationRequest_fn(uObject* data, uObject** __retval)
{
    *__retval = RouterPage::GetNavigationRequest(data);
}

// public RouterPage New(string path, [string parameter], [object context]) :29
void RouterPage__New1_fn(uString* path, uString* parameter, uObject* context, RouterPage** __retval)
{
    *__retval = RouterPage::New1(path, parameter, context);
}

// public generated string get_Path() :25
void RouterPage__get_Path_fn(RouterPage* __this, uString** __retval)
{
    *__retval = __this->Path();
}

// private generated void set_Path(string value) :25
void RouterPage__set_Path_fn(RouterPage* __this, uString* value)
{
    __this->Path(value);
}

// public string ToPathString() :77
void RouterPage__ToPathString_fn(RouterPage* __this, uString** __retval)
{
    *__retval = __this->ToPathString();
}

// public override sealed string ToString() :71
void RouterPage__ToString_fn(RouterPage* __this, uString** __retval)
{
    uStackFrame __("Fuse.Navigation.RouterPage", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(__this->Path(), ::STRINGS[43/*"?"*/]), __this->Parameter), ::STRINGS[46/*" "*/]), (__this->Context == NULL) ? ::STRINGS[47/*"no-ctx"*/] : (uString*)::g::Uno::String::op_Addition1(::STRINGS[48/*"@"*/], uBox<int32_t>(::g::Uno::Int_typeof(), ::g::Uno::Object::GetHashCode(uPtr(__this->Context))))), void();
}

// public RouterPage(string path, [string parameter], [object context]) [instance] :29
void RouterPage::ctor_(uString* path, uString* parameter, uObject* context)
{
    Path(path);
    Parameter = parameter;
    Context = context;
}

// public Fuse.Reactive.ObserverMap<Fuse.Navigation.RouterPage> get_ChildRouterPages() [instance] :57
::g::Fuse::Reactive::ObserverMap* RouterPage::ChildRouterPages()
{
    if (_childRouterPages == NULL)
        _childRouterPages = ::g::Fuse::Navigation::PagesMap::New1();

    return _childRouterPages;
}

// public void add_ChildRouterPagesUpdated(Fuse.Navigation.ChildRouterPagesUpdated value) [instance] :67
void RouterPage::add_ChildRouterPagesUpdated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.RouterPage", "add_ChildRouterPagesUpdated(Fuse.Navigation.ChildRouterPagesUpdated)");
    uPtr(uCast< ::g::Fuse::Navigation::PagesMap*>(ChildRouterPages(), ::TYPES[43/*Fuse.Navigation.PagesMap*/]))->add_Updated(value);
}

// public void remove_ChildRouterPagesUpdated(Fuse.Navigation.ChildRouterPagesUpdated value) [instance] :68
void RouterPage::remove_ChildRouterPagesUpdated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.RouterPage", "remove_ChildRouterPagesUpdated(Fuse.Navigation.ChildRouterPagesUpdated)");
    uPtr(uCast< ::g::Fuse::Navigation::PagesMap*>(ChildRouterPages(), ::TYPES[43/*Fuse.Navigation.PagesMap*/]))->remove_Updated(value);
}

// public void DefaultPath(string defaultPath) [instance] :45
void RouterPage::DefaultPath(uString* defaultPath)
{
    uStackFrame __("Fuse.Navigation.RouterPage", "DefaultPath(string)");

    if (::g::Uno::String::op_Equality(Path(), NULL) || ::g::Uno::String::op_Equality(Path(), ::STRINGS[18/*""*/]))
        Path(defaultPath);
}

// public generated string get_Path() [instance] :25
uString* RouterPage::Path()
{
    return _Path;
}

// private generated void set_Path(string value) [instance] :25
void RouterPage::Path(uString* value)
{
    _Path = value;
}

// public string ToPathString() [instance] :77
uString* RouterPage::ToPathString()
{
    uStackFrame __("Fuse.Navigation.RouterPage", "ToPathString()");
    uString* ind1;
    ind1 = Path();
    uString* q = (ind1 != NULL) ? ind1 : ::STRINGS[18/*""*/];

    if (::g::Uno::String::op_Inequality(Parameter, NULL))
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[43/*"?"*/], Parameter));

    if (Context != NULL)
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[44/*"<"*/], uBox<int32_t>(::g::Uno::Int_typeof(), ::g::Uno::Object::GetHashCode(uPtr(Context)))), ::STRINGS[45/*">"*/]));

    return q;
}

// internal static void BubbleHistoryChanged(Fuse.Node at) [static] :87
void RouterPage::BubbleHistoryChanged(::g::Fuse::Node* at)
{
    uStackFrame __("Fuse.Navigation.RouterPage", "BubbleHistoryChanged(Fuse.Node)");
    ::g::Fuse::Navigation::Router* router = (::g::Fuse::Navigation::Router*)uPtr(at)->FindBehavior(::TYPES[42/*Fuse.Node.FindBehavior<Fuse.Navigation.Router>*/]);

    if (router != NULL)
        uPtr(router)->OnHistoryChanged();
}

// public static Fuse.Navigation.RouterPage CreateDefault() [static] :39
RouterPage* RouterPage::CreateDefault()
{
    return RouterPage::New1(NULL, NULL, NULL);
}

// public static Fuse.IObject GetNavigationRequest(object data) [static] :95
uObject* RouterPage::GetNavigationRequest(uObject* data)
{
    uStackFrame __("Fuse.Navigation.RouterPage", "GetNavigationRequest(object)");
    uObject* obj = uAs<uObject*>(data, ::TYPES[39/*Fuse.IObject*/]);

    if ((obj == NULL) || !::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[42/*"$navigation...*/]))
        return NULL;

    return uAs<uObject*>(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), ::STRINGS[42/*"$navigation...*/]), ::TYPES[39/*Fuse.IObject*/]);
}

// public RouterPage New(string path, [string parameter], [object context]) [static] :29
RouterPage* RouterPage::New1(uString* path, uString* parameter, uObject* context)
{
    RouterPage* obj2 = (RouterPage*)uNew(RouterPage_typeof());
    obj2->ctor_(path, parameter, context);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageData.uno
// ----------------------------------------------------------------

// internal delegate void RouterPageChangedHandler(object sender, Fuse.Navigation.RouterPage newPage) :5
uDelegateType* RouterPageChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.RouterPageChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::RouterPage_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterPage.uno
// ------------------------------------------------------------------

// internal sealed class RouterPageRoute :145
// {
static void RouterPageRoute_build(uType* type)
{
    ::STRINGS[49] = uString::Const("/");
    ::STRINGS[50] = uString::Const("count can't be < 0");
    ::STRINGS[51] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterPage.uno");
    ::STRINGS[52] = uString::Const("SubDepth");
    type->SetFields(0,
        ::g::Fuse::Navigation::RouterPage_typeof(), offsetof(RouterPageRoute, RouterPage), 0,
        type, offsetof(RouterPageRoute, SubRoute), 0);
}

uType* RouterPageRoute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(RouterPageRoute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.RouterPageRoute", options);
    type->fp_build_ = RouterPageRoute_build;
    return type;
}

// public RouterPageRoute(Fuse.Navigation.RouterPage routerPage, Fuse.Navigation.RouterPageRoute sub) :150
void RouterPageRoute__ctor__fn(RouterPageRoute* __this, ::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub)
{
    __this->ctor_(routerPage, sub);
}

// public Fuse.Navigation.RouterPageRoute Append(Fuse.Navigation.RouterPageRoute subRoute) :224
void RouterPageRoute__Append_fn(RouterPageRoute* __this, RouterPageRoute* subRoute, RouterPageRoute** __retval)
{
    *__retval = __this->Append(subRoute);
}

// internal static Fuse.Navigation.RouterPageRoute Convert(Fuse.Navigation.Route r) :156
void RouterPageRoute__Convert_fn(::g::Fuse::Navigation::Route* r, RouterPageRoute** __retval)
{
    *__retval = RouterPageRoute::Convert(r);
}

// internal string Format() :199
void RouterPageRoute__Format_fn(RouterPageRoute* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// public RouterPageRoute New(Fuse.Navigation.RouterPage routerPage, Fuse.Navigation.RouterPageRoute sub) :150
void RouterPageRoute__New1_fn(::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub, RouterPageRoute** __retval)
{
    *__retval = RouterPageRoute::New1(routerPage, sub);
}

// internal Fuse.Navigation.RouterPageRoute SubDepth(int count) :207
void RouterPageRoute__SubDepth_fn(RouterPageRoute* __this, int32_t* count, RouterPageRoute** __retval)
{
    *__retval = __this->SubDepth(*count);
}

// public Fuse.Navigation.Route ToRoute() :184
void RouterPageRoute__ToRoute_fn(RouterPageRoute* __this, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->ToRoute();
}

// internal Fuse.Navigation.RouterPageRoute Up() :192
void RouterPageRoute__Up_fn(RouterPageRoute* __this, RouterPageRoute** __retval)
{
    *__retval = __this->Up();
}

// public RouterPageRoute(Fuse.Navigation.RouterPage routerPage, Fuse.Navigation.RouterPageRoute sub) [instance] :150
void RouterPageRoute::ctor_(::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub)
{
    RouterPage = routerPage;
    SubRoute = sub;
}

// public Fuse.Navigation.RouterPageRoute Append(Fuse.Navigation.RouterPageRoute subRoute) [instance] :224
RouterPageRoute* RouterPageRoute::Append(RouterPageRoute* subRoute)
{
    uStackFrame __("Fuse.Navigation.RouterPageRoute", "Append(Fuse.Navigation.RouterPageRoute)");
    RouterPageRoute* sub = (SubRoute == NULL) ? subRoute : (RouterPageRoute*)uPtr(SubRoute)->Append(subRoute);
    return RouterPageRoute::New1(RouterPage, sub);
}

// internal string Format() [instance] :199
uString* RouterPageRoute::Format()
{
    uStackFrame __("Fuse.Navigation.RouterPageRoute", "Format()");
    uString* q = uPtr(RouterPage)->ToPathString();

    if (SubRoute != NULL)
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[49/*"/"*/], uPtr(SubRoute)->Format()));

    return q;
}

// internal Fuse.Navigation.RouterPageRoute SubDepth(int count) [instance] :207
RouterPageRoute* RouterPageRoute::SubDepth(int32_t count)
{
    uStackFrame __("Fuse.Navigation.RouterPageRoute", "SubDepth(int)");

    if (count < 0)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[50/*"count can't...*/], this, ::STRINGS[51/*"/usr/local/...*/], 211, ::STRINGS[52/*"SubDepth"*/]);
        return NULL;
    }

    if (count == 0)
        return this;

    if (SubRoute == NULL)
        return NULL;

    return uPtr(SubRoute)->SubDepth(count - 1);
}

// public Fuse.Navigation.Route ToRoute() [instance] :184
::g::Fuse::Navigation::Route* RouterPageRoute::ToRoute()
{
    uStackFrame __("Fuse.Navigation.RouterPageRoute", "ToRoute()");
    ::g::Fuse::Navigation::Route* r = ::g::Fuse::Navigation::Route::New1(uPtr(RouterPage)->Path(), uPtr(RouterPage)->Parameter, (SubRoute != NULL) ? (::g::Fuse::Navigation::Route*)uPtr(SubRoute)->ToRoute() : NULL);
    r->RouterPage = RouterPage;
    return r;
}

// internal Fuse.Navigation.RouterPageRoute Up() [instance] :192
RouterPageRoute* RouterPageRoute::Up()
{
    uStackFrame __("Fuse.Navigation.RouterPageRoute", "Up()");

    if (SubRoute == NULL)
        return this;
    else if (uPtr(SubRoute)->SubRoute == NULL)
        return RouterPageRoute::New1(RouterPage, NULL);

    return RouterPageRoute::New1(RouterPage, uPtr(SubRoute)->Up());
}

// internal static Fuse.Navigation.RouterPageRoute Convert(Fuse.Navigation.Route r) [static] :156
RouterPageRoute* RouterPageRoute::Convert(::g::Fuse::Navigation::Route* r)
{
    uStackFrame __("Fuse.Navigation.RouterPageRoute", "Convert(Fuse.Navigation.Route)");
    RouterPageRoute* cur = NULL;
    RouterPageRoute* bas = NULL;

    while (r != NULL)
    {
        ::g::Fuse::Navigation::RouterPage* nxtrp = uPtr(r)->RouterPage;

        if (nxtrp == NULL)
            nxtrp = ::g::Fuse::Navigation::RouterPage::New1(uPtr(r)->Path, uPtr(r)->Parameter, NULL);

        RouterPageRoute* nxt = RouterPageRoute::New1(nxtrp, NULL);

        if (cur == NULL)
        {
            cur = nxt;
            bas = nxt;
        }
        else
        {
            uPtr(cur)->SubRoute = nxt;
            cur = nxt;
        }

        r = uPtr(r)->SubRoute;
    }

    return bas;
}

// public RouterPageRoute New(Fuse.Navigation.RouterPage routerPage, Fuse.Navigation.RouterPageRoute sub) [static] :150
RouterPageRoute* RouterPageRoute::New1(::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub)
{
    RouterPageRoute* obj1 = (RouterPageRoute*)uNew(RouterPageRoute_typeof());
    obj1->ctor_(routerPage, sub);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno
// ---------------------------------------------------------------------

// internal sealed class RouterRequest :12
// {
static void RouterRequest_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::ModifyRouteHow_typeof(), offsetof(RouterRequest, How), 0,
        ::g::Fuse::Navigation::RouterPageRoute_typeof(), offsetof(RouterRequest, Route), 0,
        ::g::Fuse::Node_typeof(), offsetof(RouterRequest, Relative), uFieldFlagsWeak,
        ::g::Fuse::Navigation::NavigationGotoMode_typeof(), offsetof(RouterRequest, Transition), 0,
        ::g::Uno::String_typeof(), offsetof(RouterRequest, Style), 0,
        ::g::Uno::String_typeof(), offsetof(RouterRequest, Bookmark), 0,
        ::g::Fuse::Navigation::RoutingOperation_typeof(), offsetof(RouterRequest, _operation), 0,
        ::g::Uno::Bool_typeof(), offsetof(RouterRequest, HasOperation), 0,
        RouterRequest__Flags_typeof(), offsetof(RouterRequest, _flags), 0);
}

uType* RouterRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(RouterRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.RouterRequest", options);
    type->fp_build_ = RouterRequest_build;
    return type;
}

// public RouterRequest([Fuse.Navigation.RouterRequest.Flags flags]) :44
void RouterRequest__ctor__fn(RouterRequest* __this, int32_t* flags)
{
    __this->ctor_(*flags);
}

// public bool AddArgument(string name, object value, [Fuse.Navigation.RouterRequest.Fields allow]) :103
void RouterRequest__AddArgument_fn(RouterRequest* __this, uString* name, uObject* value, int32_t* allow, bool* __retval)
{
    *__retval = __this->AddArgument(name, value, *allow);
}

// public bool AddArguments(Fuse.IObject obj, [Fuse.Navigation.RouterRequest.Fields allow]) :158
void RouterRequest__AddArguments_fn(RouterRequest* __this, uObject* obj, int32_t* allow, bool* __retval)
{
    *__retval = __this->AddArguments(obj, *allow);
}

// public bool AddHow(Fuse.Navigation.ModifyRouteHow how) :60
void RouterRequest__AddHow_fn(RouterRequest* __this, int32_t* how, bool* __retval)
{
    *__retval = __this->AddHow(*how);
}

// public bool AddPath(object value) :66
void RouterRequest__AddPath_fn(RouterRequest* __this, uObject* value, bool* __retval)
{
    *__retval = __this->AddPath(value);
}

// private static bool IsObjectRoute(object value) :246
void RouterRequest__IsObjectRoute_fn(uObject* value, bool* __retval)
{
    *__retval = RouterRequest::IsObjectRoute(value);
}

// public bool MakeRequest(Fuse.Navigation.Router router) :169
void RouterRequest__MakeRequest_fn(RouterRequest* __this, ::g::Fuse::Navigation::Router* router, bool* __retval)
{
    *__retval = __this->MakeRequest(router);
}

// public RouterRequest New([Fuse.Navigation.RouterRequest.Flags flags]) :44
void RouterRequest__New1_fn(int32_t* flags, RouterRequest** __retval)
{
    *__retval = RouterRequest::New1(*flags);
}

// public Fuse.Navigation.RoutingOperation get_Operation() :26
void RouterRequest__get_Operation_fn(RouterRequest* __this, int32_t* __retval)
{
    *__retval = __this->Operation();
}

// public void set_Operation(Fuse.Navigation.RoutingOperation value) :27
void RouterRequest__set_Operation_fn(RouterRequest* __this, int32_t* value)
{
    __this->Operation(*value);
}

// public static Fuse.Navigation.RouterPageRoute ParseFlatRoute(Fuse.IArray path) :195
void RouterRequest__ParseFlatRoute_fn(uObject* path, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = RouterRequest::ParseFlatRoute(path);
}

// public static Fuse.Navigation.RouterPageRoute ParseFlatRoute(object[] args, [int pos]) :204
void RouterRequest__ParseFlatRoute1_fn(uArray* args, int32_t* pos, ::g::Fuse::Navigation::RouterPageRoute** __retval)
{
    *__retval = RouterRequest::ParseFlatRoute1(args, *pos);
}

// private static bool ParseNVPComponent(object value, Fuse.Navigation.RouterPageRoute& route) :315
void RouterRequest__ParseNVPComponent_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval)
{
    *__retval = RouterRequest::ParseNVPComponent(value, route);
}

// internal static bool ParseNVPRoute(object value, Fuse.Navigation.RouterPageRoute& route) :294
void RouterRequest__ParseNVPRoute_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval)
{
    *__retval = RouterRequest::ParseNVPRoute(value, route);
}

// private static bool ParseObjectComponent(object value, Fuse.Navigation.RouterPageRoute& route) :281
void RouterRequest__ParseObjectComponent_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval)
{
    *__retval = RouterRequest::ParseObjectComponent(value, route);
}

// internal static bool ParseObjectRoute(object value, Fuse.Navigation.RouterPageRoute& route) :259
void RouterRequest__ParseObjectRoute_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval)
{
    *__retval = RouterRequest::ParseObjectRoute(value, route);
}

// internal static bool ParseUXRoute(object value, Fuse.Navigation.RouterPageRoute& route) :239
void RouterRequest__ParseUXRoute_fn(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route, bool* __retval)
{
    *__retval = RouterRequest::ParseUXRoute(value, route);
}

// public void Reset() :50
void RouterRequest__Reset_fn(RouterRequest* __this)
{
    __this->Reset();
}

// private static bool ValidateParameter(object arg, [int depth]) :336
void RouterRequest__ValidateParameter_fn(uObject* arg, int32_t* depth, bool* __retval)
{
    *__retval = RouterRequest::ValidateParameter(arg, *depth);
}

// public RouterRequest([Fuse.Navigation.RouterRequest.Flags flags]) [instance] :44
void RouterRequest::ctor_(int32_t flags)
{
    _flags = flags;
    Reset();
}

// public bool AddArgument(string name, object value, [Fuse.Navigation.RouterRequest.Fields allow]) [instance] :103
bool RouterRequest::AddArgument(uString* name, uObject* value, int32_t allow)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "AddArgument(string,object,[Fuse.Navigation.RouterRequest.Fields])");
    int32_t ret2;
    bool ret3;
    uString* ret4;
    uString* ret5;
    bool ret6;

    if (::g::Uno::String::op_Equality(name, uString::Const("how")) && ((allow & 1) == 1))
        return AddHow((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Navigation.ModifyRouteHow>*/, ::g::Fuse::Navigation::ModifyRouteHow_typeof(), NULL), value, &ret2), ret2));

    if (::g::Uno::String::op_Equality(name, uString::Const("path")) && ((allow & 64) == 64))
        return AddPath(value);

    if (::g::Uno::String::op_Equality(name, uString::Const("relative")) && ((allow & 4) == 4))
        Relative = uAs< ::g::Fuse::Node*>(value, ::TYPES[46/*Fuse.Node*/]);
    else if (::g::Uno::String::op_Equality(name, uString::Const("transition")) && ((allow & 8) == 8))
    {
        int32_t v;

        if (!(::g::Fuse::Marshal__TryToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<Fuse.Navigation.NavigationGotoMode>*/, ::g::Fuse::Navigation::NavigationGotoMode_typeof(), NULL), value, &v, &ret3), ret3))
        {
            ::g::Fuse::Diagnostics::UserError(uString::Const("Invalid transition value"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 120, uString::Const("AddArgument"), NULL);
            return false;
        }
        else
            Transition = v;
    }
    else if (::g::Uno::String::op_Equality(name, uString::Const("bookmark")) && ((allow & 32) == 32))
        Bookmark = (::g::Fuse::Marshal__ToType_fn(::TYPES[40/*Fuse.Marshal.ToType<string>*/], value, &ret4), ret4);
    else if (::g::Uno::String::op_Equality(name, uString::Const("style")) && ((allow & 16) == 16))
        Style = (::g::Fuse::Marshal__ToType_fn(::TYPES[40/*Fuse.Marshal.ToType<string>*/], value, &ret5), ret5);
    else if (::g::Uno::String::op_Equality(name, uString::Const("operation")) && ((allow & 128) == 128))
    {
        int32_t v1;

        if (!(::g::Fuse::Marshal__TryToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<Fuse.Navigation.RoutingOperation>*/, ::g::Fuse::Navigation::RoutingOperation_typeof(), NULL), value, &v1, &ret6), ret6))
        {
            ::g::Fuse::Diagnostics::UserError(uString::Const("Invalid operation value"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 141, uString::Const("AddArgument"), NULL);
            return false;
        }
        else
            Operation(v1);
    }
    else
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unrecognized or unsupported argument: "), name), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 151, uString::Const("AddArgument"), NULL);
        return false;
    }

    return true;
}

// public bool AddArguments(Fuse.IObject obj, [Fuse.Navigation.RouterRequest.Fields allow]) [instance] :158
bool RouterRequest::AddArguments(uObject* obj, int32_t allow)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "AddArguments(Fuse.IObject,[Fuse.Navigation.RouterRequest.Fields])");
    uArray* keys = ::g::Fuse::IObject::Keys(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]));

    for (int32_t i = 0; i < uPtr(keys)->Length(); i++)
        if (!AddArgument(uPtr(keys)->Strong<uString*>(i), ::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), uPtr(keys)->Strong<uString*>(i)), allow))
            return false;

    return true;
}

// public bool AddHow(Fuse.Navigation.ModifyRouteHow how) [instance] :60
bool RouterRequest::AddHow(int32_t how)
{
    How = how;
    return true;
}

// public bool AddPath(object value) [instance] :66
bool RouterRequest::AddPath(uObject* value)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "AddPath(object)");

    if ((_flags & 1) == 1)
    {
        uObject* path = uAs<uObject*>(value, ::g::Fuse::IArray_typeof());

        if (path == NULL)
        {
            ::g::Fuse::Diagnostics::UserError(uString::Const("`path` should be an array"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 73, uString::Const("AddPath"), NULL);
            return false;
        }

        Route = RouterRequest::ParseFlatRoute(path);
    }
    else
    {
        if (!RouterRequest::ParseNVPRoute(value, &Route))
            return false;
    }

    return true;
}

// public bool MakeRequest(Fuse.Navigation.Router router) [instance] :169
bool RouterRequest::MakeRequest(::g::Fuse::Navigation::Router* router)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "MakeRequest(Fuse.Navigation.Router)");
    bool ret7;
    ::g::Fuse::Navigation::RouterPageRoute* targetRoute = Route;

    if (::g::Uno::String::op_Inequality(Bookmark, NULL))
    {
        if (targetRoute != NULL)
        {
            ::g::Fuse::Diagnostics::UserError(uString::Const("A path and bookmark cannot both be specified"), router, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 177, uString::Const("MakeRequest"), NULL);
            return false;
        }

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(router)->Bookmarks), Bookmark, (void**)(&targetRoute), &ret7), ret7))
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("Unknown bookmark: "), Bookmark), router, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 183, uString::Const("MakeRequest"), NULL);
            return false;
        }
    }

    if (Relative != NULL)
        targetRoute = uPtr(router)->GetRelativeRoute1(Relative, targetRoute);

    uPtr(router)->Modify1(How, targetRoute, Transition, Style);
    return true;
}

// public Fuse.Navigation.RoutingOperation get_Operation() [instance] :26
int32_t RouterRequest::Operation()
{
    return _operation;
}

// public void set_Operation(Fuse.Navigation.RoutingOperation value) [instance] :27
void RouterRequest::Operation(int32_t value)
{
    _operation = value;
    HasOperation = true;
}

// public void Reset() [instance] :50
void RouterRequest::Reset()
{
    How = 1;
    Route = NULL;
    Relative = NULL;
    Transition = 0;
    Style = ::STRINGS[18/*""*/];
    HasOperation = false;
}

// private static bool IsObjectRoute(object value) [static] :246
bool RouterRequest::IsObjectRoute(uObject* value)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "IsObjectRoute(object)");
    uObject* array = uAs<uObject*>(value, ::g::Fuse::IArray_typeof());
    bool isProperArray = (array != NULL) && !uIs(value, ::TYPES[39/*Fuse.IObject*/]);

    if ((isProperArray && (::g::Fuse::IArray::Length(uInterface(uPtr(array), ::g::Fuse::IArray_typeof())) > 0)) && ::g::Fuse::Navigation::PagesMap::HasObjectPath(::g::Fuse::IArray::Item(uInterface(uPtr(array), ::g::Fuse::IArray_typeof()), 0)))
        return true;

    if (!isProperArray && ::g::Fuse::Navigation::PagesMap::HasObjectPath(value))
        return true;

    return false;
}

// public RouterRequest New([Fuse.Navigation.RouterRequest.Flags flags]) [static] :44
RouterRequest* RouterRequest::New1(int32_t flags)
{
    RouterRequest* obj1 = (RouterRequest*)uNew(RouterRequest_typeof());
    obj1->ctor_(flags);
    return obj1;
}

// public static Fuse.Navigation.RouterPageRoute ParseFlatRoute(Fuse.IArray path) [static] :195
::g::Fuse::Navigation::RouterPageRoute* RouterRequest::ParseFlatRoute(uObject* path)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ParseFlatRoute(Fuse.IArray)");
    uArray* cvt = uArray::New(::TYPES[15/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(path), ::g::Fuse::IArray_typeof())));

    for (int32_t i = 0; i < cvt->Length(); ++i)
        uPtr(cvt)->Strong<uObject*>(i) = ::g::Fuse::IArray::Item(uInterface(uPtr(path), ::g::Fuse::IArray_typeof()), i);

    return RouterRequest::ParseFlatRoute1(cvt, 0);
}

// public static Fuse.Navigation.RouterPageRoute ParseFlatRoute(object[] args, [int pos]) [static] :204
::g::Fuse::Navigation::RouterPageRoute* RouterRequest::ParseFlatRoute1(uArray* args, int32_t pos)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ParseFlatRoute(object[],[int])");

    if (uPtr(args)->Length() <= pos)
        return NULL;

    uString* path = uAs<uString*>(uPtr(args)->Strong<uObject*>(pos), ::g::Uno::String_typeof());

    if (::g::Uno::String::op_Inequality(path, NULL))
    {
        if (uPtr(args)->Length() <= (pos + 1))
            return ::g::Fuse::Navigation::RouterPageRoute::New1(::g::Fuse::Navigation::RouterPage::New1(uAs<uString*>(uPtr(args)->Strong<uObject*>(pos), ::g::Uno::String_typeof()), NULL, NULL), NULL);

        uObject* arg = uPtr(args)->Strong<uObject*>(pos + 1);

        if (!RouterRequest::ValidateParameter(arg, 0))
            return NULL;

        uString* parameter = ::g::Fuse::Json::Stringify(arg, true);
        return ::g::Fuse::Navigation::RouterPageRoute::New1(::g::Fuse::Navigation::RouterPage::New1(path, parameter, NULL), RouterRequest::ParseFlatRoute1(args, pos + 2));
    }
    else
        return ::g::Fuse::Navigation::RouterPageRoute::New1(::g::Fuse::Navigation::RouterPage::New1(::g::Fuse::Navigation::PagesMap::GetObjectPath(uPtr(args)->Strong<uObject*>(pos)), NULL, uPtr(args)->Strong<uObject*>(pos)), RouterRequest::ParseFlatRoute1(args, pos + 1));
}

// private static bool ParseNVPComponent(object value, Fuse.Navigation.RouterPageRoute& route) [static] :315
bool RouterRequest::ParseNVPComponent(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ParseNVPComponent(object,Fuse.Navigation.RouterPageRoute&)");

    if (uIs(value, ::g::Uno::String_typeof()))
    {
        *route = ::g::Fuse::Navigation::RouterPageRoute::New1(::g::Fuse::Navigation::RouterPage::New1(uCast<uString*>(value, ::g::Uno::String_typeof()), NULL, NULL), *route);
        return true;
    }

    ::g::Fuse::NameValuePair* nvp = uAs< ::g::Fuse::NameValuePair*>(value, ::TYPES[21/*Fuse.NameValuePair*/]);

    if (nvp != NULL)
    {
        *route = ::g::Fuse::Navigation::RouterPageRoute::New1(::g::Fuse::Navigation::RouterPage::New1(uPtr(nvp)->Name(), ::g::Fuse::Json::Stringify(uPtr(nvp)->Value(), false), NULL), *route);
        return true;
    }

    ::g::Fuse::Diagnostics::UserError(uString::Const("incompatible path component"), value, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 332, uString::Const("ParseNVPComponent"), NULL);
    return false;
}

// internal static bool ParseNVPRoute(object value, Fuse.Navigation.RouterPageRoute& route) [static] :294
bool RouterRequest::ParseNVPRoute(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ParseNVPRoute(object,Fuse.Navigation.RouterPageRoute&)");
    *route = NULL;
    uObject* array = uAs<uObject*>(value, ::g::Fuse::IArray_typeof());

    if (array != NULL)
    {
        for (int32_t i = ::g::Fuse::IArray::Length(uInterface(uPtr(array), ::g::Fuse::IArray_typeof())) - 1; i >= 0; --i)
            if (!RouterRequest::ParseNVPComponent(::g::Fuse::IArray::Item(uInterface(uPtr(array), ::g::Fuse::IArray_typeof()), i), route))
                return false;

        return true;
    }
    else
        return RouterRequest::ParseNVPComponent(value, route);
}

// private static bool ParseObjectComponent(object value, Fuse.Navigation.RouterPageRoute& route) [static] :281
bool RouterRequest::ParseObjectComponent(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ParseObjectComponent(object,Fuse.Navigation.RouterPageRoute&)");
    uString* path = ::g::Fuse::Navigation::PagesMap::GetObjectPath(value);

    if (::g::Uno::String::op_Equality(path, NULL))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Object does not contain a $path"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 286, uString::Const("ParseObjectComponent"), NULL);
        return false;
    }

    *route = ::g::Fuse::Navigation::RouterPageRoute::New1(::g::Fuse::Navigation::RouterPage::New1(path, NULL, value), *route);
    return true;
}

// internal static bool ParseObjectRoute(object value, Fuse.Navigation.RouterPageRoute& route) [static] :259
bool RouterRequest::ParseObjectRoute(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ParseObjectRoute(object,Fuse.Navigation.RouterPageRoute&)");
    *route = NULL;
    uObject* array = uAs<uObject*>(value, ::g::Fuse::IArray_typeof());
    bool isProperArray = (array != NULL) && !uIs(value, ::TYPES[39/*Fuse.IObject*/]);

    if (isProperArray)
    {
        for (int32_t i = ::g::Fuse::IArray::Length(uInterface(uPtr(array), ::g::Fuse::IArray_typeof())) - 1; i >= 0; --i)
            if (!RouterRequest::ParseObjectComponent(::g::Fuse::IArray::Item(uInterface(uPtr(array), ::g::Fuse::IArray_typeof()), i), route))
                return false;

        return true;
    }
    else
        return RouterRequest::ParseObjectComponent(value, route);
}

// internal static bool ParseUXRoute(object value, Fuse.Navigation.RouterPageRoute& route) [static] :239
bool RouterRequest::ParseUXRoute(uObject* value, ::g::Fuse::Navigation::RouterPageRoute** route)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ParseUXRoute(object,Fuse.Navigation.RouterPageRoute&)");

    if (RouterRequest::IsObjectRoute(value))
        return RouterRequest::ParseObjectRoute(value, route);

    return RouterRequest::ParseNVPRoute(value, route);
}

// private static bool ValidateParameter(object arg, [int depth]) [static] :336
bool RouterRequest::ValidateParameter(uObject* arg, int32_t depth)
{
    uStackFrame __("Fuse.Navigation.RouterRequest", "ValidateParameter(object,[int])");

    if (depth > 49)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Route parameter must be serializeable, it contains reference loops or is too large"), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 340, uString::Const("ValidateParameter"), NULL);
        return false;
    }

    if (uIs(arg, ::TYPES[39/*Fuse.IObject*/]))
    {
        uObject* obj = (uObject*)arg;
        uArray* keys = ::g::Fuse::IObject::Keys(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]));

        for (int32_t i = 0; i < uPtr(keys)->Length(); i++)
        {
            uString* key = uPtr(keys)->Strong<uString*>(i);

            if (!RouterRequest::ValidateParameter(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[39/*Fuse.IObject*/]), key), depth + 1))
                return false;
        }
    }

    if (uIs(arg, ::g::Fuse::IArray_typeof()))
    {
        uObject* arr = (uObject*)arg;

        for (int32_t i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::g::Fuse::IArray_typeof())); i1++)
            if (!RouterRequest::ValidateParameter(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::g::Fuse::IArray_typeof()), i1), depth + 1))
                return false;
    }

    if (uIs(arg, ::g::Fuse::Reactive::IEventHandler_typeof()))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Route parameter must be serializeable, cannot contain functions."), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 366, uString::Const("ValidateParameter"), NULL);
        return false;
    }

    if (uIs(arg, ::g::Fuse::Reactive::IObservable_typeof()))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Route parameter must be serializeable, cannot contain Observables."), NULL, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/RouterRequest.uno"), 372, uString::Const("ValidateParameter"), NULL);
        return false;
    }

    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal enum RoutingOperation :8
uEnumType* RoutingOperation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingOperation", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Goto", 0LL,
        "Push", 1LL,
        "Replace", 2LL,
        "Pop", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/IRouterOutlet.uno
// ---------------------------------------------------------------------

// internal enum RoutingResult :29
uEnumType* RoutingResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingResult", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "NoChange", 0LL,
        "MinorChange", 1LL,
        "Change", 2LL,
        "Invalid", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/SwipeNavigate.uno
// ---------------------------------------------------------------------

// internal enum SnapTo :43
uEnumType* SnapTo_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SnapTo", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Current", 1LL,
        "Backward", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/NavigationPageProxy.uno
// ---------------------------------------------------------------------------

// public delegate void NavigationPageProxy.StatusChangedHandler(Fuse.Navigation.NavigationPageProxy sender) :16
uDelegateType* NavigationPageProxy__StatusChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageProxy.StatusChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Fuse::Navigation::NavigationPageProxy_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno
// ----------------------------------------------------------------------------

// public interfacemodifiers class StructuredNavigation :13
// {
static void StructuredNavigation_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(StructuredNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(StructuredNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(StructuredNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(StructuredNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(StructuredNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(StructuredNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(StructuredNavigation_type, interface9),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(StructuredNavigation_type, interface10));
    type->SetFields(26,
        ::g::Uno::Bool_typeof(), offsetof(StructuredNavigation, _reuseExistingVisual), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(StructuredNavigation, _motion), 0,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(StructuredNavigation, _region), 0,
        ::g::Uno::Bool_typeof(), offsetof(StructuredNavigation, _hasUpdated), 0,
        ::g::Uno::Float_typeof(), offsetof(StructuredNavigation, _progress), 0,
        ::g::Uno::Float_typeof(), offsetof(StructuredNavigation, _prevProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(StructuredNavigation, _queueClearForwardHistory), 0,
        ::g::Fuse::Visual_typeof(), offsetof(StructuredNavigation, _active), 0,
        ::g::Uno::Float_typeof(), offsetof(StructuredNavigation, _seekBase), 0,
        StructuredNavigation__NavigationStructure_typeof(), offsetof(StructuredNavigation, _Mode), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Duration", NULL, (void*)StructuredNavigation__get_Duration_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("set_Duration", NULL, (void*)StructuredNavigation__set_Duration_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("get_Easing", NULL, (void*)StructuredNavigation__get_Easing_fn, 0, false, ::g::Fuse::Animations::Easing_typeof(), 0),
        new uFunction("set_Easing", NULL, (void*)StructuredNavigation__set_Easing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Animations::Easing_typeof()),
        new uFunction("GotoImpl", NULL, (void*)StructuredNavigation__GotoImpl_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("get_Motion", NULL, (void*)StructuredNavigation__get_Motion_fn, 0, false, ::g::Fuse::Motion::MotionConfig_typeof(), 0),
        new uFunction("set_Motion", NULL, (void*)StructuredNavigation__set_Motion_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Motion::MotionConfig_typeof()),
        new uFunction("get_Progress", NULL, (void*)StructuredNavigation__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("QueueClearForwardHistory", NULL, (void*)StructuredNavigation__QueueClearForwardHistory_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_SeekRange", NULL, (void*)StructuredNavigation__get_SeekRange_fn, 0, false, ::g::Uno::Float2_typeof(), 0));
}

StructuredNavigation_type* StructuredNavigation_typeof()
{
    static uSStrong<StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 36;
    options.InterfaceCount = 11;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(StructuredNavigation);
    options.TypeSize = sizeof(StructuredNavigation_type);
    type = (StructuredNavigation_type*)uClassType::New("Fuse.Navigation.StructuredNavigation", options);
    type->fp_build_ = StructuredNavigation_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))StructuredNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))StructuredNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int32_t*))StructuredNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnUnrooted_fn;
    type->fp_get_PageProgress = (void(*)(::g::Fuse::Navigation::VisualNavigation*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface10.fp_BeginSeek = (void(*)(uObject*))StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface10.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface10.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface10.fp_get_SeekRange = (void(*)(uObject*, ::g::Uno::Float2*))StructuredNavigation__get_SeekRange_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->interface7.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int32_t*))StructuredNavigation__Goto_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_PageProgress = (void(*)(uObject*, double*))StructuredNavigation__get_PageProgress_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))StructuredNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))StructuredNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_HistoryChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) :25
void StructuredNavigation__ctor_4_fn(StructuredNavigation* __this, int32_t* mode)
{
    __this->ctor_4(*mode);
}

// public override sealed Fuse.Visual get_Active() :367
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :368
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Active(Fuse.Visual)");
    __this->Goto(value, 0);
}

// private void AnimationDone() :351
void StructuredNavigation__AnimationDone_fn(StructuredNavigation* __this)
{
    __this->AnimationDone();
}

// private Fuse.Visual get_Back() :481
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Back();
}

// public override sealed bool get_CanGoBack() :275
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_CanGoBack()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :267
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_CanGoForward()");
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) :249
void StructuredNavigation__ChangeProgress_fn(StructuredNavigation* __this, float* prev, float* next, int32_t* mode)
{
    __this->ChangeProgress(*prev, *next, *mode);
}

// private void CheckNeedUpdate([bool off]) :185
void StructuredNavigation__CheckNeedUpdate_fn(StructuredNavigation* __this, bool* off)
{
    __this->CheckNeedUpdate(*off);
}

// private int ClampProgress(int progress) :469
void StructuredNavigation__ClampProgress1_fn(StructuredNavigation* __this, int32_t* progress, int32_t* __retval)
{
    *__retval = __this->ClampProgress1(*progress);
}

// private void ClearForwardHistory() :451
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->ClearForwardHistory();
}

// public double get_Duration() :306
void StructuredNavigation__get_Duration_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :307
void StructuredNavigation__set_Duration_fn(StructuredNavigation* __this, double* value)
{
    __this->Duration(*value);
}

// public Fuse.Animations.Easing get_Easing() :297
void StructuredNavigation__get_Easing_fn(StructuredNavigation* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :298
void StructuredNavigation__set_Easing_fn(StructuredNavigation* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// private Fuse.Visual get_Front() :486
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Front();
}

// private void Fuse.Navigation.ISeekableNavigation.BeginSeek() :384
void StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Fuse.Navigation.ISeekableNavigation.BeginSeek()");
    __this->_seekBase = (float)__this->Progress();

    if (__this->_region != NULL)
    {
        __this->ResetRegionLimits();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()));
    }

    __this->OnStateChanged(1);
}

// private void Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs args) :418
void StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs)");
    ::g::Uno::Float2 ret4;

    if (!::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        return;

    int32_t targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = __this->ClampProgress1((int32_t)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
        case 2:
        {
            targetIndex = __this->ClampProgress1((int32_t)::g::Uno::Math::Ceil(__this->Progress()));
            break;
        }
        case 1:
        {
            double diff = __this->Progress() - ::g::Uno::Math::Floor(__this->Progress());
            targetIndex = __this->ClampProgress1((diff > 0.5) ? (int32_t)::g::Uno::Math::Ceil(__this->Progress()) : (int32_t)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
    }

    if (__this->_region != NULL)
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->Velocity(), 0.0f));

    if (!__this->TransitionToChild(__this->GetPage(targetIndex), false, true))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret4), ret4));
}

// private void Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs args) :404
void StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs)");
    ::g::Uno::Float2 ret5;

    if (__this->_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Seek being called on an unrooted navigation"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno"), 408, uString::Const("Fuse.Navigation.ISeekableNavigation.Seek"));
        return;
    }

    float prev = (float)__this->Progress();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(uPtr(args)->RelativeDelta(), 0.0f));
    __this->ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret5), ret5).X, 2);
    __this->CheckNeedUpdate(false);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :255
void StructuredNavigation__GetPageState_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    ::g::Fuse::Navigation::PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
    {
        collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
        collection1.Progress = 0.0f;
        collection1.PreviousProgress = 0.0f;
        return *__retval = collection1, void();
    }

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = ((float)__this->Progress() - (float)uPtr(pd)->Index);
    collection2.PreviousProgress = (__this->_prevProgress - (float)uPtr(pd)->Index);
    return *__retval = collection2, void();
}

// public override sealed void GoBack() :287
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GoBack()");

    if (__this->CanGoBack())
        __this->TransitionToChild(__this->Previous(), false, false);
}

// public override sealed void GoForward() :281
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GoForward()");

    if (__this->CanGoForward())
        __this->TransitionToChild(__this->Next(), false, false);
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :90
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int32_t* mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "Goto(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    int32_t mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    if (__this->Parent() == NULL)
    {
        __this->SetActive(element);
        return;
    }

    if (element == __this->_active)
        return;

    if (element == NULL)
        __this->SetActive(NULL);
    else
        __this->GotoImpl(element, mode_);
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :112
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int32_t* mode)
{
    __this->GotoImpl(element, *mode);
}

// private int get_MaxIndex() :476
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int32_t* __retval)
{
    *__retval = __this->MaxIndex();
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() :23
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) :23
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int32_t* value)
{
    __this->Mode(*value);
}

// public Fuse.Motion.MotionConfig get_Motion() :34
void StructuredNavigation__get_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :40
void StructuredNavigation__set_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// private Fuse.Visual get_Next() :496
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Next();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :314
void StructuredNavigation__OnChildAddedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active != NULL)
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    if (__this->_active == NULL)
        __this->SetActive(v);

    __this->OnHistoryChanged();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :330
void StructuredNavigation__OnChildRemovedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active == child)
        __this->SetActive(NULL);

    __this->OnHistoryChanged();
    __this->ChangeProgress((float)__this->Progress(), (float)__this->Progress(), 1);
}

// protected override sealed void OnRooted() :50
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnRooted()");
    bool ret7;
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (((__this->_active != NULL) && (uPtr(__this->_active)->Parent() != NULL)) && (__this->Parent() != uPtr(__this->_active)->Parent()))
        __this->SetActive(NULL);

    if ((__this->_active != NULL) && !(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(__this->Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[46/*Fuse.Node*/], NULL)), __this->_active, &ret7), ret7))
        __this->SetActive(NULL);

    if ((__this->PageCount() > 0) && (__this->_active == NULL))
        __this->SetActive(__this->GetPage(0));

    if (__this->_active != NULL)
        __this->GotoImpl(__this->_active, 1);

    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(__this->_progress, 0.0f)));
}

// protected override sealed void OnUnrooted() :72
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnUnrooted()");
    ::g::Uno::Float2 ret8;

    if (__this->_region != NULL)
    {
        __this->_progress = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret8), ret8).X;
        __this->_region = NULL;
        uPtr(__this->Motion())->ReleaseSimulation();
    }

    __this->CheckNeedUpdate(true);
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// private void OnUpdated() :204
void StructuredNavigation__OnUpdated_fn(StructuredNavigation* __this)
{
    __this->OnUpdated();
}

// public override sealed double get_PageProgress() :87
void StructuredNavigation__get_PageProgress_fn(StructuredNavigation* __this, double* __retval)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_PageProgress()");
    return *__retval = __this->Progress(), void();
}

// private Fuse.Visual get_Previous() :491
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Previous();
}

// public double get_Progress() :347
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void QueueClearForwardHistory() :150
void StructuredNavigation__QueueClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->QueueClearForwardHistory();
}

// private void ResetRegionLimits() :223
void StructuredNavigation__ResetRegionLimits_fn(StructuredNavigation* __this)
{
    __this->ResetRegionLimits();
}

// public float2 get_SeekRange() :401
void StructuredNavigation__get_SeekRange_fn(StructuredNavigation* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SeekRange();
}

// private void SetActive(Fuse.Visual page) :374
void StructuredNavigation__SetActive_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->SetActive(page);
}

// private void SetProgress(float value) :229
void StructuredNavigation__SetProgress_fn(StructuredNavigation* __this, float* value)
{
    __this->SetProgress(*value);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) :158
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval)
{
    *__retval = __this->TransitionToChild(element, *bypass, *clamp);
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) [instance] :25
void StructuredNavigation::ctor_4(int32_t mode)
{
    _reuseExistingVisual = true;
    ctor_3();
    Mode(mode);
}

// private void AnimationDone() [instance] :351
void StructuredNavigation::AnimationDone()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "AnimationDone()");

    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    OnStateChanged(0);
}

// private Fuse.Visual get_Back() [instance] :481
::g::Fuse::Visual* StructuredNavigation::Back()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Back()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(MaxIndex()) : NULL;
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) [instance] :249
void StructuredNavigation::ChangeProgress(float prev, float next, int32_t mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ChangeProgress(float,float,Fuse.Navigation.NavigationMode)");
    _prevProgress = prev;
    OnPageProgressChanged((double)next, (double)prev, mode);
}

// private void CheckNeedUpdate([bool off]) [instance] :185
void StructuredNavigation::CheckNeedUpdate(bool off)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "CheckNeedUpdate([bool])");
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        AnimationDone();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private int ClampProgress(int progress) [instance] :469
int32_t StructuredNavigation::ClampProgress1(int32_t progress)
{
    return ::g::Uno::Math::Clamp8(progress, 0, MaxIndex());
}

// private void ClearForwardHistory() [instance] :451
void StructuredNavigation::ClearForwardHistory()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ClearForwardHistory()");
    bool ret3;

    if (HasPages() && (_active != Front()))
    {
        int32_t target = GetPageIndex(_active);

        for (int32_t i = target - 1; i >= 0; i--)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[46/*Fuse.Node*/], NULL)), GetPage(i), &ret3);
    }

    OnHistoryChanged();
}

// public double get_Duration() [instance] :306
double StructuredNavigation::Duration()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Duration()");
    return (double)uPtr(Motion())->GotoDuration();
}

// public void set_Duration(double value) [instance] :307
void StructuredNavigation::Duration(double value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Duration(double)");
    uPtr(Motion())->GotoDuration((float)value);
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("Use a `NavigationMotion` and the `GotoDuration` property instead of `Navigation.Duration`"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno"), 310, uString::Const("set_Duration"));
}

// public Fuse.Animations.Easing get_Easing() [instance] :297
::g::Fuse::Animations::Easing* StructuredNavigation::Easing()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Easing()");
    return uPtr(Motion())->GotoEasing();
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :298
void StructuredNavigation::Easing(::g::Fuse::Animations::Easing* value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "set_Easing(Fuse.Animations.Easing)");
    uPtr(Motion())->GotoEasing(value);
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("Use a `NavigationMotion` and the `GotoEasing` property instead of `Navigation.Easing`"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno"), 301, uString::Const("set_Easing"));
}

// private Fuse.Visual get_Front() [instance] :486
::g::Fuse::Visual* StructuredNavigation::Front()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Front()");
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(0) : NULL;
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :112
void StructuredNavigation::GotoImpl(::g::Fuse::Visual* element, int32_t mode)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "GotoImpl(Fuse.Visual,Fuse.Navigation.NavigationGotoMode)");
    bool ret6;

    if ((uPtr(element)->Parent() != NULL) && (uPtr(element)->Parent() != Parent()))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Attempting to navigate to element with different parent"), element, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno"), 117, uString::Const("GotoImpl"), NULL);
        SetActive(NULL);
        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[46/*Fuse.Node*/], NULL)), element, &ret6), ret6))
    {
        if (Mode() == 1)
        {
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[46/*Fuse.Node*/], NULL)), uCRef<int32_t>(0), element);
        }
        else
            return;
    }
    else if (!_reuseExistingVisual)
    {
        if (Mode() == 1)
        {
            double diff = Progress() - (double)GetPageIndex(_active);
            uPtr(Parent())->BeginRemoveChild(element, NULL);
            SetProgress((float)((double)GetPageIndex(_active) + diff));
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[46/*Fuse.Node*/], NULL)), uCRef<int32_t>(0), element);
        }
    }

    TransitionToChild(element, (mode & 1) == 1, false);
    OnHistoryChanged();
}

// private int get_MaxIndex() [instance] :476
int32_t StructuredNavigation::MaxIndex()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_MaxIndex()");
    return PageCount() - 1;
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() [instance] :23
int32_t StructuredNavigation::Mode()
{
    return _Mode;
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) [instance] :23
void StructuredNavigation::Mode(int32_t value)
{
    _Mode = value;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :34
::g::Fuse::Motion::MotionConfig* StructuredNavigation::Motion()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Motion()");

    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::NavigationMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :40
void StructuredNavigation::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(uString::Const("Motion should not be changed post-rooting"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno"), 44, uString::Const("set_Motion"), NULL);
}

// private Fuse.Visual get_Next() [instance] :496
::g::Fuse::Visual* StructuredNavigation::Next()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Next()");
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnUpdated() [instance] :204
void StructuredNavigation::OnUpdated()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "OnUpdated()");
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Updated called without a region"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/StructuredNavigation.uno"), 208, uString::Const("OnUpdated"));
        return;
    }

    float prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret9), ret9).X;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()), ::g::Fuse::Time::FrameInterval());
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret10), ret10).X, 2);
    CheckNeedUpdate(true);
}

// private Fuse.Visual get_Previous() [instance] :491
::g::Fuse::Visual* StructuredNavigation::Previous()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Previous()");
    return GetPage(GetPageIndex(_active) + 1);
}

// public double get_Progress() [instance] :347
double StructuredNavigation::Progress()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_Progress()");
    ::g::Uno::Float2 ret13;
    return (double)((_region == NULL) ? _progress : (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret13), ret13).X);
}

// public void QueueClearForwardHistory() [instance] :150
void StructuredNavigation::QueueClearForwardHistory()
{
    _queueClearForwardHistory = true;
}

// private void ResetRegionLimits() [instance] :223
void StructuredNavigation::ResetRegionLimits()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "ResetRegionLimits()");
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2((float)MaxIndex(), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New1(0.0f));
}

// public float2 get_SeekRange() [instance] :401
::g::Uno::Float2 StructuredNavigation::SeekRange()
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "get_SeekRange()");
    return ::g::Uno::Float2__New2(-_seekBase, (float)MaxIndex() - _seekBase);
}

// private void SetActive(Fuse.Visual page) [instance] :374
void StructuredNavigation::SetActive(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "SetActive(Fuse.Visual)");

    if (page == _active)
        return;

    _active = page;
    OnActiveChanged(_active);
}

// private void SetProgress(float value) [instance] :229
void StructuredNavigation::SetProgress(float value)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "SetProgress(float)");
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;
    float prev;

    if (_region != NULL)
    {
        ResetRegionLimits();
        prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret11), ret11).X;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), uCRef(::g::Uno::Float2__New2(value, 0.0f)));
        value = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL)), &ret12), ret12).X;
    }
    else
    {
        prev = _progress;
        _progress = value;
    }

    ChangeProgress(prev, value, 1);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) [instance] :158
bool StructuredNavigation::TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp)
{
    uStackFrame __("Fuse.Navigation.StructuredNavigation", "TransitionToChild(Fuse.Visual,[bool],[bool])");
    float targetProgress = (float)GetPageIndex(element);
    SetActive(element);

    if (bypass || !IsRootingCompleted())
    {
        SetProgress(targetProgress);
        OnNavigated(element);
        return false;
    }

    if (Progress() == (double)targetProgress)
    {
        OnStateChanged(0);
        return false;
    }

    OnStateChanged(2);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New2(targetProgress, 0.0f));
    CheckNeedUpdate(false);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/FindRouter.uno
// ------------------------------------------------------------------

// private sealed class FindRouter.Subscription :37
// {
static void FindRouter__Subscription_build(uType* type)
{
    ::STRINGS[53] = uString::Const("unable to find a router");
    ::STRINGS[54] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/FindRouter.uno");
    ::STRINGS[34] = uString::Const(".ctor");
    ::TYPES[35] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Router_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FindRouter__Subscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Navigation::FindRouter_typeof(), offsetof(FindRouter__Subscription, _expr), 0,
        ::TYPES[35/*Fuse.Reactive.IListener*/], offsetof(FindRouter__Subscription, _listener), 0);
}

FindRouter__Subscription_type* FindRouter__Subscription_typeof()
{
    static uSStrong<FindRouter__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FindRouter__Subscription);
    options.TypeSize = sizeof(FindRouter__Subscription_type);
    type = (FindRouter__Subscription_type*)uClassType::New("Fuse.Navigation.FindRouter.Subscription", options);
    type->fp_build_ = FindRouter__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))FindRouter__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) :42
void FindRouter__Subscription__ctor__fn(FindRouter__Subscription* __this, ::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener)
{
    __this->ctor_(expr, origin, listener);
}

// public void Dispose() :55
void FindRouter__Subscription__Dispose_fn(FindRouter__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) :42
void FindRouter__Subscription__New1_fn(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener, FindRouter__Subscription** __retval)
{
    *__retval = FindRouter__Subscription::New1(expr, origin, listener);
}

// public Subscription(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) [instance] :42
void FindRouter__Subscription::ctor_(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener)
{
    uStackFrame __("Fuse.Navigation.FindRouter.Subscription", ".ctor(Fuse.Navigation.FindRouter,Fuse.Node,Fuse.Reactive.IListener)");
    _expr = expr;
    _listener = listener;
    ::g::Fuse::Navigation::Router* router = ::g::Fuse::Navigation::Router::TryFindRouter(origin);

    if (router == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[53/*"unable to f...*/], this, ::STRINGS[54/*"/usr/local/...*/], 49, ::STRINGS[34/*".ctor"*/], NULL);
    else
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[35/*Fuse.Reactive.IListener*/]), (uObject*)_expr, router);
}

// public void Dispose() [instance] :55
void FindRouter__Subscription::Dispose()
{
    _expr = NULL;
    _listener = NULL;
}

// public Subscription New(Fuse.Navigation.FindRouter expr, Fuse.Node origin, Fuse.Reactive.IListener listener) [static] :42
FindRouter__Subscription* FindRouter__Subscription::New1(::g::Fuse::Navigation::FindRouter* expr, ::g::Fuse::Node* origin, uObject* listener)
{
    FindRouter__Subscription* obj1 = (FindRouter__Subscription*)uNew(FindRouter__Subscription_typeof());
    obj1->ctor_(expr, origin, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/PageBinding.uno
// -------------------------------------------------------------------

// private sealed class PageExpression.Subscription :31
// {
static void PageExpression__Subscription_build(uType* type)
{
    ::STRINGS[36] = uString::Const("Visual");
    ::STRINGS[37] = uString::Const("Node");
    ::TYPES[20] = ::g::Uno::Action_typeof();
    ::TYPES[35] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[37] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[38] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::NavigationPageProperty_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PageExpression__Subscription_type, interface0),
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageExpression__Subscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Navigation::PageExpression_typeof(), offsetof(PageExpression__Subscription, _pe), 0,
        ::g::Fuse::Node_typeof(), offsetof(PageExpression__Subscription, _node), 0,
        ::TYPES[2/*Fuse.Navigation.INavigation*/], offsetof(PageExpression__Subscription, _nav), 0,
        ::TYPES[13/*Fuse.Visual*/], offsetof(PageExpression__Subscription, _currentPage), 0,
        ::TYPES[35/*Fuse.Reactive.IListener*/], offsetof(PageExpression__Subscription, _listener), 0);
}

PageExpression__Subscription_type* PageExpression__Subscription_typeof()
{
    static uSStrong<PageExpression__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(PageExpression__Subscription);
    options.TypeSize = sizeof(PageExpression__Subscription_type);
    type = (PageExpression__Subscription_type*)uClassType::New("Fuse.Navigation.PageExpression.Subscription", options);
    type->fp_build_ = PageExpression__Subscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PageExpression__Subscription__Dispose_fn;
    type->interface1.fp_UpdateSource = (void(*)(uObject*))PageExpression__Subscription__UpdateSource_fn;
    return type;
}

// public Subscription(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) :39
void PageExpression__Subscription__ctor__fn(PageExpression__Subscription* __this, ::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener)
{
    __this->ctor_(pe, node, listener);
}

// private bool Acceptor(object obj) :151
void PageExpression__Subscription__Acceptor_fn(PageExpression__Subscription* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public void Dispose() :80
void PageExpression__Subscription__Dispose_fn(PageExpression__Subscription* __this)
{
    __this->Dispose();
}

// private void GotoPage(Fuse.Visual page) :120
void PageExpression__Subscription__GotoPage_fn(PageExpression__Subscription* __this, ::g::Fuse::Visual* page)
{
    __this->GotoPage(page);
}

// private object get_LocalObject() :91
void PageExpression__Subscription__get_LocalObject_fn(PageExpression__Subscription* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// public Subscription New(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) :39
void PageExpression__Subscription__New1_fn(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener, PageExpression__Subscription** __retval)
{
    *__retval = PageExpression__Subscription::New1(pe, node, listener);
}

// private void OnChanged() :129
void PageExpression__Subscription__OnChanged_fn(PageExpression__Subscription* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :115
void PageExpression__Subscription__OnNavigated_fn(PageExpression__Subscription* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// private void ReleaseCurrent() :70
void PageExpression__Subscription__ReleaseCurrent_fn(PageExpression__Subscription* __this)
{
    __this->ReleaseCurrent();
}

// public void UpdateSource() :49
void PageExpression__Subscription__UpdateSource_fn(PageExpression__Subscription* __this)
{
    __this->UpdateSource();
}

// public Subscription(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) [instance] :39
void PageExpression__Subscription::ctor_(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener)
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", ".ctor(Fuse.Navigation.PageExpression,Fuse.Node,Fuse.Reactive.IListener)");
    _pe = pe;
    _node = node;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(uPtr(_pe)->Key(), uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)PageExpression__Subscription__OnChanged_fn, this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)this);
    UpdateSource();
}

// private bool Acceptor(object obj) [instance] :151
bool PageExpression__Subscription::Acceptor(uObject* obj)
{
    return true;
}

// public void Dispose() [instance] :80
void PageExpression__Subscription::Dispose()
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", "Dispose()");
    bool ret2;
    ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(uPtr(_pe)->Key(), uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)PageExpression__Subscription__OnChanged_fn, this));
    _listener = NULL;
    _node = NULL;
}

// private void GotoPage(Fuse.Visual page) [instance] :120
void PageExpression__Subscription::GotoPage(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", "GotoPage(Fuse.Visual)");

    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// private object get_LocalObject() [instance] :91
uObject* PageExpression__Subscription::LocalObject()
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", "get_LocalObject()");
    ::g::Fuse::Node* n = _node;

    while (n != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[13/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (page != NULL)
                return page;

            uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(v);

            if (navi != NULL)
                return navi;
        }

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private void OnChanged() [instance] :129
void PageExpression__Subscription::OnChanged()
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", "OnChanged()");
    uObject* listener = _listener;

    if (listener == NULL)
        return;

    ::g::Fuse::Visual* page = _currentPage;

    if (page != NULL)
    {
        if (::g::Uno::String::op_Equality(uPtr(_pe)->Key(), ::STRINGS[36/*"Visual"*/]) || ::g::Uno::String::op_Equality(uPtr(_pe)->Key(), ::STRINGS[37/*"Node"*/]))
            ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[35/*Fuse.Reactive.IListener*/]), (uObject*)_pe, page);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(uPtr(_pe)->Key(), uDelegate::New(::TYPES[37/*Uno.Predicate<object>*/], (void*)PageExpression__Subscription__Acceptor_fn, this), &resource))
                ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[35/*Fuse.Reactive.IListener*/]), (uObject*)_pe, resource);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :115
void PageExpression__Subscription::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", "OnNavigated(object,Fuse.Navigation.NavigatedArgs)");
    GotoPage(uPtr(args)->NewVisual());
}

// private void ReleaseCurrent() [instance] :70
void PageExpression__Subscription::ReleaseCurrent()
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", "ReleaseCurrent()");

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[38/*Fuse.Navigation.NavigatedHandler*/], (void*)PageExpression__Subscription__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public void UpdateSource() [instance] :49
void PageExpression__Subscription::UpdateSource()
{
    uStackFrame __("Fuse.Navigation.PageExpression.Subscription", "UpdateSource()");
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[2/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Visual*>(local, ::TYPES[13/*Fuse.Visual*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[38/*Fuse.Navigation.NavigatedHandler*/], (void*)PageExpression__Subscription__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[2/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}

// public Subscription New(Fuse.Navigation.PageExpression pe, Fuse.Node node, Fuse.Reactive.IListener listener) [static] :39
PageExpression__Subscription* PageExpression__Subscription::New1(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener)
{
    PageExpression__Subscription* obj1 = (PageExpression__Subscription*)uNew(PageExpression__Subscription_typeof());
    obj1->ctor_(pe, node, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/SwipeNavigate.uno
// ---------------------------------------------------------------------

// public enum SwipeDirection :65
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Right", 0LL,
        "Left", 1LL,
        "Down", 2LL,
        "Up", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/SwipeNavigate.uno
// ---------------------------------------------------------------------

// public sealed class SwipeNavigate :89
// {
// static generated SwipeNavigate() :89
static void SwipeNavigate__cctor_1_fn(uType* __type)
{
    SwipeNavigate::elasticDecay_ = 0.015f;
    SwipeNavigate::elasticScale_ = 0.4f;
}

static void SwipeNavigate_build(uType* type)
{
    ::STRINGS[55] = uString::Const("SwipeNavigate: failed to find suitable Navigation object");
    ::STRINGS[56] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/SwipeNavigate.uno");
    ::STRINGS[57] = uString::Const("Fuse.Input.IGesture.OnPointerPressed");
    ::TYPES[44] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[45] = ::g::Fuse::Navigation::ISeekableNavigation_typeof();
    ::TYPES[46] = ::g::Fuse::Node_typeof();
    ::TYPES[9] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeNavigate_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeNavigate_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipeNavigate_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipeNavigate_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(SwipeNavigate_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeNavigate_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SwipeNavigate_type, interface6),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(SwipeNavigate_type, interface7));
    type->SetFields(18,
        ::TYPES[44/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(SwipeNavigate, _velocity), 0,
        ::TYPES[45/*Fuse.Navigation.ISeekableNavigation*/], offsetof(SwipeNavigate, _currentNavigation), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(SwipeNavigate, _gesture), 0,
        ::g::Fuse::Navigation::SwipeDirection_typeof(), offsetof(SwipeNavigate, _forwardDirection), 0,
        ::TYPES[9/*Fuse.Elements.Element*/], offsetof(SwipeNavigate, _lengthNode), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeNavigate, _hasMaxPages), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeNavigate, _maxPages), 0,
        ::g::Uno::Float2_typeof(), offsetof(SwipeNavigate, _startCoord), 0,
        ::g::Uno::Float2_typeof(), offsetof(SwipeNavigate, _currentCoord), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeNavigate, _prevDistance), 0,
        ::g::Uno::Double_typeof(), offsetof(SwipeNavigate, _startTime), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeNavigate, _startedSeek), 0,
        ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), offsetof(SwipeNavigate, _swipeAllow), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeNavigate, _VelocityThreshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&SwipeNavigate::elasticDecay_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&SwipeNavigate::elasticScale_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("get_AllowedDirections", NULL, (void*)SwipeNavigate__get_AllowedDirections_fn, 0, false, ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), 0),
        new uFunction("set_AllowedDirections", NULL, (void*)SwipeNavigate__set_AllowedDirections_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::AllowedNavigationDirections_typeof()),
        new uFunction("get_ForwardDirection", NULL, (void*)SwipeNavigate__get_ForwardDirection_fn, 0, false, ::g::Fuse::Navigation::SwipeDirection_typeof(), 0),
        new uFunction("set_ForwardDirection", NULL, (void*)SwipeNavigate__set_ForwardDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeDirection_typeof()),
        new uFunction("get_LengthNode", NULL, (void*)SwipeNavigate__get_LengthNode_fn, 0, false, ::TYPES[9/*Fuse.Elements.Element*/], 0),
        new uFunction("set_LengthNode", NULL, (void*)SwipeNavigate__set_LengthNode_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*Fuse.Elements.Element*/]),
        new uFunction("get_MaxPages", NULL, (void*)SwipeNavigate__get_MaxPages_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_MaxPages", NULL, (void*)SwipeNavigate__set_MaxPages_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)SwipeNavigate__New2_fn, 0, true, type, 0),
        new uFunction("get_SwipeDirection", NULL, (void*)SwipeNavigate__get_SwipeDirection_fn, 0, false, ::g::Fuse::Navigation::SwipeDirection_typeof(), 0),
        new uFunction("set_SwipeDirection", NULL, (void*)SwipeNavigate__set_SwipeDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::SwipeDirection_typeof()),
        new uFunction("get_VelocityThreshold", NULL, (void*)SwipeNavigate__get_VelocityThreshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_VelocityThreshold", NULL, (void*)SwipeNavigate__set_VelocityThreshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

SwipeNavigate_type* SwipeNavigate_typeof()
{
    static uSStrong<SwipeNavigate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 34;
    options.InterfaceCount = 8;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(SwipeNavigate);
    options.TypeSize = sizeof(SwipeNavigate_type);
    type = (SwipeNavigate_type*)uClassType::New("Fuse.Navigation.SwipeNavigate", options);
    type->fp_build_ = SwipeNavigate_build;
    type->fp_ctor_ = (void*)SwipeNavigate__New2_fn;
    type->fp_cctor_ = SwipeNavigate__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnUnrooted_fn;
    type->interface7.fp_OnLostCapture = (void(*)(uObject*, bool*))SwipeNavigate__FuseInputIGestureOnLostCapture_fn;
    type->interface7.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*))SwipeNavigate__FuseInputIGestureOnPointerPressed_fn;
    type->interface7.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*))SwipeNavigate__FuseInputIGestureOnCaptureChanged_fn;
    type->interface7.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*))SwipeNavigate__FuseInputIGestureOnPointerMoved_fn;
    type->interface7.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*))SwipeNavigate__FuseInputIGestureOnPointerReleased_fn;
    type->interface7.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))SwipeNavigate__FuseInputIGestureget_Priority_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SwipeNavigate() :196
void SwipeNavigate__ctor_3_fn(SwipeNavigate* __this)
{
    __this->ctor_3();
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() :327
void SwipeNavigate__get_AllowedDirections_fn(SwipeNavigate* __this, int32_t* __retval)
{
    *__retval = __this->AllowedDirections();
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) :328
void SwipeNavigate__set_AllowedDirections_fn(SwipeNavigate* __this, int32_t* value)
{
    __this->AllowedDirections(*value);
}

// private Fuse.Navigation.SnapTo DetermineSnap() :387
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int32_t* __retval)
{
    *__retval = __this->DetermineSnap();
}

// private float2 get_Direction() :188
void SwipeNavigate__get_Direction_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Direction();
}

// private float2 get_Distance() :296
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Distance();
}

// private double get_ElapsedTime() :301
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval)
{
    *__retval = __this->ElapsedTime();
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() :124
void SwipeNavigate__get_ForwardDirection_fn(SwipeNavigate* __this, int32_t* __retval)
{
    *__retval = __this->ForwardDirection();
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) :125
void SwipeNavigate__set_ForwardDirection_fn(SwipeNavigate* __this, int32_t* value)
{
    __this->ForwardDirection(*value);
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev) :237
void SwipeNavigate__FuseInputIGestureOnCaptureChanged_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs,Fuse.Input.CaptureType,Fuse.Input.CaptureType)");
    int32_t how_ = *how;
    int32_t prev_ = *prev;
    __this->_startCoord = (__this->_currentCoord = uPtr(args)->WindowPoint());
    __this->_prevDistance = 0.0f;
    __this->_startTime = ::g::Fuse::Time::FrameTime();

    if (((how_ & 2) == 2) && !((prev_ & 2) == 2))
    {
        ::g::Fuse::Navigation::ISeekableNavigation::BeginSeek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[45/*Fuse.Navigation.ISeekableNavigation*/]));
        __this->_startedSeek = true;
    }
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced) :201
void SwipeNavigate__FuseInputIGestureOnLostCapture_fn(SwipeNavigate* __this, bool* forced)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "Fuse.Input.IGesture.OnLostCapture(bool)");

    if (__this->_currentNavigation != NULL)
    {
        if (uPtr(uAs< ::g::Fuse::Node*>(__this->_currentNavigation, ::TYPES[46/*Fuse.Node*/]))->IsRootingCompleted() && __this->_startedSeek)
            ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[45/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(1, 0.0f));

        __this->_currentNavigation = NULL;
    }

    __this->_startedSeek = false;
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args) :251
void SwipeNavigate__FuseInputIGestureOnPointerMoved_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerMovedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs)");

    if (__this->_currentNavigation == NULL)
        return *__retval = 2, void();

    __this->_currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(__this->_velocity), uCRef(__this->_currentCoord), uCRef(args->Timestamp()), uCRef<int32_t>(uPtr(__this->_gesture)->IsHardCapture() ? 0 : 1));

    if (uPtr(__this->_gesture)->IsHardCapture())
        ::g::Fuse::Navigation::ISeekableNavigation::Seek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[45/*Fuse.Navigation.ISeekableNavigation*/]), __this->GetNavigationArgs());

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args) :223
void SwipeNavigate__FuseInputIGestureOnPointerPressed_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerPressedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    __this->_startCoord = (__this->_currentCoord = uPtr(args)->WindowPoint());
    __this->_currentNavigation = __this->Navigation();
    ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(__this->_velocity), uCRef(__this->_startCoord), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(args->Timestamp()));

    if (__this->_currentNavigation == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[55/*"SwipeNaviga...*/], __this, ::STRINGS[56/*"/usr/local/...*/], 230, ::STRINGS[57/*"Fuse.Input....*/]);
        return *__retval = 0, void();
    }

    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :266
void SwipeNavigate__FuseInputIGestureOnPointerReleased_fn(SwipeNavigate* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int32_t* __retval)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    __this->_currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(__this->_velocity), uCRef(__this->_currentCoord), uCRef(args->Timestamp()), uCRef<int32_t>(2));

    if (uPtr(__this->_gesture)->IsHardCapture() && (__this->_currentNavigation != NULL))
    {
        ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(__this->_currentNavigation), ::TYPES[45/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(__this->DetermineSnap(), __this->ProgressVelocity()));
        __this->_currentNavigation = NULL;
    }

    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority() :215
void SwipeNavigate__FuseInputIGestureget_Priority_fn(SwipeNavigate* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(__this->_currentCoord, __this->_startCoord);
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1(1, ::g::Fuse::Input::Gesture::VectorSignificance(__this->Direction(), diff), 0), void();
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() :331
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval)
{
    *__retval = __this->GetNavigationArgs();
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) :138
void SwipeNavigate__Invert_fn(SwipeNavigate* __this, int32_t* sd, int32_t* __retval)
{
    *__retval = __this->Invert(*sd);
}

// private bool get_IsHorizontal() :181
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval)
{
    *__retval = __this->IsHorizontal();
}

// public Fuse.Elements.Element get_LengthNode() :160
void SwipeNavigate__get_LengthNode_fn(SwipeNavigate* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value) :161
void SwipeNavigate__set_LengthNode_fn(SwipeNavigate* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public float get_MaxPages() :173
void SwipeNavigate__get_MaxPages_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->MaxPages();
}

// public void set_MaxPages(float value) :174
void SwipeNavigate__set_MaxPages_fn(SwipeNavigate* __this, float* value)
{
    __this->MaxPages(*value);
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() :93
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// public SwipeNavigate New() :196
void SwipeNavigate__New2_fn(SwipeNavigate** __retval)
{
    *__retval = SwipeNavigate::New2();
}

// protected override sealed void OnRooted() :103
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_gesture = ::g::Fuse::Input::Gestures::Add((uObject*)__this, __this->Parent(), 1);
}

// protected override sealed void OnUnrooted() :110
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this)
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "OnUnrooted()");
    uPtr(__this->_gesture)->Dispose();
    __this->_gesture = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private float get_ProgressVelocity() :306
void SwipeNavigate__get_ProgressVelocity_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->ProgressVelocity();
}

// private float2 get_Scale() :283
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Scale();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() :134
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int32_t* __retval)
{
    *__retval = __this->SwipeDirection();
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) :135
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int32_t* value)
{
    __this->SwipeDirection(*value);
}

// public generated float get_VelocityThreshold() :150
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->VelocityThreshold();
}

// public generated void set_VelocityThreshold(float value) :150
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value)
{
    __this->VelocityThreshold(*value);
}

float SwipeNavigate::elasticDecay_;
float SwipeNavigate::elasticScale_;

// public SwipeNavigate() [instance] :196
void SwipeNavigate::ctor_3()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", ".ctor()");
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[44/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _forwardDirection = 1;
    _swipeAllow = 3;
    ctor_2();
    VelocityThreshold(300.0f);
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() [instance] :327
int32_t SwipeNavigate::AllowedDirections()
{
    return _swipeAllow;
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) [instance] :328
void SwipeNavigate::AllowedDirections(int32_t value)
{
    _swipeAllow = value;
}

// private Fuse.Navigation.SnapTo DetermineSnap() [instance] :387
int32_t SwipeNavigate::DetermineSnap()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "DetermineSnap()");
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    float diff = IsHorizontal() ? (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret2), ret2).X : (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3).Y;

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        diff = -diff;

    int32_t q = 1;

    if ((diff < -VelocityThreshold()) && ((AllowedDirections() & 1) == 1))
        q = 0;

    if ((diff > VelocityThreshold()) && ((AllowedDirections() & 2) == 2))
        q = 2;

    return q;
}

// private float2 get_Direction() [instance] :188
::g::Uno::Float2 SwipeNavigate::Direction()
{
    return IsHorizontal() ? ::g::Uno::Float2__New2(1.0f, 0.0f) : ::g::Uno::Float2__New2(0.0f, 1.0f);
}

// private float2 get_Distance() [instance] :296
::g::Uno::Float2 SwipeNavigate::Distance()
{
    return ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
}

// private double get_ElapsedTime() [instance] :301
double SwipeNavigate::ElapsedTime()
{
    return ::g::Fuse::Time::FrameTime() - _startTime;
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() [instance] :124
int32_t SwipeNavigate::ForwardDirection()
{
    return _forwardDirection;
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) [instance] :125
void SwipeNavigate::ForwardDirection(int32_t value)
{
    _forwardDirection = value;
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() [instance] :331
::g::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate::GetNavigationArgs()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "GetNavigationArgs()");
    float distance, scale;

    if (IsHorizontal())
    {
        distance = Distance().X;
        scale = Scale().X;
    }
    else
    {
        distance = Distance().Y;
        scale = Scale().Y;
    }

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        distance = -distance;

    float rel = distance / scale;

    if (!((AllowedDirections() & 2) == 2))
        rel = ::g::Uno::Math::Min1(0.0f, rel);

    if (!((AllowedDirections() & 1) == 1))
        rel = ::g::Uno::Math::Max1(0.0f, rel);

    if (_hasMaxPages)
        rel = ::g::Uno::Math::Clamp1(rel, -_maxPages, _maxPages);

    float clampDistance = rel * scale;
    float delta = clampDistance - _prevDistance;
    _prevDistance = clampDistance;
    return ::g::Fuse::Navigation::UpdateSeekArgs::New1(delta, clampDistance, scale, ElapsedTime());
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) [instance] :138
int32_t SwipeNavigate::Invert(int32_t sd)
{
    switch (sd)
    {
        case 1:
            return 0;
        case 0:
            return 1;
        case 3:
            return 2;
        case 2:
            return 3;
    }

    return 1;
}

// private bool get_IsHorizontal() [instance] :181
bool SwipeNavigate::IsHorizontal()
{
    return (ForwardDirection() == 1) || (ForwardDirection() == 0);
}

// public Fuse.Elements.Element get_LengthNode() [instance] :160
::g::Fuse::Elements::Element* SwipeNavigate::LengthNode()
{
    return _lengthNode;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance] :161
void SwipeNavigate::LengthNode(::g::Fuse::Elements::Element* value)
{
    _lengthNode = value;
}

// public float get_MaxPages() [instance] :173
float SwipeNavigate::MaxPages()
{
    return _maxPages;
}

// public void set_MaxPages(float value) [instance] :174
void SwipeNavigate::MaxPages(float value)
{
    _hasMaxPages = true;
    _maxPages = value;
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() [instance] :93
uObject* SwipeNavigate::Navigation()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_Navigation()");
    return uAs<uObject*>(::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(ContextParent()), ::TYPES[45/*Fuse.Navigation.ISeekableNavigation*/]);
}

// private float get_ProgressVelocity() [instance] :306
float SwipeNavigate::ProgressVelocity()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_ProgressVelocity()");
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;

    switch (SwipeDirection())
    {
        case 1:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret4), ret4).X / Scale().X;
        case 0:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret5), ret5).X / Scale().X;
        case 3:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret6), ret6).Y / Scale().Y;
        case 2:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret7), ret7).Y / Scale().Y;
    }

    return 0.0f;
}

// private float2 get_Scale() [instance] :283
::g::Uno::Float2 SwipeNavigate::Scale()
{
    uStackFrame __("Fuse.Navigation.SwipeNavigate", "get_Scale()");

    if (_lengthNode != NULL)
        return uPtr(_lengthNode)->ActualSize();

    ::g::Fuse::Elements::Element* e = uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[9/*Fuse.Elements.Element*/]);

    if (e == NULL)
        return ::g::Uno::Float2__New1(1.0f);

    return uPtr(e)->ActualSize();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() [instance] :134
int32_t SwipeNavigate::SwipeDirection()
{
    return Invert(ForwardDirection());
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) [instance] :135
void SwipeNavigate::SwipeDirection(int32_t value)
{
    ForwardDirection(Invert(value));
}

// public generated float get_VelocityThreshold() [instance] :150
float SwipeNavigate::VelocityThreshold()
{
    return _VelocityThreshold;
}

// public generated void set_VelocityThreshold(float value) [instance] :150
void SwipeNavigate::VelocityThreshold(float value)
{
    _VelocityThreshold = value;
}

// public SwipeNavigate New() [static] :196
SwipeNavigate* SwipeNavigate::New2()
{
    SwipeNavigate* obj1 = (SwipeNavigate*)uNew(SwipeNavigate_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/SwipeNavigate.uno
// ---------------------------------------------------------------------

// internal sealed class UpdateSeekArgs :12
// {
static void UpdateSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(UpdateSeekArgs, _scale), 0,
        ::g::Uno::Double_typeof(), offsetof(UpdateSeekArgs, _time), 0,
        ::g::Uno::Float_typeof(), offsetof(UpdateSeekArgs, _Delta), 0,
        ::g::Uno::Float_typeof(), offsetof(UpdateSeekArgs, _Distance), 0);
}

uType* UpdateSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.UpdateSeekArgs", options);
    type->fp_build_ = UpdateSeekArgs_build;
    return type;
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) :30
void UpdateSeekArgs__ctor__fn(UpdateSeekArgs* __this, float* delta, float* distance, float* scale, double* time)
{
    __this->ctor_(*delta, *distance, *scale, *time);
}

// public generated float get_Delta() :14
void UpdateSeekArgs__get_Delta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Delta();
}

// private generated void set_Delta(float value) :14
void UpdateSeekArgs__set_Delta_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Delta(*value);
}

// public generated float get_Distance() :15
void UpdateSeekArgs__get_Distance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// private generated void set_Distance(float value) :15
void UpdateSeekArgs__set_Distance_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Distance(*value);
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) :30
void UpdateSeekArgs__New1_fn(float* delta, float* distance, float* scale, double* time, UpdateSeekArgs** __retval)
{
    *__retval = UpdateSeekArgs::New1(*delta, *distance, *scale, *time);
}

// public float get_RelativeDelta() :19
void UpdateSeekArgs__get_RelativeDelta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDelta();
}

// public float get_RelativeDistance() :24
void UpdateSeekArgs__get_RelativeDistance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDistance();
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) [instance] :30
void UpdateSeekArgs::ctor_(float delta, float distance, float scale, double time)
{
    Delta(delta);
    Distance(distance);
    _scale = scale;
    _time = time;
}

// public generated float get_Delta() [instance] :14
float UpdateSeekArgs::Delta()
{
    return _Delta;
}

// private generated void set_Delta(float value) [instance] :14
void UpdateSeekArgs::Delta(float value)
{
    _Delta = value;
}

// public generated float get_Distance() [instance] :15
float UpdateSeekArgs::Distance()
{
    return _Distance;
}

// private generated void set_Distance(float value) [instance] :15
void UpdateSeekArgs::Distance(float value)
{
    _Distance = value;
}

// public float get_RelativeDelta() [instance] :19
float UpdateSeekArgs::RelativeDelta()
{
    return Delta() / _scale;
}

// public float get_RelativeDistance() [instance] :24
float UpdateSeekArgs::RelativeDistance()
{
    return Distance() / _scale;
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) [static] :30
UpdateSeekArgs* UpdateSeekArgs::New1(float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* obj1 = (UpdateSeekArgs*)uNew(UpdateSeekArgs_typeof());
    obj1->ctor_(delta, distance, scale, time);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/VisualNavigation.uno
// ------------------------------------------------------------------------

// public interfacemodifiers class VisualNavigation :11
// {
// static VisualNavigation() :13
static void VisualNavigation__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    VisualNavigation::ActiveIndexName_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[58/*"ActiveIndex"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[48/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::TYPES[49/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.VisualNavigation>*/], ::STRINGS[59/*"goto"*/], uDelegate::New(::TYPES[50/*Uno.Action<Fuse.Navigation.VisualNavigation, object[]>*/], (void*)VisualNavigation__gotoNode_fn))));
}

static void VisualNavigation_build(uType* type)
{
    ::STRINGS[58] = uString::Const("ActiveIndex");
    ::STRINGS[59] = uString::Const("goto");
    ::STRINGS[60] = uString::Const("Navigation.goto() : Argument must be a node object");
    ::STRINGS[61] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/VisualNavigation.uno");
    ::STRINGS[62] = uString::Const("gotoNode");
    ::TYPES[47] = ::g::Uno::Type_typeof();
    ::TYPES[48] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[49] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[50] = ::g::Uno::Action2_typeof()->MakeType(type, uObject_typeof()->Array(), NULL);
    ::TYPES[51] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::PageData_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Visual_typeof();
    ::TYPES[52] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    ::TYPES[53] = ::TYPES[13/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::TYPES[13/*Fuse.Visual*/], NULL);
    ::TYPES[54] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::TYPES[13/*Fuse.Visual*/], NULL);
    ::TYPES[55] = ::g::Fuse::Navigation::ActivePageChangedHandler_typeof();
    ::TYPES[56] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[38] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[57] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[58] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof(),
        ::g::Fuse::Navigation::PageData_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VisualNavigation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(VisualNavigation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(VisualNavigation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(VisualNavigation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface6),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(VisualNavigation_type, interface7),
        ::g::Fuse::IParentObserver_typeof(), offsetof(VisualNavigation_type, interface8),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(VisualNavigation_type, interface9));
    type->SetFields(18,
        ::g::Fuse::Navigation::NavigationState_typeof(), offsetof(VisualNavigation, _navState), 0,
        ::TYPES[51/*Uno.Collections.List<Fuse.Navigation.PageData>*/], offsetof(VisualNavigation, _pages), 0,
        ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/], offsetof(VisualNavigation, ActivePageChanged1), 0,
        ::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(VisualNavigation, HistoryChanged1), 0,
        ::TYPES[38/*Fuse.Navigation.NavigatedHandler*/], offsetof(VisualNavigation, Navigated1), 0,
        ::TYPES[57/*Fuse.Navigation.NavigationPageCountHandler*/], offsetof(VisualNavigation, PageCountChanged1), 0,
        ::TYPES[26/*Fuse.Navigation.NavigationHandler*/], offsetof(VisualNavigation, PageProgressChanged1), 0,
        ::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], offsetof(VisualNavigation, StateChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&VisualNavigation::ActiveIndexName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ActiveIndexName", 26));
    type->Reflection.SetFunctions(33,
        new uFunction("get_Active", NULL, NULL, offsetof(VisualNavigation_type, fp_get_Active), false, ::TYPES[13/*Fuse.Visual*/], 0),
        new uFunction("set_Active", NULL, NULL, offsetof(VisualNavigation_type, fp_set_Active), false, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction("get_ActiveIndex", NULL, (void*)VisualNavigation__get_ActiveIndex_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ActiveIndex", NULL, (void*)VisualNavigation__set_ActiveIndex_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ActivePage", NULL, (void*)VisualNavigation__get_ActivePage_fn, 0, false, ::TYPES[13/*Fuse.Visual*/], 0),
        new uFunction("add_ActivePageChanged", NULL, (void*)VisualNavigation__add_ActivePageChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/]),
        new uFunction("remove_ActivePageChanged", NULL, (void*)VisualNavigation__remove_ActivePageChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/]),
        new uFunction("get_CanGoBack", NULL, NULL, offsetof(VisualNavigation_type, fp_get_CanGoBack), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, NULL, offsetof(VisualNavigation_type, fp_get_CanGoForward), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("ClearHistory", NULL, (void*)VisualNavigation__ClearHistory_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GetPage", NULL, (void*)VisualNavigation__GetPage_fn, 0, false, ::TYPES[13/*Fuse.Visual*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("GetPageState", NULL, NULL, offsetof(VisualNavigation_type, fp_GetPageState), false, ::g::Fuse::Navigation::NavigationPageState_typeof(), 1, ::TYPES[13/*Fuse.Visual*/]),
        new uFunction("GoBack", NULL, NULL, offsetof(VisualNavigation_type, fp_GoBack), false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, NULL, offsetof(VisualNavigation_type, fp_GoForward), false, uVoid_typeof(), 0),
        new uFunction("Goto", NULL, NULL, offsetof(VisualNavigation_type, fp_Goto), false, uVoid_typeof(), 2, ::TYPES[13/*Fuse.Visual*/], ::g::Fuse::Navigation::NavigationGotoMode_typeof()),
        new uFunction("add_HistoryChanged", NULL, (void*)VisualNavigation__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/]),
        new uFunction("remove_HistoryChanged", NULL, (void*)VisualNavigation__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/]),
        new uFunction("add_Navigated", NULL, (void*)VisualNavigation__add_Navigated_fn, 0, false, uVoid_typeof(), 1, ::TYPES[38/*Fuse.Navigation.NavigatedHandler*/]),
        new uFunction("remove_Navigated", NULL, (void*)VisualNavigation__remove_Navigated_fn, 0, false, uVoid_typeof(), 1, ::TYPES[38/*Fuse.Navigation.NavigatedHandler*/]),
        new uFunction("OnChildAddedWhileRooted", NULL, NULL, offsetof(VisualNavigation_type, fp_OnChildAddedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("OnChildMovedWhileRooted", NULL, (void*)VisualNavigation__OnChildMovedWhileRooted_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("OnChildRemovedWhileRooted", NULL, NULL, offsetof(VisualNavigation_type, fp_OnChildRemovedWhileRooted), false, uVoid_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("get_PageCount", NULL, (void*)VisualNavigation__get_PageCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_PageCountChanged", NULL, (void*)VisualNavigation__add_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[57/*Fuse.Navigation.NavigationPageCountHandler*/]),
        new uFunction("remove_PageCountChanged", NULL, (void*)VisualNavigation__remove_PageCountChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[57/*Fuse.Navigation.NavigationPageCountHandler*/]),
        new uFunction("get_PageProgress", NULL, NULL, offsetof(VisualNavigation_type, fp_get_PageProgress), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_PageProgressChanged", NULL, (void*)VisualNavigation__add_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]),
        new uFunction("remove_PageProgressChanged", NULL, (void*)VisualNavigation__remove_PageProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]),
        new uFunction("SetActiveIndex", NULL, (void*)VisualNavigation__SetActiveIndex_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_State", NULL, (void*)VisualNavigation__get_State_fn, 0, false, ::g::Fuse::Navigation::NavigationState_typeof(), 0),
        new uFunction("add_StateChanged", NULL, (void*)VisualNavigation__add_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]),
        new uFunction("remove_StateChanged", NULL, (void*)VisualNavigation__remove_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]),
        new uFunction("Toggle", NULL, NULL, offsetof(VisualNavigation_type, fp_Toggle), false, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Visual*/]));
}

VisualNavigation_type* VisualNavigation_typeof()
{
    static uSStrong<VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 10;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(VisualNavigation);
    options.TypeSize = sizeof(VisualNavigation_type);
    type = (VisualNavigation_type*)uClassType::New("Fuse.Navigation.VisualNavigation", options);
    type->fp_build_ = VisualNavigation_build;
    type->fp_cctor_ = VisualNavigation__cctor_1_fn;
    type->fp_get_CanGoBack = VisualNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = VisualNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = VisualNavigation__GetPageState_fn;
    type->fp_GoBack = VisualNavigation__GoBack_fn;
    type->fp_GoForward = VisualNavigation__GoForward_fn;
    type->fp_OnChildAddedWhileRooted = VisualNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnUnrooted_fn;
    type->fp_Toggle = VisualNavigation__Toggle_fn;
    type->interface7.fp_GetPage = (void(*)(uObject*, int32_t*, ::g::Fuse::Visual**))VisualNavigation__GetPage_fn;
    type->interface7.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))VisualNavigation__GetPageState_fn;
    type->interface7.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))VisualNavigation__Toggle_fn;
    type->interface7.fp_get_PageCount = (void(*)(uObject*, int32_t*))VisualNavigation__get_PageCount_fn;
    type->interface7.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))VisualNavigation__get_ActivePage_fn;
    type->interface7.fp_get_State = (void(*)(uObject*, int32_t*))VisualNavigation__get_State_fn;
    type->interface7.fp_add_PageCountChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageCountChanged_fn;
    type->interface7.fp_remove_PageCountChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageCountChanged_fn;
    type->interface7.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageProgressChanged_fn;
    type->interface7.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageProgressChanged_fn;
    type->interface7.fp_add_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__add_Navigated_fn;
    type->interface7.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_Navigated_fn;
    type->interface7.fp_add_ActivePageChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_ActivePageChanged_fn;
    type->interface7.fp_remove_ActivePageChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_ActivePageChanged_fn;
    type->interface7.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_StateChanged_fn;
    type->interface7.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_StateChanged_fn;
    type->interface8.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface8.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface8.fp_OnChildMovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildMovedWhileRooted_fn;
    type->interface9.fp_GoForward = (void(*)(uObject*))VisualNavigation__GoForward_fn;
    type->interface9.fp_GoBack = (void(*)(uObject*))VisualNavigation__GoBack_fn;
    type->interface9.fp_get_CanGoBack = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoBack_fn;
    type->interface9.fp_get_CanGoForward = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoForward_fn;
    type->interface9.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_HistoryChanged_fn;
    type->interface9.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_HistoryChanged_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal VisualNavigation() :33
void VisualNavigation__ctor_3_fn(VisualNavigation* __this)
{
    __this->ctor_3();
}

// public int get_ActiveIndex() :240
void VisualNavigation__get_ActiveIndex_fn(VisualNavigation* __this, int32_t* __retval)
{
    *__retval = __this->ActiveIndex();
}

// public void set_ActiveIndex(int value) :245
void VisualNavigation__set_ActiveIndex_fn(VisualNavigation* __this, int32_t* value)
{
    __this->ActiveIndex(*value);
}

// public Fuse.Visual get_ActivePage() :214
void VisualNavigation__get_ActivePage_fn(VisualNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->ActivePage();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :101
void VisualNavigation__add_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_ActivePageChanged(value);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :101
void VisualNavigation__remove_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_ActivePageChanged(value);
}

// public virtual bool get_CanGoBack() :125
void VisualNavigation__get_CanGoBack_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual bool get_CanGoForward() :126
void VisualNavigation__get_CanGoForward_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public void ClearHistory() :127
void VisualNavigation__ClearHistory_fn(VisualNavigation* __this)
{
    __this->ClearHistory();
}

// public Fuse.Visual GetPage(int index) :207
void VisualNavigation__GetPage_fn(VisualNavigation* __this, int32_t* index, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->GetPage(*index);
}

// internal Fuse.Navigation.PageData GetPageData(Fuse.Visual page) :134
void VisualNavigation__GetPageData_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::PageData** __retval)
{
    *__retval = __this->GetPageData(page);
}

// protected int GetPageIndex(Fuse.Visual child) :221
void VisualNavigation__GetPageIndex_fn(VisualNavigation* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    *__retval = __this->GetPageIndex(child);
}

// public virtual Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :40
void VisualNavigation__GetPageState_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageState(Fuse.Visual)");
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    ::g::Fuse::Navigation::PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
    {
        collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
        collection1.Progress = 0.0f;
        collection1.PreviousProgress = 0.0f;
        return *__retval = collection1, void();
    }

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = uPtr(pd)->Progress;
    collection2.PreviousProgress = uPtr(pd)->PreviousProgress;
    return *__retval = collection2, void();
}

// public virtual void GoBack() :124
void VisualNavigation__GoBack_fn(VisualNavigation* __this)
{
}

// public virtual void GoForward() :123
void VisualNavigation__GoForward_fn(VisualNavigation* __this)
{
}

// private static void gotoNode(Fuse.Navigation.VisualNavigation nav, object[] args) :26
void VisualNavigation__gotoNode_fn(VisualNavigation* nav, uArray* args)
{
    VisualNavigation::gotoNode(nav, args);
}

// protected bool get_HasPages() :218
void VisualNavigation__get_HasPages_fn(VisualNavigation* __this, bool* __retval)
{
    *__retval = __this->HasPages();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :115
void VisualNavigation__add_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :115
void VisualNavigation__remove_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) :87
void VisualNavigation__add_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :87
void VisualNavigation__remove_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// protected void OnActiveChanged(Fuse.Visual newElement) :107
void VisualNavigation__OnActiveChanged_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnActiveChanged(newElement);
}

// public virtual void OnChildAddedWhileRooted(Fuse.Node child) :173
void VisualNavigation__OnChildAddedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnChildAddedWhileRooted(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    __this->UpdatePages();
}

// public void OnChildMovedWhileRooted(Fuse.Node child) :191
void VisualNavigation__OnChildMovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    __this->OnChildMovedWhileRooted(child);
}

// public virtual void OnChildRemovedWhileRooted(Fuse.Node child) :182
void VisualNavigation__OnChildRemovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnChildRemovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    __this->UpdatePages();
}

// protected void OnHistoryChanged() :117
void VisualNavigation__OnHistoryChanged_fn(VisualNavigation* __this)
{
    __this->OnHistoryChanged();
}

// protected void OnNavigated(Fuse.Visual newElement) :92
void VisualNavigation__OnNavigated_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnNavigated(newElement);
}

// protected void OnPageCountChanged() :68
void VisualNavigation__OnPageCountChanged_fn(VisualNavigation* __this)
{
    __this->OnPageCountChanged();
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) :81
void VisualNavigation__OnPageProgressChanged_fn(VisualNavigation* __this, double* current, double* prev, int32_t* mode)
{
    __this->OnPageProgressChanged(*current, *prev, *mode);
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) :76
void VisualNavigation__OnPageProgressChanged1_fn(VisualNavigation* __this, int32_t* mode)
{
    __this->OnPageProgressChanged1(*mode);
}

// protected override void OnRooted() :142
void VisualNavigation__OnRooted_fn(VisualNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->UpdatePages();
}

// protected void OnStateChanged(Fuse.Navigation.NavigationState newState) :58
void VisualNavigation__OnStateChanged_fn(VisualNavigation* __this, int32_t* newState)
{
    __this->OnStateChanged(*newState);
}

// protected override void OnUnrooted() :167
void VisualNavigation__OnUnrooted_fn(VisualNavigation* __this)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnUnrooted()");
    uPtr(__this->_pages)->Clear();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public int get_PageCount() :204
void VisualNavigation__get_PageCount_fn(VisualNavigation* __this, int32_t* __retval)
{
    *__retval = __this->PageCount();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :49
void VisualNavigation__add_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :49
void VisualNavigation__remove_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :74
void VisualNavigation__add_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :74
void VisualNavigation__remove_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.PageData> get_Pages() :132
void VisualNavigation__get_Pages_fn(VisualNavigation* __this, uObject** __retval)
{
    *__retval = __this->Pages();
}

// public void SetActiveIndex(int value, Uno.UX.IPropertyListener origin) :247
void VisualNavigation__SetActiveIndex_fn(VisualNavigation* __this, int32_t* value, uObject* origin)
{
    __this->SetActiveIndex(*value, origin);
}

// public Fuse.Navigation.NavigationState get_State() :54
void VisualNavigation__get_State_fn(VisualNavigation* __this, int32_t* __retval)
{
    *__retval = __this->State();
}

// public generated void add_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) :56
void VisualNavigation__add_StateChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) :56
void VisualNavigation__remove_StateChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public virtual void Toggle(Fuse.Visual page) :37
void VisualNavigation__Toggle_fn(VisualNavigation* __this, ::g::Fuse::Visual* page)
{
}

// private void UpdatePages() :148
void VisualNavigation__UpdatePages_fn(VisualNavigation* __this)
{
    __this->UpdatePages();
}

::g::Uno::UX::Selector VisualNavigation::ActiveIndexName_;

// internal VisualNavigation() [instance] :33
void VisualNavigation::ctor_3()
{
    _pages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[51/*Uno.Collections.List<Fuse.Navigation.PageData>*/]));
    ctor_2();
}

// public int get_ActiveIndex() [instance] :240
int32_t VisualNavigation::ActiveIndex()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_ActiveIndex()");
    ::g::Fuse::Navigation::PageData* pd = GetPageData(Active());
    return (pd == NULL) ? -1 : uPtr(pd)->Index;
}

// public void set_ActiveIndex(int value) [instance] :245
void VisualNavigation::ActiveIndex(int32_t value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "set_ActiveIndex(int)");
    SetActiveIndex(value, NULL);
}

// public Fuse.Visual get_ActivePage() [instance] :214
::g::Fuse::Visual* VisualNavigation::ActivePage()
{
    return Active();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :101
void VisualNavigation::add_ActivePageChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler)");
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActivePageChanged1, value), ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :101
void VisualNavigation::remove_ActivePageChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler)");
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActivePageChanged1, value), ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public void ClearHistory() [instance] :127
void VisualNavigation::ClearHistory()
{
}

// public Fuse.Visual GetPage(int index) [instance] :207
::g::Fuse::Visual* VisualNavigation::GetPage(int32_t index)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPage(int)");
    ::g::Fuse::Navigation::PageData* ret3;

    if ((index < 0) || (index >= uPtr(_pages)->Count()))
        return NULL;

    return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pages), uCRef<int32_t>(index), &ret3), ret3))->Visual();
}

// internal Fuse.Navigation.PageData GetPageData(Fuse.Visual page) [instance] :134
::g::Fuse::Navigation::PageData* VisualNavigation::GetPageData(::g::Fuse::Visual* page)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageData(Fuse.Visual)");

    if (page == NULL)
        return NULL;

    return ::g::Fuse::Navigation::PageData::Get(page);
}

// protected int GetPageIndex(Fuse.Visual child) [instance] :221
int32_t VisualNavigation::GetPageIndex(::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "GetPageIndex(Fuse.Visual)");
    ::g::Fuse::Navigation::PageData* pd = GetPageData(child);

    if (pd == NULL)
        return -1;

    return uPtr(pd)->Index;
}

// protected bool get_HasPages() [instance] :218
bool VisualNavigation::HasPages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_HasPages()");
    return uPtr(_pages)->Count() > 0;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :115
void VisualNavigation::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :115
void VisualNavigation::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :87
void VisualNavigation::add_Navigated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_Navigated(Fuse.Navigation.NavigatedHandler)");
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Navigated1, value), ::TYPES[38/*Fuse.Navigation.NavigatedHandler*/]);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :87
void VisualNavigation::remove_Navigated(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_Navigated(Fuse.Navigation.NavigatedHandler)");
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Navigated1, value), ::TYPES[38/*Fuse.Navigation.NavigatedHandler*/]);
}

// protected void OnActiveChanged(Fuse.Visual newElement) [instance] :107
void VisualNavigation::OnActiveChanged(::g::Fuse::Visual* newElement)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnActiveChanged(Fuse.Visual)");
    OnPropertyChanged(VisualNavigation::ActiveIndexName_);

    if (::g::Uno::Delegate::op_Inequality(ActivePageChanged1, NULL))
        uPtr(ActivePageChanged1)->Invoke(2, this, newElement);
}

// public void OnChildMovedWhileRooted(Fuse.Node child) [instance] :191
void VisualNavigation::OnChildMovedWhileRooted(::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnChildMovedWhileRooted(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[13/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    UpdatePages();
}

// protected void OnHistoryChanged() [instance] :117
void VisualNavigation::OnHistoryChanged()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnHistoryChanged()");

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// protected void OnNavigated(Fuse.Visual newElement) [instance] :92
void VisualNavigation::OnNavigated(::g::Fuse::Visual* newElement)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnNavigated(Fuse.Visual)");
    uDelegate* handler = Navigated1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Navigation::NavigatedArgs*)::g::Fuse::Navigation::NavigatedArgs::New2(newElement));
}

// protected void OnPageCountChanged() [instance] :68
void VisualNavigation::OnPageCountChanged()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageCountChanged()");

    if (::g::Uno::Delegate::op_Inequality(PageCountChanged1, NULL))
        uPtr(PageCountChanged1)->InvokeVoid(this);
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) [instance] :81
void VisualNavigation::OnPageProgressChanged(double current, double prev, int32_t mode)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageProgressChanged(double,double,Fuse.Navigation.NavigationMode)");

    if (::g::Uno::Delegate::op_Inequality(PageProgressChanged1, NULL))
        uPtr(PageProgressChanged1)->Invoke(2, this, (::g::Fuse::Navigation::NavigationArgs*)::g::Fuse::Navigation::NavigationArgs::New2(current, prev, mode));
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) [instance] :76
void VisualNavigation::OnPageProgressChanged1(int32_t mode)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnPageProgressChanged(Fuse.Navigation.NavigationMode)");
    OnPageProgressChanged(0.0, 0.0, mode);
}

// protected void OnStateChanged(Fuse.Navigation.NavigationState newState) [instance] :58
void VisualNavigation::OnStateChanged(int32_t newState)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "OnStateChanged(Fuse.Navigation.NavigationState)");
    ::g::Uno::UX::ValueChangedArgs* ret4;

    if (newState == _navState)
        return;

    _navState = newState;

    if (::g::Uno::Delegate::op_Inequality(StateChanged1, NULL))
        uPtr(StateChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[52/*Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState>*/], uCRef<int32_t>(newState), &ret4), ret4));
}

// public int get_PageCount() [instance] :204
int32_t VisualNavigation::PageCount()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_PageCount()");
    return uPtr(_pages)->Count();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :49
void VisualNavigation::add_PageCountChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler)");
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageCountChanged1, value), ::TYPES[57/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :49
void VisualNavigation::remove_PageCountChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler)");
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageCountChanged1, value), ::TYPES[57/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :74
void VisualNavigation::add_PageProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_PageProgressChanged(Fuse.Navigation.NavigationHandler)");
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageProgressChanged1, value), ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :74
void VisualNavigation::remove_PageProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_PageProgressChanged(Fuse.Navigation.NavigationHandler)");
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageProgressChanged1, value), ::TYPES[26/*Fuse.Navigation.NavigationHandler*/]);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.PageData> get_Pages() [instance] :132
uObject* VisualNavigation::Pages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "get_Pages()");
    return (uObject*)_pages;
}

// public void SetActiveIndex(int value, Uno.UX.IPropertyListener origin) [instance] :247
void VisualNavigation::SetActiveIndex(int32_t value, uObject* origin)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "SetActiveIndex(int,Uno.UX.IPropertyListener)");

    if (value == ActiveIndex())
        return;

    Active(GetPage(value));
}

// public Fuse.Navigation.NavigationState get_State() [instance] :54
int32_t VisualNavigation::State()
{
    return _navState;
}

// public generated void add_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) [instance] :56
void VisualNavigation::add_StateChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "add_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]);
}

// public generated void remove_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) [instance] :56
void VisualNavigation::remove_StateChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "remove_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]);
}

// private void UpdatePages() [instance] :148
void VisualNavigation::UpdatePages()
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "UpdatePages()");
    uPtr(_pages)->Clear();
    int32_t c = 0;

    for (::g::Fuse::Visual* x = (::g::Fuse::Visual*)uPtr(Parent())->FirstChild(::TYPES[53/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); x != NULL; x = (::g::Fuse::Visual*)uPtr(x)->NextSibling(::TYPES[54/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!::g::Fuse::Navigation::Navigation::IsPage(x))
            continue;

        ::g::Fuse::Navigation::PageData* pd = ::g::Fuse::Navigation::PageData::GetOrCreate(x, true);
        uPtr(pd)->Index = c;
        ::g::Uno::Collections::List__Add_fn(uPtr(_pages), pd);
        c++;
    }

    OnPageCountChanged();
}

// private static void gotoNode(Fuse.Navigation.VisualNavigation nav, object[] args) [static] :26
void VisualNavigation::gotoNode(VisualNavigation* nav, uArray* args)
{
    uStackFrame __("Fuse.Navigation.VisualNavigation", "gotoNode(Fuse.Navigation.VisualNavigation,object[])");
    VisualNavigation_typeof()->Init();
    ::g::Fuse::Visual* target = uAs< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[13/*Fuse.Visual*/]);

    if (target != NULL)
        uPtr(nav)->Goto(target, 0);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[60/*"Navigation....*/], nav, ::STRINGS[61/*"/usr/local/...*/], 30, ::STRINGS[62/*"gotoNode"*/], NULL);
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileActive :137
// {
static void WhileActive_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface8));
    type->SetFields(45);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileActive__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileActive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileActive", options);
    type->fp_build_ = WhileActive_build;
    type->fp_ctor_ = (void*)WhileActive__New2_fn;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileActive__MapProgress_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileActive() :137
void WhileActive__ctor_7_fn(WhileActive* __this)
{
    __this->ctor_7();
}

// internal override sealed double MapProgress(double progress) :139
void WhileActive__MapProgress_fn(WhileActive* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(progress_)), void();
}

// public generated WhileActive New() :137
void WhileActive__New2_fn(WhileActive** __retval)
{
    *__retval = WhileActive::New2();
}

// public generated WhileActive() [instance] :137
void WhileActive::ctor_7()
{
    ctor_6();
}

// public generated WhileActive New() [static] :137
WhileActive* WhileActive::New2()
{
    WhileActive* obj1 = (WhileActive*)uNew(WhileActive_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileCanGoBack.uno
// ----------------------------------------------------------------------

// public sealed class WhileCanGoBack :57
// {
static void WhileCanGoBack_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface8));
    type->SetFields(42);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoBack__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileCanGoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoBack", options);
    type->fp_build_ = WhileCanGoBack_build;
    type->fp_ctor_ = (void*)WhileCanGoBack__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoBack__get_IsOn_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCanGoBack() :57
void WhileCanGoBack__ctor_7_fn(WhileCanGoBack* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsOn() :59
void WhileCanGoBack__get_IsOn_fn(WhileCanGoBack* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.WhileCanGoBack", "get_IsOn()");
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(__this->_context), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoBack New() :57
void WhileCanGoBack__New2_fn(WhileCanGoBack** __retval)
{
    *__retval = WhileCanGoBack::New2();
}

// public generated WhileCanGoBack() [instance] :57
void WhileCanGoBack::ctor_7()
{
    ctor_6();
}

// public generated WhileCanGoBack New() [static] :57
WhileCanGoBack* WhileCanGoBack::New2()
{
    WhileCanGoBack* obj1 = (WhileCanGoBack*)uNew(WhileCanGoBack_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileCanGoBack.uno
// ----------------------------------------------------------------------

// public sealed class WhileCanGoForward :71
// {
static void WhileCanGoForward_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileHistoryTrigger_type, interface8));
    type->SetFields(42);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileCanGoForward__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileHistoryTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileCanGoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileHistoryTrigger_type);
    type = (::g::Fuse::Navigation::WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileCanGoForward", options);
    type->fp_build_ = WhileCanGoForward_build;
    type->fp_ctor_ = (void*)WhileCanGoForward__New2_fn;
    type->fp_get_IsOn = (void(*)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*))WhileCanGoForward__get_IsOn_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCanGoForward() :71
void WhileCanGoForward__ctor_7_fn(WhileCanGoForward* __this)
{
    __this->ctor_7();
}

// protected override sealed bool get_IsOn() :73
void WhileCanGoForward__get_IsOn_fn(WhileCanGoForward* __this, bool* __retval)
{
    uStackFrame __("Fuse.Navigation.WhileCanGoForward", "get_IsOn()");
    return *__retval = ::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(__this->_context), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/])), void();
}

// public generated WhileCanGoForward New() :71
void WhileCanGoForward__New2_fn(WhileCanGoForward** __retval)
{
    *__retval = WhileCanGoForward::New2();
}

// public generated WhileCanGoForward() [instance] :71
void WhileCanGoForward::ctor_7()
{
    ctor_6();
}

// public generated WhileCanGoForward New() [static] :71
WhileCanGoForward* WhileCanGoForward::New2()
{
    WhileCanGoForward* obj1 = (WhileCanGoForward*)uNew(WhileCanGoForward_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileCanGoBack.uno
// ----------------------------------------------------------------------

// public abstract class WhileHistoryTrigger :11
// {
static void WhileHistoryTrigger_build(uType* type)
{
    ::STRINGS[63] = uString::Const("WhileHistoryTrigger requires a Navigation context");
    ::STRINGS[64] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileCanGoBack.uno");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::TYPES[18] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[56] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileHistoryTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileHistoryTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileHistoryTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileHistoryTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileHistoryTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileHistoryTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileHistoryTrigger_type, interface8));
    type->SetFields(40,
        ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/], offsetof(WhileHistoryTrigger, _context), 0,
        ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/], offsetof(WhileHistoryTrigger, _NavigationContext), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_NavigationContext", NULL, (void*)WhileHistoryTrigger__get_NavigationContext_fn, 0, false, ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/], 0),
        new uFunction("set_NavigationContext", NULL, (void*)WhileHistoryTrigger__set_NavigationContext_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]));
}

WhileHistoryTrigger_type* WhileHistoryTrigger_typeof()
{
    static uSStrong<WhileHistoryTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileHistoryTrigger);
    options.TypeSize = sizeof(WhileHistoryTrigger_type);
    type = (WhileHistoryTrigger_type*)uClassType::New("Fuse.Navigation.WhileHistoryTrigger", options);
    type->fp_build_ = WhileHistoryTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileHistoryTrigger__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected generated WhileHistoryTrigger() :11
void WhileHistoryTrigger__ctor_6_fn(WhileHistoryTrigger* __this)
{
    __this->ctor_6();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() :14
void WhileHistoryTrigger__get_NavigationContext_fn(WhileHistoryTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :14
void WhileHistoryTrigger__set_NavigationContext_fn(WhileHistoryTrigger* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// private void OnHistoryChanged(object sender) :40
void WhileHistoryTrigger__OnHistoryChanged_fn(WhileHistoryTrigger* __this, uObject* sender)
{
    __this->OnHistoryChanged(sender);
}

// protected override sealed void OnRooted() :16
void WhileHistoryTrigger__OnRooted_fn(WhileHistoryTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "OnRooted()");
    uObject* ind1;
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_context = (ind1 = __this->NavigationContext(), ((ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(__this->Parent())));

    if (__this->_context == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[63/*"WhileHistor...*/], __this, ::STRINGS[64/*"/usr/local/...*/], 23, ::STRINGS[10/*"OnRooted"*/], NULL);
        return;
    }

    __this->SetActive(__this->IsOn());
    ::g::Fuse::Navigation::IBaseNavigation::add_HistoryChanged(uInterface(uPtr(__this->_context), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
}

// protected override sealed void OnUnrooted() :30
void WhileHistoryTrigger__OnUnrooted_fn(WhileHistoryTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileHistoryTrigger", "OnUnrooted()");

    if (__this->_context != NULL)
    {
        ::g::Fuse::Navigation::IBaseNavigation::remove_HistoryChanged(uInterface(uPtr(__this->_context), ::TYPES[18/*Fuse.Navigation.IBaseNavigation*/]), uDelegate::New(::TYPES[56/*Fuse.Navigation.HistoryChangedHandler*/], (void*)WhileHistoryTrigger__OnHistoryChanged_fn, __this));
        __this->_context = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected generated WhileHistoryTrigger() [instance] :11
void WhileHistoryTrigger::ctor_6()
{
    ctor_5();
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :14
uObject* WhileHistoryTrigger::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :14
void WhileHistoryTrigger::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}

// private void OnHistoryChanged(object sender) [instance] :40
void WhileHistoryTrigger::OnHistoryChanged(uObject* sender)
{
    SetActive(IsOn());
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileInactive :168
// {
static void WhileInactive_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface8));
    type->SetFields(45);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInactive__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileInactive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInactive", options);
    type->fp_build_ = WhileInactive_build;
    type->fp_ctor_ = (void*)WhileInactive__New2_fn;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileInactive__MapProgress_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileInactive() :168
void WhileInactive__ctor_7_fn(WhileInactive* __this)
{
    __this->ctor_7();
}

// internal override sealed double MapProgress(double progress) :170
void WhileInactive__MapProgress_fn(WhileInactive* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = ::g::Uno::Math::Abs(progress_), void();
}

// public generated WhileInactive New() :168
void WhileInactive__New2_fn(WhileInactive** __retval)
{
    *__retval = WhileInactive::New2();
}

// public generated WhileInactive() [instance] :168
void WhileInactive::ctor_7()
{
    ctor_6();
}

// public generated WhileInactive New() [static] :168
WhileInactive* WhileInactive::New2()
{
    WhileInactive* obj1 = (WhileInactive*)uNew(WhileInactive_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileInEnterState :194
// {
static void WhileInEnterState_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface8));
    type->SetFields(45);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInEnterState__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileInEnterState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInEnterState", options);
    type->fp_build_ = WhileInEnterState_build;
    type->fp_ctor_ = (void*)WhileInEnterState__New2_fn;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileInEnterState__MapProgress_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileInEnterState() :194
void WhileInEnterState__ctor_7_fn(WhileInEnterState* __this)
{
    __this->ctor_7();
}

// internal override sealed double MapProgress(double progress) :196
void WhileInEnterState__MapProgress_fn(WhileInEnterState* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = progress_, void();
}

// public generated WhileInEnterState New() :194
void WhileInEnterState__New2_fn(WhileInEnterState** __retval)
{
    *__retval = WhileInEnterState::New2();
}

// public generated WhileInEnterState() [instance] :194
void WhileInEnterState::ctor_7()
{
    ctor_6();
}

// public generated WhileInEnterState New() [static] :194
WhileInEnterState* WhileInEnterState::New2()
{
    WhileInEnterState* obj1 = (WhileInEnterState*)uNew(WhileInEnterState_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public sealed class WhileInExitState :181
// {
static void WhileInExitState_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface8));
    type->SetFields(45);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileInExitState__New2_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileInExitState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInExitState", options);
    type->fp_build_ = WhileInExitState_build;
    type->fp_ctor_ = (void*)WhileInExitState__New2_fn;
    type->fp_MapProgress = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, double*, double*))WhileInExitState__MapProgress_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileInExitState() :181
void WhileInExitState__ctor_7_fn(WhileInExitState* __this)
{
    __this->ctor_7();
}

// internal override sealed double MapProgress(double progress) :183
void WhileInExitState__MapProgress_fn(WhileInExitState* __this, double* progress, double* __retval)
{
    double progress_ = *progress;
    return *__retval = -progress_, void();
}

// public generated WhileInExitState New() :181
void WhileInExitState__New2_fn(WhileInExitState** __retval)
{
    *__retval = WhileInExitState::New2();
}

// public generated WhileInExitState() [instance] :181
void WhileInExitState::ctor_7()
{
    ctor_6();
}

// public generated WhileInExitState New() [static] :181
WhileInExitState* WhileInExitState::New2()
{
    WhileInExitState* obj1 = (WhileInExitState*)uNew(WhileInExitState_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileNavigating.uno
// -----------------------------------------------------------------------

// public class WhileNavigating :31
// {
static void WhileNavigating_build(uType* type)
{
    ::STRINGS[65] = uString::Const("WhileNavigating requires a Navigation context");
    ::STRINGS[66] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileNavigating.uno");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[58] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::TYPES[2/*Fuse.Navigation.INavigation*/], offsetof(WhileNavigating, _context), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNavigating__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileNavigating);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Navigation.WhileNavigating", options);
    type->fp_build_ = WhileNavigating_build;
    type->fp_ctor_ = (void*)WhileNavigating__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileNavigating() :31
void WhileNavigating__ctor_6_fn(WhileNavigating* __this)
{
    __this->ctor_6();
}

// public generated WhileNavigating New() :31
void WhileNavigating__New2_fn(WhileNavigating** __retval)
{
    *__retval = WhileNavigating::New2();
}

// protected override sealed void OnRooted() :35
void WhileNavigating__OnRooted_fn(WhileNavigating* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_context = ::g::Fuse::Navigation::Navigation::TryFind(__this->Parent());

    if (__this->_context == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[65/*"WhileNaviga...*/], __this, ::STRINGS[66/*"/usr/local/...*/], 41, ::STRINGS[10/*"OnRooted"*/], NULL);
        return;
    }

    ::g::Fuse::Navigation::INavigation::add_StateChanged(uInterface(uPtr(__this->_context), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)WhileNavigating__OnStateChanged_fn, __this));
    __this->SetActive(::g::Fuse::Navigation::INavigation::State(uInterface(uPtr(__this->_context), ::TYPES[2/*Fuse.Navigation.INavigation*/])) != 0);
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> args) :59
void WhileNavigating__OnStateChanged_fn(WhileNavigating* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnStateChanged(s, args);
}

// protected override sealed void OnUnrooted() :49
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnUnrooted()");

    if (__this->_context != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_StateChanged(uInterface(uPtr(__this->_context), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[58/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)WhileNavigating__OnStateChanged_fn, __this));
        __this->_context = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileNavigating() [instance] :31
void WhileNavigating::ctor_6()
{
    ctor_5();
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> args) [instance] :59
void WhileNavigating::OnStateChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Navigation.WhileNavigating", "OnStateChanged(object,Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState>)");
    int32_t ret2;
    SetActive((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2) != 0);
}

// public generated WhileNavigating New() [static] :31
WhileNavigating* WhileNavigating::New2()
{
    WhileNavigating* obj1 = (WhileNavigating*)uNew(WhileNavigating_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhileNavigationTriggers.uno
// -------------------------------------------------------------------------------

// public abstract class WhileNavigationTrigger :22
// {
static void WhileNavigationTrigger_build(uType* type)
{
    ::TYPES[59] = ::g::Fuse::Navigation::RoutePageProxy__ProgressUpdated_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileNavigationTrigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileNavigationTrigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileNavigationTrigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileNavigationTrigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileNavigationTrigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileNavigationTrigger_type, interface8));
    type->SetFields(40,
        ::g::Uno::Float_typeof(), offsetof(WhileNavigationTrigger, _threshold), 0,
        ::g::Uno::Float_typeof(), offsetof(WhileNavigationTrigger, _limit), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhileNavigationTrigger, _hasLimit), 0,
        ::g::Fuse::Navigation::RoutePagePath_typeof(), offsetof(WhileNavigationTrigger, _path), 0,
        ::g::Fuse::Navigation::RoutePageProxy_typeof(), offsetof(WhileNavigationTrigger, _proxy), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Limit", NULL, (void*)WhileNavigationTrigger__get_Limit_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Limit", NULL, (void*)WhileNavigationTrigger__set_Limit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Path", NULL, (void*)WhileNavigationTrigger__get_Path_fn, 0, false, ::g::Fuse::Navigation::RoutePagePath_typeof(), 0),
        new uFunction("set_Path", NULL, (void*)WhileNavigationTrigger__set_Path_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::RoutePagePath_typeof()),
        new uFunction("get_Threshold", NULL, (void*)WhileNavigationTrigger__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)WhileNavigationTrigger__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof()
{
    static uSStrong<WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileNavigationTrigger);
    options.TypeSize = sizeof(WhileNavigationTrigger_type);
    type = (WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileNavigationTrigger", options);
    type->fp_build_ = WhileNavigationTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal WhileNavigationTrigger() :24
void WhileNavigationTrigger__ctor_6_fn(WhileNavigationTrigger* __this)
{
    __this->ctor_6();
}

// public float get_Limit() :60
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(float value) :61
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Limit(*value);
}

// protected override sealed void OnRooted() :87
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::RoutePageProxy::New2(__this->Parent(), uDelegate::New(::TYPES[59/*Fuse.Navigation.RoutePageProxy.ProgressUpdated*/], (void*)WhileNavigationTrigger__ProgressUpdated_fn, __this));
    uPtr(__this->_proxy)->Path(__this->Path());
    uPtr(__this->_proxy)->Init();
}

// protected override sealed void OnUnrooted() :95
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "OnUnrooted()");
    uPtr(__this->_proxy)->Dispose();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public Fuse.Navigation.RoutePagePath get_Path() :76
void WhileNavigationTrigger__get_Path_fn(WhileNavigationTrigger* __this, int32_t* __retval)
{
    *__retval = __this->Path();
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) :77
void WhileNavigationTrigger__set_Path_fn(WhileNavigationTrigger* __this, int32_t* value)
{
    __this->Path(*value);
}

// private void ProgressUpdated(double progress) :102
void WhileNavigationTrigger__ProgressUpdated_fn(WhileNavigationTrigger* __this, double* progress)
{
    __this->ProgressUpdated(*progress);
}

// public float get_Threshold() :49
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value) :50
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Threshold(*value);
}

// internal WhileNavigationTrigger() [instance] :24
void WhileNavigationTrigger::ctor_6()
{
    _threshold = 1.0f;
    _path = 1;
    ctor_5();
}

// public float get_Limit() [instance] :60
float WhileNavigationTrigger::Limit()
{
    return _limit;
}

// public void set_Limit(float value) [instance] :61
void WhileNavigationTrigger::Limit(float value)
{
    _limit = value;
    _hasLimit = true;
}

// public Fuse.Navigation.RoutePagePath get_Path() [instance] :76
int32_t WhileNavigationTrigger::Path()
{
    return _path;
}

// public void set_Path(Fuse.Navigation.RoutePagePath value) [instance] :77
void WhileNavigationTrigger::Path(int32_t value)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "set_Path(Fuse.Navigation.RoutePagePath)");
    _path = value;

    if (_proxy != NULL)
        uPtr(_proxy)->Path(value);
}

// private void ProgressUpdated(double progress) [instance] :102
void WhileNavigationTrigger::ProgressUpdated(double progress)
{
    uStackFrame __("Fuse.Navigation.WhileNavigationTrigger", "ProgressUpdated(double)");
    progress = MapProgress(progress);
    bool set = progress >= (double)Threshold();

    if (_hasLimit)
        set = set && (progress <= (double)Limit());

    SetActive(set);
}

// public float get_Threshold() [instance] :49
float WhileNavigationTrigger::Threshold()
{
    return _threshold;
}

// public void set_Threshold(float value) [instance] :50
void WhileNavigationTrigger::Threshold(float value)
{
    _threshold = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhilePageActive.uno
// -----------------------------------------------------------------------

// public sealed class WhilePageActive :12
// {
static void WhilePageActive_build(uType* type)
{
    ::STRINGS[67] = uString::Const("Must be used within a navigation context");
    ::STRINGS[68] = uString::Const("/usr/local/share/uno/Packages/Fuse.Navigation/1.9.0/WhilePageActive.uno");
    ::STRINGS[10] = uString::Const("OnRooted");
    ::TYPES[2] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[26] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Navigation::Navigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(40,
        ::TYPES[2/*Fuse.Navigation.INavigation*/], offsetof(WhilePageActive, _navigation), 0,
        ::g::Uno::Float_typeof(), offsetof(WhilePageActive, _threshold), 0,
        ::g::Uno::Float_typeof(), offsetof(WhilePageActive, _limit), 0,
        ::g::Uno::Bool_typeof(), offsetof(WhilePageActive, _hasLimit), 0,
        ::g::Uno::String_typeof(), offsetof(WhilePageActive, _nameEquals), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Limit", NULL, (void*)WhilePageActive__get_Limit_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Limit", NULL, (void*)WhilePageActive__set_Limit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_NameEquals", NULL, (void*)WhilePageActive__get_NameEquals_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_NameEquals", NULL, (void*)WhilePageActive__set_NameEquals_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)WhilePageActive__New2_fn, 0, true, type, 0),
        new uFunction("get_Threshold", NULL, (void*)WhilePageActive__get_Threshold_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Threshold", NULL, (void*)WhilePageActive__set_Threshold_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Triggers::Trigger_type* WhilePageActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(WhilePageActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Navigation.WhilePageActive", options);
    type->fp_build_ = WhilePageActive_build;
    type->fp_ctor_ = (void*)WhilePageActive__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhilePageActive__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhilePageActive__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhilePageActive() :12
void WhilePageActive__ctor_6_fn(WhilePageActive* __this)
{
    __this->ctor_6();
}

// public float get_Limit() :35
void WhilePageActive__get_Limit_fn(WhilePageActive* __this, float* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(float value) :36
void WhilePageActive__set_Limit_fn(WhilePageActive* __this, float* value)
{
    __this->Limit(*value);
}

// public string get_NameEquals() :51
void WhilePageActive__get_NameEquals_fn(WhilePageActive* __this, uString** __retval)
{
    *__retval = __this->NameEquals();
}

// public void set_NameEquals(string value) :52
void WhilePageActive__set_NameEquals_fn(WhilePageActive* __this, uString* value)
{
    __this->NameEquals(value);
}

// public generated WhilePageActive New() :12
void WhilePageActive__New2_fn(WhilePageActive** __retval)
{
    *__retval = WhilePageActive::New2();
}

// protected override sealed void OnRooted() :55
void WhilePageActive__OnRooted_fn(WhilePageActive* __this)
{
    uStackFrame __("Fuse.Navigation.WhilePageActive", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_navigation = ::g::Fuse::Navigation::Navigation::TryFind(__this->Parent());

    if (__this->_navigation == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[67/*"Must be use...*/], __this, ::STRINGS[68/*"/usr/local/...*/], 61, ::STRINGS[10/*"OnRooted"*/], NULL);
        return;
    }

    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(__this->_navigation), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], (void*)WhilePageActive__OnStateChanged_fn, __this));
    __this->Update();
}

// private void OnStateChanged(object sender, Fuse.Navigation.NavigationArgs args) :79
void WhilePageActive__OnStateChanged_fn(WhilePageActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args)
{
    __this->OnStateChanged(sender, args);
}

// protected override sealed void OnUnrooted() :69
void WhilePageActive__OnUnrooted_fn(WhilePageActive* __this)
{
    uStackFrame __("Fuse.Navigation.WhilePageActive", "OnUnrooted()");
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);

    if (__this->_navigation != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(__this->_navigation), ::TYPES[2/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[26/*Fuse.Navigation.NavigationHandler*/], (void*)WhilePageActive__OnStateChanged_fn, __this));
        __this->_navigation = NULL;
    }
}

// public float get_Threshold() :24
void WhilePageActive__get_Threshold_fn(WhilePageActive* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value) :25
void WhilePageActive__set_Threshold_fn(WhilePageActive* __this, float* value)
{
    __this->Threshold(*value);
}

// private void Update() :84
void WhilePageActive__Update_fn(WhilePageActive* __this)
{
    __this->Update();
}

// public generated WhilePageActive() [instance] :12
void WhilePageActive::ctor_6()
{
    _threshold = 1.0f;
    ctor_5();
}

// public float get_Limit() [instance] :35
float WhilePageActive::Limit()
{
    return _limit;
}

// public void set_Limit(float value) [instance] :36
void WhilePageActive::Limit(float value)
{
    _limit = value;
    _hasLimit = true;
}

// public string get_NameEquals() [instance] :51
uString* WhilePageActive::NameEquals()
{
    return _nameEquals;
}

// public void set_NameEquals(string value) [instance] :52
void WhilePageActive::NameEquals(uString* value)
{
    _nameEquals = value;
}

// private void OnStateChanged(object sender, Fuse.Navigation.NavigationArgs args) [instance] :79
void WhilePageActive::OnStateChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* args)
{
    uStackFrame __("Fuse.Navigation.WhilePageActive", "OnStateChanged(object,Fuse.Navigation.NavigationArgs)");
    Update();
}

// public float get_Threshold() [instance] :24
float WhilePageActive::Threshold()
{
    return _threshold;
}

// public void set_Threshold(float value) [instance] :25
void WhilePageActive::Threshold(float value)
{
    _threshold = value;
}

// private void Update() [instance] :84
void WhilePageActive::Update()
{
    uStackFrame __("Fuse.Navigation.WhilePageActive", "Update()");
    ::g::Fuse::Visual* active = ::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_navigation), ::TYPES[2/*Fuse.Navigation.INavigation*/]));

    if (active == NULL)
    {
        SetActive(false);
        return;
    }

    float progress = 1.0f - ::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(_navigation), ::TYPES[2/*Fuse.Navigation.INavigation*/]), active).Progress);
    bool set = progress >= Threshold();

    if (_hasLimit)
        set = set && (progress <= Limit());

    if (::g::Uno::String::op_Inequality(NameEquals(), NULL))
        set = set && ::g::Uno::String::op_Equality(::g::Uno::UX::Selector__op_Implicit2(uPtr(active)->Name()), NameEquals());

    SetActive(set);
}

// public generated WhilePageActive New() [static] :12
WhilePageActive* WhilePageActive::New2()
{
    WhilePageActive* obj1 = (WhilePageActive*)uNew(WhilePageActive_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}} // ::g::Fuse::Navigation
