// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DashedSolidColor.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.Internal.Float2Buffer.h>
#include <Fuse.Drawing.Internal.FloatBuffer.h>
#include <Fuse.Drawing.Internal.TypedBuffer.h>
#include <Fuse.Drawing.Internal.UShortBuffer.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.ConvexWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.Coverage.h>
#include <Fuse.Drawing.Primitives.Falloff.h>
#include <Fuse.Drawing.Primitives.FillCoverage.h>
#include <Fuse.Drawing.Primitives.LimitCoverage.h>
#include <Fuse.Drawing.Primitives.OneLimitCoverage.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.Primitives.ShadowFalloff.h>
#include <Fuse.Drawing.Primitives.StrokeCoverage.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Primitives.WedgeCoverage.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[16];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Circle.uno
// ----------------------------------------------------------------------

// public sealed class Circle :20
// {
// static generated Circle() :20
static void Circle__cctor__fn(uType* __type)
{
    Circle::Singleton_ = Circle::New1();
}

static void Circle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::DashedSolidColor_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof(), offsetof(Circle, _oneLimitCoverage), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Circle, _strokeCoverage), 0,
        ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Circle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Internal::Float2Buffer_typeof(), offsetof(Circle, _bufferVertex), 0,
        ::g::Fuse::Drawing::Internal::UShortBuffer_typeof(), offsetof(Circle, _bufferIndex), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ecc447), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ecc46a), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ecc489), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ece0a5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ece106), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ece063), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_11ecab87), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_f46279ef), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_95d5a8aa), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_46b4edd5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_46b4edf4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_46b4ed0f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1a74461f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1a744642), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1a744661), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_a9966daf), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_f74f4eea), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_6646ba0a), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_219105d9), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_801dd71e), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_3264f5e3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_4da28b23), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_ffe9a9e8), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_5e767b2d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_10bbec15), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_b2987d82), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_64df9c47), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_6f4dbf7c), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_2194de41), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_8021af86), 0,
        type, (uintptr_t)&Circle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 35));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Circle__Fill_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Circle__New1_fn, 0, true, type, 0),
        new uFunction("Stroke", NULL, (void*)Circle__Stroke_fn, 0, false, uVoid_typeof(), 6, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Circle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 36;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_cctor_ = Circle__cctor__fn;
    return type;
}

// public generated Circle() :20
void Circle__ctor__fn(Circle* __this)
{
    __this->ctor_();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness) :78
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float* extend, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Draw(dc, visual, *radius, brush, cover, limit, *extend, *center, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) :42
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Fill(dc, visual, *radius, brush, *center, *smoothness);
}

// private generated void init_DrawCalls() :20
void Circle__init_DrawCalls_fn(Circle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :52
void Circle__InitBuffers_fn(Circle* __this)
{
    __this->InitBuffers();
}

// public generated Circle New() :20
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) :26
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Stroke(dc, visual, *radius, stroke, *center, *smoothness);
}

uSStrong<Circle*> Circle::Singleton_;

// public generated Circle() [instance] :20
void Circle::ctor_()
{
    _oneLimitCoverage = ::g::Fuse::Drawing::Primitives::OneLimitCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    init_DrawCalls();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness) [instance] :78
