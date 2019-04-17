// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/push.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DreamPluspopup_FuseControlsTextInputControl_Value_Property.h>
#include <_root.DreamPluspopup_FuseElementsElement_Opacity_Property.h>
#include <_root.DreamPluspopup_FuseElementsElement_Visibility_Property.h>
#include <_root.DreamPluspopup_FuseReactiveEach_Items_Property.h>
#include <_root.DreamPluspopup_FuseTriggersWhileBool_Value_Property.h>
#include <_root.push.h>
#include <_root.push.Template.h>
#include <_root.push.Template1.h>
#include <_root.push.Template2.h>
#include <_root.push.Template3.h>
#include <_root.push.Template4.h>
#include <_root.push.Template5.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TopFrameBackground.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.GridChildOrder.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileFalse.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class push :2
// {
// static push() :301
static void push__cctor_4_fn(uType* __type)
{
    push::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    push::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    push::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    push::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Visibility"));
    push::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("year"));
    push::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("yearheader"));
    push::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropyear"));
    push::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("month"));
    push::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("monthheader"));
    push::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropmonth"));
    push::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("date"));
    push::__selector11_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dateheader"));
    push::__selector12_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropdate"));
    push::__selector13_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("day"));
    push::__selector14_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dayheader"));
    push::__selector15_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropday"));
    push::__selector16_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("hour"));
    push::__selector17_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("hourheader"));
    push::__selector18_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("drophour"));
    push::__selector19_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("minute"));
    push::__selector20_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("minuteheader"));
    push::__selector21_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("dropminute"));
}

