// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/DeveloperMenu.ux.uno.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Outracks{namespace Simulator{struct DeveloperMenu;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public partial sealed class DeveloperMenu :4
// {
::g::Fuse::Controls::Panel_type* DeveloperMenu_typeof();
void DeveloperMenu__ctor_7_fn(DeveloperMenu* __this);
void DeveloperMenu__Close_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args);
void DeveloperMenu__GoBack_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args);
void DeveloperMenu__InitializeUX_fn(DeveloperMenu* __this);
void DeveloperMenu__New4_fn(DeveloperMenu** __retval);

struct DeveloperMenu : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::Property1*> this_Opacity_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DeveloperMenu_typeof()->Init(), __selector0_; }

    void ctor_7();
    void Close(uObject* sender, ::g::Uno::EventArgs* args);
    void GoBack(uObject* sender, ::g::Uno::EventArgs* args);
    void InitializeUX();
    static DeveloperMenu* New4();
};
// }

}}} // ::g::Outracks::Simulator