void Circle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float extend, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Draw(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,Fuse.Drawing.Primitives.LimitCoverage,float,float2,float)");
    ::g::Uno::Float2 ind1;
    ::g::Uno::Float2 ind2;
    ::g::Uno::Float2 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float2 ind19;
    ::g::Uno::Float2 ind20;
    ::g::Uno::Float2 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;
    ::g::Uno::Float4 ind31;
    ::g::Uno::Float4 ind32;
    ::g::Uno::Float4 ind33;
    ::g::Uno::Float4 ind34;
    ::g::Uno::Float4 ind35;
    ::g::Uno::Float4 ind36;

    if (radius <= 0.0f)
        return;

    if (_bufferVertex == NULL)
        InitBuffers();

    float radiusRcp = 1.0f / radius;

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_11ecc447_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ecc447_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_11ecc447.BlendEnabled(true);
                _draw_11ecc447.DepthTestEnabled(false);
                _draw_11ecc447.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc447.BlendSrcAlpha(7);
                _draw_11ecc447.BlendDstRgb(3);
                _draw_11ecc447.Use();
                _draw_11ecc447.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc447.Uniform(1, radius + (extend * 2.0f));
                _draw_11ecc447.Uniform2(2, center);
                _draw_11ecc447.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_11ecc447.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_11ecc447.Uniform2(5, (ind1 = visual->ActualSize(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)));
                _draw_11ecc447.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_11ecc447.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_11ecc447.Uniform(8, radiusRcp);
                _draw_11ecc447.Uniform(9, radius);
                _draw_11ecc447.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc447.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc447.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_11ecc447.Uniform(13, 1.0f / smoothness);
                _draw_11ecc447.Uniform(14, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_11ecc447.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ecc447_20_2_13, EndVec_11ecc447_20_3_14)));
                _draw_11ecc447.Uniform2(16, StartVec_11ecc447_20_2_13);
                _draw_11ecc447.Uniform2(17, EndVec_11ecc447_20_3_14);
                _draw_11ecc447.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_11ecc46a_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ecc46a_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_11ecc46a.BlendEnabled(true);
                _draw_11ecc46a.DepthTestEnabled(false);
                _draw_11ecc46a.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc46a.BlendSrcAlpha(7);
                _draw_11ecc46a.BlendDstRgb(3);
                _draw_11ecc46a.Use();
                _draw_11ecc46a.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc46a.Uniform(1, radius + (extend * 2.0f));
                _draw_11ecc46a.Uniform2(2, center);
                _draw_11ecc46a.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_11ecc46a.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_11ecc46a.Uniform2(5, (ind2 = visual->ActualSize(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
                _draw_11ecc46a.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_11ecc46a.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_11ecc46a.Uniform(8, radiusRcp);
                _draw_11ecc46a.Uniform(9, radius);
                _draw_11ecc46a.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc46a.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc46a.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_11ecc46a.Uniform(13, 1.0f / smoothness);
                _draw_11ecc46a.Uniform(14, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_11ecc46a.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ecc46a_20_2_13, EndVec_11ecc46a_20_3_14)));
                _draw_11ecc46a.Uniform2(16, StartVec_11ecc46a_20_2_13);
                _draw_11ecc46a.Uniform2(17, EndVec_11ecc46a_20_3_14);
                _draw_11ecc46a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_11ecc489.BlendEnabled(true);
                _draw_11ecc489.DepthTestEnabled(false);
                _draw_11ecc489.CullFace(uPtr(dc)->CullFace());
                _draw_11ecc489.BlendSrcAlpha(7);
                _draw_11ecc489.BlendDstRgb(3);
                _draw_11ecc489.Use();
                _draw_11ecc489.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecc489.Uniform(1, radius + (extend * 2.0f));
                _draw_11ecc489.Uniform2(2, center);
                _draw_11ecc489.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_11ecc489.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_11ecc489.Uniform2(5, (ind3 = visual->ActualSize(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_11ecc489.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_11ecc489.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_11ecc489.Uniform(8, radiusRcp);
                _draw_11ecc489.Uniform(9, radius);
                _draw_11ecc489.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecc489.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecc489.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_11ecc489.Uniform(13, 1.0f / smoothness);
                _draw_11ecc489.Uniform(14, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_11ecc489.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_11ece0a5_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_11ece0a5_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ece0a5_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_11ece0a5.BlendEnabled(true);
                _draw_11ece0a5.DepthTestEnabled(false);
                _draw_11ece0a5.CullFace(uPtr(dc)->CullFace());
                _draw_11ece0a5.BlendSrcAlpha(7);
                _draw_11ece0a5.BlendDstRgb(3);
                _draw_11ece0a5.Const(0, DP_11ece0a5_14_8_4.NeedFract);
                _draw_11ece0a5.Const(1, DP_11ece0a5_14_8_4.Texture == NULL);
                _draw_11ece0a5.Use();
                _draw_11ece0a5.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ece0a5.Uniform(3, radius + (extend * 2.0f));
                _draw_11ece0a5.Uniform2(4, center);
                _draw_11ece0a5.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ece0a5.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ece0a5.Uniform2(7, DP_11ece0a5_14_8_4.Origin);
                _draw_11ece0a5.Uniform2(8, DP_11ece0a5_14_8_4.Size);
                _draw_11ece0a5.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_11ece0a5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_11ece0a5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_11ece0a5.Uniform2(10, (ind6 = DP_11ece0a5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_11ece0a5.Uniform2(11, DP_11ece0a5_14_8_4.TexCoordScale1);
                _draw_11ece0a5.Uniform2(12, DP_11ece0a5_14_8_4.TexCoordBias1);
                _draw_11ece0a5.Uniform2(13, DP_11ece0a5_14_8_4.TexCoordScale2);
                _draw_11ece0a5.Uniform2(14, DP_11ece0a5_14_8_4.TexCoordBias2);
                _draw_11ece0a5.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_11ece0a5.Uniform(16, radiusRcp);
                _draw_11ece0a5.Uniform(17, radius);
                _draw_11ece0a5.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ece0a5.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ece0a5.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ece0a5.Uniform(21, 1.0f / smoothness);
                _draw_11ece0a5.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_11ece0a5.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ece0a5_20_2_17, EndVec_11ece0a5_20_3_18)));
                _draw_11ece0a5.Uniform2(24, StartVec_11ece0a5_20_2_17);
                _draw_11ece0a5.Uniform2(25, EndVec_11ece0a5_20_3_18);
                _draw_11ece0a5.Sampler3(26, DP_11ece0a5_14_8_4.Texture, DP_11ece0a5_14_8_4.SamplerState);
                _draw_11ece0a5.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_11ece106_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_11ece106_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ece106_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_11ece106.BlendEnabled(true);
                _draw_11ece106.DepthTestEnabled(false);
                _draw_11ece106.CullFace(uPtr(dc)->CullFace());
                _draw_11ece106.BlendSrcAlpha(7);
                _draw_11ece106.BlendDstRgb(3);
                _draw_11ece106.Const(0, DP_11ece106_14_8_4.NeedFract);
                _draw_11ece106.Const(1, DP_11ece106_14_8_4.Texture == NULL);
                _draw_11ece106.Use();
                _draw_11ece106.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ece106.Uniform(3, radius + (extend * 2.0f));
                _draw_11ece106.Uniform2(4, center);
                _draw_11ece106.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ece106.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ece106.Uniform2(7, DP_11ece106_14_8_4.Origin);
                _draw_11ece106.Uniform2(8, DP_11ece106_14_8_4.Size);
                _draw_11ece106.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_11ece106_14_8_4.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_11ece106_14_8_4.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_11ece106.Uniform2(10, (ind9 = DP_11ece106_14_8_4.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_11ece106.Uniform2(11, DP_11ece106_14_8_4.TexCoordScale1);
                _draw_11ece106.Uniform2(12, DP_11ece106_14_8_4.TexCoordBias1);
                _draw_11ece106.Uniform2(13, DP_11ece106_14_8_4.TexCoordScale2);
                _draw_11ece106.Uniform2(14, DP_11ece106_14_8_4.TexCoordBias2);
                _draw_11ece106.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_11ece106.Uniform(16, radiusRcp);
                _draw_11ece106.Uniform(17, radius);
                _draw_11ece106.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ece106.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ece106.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ece106.Uniform(21, 1.0f / smoothness);
                _draw_11ece106.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_11ece106.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ece106_20_2_17, EndVec_11ece106_20_3_18)));
                _draw_11ece106.Uniform2(24, StartVec_11ece106_20_2_17);
                _draw_11ece106.Uniform2(25, EndVec_11ece106_20_3_18);
                _draw_11ece106.Sampler3(26, DP_11ece106_14_8_4.Texture, DP_11ece106_14_8_4.SamplerState);
                _draw_11ece106.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_11ece063_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_11ece063.BlendEnabled(true);
                _draw_11ece063.DepthTestEnabled(false);
                _draw_11ece063.CullFace(uPtr(dc)->CullFace());
                _draw_11ece063.BlendSrcAlpha(7);
                _draw_11ece063.BlendDstRgb(3);
                _draw_11ece063.Const(0, DP_11ece063_14_8_4.NeedFract);
                _draw_11ece063.Const(1, DP_11ece063_14_8_4.Texture == NULL);
                _draw_11ece063.Use();
                _draw_11ece063.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ece063.Uniform(3, radius + (extend * 2.0f));
                _draw_11ece063.Uniform2(4, center);
                _draw_11ece063.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_11ece063.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_11ece063.Uniform2(7, DP_11ece063_14_8_4.Origin);
                _draw_11ece063.Uniform2(8, DP_11ece063_14_8_4.Size);
                _draw_11ece063.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind10 = DP_11ece063_14_8_4.UVClip, ::g::Uno::Float2__New2(ind10.Z, ind10.W)), (ind11 = DP_11ece063_14_8_4.UVClip, ::g::Uno::Float2__New2(ind11.X, ind11.Y))));
                _draw_11ece063.Uniform2(10, (ind12 = DP_11ece063_14_8_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y)));
                _draw_11ece063.Uniform2(11, DP_11ece063_14_8_4.TexCoordScale1);
                _draw_11ece063.Uniform2(12, DP_11ece063_14_8_4.TexCoordBias1);
                _draw_11ece063.Uniform2(13, DP_11ece063_14_8_4.TexCoordScale2);
                _draw_11ece063.Uniform2(14, DP_11ece063_14_8_4.TexCoordBias2);
                _draw_11ece063.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_11ece063.Uniform(16, radiusRcp);
                _draw_11ece063.Uniform(17, radius);
                _draw_11ece063.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ece063.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ece063.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_11ece063.Uniform(21, 1.0f / smoothness);
                _draw_11ece063.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_11ece063.Sampler3(23, DP_11ece063_14_8_4.Texture, DP_11ece063_14_8_4.SamplerState);
                _draw_11ece063.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_11ecab87_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_11ecab87_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_11ecab87.BlendEnabled(true);
                _draw_11ecab87.DepthTestEnabled(false);
                _draw_11ecab87.CullFace(uPtr(dc)->CullFace());
                _draw_11ecab87.BlendSrcAlpha(7);
                _draw_11ecab87.BlendDstRgb(3);
                _draw_11ecab87.Use();
                _draw_11ecab87.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_11ecab87.Uniform(1, radius + (extend * 2.0f));
                _draw_11ecab87.Uniform2(2, center);
                _draw_11ecab87.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_11ecab87.Uniform(4, radiusRcp);
                _draw_11ecab87.Uniform(5, radius);
                _draw_11ecab87.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_11ecab87.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_11ecab87.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_11ecab87.Uniform(9, 1.0f / smoothness);
                _draw_11ecab87.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind13 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_11ecab87.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_11ecab87.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_11ecab87_20_2_8, EndVec_11ecab87_20_3_9)));
                _draw_11ecab87.Uniform2(13, StartVec_11ecab87_20_2_8);
                _draw_11ecab87.Uniform2(14, EndVec_11ecab87_20_3_9);
                _draw_11ecab87.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_f46279ef_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_f46279ef_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_f46279ef.BlendEnabled(true);
                _draw_f46279ef.DepthTestEnabled(false);
                _draw_f46279ef.CullFace(uPtr(dc)->CullFace());
                _draw_f46279ef.BlendSrcAlpha(7);
                _draw_f46279ef.BlendDstRgb(3);
                _draw_f46279ef.Use();
                _draw_f46279ef.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_f46279ef.Uniform(1, radius + (extend * 2.0f));
                _draw_f46279ef.Uniform2(2, center);
                _draw_f46279ef.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_f46279ef.Uniform(4, radiusRcp);
                _draw_f46279ef.Uniform(5, radius);
                _draw_f46279ef.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_f46279ef.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_f46279ef.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_f46279ef.Uniform(9, 1.0f / smoothness);
                _draw_f46279ef.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind14 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind14.X, ind14.Y, ind14.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_f46279ef.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_f46279ef.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_f46279ef_20_2_8, EndVec_f46279ef_20_3_9)));
                _draw_f46279ef.Uniform2(13, StartVec_f46279ef_20_2_8);
                _draw_f46279ef.Uniform2(14, EndVec_f46279ef_20_3_9);
                _draw_f46279ef.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_95d5a8aa.BlendEnabled(true);
                _draw_95d5a8aa.DepthTestEnabled(false);
                _draw_95d5a8aa.CullFace(uPtr(dc)->CullFace());
                _draw_95d5a8aa.BlendSrcAlpha(7);
                _draw_95d5a8aa.BlendDstRgb(3);
                _draw_95d5a8aa.Use();
                _draw_95d5a8aa.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_95d5a8aa.Uniform(1, radius + (extend * 2.0f));
                _draw_95d5a8aa.Uniform2(2, center);
                _draw_95d5a8aa.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_95d5a8aa.Uniform(4, radiusRcp);
                _draw_95d5a8aa.Uniform(5, radius);
                _draw_95d5a8aa.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_95d5a8aa.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_95d5a8aa.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_95d5a8aa.Uniform(9, 1.0f / smoothness);
                _draw_95d5a8aa.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind15 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind15.X, ind15.Y, ind15.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_95d5a8aa.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_95d5a8aa.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_46b4edd5_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_46b4edd5_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_46b4edd5_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_46b4edd5.BlendEnabled(true);
                _draw_46b4edd5.DepthTestEnabled(false);
                _draw_46b4edd5.CullFace(uPtr(dc)->CullFace());
                _draw_46b4edd5.BlendSrcAlpha(7);
                _draw_46b4edd5.BlendDstRgb(3);
                _draw_46b4edd5.Use();
                _draw_46b4edd5.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_46b4edd5.Uniform(1, radius + (extend * 2.0f));
                _draw_46b4edd5.Uniform2(2, center);
                _draw_46b4edd5.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_46b4edd5.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_46b4edd5.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_46b4edd5.Uniform(6, radiusRcp);
                _draw_46b4edd5.Uniform(7, radius);
                _draw_46b4edd5.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46b4edd5.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46b4edd5.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_46b4edd5.Uniform(11, 1.0f / smoothness);
                _draw_46b4edd5.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_46b4edd5.Uniform10(13, endPoints_46b4edd5_14_17_6);
                _draw_46b4edd5.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_46b4edd5_14_17_6.Z, endPoints_46b4edd5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_46b4edd5_14_17_6.X, endPoints_46b4edd5_14_17_6.Y))));
                _draw_46b4edd5.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_46b4edd5_14_17_6.Z, endPoints_46b4edd5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_46b4edd5_14_17_6.X, endPoints_46b4edd5_14_17_6.Y))));
                _draw_46b4edd5.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_46b4edd5_20_2_15, EndVec_46b4edd5_20_3_16)));
                _draw_46b4edd5.Uniform2(17, StartVec_46b4edd5_20_2_15);
                _draw_46b4edd5.Uniform2(18, EndVec_46b4edd5_20_3_16);
                _draw_46b4edd5.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_46b4edd5.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_46b4edf4_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_46b4edf4_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_46b4edf4_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_46b4edf4.BlendEnabled(true);
                _draw_46b4edf4.DepthTestEnabled(false);
                _draw_46b4edf4.CullFace(uPtr(dc)->CullFace());
                _draw_46b4edf4.BlendSrcAlpha(7);
                _draw_46b4edf4.BlendDstRgb(3);
                _draw_46b4edf4.Use();
                _draw_46b4edf4.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_46b4edf4.Uniform(1, radius + (extend * 2.0f));
                _draw_46b4edf4.Uniform2(2, center);
                _draw_46b4edf4.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_46b4edf4.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_46b4edf4.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_46b4edf4.Uniform(6, radiusRcp);
                _draw_46b4edf4.Uniform(7, radius);
                _draw_46b4edf4.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46b4edf4.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46b4edf4.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_46b4edf4.Uniform(11, 1.0f / smoothness);
                _draw_46b4edf4.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_46b4edf4.Uniform10(13, endPoints_46b4edf4_14_17_6);
                _draw_46b4edf4.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_46b4edf4_14_17_6.Z, endPoints_46b4edf4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_46b4edf4_14_17_6.X, endPoints_46b4edf4_14_17_6.Y))));
                _draw_46b4edf4.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_46b4edf4_14_17_6.Z, endPoints_46b4edf4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_46b4edf4_14_17_6.X, endPoints_46b4edf4_14_17_6.Y))));
                _draw_46b4edf4.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_46b4edf4_20_2_15, EndVec_46b4edf4_20_3_16)));
                _draw_46b4edf4.Uniform2(17, StartVec_46b4edf4_20_2_15);
                _draw_46b4edf4.Uniform2(18, EndVec_46b4edf4_20_3_16);
                _draw_46b4edf4.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_46b4edf4.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_46b4ed0f_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_46b4ed0f.BlendEnabled(true);
                _draw_46b4ed0f.DepthTestEnabled(false);
                _draw_46b4ed0f.CullFace(uPtr(dc)->CullFace());
                _draw_46b4ed0f.BlendSrcAlpha(7);
                _draw_46b4ed0f.BlendDstRgb(3);
                _draw_46b4ed0f.Use();
                _draw_46b4ed0f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_46b4ed0f.Uniform(1, radius + (extend * 2.0f));
                _draw_46b4ed0f.Uniform2(2, center);
                _draw_46b4ed0f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_46b4ed0f.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_46b4ed0f.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_46b4ed0f.Uniform(6, radiusRcp);
                _draw_46b4ed0f.Uniform(7, radius);
                _draw_46b4ed0f.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46b4ed0f.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46b4ed0f.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_46b4ed0f.Uniform(11, 1.0f / smoothness);
                _draw_46b4ed0f.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_46b4ed0f.Uniform10(13, endPoints_46b4ed0f_14_17_6);
                _draw_46b4ed0f.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_46b4ed0f_14_17_6.Z, endPoints_46b4ed0f_14_17_6.W), ::g::Uno::Float2__New2(endPoints_46b4ed0f_14_17_6.X, endPoints_46b4ed0f_14_17_6.Y))));
                _draw_46b4ed0f.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_46b4ed0f_14_17_6.Z, endPoints_46b4ed0f_14_17_6.W), ::g::Uno::Float2__New2(endPoints_46b4ed0f_14_17_6.X, endPoints_46b4ed0f_14_17_6.Y))));
                _draw_46b4ed0f.Sampler3(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_46b4ed0f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_1a74461f_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1a74461f_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_1a74461f.BlendEnabled(true);
                _draw_1a74461f.DepthTestEnabled(false);
                _draw_1a74461f.CullFace(uPtr(dc)->CullFace());
                _draw_1a74461f.BlendSrcAlpha(7);
                _draw_1a74461f.BlendDstRgb(3);
                _draw_1a74461f.Use();
                _draw_1a74461f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1a74461f.Uniform(1, radius + (extend * 2.0f));
                _draw_1a74461f.Uniform2(2, center);
                _draw_1a74461f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1a74461f.Uniform(4, radiusRcp);
                _draw_1a74461f.Uniform(5, radius);
                _draw_1a74461f.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1a74461f.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1a74461f.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_1a74461f.Uniform(9, 1.0f / smoothness);
                _draw_1a74461f.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind16 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind16.X, ind16.Y, ind16.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_1a74461f.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1a74461f_20_2_8, EndVec_1a74461f_20_3_9)));
                _draw_1a74461f.Uniform2(12, StartVec_1a74461f_20_2_8);
                _draw_1a74461f.Uniform2(13, EndVec_1a74461f_20_3_9);
                _draw_1a74461f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_1a744642_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1a744642_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_1a744642.BlendEnabled(true);
                _draw_1a744642.DepthTestEnabled(false);
                _draw_1a744642.CullFace(uPtr(dc)->CullFace());
                _draw_1a744642.BlendSrcAlpha(7);
                _draw_1a744642.BlendDstRgb(3);
                _draw_1a744642.Use();
                _draw_1a744642.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1a744642.Uniform(1, radius + (extend * 2.0f));
                _draw_1a744642.Uniform2(2, center);
                _draw_1a744642.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1a744642.Uniform(4, radiusRcp);
                _draw_1a744642.Uniform(5, radius);
                _draw_1a744642.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1a744642.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1a744642.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_1a744642.Uniform(9, 1.0f / smoothness);
                _draw_1a744642.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind17 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_1a744642.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1a744642_20_2_8, EndVec_1a744642_20_3_9)));
                _draw_1a744642.Uniform2(12, StartVec_1a744642_20_2_8);
                _draw_1a744642.Uniform2(13, EndVec_1a744642_20_3_9);
                _draw_1a744642.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_1a744661.BlendEnabled(true);
                _draw_1a744661.DepthTestEnabled(false);
                _draw_1a744661.CullFace(uPtr(dc)->CullFace());
                _draw_1a744661.BlendSrcAlpha(7);
                _draw_1a744661.BlendDstRgb(3);
                _draw_1a744661.Use();
                _draw_1a744661.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1a744661.Uniform(1, radius + (extend * 2.0f));
                _draw_1a744661.Uniform2(2, center);
                _draw_1a744661.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1a744661.Uniform(4, radiusRcp);
                _draw_1a744661.Uniform(5, radius);
                _draw_1a744661.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1a744661.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1a744661.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_1a744661.Uniform(9, 1.0f / smoothness);
                _draw_1a744661.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind18 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_1a744661.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
    else if (uIs(cover, ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_a9966daf_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_a9966daf_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_a9966daf.BlendEnabled(true);
                _draw_a9966daf.DepthTestEnabled(false);
                _draw_a9966daf.CullFace(uPtr(dc)->CullFace());
                _draw_a9966daf.BlendSrcAlpha(7);
                _draw_a9966daf.BlendDstRgb(3);
                _draw_a9966daf.Use();
                _draw_a9966daf.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_a9966daf.Uniform(1, radius + (extend * 2.0f));
                _draw_a9966daf.Uniform2(2, center);
                _draw_a9966daf.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_a9966daf.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_a9966daf.Uniform2(5, (ind19 = visual->ActualSize(), ::g::Uno::Float2__New2(ind19.X, ind19.Y)));
                _draw_a9966daf.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_a9966daf.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_a9966daf.Uniform(8, radiusRcp);
                _draw_a9966daf.Uniform(9, radius);
                _draw_a9966daf.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_a9966daf.Uniform(11, 1.0f / smoothness);
                _draw_a9966daf.Uniform(12, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_a9966daf.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_a9966daf_20_2_12, EndVec_a9966daf_20_3_13)));
                _draw_a9966daf.Uniform2(14, StartVec_a9966daf_20_2_12);
                _draw_a9966daf.Uniform2(15, EndVec_a9966daf_20_3_13);
                _draw_a9966daf.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_f74f4eea_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_f74f4eea_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_f74f4eea.BlendEnabled(true);
                _draw_f74f4eea.DepthTestEnabled(false);
                _draw_f74f4eea.CullFace(uPtr(dc)->CullFace());
                _draw_f74f4eea.BlendSrcAlpha(7);
                _draw_f74f4eea.BlendDstRgb(3);
                _draw_f74f4eea.Use();
                _draw_f74f4eea.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_f74f4eea.Uniform(1, radius + (extend * 2.0f));
                _draw_f74f4eea.Uniform2(2, center);
                _draw_f74f4eea.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_f74f4eea.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_f74f4eea.Uniform2(5, (ind20 = visual->ActualSize(), ::g::Uno::Float2__New2(ind20.X, ind20.Y)));
                _draw_f74f4eea.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_f74f4eea.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_f74f4eea.Uniform(8, radiusRcp);
                _draw_f74f4eea.Uniform(9, radius);
                _draw_f74f4eea.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_f74f4eea.Uniform(11, 1.0f / smoothness);
                _draw_f74f4eea.Uniform(12, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_f74f4eea.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_f74f4eea_20_2_12, EndVec_f74f4eea_20_3_13)));
                _draw_f74f4eea.Uniform2(14, StartVec_f74f4eea_20_2_12);
                _draw_f74f4eea.Uniform2(15, EndVec_f74f4eea_20_3_13);
                _draw_f74f4eea.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_6646ba0a.BlendEnabled(true);
                _draw_6646ba0a.DepthTestEnabled(false);
                _draw_6646ba0a.CullFace(uPtr(dc)->CullFace());
                _draw_6646ba0a.BlendSrcAlpha(7);
                _draw_6646ba0a.BlendDstRgb(3);
                _draw_6646ba0a.Use();
                _draw_6646ba0a.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_6646ba0a.Uniform(1, radius + (extend * 2.0f));
                _draw_6646ba0a.Uniform2(2, center);
                _draw_6646ba0a.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_6646ba0a.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_6646ba0a.Uniform2(5, (ind21 = visual->ActualSize(), ::g::Uno::Float2__New2(ind21.X, ind21.Y)));
                _draw_6646ba0a.Uniform(6, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_6646ba0a.Uniform10(7, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_6646ba0a.Uniform(8, radiusRcp);
                _draw_6646ba0a.Uniform(9, radius);
                _draw_6646ba0a.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_6646ba0a.Uniform(11, 1.0f / smoothness);
                _draw_6646ba0a.Uniform(12, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_6646ba0a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_219105d9_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_219105d9_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_219105d9_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_219105d9.BlendEnabled(true);
                _draw_219105d9.DepthTestEnabled(false);
                _draw_219105d9.CullFace(uPtr(dc)->CullFace());
                _draw_219105d9.BlendSrcAlpha(7);
                _draw_219105d9.BlendDstRgb(3);
                _draw_219105d9.Const(0, DP_219105d9_14_8_4.NeedFract);
                _draw_219105d9.Const(1, DP_219105d9_14_8_4.Texture == NULL);
                _draw_219105d9.Use();
                _draw_219105d9.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_219105d9.Uniform(3, radius + (extend * 2.0f));
                _draw_219105d9.Uniform2(4, center);
                _draw_219105d9.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_219105d9.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_219105d9.Uniform2(7, DP_219105d9_14_8_4.Origin);
                _draw_219105d9.Uniform2(8, DP_219105d9_14_8_4.Size);
                _draw_219105d9.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind22 = DP_219105d9_14_8_4.UVClip, ::g::Uno::Float2__New2(ind22.Z, ind22.W)), (ind23 = DP_219105d9_14_8_4.UVClip, ::g::Uno::Float2__New2(ind23.X, ind23.Y))));
                _draw_219105d9.Uniform2(10, (ind24 = DP_219105d9_14_8_4.UVClip, ::g::Uno::Float2__New2(ind24.X, ind24.Y)));
                _draw_219105d9.Uniform2(11, DP_219105d9_14_8_4.TexCoordScale1);
                _draw_219105d9.Uniform2(12, DP_219105d9_14_8_4.TexCoordBias1);
                _draw_219105d9.Uniform2(13, DP_219105d9_14_8_4.TexCoordScale2);
                _draw_219105d9.Uniform2(14, DP_219105d9_14_8_4.TexCoordBias2);
                _draw_219105d9.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_219105d9.Uniform(16, radiusRcp);
                _draw_219105d9.Uniform(17, radius);
                _draw_219105d9.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_219105d9.Uniform(19, 1.0f / smoothness);
                _draw_219105d9.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_219105d9.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_219105d9_20_2_16, EndVec_219105d9_20_3_17)));
                _draw_219105d9.Uniform2(22, StartVec_219105d9_20_2_16);
                _draw_219105d9.Uniform2(23, EndVec_219105d9_20_3_17);
                _draw_219105d9.Sampler3(24, DP_219105d9_14_8_4.Texture, DP_219105d9_14_8_4.SamplerState);
                _draw_219105d9.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_801dd71e_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_801dd71e_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_801dd71e_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_801dd71e.BlendEnabled(true);
                _draw_801dd71e.DepthTestEnabled(false);
                _draw_801dd71e.CullFace(uPtr(dc)->CullFace());
                _draw_801dd71e.BlendSrcAlpha(7);
                _draw_801dd71e.BlendDstRgb(3);
                _draw_801dd71e.Const(0, DP_801dd71e_14_8_4.NeedFract);
                _draw_801dd71e.Const(1, DP_801dd71e_14_8_4.Texture == NULL);
                _draw_801dd71e.Use();
                _draw_801dd71e.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_801dd71e.Uniform(3, radius + (extend * 2.0f));
                _draw_801dd71e.Uniform2(4, center);
                _draw_801dd71e.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_801dd71e.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_801dd71e.Uniform2(7, DP_801dd71e_14_8_4.Origin);
                _draw_801dd71e.Uniform2(8, DP_801dd71e_14_8_4.Size);
                _draw_801dd71e.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind25 = DP_801dd71e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind25.Z, ind25.W)), (ind26 = DP_801dd71e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind26.X, ind26.Y))));
                _draw_801dd71e.Uniform2(10, (ind27 = DP_801dd71e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind27.X, ind27.Y)));
                _draw_801dd71e.Uniform2(11, DP_801dd71e_14_8_4.TexCoordScale1);
                _draw_801dd71e.Uniform2(12, DP_801dd71e_14_8_4.TexCoordBias1);
                _draw_801dd71e.Uniform2(13, DP_801dd71e_14_8_4.TexCoordScale2);
                _draw_801dd71e.Uniform2(14, DP_801dd71e_14_8_4.TexCoordBias2);
                _draw_801dd71e.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_801dd71e.Uniform(16, radiusRcp);
                _draw_801dd71e.Uniform(17, radius);
                _draw_801dd71e.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_801dd71e.Uniform(19, 1.0f / smoothness);
                _draw_801dd71e.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_801dd71e.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_801dd71e_20_2_16, EndVec_801dd71e_20_3_17)));
                _draw_801dd71e.Uniform2(22, StartVec_801dd71e_20_2_16);
                _draw_801dd71e.Uniform2(23, EndVec_801dd71e_20_3_17);
                _draw_801dd71e.Sampler3(24, DP_801dd71e_14_8_4.Texture, DP_801dd71e_14_8_4.SamplerState);
                _draw_801dd71e.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_3264f5e3_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_3264f5e3.BlendEnabled(true);
                _draw_3264f5e3.DepthTestEnabled(false);
                _draw_3264f5e3.CullFace(uPtr(dc)->CullFace());
                _draw_3264f5e3.BlendSrcAlpha(7);
                _draw_3264f5e3.BlendDstRgb(3);
                _draw_3264f5e3.Const(0, DP_3264f5e3_14_8_4.NeedFract);
                _draw_3264f5e3.Const(1, DP_3264f5e3_14_8_4.Texture == NULL);
                _draw_3264f5e3.Use();
                _draw_3264f5e3.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_3264f5e3.Uniform(3, radius + (extend * 2.0f));
                _draw_3264f5e3.Uniform2(4, center);
                _draw_3264f5e3.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_3264f5e3.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_3264f5e3.Uniform2(7, DP_3264f5e3_14_8_4.Origin);
                _draw_3264f5e3.Uniform2(8, DP_3264f5e3_14_8_4.Size);
                _draw_3264f5e3.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind28 = DP_3264f5e3_14_8_4.UVClip, ::g::Uno::Float2__New2(ind28.Z, ind28.W)), (ind29 = DP_3264f5e3_14_8_4.UVClip, ::g::Uno::Float2__New2(ind29.X, ind29.Y))));
                _draw_3264f5e3.Uniform2(10, (ind30 = DP_3264f5e3_14_8_4.UVClip, ::g::Uno::Float2__New2(ind30.X, ind30.Y)));
                _draw_3264f5e3.Uniform2(11, DP_3264f5e3_14_8_4.TexCoordScale1);
                _draw_3264f5e3.Uniform2(12, DP_3264f5e3_14_8_4.TexCoordBias1);
                _draw_3264f5e3.Uniform2(13, DP_3264f5e3_14_8_4.TexCoordScale2);
                _draw_3264f5e3.Uniform2(14, DP_3264f5e3_14_8_4.TexCoordBias2);
                _draw_3264f5e3.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_3264f5e3.Uniform(16, radiusRcp);
                _draw_3264f5e3.Uniform(17, radius);
                _draw_3264f5e3.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_3264f5e3.Uniform(19, 1.0f / smoothness);
                _draw_3264f5e3.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_3264f5e3.Sampler3(21, DP_3264f5e3_14_8_4.Texture, DP_3264f5e3_14_8_4.SamplerState);
                _draw_3264f5e3.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_4da28b23_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_4da28b23_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_4da28b23.BlendEnabled(true);
                _draw_4da28b23.DepthTestEnabled(false);
                _draw_4da28b23.CullFace(uPtr(dc)->CullFace());
                _draw_4da28b23.BlendSrcAlpha(7);
                _draw_4da28b23.BlendDstRgb(3);
                _draw_4da28b23.Use();
                _draw_4da28b23.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_4da28b23.Uniform(1, radius + (extend * 2.0f));
                _draw_4da28b23.Uniform2(2, center);
                _draw_4da28b23.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_4da28b23.Uniform(4, radiusRcp);
                _draw_4da28b23.Uniform(5, radius);
                _draw_4da28b23.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_4da28b23.Uniform(7, 1.0f / smoothness);
                _draw_4da28b23.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind31 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind31.X, ind31.Y, ind31.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_4da28b23.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_4da28b23.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_4da28b23_20_2_7, EndVec_4da28b23_20_3_8)));
                _draw_4da28b23.Uniform2(11, StartVec_4da28b23_20_2_7);
                _draw_4da28b23.Uniform2(12, EndVec_4da28b23_20_3_8);
                _draw_4da28b23.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_ffe9a9e8_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_ffe9a9e8_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_ffe9a9e8.BlendEnabled(true);
                _draw_ffe9a9e8.DepthTestEnabled(false);
                _draw_ffe9a9e8.CullFace(uPtr(dc)->CullFace());
                _draw_ffe9a9e8.BlendSrcAlpha(7);
                _draw_ffe9a9e8.BlendDstRgb(3);
                _draw_ffe9a9e8.Use();
                _draw_ffe9a9e8.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_ffe9a9e8.Uniform(1, radius + (extend * 2.0f));
                _draw_ffe9a9e8.Uniform2(2, center);
                _draw_ffe9a9e8.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_ffe9a9e8.Uniform(4, radiusRcp);
                _draw_ffe9a9e8.Uniform(5, radius);
                _draw_ffe9a9e8.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_ffe9a9e8.Uniform(7, 1.0f / smoothness);
                _draw_ffe9a9e8.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind32 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind32.X, ind32.Y, ind32.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_ffe9a9e8.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_ffe9a9e8.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_ffe9a9e8_20_2_7, EndVec_ffe9a9e8_20_3_8)));
                _draw_ffe9a9e8.Uniform2(11, StartVec_ffe9a9e8_20_2_7);
                _draw_ffe9a9e8.Uniform2(12, EndVec_ffe9a9e8_20_3_8);
                _draw_ffe9a9e8.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_5e767b2d.BlendEnabled(true);
                _draw_5e767b2d.DepthTestEnabled(false);
                _draw_5e767b2d.CullFace(uPtr(dc)->CullFace());
                _draw_5e767b2d.BlendSrcAlpha(7);
                _draw_5e767b2d.BlendDstRgb(3);
                _draw_5e767b2d.Use();
                _draw_5e767b2d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_5e767b2d.Uniform(1, radius + (extend * 2.0f));
                _draw_5e767b2d.Uniform2(2, center);
                _draw_5e767b2d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_5e767b2d.Uniform(4, radiusRcp);
                _draw_5e767b2d.Uniform(5, radius);
                _draw_5e767b2d.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_5e767b2d.Uniform(7, 1.0f / smoothness);
                _draw_5e767b2d.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind33 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind33.X, ind33.Y, ind33.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_5e767b2d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_5e767b2d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_10bbec15_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_10bbec15_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_10bbec15_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_10bbec15.BlendEnabled(true);
                _draw_10bbec15.DepthTestEnabled(false);
                _draw_10bbec15.CullFace(uPtr(dc)->CullFace());
                _draw_10bbec15.BlendSrcAlpha(7);
                _draw_10bbec15.BlendDstRgb(3);
                _draw_10bbec15.Use();
                _draw_10bbec15.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_10bbec15.Uniform(1, radius + (extend * 2.0f));
                _draw_10bbec15.Uniform2(2, center);
                _draw_10bbec15.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_10bbec15.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_10bbec15.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_10bbec15.Uniform(6, radiusRcp);
                _draw_10bbec15.Uniform(7, radius);
                _draw_10bbec15.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_10bbec15.Uniform(9, 1.0f / smoothness);
                _draw_10bbec15.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_10bbec15.Uniform10(11, endPoints_10bbec15_14_17_6);
                _draw_10bbec15.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_10bbec15_14_17_6.Z, endPoints_10bbec15_14_17_6.W), ::g::Uno::Float2__New2(endPoints_10bbec15_14_17_6.X, endPoints_10bbec15_14_17_6.Y))));
                _draw_10bbec15.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_10bbec15_14_17_6.Z, endPoints_10bbec15_14_17_6.W), ::g::Uno::Float2__New2(endPoints_10bbec15_14_17_6.X, endPoints_10bbec15_14_17_6.Y))));
                _draw_10bbec15.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_10bbec15_20_2_14, EndVec_10bbec15_20_3_15)));
                _draw_10bbec15.Uniform2(15, StartVec_10bbec15_20_2_14);
                _draw_10bbec15.Uniform2(16, EndVec_10bbec15_20_3_15);
                _draw_10bbec15.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_10bbec15.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_b2987d82_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_b2987d82_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_b2987d82_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_b2987d82.BlendEnabled(true);
                _draw_b2987d82.DepthTestEnabled(false);
                _draw_b2987d82.CullFace(uPtr(dc)->CullFace());
                _draw_b2987d82.BlendSrcAlpha(7);
                _draw_b2987d82.BlendDstRgb(3);
                _draw_b2987d82.Use();
                _draw_b2987d82.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_b2987d82.Uniform(1, radius + (extend * 2.0f));
                _draw_b2987d82.Uniform2(2, center);
                _draw_b2987d82.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_b2987d82.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_b2987d82.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_b2987d82.Uniform(6, radiusRcp);
                _draw_b2987d82.Uniform(7, radius);
                _draw_b2987d82.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_b2987d82.Uniform(9, 1.0f / smoothness);
                _draw_b2987d82.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_b2987d82.Uniform10(11, endPoints_b2987d82_14_17_6);
                _draw_b2987d82.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_b2987d82_14_17_6.Z, endPoints_b2987d82_14_17_6.W), ::g::Uno::Float2__New2(endPoints_b2987d82_14_17_6.X, endPoints_b2987d82_14_17_6.Y))));
                _draw_b2987d82.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_b2987d82_14_17_6.Z, endPoints_b2987d82_14_17_6.W), ::g::Uno::Float2__New2(endPoints_b2987d82_14_17_6.X, endPoints_b2987d82_14_17_6.Y))));
                _draw_b2987d82.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_b2987d82_20_2_14, EndVec_b2987d82_20_3_15)));
                _draw_b2987d82.Uniform2(15, StartVec_b2987d82_20_2_14);
                _draw_b2987d82.Uniform2(16, EndVec_b2987d82_20_3_15);
                _draw_b2987d82.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_b2987d82.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_64df9c47_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_64df9c47.BlendEnabled(true);
                _draw_64df9c47.DepthTestEnabled(false);
                _draw_64df9c47.CullFace(uPtr(dc)->CullFace());
                _draw_64df9c47.BlendSrcAlpha(7);
                _draw_64df9c47.BlendDstRgb(3);
                _draw_64df9c47.Use();
                _draw_64df9c47.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_64df9c47.Uniform(1, radius + (extend * 2.0f));
                _draw_64df9c47.Uniform2(2, center);
                _draw_64df9c47.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_64df9c47.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_64df9c47.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_64df9c47.Uniform(6, radiusRcp);
                _draw_64df9c47.Uniform(7, radius);
                _draw_64df9c47.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_64df9c47.Uniform(9, 1.0f / smoothness);
                _draw_64df9c47.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_64df9c47.Uniform10(11, endPoints_64df9c47_14_17_6);
                _draw_64df9c47.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_64df9c47_14_17_6.Z, endPoints_64df9c47_14_17_6.W), ::g::Uno::Float2__New2(endPoints_64df9c47_14_17_6.X, endPoints_64df9c47_14_17_6.Y))));
                _draw_64df9c47.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_64df9c47_14_17_6.Z, endPoints_64df9c47_14_17_6.W), ::g::Uno::Float2__New2(endPoints_64df9c47_14_17_6.X, endPoints_64df9c47_14_17_6.Y))));
                _draw_64df9c47.Sampler3(14, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_64df9c47.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_6f4dbf7c_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_6f4dbf7c_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_6f4dbf7c.BlendEnabled(true);
                _draw_6f4dbf7c.DepthTestEnabled(false);
                _draw_6f4dbf7c.CullFace(uPtr(dc)->CullFace());
                _draw_6f4dbf7c.BlendSrcAlpha(7);
                _draw_6f4dbf7c.BlendDstRgb(3);
                _draw_6f4dbf7c.Use();
                _draw_6f4dbf7c.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_6f4dbf7c.Uniform(1, radius + (extend * 2.0f));
                _draw_6f4dbf7c.Uniform2(2, center);
                _draw_6f4dbf7c.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_6f4dbf7c.Uniform(4, radiusRcp);
                _draw_6f4dbf7c.Uniform(5, radius);
                _draw_6f4dbf7c.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_6f4dbf7c.Uniform(7, 1.0f / smoothness);
                _draw_6f4dbf7c.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind34 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind34.X, ind34.Y, ind34.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_6f4dbf7c.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_6f4dbf7c_20_2_7, EndVec_6f4dbf7c_20_3_8)));
                _draw_6f4dbf7c.Uniform2(10, StartVec_6f4dbf7c_20_2_7);
                _draw_6f4dbf7c.Uniform2(11, EndVec_6f4dbf7c_20_3_8);
                _draw_6f4dbf7c.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_2194de41_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_2194de41_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_2194de41.BlendEnabled(true);
                _draw_2194de41.DepthTestEnabled(false);
                _draw_2194de41.CullFace(uPtr(dc)->CullFace());
                _draw_2194de41.BlendSrcAlpha(7);
                _draw_2194de41.BlendDstRgb(3);
                _draw_2194de41.Use();
                _draw_2194de41.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_2194de41.Uniform(1, radius + (extend * 2.0f));
                _draw_2194de41.Uniform2(2, center);
                _draw_2194de41.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_2194de41.Uniform(4, radiusRcp);
                _draw_2194de41.Uniform(5, radius);
                _draw_2194de41.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_2194de41.Uniform(7, 1.0f / smoothness);
                _draw_2194de41.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind35 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind35.X, ind35.Y, ind35.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_2194de41.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_2194de41_20_2_7, EndVec_2194de41_20_3_8)));
                _draw_2194de41.Uniform2(10, StartVec_2194de41_20_2_7);
                _draw_2194de41.Uniform2(11, EndVec_2194de41_20_3_8);
                _draw_2194de41.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_8021af86.BlendEnabled(true);
                _draw_8021af86.DepthTestEnabled(false);
                _draw_8021af86.CullFace(uPtr(dc)->CullFace());
                _draw_8021af86.BlendSrcAlpha(7);
                _draw_8021af86.BlendDstRgb(3);
                _draw_8021af86.Use();
                _draw_8021af86.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_8021af86.Uniform(1, radius + (extend * 2.0f));
                _draw_8021af86.Uniform2(2, center);
                _draw_8021af86.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_8021af86.Uniform(4, radiusRcp);
                _draw_8021af86.Uniform(5, radius);
                _draw_8021af86.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_8021af86.Uniform(7, 1.0f / smoothness);
                _draw_8021af86.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind36 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind36.X, ind36.Y, ind36.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_8021af86.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) [instance] :42
