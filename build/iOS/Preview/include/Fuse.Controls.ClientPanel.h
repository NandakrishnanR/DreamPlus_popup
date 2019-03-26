// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/ClientPanel.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
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
namespace g{namespace Fuse{namespace Controls{struct ClientPanel;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ClientPanel :11
// {
::g::Fuse::Controls::Panel_type* ClientPanel_typeof();
void ClientPanel__ctor_8_fn(ClientPanel* __this);
void ClientPanel__InitializeUX_fn(ClientPanel* __this);
void ClientPanel__New5_fn(ClientPanel** __retval);

struct ClientPanel : ::g::Fuse::Controls::DockPanel
{
    uStrong< ::g::Uno::UX::Property1*> this_Padding_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ClientPanel_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX();
    static ClientPanel* New5();
};
// }

}}} // ::g::Fuse::Controls
