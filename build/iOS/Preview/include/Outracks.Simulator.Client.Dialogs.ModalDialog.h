// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/.uno/ux15/Outracks.Simulator.Client.Dialogs.ModalDialog.g.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{namespace Dialogs{struct ModalDialog;}}}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{
namespace Dialogs{

// public partial sealed class ModalDialog :4
// {
::g::Fuse::Controls::Panel_type* ModalDialog_typeof();
void ModalDialog__ctor_7_fn(ModalDialog* __this);
void ModalDialog__get_Body_fn(ModalDialog* __this, uString** __retval);
void ModalDialog__set_Body_fn(ModalDialog* __this, uString* value);
void ModalDialog__get_Details_fn(ModalDialog* __this, uString** __retval);
void ModalDialog__set_Details_fn(ModalDialog* __this, uString* value);
void ModalDialog__get_Header_fn(ModalDialog* __this, uString** __retval);
void ModalDialog__set_Header_fn(ModalDialog* __this, uString* value);
void ModalDialog__InitializeUX_fn(ModalDialog* __this);
void ModalDialog__New4_fn(ModalDialog** __retval);
void ModalDialog__SetBody_fn(ModalDialog* __this, uString* value, uObject* origin);
void ModalDialog__SetDetails_fn(ModalDialog* __this, uString* value, uObject* origin);
void ModalDialog__SetHeader_fn(ModalDialog* __this, uString* value, uObject* origin);

struct ModalDialog : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Header;
    uStrong<uString*> _field_Body;
    uStrong<uString*> _field_Details;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Fuse::Controls::Grid*> ButtonGrid;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ModalDialog_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ModalDialog_typeof()->Init(), __selector1_; }

    void ctor_7();
    uString* Body();
    void Body(uString* value);
    uString* Details();
    void Details(uString* value);
    uString* Header();
    void Header(uString* value);
    void InitializeUX();
    void SetBody(uString* value, uObject* origin);
    void SetDetails(uString* value, uObject* origin);
    void SetHeader(uString* value, uObject* origin);
    static ModalDialog* New4();
};
// }

}}}}} // ::g::Outracks::Simulator::Client::Dialogs