void Circle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float)");
    Draw(dc, visual, radius, brush, _fillCoverage, _oneLimitCoverage, smoothness, center, smoothness);
}

// private generated void init_DrawCalls() [instance] :20
void Circle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "init_DrawCalls()");
    _draw_11ecc447 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1df8());
    _draw_11ecc46a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1dfb());
    _draw_11ecc489 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1dfa());
    _draw_11ece0a5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1ed6());
    _draw_11ece106 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1ed7());
    _draw_11ece063 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1ed4());
    _draw_11ecab87 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef7ec1d38());
    _draw_f46279ef = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle42b21980());
    _draw_95d5a8aa = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee5598e1b());
    _draw_46b4edd5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0f9e740a());
    _draw_46b4edf4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0f9e7409());
    _draw_46b4ed0f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0f9e7404());
    _draw_1a74461f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle39b04c1c());
    _draw_1a744642 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle39b04c1f());
    _draw_1a744661 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle39b04c1e());
    _draw_a9966daf = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlebdafe7e0());
    _draw_f74f4eea = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle60575c7b());
    _draw_6646ba0a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled2eb8cb7());
    _draw_219105d9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle73bf34d2());
    _draw_801dd71e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled117c037());
    _draw_3264f5e3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle2e704b9c());
    _draw_4da28b23 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlea1047bf8());
    _draw_ffe9a9e8 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlefe5d075d());
    _draw_5e767b2d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle5bb592c2());
    _draw_10bbec15 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleb90e1dc2());
    _draw_b2987d82 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle012b044f());
    _draw_64df9c47 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle5e838fb4());
    _draw_6f4dbf7c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle1666aa55());
    _draw_2194de41 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle73bf35ba());
    _draw_8021af86 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled117c11f());
}

