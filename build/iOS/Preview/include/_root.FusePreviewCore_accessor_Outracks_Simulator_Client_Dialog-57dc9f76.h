// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/.uno/ux15/Fuse.Preview.Core.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message;}

namespace g{

// internal sealed class FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message :11
// {
::g::Uno::UX::PropertyAccessor_type* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_typeof();
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__ctor_1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__GetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_Name_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::Selector* __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__New1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message** __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_PropertyType_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, uType** __retval);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__SetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_SupportsOriginSetter_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, bool* __retval);

struct FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_typeof()->Init(), _name_; }

    void ctor_1();
    static FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* New1();
};
// }

} // ::g
