// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/DrawRectVisualizer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Nodes.DrawRect.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Nodes{struct DrawRectVisualizer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Nodes{

// internal sealed class DrawRectVisualizer :63
// {
uType* DrawRectVisualizer_typeof();
void DrawRectVisualizer__ctor__fn(DrawRectVisualizer* __this);
void DrawRectVisualizer__Capture_fn(::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4x4* worldTransform, ::g::Fuse::DrawContext* dc);
void DrawRectVisualizer__EndFrameAndVisualize_fn(::g::Fuse::DrawContext* dc);
void DrawRectVisualizer__EndFrameAndVisualizeImpl_fn(DrawRectVisualizer* __this, ::g::Fuse::DrawContext* dc);
void DrawRectVisualizer__init_DrawCalls_fn(DrawRectVisualizer* __this);
void DrawRectVisualizer__get_IsCaptureEnabled_fn(bool* __retval);
void DrawRectVisualizer__set_IsCaptureEnabled_fn(bool* value);
void DrawRectVisualizer__New1_fn(DrawRectVisualizer** __retval);
void DrawRectVisualizer__StartFrame_fn(::g::Uno::Graphics::RenderTarget* rt);
void DrawRectVisualizer__StartFrameImpl_fn(DrawRectVisualizer* __this, ::g::Uno::Graphics::RenderTarget* rt);

struct DrawRectVisualizer : uObject
{
    static uSStrong<DrawRectVisualizer*> _instance_;
    static uSStrong<DrawRectVisualizer*>& _instance() { return DrawRectVisualizer_typeof()->Init(), _instance_; }
    bool _isCaptureEnabled;
    uStrong< ::g::Uno::Graphics::RenderTarget*> _renderTarget;
    uStrong< ::g::Uno::Collections::List*> _drawRects;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> EndFrameAndVisualizeImpl_p_c7ca0230_1_3_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> EndFrameAndVisualizeImpl_edgeCoord_c7ca0230_1_5_4;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c7ca0230;

    void ctor_();
    void EndFrameAndVisualizeImpl(::g::Fuse::DrawContext* dc);
    void init_DrawCalls();
    void StartFrameImpl(::g::Uno::Graphics::RenderTarget* rt);
    static void Capture(::g::Uno::Float2 position, ::g::Uno::Float2 size, ::g::Uno::Float4x4 worldTransform, ::g::Fuse::DrawContext* dc);
    static void EndFrameAndVisualize(::g::Fuse::DrawContext* dc);
    static DrawRectVisualizer* New1();
    static void StartFrame(::g::Uno::Graphics::RenderTarget* rt);
    static bool IsCaptureEnabled();
    static void IsCaptureEnabled(bool value);
};
// }

}}} // ::g::Fuse::Nodes