// private void InitBuffers() [instance] :52
void Circle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "InitBuffers()");
    _bufferVertex = ::g::Fuse::Drawing::Internal::Float2Buffer::New3();
    _bufferIndex = ::g::Fuse::Drawing::Internal::UShortBuffer::New3();
    int32_t numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::g::Uno::Math::Sin1(theta);
    uPtr(_bufferVertex)->Append(0.0, 0.0);

    for (int32_t i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        uPtr(_bufferVertex)->Append((double)(::g::Uno::Math::Cos1(r) * len), (double)(::g::Uno::Math::Sin1(r) * len));
        uPtr(_bufferIndex)->Append(0);
        uPtr(_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : i + 2);
        uPtr(_bufferIndex)->Append(i + 1);
    }

    uPtr(_bufferVertex)->InitDeviceVertex(0);
    uPtr(_bufferIndex)->InitDeviceIndex(0);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) [instance] :26
void Circle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Circle", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    Draw(dc, visual, radius, stroke->Brush(), sc, _oneLimitCoverage, extend, center, smoothness);
}

// public generated Circle New() [static] :20
Circle* Circle::New1()
{
    Circle* obj37 = (Circle*)uNew(Circle_typeof());
    obj37->ctor_();
    return obj37;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Wedge.uno
// ---------------------------------------------------------------------

// internal sealed class ConcaveWedgeCoverage :46
// {
static void ConcaveWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConcaveWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConcaveWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", options);
    type->fp_build_ = ConcaveWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConcaveWedgeCoverage__New1_fn;
    return type;
}

