// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/Pushalim.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DreamPluspopup_bundle.h>
#include <_root.DreamPluspopup_FuseControlsTextInputControl_Value_Property.h>
#include <_root.DreamPluspopup_FuseReactiveEach_Items_Property.h>
#include <_root.DreamPluspopup_FuseTriggersWhileBool_Value_Property.h>
#include <_root.Pushalim.h>
#include <_root.Pushalim.Template.h>
#include <_root.Pushalim.Template1.h>
#include <_root.Pushalim.Template2.h>
#include <_root.Pushalim.Template3.h>
#include <_root.Pushalim.Template4.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Layer.h>
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
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class Pushalim :2
// {
// static Pushalim() :339
static void Pushalim__cctor_4_fn(uType* __type)
{
    Pushalim::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 13, uString::Const("router"), uString::Const("Yearvalue"), uString::Const("temp_eb0"), uString::Const("Monthvalue"), uString::Const("temp_eb2"), uString::Const("Dayvalue"), uString::Const("temp_eb4"), uString::Const("Hourvalue"), uString::Const("temp_eb6"), uString::Const("Minutevalue"), uString::Const("temp_eb8"), uString::Const("sendtime"), uString::Const("temp_eb10"));
    Pushalim::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    Pushalim::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    Pushalim::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Yearvalue"));
    Pushalim::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Monthvalue"));
    Pushalim::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Dayvalue"));
    Pushalim::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Hourvalue"));
    Pushalim::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Minutevalue"));
    Pushalim::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sendtime"));
}

static void Pushalim_build(uType* type)
{
    type->SetDependencies(
        ::g::DreamPluspopup_bundle_typeof());
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Pushalim, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Pushalim, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Pushalim, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Pushalim, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Pushalim, temp3_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Pushalim, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Pushalim, temp5_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Pushalim, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Pushalim, temp7_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Pushalim, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Pushalim, temp9_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Pushalim, temp10_Value_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Pushalim, Yearvalue), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Pushalim, temp_eb0), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Pushalim, Monthvalue), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Pushalim, temp_eb2), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Pushalim, Dayvalue), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Pushalim, temp_eb4), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Pushalim, Hourvalue), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Pushalim, temp_eb6), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Pushalim, Minutevalue), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Pushalim, temp_eb8), 0,
        ::g::Fuse::Controls::Button_typeof(), offsetof(Pushalim, sendtime), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Pushalim, temp_eb10), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Pushalim, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&Pushalim::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim::__selector7_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pushalim__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* Pushalim_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 160;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Pushalim);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Pushalim", options);
    type->fp_build_ = Pushalim_build;
    type->fp_cctor_ = Pushalim__cctor_4_fn;
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

