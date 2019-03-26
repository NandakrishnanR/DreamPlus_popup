// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Android.RootGraphicsView.h>
#include <Fuse.Android.RootGraphicsView.Template.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Controls.Native.Android.SurfaceView.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Android/1.9.0/.uno/ux15/Fuse.Android.RootGraphicsView.g.uno
// ----------------------------------------------------------------------------------------------

// public partial sealed class RootGraphicsView :4
// {
// static RootGraphicsView() :25
static void RootGraphicsView__cctor_4_fn(uType* __type)
{
}

static void RootGraphicsView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::GraphicsView_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface17),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface18),
        ::g::Fuse::IRenderViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface19),
        ::g::Fuse::Elements::ITreeRenderer_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface20),
        ::g::Fuse::Controls::IProxyHost_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface21),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(::g::Fuse::Controls::GraphicsView_type, interface22));
    type->SetFields(120);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RootGraphicsView__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::GraphicsView_type* RootGraphicsView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::GraphicsView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::GraphicsView_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 23;
    options.ObjectSize = sizeof(RootGraphicsView);
    options.TypeSize = sizeof(::g::Fuse::Controls::GraphicsView_type);
    type = (::g::Fuse::Controls::GraphicsView_type*)uClassType::New("Fuse.Android.RootGraphicsView", options);
    type->fp_build_ = RootGraphicsView_build;
    type->fp_ctor_ = (void*)RootGraphicsView__New4_fn;
    type->fp_cctor_ = RootGraphicsView__cctor_4_fn;
    type->interface21.fp_Insert = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostInsert_fn;
    type->interface21.fp_Remove = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostRemove_fn;
    type->interface20.fp_RootingStarted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererRootingStarted_fn;
    type->interface20.fp_Rooted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererRooted_fn;
    type->interface20.fp_Unrooted = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererUnrooted_fn;
    type->interface20.fp_BackgroundChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererBackgroundChanged_fn;
    type->interface20.fp_TransformChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererTransformChanged_fn;
    type->interface20.fp_Placed = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererPlaced_fn;
    type->interface20.fp_IsVisibleChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererIsVisibleChanged_fn;
    type->interface20.fp_IsEnabledChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererIsEnabledChanged_fn;
    type->interface20.fp_OpacityChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, float*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererOpacityChanged_fn;
    type->interface20.fp_ClipToBoundsChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererClipToBoundsChanged_fn;
    type->interface20.fp_HitTestModeChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererHitTestModeChanged_fn;
    type->interface20.fp_RenderBoundsChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererRenderBoundsChanged_fn;
    type->interface20.fp_ZOrderChanged = (void(*)(uObject*, ::g::Fuse::Elements::Element*, uArray*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererZOrderChanged_fn;
    type->interface20.fp_Measure = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*, bool*))::g::Fuse::Controls::GraphicsView__FuseElementsITreeRendererMeasure_fn;
    type->interface21.fp_get_WorldTransformInverse = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__FuseControlsIProxyHostget_WorldTransformInverse_fn;
    type->interface18.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))::g::Fuse::Controls::GraphicsView__PointToWorldRay_fn;
    type->interface18.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))::g::Fuse::Controls::GraphicsView__WorldToLocalRay_fn;
    type->interface19.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__get_ProjectionTransform_fn;
    type->interface19.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__get_ViewProjectionTransform_fn;
    type->interface19.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Controls::GraphicsView__get_ViewOrigin_fn;
    type->interface19.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::GraphicsView__get_ViewRange_fn;
    type->interface22.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::Controls::GraphicsView__get_PixelsPerPoint_fn;
    type->interface22.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::GraphicsView__get_Size1_fn;
    type->interface22.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::GraphicsView__get_PixelSize_fn;
    type->interface22.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::GraphicsView__get_ViewTransform_fn;
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