// public generated ConcaveWedgeCoverage() :46
void ConcaveWedgeCoverage__ctor_2_fn(ConcaveWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConcaveWedgeCoverage New() :46
void ConcaveWedgeCoverage__New1_fn(ConcaveWedgeCoverage** __retval)
{
    *__retval = ConcaveWedgeCoverage::New1();
}

// public generated ConcaveWedgeCoverage() [instance] :46
void ConcaveWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConcaveWedgeCoverage New() [static] :46
ConcaveWedgeCoverage* ConcaveWedgeCoverage::New1()
{
    ConcaveWedgeCoverage* obj1 = (ConcaveWedgeCoverage*)uNew(ConcaveWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Wedge.uno
// ---------------------------------------------------------------------

// internal sealed class ConvexWedgeCoverage :41
// {
static void ConvexWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConvexWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConvexWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConvexWedgeCoverage", options);
    type->fp_build_ = ConvexWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConvexWedgeCoverage__New1_fn;
    return type;
}

// public generated ConvexWedgeCoverage() :41
void ConvexWedgeCoverage__ctor_2_fn(ConvexWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConvexWedgeCoverage New() :41
void ConvexWedgeCoverage__New1_fn(ConvexWedgeCoverage** __retval)
{
    *__retval = ConvexWedgeCoverage::New1();
}

// public generated ConvexWedgeCoverage() [instance] :41
void ConvexWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConvexWedgeCoverage New() [static] :41
ConvexWedgeCoverage* ConvexWedgeCoverage::New1()
{
    ConvexWedgeCoverage* obj1 = (ConvexWedgeCoverage*)uNew(ConvexWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Rectangle.uno
// -------------------------------------------------------------------------

// internal abstract class Coverage :36
// {
static void Coverage_build(uType* type)
{
}

uType* Coverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Coverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Coverage", options);
    type->fp_build_ = Coverage_build;
    return type;
}

// protected generated Coverage() :36
void Coverage__ctor__fn(Coverage* __this)
{
    __this->ctor_();
}

// protected generated Coverage() [instance] :36
void Coverage::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Rectangle.uno
// -------------------------------------------------------------------------

// internal class Falloff :55
// {
static void Falloff_build(uType* type)
{
}

uType* Falloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Falloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Falloff", options);
    type->fp_build_ = Falloff_build;
    type->fp_ctor_ = (void*)Falloff__New1_fn;
    return type;
}

// public generated Falloff() :55
void Falloff__ctor__fn(Falloff* __this)
{
    __this->ctor_();
}

// public generated Falloff New() :55
void Falloff__New1_fn(Falloff** __retval)
{
    *__retval = Falloff::New1();
}

// public generated Falloff() [instance] :55
void Falloff::ctor_()
{
}

// public generated Falloff New() [static] :55
Falloff* Falloff::New1()
{
    Falloff* obj1 = (Falloff*)uNew(Falloff_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Rectangle.uno
// -------------------------------------------------------------------------

// internal sealed class FillCoverage :40
// {
static void FillCoverage_build(uType* type)
{
}

uType* FillCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.ObjectSize = sizeof(FillCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.FillCoverage", options);
    type->fp_build_ = FillCoverage_build;
    type->fp_ctor_ = (void*)FillCoverage__New1_fn;
    return type;
}

// public generated FillCoverage() :40
void FillCoverage__ctor_1_fn(FillCoverage* __this)
{
    __this->ctor_1();
}

// public generated FillCoverage New() :40
void FillCoverage__New1_fn(FillCoverage** __retval)
{
    *__retval = FillCoverage::New1();
}

// public generated FillCoverage() [instance] :40
void FillCoverage::ctor_1()
{
    ctor_();
}

// public generated FillCoverage New() [static] :40
FillCoverage* FillCoverage::New1()
{
    FillCoverage* obj1 = (FillCoverage*)uNew(FillCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Circle.uno
// ----------------------------------------------------------------------

// internal abstract class LimitCoverage :11
// {
static void LimitCoverage_build(uType* type)
{
}

uType* LimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.LimitCoverage", options);
    type->fp_build_ = LimitCoverage_build;
    return type;
}

// protected generated LimitCoverage() :11
void LimitCoverage__ctor__fn(LimitCoverage* __this)
{
    __this->ctor_();
}

// protected generated LimitCoverage() [instance] :11
void LimitCoverage::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Circle.uno
// ----------------------------------------------------------------------

// internal sealed class OneLimitCoverage :15
// {
static void OneLimitCoverage_build(uType* type)
{
}

uType* OneLimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.ObjectSize = sizeof(OneLimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.OneLimitCoverage", options);
    type->fp_build_ = OneLimitCoverage_build;
    type->fp_ctor_ = (void*)OneLimitCoverage__New1_fn;
    return type;
}

// public generated OneLimitCoverage() :15
void OneLimitCoverage__ctor_1_fn(OneLimitCoverage* __this)
{
    __this->ctor_1();
}

// public generated OneLimitCoverage New() :15
void OneLimitCoverage__New1_fn(OneLimitCoverage** __retval)
{
    *__retval = OneLimitCoverage::New1();
}

// public generated OneLimitCoverage() [instance] :15
void OneLimitCoverage::ctor_1()
{
    ctor_();
}

// public generated OneLimitCoverage New() [static] :15
OneLimitCoverage* OneLimitCoverage::New1()
{
    OneLimitCoverage* obj1 = (OneLimitCoverage*)uNew(OneLimitCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Rectangle.uno
// -------------------------------------------------------------------------

// public sealed class Rectangle :67
// {
// static generated Rectangle() :67
static void Rectangle__cctor__fn(uType* __type)
{
    Rectangle::Singleton_ = Rectangle::New1();
}

static void Rectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("more than two non-zero values!");
    ::TYPES[10] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::DashedSolidColor_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[13] = ::TYPES[10/*float[]*/]->Array();
    ::TYPES[14] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Int_typeof()->Array();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Rectangle, _strokeCoverage), 0,
        ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Rectangle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::Falloff_typeof(), offsetof(Rectangle, _shadowFalloff), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _vertexInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _edgeInfo), 0,
        ::g::Fuse::Drawing::Internal::FloatBuffer_typeof(), offsetof(Rectangle, _bufferDistance), 0,
        ::TYPES[10/*float[]*/], offsetof(Rectangle, _uniforms), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1942474), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e194259b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1942cb4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1942d57), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e19434f4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1943513), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e193fb34), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_8d31c878), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_2b82e760), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_2b82e77f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_a73f4dc1), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_270a9c68), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_74c263e5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_37dd72b4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_85953c31), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_8c000b28), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_d9c096a5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_48b7d8c3), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_dd2b0145), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_1a0ff276), 0,
        type, (uintptr_t)&Rectangle::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 27));
    type->Reflection.SetFunctions(4,
        new uFunction("Fill", NULL, (void*)Rectangle__Fill_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Rectangle__New1_fn, 0, true, type, 0),
        new uFunction("Shadow", NULL, (void*)Rectangle__Shadow_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Stroke", NULL, (void*)Rectangle__Stroke_fn, 0, false, uVoid_typeof(), 7, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Visual_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor__fn;
    return type;
}

// public generated Rectangle() :67
void Rectangle__ctor__fn(Rectangle* __this)
{
    __this->ctor_();
}

// private float[] add(float[] a, float[] b) :103
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->add(a, b);
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) :307
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    __this->Draw(dc, visual, *Size, *CornerRadius, brush, cover, *extend, *position, *smoothness, falloff);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) :88
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Fill(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// private generated void init_DrawCalls() :67
void Rectangle__init_DrawCalls_fn(Rectangle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :138
void Rectangle__InitBuffers_fn(Rectangle* __this)
{
    __this->InitBuffers();
}

// private float[] neg(float[] a) :119
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval)
{
    *__retval = __this->neg(a);
}

// public generated Rectangle New() :67
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) :96
void Rectangle__Shadow_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Shadow(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) :72
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Stroke(dc, visual, *Size, *CornerRadius, stroke, *Position, *Smoothness);
}

// private float[] sub(float[] a, float[] b) :111
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->sub(a, b);
}

uSStrong<Rectangle*> Rectangle::Singleton_;

// public generated Rectangle() [instance] :67
void Rectangle::ctor_()
{
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    _shadowFalloff = ::g::Fuse::Drawing::Primitives::ShadowFalloff::New2();
    _uniforms = uArray::New(::TYPES[10/*float[]*/], 10);
    init_DrawCalls();
}

