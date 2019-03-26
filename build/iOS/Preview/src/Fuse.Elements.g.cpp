// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseElements_bundle.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.CacheFramebuffer.h>
#include <Fuse.Common.Blitter.h>
#include <Fuse.Designer.UnoHostInterface.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Effects.EffectType.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.AspectConstraint.h>
#include <Fuse.Elements.BoxPlacement.h>
#include <Fuse.Elements.BoxSizing.ConstraintFlags.h>
#include <Fuse.Elements.BoxSizing.h>
#include <Fuse.Elements.Cache.h>
#include <Fuse.Elements.CacheHelper.h>
#include <Fuse.Elements.CacheTile.h>
#include <Fuse.Elements.CachingMode.h>
#include <Fuse.Elements.DisplayHelpers.h>
#include <Fuse.Elements.Element.BoundsChanged.h>
#include <Fuse.Elements.Element.BoxSizingMode.h>
#include <Fuse.Elements.Element.DefaultDisposable.h>
#include <Fuse.Elements.Element.GMSCacheItem.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Element.TransformChanged.h>
#include <Fuse.Elements.Element.VisualAppeared.h>
#include <Fuse.Elements.Element.VisualDisappeared.h>
#include <Fuse.Elements.ElementAtlas.h>
#include <Fuse.Elements.ElementAtlasFramebuffer.h>
#include <Fuse.Elements.ElementAtlasFramebufferPool.h>
#include <Fuse.Elements.ElementAtlasFramebufferPoolEntry.h>
#include <Fuse.Elements.ElementAtlasFramebufferPoolImpl.h>
#include <Fuse.Elements.ElementBatch.h>
#include <Fuse.Elements.ElementBatchEntry.h>
#include <Fuse.Elements.ElementBatcher.h>
#include <Fuse.Elements.ExplicitTransformOrigin.h>
#include <Fuse.Elements.FillAspectBoxSizing.h>
#include <Fuse.Elements.HeightFunction.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.IElementBatchDrawable.h>
#include <Fuse.Elements.InteractiveTransform.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.ITreeRenderer.h>
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.Elements.LayoutFunction.Subscription.h>
#include <Fuse.Elements.LayoutMasterAttr.h>
#include <Fuse.Elements.LayoutMasterBoxSizing.h>
#include <Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h>
#include <Fuse.Elements.LayoutMasterMode.h>
#include <Fuse.Elements.LimitBoxSizing.h>
#include <Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <Fuse.Elements.OptionalSimpleAlignment.h>
#include <Fuse.Elements.PerspectiveRelativeToMode.h>
#include <Fuse.Elements.PreplacementArgs.h>
#include <Fuse.Elements.PreplacementHandler.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.Elements.SingleVisualDrawable.h>
#include <Fuse.Elements.StandardBoxSizing.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TransformOrigins.AnchorOrigin.h>
#include <Fuse.Elements.TransformOrigins.BoxCenter.h>
#include <Fuse.Elements.TransformOrigins.CenterOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TransformOrigins.TopLeftOrigin.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.TranslationModes.OffsetMode.h>
#include <Fuse.Elements.TranslationModes.OffsetMode.Subscriptions.h>
#include <Fuse.Elements.TranslationModes.PositionOffsetMode.h>
#include <Fuse.Elements.TranslationModes.RelativeResizeChangeMode.h>
#include <Fuse.Elements.TranslationModes.SizeFactorMode.h>
#include <Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h>
#include <Fuse.Elements.Viewport.h>
#include <Fuse.Elements.ViewportMode.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.Elements.WidthFunction.h>
#include <Fuse.Elements.XFunction.h>
#include <Fuse.Elements.XYBaseLayoutFunction.h>
#include <Fuse.Elements.YFunction.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FastProperty1.h>
#include <Fuse.FixedViewport.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.FrustumViewport.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IFrustum.h>
#include <Fuse.InheritViewport.h>
#include <Fuse.Internal.RectPacker.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.IViewport.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.LostMarginBoxArgs.h>
#include <Fuse.LostMarginBoxHandler.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.OrthographicFrustum.h>
#include <Fuse.PerspectiveFrustum.h>
#include <Fuse.PlacedArgs.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Ray.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.ViewportHelpers.h>
#include <Fuse.Visual.h>
#include <Fuse.Visual.HitTestTransformMode.h>
#include <Fuse.VisualBounds.h>
#include <Fuse.VisualBounds.Type.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func1-2.h>
#include <Uno.Func2-3.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.FramebufferFlags.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
static uString* STRINGS[19];
static uType* TYPES[37];

namespace g{
namespace Fuse{
namespace Elements{

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// public enum Alignment :25
uEnumType* Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Alignment", ::g::Uno::Int_typeof(), 16);
    type->SetLiterals(
        "Default", 0LL,
        "Left", 1LL,
        "HorizontalCenter", 2LL,
        "Right", 3LL,
        "Top", 4LL,
        "VerticalCenter", 8LL,
        "Bottom", 12LL,
        "TopLeft", 5LL,
        "TopCenter", 6LL,
        "TopRight", 7LL,
        "CenterLeft", 9LL,
        "Center", 10LL,
        "CenterRight", 11LL,
        "BottomLeft", 13LL,
        "BottomCenter", 14LL,
        "BottomRight", 15LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// public static class AlignmentHelpers :76
// {
static void AlignmentHelpers_build(uType* type)
{
    type->Reflection.SetFunctions(3,
        new uFunction("GetAnchor", NULL, (void*)AlignmentHelpers__GetAnchor_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetHorizontalAlign", NULL, (void*)AlignmentHelpers__GetHorizontalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("GetVerticalAlign", NULL, (void*)AlignmentHelpers__GetVerticalAlign_fn, 0, true, ::g::Fuse::Elements::Alignment_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()));
}

uClassType* AlignmentHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.AlignmentHelpers", options);
    type->fp_build_ = AlignmentHelpers_build;
    return type;
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) :87
void AlignmentHelpers__GetAnchor_fn(int32_t* a, ::g::Uno::Float2* __retval)
{
    *__retval = AlignmentHelpers::GetAnchor(*a);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) :82
void AlignmentHelpers__GetHorizontalAlign_fn(int32_t* a, int32_t* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) :110
void AlignmentHelpers__GetHorizontalSimpleAlign_fn(int32_t* a, int32_t* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalSimpleAlign(*a);
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetHorizontalSimpleAlignOptional(Fuse.Elements.Alignment a) :132
void AlignmentHelpers__GetHorizontalSimpleAlignOptional_fn(int32_t* a, int32_t* __retval)
{
    *__retval = AlignmentHelpers::GetHorizontalSimpleAlignOptional(*a);
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) :78
void AlignmentHelpers__GetVerticalAlign_fn(int32_t* a, int32_t* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalAlign(*a);
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) :100
void AlignmentHelpers__GetVerticalSimpleAlign_fn(int32_t* a, int32_t* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalSimpleAlign(*a);
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetVerticalSimpleAlignOptional(Fuse.Elements.Alignment a) :120
void AlignmentHelpers__GetVerticalSimpleAlignOptional_fn(int32_t* a, int32_t* __retval)
{
    *__retval = AlignmentHelpers::GetVerticalSimpleAlignOptional(*a);
}

// public static float2 GetAnchor(Fuse.Elements.Alignment a) [static] :87
::g::Uno::Float2 AlignmentHelpers::GetAnchor(int32_t a)
{
    int32_t h = AlignmentHelpers::GetHorizontalAlign(a);
    float x = (h == 1) ? 0.0f : (h == 3) ? 1.0f : 0.5f;
    int32_t v = AlignmentHelpers::GetVerticalAlign(a);
    float y = (v == 4) ? 0.0f : (v == 12) ? 1.0f : 0.5f;
    return ::g::Uno::Float2__New2(x, y);
}

// public static Fuse.Elements.Alignment GetHorizontalAlign(Fuse.Elements.Alignment a) [static] :82
int32_t AlignmentHelpers::GetHorizontalAlign(int32_t a)
{
    return a & 3;
}

// internal static Fuse.Elements.SimpleAlignment GetHorizontalSimpleAlign(Fuse.Elements.Alignment a) [static] :110
int32_t AlignmentHelpers::GetHorizontalSimpleAlign(int32_t a)
{
    int32_t raw = AlignmentHelpers::GetHorizontalAlign(a);

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    return 0;
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetHorizontalSimpleAlignOptional(Fuse.Elements.Alignment a) [static] :132
int32_t AlignmentHelpers::GetHorizontalSimpleAlignOptional(int32_t a)
{
    int32_t raw = AlignmentHelpers::GetHorizontalAlign(a);

    if (raw == 1)
        return 1;

    if (raw == 2)
        return 2;

    if (raw == 3)
        return 3;

    return 0;
}

// public static Fuse.Elements.Alignment GetVerticalAlign(Fuse.Elements.Alignment a) [static] :78
int32_t AlignmentHelpers::GetVerticalAlign(int32_t a)
{
    return a & 12;
}

// internal static Fuse.Elements.SimpleAlignment GetVerticalSimpleAlign(Fuse.Elements.Alignment a) [static] :100
int32_t AlignmentHelpers::GetVerticalSimpleAlign(int32_t a)
{
    int32_t raw = AlignmentHelpers::GetVerticalAlign(a);

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    return 0;
}

// internal static Fuse.Elements.OptionalSimpleAlignment GetVerticalSimpleAlignOptional(Fuse.Elements.Alignment a) [static] :120
int32_t AlignmentHelpers::GetVerticalSimpleAlignOptional(int32_t a)
{
    int32_t raw = AlignmentHelpers::GetVerticalAlign(a);

    if (raw == 4)
        return 1;

    if (raw == 8)
        return 2;

    if (raw == 12)
        return 3;

    return 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Transform.uno
// -----------------------------------------------------------------------

// private sealed class TransformOrigins.AnchorOrigin :58
// {
static void TransformOrigins__AnchorOrigin_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__AnchorOrigin_type, interface0));
}

TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof()
{
    static uSStrong<TransformOrigins__AnchorOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__AnchorOrigin);
    options.TypeSize = sizeof(TransformOrigins__AnchorOrigin_type);
    type = (TransformOrigins__AnchorOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.AnchorOrigin", options);
    type->fp_build_ = TransformOrigins__AnchorOrigin_build;
    type->fp_ctor_ = (void*)TransformOrigins__AnchorOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__AnchorOrigin__GetOffset_fn;
    return type;
}

// public generated AnchorOrigin() :58
void TransformOrigins__AnchorOrigin__ctor__fn(TransformOrigins__AnchorOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :60
void TransformOrigins__AnchorOrigin__GetOffset_fn(TransformOrigins__AnchorOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated AnchorOrigin New() :58
void TransformOrigins__AnchorOrigin__New1_fn(TransformOrigins__AnchorOrigin** __retval)
{
    *__retval = TransformOrigins__AnchorOrigin::New1();
}

// public generated AnchorOrigin() [instance] :58
void TransformOrigins__AnchorOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :60
::g::Uno::Float3 TransformOrigins__AnchorOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.AnchorOrigin", "GetOffset(Fuse.Elements.Element)");
    return ::g::Uno::Float3__New4(uPtr(elm)->ActualAnchor(), 0.0f);
}

// public generated AnchorOrigin New() [static] :58
TransformOrigins__AnchorOrigin* TransformOrigins__AnchorOrigin::New1()
{
    TransformOrigins__AnchorOrigin* obj1 = (TransformOrigins__AnchorOrigin*)uNew(TransformOrigins__AnchorOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/AspectBoxSizing.uno
// ---------------------------------------------------------------------

// public enum AspectConstraint :7
uEnumType* AspectConstraint_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.AspectConstraint", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Preserve", 1LL,
        "Trim", 2LL,
        "PreserveTrim", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.UnoHostInterface.uno
// ------------------------------------------------------------------------------

// private sealed extern class Element.BoundsChanged :69
// {
static void Element__BoundsChanged_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__BoundsChanged_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(Element__BoundsChanged, _element), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL), offsetof(Element__BoundsChanged, _handler), 0);
}

Element__BoundsChanged_type* Element__BoundsChanged_typeof()
{
    static uSStrong<Element__BoundsChanged_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__BoundsChanged);
    options.TypeSize = sizeof(Element__BoundsChanged_type);
    type = (Element__BoundsChanged_type*)uClassType::New("Fuse.Elements.Element.BoundsChanged", options);
    type->fp_build_ = Element__BoundsChanged_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__BoundsChanged__UnoIDisposableDispose_fn;
    return type;
}

// public BoundsChanged(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) :74
void Element__BoundsChanged__ctor__fn(Element__BoundsChanged* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public BoundsChanged New(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) :74
void Element__BoundsChanged__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__BoundsChanged** __retval)
{
    *__retval = Element__BoundsChanged::New1(element, handler);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :82
void Element__BoundsChanged__OnPlaced_fn(Element__BoundsChanged* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void Uno.IDisposable.Dispose() :87
void Element__BoundsChanged__UnoIDisposableDispose_fn(Element__BoundsChanged* __this)
{
    uStackFrame __("Fuse.Elements.Element.BoundsChanged", "Uno.IDisposable.Dispose()");
    uPtr(__this->_element)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Element__BoundsChanged__OnPlaced_fn, __this));
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public BoundsChanged(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) [instance] :74
void Element__BoundsChanged::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.BoundsChanged", ".ctor(Fuse.Elements.Element,Uno.Action<Uno.Rect>)");
    _element = element;
    _handler = handler;
    uPtr(_handler)->InvokeVoid(uCRef(::g::Uno::Rect__New2(uPtr(_element)->ActualPosition(), uPtr(_element)->ActualSize())));
    uPtr(_element)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Element__BoundsChanged__OnPlaced_fn, this));
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :82
void Element__BoundsChanged::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Elements.Element.BoundsChanged", "OnPlaced(object,Fuse.PlacedArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(::g::Uno::Rect__New2(uPtr(args)->NewPosition(), uPtr(args)->NewSize())));
}

// public BoundsChanged New(Fuse.Elements.Element element, Uno.Action<Uno.Rect> handler) [static] :74
Element__BoundsChanged* Element__BoundsChanged::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__BoundsChanged* obj1 = (Element__BoundsChanged*)uNew(Element__BoundsChanged_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Transform.uno
// -----------------------------------------------------------------------

// private sealed class TransformOrigins.BoxCenter :63
// {
static void TransformOrigins__BoxCenter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__BoxCenter_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(TransformOrigins__BoxCenter, Depth), 0);
}

TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof()
{
    static uSStrong<TransformOrigins__BoxCenter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__BoxCenter);
    options.TypeSize = sizeof(TransformOrigins__BoxCenter_type);
    type = (TransformOrigins__BoxCenter_type*)uClassType::New("Fuse.Elements.TransformOrigins.BoxCenter", options);
    type->fp_build_ = TransformOrigins__BoxCenter_build;
    type->fp_ctor_ = (void*)TransformOrigins__BoxCenter__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__BoxCenter__GetOffset_fn;
    return type;
}

// public generated BoxCenter() :63
void TransformOrigins__BoxCenter__ctor__fn(TransformOrigins__BoxCenter* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :67
void TransformOrigins__BoxCenter__GetOffset_fn(TransformOrigins__BoxCenter* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated BoxCenter New() :63
void TransformOrigins__BoxCenter__New1_fn(TransformOrigins__BoxCenter** __retval)
{
    *__retval = TransformOrigins__BoxCenter::New1();
}

// public generated BoxCenter() [instance] :63
void TransformOrigins__BoxCenter::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :67
::g::Uno::Float3 TransformOrigins__BoxCenter::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.BoxCenter", "GetOffset(Fuse.Elements.Element)");
    float depth = ::g::Uno::Vector::Dot(Depth, uPtr(elm)->ActualSize());
    ::g::Uno::Float3 q = ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(elm->ActualSize(), 2.0f), depth / 2.0f);
    return q;
}

// public generated BoxCenter New() [static] :63
TransformOrigins__BoxCenter* TransformOrigins__BoxCenter::New1()
{
    TransformOrigins__BoxCenter* obj1 = (TransformOrigins__BoxCenter*)uNew(TransformOrigins__BoxCenter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/BoxSizing.uno
// ---------------------------------------------------------------

// public struct BoxPlacement :9
// {
static void BoxPlacement_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(BoxPlacement, MarginBox), 0,
        ::g::Uno::Float2_typeof(), offsetof(BoxPlacement, Position), 0,
        ::g::Uno::Float2_typeof(), offsetof(BoxPlacement, Size), 0);
    type->Reflection.SetFields(3,
        new uField("MarginBox", 0),
        new uField("Position", 1),
        new uField("Size", 2));
}

uStructType* BoxPlacement_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.Alignment = alignof(BoxPlacement);
    options.ValueSize = sizeof(BoxPlacement);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.BoxPlacement", options);
    type->fp_build_ = BoxPlacement_build;
    return type;
}

// private bool NoGood(float value) :18
void BoxPlacement__NoGood_fn(BoxPlacement* __this, float* value, bool* __retval)
{
    *__retval = __this->NoGood(*value);
}

// private bool NoGoodSize(float value) :22
void BoxPlacement__NoGoodSize_fn(BoxPlacement* __this, float* value, bool* __retval)
{
    *__retval = __this->NoGoodSize(*value);
}

// internal bool SanityConstrain() :27
void BoxPlacement__SanityConstrain_fn(BoxPlacement* __this, bool* __retval)
{
    *__retval = __this->SanityConstrain();
}

// private bool NoGood(float value) [instance] :18
bool BoxPlacement::NoGood(float value)
{
    return ::g::Uno::Float::IsInfinity(value) || ::g::Uno::Float::IsNaN(value);
}

// private bool NoGoodSize(float value) [instance] :22
bool BoxPlacement::NoGoodSize(float value)
{
    return NoGood(value) || (value < 0.0f);
}

// internal bool SanityConstrain() [instance] :27
bool BoxPlacement::SanityConstrain()
{
    bool ret = false;

    if (NoGoodSize(MarginBox.X))
    {
        ret = true;
        MarginBox.X = 0.0f;
    }

    if (NoGoodSize(MarginBox.Y))
    {
        ret = true;
        MarginBox.Y = 0.0f;
    }

    if (NoGoodSize(Size.X))
    {
        ret = true;
        Size.X = 0.0f;
    }

    if (NoGoodSize(Size.Y))
    {
        ret = true;
        Size.Y = 0.0f;
    }

    if (NoGood(Position.X))
    {
        ret = true;
        Position.X = 0.0f;
    }

    if (NoGood(Position.Y))
    {
        ret = true;
        Position.Y = 0.0f;
    }

    return ret;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/BoxSizing.uno
// ---------------------------------------------------------------

// internal abstract class BoxSizing :65
// {
static void BoxSizing_build(uType* type)
{
}

BoxSizing_type* BoxSizing_typeof()
{
    static uSStrong<BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(BoxSizing);
    options.TypeSize = sizeof(BoxSizing_type);
    type = (BoxSizing_type*)uClassType::New("Fuse.Elements.BoxSizing", options);
    type->fp_build_ = BoxSizing_build;
    type->fp_IsContentRelativeSize = BoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = BoxSizing__RequestLayout_fn;
    return type;
}

// protected generated BoxSizing() :65
void BoxSizing__ctor__fn(BoxSizing* __this)
{
    __this->ctor_();
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, Uno.UX.Size2& anchor) :152
void BoxSizing__EffectiveAnchor_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* halign, int32_t* valign, ::g::Uno::UX::Size2* anchor)
{
    __this->EffectiveAnchor(element, *halign, *valign, anchor);
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) :109
void BoxSizing__EffectiveHorizontalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval)
{
    *__retval = __this->EffectiveHorizontalAlignment(element);
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) :126
void BoxSizing__EffectiveVerticalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval)
{
    *__retval = __this->EffectiveVerticalAlignment(element);
}

// protected Fuse.LayoutParams GetConstraints(Fuse.Elements.Element element, Fuse.LayoutParams lp, [Fuse.Elements.BoxSizing.ConstraintFlags flags]) :170
void BoxSizing__GetConstraints_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, int32_t* flags, ::g::Fuse::LayoutParams* __retval)
{
    *__retval = __this->GetConstraints(element, *lp, *flags);
}

// public virtual Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :83
void BoxSizing__IsContentRelativeSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval)
{
    return *__retval = 4, void();
}

// public virtual void RequestLayout(Fuse.Elements.Element element) :81
void BoxSizing__RequestLayout_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) :143
void BoxSizing__SimpleToAnchor_fn(BoxSizing* __this, int32_t* align, float* __retval)
{
    *__retval = __this->SimpleToAnchor(*align);
}

// protected float UnitSize(Fuse.Elements.Element element, Uno.UX.Size value, float relative, bool hasRelative, bool& known) :89
void BoxSizing__UnitSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size* value, float* relative, bool* hasRelative, bool* known, float* __retval)
{
    *__retval = __this->UnitSize(element, *value, *relative, *hasRelative, known);
}

// protected generated BoxSizing() [instance] :65
void BoxSizing::ctor_()
{
}

// protected void EffectiveAnchor(Fuse.Elements.Element element, Fuse.Elements.SimpleAlignment halign, Fuse.Elements.SimpleAlignment valign, Uno.UX.Size2& anchor) [instance] :152
void BoxSizing::EffectiveAnchor(::g::Fuse::Elements::Element* element, int32_t halign, int32_t valign, ::g::Uno::UX::Size2* anchor)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveAnchor(Fuse.Elements.Element,Fuse.Elements.SimpleAlignment,Fuse.Elements.SimpleAlignment,Uno.UX.Size2&)");

    if (uPtr(element)->HasBit(4096))
    {
        *anchor = uPtr(element)->Anchor();
        return;
    }

    *anchor = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(SimpleToAnchor(halign), 4), ::g::Uno::UX::Size__New1(SimpleToAnchor(valign), 4));
}

// protected Fuse.Elements.SimpleAlignment EffectiveHorizontalAlignment(Fuse.Elements.Element element) [instance] :109
int32_t BoxSizing::EffectiveHorizontalAlignment(::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveHorizontalAlignment(Fuse.Elements.Element)");
    int32_t raw = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment());

    if (raw == 1)
        return 0;

    if (raw == 3)
        return 2;

    if (raw == 2)
        return 1;

    if (element->HasBit(16384))
        return 0;

    return 1;
}

// protected Fuse.Elements.SimpleAlignment EffectiveVerticalAlignment(Fuse.Elements.Element element) [instance] :126
int32_t BoxSizing::EffectiveVerticalAlignment(::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "EffectiveVerticalAlignment(Fuse.Elements.Element)");
    int32_t raw = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment());

    if (raw == 4)
        return 0;

    if (raw == 12)
        return 2;

    if (raw == 8)
        return 1;

    if (element->HasBit(32768))
        return 0;

    return 1;
}

// protected Fuse.LayoutParams GetConstraints(Fuse.Elements.Element element, Fuse.LayoutParams lp, [Fuse.Elements.BoxSizing.ConstraintFlags flags]) [instance] :170
::g::Fuse::LayoutParams BoxSizing::GetConstraints(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp, int32_t flags)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "GetConstraints(Fuse.Elements.Element,Fuse.LayoutParams,[Fuse.Elements.BoxSizing.ConstraintFlags])");
    ::g::Fuse::LayoutParams c = ::g::Fuse::LayoutParams__CreateEmpty();
    bool known = false;

    if (!uPtr(element)->Width().IsAuto())
    {
        float x = UnitSize(element, uPtr(element)->Width(), lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.SetX(x);
    }
    else if ((lp.HasX() && (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) == 0)) && !uPtr(element)->HasBit(16384))
        c.SetX(lp.X());

    if (!uPtr(element)->Height().IsAuto())
    {
        float y = UnitSize(element, uPtr(element)->Height(), lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.SetY(y);
    }
    else if ((lp.HasY() && (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(uPtr(element)->Alignment()) == 0)) && !uPtr(element)->HasBit(32768))
        c.SetY(lp.Y());

    known = false;
    ::g::Uno::UX::Size limit = ::g::Uno::UX::Size__op_Implicit2(0);

    if (uPtr(element)->HasBit(256))
    {
        limit = uPtr(element)->MaxWidth();
        known = true;
    }
    else if (((flags & 2) == 2) && uPtr(element)->Width().IsAuto())
    {
        limit = ::g::Uno::UX::Size__op_Implicit1(lp.X());
        known = lp.HasX();
    }

    if (known)
    {
        float mx = UnitSize(element, limit, lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.ConstrainMaxX(mx);
    }

    known = false;

    if (uPtr(element)->HasBit(512))
    {
        limit = uPtr(element)->MaxHeight();
        known = true;
    }
    else if (((flags & 2) == 2) && uPtr(element)->Height().IsAuto())
    {
        limit = ::g::Uno::UX::Size__op_Implicit1(lp.Y());
        known = lp.HasY();
    }

    if (known)
    {
        float my = UnitSize(element, limit, lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.ConstrainMaxY(my);
    }

    if (uPtr(element)->HasBit(64))
    {
        float mn = UnitSize(element, uPtr(element)->MinWidth(), lp.RelativeX(), lp.HasRelativeX(), &known);

        if (known)
            c.ConstrainMinX(mn);
    }

    if (uPtr(element)->HasBit(128))
    {
        float mn1 = UnitSize(element, uPtr(element)->MinHeight(), lp.RelativeY(), lp.HasRelativeY(), &known);

        if (known)
            c.ConstrainMinY(mn1);
    }

    return c;
}

// protected float SimpleToAnchor(Fuse.Elements.SimpleAlignment align) [instance] :143
float BoxSizing::SimpleToAnchor(int32_t align)
{
    if (align == 0)
        return 0.0f;

    if (align == 2)
        return 100.0f;

    return 50.0f;
}

// protected float UnitSize(Fuse.Elements.Element element, Uno.UX.Size value, float relative, bool hasRelative, bool& known) [instance] :89
float BoxSizing::UnitSize(::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size value, float relative, bool hasRelative, bool* known)
{
    uStackFrame __("Fuse.Elements.BoxSizing", "UnitSize(Fuse.Elements.Element,Uno.UX.Size,float,bool,bool&)");
    *known = true;
    int32_t u = value.DetermineUnit();

    if (u == 2)
        return value.Value;

    if (u == 3)
        return value.Value / uPtr(element)->AbsoluteZoom();

    if (hasRelative)
        return (value.Value * relative) / 100.0f;

    *known = false;
    return 0.0f;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Layout.uno
// --------------------------------------------------------------------

// public enum Element.BoxSizingMode :155
uEnumType* Element__BoxSizingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Element.BoxSizingMode", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Standard", 0LL,
        "NoImplicitMax", 1LL,
        "Limit", 2LL,
        "LayoutMaster", 3LL,
        "FillAspect", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/Cache.Heuristic.uno
// -----------------------------------------------------------------------------

// internal partial sealed class Cache :8
// {
// static generated Cache() :8
static void Cache__cctor__fn(uType* __type)
{
    Cache::cacheHelper_ = ::g::Fuse::Elements::CacheHelper::New1();
}

static void Cache_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Elements::CacheTile_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Cache, _isValid), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(Cache, _element), uFieldFlagsWeak,
        ::g::Uno::Recti_typeof(), offsetof(Cache, _cacheRect), 0,
        ::TYPES[2/*Fuse.Elements.CacheTile[]*/], offsetof(Cache, _cacheTiles), 0,
        ::g::Fuse::Elements::CacheHelper_typeof(), (uintptr_t)&Cache::cacheHelper_, uFieldFlagsStatic);
}

uType* Cache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Cache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.Cache", options);
    type->fp_build_ = Cache_build;
    type->fp_cctor_ = Cache__cctor__fn;
    return type;
}

// public Cache(Fuse.Elements.Element elm) :43
void Cache__ctor__fn(Cache* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// private void Blit(Fuse.DrawContext dc, float opacity) :229
void Cache__Blit_fn(Cache* __this, ::g::Fuse::DrawContext* dc, float* opacity)
{
    __this->Blit(dc, *opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() :41
void Cache__get_CacheTiles_fn(Cache* __this, uArray** __retval)
{
    *__retval = __this->CacheTiles();
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) :118
void Cache__CalculateCompositMatrix_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* cachingRect, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->CalculateCompositMatrix(dc, *cachingRect);
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :87
void Cache__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = Cache::ConservativelySnapToCoveringIntegers(*r);
}

// internal bool DrawCached(Fuse.DrawContext dc) :54
void Cache__DrawCached_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->DrawCached(dc);
}

// internal void DrawHeuristically(Fuse.DrawContext dc) :75
void Cache__DrawHeuristically_fn(Cache* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawHeuristically(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) :12
void Cache__GetCachePreference_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreference(dc);
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) :66
void Cache__GetCachePreferenceCore_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->GetCachePreferenceCore(dc);
}

// private bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) :99
void Cache__GetCachingRect_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = __this->GetCachingRect(dc, rect);
}

// private static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) :104
void Cache__GetCachingRect1_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = Cache::GetCachingRect1(elm, rect);
}

// internal void Invalidate() :49
void Cache__Invalidate_fn(Cache* __this)
{
    __this->Invalidate();
}

// internal int get_MaxTileSize() :124
void Cache__get_MaxTileSize_fn(Cache* __this, int32_t* __retval)
{
    *__retval = __this->MaxTileSize();
}

// public Cache New(Fuse.Elements.Element elm) :43
void Cache__New1_fn(::g::Fuse::Elements::Element* elm, Cache** __retval)
{
    *__retval = Cache::New1(elm);
}

// private bool PinAndValidate(Fuse.DrawContext dc) :126
void Cache__PinAndValidate_fn(Cache* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    *__retval = __this->PinAndValidate(dc);
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) :196
void Cache__Repaint_fn(Cache* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile* tile)
{
    __this->Repaint(dc, *tile);
}

// private void Unpin(bool validate) :188
void Cache__Unpin_fn(Cache* __this, bool* validate)
{
    __this->Unpin(*validate);
}

uSStrong< ::g::Fuse::Elements::CacheHelper*> Cache::cacheHelper_;

// public Cache(Fuse.Elements.Element elm) [instance] :43
void Cache::ctor_(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.Cache", ".ctor(Fuse.Elements.Element)");
    _element = elm;

    if (_element == NULL)
        U_THROW(::g::Uno::Exception::New1());
}

// private void Blit(Fuse.DrawContext dc, float opacity) [instance] :229
void Cache::Blit(::g::Fuse::DrawContext* dc, float opacity)
{
    uStackFrame __("Fuse.Elements.Cache", "Blit(Fuse.DrawContext,float)");
    uPtr(Cache::cacheHelper_)->Blit(dc, this, opacity);
}

// public Fuse.Elements.CacheTile[] get_CacheTiles() [instance] :41
uArray* Cache::CacheTiles()
{
    return _cacheTiles;
}

// internal float4x4 CalculateCompositMatrix(Fuse.DrawContext dc, Uno.Recti cachingRect) [instance] :118
::g::Uno::Float4x4 Cache::CalculateCompositMatrix(::g::Fuse::DrawContext* dc, ::g::Uno::Recti cachingRect)
{
    uStackFrame __("Fuse.Elements.Cache", "CalculateCompositMatrix(Fuse.DrawContext,Uno.Recti)");
    ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation((float)cachingRect.Left / uPtr(_element)->AbsoluteZoom(), (float)cachingRect.Top / uPtr(_element)->AbsoluteZoom(), 0.0f);
    return ::g::Uno::Matrix::Mul8(translation, uPtr(_element)->WorldTransform());
}

// internal bool DrawCached(Fuse.DrawContext dc) [instance] :54
bool Cache::DrawCached(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "DrawCached(Fuse.DrawContext)");

    if (!PinAndValidate(dc))
        return false;

    bool validated = false;

    {
        try
        {
            {
                Blit(dc, uPtr(_element)->Opacity());
                validated = true;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                Unpin(validated);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            Unpin(validated);
        }
        __after_finally_0:;
    }

    return validated;
}

// internal void DrawHeuristically(Fuse.DrawContext dc) [instance] :75
void Cache::DrawHeuristically(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "DrawHeuristically(Fuse.DrawContext)");

    if (GetCachePreference(dc))
        DrawCached(dc);
    else
        uPtr(_element)->CompositEffects(dc);
}

// private bool GetCachePreference(Fuse.DrawContext dc) [instance] :12
bool Cache::GetCachePreference(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachePreference(Fuse.DrawContext)");
    ::g::Uno::Recti cachingRect;

    if (!GetCachingRect(dc, &cachingRect))
        return false;

    switch (uPtr(_element)->CachingMode())
    {
        case 2:
            return false;
        case 1:
            return true;
    }

    if (((double)cachingRect.Size().X > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().X * 1.2)) || ((double)cachingRect.Size().Y > ((double)uPtr(uPtr(dc)->RenderTarget())->Size().Y * 1.2)))
        return false;

    if (uIs((::g::Fuse::Visual*)uPtr(_element)->Parent(), ::TYPES[1/*Fuse.RootViewport*/]))
        ;
    else if (uPtr(_element)->Parent() == NULL)
        return GetCachePreferenceCore(dc);
    else
    {
        if (uPtr(_element)->DrawCost() > 1.0)
            return GetCachePreferenceCore(dc);
        else
            ;
    }

    return false;
}

// private bool GetCachePreferenceCore(Fuse.DrawContext dc) [instance] :66
bool Cache::GetCachePreferenceCore(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachePreferenceCore(Fuse.DrawContext)");

    if (uPtr(_element)->ValidFrameCount() > 0)
    {
        if (!uPtr(dc)->IsCaching())
            return true;
        else
            ;
    }
    else
        ;

    return false;
}

// private bool GetCachingRect(Fuse.DrawContext dc, Uno.Recti& rect) [instance] :99
bool Cache::GetCachingRect(::g::Fuse::DrawContext* dc, ::g::Uno::Recti* rect)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachingRect(Fuse.DrawContext,Uno.Recti&)");
    return Cache::GetCachingRect1(_element, rect);
}

// internal void Invalidate() [instance] :49
void Cache::Invalidate()
{
    _isValid = false;
}

// internal int get_MaxTileSize() [instance] :124
int32_t Cache::MaxTileSize()
{
    return ::g::Uno::Graphics::Texture2D::MaxSize();
}

// private bool PinAndValidate(Fuse.DrawContext dc) [instance] :126
bool Cache::PinAndValidate(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Cache", "PinAndValidate(Fuse.DrawContext)");
    ::g::Uno::Recti cacheRect;

    if (!GetCachingRect(dc, &cacheRect))
        return false;

    if (!::g::Uno::Recti__Equals2(cacheRect, _cacheRect))
    {
        int32_t numTilesX = ((cacheRect.Size().X + MaxTileSize()) - 1) / MaxTileSize();
        int32_t numTilesY = ((cacheRect.Size().Y + MaxTileSize()) - 1) / MaxTileSize();
        int32_t numTiles = numTilesX * numTilesY;

        if ((_cacheTiles == NULL) || (numTiles != uPtr(_cacheTiles)->Length()))
            _cacheTiles = uArray::New(::TYPES[2/*Fuse.Elements.CacheTile[]*/], numTiles);

        for (int32_t y = 0; y < numTilesY; ++y)

            for (int32_t x = 0; x < numTilesX; ++x)
            {
                int32_t tile = x + (y * numTilesX);
                ::g::Uno::Int2 Position = ::g::Uno::Int2__New2(x * MaxTileSize(), y * MaxTileSize());
                uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(tile)._rect = ::g::Uno::Recti__New1(cacheRect.Left + Position.X, cacheRect.Top + Position.Y, (cacheRect.Left + Position.X) + ::g::Uno::Math::Min8(cacheRect.Size().X - Position.X, MaxTileSize()), (cacheRect.Top + Position.Y) + ::g::Uno::Math::Min8(cacheRect.Size().Y - Position.Y, MaxTileSize()));
            }
    }

    try
    {
        {
            for (int32_t i = 0; i < uPtr(_cacheTiles)->Length(); ++i)
            {
                uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i).EnsureHasFramebuffer();
                uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._compositMatrix = CalculateCompositMatrix(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._rect);
                uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->Pin();

                if (!uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i)._framebuffer)->IsContentValid() || !_isValid)
                    Repaint(dc, uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i));
            }
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;

        for (int32_t i1 = 0; i1 < uPtr(_cacheTiles)->Length(); ++i1)
            if (uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i1)._framebuffer)->IsPinned())
                uPtr(uPtr(_cacheTiles)->Item< ::g::Fuse::Elements::CacheTile>(i1)._framebuffer)->Unpin(false);

        throw __t;
    }

    _isValid = true;
    return true;
}

// private void Repaint(Fuse.DrawContext dc, Fuse.Elements.CacheTile tile) [instance] :196
void Cache::Repaint(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::CacheTile tile)
{
    uStackFrame __("Fuse.Elements.Cache", "Repaint(Fuse.DrawContext,Fuse.Elements.CacheTile)");
    ::g::Fuse::OrthographicFrustum* collection4;
    ::g::Uno::Float2 ind5;
    ::g::Uno::Float2 ind6;
    ::g::Uno::Float4x4 ind7;
    collection4 = ::g::Fuse::OrthographicFrustum::New1();
    ind5 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Minimum().X, (float)tile._rect.Minimum().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Origin(ind5);
    ind5;
    ind6 = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tile._rect.Size().X, (float)tile._rect.Size().Y), uPtr(_element)->AbsoluteZoom());
    uPtr(collection4)->Size(ind6);
    ind6;
    ind7 = uPtr(_element)->WorldTransformInverse();
    uPtr(collection4)->LocalFromWorld(ind7);
    ind7;
    ::g::Fuse::OrthographicFrustum* cc = collection4;
    bool oldIsCaching = uPtr(dc)->IsCaching();
    dc->IsCaching(true);
    dc->PushRenderTargetFrustum(uPtr(tile._framebuffer)->Framebuffer(), (uObject*)cc);

    {
        try
        {
            {
                uPtr(dc)->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
                uPtr(_element)->CompositEffects(dc);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                uPtr(dc)->PopRenderTargetFrustum();
                dc->IsCaching(oldIsCaching);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            uPtr(dc)->PopRenderTargetFrustum();
            dc->IsCaching(oldIsCaching);
        }
        __after_finally_1:;
    }
}

// private void Unpin(bool validate) [instance] :188
void Cache::Unpin(bool validate)
{
    uStackFrame __("Fuse.Elements.Cache", "Unpin(bool)");
    uArray* array1;
    int32_t index2;
    int32_t length3;

    for (array1 = _cacheTiles, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        uPtr(tile._framebuffer)->Unpin(validate);
    }
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :87
::g::Uno::Recti Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    Cache_typeof()->Init();
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Floor2(r.LeftTop()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Subtraction2(r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// private static bool GetCachingRect(Fuse.Elements.Element elm, Uno.Recti& rect) [static] :104
bool Cache::GetCachingRect1(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* rect)
{
    uStackFrame __("Fuse.Elements.Cache", "GetCachingRect(Fuse.Elements.Element,Uno.Recti&)");
    Cache_typeof()->Init();
    ::g::Fuse::VisualBounds* bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (uPtr(bounds)->IsInfinite() || uPtr(bounds)->IsEmpty())
    {
        *rect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }

    *rect = ::g::Uno::Recti__Inflate(Cache::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(uPtr(bounds)->FlatRect(), elm->AbsoluteZoom())), 1);
    return true;
}

// public Cache New(Fuse.Elements.Element elm) [static] :43
Cache* Cache::New1(::g::Fuse::Elements::Element* elm)
{
    Cache* obj8 = (Cache*)uNew(Cache_typeof());
    obj8->ctor_(elm);
    return obj8;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/Cache.uno
// -------------------------------------------------------------------

// internal sealed class CacheHelper :235
// {
static void CacheHelper_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::IRenderViewport_typeof();
    type->SetDependencies(
        ::g::Fuse::Common::Blitter_typeof());
}

uType* CacheHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CacheHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.CacheHelper", options);
    type->fp_build_ = CacheHelper_build;
    type->fp_ctor_ = (void*)CacheHelper__New1_fn;
    return type;
}

// public generated CacheHelper() :235
void CacheHelper__ctor__fn(CacheHelper* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) :237
void CacheHelper__Blit_fn(CacheHelper* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float* opacity)
{
    __this->Blit(dc, cache, *opacity);
}

// public generated CacheHelper New() :235
void CacheHelper__New1_fn(CacheHelper** __retval)
{
    *__retval = CacheHelper::New1();
}

// public generated CacheHelper() [instance] :235
void CacheHelper::ctor_()
{
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Cache cache, float opacity) [instance] :237
void CacheHelper::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float opacity)
{
    uStackFrame __("Fuse.Elements.CacheHelper", "Blit(Fuse.DrawContext,Fuse.Elements.Cache,float)");
    uArray* array1;
    int32_t index2;
    int32_t length3;

    for (array1 = uPtr(cache)->CacheTiles(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Elements::CacheTile tile = uPtr(array1)->Item< ::g::Fuse::Elements::CacheTile>(index2);
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(tile.Texture())->Size().X, (float)uPtr(tile.Texture())->Size().Y), uPtr(dc)->ViewportPixelsPerPoint());
        ::g::Uno::Float4x4 localToClipTransform = ::g::Uno::Matrix::Mul8(tile._compositMatrix, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[4/*Fuse.IRenderViewport*/])));
        uPtr(::g::Fuse::Common::Blitter::Singleton())->Blit1(tile.Texture(), ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), size), localToClipTransform, opacity, true, dc->CullFace());
    }
}

// public generated CacheHelper New() [static] :235
CacheHelper* CacheHelper::New1()
{
    CacheHelper* obj4 = (CacheHelper*)uNew(CacheHelper_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/Cache.uno
// -------------------------------------------------------------------

// internal struct CacheTile :11
// {
static void CacheTile_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(CacheTile, _compositMatrix), 0,
        ::g::Fuse::CacheFramebuffer_typeof(), offsetof(CacheTile, _framebuffer), 0,
        ::g::Uno::Recti_typeof(), offsetof(CacheTile, _rect), 0);
}

uStructType* CacheTile_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.Alignment = alignof(CacheTile);
    options.ValueSize = sizeof(CacheTile);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.CacheTile", options);
    type->fp_build_ = CacheTile_build;
    return type;
}

// public void EnsureHasFramebuffer() :19
void CacheTile__EnsureHasFramebuffer_fn(CacheTile* __this)
{
    __this->EnsureHasFramebuffer();
}

// public texture2D get_Texture() :17
void CacheTile__get_Texture_fn(CacheTile* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->Texture();
}

// public void EnsureHasFramebuffer() [instance] :19
void CacheTile::EnsureHasFramebuffer()
{
    uStackFrame __("Fuse.Elements.CacheTile", "EnsureHasFramebuffer()");

    if (((_framebuffer == NULL) || (uPtr(_framebuffer)->Width() != _rect.Size().X)) || (uPtr(_framebuffer)->Height() != _rect.Size().Y))
    {
        if (_framebuffer != NULL)
            uPtr(_framebuffer)->Dispose();

        _framebuffer = ::g::Fuse::CacheFramebuffer::New1(_rect.Size().X, _rect.Size().Y, 3, 0);
    }
}

// public texture2D get_Texture() [instance] :17
::g::Uno::Graphics::Texture2D* CacheTile::Texture()
{
    uStackFrame __("Fuse.Elements.CacheTile", "get_Texture()");
    return uPtr(uPtr(_framebuffer)->Framebuffer())->ColorBuffer();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// public enum CachingMode :160
uEnumType* CachingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.CachingMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Optimized", 0LL,
        "Always", 1LL,
        "Never", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Transform.uno
// -----------------------------------------------------------------------

// private sealed class TransformOrigins.CenterOrigin :53
// {
static void TransformOrigins__CenterOrigin_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__CenterOrigin_type, interface0));
}

TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof()
{
    static uSStrong<TransformOrigins__CenterOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__CenterOrigin);
    options.TypeSize = sizeof(TransformOrigins__CenterOrigin_type);
    type = (TransformOrigins__CenterOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.CenterOrigin", options);
    type->fp_build_ = TransformOrigins__CenterOrigin_build;
    type->fp_ctor_ = (void*)TransformOrigins__CenterOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__CenterOrigin__GetOffset_fn;
    return type;
}

// public generated CenterOrigin() :53
void TransformOrigins__CenterOrigin__ctor__fn(TransformOrigins__CenterOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :55
void TransformOrigins__CenterOrigin__GetOffset_fn(TransformOrigins__CenterOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated CenterOrigin New() :53
void TransformOrigins__CenterOrigin__New1_fn(TransformOrigins__CenterOrigin** __retval)
{
    *__retval = TransformOrigins__CenterOrigin::New1();
}

// public generated CenterOrigin() [instance] :53
void TransformOrigins__CenterOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :55
::g::Uno::Float3 TransformOrigins__CenterOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.TransformOrigins.CenterOrigin", "GetOffset(Fuse.Elements.Element)");
    return ::g::Uno::Float3__New4(::g::Uno::Float2__op_Division1(uPtr(elm)->ActualSize(), 2.0f), 0.0f);
}

// public generated CenterOrigin New() [static] :53
TransformOrigins__CenterOrigin* TransformOrigins__CenterOrigin::New1()
{
    TransformOrigins__CenterOrigin* obj1 = (TransformOrigins__CenterOrigin*)uNew(TransformOrigins__CenterOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/BoxSizing.uno
// ---------------------------------------------------------------

// protected enum BoxSizing.ConstraintFlags :165
uEnumType* BoxSizing__ConstraintFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.BoxSizing.ConstraintFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "ImplicitMax", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.UnoHostInterface.uno
// ------------------------------------------------------------------------------

// private sealed extern class Element.DefaultDisposable :11
// {
static void Element__DefaultDisposable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__DefaultDisposable_type, interface0));
    type->SetFields(0,
        ::g::Uno::IDisposable_typeof(), (uintptr_t)&Element__DefaultDisposable::_instance_, uFieldFlagsStatic);
}

Element__DefaultDisposable_type* Element__DefaultDisposable_typeof()
{
    static uSStrong<Element__DefaultDisposable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__DefaultDisposable);
    options.TypeSize = sizeof(Element__DefaultDisposable_type);
    type = (Element__DefaultDisposable_type*)uClassType::New("Fuse.Elements.Element.DefaultDisposable", options);
    type->fp_build_ = Element__DefaultDisposable_build;
    type->fp_ctor_ = (void*)Element__DefaultDisposable__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__DefaultDisposable__UnoIDisposableDispose_fn;
    return type;
}

// public generated DefaultDisposable() :11
void Element__DefaultDisposable__ctor__fn(Element__DefaultDisposable* __this)
{
    __this->ctor_();
}

// public static Uno.IDisposable get_Instance() :16
void Element__DefaultDisposable__get_Instance_fn(uObject** __retval)
{
    *__retval = Element__DefaultDisposable::Instance();
}

// public generated DefaultDisposable New() :11
void Element__DefaultDisposable__New1_fn(Element__DefaultDisposable** __retval)
{
    *__retval = Element__DefaultDisposable::New1();
}

// private void Uno.IDisposable.Dispose() :19
void Element__DefaultDisposable__UnoIDisposableDispose_fn(Element__DefaultDisposable* __this)
{
}

uSStrong<uObject*> Element__DefaultDisposable::_instance_;

// public generated DefaultDisposable() [instance] :11
void Element__DefaultDisposable::ctor_()
{
}

// public generated DefaultDisposable New() [static] :11
Element__DefaultDisposable* Element__DefaultDisposable::New1()
{
    Element__DefaultDisposable* obj2 = (Element__DefaultDisposable*)uNew(Element__DefaultDisposable_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Uno.IDisposable get_Instance() [static] :16
uObject* Element__DefaultDisposable::Instance()
{
    uStackFrame __("Fuse.Elements.Element.DefaultDisposable", "get_Instance()");
    uObject* ind1;
    ind1 = Element__DefaultDisposable::_instance_;
    return (ind1 != NULL) ? ind1 : (uObject*)(Element__DefaultDisposable::_instance_ = (uObject*)Element__DefaultDisposable::New1());
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementAtlasPool.uno
// ------------------------------------------------------------------------------

// internal static class DisplayHelpers :89
// {
static void DisplayHelpers_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof());
}

uClassType* DisplayHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.DisplayHelpers", options);
    type->fp_build_ = DisplayHelpers_build;
    return type;
}

// public static int2 get_DisplaySizeHint() :93
void DisplayHelpers__get_DisplaySizeHint_fn(::g::Uno::Int2* __retval)
{
    *__retval = DisplayHelpers::DisplaySizeHint();
}

// public static int2 get_DisplaySizeHint() [static] :93
::g::Uno::Int2 DisplayHelpers::DisplaySizeHint()
{
    return ::g::Uno::Int2__op_Explicit1(::g::Fuse::Platform::SystemUI::Frame().Size());
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/AspectBoxSizing.uno
// ---------------------------------------------------------------------

// public interfacemodifiers class Element :102
// {
// static Element() :10
static void Element__cctor_2_fn(uType* __type)
{
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    Element::_hitTestModeName_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("HitTestMode"));
    Element::_visibilityName_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Visibility"));
    Element::_clipToBoundsName_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ClipToBounds"));
    Element::_opacityName_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    Element::DefaultTransformOrigin_ = ::g::Fuse::Elements::TransformOrigins::Center();
    Element::ExplicitTransformOriginName_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("ExplicitTransformOrigin"));
    ::g::Fuse::Designer::UnoHostInterface::VisualAppearedFactory_ = uDelegate::New(::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Rect_typeof(), ::g::Uno::Float4x4_typeof(), NULL), ::TYPES[28/*Uno.IDisposable*/], NULL), (void*)Element__VisualAppearedFactory_fn);
    ::g::Fuse::Designer::UnoHostInterface::VisualDisappearedFactory_ = uDelegate::New(::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::TYPES[25/*Uno.Action*/], ::TYPES[28/*Uno.IDisposable*/], NULL), (void*)Element__VisualDisappearedFactory_fn);
    ::g::Fuse::Designer::UnoHostInterface::VisualTransformChangedFactory_ = uDelegate::New(::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4x4_typeof(), NULL), ::TYPES[28/*Uno.IDisposable*/], NULL), (void*)Element__VisualTransformChangedFactory_fn);
    ::g::Fuse::Designer::UnoHostInterface::VisualBoundsChangedFactory_ = uDelegate::New(::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Rect_typeof(), NULL), ::TYPES[28/*Uno.IDisposable*/], NULL), (void*)Element__VisualBoundsChangedFactory_fn);
}

static void Element_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Fuse::Elements::FillAspectBoxSizing_typeof(),
        ::g::Fuse::Elements::LayoutMasterBoxSizing_typeof(),
        ::g::Fuse::Elements::LimitBoxSizing_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Elements::NoImplicitMaxBoxSizing_typeof(),
        ::g::Fuse::Elements::StandardBoxSizing_typeof(),
        ::g::Fuse::UpdateManager_typeof(),
        ::g::Fuse::VisualBounds_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Element_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Element_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Element_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Element_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Element_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Element_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Element_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Element_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Element_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(Element_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Element_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Element_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Element_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Element_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Element_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Element_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Element_type, interface17));
    type->SetFields(69,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(Element, _elementBatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _elementBatchValid), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(Element, _renderBoundsWithEffects), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(Element, _renderBoundsWithoutEffects), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL), offsetof(Element, _effects), 0,
        ::g::Uno::Int_typeof(), offsetof(Element, _compositionEffects), 0,
        ::g::Fuse::Elements::Cache_typeof(), offsetof(Element, _cache), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _warnOpacityFlat), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _warnNoCacheDraw), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _dispatchedZOrderChanged), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _transformChanged), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(Element, _width), 0,
        ::g::Uno::UX::Size_typeof(), offsetof(Element, _height), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(Element, _alignment), 0,
        ::g::Fuse::Elements::Visibility_typeof(), offsetof(Element, _visibility), 0,
        ::g::Uno::Float2_typeof(), offsetof(Element, _actualPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(Element, _actualPositionCache), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _haveActualPositionCache), 0,
        ::g::Uno::Float2_typeof(), offsetof(Element, _actualSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(Element, _intendedSize), 0,
        ::g::Uno::Int_typeof(), offsetof(Element, _gmsCount), 0,
        ::g::Uno::Int_typeof(), offsetof(Element, _gmsAt), 0,
        Element__GMSCacheItem_typeof()->Array(), offsetof(Element, _gmsCache), 0,
        ::g::Fuse::Elements::BoxSizing_typeof(), offsetof(Element, _boxSizing), 0,
        Element__BoxSizingMode_typeof(), offsetof(Element, _boxSizingMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(Element, _actualAnchor), 0,
        ::g::Fuse::Node_typeof(), offsetof(Element, _placedBefore), uFieldFlagsWeak,
        ::g::Uno::Float2_typeof(), offsetof(Element, _ppPrevSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(Element, _ppPrevPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, ignoreTempArrange), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _pendingDispatchPlacement), 0,
        ::g::Uno::Bool_typeof(), offsetof(Element, _hasNotifiedRenderBoundsChanged), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), offsetof(Element, _rootedListeners), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), offsetof(Element, _unrootedListeners), 0,
        ::g::Fuse::Elements::ElementBatchEntry_typeof(), offsetof(Element, _ElementBatchEntry), 0,
        ::g::Fuse::PlacedHandler_typeof(), offsetof(Element, Placed1), 0,
        ::g::Fuse::Elements::PreplacementHandler_typeof(), offsetof(Element, Preplacement1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Element::_hitTestModeName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Element::_visibilityName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Element::_clipToBoundsName_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Element::_invalidValuesWarn_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Element::_opacityName_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&Element::DefaultTransformOrigin_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Element::ExplicitTransformOriginName_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("DefaultTransformOrigin", 111),
        new uField("ExplicitTransformOriginName", 112));
    type->Reflection.SetFunctions(72,
        new uFunction("get_ActualAnchor", NULL, (void*)Element__get_ActualAnchor_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualPosition", NULL, (void*)Element__get_ActualPosition_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_ActualSize", NULL, (void*)Element__get_ActualSize_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Alignment", NULL, (void*)Element__get_Alignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_Alignment", NULL, (void*)Element__set_Alignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Anchor", NULL, (void*)Element__get_Anchor_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Anchor", NULL, (void*)Element__set_Anchor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("get_Aspect", NULL, (void*)Element__get_Aspect_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Aspect", NULL, (void*)Element__set_Aspect_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_AspectConstraint", NULL, (void*)Element__get_AspectConstraint_fn, 0, false, ::g::Fuse::Elements::AspectConstraint_typeof(), 0),
        new uFunction("set_AspectConstraint", NULL, (void*)Element__set_AspectConstraint_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::AspectConstraint_typeof()),
        new uFunction("get_BoxSizing", NULL, (void*)Element__get_BoxSizing_fn, 0, false, Element__BoxSizingMode_typeof(), 0),
        new uFunction("set_BoxSizing", NULL, (void*)Element__set_BoxSizing_fn, 0, false, uVoid_typeof(), 1, Element__BoxSizingMode_typeof()),
        new uFunction("get_CachingMode", NULL, (void*)Element__get_CachingMode_fn, 0, false, ::g::Fuse::Elements::CachingMode_typeof(), 0),
        new uFunction("set_CachingMode", NULL, (void*)Element__set_CachingMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::CachingMode_typeof()),
        new uFunction("CaptureRegion", NULL, (void*)Element__CaptureRegion_fn, 0, false, ::g::Uno::Graphics::Framebuffer_typeof(), 3, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Rect_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_ClipToBounds", NULL, (void*)Element__get_ClipToBounds_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ClipToBounds", NULL, (void*)Element__set_ClipToBounds_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_ExplicitTransformOrigin", NULL, (void*)Element__get_ExplicitTransformOrigin_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_ExplicitTransformOrigin", NULL, (void*)Element__set_ExplicitTransformOrigin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("GetVisibleViewportInvertPixelRect", NULL, (void*)Element__GetVisibleViewportInvertPixelRect_fn, 0, false, ::g::Uno::Recti_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::VisualBounds_typeof()),
        new uFunction("get_Height", NULL, (void*)Element__get_Height_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Height", NULL, (void*)Element__set_Height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_HitTestMode", NULL, (void*)Element__get_HitTestMode_fn, 0, false, ::g::Fuse::Elements::HitTestMode_typeof(), 0),
        new uFunction("set_HitTestMode", NULL, (void*)Element__set_HitTestMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::HitTestMode_typeof()),
        new uFunction("InvalidateRenderBoundsWithEffects", NULL, (void*)Element__InvalidateRenderBoundsWithEffects_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("IsPointInside", NULL, (void*)Element__IsPointInside_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_LimitHeight", NULL, (void*)Element__get_LimitHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_LimitHeight", NULL, (void*)Element__set_LimitHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_LimitWidth", NULL, (void*)Element__get_LimitWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_LimitWidth", NULL, (void*)Element__set_LimitWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Margin", NULL, (void*)Element__get_Margin_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Margin", NULL, (void*)Element__set_Margin_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_MaxHeight", NULL, (void*)Element__get_MaxHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MaxHeight", NULL, (void*)Element__set_MaxHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MaxWidth", NULL, (void*)Element__get_MaxWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MaxWidth", NULL, (void*)Element__set_MaxWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MinHeight", NULL, (void*)Element__get_MinHeight_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MinHeight", NULL, (void*)Element__set_MinHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_MinWidth", NULL, (void*)Element__get_MinWidth_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_MinWidth", NULL, (void*)Element__set_MinWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Offset", NULL, (void*)Element__get_Offset_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Element__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("get_Opacity", NULL, (void*)Element__get_Opacity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)Element__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Padding", NULL, (void*)Element__get_Padding_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Padding", NULL, (void*)Element__set_Padding_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("add_Placed", NULL, (void*)Element__add_Placed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("remove_Placed", NULL, (void*)Element__remove_Placed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::PlacedHandler_typeof()),
        new uFunction("get_Position", NULL, (void*)Element__get_Position_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Element__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("add_Preplacement", NULL, (void*)Element__add_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PreplacementHandler_typeof()),
        new uFunction("remove_Preplacement", NULL, (void*)Element__remove_Preplacement_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PreplacementHandler_typeof()),
        new uFunction("get_RenderBoundsWithEffects", NULL, (void*)Element__get_RenderBoundsWithEffects_fn, 0, false, ::g::Fuse::VisualBounds_typeof(), 0),
        new uFunction("get_RenderBoundsWithoutEffects", NULL, (void*)Element__get_RenderBoundsWithoutEffects_fn, 0, false, ::g::Fuse::VisualBounds_typeof(), 0),
        new uFunction("SetExplicitTransformOrigin", NULL, (void*)Element__SetExplicitTransformOrigin_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::UX::Size2_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetHitTestMode", NULL, (void*)Element__SetHitTestMode_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Elements::HitTestMode_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetOpacity", NULL, (void*)Element__SetOpacity_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetVisibility", NULL, (void*)Element__SetVisibility_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Elements::Visibility_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Size", NULL, (void*)Element__get_Size_fn, 0, false, ::g::Uno::UX::Size2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)Element__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size2_typeof()),
        new uFunction("get_TransformOrigin", NULL, (void*)Element__get_TransformOrigin_fn, 0, false, ::g::Fuse::Elements::ITransformOrigin_typeof(), 0),
        new uFunction("set_TransformOrigin", NULL, (void*)Element__set_TransformOrigin_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::ITransformOrigin_typeof()),
        new uFunction("get_TreeRenderer", NULL, NULL, offsetof(Element_type, fp_get_TreeRenderer), false, ::g::Fuse::Elements::ITreeRenderer_typeof(), 0),
        new uFunction("get_Visibility", NULL, (void*)Element__get_Visibility_fn, 0, false, ::g::Fuse::Elements::Visibility_typeof(), 0),
        new uFunction("set_Visibility", NULL, (void*)Element__set_Visibility_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Visibility_typeof()),
        new uFunction("get_Width", NULL, (void*)Element__get_Width_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Element__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_X", NULL, (void*)Element__get_X_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_X", NULL, (void*)Element__set_X_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()),
        new uFunction("get_Y", NULL, (void*)Element__get_Y_fn, 0, false, ::g::Uno::UX::Size_typeof(), 0),
        new uFunction("set_Y", NULL, (void*)Element__set_Y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::Size_typeof()));
}

Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 113;
    options.InterfaceCount = 18;
    options.DependencyCount = 9;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.Elements.Element", options);
    type->fp_build_ = Element_build;
    type->fp_cctor_ = Element__cctor_2_fn;
    type->fp_get_AbsoluteViewportOrigin = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*))Element__get_AbsoluteViewportOrigin_fn;
    type->fp_ArrangePaddingBox = Element__ArrangePaddingBox_fn;
    type->fp_CalcRenderBounds = Element__CalcRenderBounds_fn;
    type->fp_get_CanAdjustMarginBox = (void(*)(::g::Fuse::Visual*, bool*))Element__get_CanAdjustMarginBox_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))Element__Draw_fn;
    type->fp_DrawWithChildren = Element__DrawWithChildren_fn;
    type->fp_FastTrackDrawWithOpacity = Element__FastTrackDrawWithOpacity_fn;
    type->fp_GetContentSize = Element__GetContentSize_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__GetMarginSize_fn;
    type->fp_get_HitTestChildrenBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Element__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Element__get_HitTestLocalBounds_fn;
    type->fp_get_HitTestLocalVisualBounds = Element__get_HitTestLocalVisualBounds_fn;
    type->fp_InvalidateLocalTransform = (void(*)(::g::Fuse::Visual*))Element__InvalidateLocalTransform_fn;
    type->fp_get_IsLocalVisible = (void(*)(::g::Fuse::Visual*, bool*))Element__get_IsLocalVisible_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Visual*, ::g::Fuse::Visual*, int32_t*))Element__IsMarginBoxDependent_fn;
    type->fp_get_LocalBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::Box*))Element__get_LocalBounds_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Element__get_LocalRenderBounds_fn;
    type->fp_OnAdjustMarginBoxPosition = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*))Element__OnAdjustMarginBoxPosition_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__OnArrangeMarginBox_fn;
    type->fp_OnChildAdded = (void(*)(::g::Fuse::Visual*, ::g::Fuse::Node*))Element__OnChildAdded_fn;
    type->fp_OnChildRemoved = (void(*)(::g::Fuse::Visual*, ::g::Fuse::Node*))Element__OnChildRemoved_fn;
    type->fp_OnDraw = Element__OnDraw_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Visual*, ::g::Fuse::HitTestContext*))Element__OnHitTest_fn;
    type->fp_OnHitTestLocalVisual = Element__OnHitTestLocalVisual_fn;
    type->fp_OnInvalidateLayout = (void(*)(::g::Fuse::Visual*))Element__OnInvalidateLayout_fn;
    type->fp_OnInvalidateRenderBounds = (void(*)(::g::Fuse::Visual*, bool*))Element__OnInvalidateRenderBounds_fn;
    type->fp_OnInvalidateVisual = (void(*)(::g::Fuse::Visual*))Element__OnInvalidateVisual_fn;
    type->fp_OnInvalidateVisualComposition = (void(*)(::g::Fuse::Visual*))Element__OnInvalidateVisualComposition_fn;
    type->fp_OnIsContextEnabledChanged = (void(*)(::g::Fuse::Visual*))Element__OnIsContextEnabledChanged_fn;
    type->fp_OnIsVisibleChanged = (void(*)(::g::Fuse::Visual*))Element__OnIsVisibleChanged_fn;
    type->fp_OnPreserveRootFrame = (void(*)(::g::Fuse::Node*))Element__OnPreserveRootFrame_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Element__OnRooted_fn;
    type->fp_OnRootedPreChildren = (void(*)(::g::Fuse::Visual*))Element__OnRootedPreChildren_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Element__OnUnrooted_fn;
    type->fp_OnZOrderInvalidated = (void(*)(::g::Fuse::Visual*))Element__OnZOrderInvalidated_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*))Element__PrependImplicitTransform_fn;
    type->fp_PrependInverseTransformOrigin = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*))Element__PrependInverseTransformOrigin_fn;
    type->fp_PrependTransformOrigin = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*))Element__PrependTransformOrigin_fn;
    type->fp_get_TreeRenderer = Element__get_TreeRenderer_fn;
    type->interface13.fp_Show = (void(*)(uObject*))Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// protected generated Element() :102
void Element__ctor_3_fn(Element* __this)
{
    __this->ctor_3();
}

// protected override sealed float2 get_AbsoluteViewportOrigin() :36
void Element__get_AbsoluteViewportOrigin_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_AbsoluteViewportOrigin()");
    ::g::Uno::Float2 ret21;
    ::g::Uno::Float2 p = __this->ActualPosition();
    p = ::g::Uno::Float2__op_Addition2(p, (::g::Fuse::Visual__get_AbsoluteViewportOrigin_fn(__this, &ret21), ret21));
    return *__retval = p, void();
}

// public float2 get_ActualAnchor() :250
void Element__get_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualAnchor();
}

// internal void set_ActualAnchor(float2 value) :251
void Element__set_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->ActualAnchor(*value);
}

// public float2 get_ActualPosition() :54
void Element__get_ActualPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualPosition();
}

// public float2 get_ActualSize() :88
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// public Fuse.Elements.Alignment get_Alignment() :163
void Element__get_Alignment_fn(Element* __this, int32_t* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Elements.Alignment value) :164
void Element__set_Alignment_fn(Element* __this, int32_t* value)
{
    __this->Alignment(*value);
}

// private Fuse.Elements.Element get_AncestorElement() :9
void Element__get_AncestorElement_fn(Element* __this, Element** __retval)
{
    *__retval = __this->AncestorElement();
}

// public Uno.UX.Size2 get_Anchor() :314
void Element__get_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Anchor();
}

// public void set_Anchor(Uno.UX.Size2 value) :315
void Element__set_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Anchor(*value);
}

// protected virtual void ArrangePaddingBox(Fuse.LayoutParams lp) :428
void Element__ArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp)
{
}

// public float get_Aspect() :115
void Element__get_Aspect_fn(Element* __this, float* __retval)
{
    *__retval = __this->Aspect();
}

// public void set_Aspect(float value) :116
void Element__set_Aspect_fn(Element* __this, float* value)
{
    __this->Aspect(*value);
}

// public Fuse.Elements.AspectConstraint get_AspectConstraint() :135
void Element__get_AspectConstraint_fn(Element* __this, int32_t* __retval)
{
    *__retval = __this->AspectConstraint();
}

// public void set_AspectConstraint(Fuse.Elements.AspectConstraint value) :136
void Element__set_AspectConstraint_fn(Element* __this, int32_t* value)
{
    __this->AspectConstraint(*value);
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() :173
void Element__get_BoxSizing_fn(Element* __this, int32_t* __retval)
{
    *__retval = __this->BoxSizing();
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) :174
void Element__set_BoxSizing_fn(Element* __this, int32_t* value)
{
    __this->BoxSizing(*value);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() :195
void Element__get_BoxSizingObject_fn(Element* __this, ::g::Fuse::Elements::BoxSizing** __retval)
{
    *__retval = __this->BoxSizingObject();
}

// private Fuse.Elements.Cache get_Cache() :88
void Element__get_Cache_fn(Element* __this, ::g::Fuse::Elements::Cache** __retval)
{
    *__retval = __this->Cache();
}

// public Fuse.Elements.CachingMode get_CachingMode() :20
void Element__get_CachingMode_fn(Element* __this, int32_t* __retval)
{
    *__retval = __this->CachingMode();
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) :21
void Element__set_CachingMode_fn(Element* __this, int32_t* value)
{
    __this->CachingMode(*value);
}

// protected virtual Fuse.VisualBounds CalcRenderBounds() :60
void Element__CalcRenderBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "CalcRenderBounds()");
    return *__retval = ::g::Fuse::VisualBounds::Merge1(__this->VisualChildren(), 0), void();
}

// protected Fuse.VisualBounds CalcRenderBoundsWithEffects() :8
void Element__CalcRenderBoundsWithEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->CalcRenderBoundsWithEffects();
}

// internal override sealed bool get_CanAdjustMarginBox() :329
void Element__get_CanAdjustMarginBox_fn(Element* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) :31
void Element__CaptureRegion_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* region, ::g::Uno::Float2* padding, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->CaptureRegion(dc, *region, *padding);
}

// private void CleanupBatching() :100
void Element__CleanupBatching_fn(Element* __this)
{
    __this->CleanupBatching();
}

// public bool get_ClipToBounds() :379
void Element__get_ClipToBounds_fn(Element* __this, bool* __retval)
{
    *__retval = __this->ClipToBounds();
}

// public void set_ClipToBounds(bool value) :380
void Element__set_ClipToBounds_fn(Element* __this, bool* value)
{
    __this->ClipToBounds(*value);
}

// private void Composit(Fuse.DrawContext dc) :94
void Element__Composit_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Composit(dc);
}

// internal void CompositEffects(Fuse.DrawContext dc) :134
void Element__CompositEffects_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->CompositEffects(dc);
}

// private void DispatchPlacement() :400
void Element__DispatchPlacement_fn(Element* __this)
{
    __this->DispatchPlacement();
}

// public override void Draw(Fuse.DrawContext dc) :64
void Element__Draw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "Draw(Fuse.DrawContext)");

    if (!__this->IsRootingCompleted())
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Draw called on a non-rooted node"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Drawing.uno"), 67, uString::Const("Draw"));

    if (__this->Visibility() != 0)
        return;

    double cullTime;
    ::g::Uno::Recti visibleRect = __this->GetVisibleViewportInvertPixelRect(dc, __this->RenderBoundsWithEffects());

    if ((visibleRect.Size().X == 0) || (visibleRect.Size().Y == 0))
        return;

    double t;

    if (__this->NeedsClipping())
    {
        uPtr(dc)->PushScissor(visibleRect);
        __this->Composit(dc);
        dc->PopScissor();
    }
    else
        __this->Composit(dc);
}

// protected void DrawNonUnderlayChildren(Fuse.DrawContext dc) :57
void Element__DrawNonUnderlayChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawNonUnderlayChildren(dc);
}

// protected void DrawUnderlayChildren(Fuse.DrawContext dc) :46
void Element__DrawUnderlayChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    __this->DrawUnderlayChildren(dc);
}

// protected virtual void DrawWithChildren(Fuse.DrawContext dc) :109
void Element__DrawWithChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawWithChildren(Fuse.DrawContext)");
    __this->DrawUnderlayChildren(dc);
    __this->OnDraw(dc);
    __this->DrawNonUnderlayChildren(dc);
}

// private Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() :14
void Element__get_Effects_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->Effects();
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() :91
void Element__get_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry** __retval)
{
    *__retval = __this->ElementBatchEntry();
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) :91
void Element__set_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry* value)
{
    __this->ElementBatchEntry(value);
}

// public Uno.UX.Size2 get_ExplicitTransformOrigin() :124
void Element__get_ExplicitTransformOrigin_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->ExplicitTransformOrigin();
}

// public void set_ExplicitTransformOrigin(Uno.UX.Size2 value) :131
void Element__set_ExplicitTransformOrigin_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->ExplicitTransformOrigin(*value);
}

// protected virtual bool FastTrackDrawWithOpacity(Fuse.DrawContext dc) :129
void Element__FastTrackDrawWithOpacity_fn(Element* __this, ::g::Fuse::DrawContext* dc, bool* __retval)
{
    return *__retval = false, void();
}

// private void Fuse.Animations.IResize.SetSize(float2 size) :9
void Element__FuseAnimationsIResizeSetSize_fn(Element* __this, ::g::Uno::Float2* size)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Animations.IResize.SetSize(float2)");
    ::g::Uno::Float2 size_ = *size;
    __this->_actualSize = size_;
    __this->InternArrangePaddingBox(::g::Fuse::LayoutParams__CreateTemporary(size_));
    __this->InvalidateVisual();
    __this->InvalidateRenderBounds();
    __this->InvalidateLocalTransform();
}

// private float3 Fuse.IActualPlacement.get_ActualPosition() :102
void Element__FuseIActualPlacementget_ActualPosition_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.IActualPlacement.get_ActualPosition()");
    return *__retval = ::g::Uno::Float3__New4(__this->ActualPosition(), 0.0f), void();
}

// private float3 Fuse.IActualPlacement.get_ActualSize() :101
void Element__FuseIActualPlacementget_ActualSize_fn(Element* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f), void();
}

// private void Fuse.Triggers.Actions.ICollapse.Collapse() :18
void Element__FuseTriggersActionsICollapseCollapse_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.ICollapse.Collapse()");
    __this->Visibility(1);
}

// private void Fuse.Triggers.Actions.IHide.Hide() :19
void Element__FuseTriggersActionsIHideHide_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.IHide.Hide()");
    __this->Visibility(2);
}

// private void Fuse.Triggers.Actions.IShow.Show() :17
void Element__FuseTriggersActionsIShowShow_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "Fuse.Triggers.Actions.IShow.Show()");
    __this->Visibility(0);
}

// protected internal float2 GetArrangePaddingSize(Fuse.LayoutParams lp) :235
void Element__GetArrangePaddingSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetArrangePaddingSize(*lp);
}

// protected virtual float2 GetContentSize(Fuse.LayoutParams lp) :230
void Element__GetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// internal float2 GetLayoutPositionIn(Fuse.Visual target) :451
void Element__GetLayoutPositionIn_fn(Element* __this, ::g::Fuse::Visual* target, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetLayoutPositionIn(target);
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :204
void Element__GetMarginSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "GetMarginSize(Fuse.LayoutParams)");
    Element__GMSCacheItem collection6;
    ::g::Fuse::LayoutParams lp_ = *lp;

    for (int32_t i = 0; i < __this->_gmsCount; ++i)
    {
        Element__GMSCacheItem g = uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(i);

        if (g.layoutParams.IsCompatible(lp_))
            return *__retval = g.result, void();
    }

    ::g::Uno::Float2 sz = uPtr(__this->_boxSizing)->CalcMarginSize(__this, lp_);
    int32_t n = (__this->_gmsAt++) % 2;
    __this->_gmsCount = ::g::Uno::Math::Min8(2, __this->_gmsCount + 1);
    uPtr(__this->_gmsCache)->Item<Element__GMSCacheItem>(n) = (collection6 = uDefault<Element__GMSCacheItem>(), collection6.layoutParams = lp_.Clone(), collection6.result = sz, collection6);
    return *__retval = sz, void();
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) :70
void Element__GetViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetViewportInvertPixelRect(dc, *localRegion);
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Fuse.VisualBounds localRegion) :86
void Element__GetVisibleViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::VisualBounds* localRegion, ::g::Uno::Recti* __retval)
{
    *__retval = __this->GetVisibleViewportInvertPixelRect(dc, localRegion);
}

// private void GMSReset() :144
void Element__GMSReset_fn(Element* __this)
{
    __this->GMSReset();
}

// private bool get_HasActiveEffects() :30
void Element__get_HasActiveEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasActiveEffects();
}

// private bool get_HasCompositionEffect() :50
void Element__get_HasCompositionEffect_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasCompositionEffect();
}

// private bool get_HasEffects() :24
void Element__get_HasEffects_fn(Element* __this, bool* __retval)
{
    *__retval = __this->HasEffects();
}

// internal bool HasLayoutIn(Fuse.Visual target) :435
void Element__HasLayoutIn_fn(Element* __this, ::g::Fuse::Visual* target, bool* __retval)
{
    *__retval = __this->HasLayoutIn(target);
}

// public Uno.UX.Size get_Height() :43
void Element__get_Height_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(Uno.UX.Size value) :44
void Element__set_Height_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Height(*value);
}

// protected override Fuse.VisualBounds get_HitTestChildrenBounds() :109
void Element__get_HitTestChildrenBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    ::g::Fuse::VisualBounds* ret27;

    if ((__this->HitTestMode() & 4) == 4)
        return *__retval = (::g::Fuse::Visual__get_HitTestChildrenBounds_fn(__this, &ret27), ret27), void();

    return *__retval = ::g::Fuse::VisualBounds::Empty(), void();
}

// protected override sealed Fuse.VisualBounds get_HitTestLocalBounds() :87
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestLocalBounds()");
    ::g::Fuse::VisualBounds* n = ::g::Fuse::VisualBounds::Empty();

    if ((__this->HitTestMode() & 2) == 2)
        n = uPtr(n)->AddRect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());

    if ((__this->HitTestMode() & 1) == 1)
        n = uPtr(n)->Merge(__this->HitTestLocalVisualBounds(), NULL);

    return *__retval = n, void();
}

// protected virtual Fuse.VisualBounds get_HitTestLocalVisualBounds() :101
void Element__get_HitTestLocalVisualBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Empty(), void();
}

// public Fuse.Elements.HitTestMode get_HitTestMode() :42
void Element__get_HitTestMode_fn(Element* __this, int32_t* __retval)
{
    *__retval = __this->HitTestMode();
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) :43
void Element__set_HitTestMode_fn(Element* __this, int32_t* value)
{
    __this->HitTestMode(*value);
}

// internal float2 get_IntendedPosition() :98
void Element__get_IntendedPosition_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedPosition();
}

// internal float2 get_IntendedSize() :93
void Element__get_IntendedSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->IntendedSize();
}

// internal void InternArrangePaddingBox(Fuse.LayoutParams lp) :420
void Element__InternArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp)
{
    __this->InternArrangePaddingBox(*lp);
}

// internal float2 InternGetContentSize(Fuse.LayoutParams lp) :225
void Element__InternGetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->InternGetContentSize(*lp);
}

// protected override sealed void InvalidateLocalTransform() :190
void Element__InvalidateLocalTransform_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateLocalTransform()");
    __this->InvalidateVisualComposition();
    Element* p = __this->AncestorElement();

    if (p != NULL)
        uPtr(p)->InvalidateRenderBounds();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateTransform();

    ::g::Fuse::Visual__InvalidateLocalTransform_fn(__this);
    __this->NotifyTreeRendererTransformChanged();
}

// public void InvalidateRenderBoundsWithEffects() :75
void Element__InvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->InvalidateRenderBoundsWithEffects();
}

// public override sealed bool get_IsLocalVisible() :60
void Element__get_IsLocalVisible_fn(Element* __this, bool* __retval)
{
    return *__retval = __this->Visibility() == 0, void();
}

// protected override Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :31
void Element__IsMarginBoxDependent_fn(Element* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "IsMarginBoxDependent(Fuse.Visual)");
    return *__retval = uPtr(__this->_boxSizing)->IsContentRelativeSize(__this), void();
}

// public bool IsPointInside(float2 localPoint) :29
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public Uno.UX.Size get_LimitHeight() :66
void Element__get_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->LimitHeight();
}

// public void set_LimitHeight(Uno.UX.Size value) :67
void Element__set_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->LimitHeight(*value);
}

// public Uno.UX.Size get_LimitWidth() :84
void Element__get_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->LimitWidth();
}

// public void set_LimitWidth(Uno.UX.Size value) :85
void Element__set_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->LimitWidth(*value);
}

// public override sealed Fuse.Box get_LocalBounds() :163
void Element__get_LocalBounds_fn(Element* __this, ::g::Fuse::Box* __retval)
{
    return *__retval = ::g::Fuse::Box__New1(::g::Uno::Float3__New1(0.0f), ::g::Uno::Float3__New4(__this->ActualSize(), 0.0f)), void();
}

// public override Fuse.VisualBounds get_LocalRenderBounds() :107
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = __this->RenderBoundsWithEffects(), void();
}

// public float4 get_Margin() :244
void Element__get_Margin_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Margin();
}

// public void set_Margin(float4 value) :245
void Element__set_Margin_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Margin(*value);
}

// public Uno.UX.Size get_MaxHeight() :143
void Element__get_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MaxHeight();
}

// public void set_MaxHeight(Uno.UX.Size value) :144
void Element__set_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MaxHeight(*value);
}

// public Uno.UX.Size get_MaxWidth() :122
void Element__get_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MaxWidth();
}

// public void set_MaxWidth(Uno.UX.Size value) :123
void Element__set_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MaxWidth(*value);
}

// public Uno.UX.Size get_MinHeight() :101
void Element__get_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MinHeight();
}

// public void set_MinHeight(Uno.UX.Size value) :102
void Element__set_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MinHeight(*value);
}

// public Uno.UX.Size get_MinWidth() :80
void Element__get_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->MinWidth();
}

// public void set_MinWidth(Uno.UX.Size value) :81
void Element__set_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->MinWidth(*value);
}

// private bool get_NeedsClipping() :39
void Element__get_NeedsClipping_fn(Element* __this, bool* __retval)
{
    *__retval = __this->NeedsClipping();
}

// private void NotifyRenderBoundsChanged() :58
void Element__NotifyRenderBoundsChanged_fn(Element* __this)
{
    __this->NotifyRenderBoundsChanged();
}

// private extern void NotifyRooted() :157
void Element__NotifyRooted_fn(Element* __this)
{
    __this->NotifyRooted();
}

// private void NotifyTreeRedererOpacityChanged() :97
void Element__NotifyTreeRedererOpacityChanged_fn(Element* __this)
{
    __this->NotifyTreeRedererOpacityChanged();
}

// private void NotifyTreeRendererHitTestModeChanged() :87
void Element__NotifyTreeRendererHitTestModeChanged_fn(Element* __this)
{
    __this->NotifyTreeRendererHitTestModeChanged();
}

// private void NotifyTreeRendererPlaced() :413
void Element__NotifyTreeRendererPlaced_fn(Element* __this)
{
    __this->NotifyTreeRendererPlaced();
}

// private void NotifyTreeRendererRooted() :131
void Element__NotifyTreeRendererRooted_fn(Element* __this)
{
    __this->NotifyTreeRendererRooted();
}

// private void NotifyTreeRendererRootingStarted() :124
void Element__NotifyTreeRendererRootingStarted_fn(Element* __this)
{
    __this->NotifyTreeRendererRootingStarted();
}

// private void NotifyTreeRendererTransformChanged() :67
void Element__NotifyTreeRendererTransformChanged_fn(Element* __this)
{
    __this->NotifyTreeRendererTransformChanged();
}

// private void NotifyTreeRendererUnrooted() :147
void Element__NotifyTreeRendererUnrooted_fn(Element* __this)
{
    __this->NotifyTreeRendererUnrooted();
}

// private void NotifyTreeRendererZOrderChanged() :46
void Element__NotifyTreeRendererZOrderChanged_fn(Element* __this)
{
    __this->NotifyTreeRendererZOrderChanged();
}

// private extern void NotifyUnrooted() :172
void Element__NotifyUnrooted_fn(Element* __this)
{
    __this->NotifyUnrooted();
}

// public Uno.UX.Size2 get_Offset() :291
void Element__get_Offset_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(Uno.UX.Size2 value) :292
void Element__set_Offset_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Offset(*value);
}

// internal override sealed void OnAdjustMarginBoxPosition(float2 position) :330
void Element__OnAdjustMarginBoxPosition_fn(Element* __this, ::g::Uno::Float2* position)
{
    uStackFrame __("Fuse.Elements.Element", "OnAdjustMarginBoxPosition(float2)");
    ::g::Uno::Float2 position_ = *position;
    __this->PerformPlacement(::g::Uno::Float2__op_Addition2(__this->_actualPosition, ::g::Uno::Float2__op_Subtraction2(position_, __this->MarginBoxPosition())), __this->_actualSize, false);
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :255
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::BoxPlacement bp = uPtr(__this->_boxSizing)->CalcBoxPlacement(__this, position_, lp_);

    if (bp.SanityConstrain())
    {
        if (!Element::_invalidValuesWarn_)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid values in ArrangeMarginBox"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Layout.uno"), 262, uString::Const("OnArrangeMarginBox"));

        Element::_invalidValuesWarn_ = true;
    }

    if (!(lp_.Temporary() && __this->ignoreTempArrange))
    {
        if (__this->Visibility() != 1)
        {
            ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
            nlp.SetSize(bp.Size, true, true);
            __this->ArrangePaddingBox(nlp);
            __this->PerformPlacement(bp.Position, bp.Size, lp_.Temporary());
        }
    }

    return *__retval = bp.MarginBox, void();
}

// protected override void OnChildAdded(Fuse.Node node) :8
void Element__OnChildAdded_fn(Element* __this, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Elements.Element", "OnChildAdded(Fuse.Node)");
    ::g::Fuse::Visual__OnChildAdded_fn(__this, node);
    ::g::Fuse::Effects::Effect* e = uAs< ::g::Fuse::Effects::Effect*>(node, ::g::Fuse::Effects::Effect_typeof());

    if (e != NULL)
        __this->OnEffectAdded(e);
}

// protected override void OnChildRemoved(Fuse.Node node) :17
void Element__OnChildRemoved_fn(Element* __this, ::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Elements.Element", "OnChildRemoved(Fuse.Node)");
    Element* elm = uAs<Element*>(node, Element_typeof());

    if (elm != NULL)
        __this->RemoveChildElementFromBatching(elm);

    ::g::Fuse::Effects::Effect* e = uAs< ::g::Fuse::Effects::Effect*>(node, ::g::Fuse::Effects::Effect_typeof());

    if (e != NULL)
        __this->OnEffectRemoved(e);

    ::g::Fuse::Visual__OnChildRemoved_fn(__this, node);
}

// protected virtual void OnDraw(Fuse.DrawContext dc) :116
void Element__OnDraw_fn(Element* __this, ::g::Fuse::DrawContext* dc)
{
}

// private void OnEffectAdded(Fuse.Effects.Effect e) :53
void Element__OnEffectAdded_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectAdded(e);
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) :64
void Element__OnEffectRemoved_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRemoved(e);
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) :80
void Element__OnEffectRenderBoundsChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderBoundsChanged(e);
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) :75
void Element__OnEffectRenderingChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e)
{
    __this->OnEffectRenderingChanged(e);
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :54
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Elements.Element", "OnHitTest(Fuse.HitTestContext)");

    if (__this->ClipToBounds() && !__this->IsPointInside(uPtr(htc)->LocalPoint()))
        return;

    if ((__this->HitTestMode() & 4) == 4)
        __this->OnHitTestChildren(htc);

    if ((__this->HitTestMode() & 1) == 1)
        __this->OnHitTestLocalVisual(htc);

    if ((__this->HitTestMode() & 2) == 2)
    {
        if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
            uPtr(htc)->Hit(__this);
    }
}

// private void OnHitTestChildren(Fuse.HitTestContext htc) :70
void Element__OnHitTestChildren_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    __this->OnHitTestChildren(htc);
}

// protected virtual void OnHitTestLocalVisual(Fuse.HitTestContext htc) :80
void Element__OnHitTestLocalVisual_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
}

// protected override sealed void OnInvalidateLayout() :25
void Element__OnInvalidateLayout_fn(Element* __this)
{
    ::g::Fuse::Visual__OnInvalidateLayout_fn(__this);
    __this->GMSReset();
}

// protected override sealed bool OnInvalidateRenderBounds() :36
void Element__OnInvalidateRenderBounds_fn(Element* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateRenderBounds()");

    if ((__this->_renderBoundsWithEffects == NULL) && (__this->_renderBoundsWithoutEffects == NULL))
        return *__retval = true, void();

    __this->_renderBoundsWithoutEffects = NULL;
    __this->OnInvalidateRenderBoundsWithEffects();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateRenderBounds();

    if (!__this->_hasNotifiedRenderBoundsChanged)
    {
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Element__NotifyRenderBoundsChanged_fn, __this), 1, 5);
        __this->_hasNotifiedRenderBoundsChanged = true;
    }

    return *__retval = false, void();
}

// private void OnInvalidateRenderBoundsWithEffects() :66
void Element__OnInvalidateRenderBoundsWithEffects_fn(Element* __this)
{
    __this->OnInvalidateRenderBoundsWithEffects();
}

// protected override void OnInvalidateVisual() :8
void Element__OnInvalidateVisual_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateVisual()");
    ::g::Fuse::Visual__OnInvalidateVisual_fn(__this);

    if (__this->Cache() != NULL)
        uPtr(__this->Cache())->Invalidate();

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateVisual();
}

// protected override sealed void OnInvalidateVisualComposition() :18
void Element__OnInvalidateVisualComposition_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateVisualComposition()");
    ::g::Fuse::Visual__OnInvalidateVisualComposition_fn(__this);

    if (__this->ElementBatchEntry() != NULL)
        uPtr(__this->ElementBatchEntry())->InvalidateVisualComposition();
}

// protected override sealed void OnIsContextEnabledChanged() :107
void Element__OnIsContextEnabledChanged_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnIsContextEnabledChanged()");
    ::g::Fuse::Visual__OnIsContextEnabledChanged_fn(__this);

    if (__this->IsRootingCompleted())
    {
        uObject* t = __this->TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::IsEnabledChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), __this, __this->IsEnabled());
    }
}

// protected override sealed void OnIsVisibleChanged() :34
void Element__OnIsVisibleChanged_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnIsVisibleChanged()");
    ::g::Fuse::Visual__OnIsVisibleChanged_fn(__this);

    if (__this->IsRootingCompleted())
    {
        uObject* t = __this->TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::IsVisibleChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), __this, __this->IsVisible());
    }
}

// private void OnOpacityChanged(Uno.UX.IPropertyListener origin) :49
void Element__OnOpacityChanged_fn(Element* __this, uObject* origin)
{
    __this->OnOpacityChanged(origin);
}

// private void OnPreplacement() :315
void Element__OnPreplacement_fn(Element* __this)
{
    __this->OnPreplacement();
}

// internal override sealed void OnPreserveRootFrame() :321
void Element__OnPreserveRootFrame_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnPreserveRootFrame()");
    ::g::Fuse::Node__OnPreserveRootFrame_fn(__this);
    __this->OnPreplacement();
}

// protected override void OnRooted() :27
void Element__OnRooted_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnRooted()");
    ::g::Fuse::Visual__OnRooted_fn(__this);
    __this->NotifyTreeRendererRooted();
    __this->InvalidateVisualComposition();
    __this->_placedBefore = NULL;
    __this->NotifyRooted();
}

// protected override void OnRootedPreChildren() :118
void Element__OnRootedPreChildren_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnRootedPreChildren()");
    __this->NotifyTreeRendererRootingStarted();
    ::g::Fuse::Visual__OnRootedPreChildren_fn(__this);
}

// protected override void OnUnrooted() :44
void Element__OnUnrooted_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnUnrooted()");
    __this->InvalidateVisualComposition();
    ::g::Fuse::Visual__OnUnrooted_fn(__this);
    __this->NotifyTreeRendererUnrooted();
    __this->CleanupBatching();
    __this->NotifyUnrooted();
}

// private void OnVisibilityChanged(Fuse.Elements.Visibility oldVisibility, Uno.UX.IPropertyListener origin) :214
void Element__OnVisibilityChanged_fn(Element* __this, int32_t* oldVisibility, uObject* origin)
{
    __this->OnVisibilityChanged(*oldVisibility, origin);
}

// private void OnZOrderChanged() :55
void Element__OnZOrderChanged_fn(Element* __this)
{
    __this->OnZOrderChanged();
}

// protected override sealed void OnZOrderInvalidated() :25
void Element__OnZOrderInvalidated_fn(Element* __this)
{
    uStackFrame __("Fuse.Elements.Element", "OnZOrderInvalidated()");
    __this->NotifyTreeRendererZOrderChanged();
    __this->_elementBatchValid = false;
}

// public float get_Opacity() :37
void Element__get_Opacity_fn(Element* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :38
void Element__set_Opacity_fn(Element* __this, float* value)
{
    __this->Opacity(*value);
}

// public float4 get_Padding() :274
void Element__get_Padding_fn(Element* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Padding();
}

// public void set_Padding(float4 value) :275
void Element__set_Padding_fn(Element* __this, ::g::Uno::Float4* value)
{
    __this->Padding(*value);
}

// internal void PerformPlacement(float2 position, float2 size, bool temp) :341
void Element__PerformPlacement_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, bool* temp)
{
    __this->PerformPlacement(*position, *size, *temp);
}

// public generated void add_Placed(Fuse.PlacedHandler value) :303
void Element__add_Placed_fn(Element* __this, uDelegate* value)
{
    __this->add_Placed(value);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) :303
void Element__remove_Placed_fn(Element* __this, uDelegate* value)
{
    __this->remove_Placed(value);
}

// public Uno.UX.Size2 get_Position() :365
void Element__get_Position_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(Uno.UX.Size2 value) :366
void Element__set_Position_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Position(*value);
}

// protected override void PrependImplicitTransform(Fuse.FastMatrix m) :181
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependImplicitTransform(Fuse.FastMatrix)");
    ::g::Uno::Float2 actualPosition = __this->ActualPosition();

    if ((actualPosition.X != 0.0f) || (actualPosition.Y != 0.0f))
        uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(::g::Uno::Float2__New2(actualPosition.X, actualPosition.Y), 0.0f));
}

// protected override sealed void PrependInverseTransformOrigin(Fuse.FastMatrix m) :175
void Element__PrependInverseTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependInverseTransformOrigin(Fuse.FastMatrix)");
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[31/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__op_UnaryNegation(off));
}

// protected override sealed void PrependTransformOrigin(Fuse.FastMatrix m) :169
void Element__PrependTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Elements.Element", "PrependTransformOrigin(Fuse.FastMatrix)");
    ::g::Uno::Float3 off = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(__this->TransformOrigin()), ::TYPES[31/*Fuse.Elements.ITransformOrigin*/]), __this);
    uPtr(m)->PrependTranslation1(off);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) :307
void Element__add_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->add_Preplacement(value);
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) :307
void Element__remove_Preplacement_fn(Element* __this, uDelegate* value)
{
    __this->remove_Preplacement(value);
}

// private void RemoveChildElementFromBatching(Fuse.Elements.Element elm) :31
void Element__RemoveChildElementFromBatching_fn(Element* __this, Element* elm)
{
    __this->RemoveChildElementFromBatching(elm);
}

// public Fuse.VisualBounds get_RenderBoundsWithEffects() :26
void Element__get_RenderBoundsWithEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->RenderBoundsWithEffects();
}

// public Fuse.VisualBounds get_RenderBoundsWithoutEffects() :45
void Element__get_RenderBoundsWithoutEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->RenderBoundsWithoutEffects();
}

// internal void RequestLayout() :198
void Element__RequestLayout_fn(Element* __this)
{
    __this->RequestLayout();
}

// private extern Uno.Collections.List<Uno.Action> get_RootedListeners() :154
void Element__get_RootedListeners_fn(Element* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->RootedListeners();
}

// public void SetExplicitTransformOrigin(Uno.UX.Size2 value, Uno.UX.IPropertyListener origin) :134
void Element__SetExplicitTransformOrigin_fn(Element* __this, ::g::Uno::UX::Size2* value, uObject* origin)
{
    __this->SetExplicitTransformOrigin(*value, origin);
}

// public void SetHitTestMode(Fuse.Elements.HitTestMode value, Uno.UX.IPropertyListener origin) :46
void Element__SetHitTestMode_fn(Element* __this, int32_t* value, uObject* origin)
{
    __this->SetHitTestMode(*value, origin);
}

// private void SetNewTransform() :76
void Element__SetNewTransform_fn(Element* __this)
{
    __this->SetNewTransform();
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) :41
void Element__SetOpacity_fn(Element* __this, float* value, uObject* origin)
{
    __this->SetOpacity(*value, origin);
}

// public void SetVisibility(Fuse.Elements.Visibility value, Uno.UX.IPropertyListener origin) :206
void Element__SetVisibility_fn(Element* __this, int32_t* value, uObject* origin)
{
    __this->SetVisibility(*value, origin);
}

// private bool ShouldBatch() :10
void Element__ShouldBatch_fn(Element* __this, bool* __retval)
{
    *__retval = __this->ShouldBatch();
}

// public Uno.UX.Size2 get_Size() :62
void Element__get_Size_fn(Element* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(Uno.UX.Size2 value) :63
void Element__set_Size_fn(Element* __this, ::g::Uno::UX::Size2* value)
{
    __this->Size(*value);
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() :108
void Element__get_TransformOrigin_fn(Element* __this, uObject** __retval)
{
    *__retval = __this->TransformOrigin();
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) :109
void Element__set_TransformOrigin_fn(Element* __this, uObject* value)
{
    __this->TransformOrigin(value);
}

// public virtual Fuse.Elements.ITreeRenderer get_TreeRenderer() :31
void Element__get_TreeRenderer_fn(Element* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.Element", "get_TreeRenderer()");
    return *__retval = uIs((::g::Fuse::Visual*)__this->Parent(), Element_typeof()) ? (uObject*)uPtr(uCast<Element*>(__this->Parent(), Element_typeof()))->TreeRenderer() : NULL, void();
}

// private extern Uno.Collections.List<Uno.Action> get_UnrootedListeners() :169
void Element__get_UnrootedListeners_fn(Element* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->UnrootedListeners();
}

// public Fuse.Elements.Visibility get_Visibility() :202
void Element__get_Visibility_fn(Element* __this, int32_t* __retval)
{
    *__retval = __this->Visibility();
}

// public void set_Visibility(Fuse.Elements.Visibility value) :203
void Element__set_Visibility_fn(Element* __this, int32_t* value)
{
    __this->Visibility(*value);
}

// internal static extern Uno.IDisposable VisualAppearedFactory(object obj, Uno.Action<Uno.Rect, float4x4> handler) :55
void Element__VisualAppearedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualAppearedFactory(obj, handler);
}

// internal static extern Uno.IDisposable VisualBoundsChangedFactory(object obj, Uno.Action<Uno.Rect> handler) :62
void Element__VisualBoundsChangedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualBoundsChangedFactory(obj, handler);
}

// internal static extern Uno.IDisposable VisualDisappearedFactory(object obj, Uno.Action handler) :95
void Element__VisualDisappearedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualDisappearedFactory(obj, handler);
}

// internal static extern Uno.IDisposable VisualTransformChangedFactory(object obj, Uno.Action<float4x4> handler) :22
void Element__VisualTransformChangedFactory_fn(uObject* obj, uDelegate* handler, uObject** __retval)
{
    *__retval = Element::VisualTransformChangedFactory(obj, handler);
}

// public Uno.UX.Size get_Width() :21
void Element__get_Width_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(Uno.UX.Size value) :22
void Element__set_Width_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Width(*value);
}

// public Uno.UX.Size get_X() :331
void Element__get_X_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->X();
}

// public void set_X(Uno.UX.Size value) :332
void Element__set_X_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->X(*value);
}

// public Uno.UX.Size get_Y() :348
void Element__get_Y_fn(Element* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(Uno.UX.Size value) :349
void Element__set_Y_fn(Element* __this, ::g::Uno::UX::Size* value)
{
    __this->Y(*value);
}

::g::Uno::UX::Selector Element::_hitTestModeName_;
::g::Uno::UX::Selector Element::_visibilityName_;
::g::Uno::UX::Selector Element::_clipToBoundsName_;
bool Element::_invalidValuesWarn_;
::g::Uno::UX::Selector Element::_opacityName_;
uSStrong<uObject*> Element::DefaultTransformOrigin_;
::g::Uno::UX::Selector Element::ExplicitTransformOriginName_;

// protected generated Element() [instance] :102
void Element::ctor_3()
{
    _width = ::g::Uno::UX::Size__Auto();
    _height = ::g::Uno::UX::Size__Auto();
    _gmsCache = uArray::New(Element__GMSCacheItem_typeof()->Array(), 2);
    _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
    ctor_2();
}

// public float2 get_ActualAnchor() [instance] :250
::g::Uno::Float2 Element::ActualAnchor()
{
    return _actualAnchor;
}

// internal void set_ActualAnchor(float2 value) [instance] :251
void Element::ActualAnchor(::g::Uno::Float2 value)
{
    _actualAnchor = value;
}

// public float2 get_ActualPosition() [instance] :54
::g::Uno::Float2 Element::ActualPosition()
{
    uStackFrame __("Fuse.Elements.Element", "get_ActualPosition()");

    if (_haveActualPositionCache)
        return _actualPositionCache;

    if (!SnapToPixels())
        return _actualPosition;

    ::g::Uno::Float2 parentP = ::g::Uno::Float2__New1(0.0f);

    if (Parent() != NULL)
        parentP = uPtr(Parent())->AbsoluteViewportOrigin();

    ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(parentP, _actualPosition);
    p = Snap(p);
    p = ::g::Uno::Float2__op_Subtraction2(p, parentP);
    _actualPositionCache = p;
    _haveActualPositionCache = true;
    return p;
}

// public float2 get_ActualSize() [instance] :88
::g::Uno::Float2 Element::ActualSize()
{
    return _actualSize;
}

// public Fuse.Elements.Alignment get_Alignment() [instance] :163
int32_t Element::Alignment()
{
    return _alignment;
}

// public void set_Alignment(Fuse.Elements.Alignment value) [instance] :164
void Element::Alignment(int32_t value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Alignment(Fuse.Elements.Alignment)");

    if (_alignment != value)
    {
        _alignment = value;
        InvalidateLayout(2);
    }
}

// private Fuse.Elements.Element get_AncestorElement() [instance] :9
Element* Element::AncestorElement()
{
    uStackFrame __("Fuse.Elements.Element", "get_AncestorElement()");
    ::g::Fuse::Visual* n = Parent();

    while (n != NULL)
    {
        Element* elm = uAs<Element*>(n, Element_typeof());

        if (elm != NULL)
            return elm;

        n = uPtr(n)->Parent();
    }

    return NULL;
}

// public Uno.UX.Size2 get_Anchor() [instance] :314
::g::Uno::UX::Size2 Element::Anchor()
{
    uStackFrame __("Fuse.Elements.Element", "get_Anchor()");
    ::g::Uno::UX::Size2 ret22;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size2>*/, ::g::Uno::UX::Size2_typeof(), NULL), uCRef<int32_t>(4096), uCRef(::g::Uno::UX::Size2__Auto()), &ret22), ret22);
}

// public void set_Anchor(Uno.UX.Size2 value) [instance] :315
void Element::Anchor(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Anchor(Uno.UX.Size2)");

    if (::g::Uno::UX::Size2__op_Inequality(Anchor(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size2>*/, ::g::Uno::UX::Size2_typeof(), NULL), uCRef<int32_t>(4096), uCRef(value), uCRef(::g::Uno::UX::Size2__Auto()));
        InvalidateLayout(2);
    }
}

// public float get_Aspect() [instance] :115
float Element::Aspect()
{
    uStackFrame __("Fuse.Elements.Element", "get_Aspect()");
    float ret23;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<float>*/, ::g::Uno::Float_typeof(), NULL), uCRef<int32_t>(65536), uCRef(1.0f), &ret23), ret23);
}

// public void set_Aspect(float value) [instance] :116
void Element::Aspect(float value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Aspect(float)");

    if (Aspect() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<float>*/, ::g::Uno::Float_typeof(), NULL), uCRef<int32_t>(65536), uCRef(value), uCRef(1.0f));
        InvalidateLayout(2);
    }
}

// public Fuse.Elements.AspectConstraint get_AspectConstraint() [instance] :135
int32_t Element::AspectConstraint()
{
    uStackFrame __("Fuse.Elements.Element", "get_AspectConstraint()");
    int32_t ret24;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Fuse.Elements.AspectConstraint>*/, ::g::Fuse::Elements::AspectConstraint_typeof(), NULL), uCRef<int32_t>(131072), uCRef<int32_t>(3), &ret24), ret24);
}

// public void set_AspectConstraint(Fuse.Elements.AspectConstraint value) [instance] :136
void Element::AspectConstraint(int32_t value)
{
    uStackFrame __("Fuse.Elements.Element", "set_AspectConstraint(Fuse.Elements.AspectConstraint)");

    if (AspectConstraint() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Fuse.Elements.AspectConstraint>*/, ::g::Fuse::Elements::AspectConstraint_typeof(), NULL), uCRef<int32_t>(131072), uCRef<int32_t>(value), uCRef<int32_t>(3));
        InvalidateLayout(2);
    }
}

// public Fuse.Elements.Element.BoxSizingMode get_BoxSizing() [instance] :173
int32_t Element::BoxSizing()
{
    return _boxSizingMode;
}

// public void set_BoxSizing(Fuse.Elements.Element.BoxSizingMode value) [instance] :174
void Element::BoxSizing(int32_t value)
{
    uStackFrame __("Fuse.Elements.Element", "set_BoxSizing(Fuse.Elements.Element.BoxSizingMode)");

    if (value == _boxSizingMode)
        return;

    _boxSizingMode = value;

    switch (_boxSizingMode)
    {
        case 0:
        {
            _boxSizing = ::g::Fuse::Elements::StandardBoxSizing::Singleton();
            break;
        }
        case 1:
        {
            _boxSizing = ::g::Fuse::Elements::NoImplicitMaxBoxSizing::Singleton1();
            break;
        }
        case 2:
        {
            _boxSizing = ::g::Fuse::Elements::LimitBoxSizing::Singleton();
            break;
        }
        case 3:
        {
            _boxSizing = ::g::Fuse::Elements::LayoutMasterBoxSizing::Singleton();
            break;
        }
        case 4:
        {
            _boxSizing = ::g::Fuse::Elements::FillAspectBoxSizing::Singleton();
            break;
        }
    }

    InvalidateLayout(2);
}

// internal Fuse.Elements.BoxSizing get_BoxSizingObject() [instance] :195
::g::Fuse::Elements::BoxSizing* Element::BoxSizingObject()
{
    return _boxSizing;
}

// private Fuse.Elements.Cache get_Cache() [instance] :88
::g::Fuse::Elements::Cache* Element::Cache()
{
    uStackFrame __("Fuse.Elements.Element", "get_Cache()");
    ::g::Fuse::Elements::Cache* ind11;
    ind11 = _cache;
    return (ind11 != NULL) ? ind11 : (::g::Fuse::Elements::Cache*)(_cache = ::g::Fuse::Elements::Cache::New1(this));
}

// public Fuse.Elements.CachingMode get_CachingMode() [instance] :20
int32_t Element::CachingMode()
{
    uStackFrame __("Fuse.Elements.Element", "get_CachingMode()");
    int32_t ret25;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Fuse.Elements.CachingMode>*/, ::g::Fuse::Elements::CachingMode_typeof(), NULL), uCRef<int32_t>(262144), uCRef<int32_t>(0), &ret25), ret25);
}

// public void set_CachingMode(Fuse.Elements.CachingMode value) [instance] :21
void Element::CachingMode(int32_t value)
{
    uStackFrame __("Fuse.Elements.Element", "set_CachingMode(Fuse.Elements.CachingMode)");

    if (CachingMode() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Fuse.Elements.CachingMode>*/, ::g::Fuse::Elements::CachingMode_typeof(), NULL), uCRef<int32_t>(262144), uCRef<int32_t>(value), uCRef<int32_t>(0));
        InvalidateVisual();
    }
}

// protected Fuse.VisualBounds CalcRenderBoundsWithEffects() [instance] :8
::g::Fuse::VisualBounds* Element::CalcRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "CalcRenderBoundsWithEffects()");
    ::g::Fuse::Effects::Effect* ret14;
    ::g::Fuse::VisualBounds* r = RenderBoundsWithoutEffects();

    if (HasActiveEffects())

        for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL))); i++)
        {
            ::g::Fuse::Effects::Effect* e = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Effects()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)), uCRef<int32_t>(i), &ret14), ret14);

            if (uPtr(e)->Active())
                r = uPtr(e)->ModifyRenderBounds(r);
        }

    return r;
}

// public framebuffer CaptureRegion(Fuse.DrawContext dc, Uno.Rect region, float2 padding) [instance] :31
::g::Uno::Graphics::Framebuffer* Element::CaptureRegion(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region, ::g::Uno::Float2 padding)
{
    uStackFrame __("Fuse.Elements.Element", "CaptureRegion(Fuse.DrawContext,Uno.Rect,float2)");
    ::g::Fuse::OrthographicFrustum* collection1;
    ::g::Uno::Float2 ind9;
    ::g::Uno::Float4x4 ind10;
    ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(region.Size(), ::g::Uno::Float2__op_Multiply1(padding, 2.0f));
    ::g::Uno::Float2 pixelSize = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply1(sz, AbsoluteZoom()));
    ::g::Uno::Int2 fsz = ::g::Uno::Int2__New2((int32_t)pixelSize.X, (int32_t)pixelSize.Y);

    if ((fsz.X > ::g::Uno::Graphics::Texture2D::MaxSize()) || (fsz.Y > ::g::Uno::Graphics::Texture2D::MaxSize()))
    {
        ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(uString::Const("CaptureRegion bigger than maximum texture size, dropping rendering (size: "), uBox(::g::Uno::Int2_typeof(), fsz)), uString::Const(", max-size: ")), uBox<int32_t>(::g::Uno::Int_typeof(), ::g::Uno::Graphics::Texture2D::MaxSize())), 0, uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Drawing.uno"), 40);
        return NULL;
    }

    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(fsz, 3, false);
    collection1 = ::g::Fuse::OrthographicFrustum::New1();
    ind9 = ::g::Uno::Float2__New2(region.Left - padding.X, region.Top - padding.Y);
    uPtr(collection1)->Origin(ind9);
    ind9;
    uPtr(collection1)->Size(sz);
    sz;
    ind10 = WorldTransformInverse();
    uPtr(collection1)->LocalFromWorld(ind10);
    ind10;
    ::g::Fuse::OrthographicFrustum* cc = collection1;
    uPtr(dc)->PushRenderTargetFrustum(fb, (uObject*)cc);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    DrawWithChildren(dc);
    dc->PopRenderTargetFrustum();
    return fb;
}

// private void CleanupBatching() [instance] :100
void Element::CleanupBatching()
{
    uStackFrame __("Fuse.Elements.Element", "CleanupBatching()");

    if (_elementBatcher != NULL)
    {
        uPtr(_elementBatcher)->Dispose();
        _elementBatcher = NULL;
    }
}

// public bool get_ClipToBounds() [instance] :379
bool Element::ClipToBounds()
{
    return HasBit(1048576);
}

// public void set_ClipToBounds(bool value) [instance] :380
void Element::ClipToBounds(bool value)
{
    uStackFrame __("Fuse.Elements.Element", "set_ClipToBounds(bool)");

    if (ClipToBounds() != value)
    {
        SetBit1(1048576, value);
        InvalidateVisual();
        InvalidateHitTestBounds();
        OnPropertyChanged(Element::_clipToBoundsName_);
    }
}

// private void Composit(Fuse.DrawContext dc) [instance] :94
void Element::Composit(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "Composit(Fuse.DrawContext)");

    if (Opacity() <= 0.0f)
        return;

    bool flat = AreChildrenFlat() && IsLocalFlat();

    if (Opacity() >= 1.0f)
    {
        if (flat)
            uPtr(Cache())->DrawHeuristically(dc);
        else
            CompositEffects(dc);

        return;
    }

    if (!HasActiveEffects() && FastTrackDrawWithOpacity(dc))
        return;

    if (!flat && !_warnOpacityFlat)
    {
        _warnOpacityFlat = true;
        ::g::Fuse::Diagnostics::UserWarning(uString::Const("This element has a partial opacity and is not flat. This will not render correctly. Put the opacity on a flat child panel instead."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Effects.uno"), 117, uString::Const("Composit"));
    }

    bool r = uPtr(Cache())->DrawCached(dc);

    if (!r && !_warnNoCacheDraw)
    {
        _warnNoCacheDraw = true;
        ::g::Fuse::Diagnostics::InternalError(uString::Const("This element can not be drawn."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Effects.uno"), 125, uString::Const("Composit"));
    }
}

// internal void CompositEffects(Fuse.DrawContext dc) [instance] :134
void Element::CompositEffects(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "CompositEffects(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret15;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret16;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret17;
    bool hasActiveEffects = HasActiveEffects() && true;

    if (hasActiveEffects)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret15), ret15);

        {
            try
            {
                {
                    while (enum3.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)))
                    {
                        ::g::Fuse::Effects::Effect* e = enum3.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));

                        if ((uPtr(e)->Type() == 0) && uPtr(e)->Active())
                        {
                            double t;
                            uPtr(e)->Render(dc);
                        }
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum3.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
                }
                                throw __t;
                goto __after_finally_2;
            }

            {
                enum3.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
            }
            __after_finally_2:;
        }
    }

    if (hasActiveEffects && HasCompositionEffect())
    {
        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret16), ret16);

        {
            try
            {
                {
                    while (enum4.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)))
                    {
                        ::g::Fuse::Effects::Effect* e1 = enum4.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));

                        if ((uPtr(e1)->Type() == 1) && uPtr(e1)->Active())
                        {
                            double t1;
                            uPtr(e1)->Render(dc);
                        }
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum4.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
                }
                                throw __t;
                goto __after_finally_3;
            }

            {
                enum4.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
            }
            __after_finally_3:;
        }
    }
    else
        DrawWithChildren(dc);

    if (hasActiveEffects)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret17), ret17);

        {
            try
            {
                {
                    while (enum5.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)))
                    {
                        ::g::Fuse::Effects::Effect* e2 = enum5.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));

                        if ((uPtr(e2)->Type() == 2) && uPtr(e2)->Active())
                        {
                            double t2;
                            uPtr(e2)->Render(dc);
                        }
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum5.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
                }
                                throw __t;
                goto __after_finally_4;
            }

            {
                enum5.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
            }
            __after_finally_4:;
        }
    }
}

// private void DispatchPlacement() [instance] :400
void Element::DispatchPlacement()
{
    uStackFrame __("Fuse.Elements.Element", "DispatchPlacement()");
    _pendingDispatchPlacement = false;

    if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
    {
        ::g::Fuse::PlacedArgs* args = ::g::Fuse::PlacedArgs::New2(_placedBefore != NULL, _ppPrevPosition, ActualPosition(), _ppPrevSize, ActualSize());
        uPtr(Placed1)->Invoke(2, this, args);
    }

    _placedBefore = Parent();
}

// protected void DrawNonUnderlayChildren(Fuse.DrawContext dc) [instance] :57
void Element::DrawNonUnderlayChildren(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawNonUnderlayChildren(Fuse.DrawContext)");

    if (!HasChildren())
        return;

    uArray* zOrder = GetCachedZOrder();

    if (!ShouldBatch())
    {
        if (_elementBatcher != NULL)
        {
            uPtr(_elementBatcher)->Dispose();
            _elementBatcher = NULL;
        }

        for (int32_t i = 0; i < uPtr(zOrder)->Length(); i++)
        {
            ::g::Fuse::Visual* v = uPtr(zOrder)->Strong< ::g::Fuse::Visual*>(i);

            if (uPtr(v)->Layer() == 0)
                continue;

            uPtr(v)->Draw(dc);
        }
    }
    else
    {
        if ((_elementBatcher == NULL) || !_elementBatchValid)
        {
            if (_elementBatcher == NULL)
                _elementBatcher = ::g::Fuse::Elements::ElementBatcher::New1();
            else
                uPtr(_elementBatcher)->RemoveAllElements();

            for (int32_t i1 = 0; i1 < uPtr(zOrder)->Length(); i1++)
            {
                ::g::Fuse::Visual* v1 = uPtr(zOrder)->Strong< ::g::Fuse::Visual*>(i1);

                if (uPtr(v1)->Layer() == 0)
                    continue;

                uPtr(_elementBatcher)->AddElement(v1);
            }

            _elementBatchValid = true;
        }

        uPtr(_elementBatcher)->Draw(dc);
    }
}

// protected void DrawUnderlayChildren(Fuse.DrawContext dc) [instance] :46
void Element::DrawUnderlayChildren(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Element", "DrawUnderlayChildren(Fuse.DrawContext)");
    uArray* zOrder = GetCachedZOrder();

    for (int32_t i = 0; i < uPtr(zOrder)->Length(); i++)
    {
        ::g::Fuse::Visual* v = uPtr(zOrder)->Strong< ::g::Fuse::Visual*>(i);

        if (uPtr(v)->Layer() != 0)
            return;

        uPtr(v)->Draw(dc);
    }
}

// private Uno.Collections.IList<Fuse.Effects.Effect> get_Effects() [instance] :14
uObject* Element::Effects()
{
    uStackFrame __("Fuse.Elements.Element", "get_Effects()");

    if (_effects == NULL)
        _effects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)));

    return (uObject*)_effects;
}

// internal generated Fuse.Elements.ElementBatchEntry get_ElementBatchEntry() [instance] :91
::g::Fuse::Elements::ElementBatchEntry* Element::ElementBatchEntry()
{
    return _ElementBatchEntry;
}

// internal generated void set_ElementBatchEntry(Fuse.Elements.ElementBatchEntry value) [instance] :91
void Element::ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry* value)
{
    _ElementBatchEntry = value;
}

// public Uno.UX.Size2 get_ExplicitTransformOrigin() [instance] :124
::g::Uno::UX::Size2 Element::ExplicitTransformOrigin()
{
    uStackFrame __("Fuse.Elements.Element", "get_ExplicitTransformOrigin()");
    ::g::Fuse::Elements::ExplicitTransformOrigin* to = uAs< ::g::Fuse::Elements::ExplicitTransformOrigin*>(TransformOrigin(), ::g::Fuse::Elements::ExplicitTransformOrigin_typeof());

    if (to != NULL)
        return uPtr(to)->Origin;

    return uDefault< ::g::Uno::UX::Size2>();
}

// public void set_ExplicitTransformOrigin(Uno.UX.Size2 value) [instance] :131
void Element::ExplicitTransformOrigin(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_ExplicitTransformOrigin(Uno.UX.Size2)");
    SetExplicitTransformOrigin(value, (uObject*)this);
}

// protected internal float2 GetArrangePaddingSize(Fuse.LayoutParams lp) [instance] :235
::g::Uno::Float2 Element::GetArrangePaddingSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "GetArrangePaddingSize(Fuse.LayoutParams)");
    return uPtr(_boxSizing)->CalcArrangePaddingSize(this, lp);
}

// internal float2 GetLayoutPositionIn(Fuse.Visual target) [instance] :451
::g::Uno::Float2 Element::GetLayoutPositionIn(::g::Fuse::Visual* target)
{
    uStackFrame __("Fuse.Elements.Element", "GetLayoutPositionIn(Fuse.Visual)");
    Element* e = this;
    ::g::Uno::Float2 p = ::g::Uno::Float2__New1(0.0f);

    do
    {
        p = ::g::Uno::Float2__op_Addition2(p, uPtr(e)->ActualPosition());
        e = uAs<Element*>(uPtr(e)->Parent(), Element_typeof());
    }
    while ((e != target) && (e != NULL));

    return p;
}

// internal Uno.Recti GetViewportInvertPixelRect(Fuse.DrawContext dc, Uno.Rect localRegion) [instance] :70
::g::Uno::Recti Element::GetViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion)
{
    uStackFrame __("Fuse.Elements.Element", "GetViewportInvertPixelRect(Fuse.DrawContext,Uno.Rect)");
    ::g::Uno::Float4x4 transformMatrix = uPtr(dc)->GetLocalToClipTransform(this);
    ::g::Uno::Rect esr = ::g::Uno::Rect__Transform(localRegion, transformMatrix);
    ::g::Uno::Float2 low = ::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition(0.005f, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Min3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit2(dc->GLViewportPixelSize()))));
    ::g::Uno::Float2 high = ::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition1(::g::Uno::Math::Max3(esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::g::Uno::Float2__op_Implicit2(dc->GLViewportPixelSize())), 0.005f));
    ::g::Uno::Recti r = ::g::Uno::Recti__New1((int32_t)low.X, (int32_t)((float)dc->GLViewportPixelSize().Y - high.Y), (int32_t)high.X, (int32_t)((float)dc->GLViewportPixelSize().Y - low.Y));
    return r;
}

// public Uno.Recti GetVisibleViewportInvertPixelRect(Fuse.DrawContext dc, Fuse.VisualBounds localRegion) [instance] :86
::g::Uno::Recti Element::GetVisibleViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Fuse::VisualBounds* localRegion)
{
    uStackFrame __("Fuse.Elements.Element", "GetVisibleViewportInvertPixelRect(Fuse.DrawContext,Fuse.VisualBounds)");

    if (uPtr(localRegion)->IsInfinite())
        return uPtr(dc)->Scissor();

    if (uPtr(localRegion)->IsEmpty())
        return ::g::Uno::Recti__New1(0, 0, 0, 0);

    ::g::Uno::Recti s = uPtr(dc)->Scissor();
    ::g::Uno::Recti v = GetViewportInvertPixelRect(dc, uPtr(localRegion)->FlatRect());
    ::g::Uno::Recti i = ::g::Uno::Recti__Intersect(s, v);

    if ((i.Size().X < 0) || (i.Size().Y < 0))
        return ::g::Uno::Recti__New1(0, 0, 0, 0);

    return i;
}

// private void GMSReset() [instance] :144
void Element::GMSReset()
{
    _gmsCount = 0;
    _gmsAt = 0;
}

// private bool get_HasActiveEffects() [instance] :30
bool Element::HasActiveEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_HasActiveEffects()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > ret26;

    if (HasEffects())
    {
        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Effects::Effect*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_effects), &ret26), ret26);

        {
            try
            {
                {
                    while (enum2.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)))
                    {
                        ::g::Fuse::Effects::Effect* e = enum2.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));

                        if (uPtr(e)->Active())
                        {
                            bool __uno_retval = true;
                            enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
                            return __uno_retval;
                        }
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
                }
                                throw __t;
                goto __after_finally_5;
            }

            {
                enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL));
            }
            __after_finally_5:;
        }
    }

    return false;
}

// private bool get_HasCompositionEffect() [instance] :50
bool Element::HasCompositionEffect()
{
    return _compositionEffects > 0;
}

// private bool get_HasEffects() [instance] :24
bool Element::HasEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_HasEffects()");
    return (_effects != NULL) && (uPtr(_effects)->Count() > 0);
}

// internal bool HasLayoutIn(Fuse.Visual target) [instance] :435
bool Element::HasLayoutIn(::g::Fuse::Visual* target)
{
    uStackFrame __("Fuse.Elements.Element", "HasLayoutIn(Fuse.Visual)");
    Element* e = this;

    while (e != target)
    {
        e = uAs<Element*>(uPtr(e)->Parent(), Element_typeof());

        if (e == NULL)
            return false;
    }

    return true;
}

// public Uno.UX.Size get_Height() [instance] :43
::g::Uno::UX::Size Element::Height()
{
    return _height;
}

// public void set_Height(Uno.UX.Size value) [instance] :44
void Element::Height(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Height(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(_height, value))
    {
        _height = value;
        InvalidateLayout(2);
    }
}

// public Fuse.Elements.HitTestMode get_HitTestMode() [instance] :42
int32_t Element::HitTestMode()
{
    uStackFrame __("Fuse.Elements.Element", "get_HitTestMode()");
    int32_t ret28;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Fuse.Elements.HitTestMode>*/, ::g::Fuse::Elements::HitTestMode_typeof(), NULL), uCRef<int32_t>(524288), uCRef<int32_t>(5), &ret28), ret28);
}

// public void set_HitTestMode(Fuse.Elements.HitTestMode value) [instance] :43
void Element::HitTestMode(int32_t value)
{
    uStackFrame __("Fuse.Elements.Element", "set_HitTestMode(Fuse.Elements.HitTestMode)");
    SetHitTestMode(value, (uObject*)this);
}

// internal float2 get_IntendedPosition() [instance] :98
::g::Uno::Float2 Element::IntendedPosition()
{
    uStackFrame __("Fuse.Elements.Element", "get_IntendedPosition()");
    return ActualPosition();
}

// internal float2 get_IntendedSize() [instance] :93
::g::Uno::Float2 Element::IntendedSize()
{
    return _intendedSize;
}

// internal void InternArrangePaddingBox(Fuse.LayoutParams lp) [instance] :420
void Element::InternArrangePaddingBox(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "InternArrangePaddingBox(Fuse.LayoutParams)");
    ArrangePaddingBox(lp);
}

// internal float2 InternGetContentSize(Fuse.LayoutParams lp) [instance] :225
::g::Uno::Float2 Element::InternGetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Elements.Element", "InternGetContentSize(Fuse.LayoutParams)");
    return GetContentSize(lp);
}

// public void InvalidateRenderBoundsWithEffects() [instance] :75
void Element::InvalidateRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "InvalidateRenderBoundsWithEffects()");
    OnInvalidateRenderBoundsWithEffects();

    if (Parent() != NULL)
        uPtr(Parent())->InvalidateRenderBounds();
}

// public bool IsPointInside(float2 localPoint) [instance] :29
bool Element::IsPointInside(::g::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}

// public Uno.UX.Size get_LimitHeight() [instance] :66
::g::Uno::UX::Size Element::LimitHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_LimitHeight()");
    ::g::Uno::UX::Size ret29;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(16777216), uCRef(::g::Uno::UX::Size__Auto()), &ret29), ret29);
}

// public void set_LimitHeight(Uno.UX.Size value) [instance] :67
void Element::LimitHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_LimitHeight(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(LimitHeight(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(16777216), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_LimitWidth() [instance] :84
::g::Uno::UX::Size Element::LimitWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_LimitWidth()");
    ::g::Uno::UX::Size ret30;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(8388608), uCRef(::g::Uno::UX::Size__Auto()), &ret30), ret30);
}

// public void set_LimitWidth(Uno.UX.Size value) [instance] :85
void Element::LimitWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_LimitWidth(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(LimitWidth(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(8388608), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public float4 get_Margin() [instance] :244
::g::Uno::Float4 Element::Margin()
{
    uStackFrame __("Fuse.Elements.Element", "get_Margin()");
    ::g::Uno::Float4 ret31;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<float4>*/, ::g::Uno::Float4_typeof(), NULL), uCRef<int32_t>(1024), uCRef(::g::Uno::Float4__New1(0.0f)), &ret31), ret31);
}

// public void set_Margin(float4 value) [instance] :245
void Element::Margin(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Margin(float4)");

    if (::g::Uno::Float4__op_Inequality(Margin(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<float4>*/, ::g::Uno::Float4_typeof(), NULL), uCRef<int32_t>(1024), uCRef(value), uCRef(::g::Uno::Float4__New1(0.0f)));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MaxHeight() [instance] :143
::g::Uno::UX::Size Element::MaxHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_MaxHeight()");
    ::g::Uno::UX::Size ret32;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(512), uCRef(::g::Uno::UX::Size__Auto()), &ret32), ret32);
}

// public void set_MaxHeight(Uno.UX.Size value) [instance] :144
void Element::MaxHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MaxHeight(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MaxHeight(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(512), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MaxWidth() [instance] :122
::g::Uno::UX::Size Element::MaxWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_MaxWidth()");
    ::g::Uno::UX::Size ret33;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(256), uCRef(::g::Uno::UX::Size__Auto()), &ret33), ret33);
}

// public void set_MaxWidth(Uno.UX.Size value) [instance] :123
void Element::MaxWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MaxWidth(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MaxWidth(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(256), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MinHeight() [instance] :101
::g::Uno::UX::Size Element::MinHeight()
{
    uStackFrame __("Fuse.Elements.Element", "get_MinHeight()");
    ::g::Uno::UX::Size ret34;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(128), uCRef(::g::Uno::UX::Size__Auto()), &ret34), ret34);
}

// public void set_MinHeight(Uno.UX.Size value) [instance] :102
void Element::MinHeight(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MinHeight(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MinHeight(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(128), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_MinWidth() [instance] :80
::g::Uno::UX::Size Element::MinWidth()
{
    uStackFrame __("Fuse.Elements.Element", "get_MinWidth()");
    ::g::Uno::UX::Size ret35;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(64), uCRef(::g::Uno::UX::Size__Auto()), &ret35), ret35);
}

// public void set_MinWidth(Uno.UX.Size value) [instance] :81
void Element::MinWidth(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_MinWidth(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(MinWidth(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(64), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// private bool get_NeedsClipping() [instance] :39
bool Element::NeedsClipping()
{
    return ClipToBounds();
}

// private void NotifyRenderBoundsChanged() [instance] :58
void Element::NotifyRenderBoundsChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyRenderBoundsChanged()");
    uObject* t = TreeRenderer();

    if (t != NULL)
        ::g::Fuse::Elements::ITreeRenderer::RenderBoundsChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this);

    _hasNotifiedRenderBoundsChanged = false;
}

// private extern void NotifyRooted() [instance] :157
void Element::NotifyRooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyRooted()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret18;

    if (_rootedListeners != NULL)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(RootedListeners()), &ret18), ret18);

        {
            try
            {
                {
                    while (enum7.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL)))
                    {
                        uDelegate* l = enum7.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL));
                        uPtr(l)->InvokeVoid();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum7.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL));
                }
                                throw __t;
                goto __after_finally_6;
            }

            {
                enum7.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL));
            }
            __after_finally_6:;
        }
    }
}

// private void NotifyTreeRedererOpacityChanged() [instance] :97
void Element::NotifyTreeRedererOpacityChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRedererOpacityChanged()");

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::OpacityChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this, Opacity());
    }
}

// private void NotifyTreeRendererHitTestModeChanged() [instance] :87
void Element::NotifyTreeRendererHitTestModeChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererHitTestModeChanged()");

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::HitTestModeChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this, HitTestMode() != 0);
    }
}

// private void NotifyTreeRendererPlaced() [instance] :413
void Element::NotifyTreeRendererPlaced()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererPlaced()");
    uObject* t = TreeRenderer();

    if (t != NULL)
        ::g::Fuse::Elements::ITreeRenderer::Placed(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this);
}

// private void NotifyTreeRendererRooted() [instance] :131
void Element::NotifyTreeRendererRooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererRooted()");
    uObject* t = TreeRenderer();

    if (t != NULL)
    {
        ::g::Fuse::Elements::ITreeRenderer::Rooted(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this);
        ::g::Fuse::Elements::ITreeRenderer::OpacityChanged(uInterface(t, ::g::Fuse::Elements::ITreeRenderer_typeof()), this, Opacity());
        ::g::Fuse::Elements::ITreeRenderer::IsVisibleChanged(uInterface(t, ::g::Fuse::Elements::ITreeRenderer_typeof()), this, IsVisible());
        ::g::Fuse::Elements::ITreeRenderer::IsEnabledChanged(uInterface(t, ::g::Fuse::Elements::ITreeRenderer_typeof()), this, IsEnabled());
        ::g::Fuse::Elements::ITreeRenderer::ClipToBoundsChanged(uInterface(t, ::g::Fuse::Elements::ITreeRenderer_typeof()), this, ClipToBounds());
        ::g::Fuse::Elements::ITreeRenderer::HitTestModeChanged(uInterface(t, ::g::Fuse::Elements::ITreeRenderer_typeof()), this, HitTestMode() != 0);

        if (HasChildren())
            ::g::Fuse::Elements::ITreeRenderer::ZOrderChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this, GetCachedZOrder());
    }
}

// private void NotifyTreeRendererRootingStarted() [instance] :124
void Element::NotifyTreeRendererRootingStarted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererRootingStarted()");
    uObject* t = TreeRenderer();

    if (t != NULL)
        ::g::Fuse::Elements::ITreeRenderer::RootingStarted(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this);
}

// private void NotifyTreeRendererTransformChanged() [instance] :67
void Element::NotifyTreeRendererTransformChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererTransformChanged()");

    if (!_transformChanged)
    {
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Element__SetNewTransform_fn, this), 1, 5);
        _transformChanged = true;
    }
}

// private void NotifyTreeRendererUnrooted() [instance] :147
void Element::NotifyTreeRendererUnrooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererUnrooted()");
    uObject* t = TreeRenderer();

    if (t != NULL)
        ::g::Fuse::Elements::ITreeRenderer::Unrooted(uInterface(uPtr(TreeRenderer()), ::g::Fuse::Elements::ITreeRenderer_typeof()), this);
}

// private void NotifyTreeRendererZOrderChanged() [instance] :46
void Element::NotifyTreeRendererZOrderChanged()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyTreeRendererZOrderChanged()");

    if (HasChildren() && !_dispatchedZOrderChanged)
    {
        _dispatchedZOrderChanged = true;
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Element__OnZOrderChanged_fn, this), 1, 5);
    }
}

// private extern void NotifyUnrooted() [instance] :172
void Element::NotifyUnrooted()
{
    uStackFrame __("Fuse.Elements.Element", "NotifyUnrooted()");
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret19;

    if (_unrootedListeners != NULL)
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(UnrootedListeners()), &ret19), ret19);

        {
            try
            {
                {
                    while (enum8.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL)))
                    {
                        uDelegate* l = enum8.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL));
                        uPtr(l)->InvokeVoid();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum8.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL));
                }
                                throw __t;
                goto __after_finally_7;
            }

            {
                enum8.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL));
            }
            __after_finally_7:;
        }
    }
}

// public Uno.UX.Size2 get_Offset() [instance] :291
::g::Uno::UX::Size2 Element::Offset()
{
    uStackFrame __("Fuse.Elements.Element", "get_Offset()");
    ::g::Uno::UX::Size2 ret36;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size2>*/, ::g::Uno::UX::Size2_typeof(), NULL), uCRef<int32_t>(8192), uCRef(::g::Uno::UX::Size2__Auto()), &ret36), ret36);
}

// public void set_Offset(Uno.UX.Size2 value) [instance] :292
void Element::Offset(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Offset(Uno.UX.Size2)");

    if (::g::Uno::UX::Size2__op_Inequality(Offset(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size2>*/, ::g::Uno::UX::Size2_typeof(), NULL), uCRef<int32_t>(8192), uCRef(value), uCRef(::g::Uno::UX::Size2__Auto()));
        InvalidateLayout(2);
    }
}

// private void OnEffectAdded(Fuse.Effects.Effect e) [instance] :53
void Element::OnEffectAdded(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectAdded(Fuse.Effects.Effect)");

    if (uPtr(e)->Type() == 1)
        _compositionEffects++;

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)), e);
    uPtr(e)->add_RenderingChanged(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL), (void*)Element__OnEffectRenderingChanged_fn, this));
    e->add_RenderBoundsChanged(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL), (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
}

// private void OnEffectRemoved(Fuse.Effects.Effect e) [instance] :64
void Element::OnEffectRemoved(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRemoved(Fuse.Effects.Effect)");
    bool ret20;

    if (uPtr(e)->Type() == 1)
        _compositionEffects--;

    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Effects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL)), e, &ret20);
    uPtr(e)->remove_RenderingChanged(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL), (void*)Element__OnEffectRenderingChanged_fn, this));
    e->remove_RenderBoundsChanged(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof(), NULL), (void*)Element__OnEffectRenderBoundsChanged_fn, this));
    InvalidateVisual();
}

// private void OnEffectRenderBoundsChanged(Fuse.Effects.Effect e) [instance] :80
void Element::OnEffectRenderBoundsChanged(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRenderBoundsChanged(Fuse.Effects.Effect)");
    InvalidateRenderBoundsWithEffects();
}

// private void OnEffectRenderingChanged(Fuse.Effects.Effect e) [instance] :75
void Element::OnEffectRenderingChanged(::g::Fuse::Effects::Effect* e)
{
    uStackFrame __("Fuse.Elements.Element", "OnEffectRenderingChanged(Fuse.Effects.Effect)");
    InvalidateVisual();
}

// private void OnHitTestChildren(Fuse.HitTestContext htc) [instance] :70
void Element::OnHitTestChildren(::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Elements.Element", "OnHitTestChildren(Fuse.HitTestContext)");

    if (HasVisualChildren())
    {
        uArray* zOrder = GetCachedZOrder();

        for (int32_t i = uPtr(zOrder)->Length() - 1; i >= 0; i--)
            uPtr(uPtr(zOrder)->Strong< ::g::Fuse::Visual*>(i))->HitTest(htc);
    }
}

// private void OnInvalidateRenderBoundsWithEffects() [instance] :66
void Element::OnInvalidateRenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "OnInvalidateRenderBoundsWithEffects()");

    if (ElementBatchEntry() != NULL)
        uPtr(ElementBatchEntry())->InvalidateRenderBounds();

    _renderBoundsWithEffects = NULL;
}

// private void OnOpacityChanged(Uno.UX.IPropertyListener origin) [instance] :49
void Element::OnOpacityChanged(uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "OnOpacityChanged(Uno.UX.IPropertyListener)");
    OnPropertyChanged1(Element::_opacityName_, origin);
    InvalidateVisualComposition();
    NotifyTreeRedererOpacityChanged();
}

// private void OnPreplacement() [instance] :315
void Element::OnPreplacement()
{
    uStackFrame __("Fuse.Elements.Element", "OnPreplacement()");

    if (::g::Uno::Delegate::op_Inequality(Preplacement1, NULL))
        uPtr(Preplacement1)->Invoke(2, this, (::g::Fuse::Elements::PreplacementArgs*)::g::Fuse::Elements::PreplacementArgs::New2(_placedBefore != NULL));
}

// private void OnVisibilityChanged(Fuse.Elements.Visibility oldVisibility, Uno.UX.IPropertyListener origin) [instance] :214
void Element::OnVisibilityChanged(int32_t oldVisibility, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "OnVisibilityChanged(Fuse.Elements.Visibility,Uno.UX.IPropertyListener)");
    OnPropertyChanged1(Element::_visibilityName_, origin);
    OnLocalVisibleChanged();

    if ((oldVisibility == 1) || (Visibility() == 1))
        InvalidateLayout(2);

    InvalidateVisualComposition();
}

// private void OnZOrderChanged() [instance] :55
void Element::OnZOrderChanged()
{
    uStackFrame __("Fuse.Elements.Element", "OnZOrderChanged()");
    _dispatchedZOrderChanged = false;

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::ZOrderChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this, GetCachedZOrder());
    }
}

// public float get_Opacity() [instance] :37
float Element::Opacity()
{
    uStackFrame __("Fuse.Elements.Element", "get_Opacity()");
    float ret37;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<float>*/, ::g::Uno::Float_typeof(), NULL), uCRef<int32_t>(4194304), uCRef(1.0f), &ret37), ret37);
}

// public void set_Opacity(float value) [instance] :38
void Element::Opacity(float value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Opacity(float)");
    SetOpacity(value, (uObject*)this);
}

// public float4 get_Padding() [instance] :274
::g::Uno::Float4 Element::Padding()
{
    uStackFrame __("Fuse.Elements.Element", "get_Padding()");
    ::g::Uno::Float4 ret38;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<float4>*/, ::g::Uno::Float4_typeof(), NULL), uCRef<int32_t>(2048), uCRef(::g::Uno::Float4__New1(0.0f)), &ret38), ret38);
}

// public void set_Padding(float4 value) [instance] :275
void Element::Padding(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Padding(float4)");

    if (::g::Uno::Float4__op_Inequality(Padding(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<float4>*/, ::g::Uno::Float4_typeof(), NULL), uCRef<int32_t>(2048), uCRef(value), uCRef(::g::Uno::Float4__New1(0.0f)));
        InvalidateLayout(2);
    }
}

// internal void PerformPlacement(float2 position, float2 size, bool temp) [instance] :341
void Element::PerformPlacement(::g::Uno::Float2 position, ::g::Uno::Float2 size, bool temp)
{
    uStackFrame __("Fuse.Elements.Element", "PerformPlacement(float2,float2,bool)");
    ::g::Uno::Float2 s = ::g::Uno::Math::Max3(size, ::g::Uno::Float2__New1(0.0f));
    _ppPrevSize = _intendedSize;
    _ppPrevPosition = ActualPosition();
    bool newSize = ::g::Uno::Float2__op_Inequality(_ppPrevSize, s) || ::g::Uno::Float2__op_Inequality(_actualSize, s);
    bool newPosition = (_ppPrevPosition.X != position.X) || (_ppPrevPosition.Y != position.Y);
    bool newParent = _placedBefore != Parent();

    if ((newParent || newPosition) || newSize)
    {
        if (!temp && !_pendingDispatchPlacement)
        {
            OnPreplacement();

            if (TreeRenderer() != NULL)
                ::g::Fuse::UpdateManager::AddDeferredAction3(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Element__NotifyTreeRendererPlaced_fn, this), 3);

            if (::g::Uno::Delegate::op_Inequality(Placed1, NULL))
            {
                ::g::Fuse::UpdateManager::AddDeferredAction3(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Element__DispatchPlacement_fn, this), 3);
                _pendingDispatchPlacement = true;
            }
            else
                _placedBefore = Parent();
        }
    }

    if (newSize)
    {
        _actualSize = s;

        if (!temp)
            _intendedSize = s;
    }

    if (newSize || newParent)
    {
        InvalidateRenderBounds();
        InvalidateHitTestBounds();
    }

    if (newPosition)
    {
        _actualPosition = position;
        _haveActualPositionCache = false;
        InvalidateVisualComposition();
    }

    if ((newSize || newParent) || newPosition)
        InvalidateLocalTransform();
}

// public generated void add_Placed(Fuse.PlacedHandler value) [instance] :303
void Element::add_Placed(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "add_Placed(Fuse.PlacedHandler)");
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Placed1, value), ::TYPES[0/*Fuse.PlacedHandler*/]);
}

// public generated void remove_Placed(Fuse.PlacedHandler value) [instance] :303
void Element::remove_Placed(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "remove_Placed(Fuse.PlacedHandler)");
    Placed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Placed1, value), ::TYPES[0/*Fuse.PlacedHandler*/]);
}

// public Uno.UX.Size2 get_Position() [instance] :365
::g::Uno::UX::Size2 Element::Position()
{
    return ::g::Uno::UX::Size2__New1(X(), Y());
}

// public void set_Position(Uno.UX.Size2 value) [instance] :366
void Element::Position(::g::Uno::UX::Size2 value)
{
    X(value.X);
    Y(value.Y);
}

// public generated void add_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :307
void Element::add_Preplacement(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "add_Preplacement(Fuse.Elements.PreplacementHandler)");
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Preplacement1, value), ::g::Fuse::Elements::PreplacementHandler_typeof());
}

// public generated void remove_Preplacement(Fuse.Elements.PreplacementHandler value) [instance] :307
void Element::remove_Preplacement(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.Element", "remove_Preplacement(Fuse.Elements.PreplacementHandler)");
    Preplacement1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Preplacement1, value), ::g::Fuse::Elements::PreplacementHandler_typeof());
}

// private void RemoveChildElementFromBatching(Fuse.Elements.Element elm) [instance] :31
void Element::RemoveChildElementFromBatching(Element* elm)
{
    uStackFrame __("Fuse.Elements.Element", "RemoveChildElementFromBatching(Fuse.Elements.Element)");

    if (uPtr(elm)->ElementBatchEntry() != NULL)
    {
        uPtr(uPtr(elm)->ElementBatchEntry())->OnRemoved();
        elm->ElementBatchEntry(NULL);
        _elementBatchValid = false;
    }

    if (_elementBatcher != NULL)
        uPtr(_elementBatcher)->Remove(elm);
}

// public Fuse.VisualBounds get_RenderBoundsWithEffects() [instance] :26
::g::Fuse::VisualBounds* Element::RenderBoundsWithEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_RenderBoundsWithEffects()");

    if (_renderBoundsWithEffects == NULL)
        _renderBoundsWithEffects = CalcRenderBoundsWithEffects();

    return _renderBoundsWithEffects;
}

// public Fuse.VisualBounds get_RenderBoundsWithoutEffects() [instance] :45
::g::Fuse::VisualBounds* Element::RenderBoundsWithoutEffects()
{
    uStackFrame __("Fuse.Elements.Element", "get_RenderBoundsWithoutEffects()");

    if (_renderBoundsWithoutEffects == NULL)
    {
        _renderBoundsWithoutEffects = CalcRenderBounds();

        if (ClipToBounds())
            _renderBoundsWithoutEffects = uPtr(_renderBoundsWithoutEffects)->IntersectXY(::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), ActualSize()));
    }

    return _renderBoundsWithoutEffects;
}

// internal void RequestLayout() [instance] :198
void Element::RequestLayout()
{
    uStackFrame __("Fuse.Elements.Element", "RequestLayout()");
    uPtr(_boxSizing)->RequestLayout(this);
}

// private extern Uno.Collections.List<Uno.Action> get_RootedListeners() [instance] :154
::g::Uno::Collections::List* Element::RootedListeners()
{
    ::g::Uno::Collections::List* ind12;
    ind12 = _rootedListeners;
    return (ind12 != NULL) ? ind12 : (::g::Uno::Collections::List*)(_rootedListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::g::Uno::Collections::List_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL), 1)));
}

// public void SetExplicitTransformOrigin(Uno.UX.Size2 value, Uno.UX.IPropertyListener origin) [instance] :134
void Element::SetExplicitTransformOrigin(::g::Uno::UX::Size2 value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetExplicitTransformOrigin(Uno.UX.Size2,Uno.UX.IPropertyListener)");
    ::g::Fuse::Elements::ExplicitTransformOrigin* to = uAs< ::g::Fuse::Elements::ExplicitTransformOrigin*>(TransformOrigin(), ::g::Fuse::Elements::ExplicitTransformOrigin_typeof());

    if (to == NULL)
    {
        to = ::g::Fuse::Elements::ExplicitTransformOrigin::New1();
        to->Origin = value;
        TransformOrigin((uObject*)to);
    }
    else
    {
        if (::g::Uno::UX::Size2__op_Equality(uPtr(to)->Origin, value))
            return;

        uPtr(to)->Origin = value;
        InvalidateLocalTransform();
    }

    OnPropertyChanged1(Element::ExplicitTransformOriginName_, origin);
}

// public void SetHitTestMode(Fuse.Elements.HitTestMode value, Uno.UX.IPropertyListener origin) [instance] :46
void Element::SetHitTestMode(int32_t value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetHitTestMode(Fuse.Elements.HitTestMode,Uno.UX.IPropertyListener)");
    ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Fuse.Elements.HitTestMode>*/, ::g::Fuse::Elements::HitTestMode_typeof(), NULL), uCRef<int32_t>(524288), uCRef<int32_t>(value), uCRef<int32_t>(5));
    InvalidateHitTestBounds();
    OnPropertyChanged1(Element::_hitTestModeName_, origin);
    NotifyTreeRendererHitTestModeChanged();
}

// private void SetNewTransform() [instance] :76
void Element::SetNewTransform()
{
    uStackFrame __("Fuse.Elements.Element", "SetNewTransform()");

    if (IsRootingCompleted())
    {
        uObject* t = TreeRenderer();

        if (t != NULL)
            ::g::Fuse::Elements::ITreeRenderer::TransformChanged(uInterface(uPtr(t), ::g::Fuse::Elements::ITreeRenderer_typeof()), this);
    }

    _transformChanged = false;
}

// public void SetOpacity(float value, Uno.UX.IPropertyListener origin) [instance] :41
void Element::SetOpacity(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetOpacity(float,Uno.UX.IPropertyListener)");

    if (Opacity() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<float>*/, ::g::Uno::Float_typeof(), NULL), uCRef<int32_t>(4194304), uCRef(value), uCRef(1.0f));
        OnOpacityChanged(origin);
    }
}

// public void SetVisibility(Fuse.Elements.Visibility value, Uno.UX.IPropertyListener origin) [instance] :206
void Element::SetVisibility(int32_t value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.Element", "SetVisibility(Fuse.Elements.Visibility,Uno.UX.IPropertyListener)");
    int32_t old = _visibility;
    _visibility = value;
    OnVisibilityChanged(old, origin);
}

// private bool ShouldBatch() [instance] :10
bool Element::ShouldBatch()
{
    uStackFrame __("Fuse.Elements.Element", "ShouldBatch()");

    if (VisualChildCount() < 10)
        return false;

    int32_t batchable = 0;

    for (::g::Fuse::Visual* v = (::g::Fuse::Visual*)FirstChild(::TYPES[35/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (::g::Fuse::Visual*)uPtr(v)->NextSibling(::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL)))
        if (::g::Fuse::Elements::ElementBatcher::ShouldBatchElement(v))
            batchable++;

    return batchable > (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/])) / 2);
}

// public Uno.UX.Size2 get_Size() [instance] :62
::g::Uno::UX::Size2 Element::Size()
{
    return ::g::Uno::UX::Size2__New1(Width(), Height());
}

// public void set_Size(Uno.UX.Size2 value) [instance] :63
void Element::Size(::g::Uno::UX::Size2 value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Size(Uno.UX.Size2)");
    Width(value.X);
    Height(value.Y);
}

// public Fuse.Elements.ITransformOrigin get_TransformOrigin() [instance] :108
uObject* Element::TransformOrigin()
{
    uStackFrame __("Fuse.Elements.Element", "get_TransformOrigin()");
    uObject* ret39;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Fuse.Elements.ITransformOrigin>*/, ::TYPES[31/*Fuse.Elements.ITransformOrigin*/], NULL), uCRef<int32_t>(2097152), Element::DefaultTransformOrigin_, &ret39), ret39);
}

// public void set_TransformOrigin(Fuse.Elements.ITransformOrigin value) [instance] :109
void Element::TransformOrigin(uObject* value)
{
    uStackFrame __("Fuse.Elements.Element", "set_TransformOrigin(Fuse.Elements.ITransformOrigin)");

    if (TransformOrigin() != value)
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Fuse.Elements.ITransformOrigin>*/, ::TYPES[31/*Fuse.Elements.ITransformOrigin*/], NULL), uCRef<int32_t>(2097152), value, Element::DefaultTransformOrigin_);
        InvalidateLocalTransform();
    }
}

// private extern Uno.Collections.List<Uno.Action> get_UnrootedListeners() [instance] :169
::g::Uno::Collections::List* Element::UnrootedListeners()
{
    ::g::Uno::Collections::List* ind13;
    ind13 = _unrootedListeners;
    return (ind13 != NULL) ? ind13 : (::g::Uno::Collections::List*)(_unrootedListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::g::Uno::Collections::List_typeof()->MakeType(::TYPES[25/*Uno.Action*/], NULL), 1)));
}

// public Fuse.Elements.Visibility get_Visibility() [instance] :202
int32_t Element::Visibility()
{
    return _visibility;
}

// public void set_Visibility(Fuse.Elements.Visibility value) [instance] :203
void Element::Visibility(int32_t value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Visibility(Fuse.Elements.Visibility)");
    SetVisibility(value, (uObject*)this);
}

// public Uno.UX.Size get_Width() [instance] :21
::g::Uno::UX::Size Element::Width()
{
    return _width;
}

// public void set_Width(Uno.UX.Size value) [instance] :22
void Element::Width(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Width(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(_width, value))
    {
        _width = value;
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_X() [instance] :331
::g::Uno::UX::Size Element::X()
{
    uStackFrame __("Fuse.Elements.Element", "get_X()");
    ::g::Uno::UX::Size ret40;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(16384), uCRef(::g::Uno::UX::Size__Auto()), &ret40), ret40);
}

// public void set_X(Uno.UX.Size value) [instance] :332
void Element::X(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_X(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(X(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(16384), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// public Uno.UX.Size get_Y() [instance] :348
::g::Uno::UX::Size Element::Y()
{
    uStackFrame __("Fuse.Elements.Element", "get_Y()");
    ::g::Uno::UX::Size ret41;
    return (::g::Fuse::Visual__Get_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(3/*Get<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(32768), uCRef(::g::Uno::UX::Size__Auto()), &ret41), ret41);
}

// public void set_Y(Uno.UX.Size value) [instance] :349
void Element::Y(::g::Uno::UX::Size value)
{
    uStackFrame __("Fuse.Elements.Element", "set_Y(Uno.UX.Size)");

    if (::g::Uno::UX::Size__op_Inequality(Y(), value))
    {
        ::g::Fuse::Visual__Set_fn(this, ::g::Fuse::Visual_typeof()->MakeMethod(9/*Set<Uno.UX.Size>*/, ::g::Uno::UX::Size_typeof(), NULL), uCRef<int32_t>(32768), uCRef(value), uCRef(::g::Uno::UX::Size__Auto()));
        InvalidateLayout(2);
    }
}

// internal static extern Uno.IDisposable VisualAppearedFactory(object obj, Uno.Action<Uno.Rect, float4x4> handler) [static] :55
uObject* Element::VisualAppearedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualAppearedFactory(object,Uno.Action<Uno.Rect, float4x4>)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__VisualAppeared::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}

// internal static extern Uno.IDisposable VisualBoundsChangedFactory(object obj, Uno.Action<Uno.Rect> handler) [static] :62
uObject* Element::VisualBoundsChangedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualBoundsChangedFactory(object,Uno.Action<Uno.Rect>)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__BoundsChanged::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}

// internal static extern Uno.IDisposable VisualDisappearedFactory(object obj, Uno.Action handler) [static] :95
uObject* Element::VisualDisappearedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualDisappearedFactory(object,Uno.Action)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__VisualDisappeared::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}

// internal static extern Uno.IDisposable VisualTransformChangedFactory(object obj, Uno.Action<float4x4> handler) [static] :22
uObject* Element::VisualTransformChangedFactory(uObject* obj, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element", "VisualTransformChangedFactory(object,Uno.Action<float4x4>)");
    Element_typeof()->Init();
    return uIs(obj, Element_typeof()) ? (uObject*)Element__TransformChanged::New1(uCast<Element*>(obj, Element_typeof()), handler) : (uObject*)Element__DefaultDisposable::Instance();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementAtlas.uno
// --------------------------------------------------------------------------

// internal sealed class ElementAtlas :8
// {
static void ElementAtlas_build(uType* type)
{
    ::STRINGS[0] = uString::Const("element not already inserted anywhere!");
    ::STRINGS[1] = uString::Const("wrong atlas again, dummy!");
    ::STRINGS[2] = uString::Const("Removing from wrong atlas");
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Fuse::Internal::RectPacker_typeof(), offsetof(ElementAtlas, _rectPacker), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(ElementAtlas, _framebuffer), 0,
        ::g::Uno::Int_typeof(), offsetof(ElementAtlas, _invalidElements), 0,
        ::g::Uno::Int_typeof(), offsetof(ElementAtlas, _spilledPixels), 0,
        ::TYPES[5/*Uno.Collections.List<Fuse.Elements.Element>*/], offsetof(ElementAtlas, _elements), 0);
}

uType* ElementAtlas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ElementAtlas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlas", options);
    type->fp_build_ = ElementAtlas_build;
    type->fp_ctor_ = (void*)ElementAtlas__New1_fn;
    return type;
}

// public ElementAtlas() :20
void ElementAtlas__ctor__fn(ElementAtlas* __this)
{
    __this->ctor_();
}

// public bool AddElement(Fuse.Elements.Element elm) :52
void ElementAtlas__AddElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, bool* __retval)
{
    *__retval = __this->AddElement(elm);
}

// public void Dispose() :27
void ElementAtlas__Dispose_fn(ElementAtlas* __this)
{
    __this->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, framebuffer fb, bool drawAll, Uno.Rect scissorRectInClipSpace) :163
void ElementAtlas__FillFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, bool* drawAll, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->FillFramebuffer(dc, fb, *drawAll, *scissorRectInClipSpace);
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) :132
void ElementAtlas__GetScissorRectInClipSpace_fn(::g::Fuse::DrawContext* dc, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::GetScissorRectInClipSpace(dc);
}

// internal void InvalidateElement(Fuse.Elements.Element elm) :39
void ElementAtlas__InvalidateElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateElement(elm);
}

// public ElementAtlas New() :20
void ElementAtlas__New1_fn(ElementAtlas** __retval)
{
    *__retval = ElementAtlas::New1();
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) :33
void ElementAtlas__OnFramebufferCollected_fn(ElementAtlas* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnFramebufferCollected(sender, eventArgs);
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) :137
void ElementAtlas__PinAndValidateFramebuffer_fn(ElementAtlas* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->PinAndValidateFramebuffer(dc);
}

// public bool ReinsertElement(Fuse.Elements.Element elm, Uno.Recti cacheRect) :93
void ElementAtlas__ReinsertElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* cacheRect, bool* __retval)
{
    *__retval = __this->ReinsertElement(elm, *cacheRect);
}

// public void RemoveElement(Fuse.Elements.Element elm) :75
void ElementAtlas__RemoveElement_fn(ElementAtlas* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public float get_SpilledRatio() :16
void ElementAtlas__get_SpilledRatio_fn(ElementAtlas* __this, float* __retval)
{
    *__retval = __this->SpilledRatio();
}

// public void Unpin() :158
void ElementAtlas__Unpin_fn(ElementAtlas* __this)
{
    __this->Unpin();
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) :118
void ElementAtlas__WindowCoordToClipSpace_fn(::g::Uno::Float2* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Float2* __retval)
{
    *__retval = ElementAtlas::WindowCoordToClipSpace(*input, *viewportSize);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) :123
void ElementAtlas__WindowRectToClipSpace_fn(::g::Uno::Rect* input, ::g::Uno::Int2* viewportSize, ::g::Uno::Rect* __retval)
{
    *__retval = ElementAtlas::WindowRectToClipSpace(*input, *viewportSize);
}

// public ElementAtlas() [instance] :20
void ElementAtlas::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Fuse.Elements.Element>*/]));
    _framebuffer = ::g::Fuse::Elements::ElementAtlasFramebuffer::New1();
    uPtr(_framebuffer)->add_FramebufferCollected(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)ElementAtlas__OnFramebufferCollected_fn, this));
    _rectPacker = ::g::Fuse::Internal::RectPacker::New1(::g::Fuse::Elements::ElementAtlasFramebuffer::Size());
}

// public bool AddElement(Fuse.Elements.Element elm) [instance] :52
bool ElementAtlas::AddElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "AddElement(Fuse.Elements.Element)");
    ::g::Uno::Recti cacheRect = ::g::Fuse::Elements::ElementBatch::GetCachingRect(elm);
    ::g::Uno::Recti rect;

    if (!uPtr(_rectPacker)->TryAdd(cacheRect.Size(), &rect))
        return false;

    if (uPtr(elm)->ElementBatchEntry() == NULL)
        uPtr(elm)->ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry::New1(elm));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != NULL)
        uPtr(uPtr(entry)->_atlas)->RemoveElement(elm);

    uPtr(entry)->_atlas = this;
    entry->AtlasRect = rect;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    _invalidElements++;
    entry->IsValid = false;
    return true;
}

// public void Dispose() [instance] :27
void ElementAtlas::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "Dispose()");
    uPtr(_framebuffer)->remove_FramebufferCollected(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)ElementAtlas__OnFramebufferCollected_fn, this));
    uPtr(_framebuffer)->Dispose();
}

// private void FillFramebuffer(Fuse.DrawContext dc, framebuffer fb, bool drawAll, Uno.Rect scissorRectInClipSpace) [instance] :163
void ElementAtlas::FillFramebuffer(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, bool drawAll, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "FillFramebuffer(Fuse.DrawContext,framebuffer,bool,Uno.Rect)");
    ::g::Fuse::OrthographicFrustum* collection3;
    ::g::Uno::Float2 ind4;
    ::g::Uno::Float4x4 ind5;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret7;
    bool framebufferPushed = false;
    float density = uPtr(dc)->ViewportPixelsPerPoint();
    ::g::Uno::Float2 viewport = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit2(uPtr(_rectPacker)->Size()), density);
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7);

    {
        try
        {
            {
                while (enum2.MoveNext(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]))
                {
                    ::g::Fuse::Elements::Element* elm = enum2.Current(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
                    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

                    if (!uPtr(entry)->IsValid || drawAll)
                    {
                        ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(elm);
                        ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(uPtr(uPtr(elm)->RenderBoundsWithEffects())->FlatRect(), localToClipTransform);

                        if (!scissorRectInClipSpace.Intersects(visibleRect))
                            continue;

                        ::g::Uno::Recti cachingRect = ::g::Fuse::Elements::ElementBatch::GetCachingRect(elm);
                        ::g::Uno::Float2 offset = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit2(::g::Uno::Int2__op_Subtraction1(uPtr(entry)->AtlasRect.Minimum(), cachingRect.Minimum())), density);
                        ::g::Uno::Float4x4 translation = ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f);
                        collection3 = ::g::Fuse::OrthographicFrustum::New1();
                        ind4 = ::g::Uno::Float2__New2(0.0f, 0.0f);
                        uPtr(collection3)->Origin(ind4);
                        ind4;
                        uPtr(collection3)->Size(viewport);
                        viewport;
                        ind5 = ::g::Uno::Matrix::Mul8(elm->WorldTransformInverse(), translation);
                        uPtr(collection3)->LocalFromWorld(ind5);
                        ind5;
                        ::g::Fuse::OrthographicFrustum* cc = collection3;

                        if (!framebufferPushed)
                        {
                            uPtr(dc)->PushRenderTarget(fb);

                            if (drawAll)
                                uPtr(dc)->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);

                            framebufferPushed = true;
                        }

                        dc->PushViewport((uObject*)::g::Fuse::FixedViewport::New1(uPtr(_rectPacker)->Size(), density, (uObject*)cc));
                        ::g::Uno::Recti scissor = entry->AtlasRect;

                        if (elm->ClipToBounds())
                            scissor = uPtr(elm)->GetVisibleViewportInvertPixelRect(dc, uPtr(elm)->RenderBoundsWithEffects());

                        dc->PushScissor(scissor);

                        if (!drawAll)
                            uPtr(dc)->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);

                        elm->CompositEffects(dc);
                        dc->PopScissor();
                        dc->PopViewport();

                        if (!entry->IsValid)
                            _invalidElements--;

                        entry->IsValid = true;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            enum2.Dispose(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        }
        __after_finally_8:;
    }

    if (framebufferPushed)
        uPtr(dc)->PopRenderTarget();
}

// internal void InvalidateElement(Fuse.Elements.Element elm) [instance] :39
void ElementAtlas::InvalidateElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "InvalidateElement(Fuse.Elements.Element)");
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (entry == NULL)
        return;

    if (uPtr(entry)->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }
}

// private void OnFramebufferCollected(object sender, Uno.EventArgs eventArgs) [instance] :33
void ElementAtlas::OnFramebufferCollected(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "OnFramebufferCollected(object,Uno.EventArgs)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > ret8;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::Element*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]))
                {
                    ::g::Fuse::Elements::Element* elm = enum1.Current(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
                    InvalidateElement(elm);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_9;
        }

        {
            enum1.Dispose(::TYPES[7/*Uno.Collections.List<Fuse.Elements.Element>.Enumerator*/]);
        }
        __after_finally_9:;
    }
}

// public framebuffer PinAndValidateFramebuffer(Fuse.DrawContext dc) [instance] :137
::g::Uno::Graphics::Framebuffer* ElementAtlas::PinAndValidateFramebuffer(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "PinAndValidateFramebuffer(Fuse.DrawContext)");
    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_framebuffer)->Pin();

    try
    {
        {
            if (_invalidElements > 0)
            {
                ::g::Uno::Rect scissorRectInClipSpace = ElementAtlas::GetScissorRectInClipSpace(dc);
                bool drawAll = _invalidElements == uPtr(_elements)->Count();
                FillFramebuffer(dc, fb, drawAll, scissorRectInClipSpace);
            }

            return fb;
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_framebuffer)->Unpin();
        throw __t;
    }
}

// public bool ReinsertElement(Fuse.Elements.Element elm, Uno.Recti cacheRect) [instance] :93
bool ElementAtlas::ReinsertElement(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti cacheRect)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "ReinsertElement(Fuse.Elements.Element,Uno.Recti)");

    if (uPtr(elm)->ElementBatchEntry() == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"element not...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"wrong atlas...*/]));

    ::g::Uno::Recti rect;

    if (!uPtr(_rectPacker)->TryAdd(cacheRect.Size(), &rect))
        return false;

    _spilledPixels = (_spilledPixels + uPtr(entry)->AtlasRect.Area());
    entry->AtlasRect = rect;

    if (entry->IsValid)
    {
        _invalidElements++;
        uPtr(entry)->IsValid = false;
    }

    return true;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :75
void ElementAtlas::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "RemoveElement(Fuse.Elements.Element)");
    bool ret9;
    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();

    if (uPtr(entry)->_atlas != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Removing fr...*/]));

    _spilledPixels = (_spilledPixels + uPtr(entry)->AtlasRect.Area());

    if (!entry->IsValid)
        _invalidElements--;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), elm, &ret9);
    entry->_atlas = NULL;
}

// public float get_SpilledRatio() [instance] :16
float ElementAtlas::SpilledRatio()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "get_SpilledRatio()");
    return (float)_spilledPixels / (float)(uPtr(_rectPacker)->Size().X * uPtr(_rectPacker)->Size().Y);
}

// public void Unpin() [instance] :158
void ElementAtlas::Unpin()
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "Unpin()");
    uPtr(_framebuffer)->Unpin();
}

// public static Uno.Rect GetScissorRectInClipSpace(Fuse.DrawContext dc) [static] :132
::g::Uno::Rect ElementAtlas::GetScissorRectInClipSpace(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementAtlas", "GetScissorRectInClipSpace(Fuse.DrawContext)");
    return ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect__op_Implicit1(uPtr(dc)->Scissor()), uPtr(dc)->GLViewportPixelSize());
}

// public ElementAtlas New() [static] :20
ElementAtlas* ElementAtlas::New1()
{
    ElementAtlas* obj6 = (ElementAtlas*)uNew(ElementAtlas_typeof());
    obj6->ctor_();
    return obj6;
}

// private static float2 WindowCoordToClipSpace(float2 input, int2 viewportSize) [static] :118
::g::Uno::Float2 ElementAtlas::WindowCoordToClipSpace(::g::Uno::Float2 input, ::g::Uno::Int2 viewportSize)
{
    return ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division2(input, ::g::Uno::Float2__op_Implicit2(viewportSize)), 2.0f), 1.0f);
}

// private static Uno.Rect WindowRectToClipSpace(Uno.Rect input, int2 viewportSize) [static] :123
::g::Uno::Rect ElementAtlas::WindowRectToClipSpace(::g::Uno::Rect input, ::g::Uno::Int2 viewportSize)
{
    ::g::Uno::Float2 leftTop = ElementAtlas::WindowCoordToClipSpace(input.LeftTop(), viewportSize);
    ::g::Uno::Float2 rightBottom = ElementAtlas::WindowCoordToClipSpace(input.RightBottom(), viewportSize);
    return ::g::Uno::Rect__ContainingPoints(::g::Uno::Float2__New2(leftTop.X, -leftTop.Y), ::g::Uno::Float2__New2(rightBottom.X, -rightBottom.Y));
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementAtlasPool.uno
// ------------------------------------------------------------------------------

// internal sealed class ElementAtlasFramebuffer :9
// {
static void ElementAtlasFramebuffer_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Cannot Collect while pinned!");
    ::STRINGS[4] = uString::Const("ElementAtlasFramebuffer already pinned");
    ::STRINGS[5] = uString::Const("ElementAtlasFramebuffer not already pinned");
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof(), NULL), offsetof(ElementAtlasFramebuffer, _fb), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElementAtlasFramebuffer, _Pinned), 0,
        ::TYPES[6/*Uno.EventHandler*/], offsetof(ElementAtlasFramebuffer, FramebufferCollected1), 0);
}

uType* ElementAtlasFramebuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebuffer", options);
    type->fp_build_ = ElementAtlasFramebuffer_build;
    type->fp_ctor_ = (void*)ElementAtlasFramebuffer__New1_fn;
    return type;
}

// public generated ElementAtlasFramebuffer() :9
void ElementAtlasFramebuffer__ctor__fn(ElementAtlasFramebuffer* __this)
{
    __this->ctor_();
}

// internal void Collect() :52
void ElementAtlasFramebuffer__Collect_fn(ElementAtlasFramebuffer* __this)
{
    __this->Collect();
}

// public void Dispose() :14
void ElementAtlasFramebuffer__Dispose_fn(ElementAtlasFramebuffer* __this)
{
    __this->Dispose();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) :50
void ElementAtlasFramebuffer__add_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->add_FramebufferCollected(value);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) :50
void ElementAtlasFramebuffer__remove_FramebufferCollected_fn(ElementAtlasFramebuffer* __this, uDelegate* value)
{
    __this->remove_FramebufferCollected(value);
}

// public generated ElementAtlasFramebuffer New() :9
void ElementAtlasFramebuffer__New1_fn(ElementAtlasFramebuffer** __retval)
{
    *__retval = ElementAtlasFramebuffer::New1();
}

// internal framebuffer Pin() :20
void ElementAtlasFramebuffer__Pin_fn(ElementAtlasFramebuffer* __this, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Pin();
}

// internal generated bool get_Pinned() :12
void ElementAtlasFramebuffer__get_Pinned_fn(ElementAtlasFramebuffer* __this, bool* __retval)
{
    *__retval = __this->Pinned();
}

// private generated void set_Pinned(bool value) :12
void ElementAtlasFramebuffer__set_Pinned_fn(ElementAtlasFramebuffer* __this, bool* value)
{
    __this->Pinned(*value);
}

// public static int2 get_Size() :64
void ElementAtlasFramebuffer__get_Size_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebuffer::Size();
}

// internal void Unpin() :42
void ElementAtlasFramebuffer__Unpin_fn(ElementAtlasFramebuffer* __this)
{
    __this->Unpin();
}

// public generated ElementAtlasFramebuffer() [instance] :9
void ElementAtlasFramebuffer::ctor_()
{
}

// internal void Collect() [instance] :52
void ElementAtlasFramebuffer::Collect()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Collect()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret2;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Cannot Coll...*/]));

    if (::g::Uno::Delegate::op_Inequality(FramebufferCollected1, NULL))
        uPtr(FramebufferCollected1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());

    uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret2), ret2))->Owner = NULL;
    _fb = NULL;
}

// public void Dispose() [instance] :14
void ElementAtlasFramebuffer::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Dispose()");

    if (_fb != NULL)
        Collect();
}

// internal generated void add_FramebufferCollected(Uno.EventHandler value) [instance] :50
void ElementAtlasFramebuffer::add_FramebufferCollected(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "add_FramebufferCollected(Uno.EventHandler)");
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FramebufferCollected1, value), ::TYPES[6/*Uno.EventHandler*/]);
}

// internal generated void remove_FramebufferCollected(Uno.EventHandler value) [instance] :50
void ElementAtlasFramebuffer::remove_FramebufferCollected(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "remove_FramebufferCollected(Uno.EventHandler)");
    FramebufferCollected1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FramebufferCollected1, value), ::TYPES[6/*Uno.EventHandler*/]);
}

// internal framebuffer Pin() [instance] :20
::g::Uno::Graphics::Framebuffer* ElementAtlasFramebuffer::Pin()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Pin()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret6;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret7;

    if (Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"ElementAtla...*/]));

    Pinned(true);

    if (_fb == NULL)
    {
        ::g::Uno::Collections::LinkedListNode* fb = ::g::Fuse::Elements::ElementAtlasFramebufferPool::FindFramebuffer();

        if (uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret3), ret3))->Owner != NULL)
            uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner)->Collect();

        uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret5), ret5))->Owner = this;
        _fb = fb;
    }
    else
        uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret6), ret6))->Pool)->UpdateUsage(_fb);

    return uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(_fb), &ret7), ret7))->Framebuffer;
}

// internal generated bool get_Pinned() [instance] :12
bool ElementAtlasFramebuffer::Pinned()
{
    return _Pinned;
}

// private generated void set_Pinned(bool value) [instance] :12
void ElementAtlasFramebuffer::Pinned(bool value)
{
    _Pinned = value;
}

// internal void Unpin() [instance] :42
void ElementAtlasFramebuffer::Unpin()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebuffer", "Unpin()");

    if (!Pinned())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"ElementAtla...*/]));

    Pinned(false);
}

// public generated ElementAtlasFramebuffer New() [static] :9
ElementAtlasFramebuffer* ElementAtlasFramebuffer::New1()
{
    ElementAtlasFramebuffer* obj1 = (ElementAtlasFramebuffer*)uNew(ElementAtlasFramebuffer_typeof());
    obj1->ctor_();
    return obj1;
}

// public static int2 get_Size() [static] :64
::g::Uno::Int2 ElementAtlasFramebuffer::Size()
{
    return ::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementAtlasPool.uno
// ------------------------------------------------------------------------------

// internal static class ElementAtlasFramebufferPool :103
// {
static void ElementAtlasFramebufferPool_build(uType* type)
{
    ::STRINGS[6] = uString::Const("zero-sized Texture2D.MaxSize");
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&ElementAtlasFramebufferPool::_isInitialized_, uFieldFlagsStatic,
        ::g::Uno::Int2_typeof(), (uintptr_t)&ElementAtlasFramebufferPool::_elementAtlasSize_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), (uintptr_t)&ElementAtlasFramebufferPool::_poolImpl_, uFieldFlagsStatic,
        ::TYPES[6/*Uno.EventHandler*/], (uintptr_t)&ElementAtlasFramebufferPool::AtlasSizeChanged1_, uFieldFlagsStatic);
}

uClassType* ElementAtlasFramebufferPool_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPool", options);
    type->fp_build_ = ElementAtlasFramebufferPool_build;
    return type;
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) :121
void ElementAtlasFramebufferPool__add_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::add_AtlasSizeChanged(value);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) :121
void ElementAtlasFramebufferPool__remove_AtlasSizeChanged_fn(uDelegate* value)
{
    ElementAtlasFramebufferPool::remove_AtlasSizeChanged(value);
}

// public static int2 get_ElementAtlasSize() :147
void ElementAtlasFramebufferPool__get_ElementAtlasSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementAtlasFramebufferPool::ElementAtlasSize();
}

// private static void set_ElementAtlasSize(int2 value) :152
void ElementAtlasFramebufferPool__set_ElementAtlasSize_fn(::g::Uno::Int2* value)
{
    ElementAtlasFramebufferPool::ElementAtlasSize(*value);
}

// private static void EnsurePool() :166
void ElementAtlasFramebufferPool__EnsurePool_fn()
{
    ElementAtlasFramebufferPool::EnsurePool();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :177
void ElementAtlasFramebufferPool__FindFramebuffer_fn(::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = ElementAtlasFramebufferPool::FindFramebuffer();
}

// public static void Initialize() :106
void ElementAtlasFramebufferPool__Initialize_fn()
{
    ElementAtlasFramebufferPool::Initialize();
}

// private static void OnResized(object sender, Uno.EventArgs args) :140
void ElementAtlasFramebufferPool__OnResized_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    ElementAtlasFramebufferPool::OnResized(sender, args);
}

// private static void UpdateElementAtlasSize() :123
void ElementAtlasFramebufferPool__UpdateElementAtlasSize_fn()
{
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

bool ElementAtlasFramebufferPool::_isInitialized_;
::g::Uno::Int2 ElementAtlasFramebufferPool::_elementAtlasSize_;
uSStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> ElementAtlasFramebufferPool::_poolImpl_;
uSStrong<uDelegate*> ElementAtlasFramebufferPool::AtlasSizeChanged1_;

// private static void EnsurePool() [static] :166
void ElementAtlasFramebufferPool::EnsurePool()
{
    if (ElementAtlasFramebufferPool::_poolImpl_ != NULL)
        return;

    ElementAtlasFramebufferPool::Initialize();
    ElementAtlasFramebufferPool::_poolImpl_ = ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl::New1();
}

// public static Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [static] :177
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPool::FindFramebuffer()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "FindFramebuffer()");
    ElementAtlasFramebufferPool::EnsurePool();
    return uPtr(ElementAtlasFramebufferPool::_poolImpl_)->FindFramebuffer();
}

// public static void Initialize() [static] :106
void ElementAtlasFramebufferPool::Initialize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "Initialize()");

    if (ElementAtlasFramebufferPool::_isInitialized_)
        return;

    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
    ::g::Fuse::Platform::SystemUI::add_FrameChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPool__OnResized_fn));
    ElementAtlasFramebufferPool::_isInitialized_ = true;
}

// private static void OnResized(object sender, Uno.EventArgs args) [static] :140
void ElementAtlasFramebufferPool::OnResized(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "OnResized(object,Uno.EventArgs)");
    ElementAtlasFramebufferPool::UpdateElementAtlasSize();
}

// private static void UpdateElementAtlasSize() [static] :123
void ElementAtlasFramebufferPool::UpdateElementAtlasSize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "UpdateElementAtlasSize()");
    int32_t maxTextureSize = ::g::Uno::Graphics::Texture2D::MaxSize();

    if (maxTextureSize < 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"zero-sized ...*/]));

    ::g::Uno::Int2 displaySizeHint = ::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint();

    if ((displaySizeHint.X < 1) || (displaySizeHint.Y < 1))
        displaySizeHint = ::g::Uno::Int2__New1(2048);

    ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2__New2(::g::Uno::Math::Min8((displaySizeHint.X * 3) / 2, maxTextureSize), ::g::Uno::Math::Min8(displaySizeHint.Y / 2, maxTextureSize)));
}

// public static int2 get_ElementAtlasSize() [static] :147
::g::Uno::Int2 ElementAtlasFramebufferPool::ElementAtlasSize()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "get_ElementAtlasSize()");
    ElementAtlasFramebufferPool::Initialize();
    return ElementAtlasFramebufferPool::_elementAtlasSize_;
}

// private static void set_ElementAtlasSize(int2 value) [static] :152
void ElementAtlasFramebufferPool::ElementAtlasSize(::g::Uno::Int2 value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "set_ElementAtlasSize(int2)");

    if (::g::Uno::Int2__op_Inequality(ElementAtlasFramebufferPool::_elementAtlasSize_, value))
    {
        ElementAtlasFramebufferPool::_elementAtlasSize_ = value;

        if (::g::Uno::Delegate::op_Inequality(ElementAtlasFramebufferPool::AtlasSizeChanged1_, NULL))
            uPtr(ElementAtlasFramebufferPool::AtlasSizeChanged1_)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::New1());
    }
}

// public static generated void add_AtlasSizeChanged(Uno.EventHandler value) [static] :121
void ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "add_AtlasSizeChanged(Uno.EventHandler)");
    ElementAtlasFramebufferPool::AtlasSizeChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ElementAtlasFramebufferPool::AtlasSizeChanged1_, value), ::TYPES[6/*Uno.EventHandler*/]);
}

// public static generated void remove_AtlasSizeChanged(Uno.EventHandler value) [static] :121
void ElementAtlasFramebufferPool::remove_AtlasSizeChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPool", "remove_AtlasSizeChanged(Uno.EventHandler)");
    ElementAtlasFramebufferPool::AtlasSizeChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ElementAtlasFramebufferPool::AtlasSizeChanged1_, value), ::TYPES[6/*Uno.EventHandler*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementAtlasPool.uno
// ------------------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolEntry :67
// {
static void ElementAtlasFramebufferPoolEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof(), offsetof(ElementAtlasFramebufferPoolEntry, Pool), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(ElementAtlasFramebufferPoolEntry, Framebuffer), 0,
        ::g::Fuse::Elements::ElementAtlasFramebuffer_typeof(), offsetof(ElementAtlasFramebufferPoolEntry, Owner), 0);
}

uType* ElementAtlasFramebufferPoolEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolEntry", options);
    type->fp_build_ = ElementAtlasFramebufferPoolEntry_build;
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolEntry__New1_fn;
    return type;
}

// public generated ElementAtlasFramebufferPoolEntry() :67
void ElementAtlasFramebufferPoolEntry__ctor__fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->ctor_();
}

// public void Collect() :73
void ElementAtlasFramebufferPoolEntry__Collect_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Collect();
}

// public void Dispose() :79
void ElementAtlasFramebufferPoolEntry__Dispose_fn(ElementAtlasFramebufferPoolEntry* __this)
{
    __this->Dispose();
}

// public generated ElementAtlasFramebufferPoolEntry New() :67
void ElementAtlasFramebufferPoolEntry__New1_fn(ElementAtlasFramebufferPoolEntry** __retval)
{
    *__retval = ElementAtlasFramebufferPoolEntry::New1();
}

// public generated ElementAtlasFramebufferPoolEntry() [instance] :67
void ElementAtlasFramebufferPoolEntry::ctor_()
{
}

// public void Collect() [instance] :73
void ElementAtlasFramebufferPoolEntry::Collect()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolEntry", "Collect()");

    if (Owner != NULL)
        uPtr(Owner)->Collect();
}

// public void Dispose() [instance] :79
void ElementAtlasFramebufferPoolEntry::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolEntry", "Dispose()");

    if (Framebuffer != NULL)
    {
        uPtr(Framebuffer)->Dispose();
        Framebuffer = NULL;
    }
}

// public generated ElementAtlasFramebufferPoolEntry New() [static] :67
ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolEntry::New1()
{
    ElementAtlasFramebufferPoolEntry* obj1 = (ElementAtlasFramebufferPoolEntry*)uNew(ElementAtlasFramebufferPoolEntry_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementAtlasPool.uno
// ------------------------------------------------------------------------------

// internal sealed class ElementAtlasFramebufferPoolImpl :184
// {
static void ElementAtlasFramebufferPoolImpl_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Resources::DisposalManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementAtlasFramebufferPoolImpl_type, interface0));
    type->SetFields(0,
        ::TYPES[8/*Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>*/], offsetof(ElementAtlasFramebufferPoolImpl, _framebufferPool), 0);
}

ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof()
{
    static uSStrong<ElementAtlasFramebufferPoolImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ElementAtlasFramebufferPoolImpl);
    options.TypeSize = sizeof(ElementAtlasFramebufferPoolImpl_type);
    type = (ElementAtlasFramebufferPoolImpl_type*)uClassType::New("Fuse.Elements.ElementAtlasFramebufferPoolImpl", options);
    type->fp_build_ = ElementAtlasFramebufferPoolImpl_build;
    type->fp_ctor_ = (void*)ElementAtlasFramebufferPoolImpl__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementAtlasFramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn;
    return type;
}

// internal ElementAtlasFramebufferPoolImpl() :188
void ElementAtlasFramebufferPoolImpl__ctor__fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->ctor_();
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() :261
void ElementAtlasFramebufferPoolImpl__AddEntry_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->AddEntry();
}

// private extern void DiscardPool() :220
void ElementAtlasFramebufferPoolImpl__DiscardPool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->DiscardPool();
}

// private void EnsurePool() :251
void ElementAtlasFramebufferPoolImpl__EnsurePool_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->EnsurePool();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() :269
void ElementAtlasFramebufferPoolImpl__FindFramebuffer_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->FindFramebuffer();
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :246
void ElementAtlasFramebufferPoolImpl__FuseResourcesISoftDisposableSoftDispose_fn(ElementAtlasFramebufferPoolImpl* __this)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    __this->DiscardPool();
}

// internal ElementAtlasFramebufferPoolImpl New() :188
void ElementAtlasFramebufferPoolImpl__New1_fn(ElementAtlasFramebufferPoolImpl** __retval)
{
    *__retval = ElementAtlasFramebufferPoolImpl::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) :241
void ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn(ElementAtlasFramebufferPoolImpl* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->OnAtlasSizeChanged(sender, eventArgs);
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) :285
void ElementAtlasFramebufferPoolImpl__UpdateUsage_fn(ElementAtlasFramebufferPoolImpl* __this, ::g::Uno::Collections::LinkedListNode* fb)
{
    __this->UpdateUsage(fb);
}

// internal ElementAtlasFramebufferPoolImpl() [instance] :188
void ElementAtlasFramebufferPoolImpl::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", ".ctor()");
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged_fn, this));
}

// private Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> AddEntry() [instance] :261
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::AddEntry()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "AddEntry()");
    ::g::Uno::Collections::LinkedListNode* ret2;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* entry = ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry::New1();
    entry->Pool = this;
    entry->Framebuffer = ::g::Uno::Graphics::Framebuffer::New1(::g::Fuse::Elements::ElementAtlasFramebufferPool::ElementAtlasSize(), 3, 0);
    return (::g::Uno::Collections::LinkedList__AddLast_fn(uPtr(_framebufferPool), entry, &ret2), ret2);
}

// private extern void DiscardPool() [instance] :220
void ElementAtlasFramebufferPoolImpl::DiscardPool()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "DiscardPool()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret3;
    ::g::Uno::Collections::LinkedList* pool = _framebufferPool;

    if (pool == NULL)
        return;

    ::g::Uno::Collections::LinkedListNode* curr = (::g::Uno::Collections::LinkedListNode*)uPtr(pool)->First();

    while (curr != NULL)
    {
        ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* fb = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret3), ret3);
        uPtr(fb)->Collect();
        fb->Dispose();
        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    pool->Clear();
    _framebufferPool = NULL;
}

// private void EnsurePool() [instance] :251
void ElementAtlasFramebufferPoolImpl::EnsurePool()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "EnsurePool()");

    if (_framebufferPool != NULL)
        return;

    _framebufferPool = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(::TYPES[8/*Uno.Collections.LinkedList<Fuse.Elements.ElementAtlasFramebufferPoolEntry>*/]));

    for (int32_t i = 0; i < 20; ++i)
        AddEntry();
}

// internal Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> FindFramebuffer() [instance] :269
::g::Uno::Collections::LinkedListNode* ElementAtlasFramebufferPoolImpl::FindFramebuffer()
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "FindFramebuffer()");
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret4;
    ::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry* ret5;
    EnsurePool();
    ::g::Uno::Collections::LinkedListNode* fb = (::g::Uno::Collections::LinkedListNode*)uPtr(_framebufferPool)->Last();

    while ((fb != NULL) && ((uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret4), ret4))->Owner != NULL) && uPtr(uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(fb), &ret5), ret5))->Owner)->Pinned()))
        fb = (::g::Uno::Collections::LinkedListNode*)uPtr(fb)->Previous();

    if (fb == NULL)
        fb = AddEntry();

    UpdateUsage(fb);
    return fb;
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs eventArgs) [instance] :241
void ElementAtlasFramebufferPoolImpl::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "OnAtlasSizeChanged(object,Uno.EventArgs)");
    DiscardPool();
}

// internal void UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry> fb) [instance] :285
void ElementAtlasFramebufferPoolImpl::UpdateUsage(::g::Uno::Collections::LinkedListNode* fb)
{
    uStackFrame __("Fuse.Elements.ElementAtlasFramebufferPoolImpl", "UpdateUsage(Uno.Collections.LinkedListNode<Fuse.Elements.ElementAtlasFramebufferPoolEntry>)");
    uPtr(_framebufferPool)->Remove1(fb);
    uPtr(_framebufferPool)->AddFirst1(fb);
}

// internal ElementAtlasFramebufferPoolImpl New() [static] :188
ElementAtlasFramebufferPoolImpl* ElementAtlasFramebufferPoolImpl::New1()
{
    ElementAtlasFramebufferPoolImpl* obj1 = (ElementAtlasFramebufferPoolImpl*)uNew(ElementAtlasFramebufferPoolImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementBatch.uno
// --------------------------------------------------------------------------

// internal sealed class ElementBatch :72
// {
static void ElementBatch_build(uType* type)
{
    ::STRINGS[7] = uString::Const("wrong atlas, stupid!");
    ::STRINGS[8] = uString::Const("element has no caching rect");
    ::STRINGS[9] = uString::Const("wrong batch, stupid!");
    ::TYPES[9] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*Select<Fuse.Elements.ElementBatchEntry, Fuse.Visual>*/, ::g::Fuse::Elements::ElementBatchEntry_typeof(), ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), ::g::Fuse::Visual_typeof(), NULL);
    type->SetDependencies(
        ::g::FuseElements_bundle_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::VisualBounds_typeof());
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(ElementBatch_type, interface0),
        ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Visual>*/], offsetof(ElementBatch_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Elements::ElementBatcher_typeof(), offsetof(ElementBatch, _elementBatcher), 0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(ElementBatch, _elementAtlas), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElementBatch, _indexBufferValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElementBatch, _vertexPositionBufferValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElementBatch, _vertexTexCoordBufferValid), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(ElementBatch, _indexBuffer), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(ElementBatch, _positionInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(ElementBatch, _texCoordInfo), 0,
        ::g::Uno::Int_typeof(), offsetof(ElementBatch, _prevElementCount), 0,
        ::g::Fuse::VisualBounds_typeof(), offsetof(ElementBatch, _renderBounds), 0,
        ::TYPES[9/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/], offsetof(ElementBatch, _elements), 0,
        ::g::Uno::Buffer_typeof(), offsetof(ElementBatch, _tempBuffer), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(ElementBatch, _draw_f8c70145), 0);
}

ElementBatch_type* ElementBatch_typeof()
{
    static uSStrong<ElementBatch_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(ElementBatch);
    options.TypeSize = sizeof(ElementBatch_type);
    type = (ElementBatch_type*)uClassType::New("Fuse.Elements.ElementBatch", options);
    type->fp_build_ = ElementBatch_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))ElementBatch__Draw_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))ElementBatch__GetEnumerator_fn;
    return type;
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :83
void ElementBatch__ctor__fn(ElementBatch* __this, ::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    __this->ctor_(elementBatcher, elementAtlas);
}

// public void AddElement(Fuse.Elements.Element elm) :171
void ElementBatch__AddElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->AddElement(elm);
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) :116
void ElementBatch__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::ConservativelySnapToCoveringIntegers(*r);
}

// public void Dispose() :101
void ElementBatch__Dispose_fn(ElementBatch* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :221
void ElementBatch__Draw_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// private void FillIndexBuffer() :290
void ElementBatch__FillIndexBuffer_fn(ElementBatch* __this)
{
    __this->FillIndexBuffer();
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) :330
void ElementBatch__FillVertexPositionBuffer_fn(ElementBatch* __this, ::g::Fuse::DrawContext* dc)
{
    __this->FillVertexPositionBuffer(dc);
}

// private void FillVertexTexCoordBuffer() :311
void ElementBatch__FillVertexTexCoordBuffer_fn(ElementBatch* __this)
{
    __this->FillVertexTexCoordBuffer();
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) :145
void ElementBatch__GetCachingRect_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* __retval)
{
    *__retval = ElementBatch::GetCachingRect(elm);
}

// public Uno.Collections.IEnumerator<Fuse.Visual> GetEnumerator() :167
void ElementBatch__GetEnumerator_fn(ElementBatch* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// private generated void init_DrawCalls() :72
void ElementBatch__init_DrawCalls_fn(ElementBatch* __this)
{
    __this->init_DrawCalls();
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) :214
void ElementBatch__InvalidateOpacity_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateOpacity(elm);
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) :201
void ElementBatch__InvalidateRenderBounds_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateRenderBounds(elm);
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) :208
void ElementBatch__InvalidateTransform_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->InvalidateTransform(elm);
}

// public bool IsFull() :285
void ElementBatch__IsFull_fn(ElementBatch* __this, bool* __retval)
{
    *__retval = __this->IsFull();
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) :83
void ElementBatch__New1_fn(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas, ElementBatch** __retval)
{
    *__retval = ElementBatch::New1(elementBatcher, elementAtlas);
}

// private static Fuse.Visual PickVisual(Fuse.Elements.ElementBatchEntry e) :168
void ElementBatch__PickVisual_fn(::g::Fuse::Elements::ElementBatchEntry* e, ::g::Fuse::Visual** __retval)
{
    *__retval = ElementBatch::PickVisual(e);
}

// public void RemoveElement(Fuse.Elements.Element elm) :188
void ElementBatch__RemoveElement_fn(ElementBatch* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->RemoveElement(elm);
}

// public Fuse.VisualBounds get_RenderBounds() :157
void ElementBatch__get_RenderBounds_fn(ElementBatch* __this, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->RenderBounds();
}

// public static bool TryGetCachingRect(Fuse.Elements.Element elm, Uno.Recti& cachingRect) :130
void ElementBatch__TryGetCachingRect_fn(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* cachingRect, bool* __retval)
{
    *__retval = ElementBatch::TryGetCachingRect(elm, cachingRect);
}

// public ElementBatch(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [instance] :83
void ElementBatch::ctor_(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[9/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    _elementBatcher = elementBatcher;
    _elementAtlas = elementAtlas;
    _positionInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _positionInfo.BufferOffset = 0;
    _positionInfo.BufferStride = 12;
    _positionInfo.Type = 3;
    _positionInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New4(1);
    _texCoordInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _texCoordInfo.BufferOffset = 0;
    _texCoordInfo.BufferStride = 8;
    _texCoordInfo.Type = 2;
    _texCoordInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New4(0);
    init_DrawCalls();
}

// public void AddElement(Fuse.Elements.Element elm) [instance] :171
void ElementBatch::AddElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "AddElement(Fuse.Elements.Element)");

    if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != _elementAtlas)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"wrong atlas...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = this;
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), entry);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;

    if (_renderBounds != NULL)
        _renderBounds = uPtr(_renderBounds)->Merge(uPtr(elm)->CalcRenderBoundsInParentSpace(), NULL);
    else
        _renderBounds = uPtr(elm)->CalcRenderBoundsInParentSpace();
}

// public void Dispose() [instance] :101
void ElementBatch::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret8;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret8), ret8);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]))
                {
                    ::g::Fuse::Elements::ElementBatchEntry* elm = enum1.Current(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
                    uPtr(elm)->_batch = NULL;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_10;
        }

        {
            enum1.Dispose(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        }
        __after_finally_10:;
    }

    if (_positionInfo.Buffer != NULL)
        uPtr(_positionInfo.Buffer)->Dispose();

    if (_texCoordInfo.Buffer != NULL)
        uPtr(_texCoordInfo.Buffer)->Dispose();

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :221
void ElementBatch::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "Draw(Fuse.DrawContext,float4x4,Uno.Rect)");
    ::g::Fuse::Elements::ElementBatchEntry* ret9;
    ::g::Uno::Rect visibleRect = ::g::Uno::Rect__Transform(uPtr(RenderBounds())->FlatRect(), localToClipTransform);

    if (!scissorRectInClipSpace.Intersects(visibleRect))
        return;

    ::g::Uno::Graphics::Framebuffer* fb = uPtr(_elementAtlas)->PinAndValidateFramebuffer(dc);

    {
        try
        {
            {
                if (_prevElementCount != uPtr(_elements)->Count())
                {
                    _indexBufferValid = false;
                    _vertexPositionBufferValid = false;
                    _vertexTexCoordBufferValid = false;
                    _tempBuffer = ::g::Uno::Buffer::New4((uPtr(_elements)->Count() * 4) * 12);
                }

                if (!_indexBufferValid)
                {
                    FillIndexBuffer();
                    _indexBufferValid = true;
                }

                if (!_vertexPositionBufferValid)
                {
                    FillVertexPositionBuffer(dc);
                    _vertexPositionBufferValid = true;
                }

                if (!_vertexTexCoordBufferValid)
                {
                    FillVertexTexCoordBuffer();
                    _vertexTexCoordBufferValid = true;
                }

                ::g::Uno::Graphics::Texture2D* tex = uPtr(fb)->ColorBuffer();
                ::g::Uno::Float4x4 transform = uPtr(dc)->GetLocalToClipTransform(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int32_t>(0), &ret9), ret9))->_elm)->Parent());
                _draw_f8c70145.BlendEnabled(true);
                _draw_f8c70145.DepthTestEnabled(false);
                _draw_f8c70145.CullFace(uPtr(dc)->CullFace());
                _draw_f8c70145.BlendSrcAlpha(7);
                _draw_f8c70145.BlendDstRgb(3);
                _draw_f8c70145.Use();
                _draw_f8c70145.Attrib1(0, _positionInfo.Type, _positionInfo.Buffer, _positionInfo.BufferStride, _positionInfo.BufferOffset);
                _draw_f8c70145.Attrib1(1, _texCoordInfo.Type, _texCoordInfo.Buffer, _texCoordInfo.BufferStride, _texCoordInfo.BufferOffset);
                _draw_f8c70145.Uniform12(2, transform);
                _draw_f8c70145.Sampler3(3, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_f8c70145.Draw(uPtr(_elements)->Count() * 6, 2, _indexBuffer);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                uPtr(_elementAtlas)->Unpin();
            }
                        throw __t;
            goto __after_finally_11;
        }

        {
            uPtr(_elementAtlas)->Unpin();
        }
        __after_finally_11:;
    }

    _prevElementCount = uPtr(_elements)->Count();
}

// private void FillIndexBuffer() [instance] :290
void ElementBatch::FillIndexBuffer()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillIndexBuffer()");
    ::g::Uno::Buffer* indices = ::g::Uno::Buffer::New4((uPtr(_elements)->Count() * 6) * 2);

    for (int32_t i = 0; i < uPtr(_elements)->Count(); ++i)
    {
        uPtr(indices)->Set23((i * 6) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 1) * 2, (uint16_t)((i * 4) + 2), true);
        indices->Set23(((i * 6) + 2) * 2, (uint16_t)((i * 4) + 1), true);
        indices->Set23(((i * 6) + 3) * 2, (uint16_t)(i * 4), true);
        indices->Set23(((i * 6) + 4) * 2, (uint16_t)((i * 4) + 3), true);
        indices->Set23(((i * 6) + 5) * 2, (uint16_t)((i * 4) + 2), true);
    }

    if (_indexBuffer != NULL)
        uPtr(_indexBuffer)->Dispose();

    _indexBuffer = ::g::Uno::Graphics::IndexBuffer::New1(indices->GetBytes(), 0);
}

// private void FillVertexPositionBuffer(Fuse.DrawContext dc) [instance] :330
void ElementBatch::FillVertexPositionBuffer(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillVertexPositionBuffer(Fuse.DrawContext)");
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Fuse::Elements::ElementBatchEntry* ret10;
    int32_t elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexPositions = _tempBuffer;
    float densityScale = 1.0f / uPtr(dc)->ViewportPixelsPerPoint();

    for (int32_t i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int32_t>(i), &ret10), ret10);
        ::g::Uno::Recti cachingRect = ElementBatch::GetCachingRect(uPtr(entry)->_elm);
        float opacity = entry->_opacity;
        ::g::Uno::Float4x4 transform = uPtr(entry->_elm)->LocalTransform();
        ::g::Uno::Float2 localOrigin = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Implicit2(cachingRect.Minimum()), 0.5f), densityScale);
        ::g::Uno::Float2 positionOrigin = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2((ind2 = transform.Item(3), ::g::Uno::Float2__New2(ind2.X, ind2.Y)), ::g::Uno::Float2__op_Multiply(localOrigin.X, (ind3 = transform.Item(0), ::g::Uno::Float2__New2(ind3.X, ind3.Y)))), ::g::Uno::Float2__op_Multiply(localOrigin.Y, (ind4 = transform.Item(1), ::g::Uno::Float2__New2(ind4.X, ind4.Y))));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Implicit2(entry->AtlasRect.Size()), 1.0f), densityScale);
        ::g::Uno::Float2 right = ::g::Uno::Float2__op_Multiply1((ind5 = transform.Item(0), ::g::Uno::Float2__New2(ind5.X, ind5.Y)), size.X);
        ::g::Uno::Float2 up = ::g::Uno::Float2__op_Multiply1((ind6 = transform.Item(1), ::g::Uno::Float2__New2(ind6.X, ind6.Y)), size.Y);
        uPtr(vertexPositions)->Set6(((i * 4) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(positionOrigin, opacity), true);
        vertexPositions->Set6((((i * 4) + 1) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, right), opacity), true);
        vertexPositions->Set6((((i * 4) + 2) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(positionOrigin, right), up), opacity), true);
        vertexPositions->Set6((((i * 4) + 3) * _positionInfo.BufferStride) + _positionInfo.BufferOffset, ::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(positionOrigin, up), opacity), true);
    }

    uPtr(_positionInfo.Buffer)->Update(uPtr(vertexPositions)->GetBytes());
}

// private void FillVertexTexCoordBuffer() [instance] :311
void ElementBatch::FillVertexTexCoordBuffer()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "FillVertexTexCoordBuffer()");
    ::g::Fuse::Elements::ElementBatchEntry* ret11;
    int32_t elementCount = uPtr(_elements)->Count();
    ::g::Uno::Buffer* vertexTexCoords = _tempBuffer;

    for (int32_t i = 0; i < elementCount; ++i)
    {
        ::g::Fuse::Elements::ElementBatchEntry* entry = (::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int32_t>(i), &ret11), ret11);
        ::g::Uno::Float2 texCoordOrigin = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Implicit2(uPtr(entry)->AtlasRect.Minimum()), 0.5f), ::g::Uno::Float2__op_Implicit2(uPtr(uPtr(_elementAtlas)->_rectPacker)->Size()));
        ::g::Uno::Float2 size = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Implicit2(entry->AtlasRect.Size()), 1.0f), ::g::Uno::Float2__op_Implicit2(uPtr(uPtr(_elementAtlas)->_rectPacker)->Size()));
        uPtr(vertexTexCoords)->Set5(((i * 4) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, texCoordOrigin, true);
        vertexTexCoords->Set5((((i * 4) + 1) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(size.X, 0.0f)), true);
        vertexTexCoords->Set5((((i * 4) + 2) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, size), true);
        vertexTexCoords->Set5((((i * 4) + 3) * _texCoordInfo.BufferStride) + _texCoordInfo.BufferOffset, ::g::Uno::Float2__op_Addition2(texCoordOrigin, ::g::Uno::Float2__New2(0.0f, size.Y)), true);
    }

    uPtr(_texCoordInfo.Buffer)->Update(uPtr(vertexTexCoords)->GetBytes());
}

// public Uno.Collections.IEnumerator<Fuse.Visual> GetEnumerator() [instance] :167
uObject* ElementBatch::GetEnumerator()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "GetEnumerator()");
    return (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[12/*Uno.Collections.EnumerableExtensions.Select<Fuse.Elements.ElementBatchEntry, Fuse.Visual>*/], (uObject*)_elements, uDelegate::New(::TYPES[13/*Uno.Func<Fuse.Elements.ElementBatchEntry, Fuse.Visual>*/], (void*)ElementBatch__PickVisual_fn))), ::TYPES[11/*Uno.Collections.IEnumerable<Fuse.Visual>*/]));
}

// private generated void init_DrawCalls() [instance] :72
void ElementBatch::init_DrawCalls()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "init_DrawCalls()");
    _draw_f8c70145 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::ElementBatchd43eeb4e());
}

// internal void InvalidateOpacity(Fuse.Elements.Element elm) [instance] :214
void ElementBatch::InvalidateOpacity(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
}

// public void InvalidateRenderBounds(Fuse.Elements.Element elm) [instance] :201
void ElementBatch::InvalidateRenderBounds(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
    _renderBounds = NULL;
}

// internal void InvalidateTransform(Fuse.Elements.Element elm) [instance] :208
void ElementBatch::InvalidateTransform(::g::Fuse::Elements::Element* elm)
{
    _vertexPositionBufferValid = false;
    _renderBounds = NULL;
}

// public bool IsFull() [instance] :285
bool ElementBatch::IsFull()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "IsFull()");
    return (uPtr(_elements)->Count() * 6) >= 65535;
}

// public void RemoveElement(Fuse.Elements.Element elm) [instance] :188
void ElementBatch::RemoveElement(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "RemoveElement(Fuse.Elements.Element)");
    bool ret12;

    if (uPtr(uPtr(elm)->ElementBatchEntry())->_batch != this)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"wrong batch...*/]));

    ::g::Fuse::Elements::ElementBatchEntry* entry = uPtr(elm)->ElementBatchEntry();
    uPtr(entry)->_batch = NULL;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), entry, &ret12);
    _indexBufferValid = false;
    _vertexPositionBufferValid = false;
    _vertexTexCoordBufferValid = false;
}

// public Fuse.VisualBounds get_RenderBounds() [instance] :157
::g::Fuse::VisualBounds* ElementBatch::RenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatch", "get_RenderBounds()");

    if (_renderBounds == NULL)
        _renderBounds = ::g::Fuse::VisualBounds::Merge1((uObject*)this, 0);

    return _renderBounds;
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static] :116
::g::Uno::Recti ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Floor2(r.Minimum()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(r.Size(), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

// public static Uno.Recti GetCachingRect(Fuse.Elements.Element elm) [static] :145
::g::Uno::Recti ElementBatch::GetCachingRect(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "GetCachingRect(Fuse.Elements.Element)");
    ::g::Uno::Recti cachingRect;

    if (!ElementBatch::TryGetCachingRect(elm, &cachingRect))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"element has...*/]));

    return cachingRect;
}

// public ElementBatch New(Fuse.Elements.ElementBatcher elementBatcher, Fuse.Elements.ElementAtlas elementAtlas) [static] :83
ElementBatch* ElementBatch::New1(::g::Fuse::Elements::ElementBatcher* elementBatcher, ::g::Fuse::Elements::ElementAtlas* elementAtlas)
{
    ElementBatch* obj7 = (ElementBatch*)uNew(ElementBatch_typeof());
    obj7->ctor_(elementBatcher, elementAtlas);
    return obj7;
}

// private static Fuse.Visual PickVisual(Fuse.Elements.ElementBatchEntry e) [static] :168
::g::Fuse::Visual* ElementBatch::PickVisual(::g::Fuse::Elements::ElementBatchEntry* e)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "PickVisual(Fuse.Elements.ElementBatchEntry)");
    return uPtr(e)->_elm;
}

// public static bool TryGetCachingRect(Fuse.Elements.Element elm, Uno.Recti& cachingRect) [static] :130
bool ElementBatch::TryGetCachingRect(::g::Fuse::Elements::Element* elm, ::g::Uno::Recti* cachingRect)
{
    uStackFrame __("Fuse.Elements.ElementBatch", "TryGetCachingRect(Fuse.Elements.Element,Uno.Recti&)");
    ::g::Fuse::VisualBounds* bounds = uPtr(elm)->RenderBoundsWithEffects();

    if (uPtr(bounds)->IsInfinite() || uPtr(bounds)->IsEmpty())
    {
        *cachingRect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }

    int32_t cachingRectPadding = 1;
    *cachingRect = ::g::Uno::Recti__Inflate(ElementBatch::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(uPtr(bounds)->FlatRect(), elm->AbsoluteZoom())), 1);
    return true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementBatch.uno
// --------------------------------------------------------------------------

// internal sealed class ElementBatchEntry :7
// {
static void ElementBatchEntry_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Elements::ElementAtlas_typeof(), offsetof(ElementBatchEntry, _atlas), 0,
        ::g::Fuse::Elements::ElementBatch_typeof(), offsetof(ElementBatchEntry, _batch), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(ElementBatchEntry, _elm), 0,
        ::g::Uno::Recti_typeof(), offsetof(ElementBatchEntry, AtlasRect), 0,
        ::g::Uno::Float_typeof(), offsetof(ElementBatchEntry, _opacity), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElementBatchEntry, IsValid), 0);
}

uType* ElementBatchEntry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ElementBatchEntry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.ElementBatchEntry", options);
    type->fp_build_ = ElementBatchEntry_build;
    return type;
}

// public ElementBatchEntry(Fuse.Elements.Element elm) :9
void ElementBatchEntry__ctor__fn(ElementBatchEntry* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// private float GetEffectiveOpacity() :15
void ElementBatchEntry__GetEffectiveOpacity_fn(ElementBatchEntry* __this, float* __retval)
{
    *__retval = __this->GetEffectiveOpacity();
}

// public void InvalidateRenderBounds() :40
void ElementBatchEntry__InvalidateRenderBounds_fn(ElementBatchEntry* __this)
{
    __this->InvalidateRenderBounds();
}

// public void InvalidateTransform() :49
void ElementBatchEntry__InvalidateTransform_fn(ElementBatchEntry* __this)
{
    __this->InvalidateTransform();
}

// public void InvalidateVisual() :22
void ElementBatchEntry__InvalidateVisual_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisual();
}

// public void InvalidateVisualComposition() :27
void ElementBatchEntry__InvalidateVisualComposition_fn(ElementBatchEntry* __this)
{
    __this->InvalidateVisualComposition();
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) :9
void ElementBatchEntry__New1_fn(::g::Fuse::Elements::Element* elm, ElementBatchEntry** __retval)
{
    *__retval = ElementBatchEntry::New1(elm);
}

// public void OnRemoved() :55
void ElementBatchEntry__OnRemoved_fn(ElementBatchEntry* __this)
{
    __this->OnRemoved();
}

// public ElementBatchEntry(Fuse.Elements.Element elm) [instance] :9
void ElementBatchEntry::ctor_(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", ".ctor(Fuse.Elements.Element)");
    _elm = elm;
    _opacity = GetEffectiveOpacity();
}

// private float GetEffectiveOpacity() [instance] :15
float ElementBatchEntry::GetEffectiveOpacity()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "GetEffectiveOpacity()");

    if (uPtr(_elm)->Visibility() == 0)
        return uPtr(_elm)->Opacity();

    return 0.0f;
}

// public void InvalidateRenderBounds() [instance] :40
void ElementBatchEntry::InvalidateRenderBounds()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateRenderBounds()");

    if (_batch != NULL)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(uPtr(_batch)->_elementBatcher)->_reinsertCheckList), this);
        uPtr(_batch)->InvalidateRenderBounds(_elm);
    }
}

// public void InvalidateTransform() [instance] :49
void ElementBatchEntry::InvalidateTransform()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateTransform()");

    if (_batch != NULL)
        uPtr(_batch)->InvalidateTransform(_elm);
}

// public void InvalidateVisual() [instance] :22
void ElementBatchEntry::InvalidateVisual()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateVisual()");
    uPtr(_atlas)->InvalidateElement(_elm);
}

// public void InvalidateVisualComposition() [instance] :27
void ElementBatchEntry::InvalidateVisualComposition()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "InvalidateVisualComposition()");
    float opacity = GetEffectiveOpacity();

    if (_opacity != opacity)
    {
        if (_batch != NULL)
            uPtr(_batch)->InvalidateOpacity(_elm);

        _opacity = opacity;
    }
}

// public void OnRemoved() [instance] :55
void ElementBatchEntry::OnRemoved()
{
    uStackFrame __("Fuse.Elements.ElementBatchEntry", "OnRemoved()");

    if (_atlas != NULL)
        uPtr(_atlas)->RemoveElement(_elm);

    if (_batch != NULL)
        uPtr(_batch)->RemoveElement(_elm);
}

// public ElementBatchEntry New(Fuse.Elements.Element elm) [static] :9
ElementBatchEntry* ElementBatchEntry::New1(::g::Fuse::Elements::Element* elm)
{
    ElementBatchEntry* obj1 = (ElementBatchEntry*)uNew(ElementBatchEntry_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementBatcher.uno
// ----------------------------------------------------------------------------

// internal sealed class ElementBatcher :27
// {
static void ElementBatcher_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Trying to batch nothing!");
    ::STRINGS[11] = uString::Const("BUG: atlas-insertion failed, but should not!");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementBatcher.uno");
    ::TYPES[14] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    ::TYPES[18] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementAtlas_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[21] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatch_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::ElementBatchEntry_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Elements::IElementBatchDrawable_typeof(), NULL);
    ::TYPES[23] = ::g::Fuse::Elements::IElementBatchDrawable_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Fuse::Resources::DisposalManager_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(ElementBatcher_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ElementBatcher_type, interface1));
    type->SetFields(0,
        ::TYPES[14/*Uno.Collections.List<Fuse.Visual>*/], offsetof(ElementBatcher, _elements), 0,
        ::TYPES[15/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/], offsetof(ElementBatcher, _atlasPool), 0,
        ::TYPES[16/*Uno.Collections.List<Fuse.Elements.ElementBatch>*/], offsetof(ElementBatcher, _batchPool), 0,
        ::TYPES[17/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>*/], offsetof(ElementBatcher, _drawList), 0,
        ::TYPES[9/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/], offsetof(ElementBatcher, _reinsertCheckList), 0,
        ::g::Uno::Float_typeof(), offsetof(ElementBatcher, MaxSpilledRatio), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElementBatcher, DrawListValid), 0);
}

ElementBatcher_type* ElementBatcher_typeof()
{
    static uSStrong<ElementBatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(ElementBatcher);
    options.TypeSize = sizeof(ElementBatcher_type);
    type = (ElementBatcher_type*)uClassType::New("Fuse.Elements.ElementBatcher", options);
    type->fp_build_ = ElementBatcher_build;
    type->fp_ctor_ = (void*)ElementBatcher__New1_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))ElementBatcher__FuseResourcesISoftDisposableSoftDispose_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ElementBatcher__Dispose_fn;
    return type;
}

// public ElementBatcher() :35
void ElementBatcher__ctor__fn(ElementBatcher* __this)
{
    __this->ctor_();
}

// public void AddElement(Fuse.Visual elm) :59
void ElementBatcher__AddElement_fn(ElementBatcher* __this, ::g::Fuse::Visual* elm)
{
    __this->AddElement(elm);
}

// private Fuse.Elements.ElementAtlas allocAtlas() :83
void ElementBatcher__allocAtlas_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas** __retval)
{
    *__retval = __this->allocAtlas();
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) :90
void ElementBatcher__allocBatch_fn(ElementBatcher* __this, ::g::Fuse::Elements::ElementAtlas* atlas, ::g::Fuse::Elements::ElementBatch** __retval)
{
    *__retval = __this->allocBatch(atlas);
}

// private void DiscardAtlasing() :97
void ElementBatcher__DiscardAtlasing_fn(ElementBatcher* __this)
{
    __this->DiscardAtlasing();
}

// private void DiscardBatching() :114
void ElementBatcher__DiscardBatching_fn(ElementBatcher* __this)
{
    __this->DiscardBatching();
}

// public void Dispose() :51
void ElementBatcher__Dispose_fn(ElementBatcher* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.DrawContext dc) :273
void ElementBatcher__Draw_fn(ElementBatcher* __this, ::g::Fuse::DrawContext* dc)
{
    __this->Draw(dc);
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :46
void ElementBatcher__FuseResourcesISoftDisposableSoftDispose_fn(ElementBatcher* __this)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    __this->DiscardAtlasing();
}

// private static int get_MaxElementPixels() :123
void ElementBatcher__get_MaxElementPixels_fn(int32_t* __retval)
{
    *__retval = ElementBatcher::MaxElementPixels();
}

// private static int2 get_MaxElementSize() :121
void ElementBatcher__get_MaxElementSize_fn(::g::Uno::Int2* __retval)
{
    *__retval = ElementBatcher::MaxElementSize();
}

// public ElementBatcher New() :35
void ElementBatcher__New1_fn(ElementBatcher** __retval)
{
    *__retval = ElementBatcher::New1();
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) :41
void ElementBatcher__OnAtlasSizeChanged_fn(ElementBatcher* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnAtlasSizeChanged(sender, args);
}

// public void Remove(Fuse.Elements.Element elm) :72
void ElementBatcher__Remove_fn(ElementBatcher* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->Remove(elm);
}

// public void RemoveAllElements() :65
void ElementBatcher__RemoveAllElements_fn(ElementBatcher* __this)
{
    __this->RemoveAllElements();
}

// public static bool ShouldBatchElement(Fuse.Visual node) :138
void ElementBatcher__ShouldBatchElement_fn(::g::Fuse::Visual* node, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElement(node);
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) :133
void ElementBatcher__ShouldBatchElementWithCachingMode_fn(int32_t* mode, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithCachingMode(*mode);
}

// public static bool ShouldBatchElementWithSize(int2 size) :125
void ElementBatcher__ShouldBatchElementWithSize_fn(::g::Uno::Int2* size, bool* __retval)
{
    *__retval = ElementBatcher::ShouldBatchElementWithSize(*size);
}

// private void UpdateDrawList() :162
void ElementBatcher__UpdateDrawList_fn(ElementBatcher* __this)
{
    __this->UpdateDrawList();
}

// public ElementBatcher() [instance] :35
void ElementBatcher::ctor_()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", ".ctor()");
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[14/*Uno.Collections.List<Fuse.Visual>*/]));
    _atlasPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]));
    _batchPool = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Fuse.Elements.ElementBatch>*/]));
    _drawList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>*/]));
    _reinsertCheckList = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[9/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>*/]));
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
    ::g::Fuse::Elements::ElementAtlasFramebufferPool::add_AtlasSizeChanged(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)ElementBatcher__OnAtlasSizeChanged_fn, this));
}

// public void AddElement(Fuse.Visual elm) [instance] :59
void ElementBatcher::AddElement(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "AddElement(Fuse.Visual)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
    DrawListValid = false;
}

// private Fuse.Elements.ElementAtlas allocAtlas() [instance] :83
::g::Fuse::Elements::ElementAtlas* ElementBatcher::allocAtlas()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "allocAtlas()");
    ::g::Fuse::Elements::ElementAtlas* atlas = ::g::Fuse::Elements::ElementAtlas::New1();
    ::g::Uno::Collections::List__Add_fn(uPtr(_atlasPool), atlas);
    return atlas;
}

// private Fuse.Elements.ElementBatch allocBatch(Fuse.Elements.ElementAtlas atlas) [instance] :90
::g::Fuse::Elements::ElementBatch* ElementBatcher::allocBatch(::g::Fuse::Elements::ElementAtlas* atlas)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "allocBatch(Fuse.Elements.ElementAtlas)");
    ::g::Fuse::Elements::ElementBatch* batch = ::g::Fuse::Elements::ElementBatch::New1(this, atlas);
    ::g::Uno::Collections::List__Add_fn(uPtr(_batchPool), batch);
    return batch;
}

// private void DiscardAtlasing() [instance] :97
void ElementBatcher::DiscardAtlasing()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "DiscardAtlasing()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret14;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret15;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret14), ret14);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]))
                {
                    ::g::Fuse::Elements::ElementAtlas* atlas = enum1.Current(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                    uPtr(atlas)->Dispose();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_12;
        }

        {
            enum1.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        }
        __after_finally_12:;
    }

    uPtr(_atlasPool)->Clear();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret15), ret15);

    {
        try
        {
            {
                while (enum2.MoveNext(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]))
                {
                    ::g::Fuse::Visual* node = enum2.Current(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
                    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[20/*Fuse.Elements.Element*/]);

                    if (elm != NULL)
                        uPtr(elm)->ElementBatchEntry(NULL);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_13;
        }

        {
            enum2.Dispose(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
        }
        __after_finally_13:;
    }

    uPtr(_drawList)->Clear();
    DrawListValid = false;
}

// private void DiscardBatching() [instance] :114
void ElementBatcher::DiscardBatching()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "DiscardBatching()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > ret16;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatch*> > enum3 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_batchPool), &ret16), ret16);

    {
        try
        {
            {
                while (enum3.MoveNext(::TYPES[21/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]))
                {
                    ::g::Fuse::Elements::ElementBatch* batch = enum3.Current(::TYPES[21/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]);
                    uPtr(batch)->Dispose();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum3.Dispose(::TYPES[21/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_14;
        }

        {
            enum3.Dispose(::TYPES[21/*Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator*/]);
        }
        __after_finally_14:;
    }

    uPtr(_batchPool)->Clear();
}

// public void Dispose() [instance] :51
void ElementBatcher::Dispose()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Dispose()");
    DiscardAtlasing();
    DiscardBatching();
    uPtr(_reinsertCheckList)->Clear();
    uPtr(_elements)->Clear();
}

// public void Draw(Fuse.DrawContext dc) [instance] :273
void ElementBatcher::Draw(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Draw(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret17;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret18;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret19;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret20;
    bool ret21;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > ret22;
    ::g::Fuse::Visual* ret23;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret24;

    if (uPtr(_elements)->Count() < 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Trying to b...*/]));

    if ((double)MaxSpilledRatio > 0.5)
    {
        ::g::Uno::Collections::List* removeList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<Fuse.Elements.ElementAtlas>*/]);
        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum7 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret17), ret17);

        {
            try
            {
                {
                    while (enum7.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]))
                    {
                        ::g::Fuse::Elements::ElementAtlas* a = enum7.Current(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                        if ((double)uPtr(a)->SpilledRatio() > 0.5)
                            ::g::Uno::Collections::List__Add_fn(uPtr(removeList), a);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum7.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_15;
            }

            {
                enum7.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
            }
            __after_finally_15:;
        }

        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum8 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret18), ret18);

        {
            try
            {
                {
                    while (enum8.MoveNext(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]))
                    {
                        ::g::Fuse::Visual* node = enum8.Current(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
                        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[20/*Fuse.Elements.Element*/]);

                        if (elm == NULL)
                            continue;

                        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum9 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removeList), &ret19), ret19);

                        {
                            try
                            {
                                {
                                    while (enum9.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]))
                                    {
                                        ::g::Fuse::Elements::ElementAtlas* a1 = enum9.Current(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                                        if ((uPtr(elm)->ElementBatchEntry() != NULL) && (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == a1))
                                            uPtr(elm)->ElementBatchEntry(NULL);
                                    }
                                }
                            }

                            catch (const uThrowable& __t)
                            {
                                {
                                    enum9.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                                }
                                                                throw __t;
                                goto __after_finally_16;
                            }

                            {
                                enum9.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                            }
                            __after_finally_16:;
                        }
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum8.Dispose(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_17;
            }

            {
                enum8.Dispose(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
            }
            __after_finally_17:;
        }

        ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum10 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removeList), &ret20), ret20);

        {
            try
            {
                {
                    while (enum10.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]))
                    {
                        ::g::Fuse::Elements::ElementAtlas* a2 = enum10.Current(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                        ::g::Uno::Collections::List__Remove_fn(uPtr(_atlasPool), a2, &ret21);
                        uPtr(a2)->Dispose();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum10.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_18;
            }

            {
                enum10.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
            }
            __after_finally_18:;
        }

        DrawListValid = false;
    }

    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementBatchEntry*> > enum11 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_reinsertCheckList), &ret22), ret22);

    {
        try
        {
            {
                while (enum11.MoveNext(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]))
                {
                    ::g::Fuse::Elements::ElementBatchEntry* e = enum11.Current(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
                    ::g::Fuse::Elements::Element* elm1 = uPtr(e)->_elm;
                    ::g::Fuse::Elements::ElementAtlas* atlas = e->_atlas;

                    if (((elm1 == NULL) || (uPtr(elm1)->ElementBatchEntry() == NULL)) || (atlas == NULL))
                        continue;

                    ::g::Uno::Recti cachingRect;

                    if (::g::Fuse::Elements::ElementBatch::TryGetCachingRect(elm1, &cachingRect))
                    {
                        if (((cachingRect.Size().X <= uPtr(e)->AtlasRect.Size().X) && (cachingRect.Size().Y <= uPtr(e)->AtlasRect.Size().Y)) || uPtr(atlas)->ReinsertElement(elm1, cachingRect))
                            continue;
                    }

                    uPtr(atlas)->RemoveElement(elm1);
                    uPtr(elm1)->ElementBatchEntry(NULL);
                    DrawListValid = false;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum11.Dispose(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_19;
        }

        {
            enum11.Dispose(::TYPES[10/*Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator*/]);
        }
        __after_finally_19:;
    }

    uPtr(_reinsertCheckList)->Clear();

    if (!DrawListValid)
    {
        UpdateDrawList();
        DrawListValid = true;
    }

    ::g::Fuse::Visual* parent = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_elements), uCRef<int32_t>(0), &ret23), ret23))->Parent();
    ::g::Uno::Float4x4 localToClipTransform = uPtr(dc)->GetLocalToClipTransform(parent);
    ::g::Uno::Rect scissorRectInClipSpace = ::g::Fuse::Elements::ElementAtlas::GetScissorRectInClipSpace(dc);
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum12 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_drawList), &ret24), ret24);

    {
        try
        {
            {
                while (enum12.MoveNext(::TYPES[22/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]))
                {
                    uObject* d = enum12.Current(::TYPES[22/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]);
                    ::g::Fuse::Elements::IElementBatchDrawable::Draw(uInterface(uPtr(d), ::TYPES[23/*Fuse.Elements.IElementBatchDrawable*/]), dc, localToClipTransform, scissorRectInClipSpace);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum12.Dispose(::TYPES[22/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_20;
        }

        {
            enum12.Dispose(::TYPES[22/*Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator*/]);
        }
        __after_finally_20:;
    }
}

// private void OnAtlasSizeChanged(object sender, Uno.EventArgs args) [instance] :41
void ElementBatcher::OnAtlasSizeChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "OnAtlasSizeChanged(object,Uno.EventArgs)");
    DiscardAtlasing();
}

// public void Remove(Fuse.Elements.Element elm) [instance] :72
void ElementBatcher::Remove(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "Remove(Fuse.Elements.Element)");
    bool ret25;
    ::g::Fuse::Elements::ElementBatchEntry* ret26;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_elements), elm, &ret25);

    for (int32_t i = uPtr(_reinsertCheckList)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_reinsertCheckList), uCRef<int32_t>(i), &ret26), ret26))->_elm == elm)
            uPtr(_reinsertCheckList)->RemoveAt(i);

    DrawListValid = false;
}

// public void RemoveAllElements() [instance] :65
void ElementBatcher::RemoveAllElements()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "RemoveAllElements()");
    uPtr(_elements)->Clear();
    DrawListValid = false;
}

// private void UpdateDrawList() [instance] :162
void ElementBatcher::UpdateDrawList()
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "UpdateDrawList()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > ret27;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret28;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > ret29;
    uPtr(_drawList)->Clear();
    DiscardBatching();
    ::g::Uno::Int2 maxBatchRenderBounds = ::g::Uno::Int2__op_Multiply(::g::Fuse::Elements::DisplayHelpers::DisplaySizeHint(), 2);
    ::g::Fuse::Elements::ElementBatch* batch = NULL;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Visual*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret27), ret27);

    {
        try
        {
            {
                while (enum4.MoveNext(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]))
                {
                    ::g::Fuse::Visual* node = enum4.Current(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);

                    if (!ElementBatcher::ShouldBatchElement(node))
                    {
                        ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleVisualDrawable::New1(node));
                        batch = NULL;
                        continue;
                    }

                    ::g::Fuse::Elements::Element* elm = uCast< ::g::Fuse::Elements::Element*>(node, ::TYPES[20/*Fuse.Elements.Element*/]);
                    bool emitNewBatch = false;
                    ::g::Fuse::Elements::ElementAtlas* atlas = NULL;

                    if (batch == NULL)
                    {
                        emitNewBatch = true;

                        if (uPtr(elm)->ElementBatchEntry() != NULL)
                            atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
                    }
                    else
                    {
                        if ((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas == NULL))
                        {
                            atlas = uPtr(batch)->_elementAtlas;

                            if (!uPtr(atlas)->AddElement(elm))
                                atlas = NULL;
                        }
                        else
                        {
                            if (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != uPtr(batch)->_elementAtlas)
                                emitNewBatch = true;

                            atlas = uPtr(uPtr(elm)->ElementBatchEntry())->_atlas;
                        }
                    }

                    if ((batch != NULL) && !emitNewBatch)
                    {
                        ::g::Fuse::VisualBounds* batchRenderBounds = uPtr(batch)->RenderBounds();
                        ::g::Fuse::VisualBounds* elmRenderBounds = uPtr(elm)->CalcRenderBoundsInParentSpace();
                        ::g::Fuse::VisualBounds* newRenderBounds = uPtr(batchRenderBounds)->Merge(elmRenderBounds, NULL);

                        if (((uPtr(newRenderBounds)->Size().X > (float)maxBatchRenderBounds.X) || (uPtr(newRenderBounds)->Size().Y > (float)maxBatchRenderBounds.Y)) || batch->IsFull())
                            emitNewBatch = true;
                    }

                    if (emitNewBatch || (atlas == NULL))
                    {
                        if (atlas == NULL)
                        {
                            ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum5 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret28), ret28);

                            {
                                try
                                {
                                    {
                                        while (enum5.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]))
                                        {
                                            ::g::Fuse::Elements::ElementAtlas* a = enum5.Current(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);

                                            if (uPtr(a)->AddElement(elm))
                                            {
                                                atlas = a;
                                                break;
                                            }
                                        }
                                    }
                                }

                                catch (const uThrowable& __t)
                                {
                                    {
                                        enum5.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                                    }
                                                                        throw __t;
                                    goto __after_finally_21;
                                }

                                {
                                    enum5.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                                }
                                __after_finally_21:;
                            }

                            if (atlas == NULL)
                                atlas = allocAtlas();
                        }

                        batch = allocBatch(atlas);

                        if (((uPtr(elm)->ElementBatchEntry() == NULL) || (uPtr(uPtr(elm)->ElementBatchEntry())->_atlas != atlas)) && !uPtr(atlas)->AddElement(elm))
                        {
                            ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[11/*"BUG: atlas-...*/], 0, ::STRINGS[12/*"/usr/local/...*/], 253);
                            ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)::g::Fuse::Elements::SingleVisualDrawable::New1(elm));
                            batch = NULL;
                            continue;
                        }

                        ::g::Uno::Collections::List__Add_fn(uPtr(_drawList), (uObject*)batch);
                    }

                    uPtr(batch)->AddElement(elm);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum4.Dispose(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_22;
        }

        {
            enum4.Dispose(::TYPES[19/*Uno.Collections.List<Fuse.Visual>.Enumerator*/]);
        }
        __after_finally_22:;
    }

    MaxSpilledRatio = 0.0f;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Elements::ElementAtlas*> > enum6 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_atlasPool), &ret29), ret29);

    {
        try
        {
            {
                while (enum6.MoveNext(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]))
                {
                    ::g::Fuse::Elements::ElementAtlas* a1 = enum6.Current(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
                    MaxSpilledRatio = ::g::Uno::Math::Max1(MaxSpilledRatio, uPtr(a1)->SpilledRatio());
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum6.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_23;
        }

        {
            enum6.Dispose(::TYPES[18/*Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator*/]);
        }
        __after_finally_23:;
    }
}

// public ElementBatcher New() [static] :35
ElementBatcher* ElementBatcher::New1()
{
    ElementBatcher* obj13 = (ElementBatcher*)uNew(ElementBatcher_typeof());
    obj13->ctor_();
    return obj13;
}

// public static bool ShouldBatchElement(Fuse.Visual node) [static] :138
bool ElementBatcher::ShouldBatchElement(::g::Fuse::Visual* node)
{
    uStackFrame __("Fuse.Elements.ElementBatcher", "ShouldBatchElement(Fuse.Visual)");
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(node, ::TYPES[20/*Fuse.Elements.Element*/]);

    if (elm == NULL)
        return false;

    bool flat = uPtr(elm)->AreChildrenFlat() && uPtr(elm)->IsLocalFlat();

    if (!flat)
        return false;

    if (!ElementBatcher::ShouldBatchElementWithCachingMode(elm->CachingMode()))
        return false;

    ::g::Uno::Recti cacheRect;

    if (!::g::Fuse::Elements::ElementBatch::TryGetCachingRect(elm, &cacheRect))
        return false;

    return ElementBatcher::ShouldBatchElementWithSize(cacheRect.Size());
}

// public static bool ShouldBatchElementWithCachingMode(Fuse.Elements.CachingMode mode) [static] :133
bool ElementBatcher::ShouldBatchElementWithCachingMode(int32_t mode)
{
    return mode != 2;
}

// public static bool ShouldBatchElementWithSize(int2 size) [static] :125
bool ElementBatcher::ShouldBatchElementWithSize(::g::Uno::Int2 size)
{
    ::g::Uno::Int2 maxSize = ElementBatcher::MaxElementSize();
    return ((size.X <= maxSize.X) && (size.Y <= maxSize.Y)) && ((size.X * size.Y) <= ElementBatcher::MaxElementPixels());
}

// private static int get_MaxElementPixels() [static] :123
int32_t ElementBatcher::MaxElementPixels()
{
    return (ElementBatcher::MaxElementSize().X * ElementBatcher::MaxElementSize().Y) / 2;
}

// private static int2 get_MaxElementSize() [static] :121
::g::Uno::Int2 ElementBatcher::MaxElementSize()
{
    return ::g::Fuse::Elements::ElementAtlasFramebuffer::Size();
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Transform.uno
// -----------------------------------------------------------------------

// internal sealed class ExplicitTransformOrigin :13
// {
static void ExplicitTransformOrigin_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::ICommonViewport_typeof();
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(ExplicitTransformOrigin_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::Size2_typeof(), offsetof(ExplicitTransformOrigin, Origin), 0);
}

ExplicitTransformOrigin_type* ExplicitTransformOrigin_typeof()
{
    static uSStrong<ExplicitTransformOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ExplicitTransformOrigin);
    options.TypeSize = sizeof(ExplicitTransformOrigin_type);
    type = (ExplicitTransformOrigin_type*)uClassType::New("Fuse.Elements.ExplicitTransformOrigin", options);
    type->fp_build_ = ExplicitTransformOrigin_build;
    type->fp_ctor_ = (void*)ExplicitTransformOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))ExplicitTransformOrigin__GetOffset_fn;
    return type;
}

// public generated ExplicitTransformOrigin() :13
void ExplicitTransformOrigin__ctor__fn(ExplicitTransformOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :37
void ExplicitTransformOrigin__GetOffset_fn(ExplicitTransformOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated ExplicitTransformOrigin New() :13
void ExplicitTransformOrigin__New1_fn(ExplicitTransformOrigin** __retval)
{
    *__retval = ExplicitTransformOrigin::New1();
}

// private float SizePart(Uno.UX.Size sz, float relative, float pixelsPerPoint) :18
void ExplicitTransformOrigin__SizePart_fn(ExplicitTransformOrigin* __this, ::g::Uno::UX::Size* sz, float* relative, float* pixelsPerPoint, float* __retval)
{
    *__retval = __this->SizePart(*sz, *relative, *pixelsPerPoint);
}

// public generated ExplicitTransformOrigin() [instance] :13
void ExplicitTransformOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :37
::g::Uno::Float3 ExplicitTransformOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.ExplicitTransformOrigin", "GetOffset(Fuse.Elements.Element)");
    float pixelsPerPoint = ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(elm)->Viewport()), ::TYPES[24/*Fuse.ICommonViewport*/]));
    return ::g::Uno::Float3__New2(SizePart(Origin.X, elm->ActualSize().X, pixelsPerPoint), SizePart(Origin.Y, elm->ActualSize().Y, pixelsPerPoint), 0.0f);
}

// private float SizePart(Uno.UX.Size sz, float relative, float pixelsPerPoint) [instance] :18
float ExplicitTransformOrigin::SizePart(::g::Uno::UX::Size sz, float relative, float pixelsPerPoint)
{
    int32_t u = sz.DetermineUnit();

    switch (u)
    {
        case 2:
            return sz.Value;
        case 3:
            return sz.Value / pixelsPerPoint;
        case 4:
            return (sz.Value * relative) / 100.0f;
    }

    return 0.0f;
}

// public generated ExplicitTransformOrigin New() [static] :13
ExplicitTransformOrigin* ExplicitTransformOrigin::New1()
{
    ExplicitTransformOrigin* obj1 = (ExplicitTransformOrigin*)uNew(ExplicitTransformOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/AspectBoxSizing.uno
// ---------------------------------------------------------------------

// internal sealed class FillAspectBoxSizing :19
// {
// static generated FillAspectBoxSizing() :19
static void FillAspectBoxSizing__cctor__fn(uType* __type)
{
    FillAspectBoxSizing::Singleton_ = FillAspectBoxSizing::New1();
}

static void FillAspectBoxSizing_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Elements::StandardBoxSizing_typeof());
    type->SetFields(0,
        type, (uintptr_t)&FillAspectBoxSizing::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* FillAspectBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FillAspectBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.FillAspectBoxSizing", options);
    type->fp_build_ = FillAspectBoxSizing_build;
    type->fp_ctor_ = (void*)FillAspectBoxSizing__New1_fn;
    type->fp_cctor_ = FillAspectBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))FillAspectBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))FillAspectBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))FillAspectBoxSizing__CalcMarginSize_fn;
    return type;
}

// public generated FillAspectBoxSizing() :19
void FillAspectBoxSizing__ctor_1_fn(FillAspectBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :33
void FillAspectBoxSizing__CalcArrangePaddingSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams cs = __this->GetConstraints(element, lp_, 2);
    ::g::Fuse::LayoutParams c = lp_.CloneAndDerive();
    c.BoxConstrain(cs);
    float aspect = uPtr(element)->Aspect();
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);

    if (c.HasSize())
        sz = __this->Pick(c.Size(), aspect);
    else if (c.HasX())
        sz = ::g::Uno::Float2__New2(c.X(), c.X() / aspect);
    else if (c.HasY())
        sz = ::g::Uno::Float2__New2(c.Y() * aspect, c.Y());

    int32_t ac = element->AspectConstraint();

    if ((ac & 1) == 1)
    {
        if (c.HasMaxSize())
            sz = __this->Fit(sz, c.MaxSize(), aspect);
        else if (c.HasMaxX())
            sz = __this->Fit(sz, ::g::Uno::Float2__New2(c.MaxX(), sz.Y), aspect);
        else if (c.HasMaxY())
            sz = __this->Fit(sz, ::g::Uno::Float2__New2(sz.X, c.MaxY()), aspect);

        if (c.HasMinX() && (sz.X < c.MinX()))
            sz = ::g::Uno::Float2__New2(c.MinX(), c.MinX() / aspect);

        if (c.HasMinY() && (sz.Y < c.MinY()))
            sz = ::g::Uno::Float2__New2(c.MinY() * aspect, c.MinY());
    }

    if ((ac & 2) == 2)
    {
        if (c.HasMaxX() && (sz.X > c.MaxX()))
            sz.X = c.MaxX();

        if (c.HasMinX() && (sz.X < c.MinX()))
            sz.X = c.MinX();

        if (c.HasMaxY() && (sz.Y > c.MaxY()))
            sz.Y = c.MaxY();

        if (c.HasMinY() && (sz.Y < c.MinY()))
            sz.Y = c.MinY();
    }

    return *__retval = sz, void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :23
void FillAspectBoxSizing__CalcBoxPlacement_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :28
void FillAspectBoxSizing__CalcMarginSize_fn(FillAspectBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.FillAspectBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, lp_), void();
}

// private float2 Fit(float2 sz, float2 max, float aspect) :91
void FillAspectBoxSizing__Fit_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* max, float* aspect, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Fit(*sz, *max, *aspect);
}

// public generated FillAspectBoxSizing New() :19
void FillAspectBoxSizing__New1_fn(FillAspectBoxSizing** __retval)
{
    *__retval = FillAspectBoxSizing::New1();
}

// private float2 Pick(float2 sz, float aspect) :82
void FillAspectBoxSizing__Pick_fn(FillAspectBoxSizing* __this, ::g::Uno::Float2* sz, float* aspect, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Pick(*sz, *aspect);
}

uSStrong<FillAspectBoxSizing*> FillAspectBoxSizing::Singleton_;

// public generated FillAspectBoxSizing() [instance] :19
void FillAspectBoxSizing::ctor_1()
{
    ctor_();
}

// private float2 Fit(float2 sz, float2 max, float aspect) [instance] :91
::g::Uno::Float2 FillAspectBoxSizing::Fit(::g::Uno::Float2 sz, ::g::Uno::Float2 max, float aspect)
{
    if ((sz.X <= max.X) && (sz.Y <= max.Y))
        return sz;

    if (sz.X > max.X)
        return ::g::Uno::Float2__New2(max.X, max.X / aspect);

    return ::g::Uno::Float2__New2(max.Y * aspect, max.Y);
}

// private float2 Pick(float2 sz, float aspect) [instance] :82
::g::Uno::Float2 FillAspectBoxSizing::Pick(::g::Uno::Float2 sz, float aspect)
{
    float y = sz.X / aspect;

    if (y <= sz.Y)
        return ::g::Uno::Float2__New2(sz.X, y);

    return ::g::Uno::Float2__New2(sz.Y * aspect, sz.Y);
}

// public generated FillAspectBoxSizing New() [static] :19
FillAspectBoxSizing* FillAspectBoxSizing::New1()
{
    FillAspectBoxSizing* obj1 = (FillAspectBoxSizing*)uNew(FillAspectBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Layout.uno
// --------------------------------------------------------------------

// private struct Element.GMSCacheItem :133
// {
static void Element__GMSCacheItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::LayoutParams_typeof(), offsetof(Element__GMSCacheItem, layoutParams), 0,
        ::g::Uno::Float2_typeof(), offsetof(Element__GMSCacheItem, result), 0);
}

uStructType* Element__GMSCacheItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Element__GMSCacheItem);
    options.ValueSize = sizeof(Element__GMSCacheItem);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Elements.Element.GMSCacheItem", options);
    type->fp_build_ = Element__GMSCacheItem_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno
// ---------------------------------------------------------------------

// public sealed class HeightFunction :143
// {
static void HeightFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HeightFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::LayoutFunction_type* HeightFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::LayoutFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(HeightFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::LayoutFunction_type);
    type = (::g::Fuse::Elements::LayoutFunction_type*)uClassType::New("Fuse.Elements.HeightFunction", options);
    type->fp_build_ = HeightFunction_build;
    type->fp_GetCurrentValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::Elements::Element*, uObject**))HeightFunction__GetCurrentValue_fn;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))HeightFunction__GetValue_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public HeightFunction(Fuse.Reactive.Expression element) :146
void HeightFunction__ctor_2_fn(HeightFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_2(element);
}

// protected override sealed object GetCurrentValue(Fuse.Elements.Element elm) :153
void HeightFunction__GetCurrentValue_fn(HeightFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.HeightFunction", "GetCurrentValue(Fuse.Elements.Element)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(elm)->ActualSize().Y), void();
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :148
void HeightFunction__GetValue_fn(HeightFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.HeightFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewSize().Y), void();
}

// public HeightFunction New(Fuse.Reactive.Expression element) :146
void HeightFunction__New1_fn(::g::Fuse::Reactive::Expression* element, HeightFunction** __retval)
{
    *__retval = HeightFunction::New1(element);
}

// public HeightFunction(Fuse.Reactive.Expression element) [instance] :146
void HeightFunction::ctor_2(::g::Fuse::Reactive::Expression* element)
{
    ctor_1(element);
}

// public HeightFunction New(Fuse.Reactive.Expression element) [static] :146
HeightFunction* HeightFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    HeightFunction* obj1 = (HeightFunction*)uNew(HeightFunction_typeof());
    obj1->ctor_2(element);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.HitTest.uno
// ---------------------------------------------------------------------

// public enum HitTestMode :10
uEnumType* HitTestMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.HitTestMode", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "None", 0LL,
        "LocalVisual", 1LL,
        "LocalBounds", 2LL,
        "Children", 4LL,
        "LocalVisualAndChildren", 5LL,
        "LocalBoundsAndChildren", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementBatcher.uno
// ----------------------------------------------------------------------------

// internal abstract interface IElementBatchDrawable :8
// {
uInterfaceType* IElementBatchDrawable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.IElementBatchDrawable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/InteractiveTransform.uno
// --------------------------------------------------------------------------

// public sealed class InteractiveTransform :6
// {
// static generated InteractiveTransform() :6
static void InteractiveTransform__cctor_1_fn(uType* __type)
{
    InteractiveTransform::_zoomFactorName_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[13/*"ZoomFactor"*/]);
    InteractiveTransform::_rotationName_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[14/*"Rotation"*/]);
    InteractiveTransform::_translationName_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[15/*"Translation"*/]);
}

static void InteractiveTransform_build(uType* type)
{
    ::STRINGS[13] = uString::Const("ZoomFactor");
    ::STRINGS[14] = uString::Const("Rotation");
    ::STRINGS[15] = uString::Const("Translation");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Transform_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Transform_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface6));
    type->SetFields(19,
        ::g::Uno::Float_typeof(), offsetof(InteractiveTransform, _zoomFactor), 0,
        ::g::Uno::Float_typeof(), offsetof(InteractiveTransform, _rotation), 0,
        ::g::Uno::Float2_typeof(), offsetof(InteractiveTransform, _translation), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InteractiveTransform::_zoomFactorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InteractiveTransform::_rotationName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InteractiveTransform::_translationName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction(".ctor", NULL, (void*)InteractiveTransform__New2_fn, 0, true, type, 0),
        new uFunction("get_Rotation", NULL, (void*)InteractiveTransform__get_Rotation_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Rotation", NULL, (void*)InteractiveTransform__set_Rotation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("SetRotation", NULL, (void*)InteractiveTransform__SetRotation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTranslation", NULL, (void*)InteractiveTransform__SetTranslation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetZoomFactor", NULL, (void*)InteractiveTransform__SetZoomFactor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Translation", NULL, (void*)InteractiveTransform__get_Translation_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Translation", NULL, (void*)InteractiveTransform__set_Translation_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_ZoomFactor", NULL, (void*)InteractiveTransform__get_ZoomFactor_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ZoomFactor", NULL, (void*)InteractiveTransform__set_ZoomFactor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Transform_type* InteractiveTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(InteractiveTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Elements.InteractiveTransform", options);
    type->fp_build_ = InteractiveTransform_build;
    type->fp_ctor_ = (void*)InteractiveTransform__New2_fn;
    type->fp_cctor_ = InteractiveTransform__cctor_1_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))InteractiveTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))InteractiveTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))InteractiveTransform__PrependTo_fn;
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

// public generated InteractiveTransform() :6
void InteractiveTransform__ctor_3_fn(InteractiveTransform* __this)
{
    __this->ctor_3();
}

// internal void AppendRotationScale(Fuse.FastMatrix matrix) :82
void InteractiveTransform__AppendRotationScale_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix)
{
    __this->AppendRotationScale(matrix);
}

// public override sealed void AppendTo(Fuse.FastMatrix matrix, [float weight]) :75
void InteractiveTransform__AppendTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix, float* weight)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "AppendTo(Fuse.FastMatrix,[float])");
    float weight_ = *weight;
    uPtr(matrix)->AppendTranslation(__this->Translation().X, __this->Translation().Y, 0.0f);
    matrix->AppendScale(__this->ZoomFactor() * weight_);
    matrix->AppendRotation(__this->Rotation() * weight_);
}

// public override sealed bool get_IsFlat() :66
void InteractiveTransform__get_IsFlat_fn(InteractiveTransform* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated InteractiveTransform New() :6
void InteractiveTransform__New2_fn(InteractiveTransform** __retval)
{
    *__retval = InteractiveTransform::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix matrix) :68
void InteractiveTransform__PrependTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "PrependTo(Fuse.FastMatrix)");
    uPtr(matrix)->PrependRotation(__this->Rotation());
    matrix->PrependScale(__this->ZoomFactor());
    matrix->PrependTranslation(__this->Translation().X, __this->Translation().Y, 0.0f);
}

// public float get_Rotation() :32
void InteractiveTransform__get_Rotation_fn(InteractiveTransform* __this, float* __retval)
{
    *__retval = __this->Rotation();
}

// public void set_Rotation(float value) :33
void InteractiveTransform__set_Rotation_fn(InteractiveTransform* __this, float* value)
{
    __this->Rotation(*value);
}

// public void SetRotation(float value, Uno.UX.IPropertyListener origin) :37
void InteractiveTransform__SetRotation_fn(InteractiveTransform* __this, float* value, uObject* origin)
{
    __this->SetRotation(*value, origin);
}

// public void SetTranslation(float2 value, Uno.UX.IPropertyListener origin) :56
void InteractiveTransform__SetTranslation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value, uObject* origin)
{
    __this->SetTranslation(*value, origin);
}

// public void SetZoomFactor(float value, Uno.UX.IPropertyListener origin) :17
void InteractiveTransform__SetZoomFactor_fn(InteractiveTransform* __this, float* value, uObject* origin)
{
    __this->SetZoomFactor(*value, origin);
}

// public float2 get_Translation() :51
void InteractiveTransform__get_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Translation();
}

// public void set_Translation(float2 value) :52
void InteractiveTransform__set_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value)
{
    __this->Translation(*value);
}

// public float get_ZoomFactor() :12
void InteractiveTransform__get_ZoomFactor_fn(InteractiveTransform* __this, float* __retval)
{
    *__retval = __this->ZoomFactor();
}

// public void set_ZoomFactor(float value) :13
void InteractiveTransform__set_ZoomFactor_fn(InteractiveTransform* __this, float* value)
{
    __this->ZoomFactor(*value);
}

::g::Uno::UX::Selector InteractiveTransform::_zoomFactorName_;
::g::Uno::UX::Selector InteractiveTransform::_rotationName_;
::g::Uno::UX::Selector InteractiveTransform::_translationName_;

// public generated InteractiveTransform() [instance] :6
void InteractiveTransform::ctor_3()
{
    _zoomFactor = 1.0f;
    _rotation = 0.0f;
    ctor_2();
}

// internal void AppendRotationScale(Fuse.FastMatrix matrix) [instance] :82
void InteractiveTransform::AppendRotationScale(::g::Fuse::FastMatrix* matrix)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "AppendRotationScale(Fuse.FastMatrix)");
    uPtr(matrix)->AppendScale(ZoomFactor());
    matrix->AppendRotation(Rotation());
}

// public float get_Rotation() [instance] :32
float InteractiveTransform::Rotation()
{
    return _rotation;
}

// public void set_Rotation(float value) [instance] :33
void InteractiveTransform::Rotation(float value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_Rotation(float)");
    SetRotation(value, NULL);
}

// public void SetRotation(float value, Uno.UX.IPropertyListener origin) [instance] :37
void InteractiveTransform::SetRotation(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetRotation(float,Uno.UX.IPropertyListener)");

    if (_rotation != value)
    {
        _rotation = value;
        OnPropertyChanged1(InteractiveTransform::_rotationName_, origin);
        OnMatrixChanged(NULL, NULL);
    }
}

// public void SetTranslation(float2 value, Uno.UX.IPropertyListener origin) [instance] :56
void InteractiveTransform::SetTranslation(::g::Uno::Float2 value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetTranslation(float2,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float2__op_Inequality(_translation, value))
    {
        _translation = value;
        OnPropertyChanged1(InteractiveTransform::_translationName_, origin);
        OnMatrixChanged(NULL, NULL);
    }
}

// public void SetZoomFactor(float value, Uno.UX.IPropertyListener origin) [instance] :17
void InteractiveTransform::SetZoomFactor(float value, uObject* origin)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "SetZoomFactor(float,Uno.UX.IPropertyListener)");

    if (_zoomFactor != value)
    {
        _zoomFactor = value;
        OnPropertyChanged1(InteractiveTransform::_zoomFactorName_, origin);
        OnMatrixChanged(NULL, NULL);
    }
}

// public float2 get_Translation() [instance] :51
::g::Uno::Float2 InteractiveTransform::Translation()
{
    return _translation;
}

// public void set_Translation(float2 value) [instance] :52
void InteractiveTransform::Translation(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_Translation(float2)");
    SetTranslation(value, NULL);
}

// public float get_ZoomFactor() [instance] :12
float InteractiveTransform::ZoomFactor()
{
    return _zoomFactor;
}

// public void set_ZoomFactor(float value) [instance] :13
void InteractiveTransform::ZoomFactor(float value)
{
    uStackFrame __("Fuse.Elements.InteractiveTransform", "set_ZoomFactor(float)");
    SetZoomFactor(value, NULL);
}

// public generated InteractiveTransform New() [static] :6
InteractiveTransform* InteractiveTransform::New2()
{
    InteractiveTransform* obj1 = (InteractiveTransform*)uNew(InteractiveTransform_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Transform.uno
// -----------------------------------------------------------------------

// public abstract interface ITransformOrigin :8
// {
uInterfaceType* ITransformOrigin_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.ITransformOrigin", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetOffset", NULL, NULL, offsetof(ITransformOrigin, fp_GetOffset), false, ::g::Uno::Float3_typeof(), 1, ::g::Fuse::Elements::Element_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.ITreeRenderer.uno
// ---------------------------------------------------------------------------

// public abstract interface ITreeRenderer :9
// {
uInterfaceType* ITreeRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Elements.ITreeRenderer", 0, 0);
    type->Reflection.SetFunctions(14,
        new uFunction("BackgroundChanged", NULL, NULL, offsetof(ITreeRenderer, fp_BackgroundChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("ClipToBoundsChanged", NULL, NULL, offsetof(ITreeRenderer, fp_ClipToBoundsChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("HitTestModeChanged", NULL, NULL, offsetof(ITreeRenderer, fp_HitTestModeChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("IsEnabledChanged", NULL, NULL, offsetof(ITreeRenderer, fp_IsEnabledChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("IsVisibleChanged", NULL, NULL, offsetof(ITreeRenderer, fp_IsVisibleChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Measure", NULL, NULL, offsetof(ITreeRenderer, fp_Measure), false, ::g::Uno::Bool_typeof(), 3, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::LayoutParams_typeof(), ::g::Uno::Float2_typeof()->ByRef()),
        new uFunction("OpacityChanged", NULL, NULL, offsetof(ITreeRenderer, fp_OpacityChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Placed", NULL, NULL, offsetof(ITreeRenderer, fp_Placed), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("RenderBoundsChanged", NULL, NULL, offsetof(ITreeRenderer, fp_RenderBoundsChanged), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("Rooted", NULL, NULL, offsetof(ITreeRenderer, fp_Rooted), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("RootingStarted", NULL, NULL, offsetof(ITreeRenderer, fp_RootingStarted), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("TransformChanged", NULL, NULL, offsetof(ITreeRenderer, fp_TransformChanged), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("Unrooted", NULL, NULL, offsetof(ITreeRenderer, fp_Unrooted), false, uVoid_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("ZOrderChanged", NULL, NULL, offsetof(ITreeRenderer, fp_ZOrderChanged), false, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Visual_typeof()->Array()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno
// ---------------------------------------------------------------------

// public abstract class LayoutFunction :15
// {
static void LayoutFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(LayoutFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(LayoutFunction_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(LayoutFunction, Element), 0);
}

LayoutFunction_type* LayoutFunction_typeof()
{
    static uSStrong<LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutFunction);
    options.TypeSize = sizeof(LayoutFunction_type);
    type = (LayoutFunction_type*)uClassType::New("Fuse.Elements.LayoutFunction", options);
    type->fp_build_ = LayoutFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))LayoutFunction__Subscribe_fn;
    type->fp_TryComputeAlternate = LayoutFunction__TryComputeAlternate_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))LayoutFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// internal LayoutFunction(Fuse.Reactive.Expression element) :18
void LayoutFunction__ctor_1_fn(LayoutFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_1(element);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext dc, Fuse.Reactive.IListener listener) :23
void LayoutFunction__Subscribe_fn(LayoutFunction* __this, uObject* dc, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.LayoutFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)LayoutFunction__Subscription::New1(__this, dc, listener), void();
}

// protected virtual bool TryComputeAlternate(object value, object& result) :31
void LayoutFunction__TryComputeAlternate_fn(LayoutFunction* __this, uObject* value, uObject** result, bool* __retval)
{
    *result = NULL;
    return *__retval = false, void();
}

// internal LayoutFunction(Fuse.Reactive.Expression element) [instance] :18
void LayoutFunction::ctor_1(::g::Fuse::Reactive::Expression* element)
{
    ctor_();
    Element = element;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutMasterAttr.uno
// ----------------------------------------------------------------------

// public static class LayoutMasterAttr :5
// {
static void LayoutMasterAttr_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Elements::LayoutMasterBoxSizing_typeof());
    type->Reflection.SetFunctions(2,
        new uFunction("GetLayoutMasterMode", NULL, (void*)LayoutMasterAttr__GetLayoutMasterMode_fn, 0, true, ::g::Fuse::Elements::LayoutMasterMode_typeof(), 1, ::g::Fuse::Elements::Element_typeof()),
        new uFunction("SetLayoutMasterMode", NULL, (void*)LayoutMasterAttr__SetLayoutMasterMode_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Elements::Element_typeof(), ::g::Fuse::Elements::LayoutMasterMode_typeof()));
}

uClassType* LayoutMasterAttr_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.LayoutMasterAttr", options);
    type->fp_build_ = LayoutMasterAttr_build;
    return type;
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) :17
void LayoutMasterAttr__GetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int32_t* __retval)
{
    *__retval = LayoutMasterAttr::GetLayoutMasterMode(elm);
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) :11
void LayoutMasterAttr__SetLayoutMasterMode_fn(::g::Fuse::Elements::Element* elm, int32_t* mode)
{
    LayoutMasterAttr::SetLayoutMasterMode(elm, *mode);
}

// public static Fuse.Elements.LayoutMasterMode GetLayoutMasterMode(Fuse.Elements.Element elm) [static] :17
int32_t LayoutMasterAttr::GetLayoutMasterMode(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterAttr", "GetLayoutMasterMode(Fuse.Elements.Element)");
    return uPtr(::g::Fuse::Elements::LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode;
}

// public static void SetLayoutMasterMode(Fuse.Elements.Element elm, Fuse.Elements.LayoutMasterMode mode) [static] :11
void LayoutMasterAttr::SetLayoutMasterMode(::g::Fuse::Elements::Element* elm, int32_t mode)
{
    uStackFrame __("Fuse.Elements.LayoutMasterAttr", "SetLayoutMasterMode(Fuse.Elements.Element,Fuse.Elements.LayoutMasterMode)");
    uPtr(::g::Fuse::Elements::LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Mode = mode;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutMasterBoxSizing.uno
// ---------------------------------------------------------------------------

// internal sealed class LayoutMasterBoxSizing :18
// {
// static generated LayoutMasterBoxSizing() :18
static void LayoutMasterBoxSizing__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    LayoutMasterBoxSizing::Singleton_ = LayoutMasterBoxSizing::New1();
    LayoutMasterBoxSizing::_layoutMasterDataProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void LayoutMasterBoxSizing_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Elements::StandardBoxSizing_typeof());
    type->SetFields(0,
        type, (uintptr_t)&LayoutMasterBoxSizing::Singleton_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&LayoutMasterBoxSizing::_layoutMasterDataProperty_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LayoutMasterBoxSizing", options);
    type->fp_build_ = LayoutMasterBoxSizing_build;
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__New1_fn;
    type->fp_cctor_ = LayoutMasterBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LayoutMasterBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))LayoutMasterBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LayoutMasterBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int32_t*))LayoutMasterBoxSizing__IsContentRelativeSize_fn;
    type->fp_RequestLayout = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*))LayoutMasterBoxSizing__RequestLayout_fn;
    return type;
}

// public generated LayoutMasterBoxSizing() :18
void LayoutMasterBoxSizing__ctor_1_fn(LayoutMasterBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :53
void LayoutMasterBoxSizing__CalcArrangePaddingSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcArrangePaddingSize(element, lp_), void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :22
void LayoutMasterBoxSizing__CalcBoxPlacement_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
    {
        ::g::Fuse::Elements::BoxPlacement bp;
        bp.MarginBox = uPtr(element)->ActualSize();
        bp.Position = element->ActualPosition();
        bp.Size = element->ActualSize();
        return *__retval = bp, void();
    }

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :44
void LayoutMasterBoxSizing__CalcMarginSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Elements::Element* master = LayoutMasterBoxSizing::GetLayoutMaster(element);

    if (master == NULL)
        return *__retval = uPtr(element)->ActualSize(), void();

    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, lp_), void();
}

// internal static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) :165
void LayoutMasterBoxSizing__GetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMaster(elm);
}

// internal static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) :140
void LayoutMasterBoxSizing__GetLayoutMasterData_fn(::g::Fuse::Elements::Element* elm, LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing::GetLayoutMasterData(elm);
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :152
void LayoutMasterBoxSizing__IsContentRelativeSize_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval)
{
    return *__retval = 0, void();
}

// public generated LayoutMasterBoxSizing New() :18
void LayoutMasterBoxSizing__New1_fn(LayoutMasterBoxSizing** __retval)
{
    *__retval = LayoutMasterBoxSizing::New1();
}

// public override sealed void RequestLayout(Fuse.Elements.Element element) :38
void LayoutMasterBoxSizing__RequestLayout_fn(LayoutMasterBoxSizing* __this, ::g::Fuse::Elements::Element* element)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "RequestLayout(Fuse.Elements.Element)");
    LayoutMasterBoxSizing__LayoutMasterData* data = LayoutMasterBoxSizing::GetLayoutMasterData(element);
    uPtr(data)->ScheduleCheckLayout();
}

// internal static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) :159
void LayoutMasterBoxSizing__SetLayoutMaster_fn(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    LayoutMasterBoxSizing::SetLayoutMaster(elm, master);
}

uSStrong<LayoutMasterBoxSizing*> LayoutMasterBoxSizing::Singleton_;
uSStrong< ::g::Fuse::PropertyHandle*> LayoutMasterBoxSizing::_layoutMasterDataProperty_;

// public generated LayoutMasterBoxSizing() [instance] :18
void LayoutMasterBoxSizing::ctor_1()
{
    ctor_();
}

// internal static Fuse.Elements.Element GetLayoutMaster(Fuse.Elements.Element elm) [static] :165
::g::Fuse::Elements::Element* LayoutMasterBoxSizing::GetLayoutMaster(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "GetLayoutMaster(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    return uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master();
}

// internal static Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData GetLayoutMasterData(Fuse.Elements.Element elm) [static] :140
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing::GetLayoutMasterData(::g::Fuse::Elements::Element* elm)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "GetLayoutMasterData(Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(LayoutMasterBoxSizing::_layoutMasterDataProperty_, &v))
        return uCast<LayoutMasterBoxSizing__LayoutMasterData*>(v, LayoutMasterBoxSizing__LayoutMasterData_typeof());

    LayoutMasterBoxSizing__LayoutMasterData* sd = LayoutMasterBoxSizing__LayoutMasterData::New1();
    sd->Element = elm;
    uPtr(uPtr(elm)->Properties())->Set(LayoutMasterBoxSizing::_layoutMasterDataProperty_, sd);
    return sd;
}

// public generated LayoutMasterBoxSizing New() [static] :18
LayoutMasterBoxSizing* LayoutMasterBoxSizing::New1()
{
    LayoutMasterBoxSizing* obj1 = (LayoutMasterBoxSizing*)uNew(LayoutMasterBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}

// internal static void SetLayoutMaster(Fuse.Elements.Element elm, Fuse.Elements.Element master) [static] :159
void LayoutMasterBoxSizing::SetLayoutMaster(::g::Fuse::Elements::Element* elm, ::g::Fuse::Elements::Element* master)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing", "SetLayoutMaster(Fuse.Elements.Element,Fuse.Elements.Element)");
    LayoutMasterBoxSizing_typeof()->Init();
    uPtr(LayoutMasterBoxSizing::GetLayoutMasterData(elm))->Master(master);
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutMasterBoxSizing.uno
// ---------------------------------------------------------------------------

// internal sealed class LayoutMasterBoxSizing.LayoutMasterData :60
// {
static void LayoutMasterBoxSizing__LayoutMasterData_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[25] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::TYPES[20/*Fuse.Elements.Element*/], offsetof(LayoutMasterBoxSizing__LayoutMasterData, Element), uFieldFlagsWeak,
        ::g::Fuse::Elements::LayoutMasterMode_typeof(), offsetof(LayoutMasterBoxSizing__LayoutMasterData, Mode), 0,
        ::TYPES[20/*Fuse.Elements.Element*/], offsetof(LayoutMasterBoxSizing__LayoutMasterData, _master), 0,
        ::g::Uno::Bool_typeof(), offsetof(LayoutMasterBoxSizing__LayoutMasterData, _pendingCheckLayout), 0);
}

uType* LayoutMasterBoxSizing__LayoutMasterData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LayoutMasterBoxSizing__LayoutMasterData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", options);
    type->fp_build_ = LayoutMasterBoxSizing__LayoutMasterData_build;
    type->fp_ctor_ = (void*)LayoutMasterBoxSizing__LayoutMasterData__New1_fn;
    return type;
}

// public generated LayoutMasterData() :60
void LayoutMasterBoxSizing__LayoutMasterData__ctor__fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ctor_();
}

// internal void CheckLayout() :100
void LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->CheckLayout();
}

// public Fuse.Elements.Element get_Master() :70
void LayoutMasterBoxSizing__LayoutMasterData__get_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Master();
}

// public void set_Master(Fuse.Elements.Element value) :71
void LayoutMasterBoxSizing__LayoutMasterData__set_Master_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Master(value);
}

// public generated LayoutMasterData New() :60
void LayoutMasterBoxSizing__LayoutMasterData__New1_fn(LayoutMasterBoxSizing__LayoutMasterData** __retval)
{
    *__retval = LayoutMasterBoxSizing__LayoutMasterData::New1();
}

// private void OnPlaced(object s, object args) :134
void LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn(LayoutMasterBoxSizing__LayoutMasterData* __this, uObject* s, uObject* args)
{
    __this->OnPlaced(s, args);
}

// internal void ScheduleCheckLayout() :90
void LayoutMasterBoxSizing__LayoutMasterData__ScheduleCheckLayout_fn(LayoutMasterBoxSizing__LayoutMasterData* __this)
{
    __this->ScheduleCheckLayout();
}

// public generated LayoutMasterData() [instance] :60
void LayoutMasterBoxSizing__LayoutMasterData::ctor_()
{
}

// internal void CheckLayout() [instance] :100
void LayoutMasterBoxSizing__LayoutMasterData::CheckLayout()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "CheckLayout()");
    ::g::Uno::Float4 ind1;
    _pendingCheckLayout = false;

    if ((((Element == NULL) || (_master == NULL)) || !uPtr(_master)->IsRootingCompleted()) || !uPtr(Element)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 size = ::g::Uno::Float2__New1(0.0f);

    if (Mode == 1)
    {
        pos = uPtr(_master)->ActualPosition();
        size = uPtr(_master)->ActualSize();
    }
    else if (Mode == 2)
    {
        ::g::Fuse::Elements::Element* pe = uAs< ::g::Fuse::Elements::Element*>(uPtr(_master)->Parent(), ::TYPES[20/*Fuse.Elements.Element*/]);

        if (pe != NULL)
        {
            pos = uPtr(pe)->ActualPosition();
            size = pe->ActualSize();
        }
    }
    else
    {
        ::g::Uno::Float4x4 m = uPtr(uPtr(_master)->Parent())->GetTransformTo(uPtr(Element)->Parent());
        pos = (ind1 = ::g::Uno::Vector::Transform1(uPtr(_master)->ActualPosition(), m), ::g::Uno::Float2__New2(ind1.X, ind1.Y));
        ::g::Uno::Rect r = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), uPtr(_master)->ActualSize());
        size = ::g::Uno::Rect__Transform(r, m).Size();
    }

    uPtr(Element)->ArrangeMarginBox(pos, ::g::Fuse::LayoutParams__Create(size));
}

// public Fuse.Elements.Element get_Master() [instance] :70
::g::Fuse::Elements::Element* LayoutMasterBoxSizing__LayoutMasterData::Master()
{
    return _master;
}

// public void set_Master(Fuse.Elements.Element value) [instance] :71
void LayoutMasterBoxSizing__LayoutMasterData::Master(::g::Fuse::Elements::Element* value)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "set_Master(Fuse.Elements.Element)");

    if (_master == value)
        return;

    if (_master != NULL)
        uPtr(_master)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    _master = value;

    if (_master != NULL)
        uPtr(_master)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__OnPlaced_fn, this));

    if (uPtr(Element)->IsRootingCompleted())
        ScheduleCheckLayout();
}

// private void OnPlaced(object s, object args) [instance] :134
void LayoutMasterBoxSizing__LayoutMasterData::OnPlaced(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "OnPlaced(object,object)");
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this), -1, 2);
}

// internal void ScheduleCheckLayout() [instance] :90
void LayoutMasterBoxSizing__LayoutMasterData::ScheduleCheckLayout()
{
    uStackFrame __("Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData", "ScheduleCheckLayout()");

    if (!_pendingCheckLayout)
    {
        _pendingCheckLayout = true;
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)LayoutMasterBoxSizing__LayoutMasterData__CheckLayout_fn, this), -1, 2);
    }
}

// public generated LayoutMasterData New() [static] :60
LayoutMasterBoxSizing__LayoutMasterData* LayoutMasterBoxSizing__LayoutMasterData::New1()
{
    LayoutMasterBoxSizing__LayoutMasterData* obj2 = (LayoutMasterBoxSizing__LayoutMasterData*)uNew(LayoutMasterBoxSizing__LayoutMasterData_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutMasterBoxSizing.uno
// ---------------------------------------------------------------------------

// public enum LayoutMasterMode :8
uEnumType* LayoutMasterMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.LayoutMasterMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ParentTransform", 0LL,
        "LocalLayout", 1LL,
        "ParentLayout", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LimitBoxSizing.uno
// --------------------------------------------------------------------

// internal sealed class LimitBoxSizing :6
// {
// static generated LimitBoxSizing() :6
static void LimitBoxSizing__cctor__fn(uType* __type)
{
    LimitBoxSizing::Singleton_ = LimitBoxSizing::New1();
}

static void LimitBoxSizing_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Elements::StandardBoxSizing_typeof());
    type->SetFields(0,
        type, (uintptr_t)&LimitBoxSizing::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LimitBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.LimitBoxSizing", options);
    type->fp_build_ = LimitBoxSizing_build;
    type->fp_ctor_ = (void*)LimitBoxSizing__New1_fn;
    type->fp_cctor_ = LimitBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LimitBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))LimitBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))LimitBoxSizing__CalcMarginSize_fn;
    return type;
}

// public generated LimitBoxSizing() :6
void LimitBoxSizing__ctor_1_fn(LimitBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :25
void LimitBoxSizing__CalcArrangePaddingSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcArrangePaddingSize(element, lp_), void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :10
void LimitBoxSizing__CalcBoxPlacement_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcBoxPlacement(element, position_, lp_), void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :15
void LimitBoxSizing__CalcMarginSize_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RetainXY(!uPtr(element)->HasBit(8388608), !uPtr(element)->HasBit(16777216));
    ::g::Uno::Float2 std = uPtr(::g::Fuse::Elements::StandardBoxSizing::Singleton())->CalcMarginSize(element, nlp);
    ::g::Uno::Float2 c = __this->Limit(element, std);
    return *__retval = c, void();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) :30
void LimitBoxSizing__Limit_fn(LimitBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* std, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Limit(element, *std);
}

// public generated LimitBoxSizing New() :6
void LimitBoxSizing__New1_fn(LimitBoxSizing** __retval)
{
    *__retval = LimitBoxSizing::New1();
}

uSStrong<LimitBoxSizing*> LimitBoxSizing::Singleton_;

// public generated LimitBoxSizing() [instance] :6
void LimitBoxSizing::ctor_1()
{
    ctor_();
}

// private float2 Limit(Fuse.Elements.Element element, float2 std) [instance] :30
::g::Uno::Float2 LimitBoxSizing::Limit(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 std)
{
    uStackFrame __("Fuse.Elements.LimitBoxSizing", "Limit(Fuse.Elements.Element,float2)");

    if (uPtr(element)->HasBit(16777216))
    {
        ::g::Uno::UX::Size height = uPtr(element)->LimitHeight();
        bool known;
        float size = UnitSize(element, height, std.Y, true, &known);
        std.Y = ::g::Uno::Math::Min1(std.Y, size);
    }

    if (uPtr(element)->HasBit(8388608))
    {
        ::g::Uno::UX::Size width = uPtr(element)->LimitWidth();
        bool known1;
        float size1 = UnitSize(element, width, std.X, true, &known1);
        std.X = ::g::Uno::Math::Min1(std.X, size1);
    }

    if (uPtr(element)->SnapToPixels())
        std = uPtr(element)->InternSnap(std);

    return std;
}

// public generated LimitBoxSizing New() [static] :6
LimitBoxSizing* LimitBoxSizing::New1()
{
    LimitBoxSizing* obj1 = (LimitBoxSizing*)uNew(LimitBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/BoxSizing.uno
// ---------------------------------------------------------------

// internal sealed class NoImplicitMaxBoxSizing :416
// {
// static generated NoImplicitMaxBoxSizing() :416
static void NoImplicitMaxBoxSizing__cctor_1_fn(uType* __type)
{
    NoImplicitMaxBoxSizing::Singleton1_ = NoImplicitMaxBoxSizing::New2();
}

static void NoImplicitMaxBoxSizing_build(uType* type)
{
    type->SetFields(2,
        type, (uintptr_t)&NoImplicitMaxBoxSizing::Singleton1_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::StandardBoxSizing_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NoImplicitMaxBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.NoImplicitMaxBoxSizing", options);
    type->fp_build_ = NoImplicitMaxBoxSizing_build;
    type->fp_ctor_ = (void*)NoImplicitMaxBoxSizing__New2_fn;
    type->fp_cctor_ = NoImplicitMaxBoxSizing__cctor_1_fn;
    return type;
}

// public NoImplicitMaxBoxSizing() :420
void NoImplicitMaxBoxSizing__ctor_2_fn(NoImplicitMaxBoxSizing* __this)
{
    __this->ctor_2();
}

// public NoImplicitMaxBoxSizing New() :420
void NoImplicitMaxBoxSizing__New2_fn(NoImplicitMaxBoxSizing** __retval)
{
    *__retval = NoImplicitMaxBoxSizing::New2();
}

uSStrong<NoImplicitMaxBoxSizing*> NoImplicitMaxBoxSizing::Singleton1_;

// public NoImplicitMaxBoxSizing() [instance] :420
void NoImplicitMaxBoxSizing::ctor_2()
{
    ctor_1();
    ImplicitMax = false;
}

// public NoImplicitMaxBoxSizing New() [static] :420
NoImplicitMaxBoxSizing* NoImplicitMaxBoxSizing::New2()
{
    NoImplicitMaxBoxSizing* obj1 = (NoImplicitMaxBoxSizing*)uNew(NoImplicitMaxBoxSizing_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Transforms.uno
// ----------------------------------------------------------------

// private class TranslationModes.OffsetMode :10
// {
static void TranslationModes__OffsetMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__OffsetMode_type, interface1));
}

TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof()
{
    static uSStrong<TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__OffsetMode);
    options.TypeSize = sizeof(TranslationModes__OffsetMode_type);
    type = (TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.OffsetMode", options);
    type->fp_build_ = TranslationModes__OffsetMode_build;
    type->fp_GetDstOffset = TranslationModes__OffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = TranslationModes__OffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__OffsetMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__OffsetMode__Unsubscribe_fn;
    return type;
}

// public generated OffsetMode() :10
void TranslationModes__OffsetMode__ctor__fn(TranslationModes__OffsetMode* __this)
{
    __this->ctor_();
}

// public float3 GetAbsVector(Fuse.Translation t) :12
void TranslationModes__OffsetMode__GetAbsVector_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetAbsVector(t);
}

// protected virtual float3 GetDstOffset(Fuse.Elements.Element e) :62
void TranslationModes__OffsetMode__GetDstOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// protected virtual float3 GetSrcOffset(Fuse.Elements.Element e) :63
void TranslationModes__OffsetMode__GetSrcOffset_fn(TranslationModes__OffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public object Subscribe(Fuse.ITransformRelative transform) :41
void TranslationModes__OffsetMode__Subscribe_fn(TranslationModes__OffsetMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :53
void TranslationModes__OffsetMode__Unsubscribe_fn(TranslationModes__OffsetMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated OffsetMode() [instance] :10
void TranslationModes__OffsetMode::ctor_()
{
}

// public float3 GetAbsVector(Fuse.Translation t) [instance] :12
::g::Uno::Float3 TranslationModes__OffsetMode::GetAbsVector(::g::Fuse::Translation* t)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "GetAbsVector(Fuse.Translation)");
    ::g::Uno::Float4 ind2;
    ::g::Fuse::Visual* n = uPtr(t)->RelativeNode();
    ::g::Fuse::Elements::Element* dstElement = uAs< ::g::Fuse::Elements::Element*>(n, ::TYPES[20/*Fuse.Elements.Element*/]);
    ::g::Uno::Float3 dst = ::g::Uno::Float3__New1(0.0f);

    if (dstElement != NULL)
        dst = GetDstOffset(dstElement);

    if ((t->Parent() == NULL) || (uPtr(t->Parent())->Parent() == NULL))
        return ::g::Uno::Float3__New1(0.0f);

    ::g::Uno::Float4x4 m = ::g::Uno::Matrix::Mul8(uPtr(t->RelativeNode())->WorldTransform(), uPtr(uPtr(t->Parent())->Parent())->WorldTransformInverse());
    ind2 = ::g::Uno::Vector::Transform4(dst, m);
    ::g::Uno::Float3 localP = ::g::Uno::Float3__New2(ind2.X, ind2.Y, ind2.Z);
    ::g::Uno::Float3 localOff = ::g::Uno::Float3__New1(0.0f);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(t->Parent(), ::TYPES[20/*Fuse.Elements.Element*/]);

    if (elm != NULL)
        localOff = ::g::Uno::Float3__op_UnaryNegation(::g::Uno::Float3__op_Addition2(::g::Uno::Float3__New4(uPtr(elm)->ActualPosition(), 0.0f), GetSrcOffset(elm)));

    ::g::Uno::Float3 worldChange = ::g::Uno::Float3__op_Addition2(localP, localOff);
    return ::g::Uno::Float3__op_Multiply2(worldChange, t->Vector());
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :41
uObject* TranslationModes__OffsetMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "Subscribe(Fuse.ITransformRelative)");
    TranslationModes__OffsetMode__Subscriptions* collection1;
    collection1 = TranslationModes__OffsetMode__Subscriptions::New1();
    uPtr(collection1)->Relative = ::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/]));
    uPtr(collection1)->TargetParent = uPtr(::g::Fuse::ITransformRelative::Target(uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/])))->Parent();
    uPtr(collection1)->Target = uAs< ::g::Fuse::Elements::Element*>(::g::Fuse::ITransformRelative::Target(uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/])), ::TYPES[20/*Fuse.Elements.Element*/]);
    TranslationModes__OffsetMode__Subscriptions* s = collection1;
    uPtr(uPtr(s)->Relative)->add_WorldTransformInvalidated(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], uInterface(transform, ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
    uPtr(s->TargetParent)->add_WorldTransformInvalidated(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], uInterface(transform, ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    if (s->Target != NULL)
        uPtr(uPtr(s)->Target)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return s;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :53
void TranslationModes__OffsetMode::Unsubscribe(uObject* transform, uObject* sub)
{
    uStackFrame __("Fuse.Elements.TranslationModes.OffsetMode", "Unsubscribe(Fuse.ITransformRelative,object)");
    TranslationModes__OffsetMode__Subscriptions* s = uAs<TranslationModes__OffsetMode__Subscriptions*>(sub, TranslationModes__OffsetMode__Subscriptions_typeof());
    uPtr(uPtr(s)->Relative)->remove_WorldTransformInvalidated(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
    uPtr(s->TargetParent)->remove_WorldTransformInvalidated(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], uInterface(transform, ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    if (s->Target != NULL)
        uPtr(uPtr(s)->Target)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// internal enum OptionalSimpleAlignment :152
uEnumType* OptionalSimpleAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.OptionalSimpleAlignment", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Begin", 1LL,
        "Center", 2LL,
        "End", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls/1.9.0/Viewport.uno
// --------------------------------------------------------------

// public enum PerspectiveRelativeToMode :21
uEnumType* PerspectiveRelativeToMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.PerspectiveRelativeToMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Local", 0LL,
        "Width", 1LL,
        "Height", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Transforms.uno
// ----------------------------------------------------------------

// private sealed class TranslationModes.PositionOffsetMode :66
// {
static void TranslationModes__PositionOffsetMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
}

::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__PositionOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::TranslationModes__OffsetMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__PositionOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.PositionOffsetMode", options);
    type->fp_build_ = TranslationModes__PositionOffsetMode_build;
    type->fp_ctor_ = (void*)TranslationModes__PositionOffsetMode__New2_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Elements::TranslationModes__OffsetMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Elements::TranslationModes__OffsetMode__Unsubscribe_fn;
    return type;
}

// public generated PositionOffsetMode() :66
void TranslationModes__PositionOffsetMode__ctor_1_fn(TranslationModes__PositionOffsetMode* __this)
{
    __this->ctor_1();
}

// public generated PositionOffsetMode New() :66
void TranslationModes__PositionOffsetMode__New2_fn(TranslationModes__PositionOffsetMode** __retval)
{
    *__retval = TranslationModes__PositionOffsetMode::New2();
}

// public generated PositionOffsetMode() [instance] :66
void TranslationModes__PositionOffsetMode::ctor_1()
{
    ctor_();
}

// public generated PositionOffsetMode New() [static] :66
TranslationModes__PositionOffsetMode* TranslationModes__PositionOffsetMode::New2()
{
    TranslationModes__PositionOffsetMode* obj1 = (TranslationModes__PositionOffsetMode*)uNew(TranslationModes__PositionOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Layout.uno
// --------------------------------------------------------------------

// public sealed class PreplacementArgs :19
// {
static void PreplacementArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(PreplacementArgs, _HasPrev), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_HasPrev", NULL, (void*)PreplacementArgs__get_HasPrev_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

uType* PreplacementArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PreplacementArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.PreplacementArgs", options);
    type->fp_build_ = PreplacementArgs_build;
    return type;
}

// internal PreplacementArgs(bool hasPrev) :24
void PreplacementArgs__ctor_1_fn(PreplacementArgs* __this, bool* hasPrev)
{
    __this->ctor_1(*hasPrev);
}

// public generated bool get_HasPrev() :22
void PreplacementArgs__get_HasPrev_fn(PreplacementArgs* __this, bool* __retval)
{
    *__retval = __this->HasPrev();
}

// private generated void set_HasPrev(bool value) :22
void PreplacementArgs__set_HasPrev_fn(PreplacementArgs* __this, bool* value)
{
    __this->HasPrev(*value);
}

// internal PreplacementArgs New(bool hasPrev) :24
void PreplacementArgs__New2_fn(bool* hasPrev, PreplacementArgs** __retval)
{
    *__retval = PreplacementArgs::New2(*hasPrev);
}

// internal PreplacementArgs(bool hasPrev) [instance] :24
void PreplacementArgs::ctor_1(bool hasPrev)
{
    ctor_();
    HasPrev(hasPrev);
}

// public generated bool get_HasPrev() [instance] :22
bool PreplacementArgs::HasPrev()
{
    return _HasPrev;
}

// private generated void set_HasPrev(bool value) [instance] :22
void PreplacementArgs::HasPrev(bool value)
{
    _HasPrev = value;
}

// internal PreplacementArgs New(bool hasPrev) [static] :24
PreplacementArgs* PreplacementArgs::New2(bool hasPrev)
{
    PreplacementArgs* obj1 = (PreplacementArgs*)uNew(PreplacementArgs_typeof());
    obj1->ctor_1(hasPrev);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Layout.uno
// --------------------------------------------------------------------

// public delegate void PreplacementHandler(object sender, Fuse.Elements.PreplacementArgs args) :30
uDelegateType* PreplacementHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Elements.PreplacementHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Elements::PreplacementArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Transforms.uno
// ----------------------------------------------------------------

// private sealed class TranslationModes.RelativeResizeChangeMode :126
// {
static void TranslationModes__RelativeResizeChangeMode_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(TranslationModes__RelativeResizeChangeMode_type, interface0));
}

TranslationModes__RelativeResizeChangeMode_type* TranslationModes__RelativeResizeChangeMode_typeof()
{
    static uSStrong<TranslationModes__RelativeResizeChangeMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TranslationModes__RelativeResizeChangeMode);
    options.TypeSize = sizeof(TranslationModes__RelativeResizeChangeMode_type);
    type = (TranslationModes__RelativeResizeChangeMode_type*)uClassType::New("Fuse.Elements.TranslationModes.RelativeResizeChangeMode", options);
    type->fp_build_ = TranslationModes__RelativeResizeChangeMode_build;
    type->fp_ctor_ = (void*)TranslationModes__RelativeResizeChangeMode__New1_fn;
    type->interface0.fp_GetSizeChange = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Uno::Float2*, bool*))TranslationModes__RelativeResizeChangeMode__GetSizeChange_fn;
    return type;
}

// public generated RelativeResizeChangeMode() :126
void TranslationModes__RelativeResizeChangeMode__ctor__fn(TranslationModes__RelativeResizeChangeMode* __this)
{
    __this->ctor_();
}

// public bool GetSizeChange(Fuse.Visual target, Fuse.Visual relative, float2& baseSize, float2& deltaSize) :128
void TranslationModes__RelativeResizeChangeMode__GetSizeChange_fn(TranslationModes__RelativeResizeChangeMode* __this, ::g::Fuse::Visual* target, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize, bool* __retval)
{
    *__retval = __this->GetSizeChange(target, relative, baseSize, deltaSize);
}

// public generated RelativeResizeChangeMode New() :126
void TranslationModes__RelativeResizeChangeMode__New1_fn(TranslationModes__RelativeResizeChangeMode** __retval)
{
    *__retval = TranslationModes__RelativeResizeChangeMode::New1();
}

// public generated RelativeResizeChangeMode() [instance] :126
void TranslationModes__RelativeResizeChangeMode::ctor_()
{
}

// public bool GetSizeChange(Fuse.Visual target, Fuse.Visual relative, float2& baseSize, float2& deltaSize) [instance] :128
bool TranslationModes__RelativeResizeChangeMode::GetSizeChange(::g::Fuse::Visual* target, ::g::Fuse::Visual* relative, ::g::Uno::Float2* baseSize, ::g::Uno::Float2* deltaSize)
{
    uStackFrame __("Fuse.Elements.TranslationModes.RelativeResizeChangeMode", "GetSizeChange(Fuse.Visual,Fuse.Visual,float2&,float2&)");

    if (!uIs(target, ::TYPES[20/*Fuse.Elements.Element*/]) || !uIs(relative, ::TYPES[20/*Fuse.Elements.Element*/]))
    {
        *baseSize = ::g::Uno::Float2__New1(0.0f);
        *deltaSize = ::g::Uno::Float2__New1(0.0f);
        return false;
    }

    ::g::Uno::Float2 targetSize = uPtr(uAs< ::g::Fuse::Elements::Element*>(target, ::TYPES[20/*Fuse.Elements.Element*/]))->IntendedSize();
    ::g::Uno::Float2 relativeSize = uPtr(uAs< ::g::Fuse::Elements::Element*>(relative, ::TYPES[20/*Fuse.Elements.Element*/]))->ActualSize();
    *deltaSize = ::g::Uno::Float2__op_Subtraction2(relativeSize, targetSize);
    *baseSize = targetSize;
    return true;
}

// public generated RelativeResizeChangeMode New() [static] :126
TranslationModes__RelativeResizeChangeMode* TranslationModes__RelativeResizeChangeMode::New1()
{
    TranslationModes__RelativeResizeChangeMode* obj1 = (TranslationModes__RelativeResizeChangeMode*)uNew(TranslationModes__RelativeResizeChangeMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// internal enum SimpleAlignment :145
uEnumType* SimpleAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.SimpleAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Begin", 0LL,
        "Center", 1LL,
        "End", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Caching/ElementBatcher.uno
// ----------------------------------------------------------------------------

// internal sealed class SingleVisualDrawable :13
// {
static void SingleVisualDrawable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::IElementBatchDrawable_typeof(), offsetof(SingleVisualDrawable_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(SingleVisualDrawable, _elm), 0);
}

SingleVisualDrawable_type* SingleVisualDrawable_typeof()
{
    static uSStrong<SingleVisualDrawable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SingleVisualDrawable);
    options.TypeSize = sizeof(SingleVisualDrawable_type);
    type = (SingleVisualDrawable_type*)uClassType::New("Fuse.Elements.SingleVisualDrawable", options);
    type->fp_build_ = SingleVisualDrawable_build;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*))SingleVisualDrawable__Draw_fn;
    return type;
}

// public SingleVisualDrawable(Fuse.Visual elm) :16
void SingleVisualDrawable__ctor__fn(SingleVisualDrawable* __this, ::g::Fuse::Visual* elm)
{
    __this->ctor_(elm);
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) :21
void SingleVisualDrawable__Draw_fn(SingleVisualDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace)
{
    __this->Draw(dc, *localToClipTransform, *scissorRectInClipSpace);
}

// public SingleVisualDrawable New(Fuse.Visual elm) :16
void SingleVisualDrawable__New1_fn(::g::Fuse::Visual* elm, SingleVisualDrawable** __retval)
{
    *__retval = SingleVisualDrawable::New1(elm);
}

// public SingleVisualDrawable(Fuse.Visual elm) [instance] :16
void SingleVisualDrawable::ctor_(::g::Fuse::Visual* elm)
{
    _elm = elm;
}

// public void Draw(Fuse.DrawContext dc, float4x4 localToClipTransform, Uno.Rect scissorRectInClipSpace) [instance] :21
void SingleVisualDrawable::Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace)
{
    uStackFrame __("Fuse.Elements.SingleVisualDrawable", "Draw(Fuse.DrawContext,float4x4,Uno.Rect)");
    uPtr(_elm)->Draw(dc);
}

// public SingleVisualDrawable New(Fuse.Visual elm) [static] :16
SingleVisualDrawable* SingleVisualDrawable::New1(::g::Fuse::Visual* elm)
{
    SingleVisualDrawable* obj1 = (SingleVisualDrawable*)uNew(SingleVisualDrawable_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Transforms.uno
// ----------------------------------------------------------------

// private sealed class TranslationModes.SizeFactorMode :88
// {
static void TranslationModes__SizeFactorMode_build(uType* type)
{
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[26] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[27] = ::g::Fuse::ITransformRelative_typeof();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::IScalingMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(TranslationModes__SizeFactorMode_type, interface1));
}

TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof()
{
    static uSStrong<TranslationModes__SizeFactorMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__SizeFactorMode);
    options.TypeSize = sizeof(TranslationModes__SizeFactorMode_type);
    type = (TranslationModes__SizeFactorMode_type*)uClassType::New("Fuse.Elements.TranslationModes.SizeFactorMode", options);
    type->fp_build_ = TranslationModes__SizeFactorMode_build;
    type->fp_ctor_ = (void*)TranslationModes__SizeFactorMode__New1_fn;
    type->interface0.fp_GetScaleVector = (void(*)(uObject*, ::g::Fuse::Scaling*, ::g::Uno::Float3*))TranslationModes__SizeFactorMode__GetScaleVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))TranslationModes__SizeFactorMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))TranslationModes__SizeFactorMode__Unsubscribe_fn;
    return type;
}

// public generated SizeFactorMode() :88
void TranslationModes__SizeFactorMode__ctor__fn(TranslationModes__SizeFactorMode* __this)
{
    __this->ctor_();
}

// public float3 GetScaleVector(Fuse.Scaling t) :90
void TranslationModes__SizeFactorMode__GetScaleVector_fn(TranslationModes__SizeFactorMode* __this, ::g::Fuse::Scaling* t, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetScaleVector(t);
}

// public generated SizeFactorMode New() :88
void TranslationModes__SizeFactorMode__New1_fn(TranslationModes__SizeFactorMode** __retval)
{
    *__retval = TranslationModes__SizeFactorMode::New1();
}

// public object Subscribe(Fuse.ITransformRelative transform) :106
void TranslationModes__SizeFactorMode__Subscribe_fn(TranslationModes__SizeFactorMode* __this, uObject* transform, uObject** __retval)
{
    *__retval = __this->Subscribe(transform);
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) :113
void TranslationModes__SizeFactorMode__Unsubscribe_fn(TranslationModes__SizeFactorMode* __this, uObject* transform, uObject* sub)
{
    __this->Unsubscribe(transform, sub);
}

// public generated SizeFactorMode() [instance] :88
void TranslationModes__SizeFactorMode::ctor_()
{
}

// public float3 GetScaleVector(Fuse.Scaling t) [instance] :90
::g::Uno::Float3 TranslationModes__SizeFactorMode::GetScaleVector(::g::Fuse::Scaling* t)
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "GetScaleVector(Fuse.Scaling)");
    ::g::Fuse::Elements::Element* dst = uAs< ::g::Fuse::Elements::Element*>(uPtr(t)->RelativeNode(), ::TYPES[20/*Fuse.Elements.Element*/]);
    ::g::Fuse::Elements::Element* src = uAs< ::g::Fuse::Elements::Element*>(t->Parent(), ::TYPES[20/*Fuse.Elements.Element*/]);

    if ((dst == NULL) || (src == NULL))
        return ::g::Uno::Float3__New1(1.0f);

    ::g::Uno::Float2 sz = uPtr(src)->ActualSize();
    float zeroTolerance = 1e-05f;

    if ((sz.X < 1e-05f) || (sz.Y < 1e-05f))
        return ::g::Uno::Float3__New1(1.0f);

    ::g::Uno::Float3 rel = ::g::Uno::Float3__op_Subtraction2(::g::Uno::Float3__New4(::g::Uno::Float2__op_Division2(uPtr(dst)->ActualSize(), sz), 1.0f), ::g::Uno::Float3__New1(1.0f));
    return ::g::Uno::Float3__op_Addition2(::g::Uno::Float3__op_Multiply2(rel, t->Vector()), ::g::Uno::Float3__New1(1.0f));
}

// public object Subscribe(Fuse.ITransformRelative transform) [instance] :106
uObject* TranslationModes__SizeFactorMode::Subscribe(uObject* transform)
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "Subscribe(Fuse.ITransformRelative)");
    uObject* n = uAs<uObject*>(::g::Fuse::ITransformRelative::RelativeNode(uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/])), ::TYPES[26/*Fuse.IActualPlacement*/]);

    if (n != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(n), ::TYPES[26/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));

    return n;
}

// public void Unsubscribe(Fuse.ITransformRelative transform, object sub) [instance] :113
void TranslationModes__SizeFactorMode::Unsubscribe(uObject* transform, uObject* sub)
{
    uStackFrame __("Fuse.Elements.TranslationModes.SizeFactorMode", "Unsubscribe(Fuse.ITransformRelative,object)");

    if (sub != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(uAs<uObject*>(sub, ::TYPES[26/*Fuse.IActualPlacement*/])), ::TYPES[26/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], uInterface(uPtr(transform), ::TYPES[27/*Fuse.ITransformRelative*/]), offsetof(::g::Fuse::ITransformRelative, fp_OnTransformChanged)));
}

// public generated SizeFactorMode New() [static] :88
TranslationModes__SizeFactorMode* TranslationModes__SizeFactorMode::New1()
{
    TranslationModes__SizeFactorMode* obj1 = (TranslationModes__SizeFactorMode*)uNew(TranslationModes__SizeFactorMode_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/BoxSizing.uno
// ---------------------------------------------------------------

// internal class StandardBoxSizing :259
// {
// static generated StandardBoxSizing() :259
static void StandardBoxSizing__cctor__fn(uType* __type)
{
    StandardBoxSizing::Singleton_ = StandardBoxSizing::New1();
}

static void StandardBoxSizing_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(StandardBoxSizing, ImplicitMax), 0,
        ::g::Uno::Float_typeof(), offsetof(StandardBoxSizing, pixelEpsilon), 0,
        type, (uintptr_t)&StandardBoxSizing::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof()
{
    static uSStrong< ::g::Fuse::Elements::BoxSizing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::BoxSizing_typeof();
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StandardBoxSizing);
    options.TypeSize = sizeof(::g::Fuse::Elements::BoxSizing_type);
    type = (::g::Fuse::Elements::BoxSizing_type*)uClassType::New("Fuse.Elements.StandardBoxSizing", options);
    type->fp_build_ = StandardBoxSizing_build;
    type->fp_ctor_ = (void*)StandardBoxSizing__New1_fn;
    type->fp_cctor_ = StandardBoxSizing__cctor__fn;
    type->fp_CalcArrangePaddingSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StandardBoxSizing__CalcArrangePaddingSize_fn;
    type->fp_CalcBoxPlacement = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*))StandardBoxSizing__CalcBoxPlacement_fn;
    type->fp_CalcMarginSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StandardBoxSizing__CalcMarginSize_fn;
    type->fp_IsContentRelativeSize = (void(*)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int32_t*))StandardBoxSizing__IsContentRelativeSize_fn;
    return type;
}

// public generated StandardBoxSizing() :259
void StandardBoxSizing__ctor_1_fn(StandardBoxSizing* __this)
{
    __this->ctor_1();
}

// public override sealed float2 CalcArrangePaddingSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :363
void StandardBoxSizing__CalcArrangePaddingSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcArrangePaddingSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams c = __this->GetConstraints(element, lp_, __this->ImplicitMax ? 2 : 0);
    ::g::Fuse::LayoutParams child = lp_.CloneAndDerive();
    child.BoxConstrain(c);
    ::g::Uno::Float2 sz = child.Size();

    if (!child.HasSize())
    {
        ::g::Uno::Float4 pad = uPtr(element)->Padding();
        bool hasPad = element->HasBit(2048);

        if (hasPad)
            child.RemoveSize1(pad);

        sz = element->InternGetContentSize(child);
        sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(pad.X, pad.Y), ::g::Uno::Float2__New2(pad.Z, pad.W)));
    }

    sz = c.PointConstrain(sz);

    if (uPtr(element)->SnapToPixels())
        sz = __this->SnapUp(element, sz);

    return *__retval = sz, void();
}

// public override sealed Fuse.Elements.BoxPlacement CalcBoxPlacement(Fuse.Elements.Element element, float2 position, Fuse.LayoutParams lp) :263
void StandardBoxSizing__CalcBoxPlacement_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Fuse::Elements::BoxPlacement* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcBoxPlacement(Fuse.Elements.Element,float2,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float4 margin = uPtr(element)->Margin();
    ::g::Uno::Float2 avSize = lp_.Size();
    ::g::Uno::Float2 marginBox = element->GetMarginSize(lp_);
    ::g::Uno::Float2 paddingBox = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(marginBox, ::g::Uno::Float2__New2(margin.X, margin.Y)), ::g::Uno::Float2__New2(margin.Z, margin.W));
    avSize = ::g::Uno::Float2__op_Subtraction2(avSize, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(margin.X, margin.Y), ::g::Uno::Float2__New2(margin.Z, margin.W)));
    avSize = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), avSize);
    paddingBox = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), paddingBox);
    ::g::Uno::Float2 s = ::g::Uno::Float2__New1(0.0f);

    if (element->Visibility() != 1)
        s = paddingBox;

    ::g::Uno::Float2 p = position_;
    int32_t halign = __this->EffectiveHorizontalAlignment(element);

    if (!lp_.HasX())
        halign = 0;

    int32_t valign = __this->EffectiveVerticalAlignment(element);

    if (!lp_.HasY())
        valign = 0;

    p.X = (p.X + margin.X);

    switch (halign)
    {
        case 0:
            break;
        case 1:
        {
            p.X = (p.X + (avSize.X * 0.5f));
            break;
        }
        case 2:
        {
            p.X = (p.X + avSize.X);
            break;
        }
    }

    p.Y = (p.Y + margin.Y);

    switch (valign)
    {
        case 0:
            break;
        case 1:
        {
            p.Y = (p.Y + (avSize.Y * 0.5f));
            break;
        }
        case 2:
        {
            p.Y = (p.Y + avSize.Y);
            break;
        }
    }

    bool ignore;

    if (element->HasBit(8192))
    {
        ::g::Uno::UX::Size2 offset = uPtr(element)->Offset();
        ::g::Uno::Float2 o = ::g::Uno::Float2__New2(__this->UnitSize(element, offset.X, avSize.X, lp_.HasX(), &ignore), __this->UnitSize(element, offset.Y, avSize.Y, lp_.HasY(), &ignore));
        p = ::g::Uno::Float2__op_Addition2(p, o);
    }

    if (element->HasBit(16384))
    {
        ::g::Uno::UX::Size o1 = uPtr(element)->X();
        p.X = (p.X + __this->UnitSize(element, o1, avSize.X, lp_.HasX(), &ignore));
    }

    if (element->HasBit(32768))
    {
        ::g::Uno::UX::Size o2 = uPtr(element)->Y();
        p.Y = (p.Y + __this->UnitSize(element, o2, avSize.Y, lp_.HasY(), &ignore));
    }

    ::g::Uno::UX::Size2 anchor;
    __this->EffectiveAnchor(element, halign, valign, &anchor);
    element->ActualAnchor(::g::Uno::Float2__New2(__this->UnitSize(element, anchor.X, s.X, true, &ignore), __this->UnitSize(element, anchor.Y, s.Y, true, &ignore)));
    p = ::g::Uno::Float2__op_Subtraction2(p, element->ActualAnchor());
    ::g::Fuse::Elements::BoxPlacement bp;
    bp.MarginBox = marginBox;
    bp.Position = p;
    bp.Size = s;
    return *__retval = bp, void();
}

// public override sealed float2 CalcMarginSize(Fuse.Elements.Element element, Fuse.LayoutParams lp) :345
void StandardBoxSizing__CalcMarginSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "CalcMarginSize(Fuse.Elements.Element,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (uPtr(element)->Visibility() == 1)
        return *__retval = ::g::Uno::Float2__New1(0.0f), void();

    ::g::Uno::Float4 margin = ::g::Uno::Float4__New1(0.0f);

    if (uPtr(element)->HasBit(1024))
    {
        margin = uPtr(element)->Margin();
        lp_ = lp_.Clone();
        lp_.RemoveSize1(margin);
    }

    ::g::Uno::Float2 sz = uPtr(element)->GetArrangePaddingSize(lp_);
    sz = ::g::Uno::Float2__op_Addition2(sz, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(margin.X, margin.Y), ::g::Uno::Float2__New2(margin.Z, margin.W)));
    return *__retval = sz, void();
}

// public override sealed Fuse.LayoutDependent IsContentRelativeSize(Fuse.Elements.Element element) :398
void StandardBoxSizing__IsContentRelativeSize_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "IsContentRelativeSize(Fuse.Elements.Element)");
    bool ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(uPtr(element)->Alignment()) != 0;
    bool w = !element->Width().IsAuto();
    bool va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(element->Alignment()) != 0;
    bool h = !element->Height().IsAuto();

    if (w && h)
        return *__retval = 0, void();

    if (ha || va)
        return *__retval = 4, void();

    return *__retval = 2, void();
}

// public generated StandardBoxSizing New() :259
void StandardBoxSizing__New1_fn(StandardBoxSizing** __retval)
{
    *__retval = StandardBoxSizing::New1();
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) :392
void StandardBoxSizing__SnapUp_fn(StandardBoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp(element, *p);
}

uSStrong<StandardBoxSizing*> StandardBoxSizing::Singleton_;

// public generated StandardBoxSizing() [instance] :259
void StandardBoxSizing::ctor_1()
{
    ImplicitMax = true;
    pixelEpsilon = 0.005f;
    ctor_();
}

// private float2 SnapUp(Fuse.Elements.Element element, float2 p) [instance] :392
::g::Uno::Float2 StandardBoxSizing::SnapUp(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Elements.StandardBoxSizing", "SnapUp(Fuse.Elements.Element,float2)");
    ::g::Uno::Float2 s = ::g::Uno::Float2__op_Division1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1(p, uPtr(element)->AbsoluteZoom()), pixelEpsilon)), uPtr(element)->AbsoluteZoom());
    return s;
}

// public generated StandardBoxSizing New() [static] :259
StandardBoxSizing* StandardBoxSizing::New1()
{
    StandardBoxSizing* obj1 = (StandardBoxSizing*)uNew(StandardBoxSizing_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// public enum StretchDirection :191
uEnumType* StretchDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchDirection", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Both", 0LL,
        "UpOnly", 1LL,
        "DownOnly", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// public enum StretchMode :170
uEnumType* StretchMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchMode", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "PointPrecise", 0LL,
        "PixelPrecise", 1LL,
        "PointPrefer", 2LL,
        "Fill", 3LL,
        "Scale9", 4LL,
        "Uniform", 5LL,
        "UniformToFill", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// public enum StretchSizing :204
uEnumType* StretchSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.StretchSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Zero", 0LL,
        "Natural", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno
// ---------------------------------------------------------------------

// private sealed class LayoutFunction.Subscription :37
// {
static void LayoutFunction__Subscription_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Invalid value for LayoutFunction: ");
    ::STRINGS[17] = uString::Const("/usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno");
    ::STRINGS[18] = uString::Const("OnNewData");
    ::TYPES[28] = ::g::Uno::IDisposable_typeof();
    ::TYPES[29] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[20] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[30] = ::g::Fuse::LostMarginBoxHandler_typeof();
    type->SetInterfaces(
        ::TYPES[28/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[29/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Elements::LayoutFunction_typeof(), offsetof(LayoutFunction__Subscription, _lf), 0,
        ::TYPES[29/*Fuse.Reactive.IListener*/], offsetof(LayoutFunction__Subscription, _listener), 0,
        ::TYPES[28/*Uno.IDisposable*/], offsetof(LayoutFunction__Subscription, _sub), 0,
        ::TYPES[20/*Fuse.Elements.Element*/], offsetof(LayoutFunction__Subscription, _element), 0);
}

::g::Fuse::Reactive::InnerListener_type* LayoutFunction__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LayoutFunction__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Elements.LayoutFunction.Subscription", options);
    type->fp_build_ = LayoutFunction__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))LayoutFunction__Subscription__Dispose_fn;
    type->fp_OnLostData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*))LayoutFunction__Subscription__OnLostData_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))LayoutFunction__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))LayoutFunction__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :43
void LayoutFunction__Subscription__ctor_1_fn(LayoutFunction__Subscription* __this, ::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener)
{
    __this->ctor_1(lf, context, listener);
}

// public override sealed void Dispose() :105
void LayoutFunction__Subscription__Dispose_fn(LayoutFunction__Subscription* __this)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_lf = NULL;
    __this->UnsubscribeElement();

    if (__this->_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_sub), ::TYPES[28/*Uno.IDisposable*/]));
        __this->_sub = NULL;
    }
}

// public Subscription New(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :43
void LayoutFunction__Subscription__New1_fn(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener, LayoutFunction__Subscription** __retval)
{
    *__retval = LayoutFunction__Subscription::New1(lf, context, listener);
}

// protected override sealed void OnLostData(Fuse.Reactive.IExpression source) :79
void LayoutFunction__Subscription__OnLostData_fn(LayoutFunction__Subscription* __this, uObject* source)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.Subscription", "OnLostData(Fuse.Reactive.IExpression)");
    __this->UnsubscribeElement();
    ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[29/*Fuse.Reactive.IListener*/]), (uObject*)__this->_lf);
}

// private void OnLostMarginBox(object sender, Fuse.LostMarginBoxArgs args) :90
void LayoutFunction__Subscription__OnLostMarginBox_fn(LayoutFunction__Subscription* __this, uObject* sender, ::g::Fuse::LostMarginBoxArgs* args)
{
    __this->OnLostMarginBox(sender, args);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object elmObj) :51
void LayoutFunction__Subscription__OnNewData_fn(LayoutFunction__Subscription* __this, uObject* source, uObject* elmObj)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    __this->UnsubscribeElement();
    __this->_element = uAs< ::g::Fuse::Elements::Element*>(elmObj, ::TYPES[20/*Fuse.Elements.Element*/]);

    if (__this->_element != NULL)
    {
        uPtr(__this->_element)->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutFunction__Subscription__OnPlaced_fn, __this));
        uPtr(__this->_element)->add_LostMarginBox(uDelegate::New(::TYPES[30/*Fuse.LostMarginBoxHandler*/], (void*)LayoutFunction__Subscription__OnLostMarginBox_fn, __this));

        if (uPtr(__this->_element)->HasMarginBox())
            ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[29/*Fuse.Reactive.IListener*/]), (uObject*)__this->_lf, uPtr(__this->_lf)->GetCurrentValue(__this->_element));
        else
            ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[29/*Fuse.Reactive.IListener*/]), (uObject*)__this->_lf);

        return;
    }

    uObject* value;

    if (uPtr(__this->_lf)->TryComputeAlternate(elmObj, &value))
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[29/*Fuse.Reactive.IListener*/]), (uObject*)__this->_lf, value);
        return;
    }

    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition1(::STRINGS[16/*"Invalid val...*/], elmObj), __this, ::STRINGS[17/*"/usr/local/...*/], 75, ::STRINGS[18/*"OnNewData"*/], NULL);
    ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(__this->_listener), ::TYPES[29/*Fuse.Reactive.IListener*/]), (uObject*)__this->_lf);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) :85
void LayoutFunction__Subscription__OnPlaced_fn(LayoutFunction__Subscription* __this, uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    __this->OnPlaced(sender, args);
}

// private void UnsubscribeElement() :95
void LayoutFunction__Subscription__UnsubscribeElement_fn(LayoutFunction__Subscription* __this)
{
    __this->UnsubscribeElement();
}

// public Subscription(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :43
void LayoutFunction__Subscription::ctor_1(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.Subscription", ".ctor(Fuse.Elements.LayoutFunction,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_();
    _lf = lf;
    _listener = listener;
    _sub = uPtr(uPtr(_lf)->Element)->Subscribe(context, (uObject*)this);
}

// private void OnLostMarginBox(object sender, Fuse.LostMarginBoxArgs args) [instance] :90
void LayoutFunction__Subscription::OnLostMarginBox(uObject* sender, ::g::Fuse::LostMarginBoxArgs* args)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.Subscription", "OnLostMarginBox(object,Fuse.LostMarginBoxArgs)");
    ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[29/*Fuse.Reactive.IListener*/]), (uObject*)_lf);
}

// private void OnPlaced(object sender, Fuse.PlacedArgs args) [instance] :85
void LayoutFunction__Subscription::OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args)
{
    uStackFrame __("Fuse.Elements.LayoutFunction.Subscription", "OnPlaced(object,Fuse.PlacedArgs)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[29/*Fuse.Reactive.IListener*/]), (uObject*)_lf, uPtr(_lf)->GetValue(args));
}

// private void UnsubscribeElement() [instance] :95
void LayoutFunction__Subscription::UnsubscribeElement()
{
    uStackFrame __("Fuse.Elements.LayoutFunction.Subscription", "UnsubscribeElement()");

    if (_element != NULL)
    {
        uPtr(_element)->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)LayoutFunction__Subscription__OnPlaced_fn, this));
        uPtr(_element)->remove_LostMarginBox(uDelegate::New(::TYPES[30/*Fuse.LostMarginBoxHandler*/], (void*)LayoutFunction__Subscription__OnLostMarginBox_fn, this));
        _element = NULL;
    }
}

// public Subscription New(Fuse.Elements.LayoutFunction lf, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :43
LayoutFunction__Subscription* LayoutFunction__Subscription::New1(::g::Fuse::Elements::LayoutFunction* lf, uObject* context, uObject* listener)
{
    LayoutFunction__Subscription* obj1 = (LayoutFunction__Subscription*)uNew(LayoutFunction__Subscription_typeof());
    obj1->ctor_1(lf, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Transforms.uno
// ----------------------------------------------------------------

// private sealed class TranslationModes.OffsetMode.Subscriptions :35
// {
static void TranslationModes__OffsetMode__Subscriptions_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(TranslationModes__OffsetMode__Subscriptions, Relative), 0,
        ::g::Fuse::Visual_typeof(), offsetof(TranslationModes__OffsetMode__Subscriptions, TargetParent), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(TranslationModes__OffsetMode__Subscriptions, Target), 0);
}

uType* TranslationModes__OffsetMode__Subscriptions_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TranslationModes__OffsetMode__Subscriptions);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Elements.TranslationModes.OffsetMode.Subscriptions", options);
    type->fp_build_ = TranslationModes__OffsetMode__Subscriptions_build;
    type->fp_ctor_ = (void*)TranslationModes__OffsetMode__Subscriptions__New1_fn;
    return type;
}

// public generated Subscriptions() :35
void TranslationModes__OffsetMode__Subscriptions__ctor__fn(TranslationModes__OffsetMode__Subscriptions* __this)
{
    __this->ctor_();
}

// public generated Subscriptions New() :35
void TranslationModes__OffsetMode__Subscriptions__New1_fn(TranslationModes__OffsetMode__Subscriptions** __retval)
{
    *__retval = TranslationModes__OffsetMode__Subscriptions::New1();
}

// public generated Subscriptions() [instance] :35
void TranslationModes__OffsetMode__Subscriptions::ctor_()
{
}

// public generated Subscriptions New() [static] :35
TranslationModes__OffsetMode__Subscriptions* TranslationModes__OffsetMode__Subscriptions::New1()
{
    TranslationModes__OffsetMode__Subscriptions* obj1 = (TranslationModes__OffsetMode__Subscriptions*)uNew(TranslationModes__OffsetMode__Subscriptions_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Transform.uno
// -----------------------------------------------------------------------

// private sealed class TransformOrigins.TopLeftOrigin :48
// {
static void TransformOrigins__TopLeftOrigin_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Elements::ITransformOrigin_typeof(), offsetof(TransformOrigins__TopLeftOrigin_type, interface0));
}

TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof()
{
    static uSStrong<TransformOrigins__TopLeftOrigin_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TransformOrigins__TopLeftOrigin);
    options.TypeSize = sizeof(TransformOrigins__TopLeftOrigin_type);
    type = (TransformOrigins__TopLeftOrigin_type*)uClassType::New("Fuse.Elements.TransformOrigins.TopLeftOrigin", options);
    type->fp_build_ = TransformOrigins__TopLeftOrigin_build;
    type->fp_ctor_ = (void*)TransformOrigins__TopLeftOrigin__New1_fn;
    type->interface0.fp_GetOffset = (void(*)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TransformOrigins__TopLeftOrigin__GetOffset_fn;
    return type;
}

// public generated TopLeftOrigin() :48
void TransformOrigins__TopLeftOrigin__ctor__fn(TransformOrigins__TopLeftOrigin* __this)
{
    __this->ctor_();
}

// public float3 GetOffset(Fuse.Elements.Element elm) :50
void TransformOrigins__TopLeftOrigin__GetOffset_fn(TransformOrigins__TopLeftOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval)
{
    *__retval = __this->GetOffset(elm);
}

// public generated TopLeftOrigin New() :48
void TransformOrigins__TopLeftOrigin__New1_fn(TransformOrigins__TopLeftOrigin** __retval)
{
    *__retval = TransformOrigins__TopLeftOrigin::New1();
}

// public generated TopLeftOrigin() [instance] :48
void TransformOrigins__TopLeftOrigin::ctor_()
{
}

// public float3 GetOffset(Fuse.Elements.Element elm) [instance] :50
::g::Uno::Float3 TransformOrigins__TopLeftOrigin::GetOffset(::g::Fuse::Elements::Element* elm)
{
    return ::g::Uno::Float3__New1(0.0f);
}

// public generated TopLeftOrigin New() [static] :48
TransformOrigins__TopLeftOrigin* TransformOrigins__TopLeftOrigin::New1()
{
    TransformOrigins__TopLeftOrigin* obj1 = (TransformOrigins__TopLeftOrigin*)uNew(TransformOrigins__TopLeftOrigin_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.UnoHostInterface.uno
// ------------------------------------------------------------------------------

// private sealed extern class Element.TransformChanged :29
// {
static void Element__TransformChanged_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__TransformChanged_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(Element__TransformChanged, _element), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float4x4_typeof(), NULL), offsetof(Element__TransformChanged, _handler), 0);
}

Element__TransformChanged_type* Element__TransformChanged_typeof()
{
    static uSStrong<Element__TransformChanged_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__TransformChanged);
    options.TypeSize = sizeof(Element__TransformChanged_type);
    type = (Element__TransformChanged_type*)uClassType::New("Fuse.Elements.Element.TransformChanged", options);
    type->fp_build_ = Element__TransformChanged_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__TransformChanged__UnoIDisposableDispose_fn;
    return type;
}

// public TransformChanged(Fuse.Elements.Element element, Uno.Action<float4x4> handler) :34
void Element__TransformChanged__ctor__fn(Element__TransformChanged* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public TransformChanged New(Fuse.Elements.Element element, Uno.Action<float4x4> handler) :34
void Element__TransformChanged__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__TransformChanged** __retval)
{
    *__retval = Element__TransformChanged::New1(element, handler);
}

// private void OnWorldTransformInvalidated(object sender, Uno.EventArgs args) :42
void Element__TransformChanged__OnWorldTransformInvalidated_fn(Element__TransformChanged* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnWorldTransformInvalidated(sender, args);
}

// private void Uno.IDisposable.Dispose() :47
void Element__TransformChanged__UnoIDisposableDispose_fn(Element__TransformChanged* __this)
{
    uStackFrame __("Fuse.Elements.Element.TransformChanged", "Uno.IDisposable.Dispose()");
    uPtr(__this->_element)->remove_WorldTransformInvalidated(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)Element__TransformChanged__OnWorldTransformInvalidated_fn, __this));
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public TransformChanged(Fuse.Elements.Element element, Uno.Action<float4x4> handler) [instance] :34
void Element__TransformChanged::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.TransformChanged", ".ctor(Fuse.Elements.Element,Uno.Action<float4x4>)");
    _element = element;
    _handler = handler;
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(_element)->WorldTransform()));
    uPtr(_element)->add_WorldTransformInvalidated(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)Element__TransformChanged__OnWorldTransformInvalidated_fn, this));
}

// private void OnWorldTransformInvalidated(object sender, Uno.EventArgs args) [instance] :42
void Element__TransformChanged::OnWorldTransformInvalidated(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Elements.Element.TransformChanged", "OnWorldTransformInvalidated(object,Uno.EventArgs)");
    uPtr(_handler)->InvokeVoid(uCRef(uPtr(_element)->WorldTransform()));
}

// public TransformChanged New(Fuse.Elements.Element element, Uno.Action<float4x4> handler) [static] :34
Element__TransformChanged* Element__TransformChanged::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__TransformChanged* obj1 = (Element__TransformChanged*)uNew(Element__TransformChanged_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Transforms.uno
// ----------------------------------------------------------------

// private sealed class TranslationModes.TransformOriginOffsetMode :70
// {
static void TranslationModes__TransformOriginOffsetMode_build(uType* type)
{
    ::TYPES[31] = ::g::Fuse::Elements::ITransformOrigin_typeof();
    type->SetInterfaces(
        ::g::Fuse::ITranslationMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface0),
        ::g::Fuse::ITransformMode_typeof(), offsetof(::g::Fuse::Elements::TranslationModes__OffsetMode_type, interface1));
}

::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__TransformOriginOffsetMode_typeof()
{
    static uSStrong< ::g::Fuse::Elements::TranslationModes__OffsetMode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::TranslationModes__OffsetMode_typeof();
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TranslationModes__TransformOriginOffsetMode);
    options.TypeSize = sizeof(::g::Fuse::Elements::TranslationModes__OffsetMode_type);
    type = (::g::Fuse::Elements::TranslationModes__OffsetMode_type*)uClassType::New("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", options);
    type->fp_build_ = TranslationModes__TransformOriginOffsetMode_build;
    type->fp_ctor_ = (void*)TranslationModes__TransformOriginOffsetMode__New2_fn;
    type->fp_GetDstOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn;
    type->fp_GetSrcOffset = (void(*)(::g::Fuse::Elements::TranslationModes__OffsetMode*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*))TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn;
    type->interface0.fp_GetAbsVector = (void(*)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*))::g::Fuse::Elements::TranslationModes__OffsetMode__GetAbsVector_fn;
    type->interface1.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))::g::Fuse::Elements::TranslationModes__OffsetMode__Subscribe_fn;
    type->interface1.fp_Unsubscribe = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Elements::TranslationModes__OffsetMode__Unsubscribe_fn;
    return type;
}

// public generated TransformOriginOffsetMode() :70
void TranslationModes__TransformOriginOffsetMode__ctor_1_fn(TranslationModes__TransformOriginOffsetMode* __this)
{
    __this->ctor_1();
}

// protected override sealed float3 GetDstOffset(Fuse.Elements.Element e) :72
void TranslationModes__TransformOriginOffsetMode__GetDstOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", "GetDstOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[31/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// protected override sealed float3 GetSrcOffset(Fuse.Elements.Element e) :77
void TranslationModes__TransformOriginOffsetMode__GetSrcOffset_fn(TranslationModes__TransformOriginOffsetMode* __this, ::g::Fuse::Elements::Element* e, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.TranslationModes.TransformOriginOffsetMode", "GetSrcOffset(Fuse.Elements.Element)");
    return *__retval = ::g::Fuse::Elements::ITransformOrigin::GetOffset(uInterface(uPtr(uPtr(e)->TransformOrigin()), ::TYPES[31/*Fuse.Elements.ITransformOrigin*/]), e), void();
}

// public generated TransformOriginOffsetMode New() :70
void TranslationModes__TransformOriginOffsetMode__New2_fn(TranslationModes__TransformOriginOffsetMode** __retval)
{
    *__retval = TranslationModes__TransformOriginOffsetMode::New2();
}

// public generated TransformOriginOffsetMode() [instance] :70
void TranslationModes__TransformOriginOffsetMode::ctor_1()
{
    ctor_();
}

// public generated TransformOriginOffsetMode New() [static] :70
TranslationModes__TransformOriginOffsetMode* TranslationModes__TransformOriginOffsetMode::New2()
{
    TranslationModes__TransformOriginOffsetMode* obj1 = (TranslationModes__TransformOriginOffsetMode*)uNew(TranslationModes__TransformOriginOffsetMode_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.Transform.uno
// -----------------------------------------------------------------------

// public static class TransformOrigins :46
// {
// static generated TransformOrigins() :46
static void TransformOrigins__cctor__fn(uType* __type)
{
    TransformOrigins__BoxCenter* collection2;
    TransformOrigins__BoxCenter* collection1;
    TransformOrigins::TopLeft_ = (uObject*)TransformOrigins__TopLeftOrigin::New1();
    TransformOrigins::Center_ = (uObject*)TransformOrigins__CenterOrigin::New1();
    TransformOrigins::Anchor_ = (uObject*)TransformOrigins__AnchorOrigin::New1();
    TransformOrigins::HorizontalBoxCenter_ = (uObject*)(collection2 = TransformOrigins__BoxCenter::New1(), uPtr(collection2)->Depth = ::g::Uno::Float2__New2(0.0f, 1.0f), collection2);
    TransformOrigins::VerticalBoxCenter_ = (uObject*)(collection1 = TransformOrigins__BoxCenter::New1(), uPtr(collection1)->Depth = ::g::Uno::Float2__New2(1.0f, 0.0f), collection1);
}

static void TransformOrigins_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&TransformOrigins::TopLeft_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&TransformOrigins::Center_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&TransformOrigins::Anchor_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&TransformOrigins::HorizontalBoxCenter_, uFieldFlagsStatic,
        ::g::Fuse::Elements::ITransformOrigin_typeof(), (uintptr_t)&TransformOrigins::VerticalBoxCenter_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Anchor", 2),
        new uField("Center", 1),
        new uField("HorizontalBoxCenter", 3),
        new uField("TopLeft", 0),
        new uField("VerticalBoxCenter", 4));
}

uClassType* TransformOrigins_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TransformOrigins", options);
    type->fp_build_ = TransformOrigins_build;
    type->fp_cctor_ = TransformOrigins__cctor__fn;
    return type;
}

uSStrong<uObject*> TransformOrigins::TopLeft_;
uSStrong<uObject*> TransformOrigins::Center_;
uSStrong<uObject*> TransformOrigins::Anchor_;
uSStrong<uObject*> TransformOrigins::HorizontalBoxCenter_;
uSStrong<uObject*> TransformOrigins::VerticalBoxCenter_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Transforms.uno
// ----------------------------------------------------------------

// public static class TranslationModes :8
// {
// static generated TranslationModes() :8
static void TranslationModes__cctor__fn(uType* __type)
{
    TranslationModes::TransformOriginOffset_ = (uObject*)TranslationModes__TransformOriginOffsetMode::New2();
    TranslationModes::PositionOffset_ = (uObject*)TranslationModes__PositionOffsetMode::New2();
    TranslationModes::SizeFactor_ = (uObject*)TranslationModes__SizeFactorMode::New1();
    TranslationModes::Size_ = (uObject*)TranslationModes__RelativeResizeChangeMode::New1();
}

static void TranslationModes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&TranslationModes::TransformOriginOffset_, uFieldFlagsStatic,
        ::g::Fuse::ITranslationMode_typeof(), (uintptr_t)&TranslationModes::PositionOffset_, uFieldFlagsStatic,
        ::g::Fuse::IScalingMode_typeof(), (uintptr_t)&TranslationModes::SizeFactor_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IResizeMode_typeof(), (uintptr_t)&TranslationModes::Size_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("PositionOffset", 1),
        new uField("Size", 3),
        new uField("SizeFactor", 2),
        new uField("TransformOriginOffset", 0));
}

uClassType* TranslationModes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Elements.TranslationModes", options);
    type->fp_build_ = TranslationModes_build;
    type->fp_cctor_ = TranslationModes__cctor__fn;
    return type;
}

uSStrong<uObject*> TranslationModes::TransformOriginOffset_;
uSStrong<uObject*> TranslationModes::PositionOffset_;
uSStrong<uObject*> TranslationModes::SizeFactor_;
uSStrong<uObject*> TranslationModes::Size_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.9.0/Viewport.uno
// --------------------------------------------------------------

// public sealed class Viewport :47
// {
static void Viewport_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[0] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[32] = ::g::Fuse::IViewport_typeof();
    ::TYPES[33] = ::g::Fuse::PerspectiveFrustum_typeof();
    ::TYPES[34] = ::g::Fuse::IFrustum_typeof();
    ::TYPES[1] = ::g::Fuse::RootViewport_typeof();
    ::TYPES[35] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Common::Blitter_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Viewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Viewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Viewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Viewport_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Viewport_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Viewport_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Viewport_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Viewport_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Viewport_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Viewport_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(Viewport_type, interface10),
        ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(Viewport_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Viewport_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(Viewport_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(Viewport_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(Viewport_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(Viewport_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(Viewport_type, interface17),
        ::TYPES[32/*Fuse.IViewport*/], offsetof(Viewport_type, interface18),
        ::g::Fuse::IRenderViewport_typeof(), offsetof(Viewport_type, interface19),
        ::TYPES[24/*Fuse.ICommonViewport*/], offsetof(Viewport_type, interface20));
    type->SetFields(106,
        ::g::Fuse::Elements::ViewportMode_typeof(), offsetof(Viewport, _mode), 0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(Viewport, _cullFace), 0,
        ::g::Uno::Bool_typeof(), offsetof(Viewport, _hasCullFace), 0,
        ::g::Uno::Bool_typeof(), offsetof(Viewport, _frustumDirty), 0,
        ::g::Fuse::FrustumViewport_typeof(), offsetof(Viewport, _frustumViewport), 0,
        ::TYPES[34/*Fuse.IFrustum*/], offsetof(Viewport, _frustum), 0,
        ::g::Uno::Bool_typeof(), offsetof(Viewport, _usePerspective), 0,
        ::g::Uno::Float_typeof(), offsetof(Viewport, _perspective), 0,
        ::g::Fuse::Elements::PerspectiveRelativeToMode_typeof(), offsetof(Viewport, _perspectiveRelativeTo), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_CullFace", NULL, (void*)Viewport__get_CullFace_fn, 0, false, ::g::Uno::Graphics::PolygonFace_typeof(), 0),
        new uFunction("set_CullFace", NULL, (void*)Viewport__set_CullFace_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Graphics::PolygonFace_typeof()),
        new uFunction("get_Mode", NULL, (void*)Viewport__get_Mode_fn, 0, false, ::g::Fuse::Elements::ViewportMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)Viewport__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::ViewportMode_typeof()),
        new uFunction(".ctor", NULL, (void*)Viewport__New2_fn, 0, true, type, 0),
        new uFunction("get_Perspective", NULL, (void*)Viewport__get_Perspective_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Perspective", NULL, (void*)Viewport__set_Perspective_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_PerspectiveRelativeTo", NULL, (void*)Viewport__get_PerspectiveRelativeTo_fn, 0, false, ::g::Fuse::Elements::PerspectiveRelativeToMode_typeof(), 0),
        new uFunction("set_PerspectiveRelativeTo", NULL, (void*)Viewport__set_PerspectiveRelativeTo_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::PerspectiveRelativeToMode_typeof()),
        new uFunction("PointToWorldRay", NULL, (void*)Viewport__PointToWorldRay_fn, 0, false, ::g::Fuse::Ray_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RootVisual", NULL, (void*)Viewport__get_RootVisual_fn, 0, false, ::g::Fuse::Visual_typeof(), 0),
        new uFunction("set_RootVisual", NULL, (void*)Viewport__set_RootVisual_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("WorldToLocalRay", NULL, (void*)Viewport__WorldToLocalRay_fn, 0, false, ::g::Fuse::Ray_typeof(), 3, ::TYPES[32/*Fuse.IViewport*/], ::g::Fuse::Ray_typeof(), ::g::Fuse::Visual_typeof()));
}

Viewport_type* Viewport_typeof()
{
    static uSStrong<Viewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::Element_typeof();
    options.FieldCount = 115;
    options.InterfaceCount = 21;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Viewport);
    options.TypeSize = sizeof(Viewport_type);
    type = (Viewport_type*)uClassType::New("Fuse.Elements.Viewport", options);
    type->fp_build_ = Viewport_build;
    type->fp_ctor_ = (void*)Viewport__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*))Viewport__ArrangePaddingBox_fn;
    type->fp_CalcAreChildrenFlat = (void(*)(::g::Fuse::Visual*, bool*))Viewport__CalcAreChildrenFlat_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))Viewport__CalcRenderBounds_fn;
    type->fp_DrawWithChildren = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))Viewport__DrawWithChildren_fn;
    type->fp_get_HitTestChildrenBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Viewport__get_HitTestChildrenBounds_fn;
    type->fp_get_HitTestTransform = (void(*)(::g::Fuse::Visual*, int32_t*))Viewport__get_HitTestTransform_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Viewport__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Viewport__OnUnrooted_fn;
    type->fp_get_ParentWorldTransformInternal = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix**))Viewport__get_ParentWorldTransformInternal_fn;
    type->interface20.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))Viewport__FuseICommonViewportget_PixelsPerPoint_fn;
    type->interface20.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__FuseICommonViewportget_Size_fn;
    type->interface20.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__FuseICommonViewportget_PixelSize_fn;
    type->interface20.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__FuseICommonViewportget_ViewTransform_fn;
    type->interface19.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__FuseIRenderViewportget_ProjectionTransform_fn;
    type->interface19.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))Viewport__FuseIRenderViewportget_ViewProjectionTransform_fn;
    type->interface19.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))Viewport__FuseIRenderViewportget_ViewOrigin_fn;
    type->interface19.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))Viewport__FuseIRenderViewportget_ViewRange_fn;
    type->interface18.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))Viewport__PointToWorldRay_fn;
    type->interface18.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))Viewport__WorldToLocalRay_fn;
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
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// public generated Viewport() :47
void Viewport__ctor_4_fn(Viewport* __this)
{
    __this->ctor_4();
}

// protected override sealed void ArrangePaddingBox(Fuse.LayoutParams lp) :217
void Viewport__ArrangePaddingBox_fn(Viewport* __this, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Elements.Viewport", "ArrangePaddingBox(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->RootVisual() == NULL)
        return;

    uPtr(__this->RootVisual())->ArrangeMarginBox(::g::Uno::Float2__New1(0.0f), lp_);
}

// internal override sealed bool CalcAreChildrenFlat() :335
void Viewport__CalcAreChildrenFlat_fn(Viewport* __this, bool* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "CalcAreChildrenFlat()");
    bool ret2;
    return *__retval = __this->IsDisabled() ? (::g::Fuse::Visual__CalcAreChildrenFlat_fn(__this, &ret2), ret2) : true, void();
}

// protected override sealed Fuse.VisualBounds CalcRenderBounds() :317
void Viewport__CalcRenderBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "CalcRenderBounds()");
    ::g::Fuse::VisualBounds* ret3;
    ::g::Fuse::VisualBounds* bb = (::g::Fuse::Elements::Element__CalcRenderBounds_fn(__this, &ret3), ret3);
    ::g::Fuse::VisualBounds* q = __this->ModifyBounds(bb);
    return *__retval = q, void();
}

// public Uno.Graphics.PolygonFace get_CullFace() :77
void Viewport__get_CullFace_fn(Viewport* __this, int32_t* __retval)
{
    *__retval = __this->CullFace();
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) :78
void Viewport__set_CullFace_fn(Viewport* __this, int32_t* value)
{
    __this->CullFace(*value);
}

// protected override sealed void DrawWithChildren(Fuse.DrawContext dc) :243
void Viewport__DrawWithChildren_fn(Viewport* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Elements.Viewport", "DrawWithChildren(Fuse.DrawContext)");

    if (__this->RootVisual() == NULL)
        return;

    if (__this->Mode() == 1)
    {
        uPtr(__this->RootVisual())->Draw(dc);
        return;
    }

    if (__this->HasCullFace())
        uPtr(dc)->PushCullFace(__this->CullFace());

    if (__this->Mode() == 2)
    {
        ::g::Uno::Float2 pxSize = ::g::Fuse::ICommonViewport::PixelSize(uInterface((uObject*)__this, ::TYPES[24/*Fuse.ICommonViewport*/]));
        ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2((int32_t)pxSize.X, (int32_t)pxSize.Y), 3, true);
        uPtr(dc)->PushRenderTargetViewport(fb, (uObject*)__this);
        dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
        uPtr(__this->RootVisual())->Draw(dc);
        dc->PopRenderTargetViewport();
        uPtr(::g::Fuse::Common::Blitter::Singleton())->Blit1(uPtr(fb)->ColorBuffer(), ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), __this->ActualSize()), dc->GetLocalToClipTransform(__this), 1.0f, true, 0);
        ::g::Fuse::FramebufferPool::Release(fb);
    }
    else
    {
        if (__this->IsRoot())
            uPtr(dc)->PushViewport((uObject*)__this);
        else
        {
            ::g::Fuse::InheritViewport* local = ::g::Fuse::InheritViewport::New1(uPtr(dc)->Viewport(), __this->FrustumViewport(), __this);
            dc->PushViewport((uObject*)local);
        }

        uPtr(__this->RootVisual())->Draw(dc);
        uPtr(dc)->PopViewport();
    }

    if (__this->HasCullFace())
        uPtr(dc)->PopCullFace();
}

// private Fuse.IFrustum get_Frustum() :144
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval)
{
    *__retval = __this->Frustum();
}

// private void set_Frustum(Fuse.IFrustum value) :145
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value)
{
    __this->Frustum(value);
}

// private Fuse.FrustumViewport get_FrustumViewport() :110
void Viewport__get_FrustumViewport_fn(Viewport* __this, ::g::Fuse::FrustumViewport** __retval)
{
    *__retval = __this->FrustumViewport();
}

// public float2 Fuse.ICommonViewport.get_PixelSize() :366
void Viewport__FuseICommonViewportget_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.ICommonViewport.get_PixelSize()");
    return *__retval = __this->IsDisabled() ? ::g::Fuse::ICommonViewport::PixelSize(uInterface(uPtr(uPtr(__this->Parent())->Viewport()), ::TYPES[24/*Fuse.ICommonViewport*/])) : ::g::Uno::Float2__op_Multiply1(__this->ActualSize(), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface((uObject*)__this, ::TYPES[24/*Fuse.ICommonViewport*/]))), void();
}

// public float Fuse.ICommonViewport.get_PixelsPerPoint() :358
void Viewport__FuseICommonViewportget_PixelsPerPoint_fn(Viewport* __this, float* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.ICommonViewport.get_PixelsPerPoint()");
    return *__retval = ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(__this->Parent())->Viewport()), ::TYPES[24/*Fuse.ICommonViewport*/])), void();
}

// public float2 Fuse.ICommonViewport.get_Size() :362
void Viewport__FuseICommonViewportget_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.ICommonViewport.get_Size()");
    return *__retval = __this->IsDisabled() ? ::g::Fuse::ICommonViewport::Size(uInterface(uPtr(uPtr(__this->Parent())->Viewport()), ::TYPES[24/*Fuse.ICommonViewport*/])) : __this->ActualSize(), void();
}

// public float4x4 Fuse.ICommonViewport.get_ViewTransform() :370
void Viewport__FuseICommonViewportget_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.ICommonViewport.get_ViewTransform()");
    return *__retval = __this->IsDisabled() ? ::g::Fuse::ICommonViewport::ViewTransform(uInterface(uPtr(uPtr(__this->Parent())->Viewport()), ::TYPES[24/*Fuse.ICommonViewport*/])) : uPtr(__this->FrustumViewport())->ViewTransform, void();
}

// public float4x4 Fuse.IRenderViewport.get_ProjectionTransform() :376
void Viewport__FuseIRenderViewportget_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ProjectionTransform()");
    return *__retval = uPtr(__this->FrustumViewport())->ProjectionTransform, void();
}

// public float3 Fuse.IRenderViewport.get_ViewOrigin() :383
void Viewport__FuseIRenderViewportget_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ViewOrigin()");
    return *__retval = ::g::Fuse::IFrustum::GetWorldPosition(uInterface(uPtr(__this->Frustum()), ::TYPES[34/*Fuse.IFrustum*/]), (uObject*)__this), void();
}

// public float4x4 Fuse.IRenderViewport.get_ViewProjectionTransform() :380
void Viewport__FuseIRenderViewportget_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ViewProjectionTransform()");
    return *__retval = uPtr(__this->FrustumViewport())->ViewProjectionTransform, void();
}

// public float2 Fuse.IRenderViewport.get_ViewRange() :384
void Viewport__FuseIRenderViewportget_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "Fuse.IRenderViewport.get_ViewRange()");
    return *__retval = ::g::Fuse::IFrustum::GetDepthRange(uInterface(uPtr(__this->Frustum()), ::TYPES[34/*Fuse.IFrustum*/]), (uObject*)__this), void();
}

// private bool get_HasCullFace() :86
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->HasCullFace();
}

// protected override sealed Fuse.VisualBounds get_HitTestChildrenBounds() :326
void Viewport__get_HitTestChildrenBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval)
{
    uStackFrame __("Fuse.Elements.Viewport", "get_HitTestChildrenBounds()");
    ::g::Fuse::VisualBounds* ret4;
    ::g::Fuse::VisualBounds* bb = (::g::Fuse::Elements::Element__get_HitTestChildrenBounds_fn(__this, &ret4), ret4);
    ::g::Fuse::VisualBounds* q = __this->ModifyBounds(bb);
    return *__retval = q, void();
}

// internal override sealed Fuse.Visual.HitTestTransformMode get_HitTestTransform() :342
void Viewport__get_HitTestTransform_fn(Viewport* __this, int32_t* __retval)
{
    int32_t ret5;
    return *__retval = __this->IsDisabled() ? (::g::Fuse::Visual__get_HitTestTransform_fn(__this, &ret5), ret5) : 1, void();
}

// private void InvalidateFrustum() :92
void Viewport__InvalidateFrustum_fn(Viewport* __this)
{
    __this->InvalidateFrustum();
}

// private bool get_IsDisabled() :353
void Viewport__get_IsDisabled_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->IsDisabled();
}

// private bool get_IsRoot() :90
void Viewport__get_IsRoot_fn(Viewport* __this, bool* __retval)
{
    *__retval = __this->IsRoot();
}

// public Fuse.Elements.ViewportMode get_Mode() :53
void Viewport__get_Mode_fn(Viewport* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Elements.ViewportMode value) :54
void Viewport__set_Mode_fn(Viewport* __this, int32_t* value)
{
    __this->Mode(*value);
}

// private Fuse.VisualBounds ModifyBounds(Fuse.VisualBounds vb) :296
void Viewport__ModifyBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds* vb, ::g::Fuse::VisualBounds** __retval)
{
    *__retval = __this->ModifyBounds(vb);
}

// public generated Viewport New() :47
void Viewport__New2_fn(Viewport** __retval)
{
    *__retval = Viewport::New2();
}

// protected void OnPlaced(object s, object a) :237
void Viewport__OnPlaced_fn(Viewport* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void OnRooted() :225
void Viewport__OnRooted_fn(Viewport* __this)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnRooted()");
    ::g::Fuse::Elements::Element__OnRooted_fn(__this);
    __this->add_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Viewport__OnPlaced_fn, __this));
}

// protected override sealed void OnUnrooted() :231
void Viewport__OnUnrooted_fn(Viewport* __this)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnUnrooted()");
    __this->remove_Placed(uDelegate::New(::TYPES[0/*Fuse.PlacedHandler*/], (void*)Viewport__OnPlaced_fn, __this));
    ::g::Fuse::Elements::Element__OnUnrooted_fn(__this);
}

// internal override sealed Fuse.FastMatrix get_ParentWorldTransformInternal() :350
void Viewport__get_ParentWorldTransformInternal_fn(Viewport* __this, ::g::Fuse::FastMatrix** __retval)
{
    ::g::Fuse::FastMatrix* ret6;
    return *__retval = __this->IsDisabled() ? (::g::Fuse::Visual__get_ParentWorldTransformInternal_fn(__this, &ret6), ret6) : (::g::Fuse::FastMatrix*)::g::Fuse::FastMatrix::Identity(), void();
}

// public float get_Perspective() :161
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval)
{
    *__retval = __this->Perspective();
}

// public void set_Perspective(float value) :162
void Viewport__set_Perspective_fn(Viewport* __this, float* value)
{
    __this->Perspective(*value);
}

// public Fuse.Elements.PerspectiveRelativeToMode get_PerspectiveRelativeTo() :183
void Viewport__get_PerspectiveRelativeTo_fn(Viewport* __this, int32_t* __retval)
{
    *__retval = __this->PerspectiveRelativeTo();
}

// public void set_PerspectiveRelativeTo(Fuse.Elements.PerspectiveRelativeToMode value) :184
void Viewport__set_PerspectiveRelativeTo_fn(Viewport* __this, int32_t* value)
{
    __this->PerspectiveRelativeTo(*value);
}

// public Fuse.Ray PointToWorldRay(float2 pointPos) :387
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Fuse::Ray* __retval)
{
    *__retval = __this->PointToWorldRay(*pointPos);
}

// public Fuse.Visual get_RootVisual() :124
void Viewport__get_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RootVisual();
}

// public void set_RootVisual(Fuse.Visual value) :129
void Viewport__set_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual* value)
{
    __this->RootVisual(value);
}

// private void UpdateFrustum() :100
void Viewport__UpdateFrustum_fn(Viewport* __this)
{
    __this->UpdateFrustum();
}

// private void UpdatePerspective() :194
void Viewport__UpdatePerspective_fn(Viewport* __this)
{
    __this->UpdatePerspective();
}

// public Fuse.Ray WorldToLocalRay(Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) :403
void Viewport__WorldToLocalRay_fn(Viewport* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval)
{
    *__retval = __this->WorldToLocalRay(world, *worldRay, where);
}

// public generated Viewport() [instance] :47
void Viewport::ctor_4()
{
    uStackFrame __("Fuse.Elements.Viewport", ".ctor()");
    _frustumDirty = true;
    _frustumViewport = ::g::Fuse::FrustumViewport::New1();
    _frustum = (uObject*)::g::Fuse::OrthographicFrustum::New1();
    ctor_3();
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :77
int32_t Viewport::CullFace()
{
    return _cullFace;
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) [instance] :78
void Viewport::CullFace(int32_t value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_CullFace(Uno.Graphics.PolygonFace)");
    _cullFace = value;
    _hasCullFace = true;
    InvalidateVisual();
}

// private Fuse.IFrustum get_Frustum() [instance] :144
uObject* Viewport::Frustum()
{
    return _frustum;
}

// private void set_Frustum(Fuse.IFrustum value) [instance] :145
void Viewport::Frustum(uObject* value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Frustum(Fuse.IFrustum)");
    _frustum = value;
    InvalidateFrustum();
}

// private Fuse.FrustumViewport get_FrustumViewport() [instance] :110
::g::Fuse::FrustumViewport* Viewport::FrustumViewport()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_FrustumViewport()");

    if (_frustumDirty)
    {
        UpdateFrustum();
        _frustumDirty = false;
    }

    return _frustumViewport;
}

// private bool get_HasCullFace() [instance] :86
bool Viewport::HasCullFace()
{
    return _hasCullFace;
}

// private void InvalidateFrustum() [instance] :92
void Viewport::InvalidateFrustum()
{
    uStackFrame __("Fuse.Elements.Viewport", "InvalidateFrustum()");
    _frustumDirty = true;
    InvalidateLocalTransform();
}

// private bool get_IsDisabled() [instance] :353
bool Viewport::IsDisabled()
{
    return Mode() == 1;
}

// private bool get_IsRoot() [instance] :90
bool Viewport::IsRoot()
{
    return (Parent() == NULL) || uIs((::g::Fuse::Visual*)Parent(), ::TYPES[1/*Fuse.RootViewport*/]);
}

// public Fuse.Elements.ViewportMode get_Mode() [instance] :53
int32_t Viewport::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Elements.ViewportMode value) [instance] :54
void Viewport::Mode(int32_t value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Mode(Fuse.Elements.ViewportMode)");

    if (value == _mode)
        return;

    _mode = value;
    InvalidateFrustum();
}

// private Fuse.VisualBounds ModifyBounds(Fuse.VisualBounds vb) [instance] :296
::g::Fuse::VisualBounds* Viewport::ModifyBounds(::g::Fuse::VisualBounds* vb)
{
    uStackFrame __("Fuse.Elements.Viewport", "ModifyBounds(Fuse.VisualBounds)");
    ::g::Fuse::Visual* root = RootVisual();

    if ((IsDisabled() || (root == NULL)) || uPtr(root)->IsFlat())
        return vb;

    if (Mode() == 2)
        return uPtr(vb)->AddRect(::g::Uno::Float2__New1(0.0f), ActualSize());

    if (IsRoot())
        return uPtr(vb)->AddRect(::g::Uno::Float2__New1(0.0f), ActualSize());

    ::g::Uno::Float4x4 mx = uPtr(FrustumViewport())->GetFlatWorldToVisualTransform(ActualSize());
    ::g::Fuse::VisualBounds* q = uPtr(vb)->TransformFlatten1(::g::Fuse::FastMatrix::FromFloat4x4(mx));
    return q;
}

// protected void OnPlaced(object s, object a) [instance] :237
void Viewport::OnPlaced(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Elements.Viewport", "OnPlaced(object,object)");
    UpdatePerspective();
    InvalidateFrustum();
}

// public float get_Perspective() [instance] :161
float Viewport::Perspective()
{
    return _perspective;
}

// public void set_Perspective(float value) [instance] :162
void Viewport::Perspective(float value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_Perspective(float)");

    if (value != _perspective)
    {
        _usePerspective = true;
        _perspective = value;
        UpdatePerspective();
    }
}

// public Fuse.Elements.PerspectiveRelativeToMode get_PerspectiveRelativeTo() [instance] :183
int32_t Viewport::PerspectiveRelativeTo()
{
    return _perspectiveRelativeTo;
}

// public void set_PerspectiveRelativeTo(Fuse.Elements.PerspectiveRelativeToMode value) [instance] :184
void Viewport::PerspectiveRelativeTo(int32_t value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_PerspectiveRelativeTo(Fuse.Elements.PerspectiveRelativeToMode)");

    if (value != _perspectiveRelativeTo)
    {
        _perspectiveRelativeTo = value;
        UpdatePerspective();
    }
}

// public Fuse.Ray PointToWorldRay(float2 pointPos) [instance] :387
::g::Fuse::Ray Viewport::PointToWorldRay(::g::Uno::Float2 pointPos)
{
    uStackFrame __("Fuse.Elements.Viewport", "PointToWorldRay(float2)");

    if (IsDisabled())
        return ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[32/*Fuse.IViewport*/]), pointPos);

    if (!IsRoot())
    {
        ::g::Fuse::Ray pr = ::g::Fuse::IViewport::PointToWorldRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[32/*Fuse.IViewport*/]), pointPos);
        ::g::Fuse::Ray local = ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[32/*Fuse.IViewport*/]), uPtr(Parent())->Viewport(), pr, this);
        pointPos = ::g::Fuse::ViewportHelpers::LocalPlaneIntersection(local);
    }

    ::g::Fuse::Ray r = ::g::Fuse::ViewportHelpers::PointToWorldRay((uObject*)this, uPtr(FrustumViewport())->ViewProjectionTransformInverse, pointPos);
    return r;
}

// public Fuse.Visual get_RootVisual() [instance] :124
::g::Fuse::Visual* Viewport::RootVisual()
{
    uStackFrame __("Fuse.Elements.Viewport", "get_RootVisual()");

    if (!HasVisualChildren())
        return NULL;

    return (::g::Fuse::Visual*)FirstChild(::TYPES[35/*Fuse.Visual.FirstChild<Fuse.Visual>*/]);
}

// public void set_RootVisual(Fuse.Visual value) [instance] :129
void Viewport::RootVisual(::g::Fuse::Visual* value)
{
    uStackFrame __("Fuse.Elements.Viewport", "set_RootVisual(Fuse.Visual)");
    bool ret7;

    if (RootVisual() != value)
    {
        while (HasVisualChildren())
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/]), (::g::Fuse::Visual*)FirstChild(::TYPES[35/*Fuse.Visual.FirstChild<Fuse.Visual>*/]), &ret7);

        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/]), value);
        InvalidateLayout(2);
    }
}

// private void UpdateFrustum() [instance] :100
void Viewport::UpdateFrustum()
{
    uStackFrame __("Fuse.Elements.Viewport", "UpdateFrustum()");

    if (IsRoot())
        uPtr(_frustumViewport)->Update((uObject*)this, Frustum());
    else
        uPtr(_frustumViewport)->Update1((uObject*)this, Frustum(), this);
}

// private void UpdatePerspective() [instance] :194
void Viewport::UpdatePerspective()
{
    uStackFrame __("Fuse.Elements.Viewport", "UpdatePerspective()");

    if (!_usePerspective)
        return;

    ::g::Fuse::PerspectiveFrustum* pf = uAs< ::g::Fuse::PerspectiveFrustum*>(Frustum(), ::TYPES[33/*Fuse.PerspectiveFrustum*/]);

    if (pf == NULL)
    {
        pf = ::g::Fuse::PerspectiveFrustum::New1();
        Frustum((uObject*)pf);
    }

    float distance = 0.0f;

    switch (PerspectiveRelativeTo())
    {
        case 0:
        {
            distance = _perspective;
            break;
        }
        case 1:
        {
            distance = _perspective * ActualSize().X;
            break;
        }
        case 2:
        {
            distance = _perspective * ActualSize().Y;
            break;
        }
    }

    uPtr(pf)->Distance(distance);
    InvalidateFrustum();
}

// public Fuse.Ray WorldToLocalRay(Fuse.IViewport world, Fuse.Ray worldRay, Fuse.Visual where) [instance] :403
::g::Fuse::Ray Viewport::WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.Elements.Viewport", "WorldToLocalRay(Fuse.IViewport,Fuse.Ray,Fuse.Visual)");

    if (IsDisabled())
    {
        if (world == this)
            world = uPtr(Parent())->Viewport();

        return ::g::Fuse::IViewport::WorldToLocalRay(uInterface(uPtr(uPtr(Parent())->Viewport()), ::TYPES[32/*Fuse.IViewport*/]), world, worldRay, where);
    }

    return ::g::Fuse::ViewportHelpers::WorldToLocalRay((uObject*)this, world, worldRay, where);
}

// public generated Viewport New() [static] :47
Viewport* Viewport::New2()
{
    Viewport* obj1 = (Viewport*)uNew(Viewport_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/1.9.0/Viewport.uno
// --------------------------------------------------------------

// public enum ViewportMode :11
uEnumType* ViewportMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.ViewportMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Enabled", 0LL,
        "Disabled", 1LL,
        "RenderToTexture", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Enums.uno
// -----------------------------------------------------------

// public enum Visibility :5
uEnumType* Visibility_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Elements.Visibility", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Visible", 0LL,
        "Collapsed", 1LL,
        "Hidden", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.UnoHostInterface.uno
// ------------------------------------------------------------------------------

// private sealed extern class Element.VisualAppeared :102
// {
static void Element__VisualAppeared_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__VisualAppeared_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(Element__VisualAppeared, _element), 0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Rect_typeof(), ::g::Uno::Float4x4_typeof(), NULL), offsetof(Element__VisualAppeared, _handler), 0);
}

Element__VisualAppeared_type* Element__VisualAppeared_typeof()
{
    static uSStrong<Element__VisualAppeared_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__VisualAppeared);
    options.TypeSize = sizeof(Element__VisualAppeared_type);
    type = (Element__VisualAppeared_type*)uClassType::New("Fuse.Elements.Element.VisualAppeared", options);
    type->fp_build_ = Element__VisualAppeared_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__VisualAppeared__UnoIDisposableDispose_fn;
    return type;
}

// public VisualAppeared(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) :108
void Element__VisualAppeared__ctor__fn(Element__VisualAppeared* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public VisualAppeared New(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) :108
void Element__VisualAppeared__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__VisualAppeared** __retval)
{
    *__retval = Element__VisualAppeared::New1(element, handler);
}

// private void OnRooted() :117
void Element__VisualAppeared__OnRooted_fn(Element__VisualAppeared* __this)
{
    __this->OnRooted();
}

// private void Uno.IDisposable.Dispose() :122
void Element__VisualAppeared__UnoIDisposableDispose_fn(Element__VisualAppeared* __this)
{
    uStackFrame __("Fuse.Elements.Element.VisualAppeared", "Uno.IDisposable.Dispose()");
    bool ret2;
    ::g::Uno::Collections::List__Remove_fn(uPtr(uPtr(__this->_element)->RootedListeners()), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Element__VisualAppeared__OnRooted_fn, __this), &ret2);
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public VisualAppeared(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) [instance] :108
void Element__VisualAppeared::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.VisualAppeared", ".ctor(Fuse.Elements.Element,Uno.Action<Uno.Rect, float4x4>)");
    _element = element;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(_element)->RootedListeners()), uDelegate::New(::TYPES[25/*Uno.Action*/], (void*)Element__VisualAppeared__OnRooted_fn, this));
    _handler = handler;

    if (uPtr(_element)->IsRootingCompleted())
        OnRooted();
}

// private void OnRooted() [instance] :117
void Element__VisualAppeared::OnRooted()
{
    uStackFrame __("Fuse.Elements.Element.VisualAppeared", "OnRooted()");
    uPtr(_handler)->Invoke(2, uCRef(::g::Uno::Rect__New2(uPtr(_element)->ActualPosition(), uPtr(_element)->ActualSize())), uCRef(uPtr(_element)->WorldTransform()));
}

// public VisualAppeared New(Fuse.Elements.Element element, Uno.Action<Uno.Rect, float4x4> handler) [static] :108
Element__VisualAppeared* Element__VisualAppeared::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__VisualAppeared* obj1 = (Element__VisualAppeared*)uNew(Element__VisualAppeared_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/Element.UnoHostInterface.uno
// ------------------------------------------------------------------------------

// private sealed extern class Element.VisualDisappeared :130
// {
static void Element__VisualDisappeared_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Element__VisualDisappeared_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(Element__VisualDisappeared, _element), 0,
        ::g::Uno::Action_typeof(), offsetof(Element__VisualDisappeared, _handler), 0);
}

Element__VisualDisappeared_type* Element__VisualDisappeared_typeof()
{
    static uSStrong<Element__VisualDisappeared_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Element__VisualDisappeared);
    options.TypeSize = sizeof(Element__VisualDisappeared_type);
    type = (Element__VisualDisappeared_type*)uClassType::New("Fuse.Elements.Element.VisualDisappeared", options);
    type->fp_build_ = Element__VisualDisappeared_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Element__VisualDisappeared__UnoIDisposableDispose_fn;
    return type;
}

// public VisualDisappeared(Fuse.Elements.Element element, Uno.Action handler) :136
void Element__VisualDisappeared__ctor__fn(Element__VisualDisappeared* __this, ::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    __this->ctor_(element, handler);
}

// public VisualDisappeared New(Fuse.Elements.Element element, Uno.Action handler) :136
void Element__VisualDisappeared__New1_fn(::g::Fuse::Elements::Element* element, uDelegate* handler, Element__VisualDisappeared** __retval)
{
    *__retval = Element__VisualDisappeared::New1(element, handler);
}

// private void Uno.IDisposable.Dispose() :143
void Element__VisualDisappeared__UnoIDisposableDispose_fn(Element__VisualDisappeared* __this)
{
    uStackFrame __("Fuse.Elements.Element.VisualDisappeared", "Uno.IDisposable.Dispose()");
    bool ret2;
    ::g::Uno::Collections::List__Remove_fn(uPtr(uPtr(__this->_element)->UnrootedListeners()), __this->_handler, &ret2);
    __this->_element = NULL;
    __this->_handler = NULL;
}

// public VisualDisappeared(Fuse.Elements.Element element, Uno.Action handler) [instance] :136
void Element__VisualDisappeared::ctor_(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    uStackFrame __("Fuse.Elements.Element.VisualDisappeared", ".ctor(Fuse.Elements.Element,Uno.Action)");
    _element = element;
    _handler = handler;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(_element)->UnrootedListeners()), _handler);
}

// public VisualDisappeared New(Fuse.Elements.Element element, Uno.Action handler) [static] :136
Element__VisualDisappeared* Element__VisualDisappeared::New1(::g::Fuse::Elements::Element* element, uDelegate* handler)
{
    Element__VisualDisappeared* obj1 = (Element__VisualDisappeared*)uNew(Element__VisualDisappeared_typeof());
    obj1->ctor_(element, handler);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno
// ---------------------------------------------------------------------

// public sealed class WidthFunction :123
// {
static void WidthFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Elements::LayoutFunction_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WidthFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::LayoutFunction_type* WidthFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::LayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::LayoutFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WidthFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::LayoutFunction_type);
    type = (::g::Fuse::Elements::LayoutFunction_type*)uClassType::New("Fuse.Elements.WidthFunction", options);
    type->fp_build_ = WidthFunction_build;
    type->fp_GetCurrentValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::Elements::Element*, uObject**))WidthFunction__GetCurrentValue_fn;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))WidthFunction__GetValue_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public WidthFunction(Fuse.Reactive.Expression element) :126
void WidthFunction__ctor_2_fn(WidthFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_2(element);
}

// protected override sealed object GetCurrentValue(Fuse.Elements.Element elm) :133
void WidthFunction__GetCurrentValue_fn(WidthFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.WidthFunction", "GetCurrentValue(Fuse.Elements.Element)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(elm)->ActualSize().X), void();
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :128
void WidthFunction__GetValue_fn(WidthFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.WidthFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewSize().X), void();
}

// public WidthFunction New(Fuse.Reactive.Expression element) :126
void WidthFunction__New1_fn(::g::Fuse::Reactive::Expression* element, WidthFunction** __retval)
{
    *__retval = WidthFunction::New1(element);
}

// public WidthFunction(Fuse.Reactive.Expression element) [instance] :126
void WidthFunction::ctor_2(::g::Fuse::Reactive::Expression* element)
{
    ctor_1(element);
}

// public WidthFunction New(Fuse.Reactive.Expression element) [static] :126
WidthFunction* WidthFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    WidthFunction* obj1 = (WidthFunction*)uNew(WidthFunction_typeof());
    obj1->ctor_2(element);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno
// ---------------------------------------------------------------------

// public sealed class XFunction :189
// {
static void XFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::XYBaseLayoutFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Elements::XYBaseLayoutFunction_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::XYBaseLayoutFunction_type* XFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::XYBaseLayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::XYBaseLayoutFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(XFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::XYBaseLayoutFunction_type);
    type = (::g::Fuse::Elements::XYBaseLayoutFunction_type*)uClassType::New("Fuse.Elements.XFunction", options);
    type->fp_build_ = XFunction_build;
    type->fp_GetCurrentValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::Elements::Element*, uObject**))XFunction__GetCurrentValue_fn;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))XFunction__GetValue_fn;
    type->fp_TryCompute = (void(*)(::g::Fuse::Elements::XYBaseLayoutFunction*, ::g::Uno::Float4*, int32_t*, uObject**, bool*))XFunction__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public XFunction(Fuse.Reactive.Expression element) :192
void XFunction__ctor_3_fn(XFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_3(element);
}

// protected override sealed object GetCurrentValue(Fuse.Elements.Element elm) :199
void XFunction__GetCurrentValue_fn(XFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.XFunction", "GetCurrentValue(Fuse.Elements.Element)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(elm)->ActualPosition().X), void();
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :194
void XFunction__GetValue_fn(XFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.XFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewPosition().X), void();
}

// public XFunction New(Fuse.Reactive.Expression element) :192
void XFunction__New1_fn(::g::Fuse::Reactive::Expression* element, XFunction** __retval)
{
    *__retval = XFunction::New1(element);
}

// protected override sealed bool TryCompute(float4 v, int sz, object& value) :204
void XFunction__TryCompute_fn(XFunction* __this, ::g::Uno::Float4* v, int32_t* sz, uObject** value, bool* __retval)
{
    int32_t sz_ = *sz;
    ::g::Uno::Float4 v_ = *v;

    if (sz_ < 1)
    {
        *value = NULL;
        return *__retval = false, void();
    }

    *value = uBox(::g::Uno::Float_typeof(), v_.X);
    return *__retval = true, void();
}

// public XFunction(Fuse.Reactive.Expression element) [instance] :192
void XFunction::ctor_3(::g::Fuse::Reactive::Expression* element)
{
    ctor_2(element);
}

// public XFunction New(Fuse.Reactive.Expression element) [static] :192
XFunction* XFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    XFunction* obj1 = (XFunction*)uNew(XFunction_typeof());
    obj1->ctor_3(element);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno
// ---------------------------------------------------------------------

// public abstract class XYBaseLayoutFunction :164
// {
static void XYBaseLayoutFunction_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(XYBaseLayoutFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(XYBaseLayoutFunction_type, interface1));
    type->SetFields(3);
}

XYBaseLayoutFunction_type* XYBaseLayoutFunction_typeof()
{
    static uSStrong<XYBaseLayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::LayoutFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(XYBaseLayoutFunction);
    options.TypeSize = sizeof(XYBaseLayoutFunction_type);
    type = (XYBaseLayoutFunction_type*)uClassType::New("Fuse.Elements.XYBaseLayoutFunction", options);
    type->fp_build_ = XYBaseLayoutFunction_build;
    type->fp_TryComputeAlternate = (void(*)(::g::Fuse::Elements::LayoutFunction*, uObject*, uObject**, bool*))XYBaseLayoutFunction__TryComputeAlternate_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// internal XYBaseLayoutFunction(Fuse.Reactive.Expression element) :166
void XYBaseLayoutFunction__ctor_2_fn(XYBaseLayoutFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_2(element);
}

// protected override sealed bool TryComputeAlternate(object value, object& result) :168
void XYBaseLayoutFunction__TryComputeAlternate_fn(XYBaseLayoutFunction* __this, uObject* value, uObject** result, bool* __retval)
{
    uStackFrame __("Fuse.Elements.XYBaseLayoutFunction", "TryComputeAlternate(object,object&)");
    *result = NULL;
    ::g::Uno::Float4 v = ::g::Uno::Float4__New1(0.0f);
    int32_t sz = 0;

    if (!::g::Fuse::Marshal::TryToZeroFloat4(value, &v, &sz))
        return *__retval = false, void();

    return *__retval = __this->TryCompute(v, sz, result), void();
}

// internal XYBaseLayoutFunction(Fuse.Reactive.Expression element) [instance] :166
void XYBaseLayoutFunction::ctor_2(::g::Fuse::Reactive::Expression* element)
{
    ctor_1(element);
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.9.0/LayoutFunctions.uno
// ---------------------------------------------------------------------

// public sealed class YFunction :223
// {
static void YFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Elements::XYBaseLayoutFunction_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Elements::XYBaseLayoutFunction_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)YFunction__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Elements::XYBaseLayoutFunction_type* YFunction_typeof()
{
    static uSStrong< ::g::Fuse::Elements::XYBaseLayoutFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::XYBaseLayoutFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(YFunction);
    options.TypeSize = sizeof(::g::Fuse::Elements::XYBaseLayoutFunction_type);
    type = (::g::Fuse::Elements::XYBaseLayoutFunction_type*)uClassType::New("Fuse.Elements.YFunction", options);
    type->fp_build_ = YFunction_build;
    type->fp_GetCurrentValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::Elements::Element*, uObject**))YFunction__GetCurrentValue_fn;
    type->fp_GetValue = (void(*)(::g::Fuse::Elements::LayoutFunction*, ::g::Fuse::PlacedArgs*, uObject**))YFunction__GetValue_fn;
    type->fp_TryCompute = (void(*)(::g::Fuse::Elements::XYBaseLayoutFunction*, ::g::Uno::Float4*, int32_t*, uObject**, bool*))YFunction__TryCompute_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Elements::LayoutFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public YFunction(Fuse.Reactive.Expression element) :226
void YFunction__ctor_3_fn(YFunction* __this, ::g::Fuse::Reactive::Expression* element)
{
    __this->ctor_3(element);
}

// protected override sealed object GetCurrentValue(Fuse.Elements.Element elm) :233
void YFunction__GetCurrentValue_fn(YFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.YFunction", "GetCurrentValue(Fuse.Elements.Element)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(elm)->ActualPosition().Y), void();
}

// protected override sealed object GetValue(Fuse.PlacedArgs args) :228
void YFunction__GetValue_fn(YFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval)
{
    uStackFrame __("Fuse.Elements.YFunction", "GetValue(Fuse.PlacedArgs)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(args)->NewPosition().Y), void();
}

// public YFunction New(Fuse.Reactive.Expression element) :226
void YFunction__New1_fn(::g::Fuse::Reactive::Expression* element, YFunction** __retval)
{
    *__retval = YFunction::New1(element);
}

// protected override sealed bool TryCompute(float4 v, int sz, object& value) :238
void YFunction__TryCompute_fn(YFunction* __this, ::g::Uno::Float4* v, int32_t* sz, uObject** value, bool* __retval)
{
    int32_t sz_ = *sz;
    ::g::Uno::Float4 v_ = *v;

    if (sz_ < 2)
    {
        *value = NULL;
        return *__retval = false, void();
    }

    *value = uBox(::g::Uno::Float_typeof(), v_.Y);
    return *__retval = true, void();
}

// public YFunction(Fuse.Reactive.Expression element) [instance] :226
void YFunction::ctor_3(::g::Fuse::Reactive::Expression* element)
{
    ctor_2(element);
}

// public YFunction New(Fuse.Reactive.Expression element) [static] :226
YFunction* YFunction::New1(::g::Fuse::Reactive::Expression* element)
{
    YFunction* obj1 = (YFunction*)uNew(YFunction_typeof());
    obj1->ctor_3(element);
    return obj1;
}
// }

}}} // ::g::Fuse::Elements
