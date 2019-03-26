// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/SafeEdgePanel.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct SafeEdgePanel;}}}
namespace g{namespace Fuse{namespace Reactive{struct WindowCaps;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class SafeEdgePanel :42
// {
::g::Fuse::Controls::Panel_type* SafeEdgePanel_typeof();
void SafeEdgePanel__ctor_7_fn(SafeEdgePanel* __this);
void SafeEdgePanel__get_ExtraPadding_fn(SafeEdgePanel* __this, ::g::Uno::Float4* __retval);
void SafeEdgePanel__set_ExtraPadding_fn(SafeEdgePanel* __this, ::g::Uno::Float4* value);
void SafeEdgePanel__get_MinEdgePadding_fn(SafeEdgePanel* __this, ::g::Uno::Float4* __retval);
void SafeEdgePanel__set_MinEdgePadding_fn(SafeEdgePanel* __this, ::g::Uno::Float4* value);
void SafeEdgePanel__New4_fn(SafeEdgePanel** __retval);
void SafeEdgePanel__OnPropertyChanged2_fn(SafeEdgePanel* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* name);
void SafeEdgePanel__OnRooted_fn(SafeEdgePanel* __this);
void SafeEdgePanel__OnUnrooted_fn(SafeEdgePanel* __this);
void SafeEdgePanel__get_Padding1_fn(SafeEdgePanel* __this, ::g::Uno::Float4* __retval);
void SafeEdgePanel__set_Padding1_fn(SafeEdgePanel* __this, ::g::Uno::Float4* value);
void SafeEdgePanel__get_PadEdges_fn(SafeEdgePanel* __this, int32_t* __retval);
void SafeEdgePanel__set_PadEdges_fn(SafeEdgePanel* __this, int32_t* value);
void SafeEdgePanel__UpdatePadding_fn(SafeEdgePanel* __this);

struct SafeEdgePanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Reactive::WindowCaps*> _caps;
    int32_t _padEdges;
    ::g::Uno::Float4 _extraPadding;
    ::g::Uno::Float4 _minEdgePadding;

    void ctor_7();
    ::g::Uno::Float4 ExtraPadding();
    void ExtraPadding(::g::Uno::Float4 value);
    ::g::Uno::Float4 MinEdgePadding();
    void MinEdgePadding(::g::Uno::Float4 value);
    ::g::Uno::Float4 Padding1();
    void Padding1(::g::Uno::Float4 value);
    int32_t PadEdges();
    void PadEdges(int32_t value);
    void UpdatePadding();
    static SafeEdgePanel* New4();
};
// }

}}} // ::g::Fuse::Controls