// private float[] add(float[] a, float[] b) [instance] :103
uArray* Rectangle::add(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "add(float[],float[])");
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) + uPtr(b)->Item<float>(i);

    return r;
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) [instance] :307
void Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Draw(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,Fuse.Drawing.Primitives.Coverage,float2,float2,float,[Fuse.Drawing.Primitives.Falloff])");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;

    if (_bufferDistance == NULL)
        InitBuffers();

    float mn = ::g::Uno::Math::Min1(Size.X / 2.0f, Size.Y / 2.0f);

    for (int32_t i = 0; i < 4; ++i)
        CornerRadius.Item(i, ::g::Uno::Math::Clamp1(CornerRadius.Item(i), 0.0f, mn));

    uPtr(_uniforms)->Item<float>(0) = 0.0f;
    uPtr(_uniforms)->Item<float>(1) = CornerRadius.Item(3);
    uPtr(_uniforms)->Item<float>(2) = CornerRadius.Item(2);
    uPtr(_uniforms)->Item<float>(3) = CornerRadius.Item(1);
    uPtr(_uniforms)->Item<float>(4) = CornerRadius.Item(0);
    uPtr(_uniforms)->Item<float>(5) = Size.X;
    uPtr(_uniforms)->Item<float>(6) = Size.Y;
    uPtr(_uniforms)->Item<float>(7) = extend.X;
    uPtr(_uniforms)->Item<float>(8) = extend.Y;
    uPtr(_uniforms)->Item<float>(9) = mn;
    float float16MaxValue = 65504.0f;
    float distanceScale = ::g::Uno::Math::Max1(1.0f, ::g::Uno::Math::Max1(Size.X + extend.X, Size.Y + extend.Y) / ::g::Uno::Math::Sqrt1(float16MaxValue * 0.5f));
    distanceScale = ::g::Uno::Math::Exp22(::g::Uno::Math::Ceil1(::g::Uno::Math::Log22(distanceScale)));
    float distanceScaleRcp = 1.0f / distanceScale;
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(visual, ::TYPES[11/*Fuse.Elements.Element*/]);
    ::g::Uno::Float2 csz = (elm == NULL) ? ::g::Uno::Float2__New1(1.0f) : uPtr(elm)->ActualSize();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e1942474.BlendEnabled(true);
                _draw_e1942474.DepthTestEnabled(false);
                _draw_e1942474.CullFace(uPtr(dc)->CullFace());
                _draw_e1942474.BlendSrcAlpha(7);
                _draw_e1942474.BlendDstRgb(3);
                _draw_e1942474.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942474.Use();
                _draw_e1942474.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942474.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942474.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942474.Uniform1(4, _uniforms);
                _draw_e1942474.Uniform2(5, position);
                _draw_e1942474.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1942474.Uniform2(7, csz);
                _draw_e1942474.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_e1942474.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_e1942474.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_e1942474.Uniform(11, distanceScaleRcp);
                _draw_e1942474.Uniform(12, distanceScale);
                _draw_e1942474.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942474.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942474.Uniform(15, dc->ViewportPixelsPerPoint());
                _draw_e1942474.Uniform(16, 1.0f / smoothness);
                _draw_e1942474.Uniform(17, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_e1942474.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e194259b.BlendEnabled(true);
                _draw_e194259b.DepthTestEnabled(false);
                _draw_e194259b.CullFace(uPtr(dc)->CullFace());
                _draw_e194259b.BlendSrcAlpha(7);
                _draw_e194259b.BlendDstRgb(3);
                _draw_e194259b.Const1(0, uPtr(_uniforms)->Length());
                _draw_e194259b.Use();
                _draw_e194259b.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e194259b.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e194259b.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e194259b.Uniform1(4, _uniforms);
                _draw_e194259b.Uniform2(5, position);
                _draw_e194259b.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e194259b.Uniform2(7, csz);
                _draw_e194259b.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_e194259b.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_e194259b.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_e194259b.Uniform(11, distanceScaleRcp);
                _draw_e194259b.Uniform(12, distanceScale);
                _draw_e194259b.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e194259b.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e194259b.Uniform(15, dc->ViewportPixelsPerPoint());
                _draw_e194259b.Uniform(16, 1.0f / smoothness);
                _draw_e194259b.Uniform(17, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_e194259b.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e1942cb4_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e1942cb4.BlendEnabled(true);
                _draw_e1942cb4.DepthTestEnabled(false);
                _draw_e1942cb4.CullFace(uPtr(dc)->CullFace());
                _draw_e1942cb4.BlendSrcAlpha(7);
                _draw_e1942cb4.BlendDstRgb(3);
                _draw_e1942cb4.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942cb4.Const(1, DP_e1942cb4_14_8_4.NeedFract);
                _draw_e1942cb4.Const(2, DP_e1942cb4_14_8_4.Texture == NULL);
                _draw_e1942cb4.Use();
                _draw_e1942cb4.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942cb4.Uniform1(6, _uniforms);
                _draw_e1942cb4.Uniform2(7, position);
                _draw_e1942cb4.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e1942cb4.Uniform2(9, csz);
                _draw_e1942cb4.Uniform2(10, DP_e1942cb4_14_8_4.Origin);
                _draw_e1942cb4.Uniform2(11, DP_e1942cb4_14_8_4.Size);
                _draw_e1942cb4.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_e1942cb4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_e1942cb4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_e1942cb4.Uniform2(13, (ind3 = DP_e1942cb4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_e1942cb4.Uniform2(14, DP_e1942cb4_14_8_4.TexCoordScale1);
                _draw_e1942cb4.Uniform2(15, DP_e1942cb4_14_8_4.TexCoordBias1);
                _draw_e1942cb4.Uniform2(16, DP_e1942cb4_14_8_4.TexCoordScale2);
                _draw_e1942cb4.Uniform2(17, DP_e1942cb4_14_8_4.TexCoordBias2);
                _draw_e1942cb4.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e1942cb4.Uniform(19, distanceScaleRcp);
                _draw_e1942cb4.Uniform(20, distanceScale);
                _draw_e1942cb4.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942cb4.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942cb4.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_e1942cb4.Uniform(24, 1.0f / smoothness);
                _draw_e1942cb4.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e1942cb4.Sampler3(26, DP_e1942cb4_14_8_4.Texture, DP_e1942cb4_14_8_4.SamplerState);
                _draw_e1942cb4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e1942d57_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e1942d57.BlendEnabled(true);
                _draw_e1942d57.DepthTestEnabled(false);
                _draw_e1942d57.CullFace(uPtr(dc)->CullFace());
                _draw_e1942d57.BlendSrcAlpha(7);
                _draw_e1942d57.BlendDstRgb(3);
                _draw_e1942d57.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942d57.Const(1, DP_e1942d57_14_8_4.NeedFract);
                _draw_e1942d57.Const(2, DP_e1942d57_14_8_4.Texture == NULL);
                _draw_e1942d57.Use();
                _draw_e1942d57.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942d57.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942d57.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942d57.Uniform1(6, _uniforms);
                _draw_e1942d57.Uniform2(7, position);
                _draw_e1942d57.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e1942d57.Uniform2(9, csz);
                _draw_e1942d57.Uniform2(10, DP_e1942d57_14_8_4.Origin);
                _draw_e1942d57.Uniform2(11, DP_e1942d57_14_8_4.Size);
                _draw_e1942d57.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_e1942d57_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_e1942d57_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_e1942d57.Uniform2(13, (ind6 = DP_e1942d57_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_e1942d57.Uniform2(14, DP_e1942d57_14_8_4.TexCoordScale1);
                _draw_e1942d57.Uniform2(15, DP_e1942d57_14_8_4.TexCoordBias1);
                _draw_e1942d57.Uniform2(16, DP_e1942d57_14_8_4.TexCoordScale2);
                _draw_e1942d57.Uniform2(17, DP_e1942d57_14_8_4.TexCoordBias2);
                _draw_e1942d57.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e1942d57.Uniform(19, distanceScaleRcp);
                _draw_e1942d57.Uniform(20, distanceScale);
                _draw_e1942d57.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942d57.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942d57.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_e1942d57.Uniform(24, 1.0f / smoothness);
                _draw_e1942d57.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e1942d57.Sampler3(26, DP_e1942d57_14_8_4.Texture, DP_e1942d57_14_8_4.SamplerState);
                _draw_e1942d57.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e19434f4.BlendEnabled(true);
                _draw_e19434f4.DepthTestEnabled(false);
                _draw_e19434f4.CullFace(uPtr(dc)->CullFace());
                _draw_e19434f4.BlendSrcAlpha(7);
                _draw_e19434f4.BlendDstRgb(3);
                _draw_e19434f4.Const1(0, uPtr(_uniforms)->Length());
                _draw_e19434f4.Use();
                _draw_e19434f4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e19434f4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e19434f4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e19434f4.Uniform1(4, _uniforms);
                _draw_e19434f4.Uniform2(5, position);
                _draw_e19434f4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e19434f4.Uniform(7, distanceScaleRcp);
                _draw_e19434f4.Uniform(8, distanceScale);
                _draw_e19434f4.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e19434f4.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e19434f4.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_e19434f4.Uniform(12, 1.0f / smoothness);
                _draw_e19434f4.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind7 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_e19434f4.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e19434f4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e1943513.BlendEnabled(true);
                _draw_e1943513.DepthTestEnabled(false);
                _draw_e1943513.CullFace(uPtr(dc)->CullFace());
                _draw_e1943513.BlendSrcAlpha(7);
                _draw_e1943513.BlendDstRgb(3);
                _draw_e1943513.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1943513.Use();
                _draw_e1943513.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1943513.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1943513.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1943513.Uniform1(4, _uniforms);
                _draw_e1943513.Uniform2(5, position);
                _draw_e1943513.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1943513.Uniform(7, distanceScaleRcp);
                _draw_e1943513.Uniform(8, distanceScale);
                _draw_e1943513.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1943513.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1943513.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_e1943513.Uniform(12, 1.0f / smoothness);
                _draw_e1943513.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind8 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_e1943513.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e1943513.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_e193fb34_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_e193fb34.BlendEnabled(true);
                _draw_e193fb34.DepthTestEnabled(false);
                _draw_e193fb34.CullFace(uPtr(dc)->CullFace());
                _draw_e193fb34.BlendSrcAlpha(7);
                _draw_e193fb34.BlendDstRgb(3);
                _draw_e193fb34.Const1(0, uPtr(_uniforms)->Length());
                _draw_e193fb34.Use();
                _draw_e193fb34.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e193fb34.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e193fb34.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e193fb34.Uniform1(4, _uniforms);
                _draw_e193fb34.Uniform2(5, position);
                _draw_e193fb34.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e193fb34.Uniform2(7, csz);
                _draw_e193fb34.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_e193fb34.Uniform(9, distanceScaleRcp);
                _draw_e193fb34.Uniform(10, distanceScale);
                _draw_e193fb34.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e193fb34.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e193fb34.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_e193fb34.Uniform(14, 1.0f / smoothness);
                _draw_e193fb34.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_e193fb34.Uniform10(16, endPoints_e193fb34_14_17_6);
                _draw_e193fb34.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.Z, endPoints_e193fb34_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.X, endPoints_e193fb34_14_17_6.Y))));
                _draw_e193fb34.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.Z, endPoints_e193fb34_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e193fb34_14_17_6.X, endPoints_e193fb34_14_17_6.Y))));
                _draw_e193fb34.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_e193fb34.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_8d31c878_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_8d31c878.BlendEnabled(true);
                _draw_8d31c878.DepthTestEnabled(false);
                _draw_8d31c878.CullFace(uPtr(dc)->CullFace());
                _draw_8d31c878.BlendSrcAlpha(7);
                _draw_8d31c878.BlendDstRgb(3);
                _draw_8d31c878.Const1(0, uPtr(_uniforms)->Length());
                _draw_8d31c878.Use();
                _draw_8d31c878.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8d31c878.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8d31c878.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8d31c878.Uniform1(4, _uniforms);
                _draw_8d31c878.Uniform2(5, position);
                _draw_8d31c878.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8d31c878.Uniform2(7, csz);
                _draw_8d31c878.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_8d31c878.Uniform(9, distanceScaleRcp);
                _draw_8d31c878.Uniform(10, distanceScale);
                _draw_8d31c878.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_8d31c878.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_8d31c878.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_8d31c878.Uniform(14, 1.0f / smoothness);
                _draw_8d31c878.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_8d31c878.Uniform10(16, endPoints_8d31c878_14_17_6);
                _draw_8d31c878.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.Z, endPoints_8d31c878_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.X, endPoints_8d31c878_14_17_6.Y))));
                _draw_8d31c878.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.Z, endPoints_8d31c878_14_17_6.W), ::g::Uno::Float2__New2(endPoints_8d31c878_14_17_6.X, endPoints_8d31c878_14_17_6.Y))));
                _draw_8d31c878.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_8d31c878.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_2b82e760.BlendEnabled(true);
                _draw_2b82e760.DepthTestEnabled(false);
                _draw_2b82e760.CullFace(uPtr(dc)->CullFace());
                _draw_2b82e760.BlendSrcAlpha(7);
                _draw_2b82e760.BlendDstRgb(3);
                _draw_2b82e760.Const1(0, uPtr(_uniforms)->Length());
                _draw_2b82e760.Use();
                _draw_2b82e760.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2b82e760.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2b82e760.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2b82e760.Uniform1(4, _uniforms);
                _draw_2b82e760.Uniform2(5, position);
                _draw_2b82e760.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_2b82e760.Uniform(7, distanceScaleRcp);
                _draw_2b82e760.Uniform(8, distanceScale);
                _draw_2b82e760.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2b82e760.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2b82e760.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_2b82e760.Uniform(12, 1.0f / smoothness);
                _draw_2b82e760.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind9 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind9.X, ind9.Y, ind9.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_2b82e760.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_2b82e77f.BlendEnabled(true);
                _draw_2b82e77f.DepthTestEnabled(false);
                _draw_2b82e77f.CullFace(uPtr(dc)->CullFace());
                _draw_2b82e77f.BlendSrcAlpha(7);
                _draw_2b82e77f.BlendDstRgb(3);
                _draw_2b82e77f.Const1(0, uPtr(_uniforms)->Length());
                _draw_2b82e77f.Use();
                _draw_2b82e77f.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2b82e77f.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2b82e77f.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2b82e77f.Uniform1(4, _uniforms);
                _draw_2b82e77f.Uniform2(5, position);
                _draw_2b82e77f.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_2b82e77f.Uniform(7, distanceScaleRcp);
                _draw_2b82e77f.Uniform(8, distanceScale);
                _draw_2b82e77f.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2b82e77f.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2b82e77f.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_2b82e77f.Uniform(12, 1.0f / smoothness);
                _draw_2b82e77f.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind10 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_2b82e77f.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
    else if (uIs(cover, ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*DashedSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_a73f4dc1.BlendEnabled(true);
                _draw_a73f4dc1.DepthTestEnabled(false);
                _draw_a73f4dc1.CullFace(uPtr(dc)->CullFace());
                _draw_a73f4dc1.BlendSrcAlpha(7);
                _draw_a73f4dc1.BlendDstRgb(3);
                _draw_a73f4dc1.Const1(0, uPtr(_uniforms)->Length());
                _draw_a73f4dc1.Use();
                _draw_a73f4dc1.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_a73f4dc1.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_a73f4dc1.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_a73f4dc1.Uniform1(4, _uniforms);
                _draw_a73f4dc1.Uniform2(5, position);
                _draw_a73f4dc1.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_a73f4dc1.Uniform2(7, csz);
                _draw_a73f4dc1.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_a73f4dc1.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_a73f4dc1.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_a73f4dc1.Uniform(11, distanceScaleRcp);
                _draw_a73f4dc1.Uniform(12, distanceScale);
                _draw_a73f4dc1.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_a73f4dc1.Uniform(14, 1.0f / smoothness);
                _draw_a73f4dc1.Uniform(15, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_a73f4dc1.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_270a9c68.BlendEnabled(true);
                _draw_270a9c68.DepthTestEnabled(false);
                _draw_270a9c68.CullFace(uPtr(dc)->CullFace());
                _draw_270a9c68.BlendSrcAlpha(7);
                _draw_270a9c68.BlendDstRgb(3);
                _draw_270a9c68.Const1(0, uPtr(_uniforms)->Length());
                _draw_270a9c68.Use();
                _draw_270a9c68.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_270a9c68.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_270a9c68.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_270a9c68.Uniform1(4, _uniforms);
                _draw_270a9c68.Uniform2(5, position);
                _draw_270a9c68.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_270a9c68.Uniform2(7, csz);
                _draw_270a9c68.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_270a9c68.Uniform(9, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->DashSize());
                _draw_270a9c68.Uniform10(10, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Color());
                _draw_270a9c68.Uniform(11, distanceScaleRcp);
                _draw_270a9c68.Uniform(12, distanceScale);
                _draw_270a9c68.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_270a9c68.Uniform(14, 1.0f / smoothness);
                _draw_270a9c68.Uniform(15, uPtr(uAs< ::g::DashedSolidColor*>(brush, ::TYPES[1/*DashedSolidColor*/]))->Opacity());
                _draw_270a9c68.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_74c263e5_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_74c263e5.BlendEnabled(true);
                _draw_74c263e5.DepthTestEnabled(false);
                _draw_74c263e5.CullFace(uPtr(dc)->CullFace());
                _draw_74c263e5.BlendSrcAlpha(7);
                _draw_74c263e5.BlendDstRgb(3);
                _draw_74c263e5.Const1(0, uPtr(_uniforms)->Length());
                _draw_74c263e5.Const(1, DP_74c263e5_14_8_4.NeedFract);
                _draw_74c263e5.Const(2, DP_74c263e5_14_8_4.Texture == NULL);
                _draw_74c263e5.Use();
                _draw_74c263e5.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_74c263e5.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_74c263e5.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_74c263e5.Uniform1(6, _uniforms);
                _draw_74c263e5.Uniform2(7, position);
                _draw_74c263e5.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_74c263e5.Uniform2(9, csz);
                _draw_74c263e5.Uniform2(10, DP_74c263e5_14_8_4.Origin);
                _draw_74c263e5.Uniform2(11, DP_74c263e5_14_8_4.Size);
                _draw_74c263e5.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind11 = DP_74c263e5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind11.Z, ind11.W)), (ind12 = DP_74c263e5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y))));
                _draw_74c263e5.Uniform2(13, (ind13 = DP_74c263e5_14_8_4.UVClip, ::g::Uno::Float2__New2(ind13.X, ind13.Y)));
                _draw_74c263e5.Uniform2(14, DP_74c263e5_14_8_4.TexCoordScale1);
                _draw_74c263e5.Uniform2(15, DP_74c263e5_14_8_4.TexCoordBias1);
                _draw_74c263e5.Uniform2(16, DP_74c263e5_14_8_4.TexCoordScale2);
                _draw_74c263e5.Uniform2(17, DP_74c263e5_14_8_4.TexCoordBias2);
                _draw_74c263e5.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_74c263e5.Uniform(19, distanceScaleRcp);
                _draw_74c263e5.Uniform(20, distanceScale);
                _draw_74c263e5.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_74c263e5.Uniform(22, 1.0f / smoothness);
                _draw_74c263e5.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_74c263e5.Sampler3(24, DP_74c263e5_14_8_4.Texture, DP_74c263e5_14_8_4.SamplerState);
                _draw_74c263e5.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_37dd72b4_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_37dd72b4.BlendEnabled(true);
                _draw_37dd72b4.DepthTestEnabled(false);
                _draw_37dd72b4.CullFace(uPtr(dc)->CullFace());
                _draw_37dd72b4.BlendSrcAlpha(7);
                _draw_37dd72b4.BlendDstRgb(3);
                _draw_37dd72b4.Const1(0, uPtr(_uniforms)->Length());
                _draw_37dd72b4.Const(1, DP_37dd72b4_14_8_4.NeedFract);
                _draw_37dd72b4.Const(2, DP_37dd72b4_14_8_4.Texture == NULL);
                _draw_37dd72b4.Use();
                _draw_37dd72b4.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_37dd72b4.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_37dd72b4.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_37dd72b4.Uniform1(6, _uniforms);
                _draw_37dd72b4.Uniform2(7, position);
                _draw_37dd72b4.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_37dd72b4.Uniform2(9, csz);
                _draw_37dd72b4.Uniform2(10, DP_37dd72b4_14_8_4.Origin);
                _draw_37dd72b4.Uniform2(11, DP_37dd72b4_14_8_4.Size);
                _draw_37dd72b4.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind14 = DP_37dd72b4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind14.Z, ind14.W)), (ind15 = DP_37dd72b4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind15.X, ind15.Y))));
                _draw_37dd72b4.Uniform2(13, (ind16 = DP_37dd72b4_14_8_4.UVClip, ::g::Uno::Float2__New2(ind16.X, ind16.Y)));
                _draw_37dd72b4.Uniform2(14, DP_37dd72b4_14_8_4.TexCoordScale1);
                _draw_37dd72b4.Uniform2(15, DP_37dd72b4_14_8_4.TexCoordBias1);
                _draw_37dd72b4.Uniform2(16, DP_37dd72b4_14_8_4.TexCoordScale2);
                _draw_37dd72b4.Uniform2(17, DP_37dd72b4_14_8_4.TexCoordBias2);
                _draw_37dd72b4.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_37dd72b4.Uniform(19, distanceScaleRcp);
                _draw_37dd72b4.Uniform(20, distanceScale);
                _draw_37dd72b4.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_37dd72b4.Uniform(22, 1.0f / smoothness);
                _draw_37dd72b4.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[5/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_37dd72b4.Sampler3(24, DP_37dd72b4_14_8_4.Texture, DP_37dd72b4_14_8_4.SamplerState);
                _draw_37dd72b4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_85953c31.BlendEnabled(true);
                _draw_85953c31.DepthTestEnabled(false);
                _draw_85953c31.CullFace(uPtr(dc)->CullFace());
                _draw_85953c31.BlendSrcAlpha(7);
                _draw_85953c31.BlendDstRgb(3);
                _draw_85953c31.Const1(0, uPtr(_uniforms)->Length());
                _draw_85953c31.Use();
                _draw_85953c31.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_85953c31.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_85953c31.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_85953c31.Uniform1(4, _uniforms);
                _draw_85953c31.Uniform2(5, position);
                _draw_85953c31.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_85953c31.Uniform(7, distanceScaleRcp);
                _draw_85953c31.Uniform(8, distanceScale);
                _draw_85953c31.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_85953c31.Uniform(10, 1.0f / smoothness);
                _draw_85953c31.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind17 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_85953c31.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_85953c31.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_8c000b28.BlendEnabled(true);
                _draw_8c000b28.DepthTestEnabled(false);
                _draw_8c000b28.CullFace(uPtr(dc)->CullFace());
                _draw_8c000b28.BlendSrcAlpha(7);
                _draw_8c000b28.BlendDstRgb(3);
                _draw_8c000b28.Const1(0, uPtr(_uniforms)->Length());
                _draw_8c000b28.Use();
                _draw_8c000b28.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8c000b28.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8c000b28.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8c000b28.Uniform1(4, _uniforms);
                _draw_8c000b28.Uniform2(5, position);
                _draw_8c000b28.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8c000b28.Uniform(7, distanceScaleRcp);
                _draw_8c000b28.Uniform(8, distanceScale);
                _draw_8c000b28.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_8c000b28.Uniform(10, 1.0f / smoothness);
                _draw_8c000b28.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind18 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_8c000b28.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[6/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_8c000b28.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_d9c096a5_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_d9c096a5.BlendEnabled(true);
                _draw_d9c096a5.DepthTestEnabled(false);
                _draw_d9c096a5.CullFace(uPtr(dc)->CullFace());
                _draw_d9c096a5.BlendSrcAlpha(7);
                _draw_d9c096a5.BlendDstRgb(3);
                _draw_d9c096a5.Const1(0, uPtr(_uniforms)->Length());
                _draw_d9c096a5.Use();
                _draw_d9c096a5.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_d9c096a5.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_d9c096a5.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_d9c096a5.Uniform1(4, _uniforms);
                _draw_d9c096a5.Uniform2(5, position);
                _draw_d9c096a5.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_d9c096a5.Uniform2(7, csz);
                _draw_d9c096a5.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_d9c096a5.Uniform(9, distanceScaleRcp);
                _draw_d9c096a5.Uniform(10, distanceScale);
                _draw_d9c096a5.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_d9c096a5.Uniform(12, 1.0f / smoothness);
                _draw_d9c096a5.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_d9c096a5.Uniform10(14, endPoints_d9c096a5_14_17_6);
                _draw_d9c096a5.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.Z, endPoints_d9c096a5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.X, endPoints_d9c096a5_14_17_6.Y))));
                _draw_d9c096a5.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.Z, endPoints_d9c096a5_14_17_6.W), ::g::Uno::Float2__New2(endPoints_d9c096a5_14_17_6.X, endPoints_d9c096a5_14_17_6.Y))));
                _draw_d9c096a5.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_d9c096a5.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_48b7d8c3_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_48b7d8c3.BlendEnabled(true);
                _draw_48b7d8c3.DepthTestEnabled(false);
                _draw_48b7d8c3.CullFace(uPtr(dc)->CullFace());
                _draw_48b7d8c3.BlendSrcAlpha(7);
                _draw_48b7d8c3.BlendDstRgb(3);
                _draw_48b7d8c3.Const1(0, uPtr(_uniforms)->Length());
                _draw_48b7d8c3.Use();
                _draw_48b7d8c3.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_48b7d8c3.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_48b7d8c3.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_48b7d8c3.Uniform1(4, _uniforms);
                _draw_48b7d8c3.Uniform2(5, position);
                _draw_48b7d8c3.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_48b7d8c3.Uniform2(7, csz);
                _draw_48b7d8c3.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_48b7d8c3.Uniform(9, distanceScaleRcp);
                _draw_48b7d8c3.Uniform(10, distanceScale);
                _draw_48b7d8c3.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_48b7d8c3.Uniform(12, 1.0f / smoothness);
                _draw_48b7d8c3.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_48b7d8c3.Uniform10(14, endPoints_48b7d8c3_14_17_6);
                _draw_48b7d8c3.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.Z, endPoints_48b7d8c3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.X, endPoints_48b7d8c3_14_17_6.Y))));
                _draw_48b7d8c3.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.Z, endPoints_48b7d8c3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_48b7d8c3_14_17_6.X, endPoints_48b7d8c3_14_17_6.Y))));
                _draw_48b7d8c3.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[7/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_48b7d8c3.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_dd2b0145.BlendEnabled(true);
                _draw_dd2b0145.DepthTestEnabled(false);
                _draw_dd2b0145.CullFace(uPtr(dc)->CullFace());
                _draw_dd2b0145.BlendSrcAlpha(7);
                _draw_dd2b0145.BlendDstRgb(3);
                _draw_dd2b0145.Const1(0, uPtr(_uniforms)->Length());
                _draw_dd2b0145.Use();
                _draw_dd2b0145.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_dd2b0145.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_dd2b0145.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_dd2b0145.Uniform1(4, _uniforms);
                _draw_dd2b0145.Uniform2(5, position);
                _draw_dd2b0145.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_dd2b0145.Uniform(7, distanceScaleRcp);
                _draw_dd2b0145.Uniform(8, distanceScale);
                _draw_dd2b0145.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_dd2b0145.Uniform(10, 1.0f / smoothness);
                _draw_dd2b0145.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind19 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind19.X, ind19.Y, ind19.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_dd2b0145.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_1a0ff276.BlendEnabled(true);
                _draw_1a0ff276.DepthTestEnabled(false);
                _draw_1a0ff276.CullFace(uPtr(dc)->CullFace());
                _draw_1a0ff276.BlendSrcAlpha(7);
                _draw_1a0ff276.BlendDstRgb(3);
                _draw_1a0ff276.Const1(0, uPtr(_uniforms)->Length());
                _draw_1a0ff276.Use();
                _draw_1a0ff276.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_1a0ff276.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_1a0ff276.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_1a0ff276.Uniform1(4, _uniforms);
                _draw_1a0ff276.Uniform2(5, position);
                _draw_1a0ff276.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_1a0ff276.Uniform(7, distanceScaleRcp);
                _draw_1a0ff276.Uniform(8, distanceScale);
                _draw_1a0ff276.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_1a0ff276.Uniform(10, 1.0f / smoothness);
                _draw_1a0ff276.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind20 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind20.X, ind20.Y, ind20.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_1a0ff276.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance] :88
