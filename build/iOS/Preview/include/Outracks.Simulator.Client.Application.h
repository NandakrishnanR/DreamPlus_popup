// This file was generated based on /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.Input.IPointerEventResponder.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRootVisualProvider.h>
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerWheelMovedArgs;}}}
namespace g{namespace Fuse{struct UnhandledExceptionArgs;}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct Application;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Client{struct State;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ConcurrentQueue;}}}
namespace g{namespace Outracks{namespace Simulator{struct DeveloperMenu;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// public class Application :80
// {
struct Application_type : ::g::Fuse::AppBase_type
{
    ::g::Fuse::Input::IPointerEventResponder interface2;
};

Application_type* Application_typeof();
void Application__ctor_4_fn(Application* __this, uArray* proxyEndpoints, uString* project, uArray* defines);
void Application__DoNothing_fn(Application* __this);
void Application__New2_fn(uArray* proxyEndpoints, uString* project, uArray* defines, Application** __retval);
void Application__OnPointerMoved_fn(Application* __this, ::g::Fuse::Input::PointerMovedArgs* args);
void Application__OnPointerPressed_fn(Application* __this, ::g::Fuse::Input::PointerPressedArgs* args);
void Application__OnPointerReleased_fn(Application* __this, ::g::Fuse::Input::PointerReleasedArgs* args);
void Application__OnPointerWheelMoved_fn(Application* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args);
void Application__OnUnhandledException1_fn(Application* __this, uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args);
void Application__OnUpdate_fn(Application* __this);
void Application__get_Reflection_fn(Application* __this, uObject** __retval);
void Application__set_Reflection_fn(Application* __this, uObject* value);
void Application__ResetEverything_fn(Application* __this, bool* initial, uObject* overlay);
void Application__SetState_fn(Application* __this, ::g::Outracks::Simulator::Client::State* nextState);
void Application__ShowDeveloperMenu_fn(Application* __this);

struct Application : ::g::Fuse::App
{
    uStrong< ::g::Outracks::Simulator::Client::State*> _state;
    uStrong<uObject*> _defaultPointerEventResponder;
    uStrong< ::g::Outracks::Simulator::ConcurrentQueue*> _dispatcher;
    uStrong< ::g::Uno::Collections::List*> pointers;
    uStrong< ::g::Outracks::Simulator::DeveloperMenu*> _developerMenu;
    uStrong< ::g::Outracks::Simulator::ConcurrentQueue*> _exception;
    uStrong<uObject*> _Reflection;

    void ctor_4(uArray* proxyEndpoints, uString* project, uArray* defines);
    void DoNothing();
    void OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args);
    void OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args);
    void OnUnhandledException1(uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args);
    uObject* Reflection();
    void Reflection(uObject* value);
    void ResetEverything(bool initial, uObject* overlay);
    void SetState(::g::Outracks::Simulator::Client::State* nextState);
    void ShowDeveloperMenu();
    static Application* New2(uArray* proxyEndpoints, uString* project, uArray* defines);
};
// }

}}}} // ::g::Outracks::Simulator::Client