static void push_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(push, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(push, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(push, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(push, dropyear_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(push, dropyear_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(push, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(push, temp3_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(push, dropmonth_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(push, dropmonth_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(push, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(push, temp5_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(push, dropdate_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(push, dropdate_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(push, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(push, temp7_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(push, dropday_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(push, dropday_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(push, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(push, temp9_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(push, drophour_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(push, drophour_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(push, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(push, temp11_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(push, dropminute_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(push, dropminute_Visibility_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(push, temp12_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push, temp_eb11), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, year), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, yearheader), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push, temp_eb12), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, dropyear), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, month), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, monthheader), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push, temp_eb14), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, dropmonth), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, date), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, dateheader), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push, temp_eb16), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, dropdate), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, day), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, dayheader), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push, temp_eb18), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, dropday), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, hour), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, hourheader), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push, temp_eb20), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, drophour), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, minute), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, minuteheader), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push, temp_eb22), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(push, dropminute), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push::__selector21_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)push__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* push_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 199;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(push);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("push", options);
    type->fp_build_ = push_build;
    type->fp_cctor_ = push__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public push(Fuse.Navigation.Router router) :305
void push__ctor_8_fn(push* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :311
void push__InitializeUX_fn(push* __this)
{
    __this->InitializeUX();
}

// public push New(Fuse.Navigation.Router router) :305
void push__New5_fn(::g::Fuse::Navigation::Router* router1, push** __retval)
{
    *__retval = push::New5(router1);
}

::g::Uno::UX::Selector push::__selector0_;
::g::Uno::UX::Selector push::__selector1_;
::g::Uno::UX::Selector push::__selector2_;
::g::Uno::UX::Selector push::__selector3_;
::g::Uno::UX::Selector push::__selector4_;
::g::Uno::UX::Selector push::__selector5_;
::g::Uno::UX::Selector push::__selector6_;
::g::Uno::UX::Selector push::__selector7_;
::g::Uno::UX::Selector push::__selector8_;
::g::Uno::UX::Selector push::__selector9_;
::g::Uno::UX::Selector push::__selector10_;
::g::Uno::UX::Selector push::__selector11_;
::g::Uno::UX::Selector push::__selector12_;
::g::Uno::UX::Selector push::__selector13_;
::g::Uno::UX::Selector push::__selector14_;
::g::Uno::UX::Selector push::__selector15_;
::g::Uno::UX::Selector push::__selector16_;
::g::Uno::UX::Selector push::__selector17_;
::g::Uno::UX::Selector push::__selector18_;
::g::Uno::UX::Selector push::__selector19_;
::g::Uno::UX::Selector push::__selector20_;
::g::Uno::UX::Selector push::__selector21_;

// public push(Fuse.Navigation.Router router) [instance] :305
void push::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("push", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :311
void push::InitializeUX()
{
    uStackFrame __("push", "InitializeUX()");
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::DreamPluspopup_FuseControlsTextInputControl_Value_Property::New1(temp, push::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("Contents"));
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("sendLater"));
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("YeartoggleOpen"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp1, push::__selector1_);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("Year"));
    dropyear = ::g::Fuse::Controls::Panel::New3();
    dropyear_Opacity_inst = ::g::DreamPluspopup_FuseElementsElement_Opacity_Property::New1(dropyear, push::__selector2_);
    dropyear_Visibility_inst = ::g::DreamPluspopup_FuseElementsElement_Visibility_Property::New1(dropyear, push::__selector3_);
    ::g::Fuse::Triggers::WhileFalse* temp2 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp2_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp2, push::__selector0_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(uString::Const("YearisOpen"));
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("MonthtoggleOpen"));
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp3, push::__selector1_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("Month"));
    dropmonth = ::g::Fuse::Controls::Panel::New3();
    dropmonth_Opacity_inst = ::g::DreamPluspopup_FuseElementsElement_Opacity_Property::New1(dropmonth, push::__selector2_);
    dropmonth_Visibility_inst = ::g::DreamPluspopup_FuseElementsElement_Visibility_Property::New1(dropmonth, push::__selector3_);
    ::g::Fuse::Triggers::WhileFalse* temp4 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp4_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp4, push::__selector0_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("MonthisOpen"));
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("DatetoggleOpen"));
    ::g::Fuse::Reactive::Each* temp5 = ::g::Fuse::Reactive::Each::New4();
    temp5_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp5, push::__selector1_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("Date"));
    dropdate = ::g::Fuse::Controls::Panel::New3();
    dropdate_Opacity_inst = ::g::DreamPluspopup_FuseElementsElement_Opacity_Property::New1(dropdate, push::__selector2_);
    dropdate_Visibility_inst = ::g::DreamPluspopup_FuseElementsElement_Visibility_Property::New1(dropdate, push::__selector3_);
    ::g::Fuse::Triggers::WhileFalse* temp6 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp6_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp6, push::__selector0_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("DateisOpen"));
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("DaytoggleOpen"));
    ::g::Fuse::Reactive::Each* temp7 = ::g::Fuse::Reactive::Each::New4();
    temp7_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp7, push::__selector1_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("Day"));
    dropday = ::g::Fuse::Controls::Panel::New3();
    dropday_Opacity_inst = ::g::DreamPluspopup_FuseElementsElement_Opacity_Property::New1(dropday, push::__selector2_);
    dropday_Visibility_inst = ::g::DreamPluspopup_FuseElementsElement_Visibility_Property::New1(dropday, push::__selector3_);
    ::g::Fuse::Triggers::WhileFalse* temp8 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp8_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp8, push::__selector0_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("DayisOpen"));
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("HourtoggleOpen"));
    ::g::Fuse::Reactive::Each* temp9 = ::g::Fuse::Reactive::Each::New4();
    temp9_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp9, push::__selector1_);
    ::g::Fuse::Reactive::Data* temp28 = ::g::Fuse::Reactive::Data::New1(uString::Const("Hour"));
    drophour = ::g::Fuse::Controls::Panel::New3();
    drophour_Opacity_inst = ::g::DreamPluspopup_FuseElementsElement_Opacity_Property::New1(drophour, push::__selector2_);
    drophour_Visibility_inst = ::g::DreamPluspopup_FuseElementsElement_Visibility_Property::New1(drophour, push::__selector3_);
    ::g::Fuse::Triggers::WhileFalse* temp10 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp10_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp10, push::__selector0_);
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(uString::Const("HourisOpen"));
    ::g::Fuse::Reactive::Data* temp30 = ::g::Fuse::Reactive::Data::New1(uString::Const("MinutetoggleOpen"));
    ::g::Fuse::Reactive::Each* temp11 = ::g::Fuse::Reactive::Each::New4();
    temp11_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp11, push::__selector1_);
    ::g::Fuse::Reactive::Data* temp31 = ::g::Fuse::Reactive::Data::New1(uString::Const("Minute"));
    dropminute = ::g::Fuse::Controls::Panel::New3();
    dropminute_Opacity_inst = ::g::DreamPluspopup_FuseElementsElement_Opacity_Property::New1(dropminute, push::__selector2_);
    dropminute_Visibility_inst = ::g::DreamPluspopup_FuseElementsElement_Visibility_Property::New1(dropminute, push::__selector3_);
    ::g::Fuse::Triggers::WhileFalse* temp12 = ::g::Fuse::Triggers::WhileFalse::New2();
    temp12_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp12, push::__selector0_);
    ::g::Fuse::Reactive::Data* temp32 = ::g::Fuse::Reactive::Data::New1(uString::Const("MinuteisOpen"));
    ::g::Fuse::Controls::DockPanel* temp33 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::TopFrameBackground* temp34 = ::g::Fuse::Controls::TopFrameBackground::New2();
    ::g::Fuse::Controls::StackPanel* temp35 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::Button* temp38 = ::g::Fuse::Controls::Button::New5();
    temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp14);
    ::g::Fuse::Controls::BottomBarBackground* temp39 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Grid* temp40 = ::g::Fuse::Controls::Grid::New4();
    year = ::g::Fuse::Controls::Panel::New3();
    yearheader = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp41 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp42 = ::g::Fuse::Controls::Button::New5();
    temp_eb12 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    ::g::Fuse::Navigation::EnteringAnimation* temp43 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Scale* temp44 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::StackPanel* temp45 = ::g::Fuse::Controls::StackPanel::New4();
    push__Template* temp46 = push__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp16, 3);
    ::g::Fuse::Animations::Change* temp48 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), dropyear_Opacity_inst);
    ::g::Fuse::Animations::Change* temp49 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), dropyear_Visibility_inst);
    ::g::Fuse::Animations::Move* temp50 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp51 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp17, 3);
    month = ::g::Fuse::Controls::Panel::New3();
    monthheader = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp52 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp53 = ::g::Fuse::Controls::Button::New5();
    temp_eb14 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18);
    ::g::Fuse::Navigation::EnteringAnimation* temp54 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Scale* temp55 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::StackPanel* temp56 = ::g::Fuse::Controls::StackPanel::New4();
    push__Template1* temp57 = push__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp58 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Items_inst, (uObject*)temp19, 3);
    ::g::Fuse::Animations::Change* temp59 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), dropmonth_Opacity_inst);
    ::g::Fuse::Animations::Change* temp60 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), dropmonth_Visibility_inst);
    ::g::Fuse::Animations::Move* temp61 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp62 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp20, 3);
    date = ::g::Fuse::Controls::Panel::New3();
    dateheader = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp63 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp64 = ::g::Fuse::Controls::Button::New5();
    temp_eb16 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp21);
    ::g::Fuse::Navigation::EnteringAnimation* temp65 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Scale* temp66 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::StackPanel* temp67 = ::g::Fuse::Controls::StackPanel::New4();
    push__Template2* temp68 = push__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp69 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Items_inst, (uObject*)temp22, 3);
    ::g::Fuse::Animations::Change* temp70 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), dropdate_Opacity_inst);
    ::g::Fuse::Animations::Change* temp71 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), dropdate_Visibility_inst);
    ::g::Fuse::Animations::Move* temp72 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Grid* temp74 = ::g::Fuse::Controls::Grid::New4();
    day = ::g::Fuse::Controls::Panel::New3();
    dayheader = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp75 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp76 = ::g::Fuse::Controls::Button::New5();
    temp_eb18 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::Fuse::Navigation::EnteringAnimation* temp77 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Scale* temp78 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::StackPanel* temp79 = ::g::Fuse::Controls::StackPanel::New4();
    push__Template3* temp80 = push__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp81 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Items_inst, (uObject*)temp25, 3);
    ::g::Fuse::Animations::Change* temp82 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), dropday_Opacity_inst);
    ::g::Fuse::Animations::Change* temp83 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), dropday_Visibility_inst);
    ::g::Fuse::Animations::Move* temp84 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp85 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp26, 3);
    hour = ::g::Fuse::Controls::Panel::New3();
    hourheader = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp86 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp87 = ::g::Fuse::Controls::Button::New5();
    temp_eb20 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    ::g::Fuse::Controls::ScrollView* temp88 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Navigation::EnteringAnimation* temp89 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Scale* temp90 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::StackPanel* temp91 = ::g::Fuse::Controls::StackPanel::New4();
    push__Template4* temp92 = push__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp93 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Items_inst, (uObject*)temp28, 3);
    ::g::Fuse::Animations::Change* temp94 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), drophour_Opacity_inst);
    ::g::Fuse::Animations::Change* temp95 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), drophour_Visibility_inst);
    ::g::Fuse::Animations::Move* temp96 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp97 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp29, 3);
    minute = ::g::Fuse::Controls::Panel::New3();
    minuteheader = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp98 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Button* temp99 = ::g::Fuse::Controls::Button::New5();
    temp_eb22 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp30);
    ::g::Fuse::Controls::ScrollView* temp100 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Navigation::EnteringAnimation* temp101 = ::g::Fuse::Navigation::EnteringAnimation::New2();
    ::g::Fuse::Animations::Scale* temp102 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::StackPanel* temp103 = ::g::Fuse::Controls::StackPanel::New4();
    push__Template5* temp104 = push__Template5::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp105 = ::g::Fuse::Reactive::DataBinding::New1(temp11_Items_inst, (uObject*)temp31, 3);
    ::g::Fuse::Animations::Change* temp106 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), dropminute_Opacity_inst);
    ::g::Fuse::Animations::Change* temp107 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), dropminute_Visibility_inst);
    ::g::Fuse::Animations::Move* temp108 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp109 = ::g::Fuse::Reactive::DataBinding::New1(temp12_Value_inst, (uObject*)temp32, 3);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Page/push.ux"));
    temp33->SourceLineNumber(5);
    temp33->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    temp34->SourceLineNumber(6);
    temp34->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp34, 2);
    temp35->SourceLineNumber(7);
    temp35->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp38);
    temp36->Color(::g::Uno::Float4__New2(0.8862745f, 0.8862745f, 0.8862745f, 1.0f));
    temp36->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    temp36->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp36->Y(::g::Uno::UX::Size__New1(110.0f, 1));
    temp36->SourceLineNumber(10);
    temp36->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp->PlaceholderText(uString::Const("\353\202\264\354\232\251\354\235\204 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224."));
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->FontSize(20.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->SourceLineNumber(11);
    temp->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp37);
    temp13->SourceLineNumber(11);
    temp13->SourceFileName(uString::Const("Page/push.ux"));
    temp38->Text(uString::Const("\353\210\204\353\245\264\353\251\264 4\354\264\210\355\233\204 \354\225\214\353\246\274"));
    temp38->Height(::g::Uno::UX::Size__New1(300.0f, 1));
    temp38->SourceLineNumber(15);
    temp38->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp38, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb11)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb11);
    temp14->SourceLineNumber(15);
    temp14->SourceFileName(uString::Const("Page/push.ux"));
    temp39->SourceLineNumber(17);
    temp39->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp39, 3);
    temp40->ColumnCount(3);
    temp40->CellSpacing(10.0f);
    temp40->ChildOrder(0);
    temp40->SourceLineNumber(22);
    temp40->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), year);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), month);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), date);
    uPtr(year)->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    uPtr(year)->Name(push::__selector4_);
    uPtr(year)->SourceLineNumber(25);
    uPtr(year)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(year)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), yearheader);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(year)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), dropyear);
    uPtr(yearheader)->HitTestMode(6);
    uPtr(yearheader)->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(yearheader)->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(yearheader)->Layer(0);
    uPtr(yearheader)->Name(push::__selector5_);
    uPtr(yearheader)->SourceLineNumber(26);
    uPtr(yearheader)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(yearheader, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb12)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(yearheader)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(yearheader)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb12);
    temp41->SourceLineNumber(27);
    temp41->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    temp42->Text(uString::Const("Year"));
    temp42->Alignment(10);
    temp42->SourceLineNumber(29);
    temp42->SourceFileName(uString::Const("Page/push.ux"));
    temp15->SourceLineNumber(26);
    temp15->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(dropyear)->LayoutRole(2);
    uPtr(dropyear)->Name(push::__selector6_);
    uPtr(dropyear)->SourceLineNumber(33);
    uPtr(dropyear)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropyear)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropyear)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    temp43->SourceLineNumber(34);
    temp43->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    temp44->Factor(1.5f);
    temp45->SourceLineNumber(36);
    temp45->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp1->SourceLineNumber(37);
    temp1->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp47);
    temp16->SourceLineNumber(37);
    temp16->SourceFileName(uString::Const("Page/push.ux"));
    temp2->SourceLineNumber(42);
    temp2->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp51);
    ::g::Fuse::Animations::Change__set_Value_fn(temp48, uCRef(0.0f));
    temp48->Duration(0.2);
    temp48->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp49, uCRef<int32_t>(2));
    temp49->Delay(0.2);
    temp50->Duration(0.2);
    temp50->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp17->SourceLineNumber(42);
    temp17->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(month)->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    uPtr(month)->Name(push::__selector7_);
    uPtr(month)->SourceLineNumber(51);
    uPtr(month)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(month)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), monthheader);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(month)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), dropmonth);
    uPtr(monthheader)->HitTestMode(6);
    uPtr(monthheader)->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(monthheader)->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(monthheader)->Layer(0);
    uPtr(monthheader)->Name(push::__selector8_);
    uPtr(monthheader)->SourceLineNumber(52);
    uPtr(monthheader)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(monthheader, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb14)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(monthheader)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(monthheader)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb14);
    temp52->SourceLineNumber(53);
    temp52->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp53);
    temp53->Text(uString::Const("Month"));
    temp53->Alignment(10);
    temp53->SourceLineNumber(55);
    temp53->SourceFileName(uString::Const("Page/push.ux"));
    temp18->SourceLineNumber(52);
    temp18->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(dropmonth)->LayoutRole(2);
    uPtr(dropmonth)->Name(push::__selector9_);
    uPtr(dropmonth)->SourceLineNumber(59);
    uPtr(dropmonth)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropmonth)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropmonth)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    temp54->SourceLineNumber(60);
    temp54->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp56);
    temp55->Factor(1.5f);
    temp56->SourceLineNumber(62);
    temp56->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    temp3->SourceLineNumber(63);
    temp3->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp58);
    temp19->SourceLineNumber(63);
    temp19->SourceFileName(uString::Const("Page/push.ux"));
    temp4->SourceLineNumber(68);
    temp4->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp62);
    ::g::Fuse::Animations::Change__set_Value_fn(temp59, uCRef(0.0f));
    temp59->Duration(0.2);
    temp59->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp60, uCRef<int32_t>(2));
    temp60->Delay(0.2);
    temp61->Duration(0.2);
    temp61->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp20->SourceLineNumber(68);
    temp20->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(date)->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    uPtr(date)->Name(push::__selector10_);
    uPtr(date)->SourceLineNumber(77);
    uPtr(date)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(date)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), dateheader);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(date)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), dropdate);
    uPtr(dateheader)->HitTestMode(6);
    uPtr(dateheader)->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(dateheader)->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(dateheader)->Layer(0);
    uPtr(dateheader)->Name(push::__selector11_);
    uPtr(dateheader)->SourceLineNumber(78);
    uPtr(dateheader)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(dateheader, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb16)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dateheader)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dateheader)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb16);
    temp63->SourceLineNumber(79);
    temp63->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp64);
    temp64->Text(uString::Const("Date"));
    temp64->Alignment(10);
    temp64->SourceLineNumber(81);
    temp64->SourceFileName(uString::Const("Page/push.ux"));
    temp21->SourceLineNumber(78);
    temp21->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(dropdate)->LayoutRole(2);
    uPtr(dropdate)->Name(push::__selector12_);
    uPtr(dropdate)->SourceLineNumber(85);
    uPtr(dropdate)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropdate)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropdate)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    temp65->SourceLineNumber(86);
    temp65->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp67);
    temp66->Factor(1.5f);
    temp67->SourceLineNumber(88);
    temp67->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    temp5->SourceLineNumber(89);
    temp5->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp68);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp69);
    temp22->SourceLineNumber(89);
    temp22->SourceFileName(uString::Const("Page/push.ux"));
    temp6->SourceLineNumber(94);
    temp6->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp73);
    ::g::Fuse::Animations::Change__set_Value_fn(temp70, uCRef(0.0f));
    temp70->Duration(0.2);
    temp70->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp71, uCRef<int32_t>(2));
    temp71->Delay(0.2);
    temp72->Duration(0.2);
    temp72->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp23->SourceLineNumber(94);
    temp23->SourceFileName(uString::Const("Page/push.ux"));
    temp74->ColumnCount(3);
    temp74->CellSpacing(10.0f);
    temp74->ChildOrder(0);
    temp74->Alignment(12);
    temp74->SourceLineNumber(104);
    temp74->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), day);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), hour);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp74->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), minute);
    uPtr(day)->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    uPtr(day)->Name(push::__selector13_);
    uPtr(day)->SourceLineNumber(107);
    uPtr(day)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(day)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), dayheader);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(day)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), dropday);
    uPtr(dayheader)->HitTestMode(6);
    uPtr(dayheader)->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(dayheader)->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(dayheader)->Layer(0);
    uPtr(dayheader)->Name(push::__selector14_);
    uPtr(dayheader)->SourceLineNumber(108);
    uPtr(dayheader)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(dayheader, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb18)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dayheader)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp75);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dayheader)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb18);
    temp75->SourceLineNumber(109);
    temp75->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp75->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp76);
    temp76->Text(uString::Const("Day"));
    temp76->Alignment(10);
    temp76->SourceLineNumber(111);
    temp76->SourceFileName(uString::Const("Page/push.ux"));
    temp24->SourceLineNumber(108);
    temp24->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(dropday)->LayoutRole(2);
    uPtr(dropday)->Name(push::__selector15_);
    uPtr(dropday)->SourceLineNumber(115);
    uPtr(dropday)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropday)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropday)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    temp77->SourceLineNumber(116);
    temp77->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp79);
    temp78->Factor(1.5f);
    temp79->SourceLineNumber(118);
    temp79->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp79->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    temp7->SourceLineNumber(119);
    temp7->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp81);
    temp25->SourceLineNumber(119);
    temp25->SourceFileName(uString::Const("Page/push.ux"));
    temp8->SourceLineNumber(124);
    temp8->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp85);
    ::g::Fuse::Animations::Change__set_Value_fn(temp82, uCRef(0.0f));
    temp82->Duration(0.2);
    temp82->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp83, uCRef<int32_t>(2));
    temp83->Delay(0.2);
    temp84->Duration(0.2);
    temp84->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp26->SourceLineNumber(124);
    temp26->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(hour)->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    uPtr(hour)->Name(push::__selector16_);
    uPtr(hour)->SourceLineNumber(135);
    uPtr(hour)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hour)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), hourheader);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hour)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), drophour);
    uPtr(hourheader)->HitTestMode(6);
    uPtr(hourheader)->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(hourheader)->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(hourheader)->Layer(0);
    uPtr(hourheader)->Name(push::__selector17_);
    uPtr(hourheader)->SourceLineNumber(136);
    uPtr(hourheader)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(hourheader, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb20)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hourheader)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp86);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(hourheader)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb20);
    temp86->SourceLineNumber(137);
    temp86->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp87);
    temp87->Text(uString::Const("Hour"));
    temp87->Alignment(10);
    temp87->SourceLineNumber(138);
    temp87->SourceFileName(uString::Const("Page/push.ux"));
    temp27->SourceLineNumber(136);
    temp27->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(drophour)->LayoutRole(2);
    uPtr(drophour)->Name(push::__selector18_);
    uPtr(drophour)->SourceLineNumber(142);
    uPtr(drophour)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drophour)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drophour)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp88->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp88->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp88->Alignment(6);
    temp88->Layer(3);
    temp88->SourceLineNumber(143);
    temp88->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp89);
    temp89->SourceLineNumber(144);
    temp89->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp89->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp91);
    temp90->Factor(1.5f);
    temp91->SourceLineNumber(146);
    temp91->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp91->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp9->SourceLineNumber(147);
    temp9->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp93);
    temp28->SourceLineNumber(147);
    temp28->SourceFileName(uString::Const("Page/push.ux"));
    temp10->SourceLineNumber(153);
    temp10->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp95);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp97);
    ::g::Fuse::Animations::Change__set_Value_fn(temp94, uCRef(0.0f));
    temp94->Duration(0.2);
    temp94->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp95, uCRef<int32_t>(2));
    temp95->Delay(0.2);
    temp96->Duration(0.2);
    temp96->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp29->SourceLineNumber(153);
    temp29->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(minute)->Height(::g::Uno::UX::Size__New1(90.0f, 4));
    uPtr(minute)->Name(push::__selector19_);
    uPtr(minute)->SourceLineNumber(163);
    uPtr(minute)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(minute)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), minuteheader);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(minute)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), dropminute);
    uPtr(minuteheader)->HitTestMode(6);
    uPtr(minuteheader)->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(minuteheader)->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    uPtr(minuteheader)->Layer(0);
    uPtr(minuteheader)->Name(push::__selector20_);
    uPtr(minuteheader)->SourceLineNumber(164);
    uPtr(minuteheader)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(minuteheader, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb22)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(minuteheader)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(minuteheader)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb22);
    temp98->SourceLineNumber(165);
    temp98->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp99);
    temp99->Text(uString::Const("Minute"));
    temp99->Alignment(10);
    temp99->SourceLineNumber(166);
    temp99->SourceFileName(uString::Const("Page/push.ux"));
    temp30->SourceLineNumber(164);
    temp30->SourceFileName(uString::Const("Page/push.ux"));
    uPtr(dropminute)->LayoutRole(2);
    uPtr(dropminute)->Name(push::__selector21_);
    uPtr(dropminute)->SourceLineNumber(169);
    uPtr(dropminute)->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropminute)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropminute)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    temp100->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp100->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp100->Alignment(6);
    temp100->Layer(3);
    temp100->SourceLineNumber(170);
    temp100->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp100->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp101);
    temp101->SourceLineNumber(171);
    temp101->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp102);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp103);
    temp102->Factor(1.5f);
    temp103->SourceLineNumber(173);
    temp103->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    temp11->SourceLineNumber(174);
    temp11->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp105);
    temp31->SourceLineNumber(174);
    temp31->SourceFileName(uString::Const("Page/push.ux"));
    temp12->SourceLineNumber(180);
    temp12->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp107);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp108);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp109);
    ::g::Fuse::Animations::Change__set_Value_fn(temp106, uCRef(0.0f));
    temp106->Duration(0.2);
    temp106->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp107, uCRef<int32_t>(2));
    temp107->Delay(0.2);
    temp108->Duration(0.2);
    temp108->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp32->SourceLineNumber(180);
    temp32->SourceFileName(uString::Const("Page/push.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp74);
}

// public push New(Fuse.Navigation.Router router) [static] :305
push* push::New5(::g::Fuse::Navigation::Router* router1)
{
    push* obj1 = (push*)uNew(push_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