void Rectangle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Fill(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,[float2],[float])");
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private generated void init_DrawCalls() [instance] :67
void Rectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "init_DrawCalls()");
    _draw_e1942474 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc());
    _draw_e194259b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f503());
    _draw_e1942cb4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c());
    _draw_e1942d57 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f());
    _draw_e19434f4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c());
    _draw_e1943513 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b());
    _draw_e193fb34 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc());
    _draw_8d31c878 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4());
    _draw_2b82e760 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26dc());
    _draw_2b82e77f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c9a26db());
    _draw_a73f4dc1 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle26472755());
    _draw_270a9c68 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle538c6e5c());
    _draw_74c263e5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglef633e2b5());
    _draw_37dd72b4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle0e3d84e4());
    _draw_85953c31 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb0e4f93d());
    _draw_8c000b28 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb3b2f694());
    _draw_d9c096a5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle565a6cfd());
    _draw_48b7d8c3 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglec8ee9d37());
    _draw_dd2b0145 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleec761c79());
    _draw_1a0ff276 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangled46c7a4a());
}

// private void InitBuffers() [instance] :138
void Rectangle::InitBuffers()
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "InitBuffers()");
    _bufferDistance = ::g::Fuse::Drawing::Internal::FloatBuffer::New3();
    uArray* CornerRadius0 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius1 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius2 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius3 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeX = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeY = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f);
    uArray* ExtendX = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
    uArray* ExtendY = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    uArray* Mn = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
    uArray* vr = uArray::Init<uArray*>(::TYPES[13/*float[][]*/], 56, CornerRadius0, (uArray*)add(SizeY, ExtendY), (uArray*)sub(SizeX, CornerRadius1), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)sub(SizeY, CornerRadius0), CornerRadius0, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, CornerRadius1), (uArray*)add(SizeX, ExtendX), (uArray*)sub(SizeY, CornerRadius1), Mn, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, Mn), Mn, Mn, (uArray*)sub(SizeX, Mn), Mn, (uArray*)neg(ExtendX), CornerRadius3, CornerRadius3, CornerRadius3, (uArray*)sub(SizeX, CornerRadius2), CornerRadius2, (uArray*)add(SizeX, ExtendX), CornerRadius2, CornerRadius3, (uArray*)neg(ExtendY), (uArray*)sub(SizeX, CornerRadius2), (uArray*)neg(ExtendY), (uArray*)neg(ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)neg(ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)neg(ExtendY), Mn, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, CornerRadius1), Mn, CornerRadius3, (uArray*)sub(SizeX, Mn), CornerRadius2, CornerRadius0, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, Mn), CornerRadius3, Mn, (uArray*)sub(SizeX, CornerRadius2), Mn);
    uArray* offsets = uArray::New(::TYPES[14/*float2[]*/], vr->Length());

    for (int32_t i = 0; i < vr->Length(); ++i)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Int2__New2(0, 0);
        uArray* v = uPtr(vr)->Strong<uArray*>(i);

        for (int32_t j = 0; j < uPtr(v)->Length(); ++j)
        {
            float f = uPtr(v)->Item<float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"more than t...*/]));

                int32_t o = 1 + j;
                offset = ::g::Uno::Int2__New2((f < 0.0f) ? -o : o, offset.X);
            }
        }

        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Implicit2(offset);
    }

    uArray* vsr = uArray::Init<int32_t>(::TYPES[15/*int[]*/], 72, 10, 8, 11, 10, 6, 8, 10, 2, 6, 2, 3, 6, 14, 11, 8, 14, 8, 15, 8, 9, 15, 9, 12, 15, 3, 0, 6, 0, 1, 6, 6, 1, 4, 6, 4, 7, 7, 4, 5, 7, 5, 9, 9, 5, 13, 9, 13, 12, 2, 16, 3, 3, 16, 0, 1, 17, 4, 4, 17, 5, 15, 12, 19, 12, 
        13, 19, 11, 18, 10, 14, 18, 11);
    uArray* ptr = uArray::Init<int32_t>(::TYPES[15/*int[]*/], 72, 22, 8, 22, 22, 6, 8, 22, 20, 6, 20, 20, 6, 26, 26, 8, 26, 8, 27, 8, 9, 27, 9, 27, 27, 24, 24, 6, 24, 25, 6, 6, 25, 25, 6, 25, 7, 7, 21, 21, 7, 21, 9, 9, 21, 23, 9, 23, 23, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 12, 12, 12, 12, 
        12, 12, 11, 11, 11, 11, 11, 11);
    ::g::Uno::Buffer* bufferVertex = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    ::g::Uno::Buffer* bufferEdge = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    _vertexInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _vertexInfo.BufferOffset = 0;
    _vertexInfo.BufferStride = 16;
    _vertexInfo.Type = 4;
    _vertexInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New4(0);
    _edgeInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _edgeInfo.BufferOffset = 0;
    _edgeInfo.BufferStride = 16;
    _edgeInfo.Type = 4;
    _edgeInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New4(0);

    for (int32_t i1 = 0; i1 < vsr->Length(); ++i1)
    {
        uPtr(bufferVertex)->Set8(i1 * _vertexInfo.BufferStride, ::g::Uno::Float4__New7(uPtr(offsets)->Item< ::g::Uno::Float2>(uPtr(vsr)->Item<int32_t>(i1) * 2), uPtr(offsets)->Item< ::g::Uno::Float2>((uPtr(vsr)->Item<int32_t>(i1) * 2) + 1)), true);
        uPtr(bufferEdge)->Set8(i1 * _edgeInfo.BufferStride, ::g::Uno::Float4__New7(offsets->Item< ::g::Uno::Float2>(uPtr(ptr)->Item<int32_t>(i1) * 2), offsets->Item< ::g::Uno::Float2>((uPtr(ptr)->Item<int32_t>(i1) * 2) + 1)), true);
        uPtr(_bufferDistance)->Append1((float)(uint16_t)(1 + ((i1 < 48) ? 8 : (i1 < 54) ? 0 : (i1 < 60) ? 1 : (i1 < 66) ? 2 : 3)));
    }

    uPtr(_vertexInfo.Buffer)->Update(bufferVertex->GetBytes());
    uPtr(_edgeInfo.Buffer)->Update(bufferEdge->GetBytes());
    uPtr(_bufferDistance)->InitDeviceVertex(0);
}

