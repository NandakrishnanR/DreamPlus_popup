// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/.uno/ux15/Fuse.Preview.Core.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details;}

namespace g{

// internal sealed class FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details :41
// {
::g::Uno::UX::PropertyAccessor_type* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_typeof();
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__ctor_1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__GetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_Name_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::Selector* __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__New1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details** __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_PropertyType_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, uType** __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__SetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_SupportsOriginSetter_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, bool* __retval);

struct FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_typeof()->Init(), _name_; }

    void ctor_1();
    static FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* New1();
};
// }

} // ::g