// public Pushalim(Fuse.Navigation.Router router) :343
void Pushalim__ctor_8_fn(Pushalim* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :349
void Pushalim__InitializeUX_fn(Pushalim* __this)
{
    __this->InitializeUX();
}

// public Pushalim New(Fuse.Navigation.Router router) :343
void Pushalim__New5_fn(::g::Fuse::Navigation::Router* router1, Pushalim** __retval)
{
    *__retval = Pushalim::New5(router1);
}

uSStrong<uArray*> Pushalim::__g_static_nametable1_;
::g::Uno::UX::Selector Pushalim::__selector0_;
::g::Uno::UX::Selector Pushalim::__selector1_;
::g::Uno::UX::Selector Pushalim::__selector2_;
::g::Uno::UX::Selector Pushalim::__selector3_;
::g::Uno::UX::Selector Pushalim::__selector4_;
::g::Uno::UX::Selector Pushalim::__selector5_;
::g::Uno::UX::Selector Pushalim::__selector6_;
::g::Uno::UX::Selector Pushalim::__selector7_;

// public Pushalim(Fuse.Navigation.Router router) [instance] :343
void Pushalim::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("Pushalim", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :349
void Pushalim::InitializeUX()
{
    uStackFrame __("Pushalim", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Pushalim::__g_static_nametable1_);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::DreamPluspopup_FuseControlsTextInputControl_Value_Property::New1(temp, Pushalim::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(uString::Const("Contents"));
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(uString::Const("YeartoggleOpen"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp1, Pushalim::__selector1_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(uString::Const("Year"));
    ::g::Fuse::Triggers::WhileTrue* temp2 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp2_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp2, Pushalim::__selector0_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(uString::Const("YearisOpen"));
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(uString::Const("MonthtoggleOpen"));
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp3, Pushalim::__selector1_);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(uString::Const("Month"));
    ::g::Fuse::Triggers::WhileTrue* temp4 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp4_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp4, Pushalim::__selector0_);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(uString::Const("MonthisOpen"));
    ::g::Fuse::Reactive::Data* temp18 = ::g::Fuse::Reactive::Data::New1(uString::Const("DaytoggleOpen"));
    ::g::Fuse::Reactive::Each* temp5 = ::g::Fuse::Reactive::Each::New4();
    temp5_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp5, Pushalim::__selector1_);
    ::g::Fuse::Reactive::Data* temp19 = ::g::Fuse::Reactive::Data::New1(uString::Const("Day"));
    ::g::Fuse::Triggers::WhileTrue* temp6 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp6_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp6, Pushalim::__selector0_);
    ::g::Fuse::Reactive::Data* temp20 = ::g::Fuse::Reactive::Data::New1(uString::Const("DayisOpen"));
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(uString::Const("HourtoggleOpen"));
    ::g::Fuse::Reactive::Each* temp7 = ::g::Fuse::Reactive::Each::New4();
    temp7_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp7, Pushalim::__selector1_);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(uString::Const("Hour"));
    ::g::Fuse::Triggers::WhileTrue* temp8 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp8_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp8, Pushalim::__selector0_);
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(uString::Const("HourisOpen"));
    ::g::Fuse::Reactive::Data* temp24 = ::g::Fuse::Reactive::Data::New1(uString::Const("MinutetoggleOpen"));
    ::g::Fuse::Reactive::Each* temp9 = ::g::Fuse::Reactive::Each::New4();
    temp9_Items_inst = ::g::DreamPluspopup_FuseReactiveEach_Items_Property::New1(temp9, Pushalim::__selector1_);
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(uString::Const("Minute"));
    ::g::Fuse::Triggers::WhileTrue* temp10 = ::g::Fuse::Triggers::WhileTrue::New2();
    temp10_Value_inst = ::g::DreamPluspopup_FuseTriggersWhileBool_Value_Property::New1(temp10, Pushalim::__selector0_);
    ::g::Fuse::Reactive::Data* temp26 = ::g::Fuse::Reactive::Data::New1(uString::Const("MinuteisOpen"));
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(uString::Const("timesend"));
    ::g::Fuse::Reactive::JavaScript* temp28 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Rectangle* temp31 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp32 = ::g::Fuse::Controls::Panel::New3();
    Yearvalue = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp33 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp34 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp12);
    ::g::Fuse::Controls::ScrollView* temp35 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp36 = ::g::Fuse::Controls::StackPanel::New4();
    Pushalim__Template* Yeartext = Pushalim__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp13, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp38 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9529412f, 0.6588235f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp41 = ::g::Fuse::Controls::Panel::New3();
    Monthvalue = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp42 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp43 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    ::g::Fuse::Controls::ScrollView* temp44 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp45 = ::g::Fuse::Controls::StackPanel::New4();
    Pushalim__Template1* Monthtext = Pushalim__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp46 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Items_inst, (uObject*)temp16, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp47 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9529412f, 0.6588235f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp48 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp17, 3);
    ::g::Fuse::Controls::Rectangle* temp49 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp50 = ::g::Fuse::Controls::Panel::New3();
    Dayvalue = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp51 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp52 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp18);
    ::g::Fuse::Controls::ScrollView* temp53 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp54 = ::g::Fuse::Controls::StackPanel::New4();
    Pushalim__Template2* Daytext = Pushalim__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp55 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Items_inst, (uObject*)temp19, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp56 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9529412f, 0.6588235f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp57 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp20, 3);
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp59 = ::g::Fuse::Controls::Panel::New3();
    Hourvalue = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp60 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp61 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp21);
    ::g::Fuse::Controls::ScrollView* temp62 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp63 = ::g::Fuse::Controls::StackPanel::New4();
    Pushalim__Template3* Hourtext = Pushalim__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp64 = ::g::Fuse::Reactive::DataBinding::New1(temp7_Items_inst, (uObject*)temp22, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp65 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9529412f, 0.6588235f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp66 = ::g::Fuse::Reactive::DataBinding::New1(temp8_Value_inst, (uObject*)temp23, 3);
    ::g::Fuse::Controls::Rectangle* temp67 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp68 = ::g::Fuse::Controls::Panel::New3();
    Minutevalue = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp69 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp70 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp24);
    ::g::Fuse::Controls::ScrollView* temp71 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp72 = ::g::Fuse::Controls::StackPanel::New4();
    Pushalim__Template4* Minutetext = Pushalim__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp73 = ::g::Fuse::Reactive::DataBinding::New1(temp9_Items_inst, (uObject*)temp25, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp74 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9529412f, 0.6588235f, 1.0f, 1.0f));
    ::g::Fuse::Reactive::DataBinding* temp75 = ::g::Fuse::Reactive::DataBinding::New1(temp10_Value_inst, (uObject*)temp26, 3);
    sendtime = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp76 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp77 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp78 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp27);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp28->LineNumber(3);
    temp28->FileName(uString::Const("Page/Pushalim.ux"));
    temp28->SourceLineNumber(3);
    temp28->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp28->File(::g::Uno::UX::BundleFileSource::New1(::g::DreamPluspopup_bundle::Pushalim0d8cc207()));
    temp29->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp29->Color(::g::Uno::Float4__New2(0.8862745f, 0.8862745f, 0.8862745f, 1.0f));
    temp29->Width(::g::Uno::UX::Size__New1(350.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp29->Y(::g::Uno::UX::Size__New1(50.0f, 1));
    temp29->SourceLineNumber(4);
    temp29->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp->PlaceholderText(uString::Const("\353\202\264\354\232\251\354\235\204 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224."));
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->FontSize(20.0f);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->SourceLineNumber(5);
    temp->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp30);
    temp11->SourceLineNumber(5);
    temp11->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp31->Color(::g::Uno::Float4__New2(0.854902f, 0.9960784f, 0.4156863f, 1.0f));
    temp31->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp31->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp31->X(::g::Uno::UX::Size__New1(30.0f, 1));
    temp31->Y(::g::Uno::UX::Size__New1(130.0f, 1));
    temp31->SourceLineNumber(11);
    temp31->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    temp32->SourceLineNumber(12);
    temp32->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Yearvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    uPtr(Yearvalue)->Value(uString::Const("Year"));
    uPtr(Yearvalue)->TextAlignment(1);
    uPtr(Yearvalue)->Alignment(8);
    uPtr(Yearvalue)->Name(Pushalim::__selector2_);
    uPtr(Yearvalue)->SourceLineNumber(13);
    uPtr(Yearvalue)->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp33->SourceLineNumber(14);
    temp33->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb0);
    temp34->SourceLineNumber(15);
    temp34->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp34->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp12->SourceLineNumber(15);
    temp12->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp2->SourceLineNumber(19);
    temp2->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp39);
    temp35->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp35->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp35->X(::g::Uno::UX::Size__New1(30.0f, 1));
    temp35->Y(::g::Uno::UX::Size__New1(130.0f, 1));
    temp35->Layer(3);
    temp35->SourceLineNumber(20);
    temp35->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp35->Background(temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    temp36->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp36->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 210.0f));
    temp36->SourceLineNumber(21);
    temp36->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp1->SourceLineNumber(22);
    temp1->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Yeartext);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp37);
    temp13->SourceLineNumber(22);
    temp13->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp14->SourceLineNumber(19);
    temp14->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp40->Color(::g::Uno::Float4__New2(0.854902f, 0.9960784f, 0.4156863f, 1.0f));
    temp40->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp40->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp40->Y(::g::Uno::UX::Size__New1(130.0f, 1));
    temp40->SourceLineNumber(37);
    temp40->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp40->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    temp41->SourceLineNumber(38);
    temp41->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Monthvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    uPtr(Monthvalue)->Value(uString::Const("Month"));
    uPtr(Monthvalue)->TextAlignment(1);
    uPtr(Monthvalue)->Alignment(8);
    uPtr(Monthvalue)->Name(Pushalim::__selector3_);
    uPtr(Monthvalue)->SourceLineNumber(39);
    uPtr(Monthvalue)->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp42->SourceLineNumber(40);
    temp42->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb2);
    temp43->SourceLineNumber(41);
    temp43->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp43->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp15->SourceLineNumber(41);
    temp15->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp4->SourceLineNumber(45);
    temp4->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp48);
    temp44->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp44->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp44->Y(::g::Uno::UX::Size__New1(130.0f, 1));
    temp44->Layer(3);
    temp44->SourceLineNumber(46);
    temp44->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp44->Background(temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp45);
    temp45->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp45->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp45->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 210.0f));
    temp45->SourceLineNumber(47);
    temp45->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
    temp3->SourceLineNumber(48);
    temp3->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Monthtext);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp46);
    temp16->SourceLineNumber(48);
    temp16->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp17->SourceLineNumber(45);
    temp17->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp49->Color(::g::Uno::Float4__New2(0.854902f, 0.9960784f, 0.4156863f, 1.0f));
    temp49->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp49->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp49->X(::g::Uno::UX::Size__New1(250.0f, 1));
    temp49->Y(::g::Uno::UX::Size__New1(130.0f, 1));
    temp49->SourceLineNumber(62);
    temp49->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp50);
    temp50->SourceLineNumber(63);
    temp50->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Dayvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp51);
    uPtr(Dayvalue)->Value(uString::Const("Day"));
    uPtr(Dayvalue)->TextAlignment(1);
    uPtr(Dayvalue)->Alignment(8);
    uPtr(Dayvalue)->Name(Pushalim::__selector4_);
    uPtr(Dayvalue)->SourceLineNumber(64);
    uPtr(Dayvalue)->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp51->SourceLineNumber(65);
    temp51->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb4);
    temp52->SourceLineNumber(66);
    temp52->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp52->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    temp18->SourceLineNumber(66);
    temp18->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp6->SourceLineNumber(70);
    temp6->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp57);
    temp53->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp53->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp53->X(::g::Uno::UX::Size__New1(250.0f, 1));
    temp53->Y(::g::Uno::UX::Size__New1(130.0f, 1));
    temp53->Layer(3);
    temp53->SourceLineNumber(71);
    temp53->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp53->Background(temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp54);
    temp54->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 780.0f));
    temp54->SourceLineNumber(72);
    temp54->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    temp5->SourceLineNumber(73);
    temp5->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Daytext);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp55);
    temp19->SourceLineNumber(73);
    temp19->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp20->SourceLineNumber(70);
    temp20->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp58->Color(::g::Uno::Float4__New2(0.854902f, 0.9960784f, 0.4156863f, 1.0f));
    temp58->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp58->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp58->X(::g::Uno::UX::Size__New1(70.0f, 1));
    temp58->Y(::g::Uno::UX::Size__New1(290.0f, 1));
    temp58->SourceLineNumber(88);
    temp58->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp59);
    temp59->SourceLineNumber(89);
    temp59->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Hourvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp60);
    uPtr(Hourvalue)->Value(uString::Const("Hour"));
    uPtr(Hourvalue)->TextAlignment(1);
    uPtr(Hourvalue)->Alignment(8);
    uPtr(Hourvalue)->Name(Pushalim::__selector5_);
    uPtr(Hourvalue)->SourceLineNumber(90);
    uPtr(Hourvalue)->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp60->SourceLineNumber(91);
    temp60->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb6);
    temp61->SourceLineNumber(92);
    temp61->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp61->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp21->SourceLineNumber(92);
    temp21->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp8->SourceLineNumber(96);
    temp8->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp66);
    temp62->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp62->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp62->X(::g::Uno::UX::Size__New1(70.0f, 1));
    temp62->Y(::g::Uno::UX::Size__New1(290.0f, 1));
    temp62->Layer(3);
    temp62->SourceLineNumber(97);
    temp62->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp62->Background(temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp63);
    temp63->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp63->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp63->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 570.0f));
    temp63->SourceLineNumber(98);
    temp63->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    temp7->SourceLineNumber(99);
    temp7->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Hourtext);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp64);
    temp22->SourceLineNumber(99);
    temp22->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp23->SourceLineNumber(96);
    temp23->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp67->Color(::g::Uno::Float4__New2(0.854902f, 0.9960784f, 0.4156863f, 1.0f));
    temp67->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp67->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp67->X(::g::Uno::UX::Size__New1(200.0f, 1));
    temp67->Y(::g::Uno::UX::Size__New1(290.0f, 1));
    temp67->SourceLineNumber(114);
    temp67->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp68);
    temp68->SourceLineNumber(115);
    temp68->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), Minutevalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    uPtr(Minutevalue)->Value(uString::Const("Minute"));
    uPtr(Minutevalue)->TextAlignment(1);
    uPtr(Minutevalue)->Alignment(8);
    uPtr(Minutevalue)->Name(Pushalim::__selector6_);
    uPtr(Minutevalue)->SourceLineNumber(116);
    uPtr(Minutevalue)->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp69->SourceLineNumber(117);
    temp69->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb8);
    temp70->SourceLineNumber(118);
    temp70->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp70->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    temp24->SourceLineNumber(118);
    temp24->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp10->SourceLineNumber(122);
    temp10->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp75);
    temp71->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp71->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp71->X(::g::Uno::UX::Size__New1(200.0f, 1));
    temp71->Y(::g::Uno::UX::Size__New1(290.0f, 1));
    temp71->Layer(3);
    temp71->SourceLineNumber(123);
    temp71->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp71->Background(temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp71->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp72);
    temp72->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp72->Height(::g::Uno::UX::Size__New1(150.0f, 1));
    temp72->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1650.0f));
    temp72->SourceLineNumber(124);
    temp72->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp72->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp9->SourceLineNumber(125);
    temp9->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), Minutetext);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp73);
    temp25->SourceLineNumber(125);
    temp25->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp26->SourceLineNumber(122);
    temp26->SourceFileName(uString::Const("Page/Pushalim.ux"));
    uPtr(sendtime)->Color(::g::Uno::Float4__New2(0.6862745f, 0.8196079f, 1.0f, 1.0f));
    uPtr(sendtime)->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    uPtr(sendtime)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(sendtime)->Y(::g::Uno::UX::Size__New1(480.0f, 1));
    uPtr(sendtime)->Name(Pushalim::__selector7_);
    uPtr(sendtime)->SourceLineNumber(141);
    uPtr(sendtime)->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sendtime)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sendtime)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp77);
    temp76->Value(uString::Const("\353\263\264\353\202\264\352\270\260"));
    temp76->TextAlignment(1);
    temp76->Alignment(8);
    temp76->SourceLineNumber(142);
    temp76->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp77->SourceLineNumber(143);
    temp77->SourceFileName(uString::Const("Page/Pushalim.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb10);
    temp78->SourceLineNumber(144);
    temp78->SourceFileName(uString::Const("Page/Pushalim.ux"));
    temp78->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb10)));
    temp27->SourceLineNumber(144);
    temp27->SourceFileName(uString::Const("Page/Pushalim.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Yearvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Monthvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Dayvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Hourvalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), Minutevalue);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sendtime);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sendtime);
}

// public Pushalim New(Fuse.Navigation.Router router) [static] :343
Pushalim* Pushalim::New5(::g::Fuse::Navigation::Router* router1)
{
    Pushalim* obj1 = (Pushalim*)uNew(Pushalim_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