// private float[] neg(float[] a) [instance] :119
uArray* Rectangle::neg(uArray* a)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "neg(float[])");
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = -uPtr(a)->Item<float>(i);

    return r;
}

// public void Shadow(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance] :96
void Rectangle::Shadow(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Shadow(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Brush,[float2],[float])");
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, _shadowFalloff);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) [instance] :72
void Rectangle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "Stroke(Fuse.DrawContext,Fuse.Visual,float2,float4,Fuse.Drawing.Stroke,[float2],[float])");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    Draw(dc, visual, Size, CornerRadius, stroke->Brush(), sc, ::g::Uno::Float2__New1(extend), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private float[] sub(float[] a, float[] b) [instance] :111
uArray* Rectangle::sub(uArray* a, uArray* b)
{
    uStackFrame __("Fuse.Drawing.Primitives.Rectangle", "sub(float[],float[])");
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) - uPtr(b)->Item<float>(i);

    return r;
}

// public generated Rectangle New() [static] :67
Rectangle* Rectangle::New1()
{
    Rectangle* obj21 = (Rectangle*)uNew(Rectangle_typeof());
    obj21->ctor_();
    return obj21;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Rectangle.uno
// -------------------------------------------------------------------------

// internal sealed class ShadowFalloff :60
// {
static void ShadowFalloff_build(uType* type)
{
}

uType* ShadowFalloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Falloff_typeof();
    options.ObjectSize = sizeof(ShadowFalloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ShadowFalloff", options);
    type->fp_build_ = ShadowFalloff_build;
    type->fp_ctor_ = (void*)ShadowFalloff__New2_fn;
    return type;
}

// public generated ShadowFalloff() :60
void ShadowFalloff__ctor_1_fn(ShadowFalloff* __this)
{
    __this->ctor_1();
}

// public generated ShadowFalloff New() :60
void ShadowFalloff__New2_fn(ShadowFalloff** __retval)
{
    *__retval = ShadowFalloff::New2();
}

// public generated ShadowFalloff() [instance] :60
void ShadowFalloff::ctor_1()
{
    ctor_();
}

// public generated ShadowFalloff New() [static] :60
ShadowFalloff* ShadowFalloff::New2()
{
    ShadowFalloff* obj1 = (ShadowFalloff*)uNew(ShadowFalloff_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Rectangle.uno
// -------------------------------------------------------------------------

// internal sealed class StrokeCoverage :46
// {
static void StrokeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Radius), 0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Center), 0);
}

uType* StrokeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StrokeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.StrokeCoverage", options);
    type->fp_build_ = StrokeCoverage_build;
    type->fp_ctor_ = (void*)StrokeCoverage__New1_fn;
    return type;
}

// public generated StrokeCoverage() :46
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this)
{
    __this->ctor_1();
}

// public generated StrokeCoverage New() :46
void StrokeCoverage__New1_fn(StrokeCoverage** __retval)
{
    *__retval = StrokeCoverage::New1();
}

// public generated StrokeCoverage() [instance] :46
void StrokeCoverage::ctor_1()
{
    Radius = 1.0f;
    Center = 0.0f;
    ctor_();
}

// public generated StrokeCoverage New() [static] :46
StrokeCoverage* StrokeCoverage::New1()
{
    StrokeCoverage* obj1 = (StrokeCoverage*)uNew(StrokeCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Wedge.uno
// ---------------------------------------------------------------------

// public sealed class Wedge :51
// {
// static generated Wedge() :51
static void Wedge__cctor__fn(uType* __type)
{
    Wedge::Singleton_ = Wedge::New1();
}

static void Wedge_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Primitives::Circle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof(), offsetof(Wedge, _convexWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof(), offsetof(Wedge, _concaveWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(Wedge, _strokeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(Wedge, _fillCoverage), 0,
        type, (uintptr_t)&Wedge::Singleton_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Singleton", 4));
    type->Reflection.SetFunctions(3,
        new uFunction("Fill", NULL, (void*)Wedge__Fill_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Wedge__New1_fn, 0, true, type, 0),
        new uFunction("Stroke", NULL, (void*)Wedge__Stroke_fn, 0, false, uVoid_typeof(), 8, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::Stroke_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()));
}

uType* Wedge_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Wedge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Wedge", options);
    type->fp_build_ = Wedge_build;
    type->fp_ctor_ = (void*)Wedge__New1_fn;
    type->fp_cctor_ = Wedge__cctor__fn;
    return type;
}

// public generated Wedge() :51
void Wedge__ctor__fn(Wedge* __this)
{
    __this->ctor_();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) :92
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Fill(dc, node, *radius, brush, *center, *startAngle, *endAngle, *smoothness);
}

// public generated Wedge New() :51
void Wedge__New1_fn(Wedge** __retval)
{
    *__retval = Wedge::New1();
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) :58
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval)
{
    *__retval = __this->SetupWedgeCoverage(*startAngle, *endAngle);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) :75
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Stroke(dc, node, *radius, stroke, *center, *startAngle, *endAngle, *smoothness);
}

uSStrong<Wedge*> Wedge::Singleton_;

// public generated Wedge() [instance] :51
void Wedge::ctor_()
{
    _convexWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage::New1();
    _concaveWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) [instance] :92
void Wedge::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Fill(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Brush,float2,float,float,float)");
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, brush, _fillCoverage, wc, smoothness, center, smoothness);
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) [instance] :58
::g::Fuse::Drawing::Primitives::WedgeCoverage* Wedge::SetupWedgeCoverage(float startAngle, float endAngle)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "SetupWedgeCoverage(float,float)");
    float pStartAngle = ::g::Uno::Math::Mod1(startAngle, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
        pEndAngle = pEndAngle + 6.28318548f;

    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = _concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
        wc = _convexWedgeCoverage;

    uPtr(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) [instance] :75
void Wedge::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    uStackFrame __("Fuse.Drawing.Primitives.Wedge", "Stroke(Fuse.DrawContext,Fuse.Elements.Element,float,Fuse.Drawing.Stroke,float2,float,float,float)");
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, stroke->Brush(), sc, wc, extend, center, smoothness);
}

// public generated Wedge New() [static] :51
Wedge* Wedge::New1()
{
    Wedge* obj1 = (Wedge*)uNew(Wedge_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.9.0/Wedge.uno
// ---------------------------------------------------------------------

// internal abstract class WedgeCoverage :10
// {
static void WedgeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, StartAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, EndAngle), 0);
}

uType* WedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.WedgeCoverage", options);
    type->fp_build_ = WedgeCoverage_build;
    return type;
}

// protected generated WedgeCoverage() :10
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this)
{
    __this->ctor_1();
}

// protected generated WedgeCoverage() [instance] :10
void WedgeCoverage::ctor_1()
{
    StartAngle = 0.0f;
    EndAngle = 6.28318548f;
    ctor_();
}
// }

}}}} // ::g::Fuse::Drawing::Primitives