// public RootGraphicsView() :29
void RootGraphicsView__ctor_7_fn(RootGraphicsView* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :33
void RootGraphicsView__InitializeUX1_fn(RootGraphicsView* __this)
{
    __this->InitializeUX1();
}

// public RootGraphicsView New() :29
void RootGraphicsView__New4_fn(RootGraphicsView** __retval)
{
    *__retval = RootGraphicsView::New4();
}

// public RootGraphicsView() [instance] :29
void RootGraphicsView::ctor_7()
{
    uStackFrame __("Fuse.Android.RootGraphicsView", ".ctor()");
    ctor_6();
    InitializeUX1();
}

// private void InitializeUX() [instance] :33
void RootGraphicsView::InitializeUX1()
{
    uStackFrame __("Fuse.Android.RootGraphicsView", "InitializeUX()");
    RootGraphicsView__Template* AndroidAppearance = RootGraphicsView__Template::New2(this, this);
    SourceLineNumber(1);
    SourceFileName(uString::Const("RootGraphicsView.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), AndroidAppearance);
}

// public RootGraphicsView New() [static] :29
RootGraphicsView* RootGraphicsView::New4()
{
    RootGraphicsView* obj1 = (RootGraphicsView*)uNew(RootGraphicsView_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/1.9.0/StatusBarConfig.uno
// --------------------------------------------------------------------

// public sealed class StatusBarConfig :82
// {
// static generated StatusBarConfig() :82
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    StatusBarConfig::_isVisible_ = true;
}

static void StatusBarConfig_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::Bool_typeof(), (uintptr_t)&StatusBarConfig::_isVisible_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Color", NULL, (void*)StatusBarConfig__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)StatusBarConfig__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New2_fn, 0, true, type, 0));
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->fp_build_ = StatusBarConfig_build;
    type->fp_ctor_ = (void*)StatusBarConfig__New2_fn;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
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

// public generated StatusBarConfig() :82
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this)
{
    __this->ctor_3();
}

// public float4 get_Color() :97
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :104
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public bool get_IsVisible() :118
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :119
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :82
void StatusBarConfig__New2_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New2();
}

bool StatusBarConfig::_isVisible_;

// public generated StatusBarConfig() [instance] :82
void StatusBarConfig::ctor_3()
{
    ctor_2();
}

// public float4 get_Color() [instance] :97
::g::Uno::Float4 StatusBarConfig::Color()
{
    return ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}

// public void set_Color(float4 value) [instance] :104
void StatusBarConfig::Color(::g::Uno::Float4 value)
{
}

// public bool get_IsVisible() [instance] :118
bool StatusBarConfig::IsVisible()
{
    return StatusBarConfig::_isVisible_;
}

// public void set_IsVisible(bool value) [instance] :119
void StatusBarConfig::IsVisible(bool value)
{
    StatusBarConfig::_isVisible_ = value;
}

// public generated StatusBarConfig New() [static] :82
StatusBarConfig* StatusBarConfig::New2()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/1.9.0/.uno/ux15/Fuse.Android.RootGraphicsView.g.uno
// ----------------------------------------------------------------------------------------------

// public partial sealed class RootGraphicsView.Template :7
// {
// static Template() :16
static void RootGraphicsView__Template__cctor__fn(uType* __type)
{
}

static void RootGraphicsView__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("AndroidAppearance");
    type->SetFields(2,
        ::g::Fuse::Android::RootGraphicsView_typeof(), offsetof(RootGraphicsView__Template, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Android::RootGraphicsView_typeof(), offsetof(RootGraphicsView__Template, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RootGraphicsView__Template__New2_fn, 0, true, type, 2, ::g::Fuse::Android::RootGraphicsView_typeof(), ::g::Fuse::Android::RootGraphicsView_typeof()));
}

::g::Uno::UX::Template_type* RootGraphicsView__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RootGraphicsView__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.RootGraphicsView.Template", options);
    type->fp_build_ = RootGraphicsView__Template_build;
    type->fp_cctor_ = RootGraphicsView__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))RootGraphicsView__Template__New1_fn;
    return type;
}

// public Template(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) :11
void RootGraphicsView__Template__ctor_1_fn(RootGraphicsView__Template* __this, ::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :19
void RootGraphicsView__Template__New1_fn(RootGraphicsView__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Native::Android::SurfaceView* __self1 = ::g::Fuse::Controls::Native::Android::SurfaceView::New1();
    return *__retval = __self1, void();
}

// public Template New(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) :11
void RootGraphicsView__Template__New2_fn(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance, RootGraphicsView__Template** __retval)
{
    *__retval = RootGraphicsView__Template::New2(parent, parentInstance);
}

// public Template(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) [instance] :11
void RootGraphicsView__Template::ctor_1(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    ctor_(::STRINGS[0/*"AndroidAppe...*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Fuse.Android.RootGraphicsView parent, Fuse.Android.RootGraphicsView parentInstance) [static] :11
RootGraphicsView__Template* RootGraphicsView__Template::New2(::g::Fuse::Android::RootGraphicsView* parent, ::g::Fuse::Android::RootGraphicsView* parentInstance)
{
    RootGraphicsView__Template* obj1 = (RootGraphicsView__Template*)uNew(RootGraphicsView__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Fuse::Android
