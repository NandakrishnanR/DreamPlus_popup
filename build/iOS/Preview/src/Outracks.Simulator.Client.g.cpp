// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.App.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Timer.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.Visual.h>
#include <Outracks.BinaryMessage.h>
#include <Outracks.IBinaryMessage.h>
#include <Outracks.Optional.h>
#include <Outracks.Optional1-1.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.Parameter.h>
#include <Outracks.Simulator.Bytecode.ProjectBytecode.h>
#include <Outracks.Simulator.Bytecode.Signature.h>
#include <Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.Client.Application.h>
#include <Outracks.Simulator.Client.ChangeIp.h>
#include <Outracks.Simulator.Client.Connected.h>
#include <Outracks.Simulator.Client.Connecting.h>
#include <Outracks.Simulator.Client.ConnectingToHost.h>
#include <Outracks.Simulator.Client.ConnectingToProxy.h>
#include <Outracks.Simulator.Client.ConnectionLost.h>
#include <Outracks.Simulator.Client.Context.h>
#include <Outracks.Simulator.Client.CppEvent.h>
#include <Outracks.Simulator.Client.CppProperty.h>
#include <Outracks.Simulator.Client.DesignerNotRunning.h>
#include <Outracks.Simulator.Client.DeviceInfo.h>
#include <Outracks.Simulator.Client.DialogButton.h>
#include <Outracks.Simulator.Client.Dialogs.LoadingScreen.h>
#include <Outracks.Simulator.Client.Dialogs.ModalDialog.h>
#include <Outracks.Simulator.Client.DotNetReflection.h>
#include <Outracks.Simulator.Client.DotNetReflectionWrapper.h>
#include <Outracks.Simulator.Client.Exceptions.h>
#include <Outracks.Simulator.Client.FailedToConnect.h>
#include <Outracks.Simulator.Client.FakeApp.h>
#include <Outracks.Simulator.Client.Faulted.h>
#include <Outracks.Simulator.Client.Idle.h>
#include <Outracks.Simulator.Client.IEvent.h>
#include <Outracks.Simulator.Client.InputMode.h>
#include <Outracks.Simulator.Client.IProperty.h>
#include <Outracks.Simulator.Client.ITypeMap.h>
#include <Outracks.Simulator.Client.LoadingScreen.h>
#include <Outracks.Simulator.Client.ModalDialog.h>
#include <Outracks.Simulator.Client.NativeReflection.h>
#include <Outracks.Simulator.Client.ReflectionCache.h>
#include <Outracks.Simulator.Client.ReflectionExtensions.h>
#include <Outracks.Simulator.Client.Reifying.h>
#include <Outracks.Simulator.Client.Running.h>
#include <Outracks.Simulator.Client.ShowingModalDialog.h>
#include <Outracks.Simulator.Client.ShowingPrompt.h>
#include <Outracks.Simulator.Client.SimpleTypeMap.h>
#include <Outracks.Simulator.Client.State.h>
#include <Outracks.Simulator.Client.TryInvokeExtension.h>
#include <Outracks.Simulator.Client.Uninitialized.h>
#include <Outracks.Simulator.Client.UserAppState.h>
#include <Outracks.Simulator.Client.VirtualMachine.h>
#include <Outracks.Simulator.Closure.h>
#include <Outracks.Simulator.ConcurrentQueue-1.h>
#include <Outracks.Simulator.ConnectToFirstRespondingEndpoint.h>
#include <Outracks.Simulator.DesignerNotRunning.h>
#include <Outracks.Simulator.DeveloperMenu.h>
#include <Outracks.Simulator.ForgetAction1-2.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.ISimulatorClient.h>
#include <Outracks.Simulator.Protocol.BytecodeGenerated.h>
#include <Outracks.Simulator.Protocol.BytecodeUpdated.h>
#include <Outracks.Simulator.Protocol.DebugLog.h>
#include <Outracks.Simulator.Protocol.Diagnostic.h>
#include <Outracks.Simulator.Protocol.DismissDiagnostic.h>
#include <Outracks.Simulator.Protocol.Error.h>
#include <Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <Outracks.Simulator.Protocol.RegisterName.h>
#include <Outracks.Simulator.Protocol.UnhandledException.h>
#include <Outracks.Simulator.ProxyClient.h>
#include <Outracks.Simulator.Runtime.Environment.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Outracks.Simulator.Runtime.MemberNotFound.h>
#include <Outracks.Simulator.Runtime.ScopeClosure.h>
#include <Outracks.Simulator.Runtime.TypeNotFound.h>
#include <Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h>
#include <Outracks.Simulator.SimulatorClient.h>
#include <Outracks.Simulator.Task-1.h>
#include <System.IO.BinaryReader.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Byte2.h>
#include <Uno.Byte4.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func1-2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.TextureCube.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Long.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Reflection.CppField.h>
#include <Uno.Reflection.CppFunction.h>
#include <Uno.Reflection.CppReflection.h>
#include <Uno.Reflection.IField.h>
#include <Uno.Reflection.IFunction.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.SByte.h>
#include <Uno.SByte2.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[78];
static uType* TYPES[85];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno
// ---------------------------------------------------------------------

// public class Application :80
// {
static void Application_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Failed to properly reset. Try exiting Fuse and restarting.");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno");
    ::STRINGS[2] = uString::Const("ResetEverything");
    ::TYPES[0] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Input::IPointerEventResponder_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Outracks::Simulator::Client::Faulted_typeof();
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[13] = ::g::Uno::IDisposable_typeof();
    ::TYPES[14] = ::g::Fuse::Node_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[14/*Fuse.Node*/], NULL);
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(Application_type, interface0),
        ::g::Fuse::IRootVisualProvider_typeof(), offsetof(Application_type, interface1),
        ::TYPES[4/*Fuse.Input.IPointerEventResponder*/], offsetof(Application_type, interface2));
    type->SetFields(9,
        ::g::Outracks::Simulator::Client::State_typeof(), offsetof(Application, _state), 0,
        ::TYPES[4/*Fuse.Input.IPointerEventResponder*/], offsetof(Application, _defaultPointerEventResponder), 0,
        ::TYPES[0/*Outracks.Simulator.ConcurrentQueue<Uno.Action>*/], offsetof(Application, _dispatcher), 0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Input.PointerPressedArgs>*/], offsetof(Application, pointers), 0,
        ::g::Outracks::Simulator::DeveloperMenu_typeof(), offsetof(Application, _developerMenu), 0,
        ::TYPES[2/*Outracks.Simulator.ConcurrentQueue<Uno.Exception>*/], offsetof(Application, _exception), 0,
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(Application, _Reflection), 0);
    type->Reflection.SetFunctions(8,
        new uFunction(".ctor", NULL, (void*)Application__New2_fn, 0, true, type, 3, ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array()),
        new uFunction("OnPointerMoved", NULL, (void*)Application__OnPointerMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerMovedArgs_typeof()),
        new uFunction("OnPointerPressed", NULL, (void*)Application__OnPointerPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerPressedArgs_typeof()),
        new uFunction("OnPointerReleased", NULL, (void*)Application__OnPointerReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerReleasedArgs_typeof()),
        new uFunction("OnPointerWheelMoved", NULL, (void*)Application__OnPointerWheelMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerWheelMovedArgs_typeof()),
        new uFunction("get_Reflection", NULL, (void*)Application__get_Reflection_fn, 0, false, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Application__set_Reflection_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()),
        new uFunction("ResetEverything", NULL, (void*)Application__ResetEverything_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), uObject_typeof()));
}

Application_type* Application_typeof()
{
    static uSStrong<Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(Application_type);
    type = (Application_type*)uClassType::New("Outracks.Simulator.Client.Application", options);
    type->fp_build_ = Application_build;
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))Application__OnUpdate_fn;
    type->interface2.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Application__OnPointerPressed_fn;
    type->interface2.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Application__OnPointerMoved_fn;
    type->interface2.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Application__OnPointerReleased_fn;
    type->interface2.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))Application__OnPointerWheelMoved_fn;
    type->interface1.fp_get_Root = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::AppBase__FuseIRootVisualProviderget_Root_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) :88
void Application__ctor_4_fn(Application* __this, uArray* proxyEndpoints, uString* project, uArray* defines)
{
    __this->ctor_4(proxyEndpoints, project, defines);
}

// private void DoNothing() :171
void Application__DoNothing_fn(Application* __this)
{
    __this->DoNothing();
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) :88
void Application__New2_fn(uArray* proxyEndpoints, uString* project, uArray* defines, Application** __retval)
{
    *__retval = Application::New2(proxyEndpoints, project, defines);
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) :173
void Application__OnPointerMoved_fn(Application* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) :138
void Application__OnPointerPressed_fn(Application* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :180
void Application__OnPointerReleased_fn(Application* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) :194
void Application__OnPointerWheelMoved_fn(Application* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    __this->OnPointerWheelMoved(args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) :204
void Application__OnUnhandledException1_fn(Application* __this, uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    __this->OnUnhandledException1(sender, args);
}

// protected override sealed void OnUpdate() :210
void Application__OnUpdate_fn(Application* __this)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnUpdate()");
    bool ret6;
    bool ret7;
    ::g::Uno::Exception* exception = NULL, *t;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(__this->_exception), (void**)(&t), &ret6), ret6))
        exception = t;

    if (exception != NULL)
    {
        if (uIs((::g::Outracks::Simulator::Client::State*)__this->_state, ::TYPES[6/*Outracks.Simulator.Client.Faulted*/]))
            ;
        else
        {
            __this->ResetEverything(false, NULL);
            __this->SetState(uPtr(__this->_state)->OnException(exception));
        }
    }

    uDelegate* action;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(__this->_dispatcher), (void**)(&action), &ret7), ret7))
        uPtr(action)->InvokeVoid();

    __this->SetState(uPtr(__this->_state)->OnUpdate());
    ::g::Fuse::App__OnUpdate_fn(__this);
}

// public generated Outracks.Simulator.Runtime.IReflection get_Reflection() :86
void Application__get_Reflection_fn(Application* __this, uObject** __retval)
{
    *__retval = __this->Reflection();
}

// public generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :86
void Application__set_Reflection_fn(Application* __this, uObject* value)
{
    __this->Reflection(value);
}

// public void ResetEverything(bool initial, [object overlay]) :105
void Application__ResetEverything_fn(Application* __this, bool* initial, uObject* overlay)
{
    __this->ResetEverything(*initial, overlay);
}

// private void SetState(Outracks.Simulator.Client.State nextState) :239
void Application__SetState_fn(Application* __this, ::g::Outracks::Simulator::Client::State* nextState)
{
    __this->SetState(nextState);
}

// private void ShowDeveloperMenu() :154
void Application__ShowDeveloperMenu_fn(Application* __this)
{
    __this->ShowDeveloperMenu();
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) [instance] :88
void Application::ctor_4(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    uStackFrame __("Outracks.Simulator.Client.Application", ".ctor(Uno.Net.IPEndPoint[],string,string[])");
    _state = ::g::Outracks::Simulator::Client::Uninitialized::New1();
    _dispatcher = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[0/*Outracks.Simulator.ConcurrentQueue<Uno.Action>*/]));
    pointers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Input.PointerPressedArgs>*/]));
    _exception = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[2/*Outracks.Simulator.ConcurrentQueue<Uno.Exception>*/]));
    ctor_3();
    ::g::Outracks::Simulator::Client::Context::SetGlobals(proxyEndpoints, project, defines);
    _defaultPointerEventResponder = ::g::Fuse::Input::Pointer::EventResponder();
    ::g::Fuse::Input::Pointer::EventResponder((uObject*)this);
    add_UnhandledException(uDelegate::New(::TYPES[3/*Fuse.UnhandledExceptionHandler*/], (void*)Application__OnUnhandledException1_fn, this));
    ::g::Outracks::Simulator::Client::FakeApp* fakeApp = ::g::Outracks::Simulator::Client::FakeApp::New4(this);
    ::g::Outracks::Simulator::Client::UserAppState::Default(::g::Outracks::Simulator::Client::UserAppState::Save(fakeApp));
    ResetEverything(true, ::g::Fuse::Controls::Panel::New3());
    _developerMenu = ::g::Outracks::Simulator::DeveloperMenu::New4();
}

// private void DoNothing() [instance] :171
void Application::DoNothing()
{
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance] :173
void Application::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance] :138
void Application::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    ::g::Uno::Collections::List__Add_fn(uPtr(pointers), args);

    if (uPtr(pointers)->Count() == 3)
        ::g::Fuse::Timer::Wait(1.0, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Application__ShowDeveloperMenu_fn, this));

    ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance] :180
void Application::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    ::g::Fuse::Input::PointerPressedArgs* ret5;

    for (int32_t i = 0; i < uPtr(pointers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int32_t>(i), &ret5), ret5))->PointIndex() == uPtr(args)->PointIndex())
        {
            uPtr(pointers)->RemoveAt(i);
            break;
        }

    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) [instance] :194
void Application::OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs)");
    ::g::Fuse::Input::IPointerEventResponder::OnPointerWheelMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) [instance] :204
void Application::OnUnhandledException1(uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnUnhandledException(object,Fuse.UnhandledExceptionArgs)");
    uPtr(args)->IsHandled(true);
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_exception), args->Exception());
}

// public generated Outracks.Simulator.Runtime.IReflection get_Reflection() [instance] :86
uObject* Application::Reflection()
{
    return _Reflection;
}

// public generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [instance] :86
void Application::Reflection(uObject* value)
{
    _Reflection = value;
}

// public void ResetEverything(bool initial, [object overlay]) [instance] :105
void Application::ResetEverything(bool initial, uObject* overlay)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "ResetEverything(bool,[object])");
    ::g::Fuse::Controls::Panel* collection2;
    uObject* array3;
    ::g::Fuse::Node* ret8;
    ::g::Fuse::Node* ret9;
    ::g::Fuse::Node* ret10;
    ::g::Outracks::Simulator::Client::FakeApp* fakeApp = ::g::Outracks::Simulator::Client::FakeApp::New4(this);
    ::g::Outracks::Simulator::Client::Context::SetApp(fakeApp);

    try
    {
        {
            uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Children()), ::TYPES[8/*Uno.Collections.IEnumerable<Fuse.Node>*/]));

            {
                try
                {
                    {
                        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator*/])))
                        {
                            ::g::Fuse::Node* panel = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret8), ret8);
                            ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(uCast< ::g::Fuse::Controls::Panel*>(panel, ::TYPES[12/*Fuse.Controls.Panel*/]))->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]));
                        }
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
                    }
                                        throw __t;
                    goto __after_finally_0;
                }

                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
                }
                __after_finally_0:;
            }

            ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[0/*"Failed to p...*/], e, this, ::STRINGS[1/*"/usr/local/...*/], 120, ::STRINGS[2/*"ResetEveryt...*/]);
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection2 = ::g::Fuse::Controls::Panel::New3(), array3 = uPtr(collection2)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array3), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), uCast< ::g::Fuse::Node*>((overlay != NULL) ? overlay : (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(uCast< ::g::Fuse::Controls::Panel*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int32_t>(0), &ret10), ret10), ::TYPES[12/*Fuse.Controls.Panel*/]))->Children()), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int32_t>(0), &ret9), ret9), ::TYPES[14/*Fuse.Node*/])), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array3), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), fakeApp), collection2));
}

// private void SetState(Outracks.Simulator.Client.State nextState) [instance] :239
void Application::SetState(::g::Outracks::Simulator::Client::State* nextState)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "SetState(Outracks.Simulator.Client.State)");

    while (nextState != _state)
    {
        uPtr(_state)->OnLeaveState();
        _state = nextState;
        nextState = uPtr(_state)->OnEnterState();
    }
}

// private void ShowDeveloperMenu() [instance] :154
void Application::ShowDeveloperMenu()
{
    uStackFrame __("Outracks.Simulator.Client.Application", "ShowDeveloperMenu()");
    ::g::Fuse::Input::PointerPressedArgs* ret11;
    ::g::Fuse::Input::PointerPressedArgs* ret12;
    bool ret13;

    if (uPtr(pointers)->Count() != 3)
        return;

    for (int32_t i = 0; i < uPtr(pointers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int32_t>(i), &ret11), ret11))->TryHardCapture(this, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Application__DoNothing_fn, this), NULL))
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int32_t>(i), &ret12), ret12))->ReleaseCapture(this);

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), _developerMenu, &ret13), ret13))
        ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(Children()), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int32_t>(0), _developerMenu);
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) [static] :88
Application* Application::New2(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    Application* obj4 = (Application*)uNew(Application_typeof());
    obj4->ctor_4(proxyEndpoints, project, defines);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ChangeIp :481
// {
static void ChangeIp_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Connect to IP");
    ::STRINGS[4] = uString::Const("\n"
        "E.g. '192.168.1.1'");
    ::TYPES[16] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Net::IPAddress_typeof());
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::ShowingPrompt_type* ChangeIp_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingPrompt_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ChangeIp);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::ShowingPrompt_type);
    type = (::g::Outracks::Simulator::Client::ShowingPrompt_type*)uClassType::New("Outracks.Simulator.Client.ChangeIp", options);
    type->fp_build_ = ChangeIp_build;
    type->fp_OnCancel = (void(*)(::g::Outracks::Simulator::Client::ShowingPrompt*, ::g::Outracks::Simulator::Client::State**))ChangeIp__OnCancel_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))ChangeIp__OnException_fn;
    type->fp_OnOk = (void(*)(::g::Outracks::Simulator::Client::ShowingPrompt*, uString*, ::g::Outracks::Simulator::Client::State**))ChangeIp__OnOk_fn;
    return type;
}

// public ChangeIp([string body]) :483
void ChangeIp__ctor_2_fn(ChangeIp* __this, uString* body)
{
    __this->ctor_2(body);
}

// public ChangeIp New([string body]) :483
void ChangeIp__New1_fn(uString* body, ChangeIp** __retval)
{
    *__retval = ChangeIp::New1(body);
}

// protected override sealed Outracks.Simulator.Client.State OnCancel() :497
void ChangeIp__OnCancel_fn(ChangeIp* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Client::ConnectingToProxy::New1(), void();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :502
void ChangeIp__OnException_fn(ChangeIp* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ChangeIp", "OnException(Uno.Exception)");
    return *__retval = ChangeIp::New1(uPtr(e)->Message()), void();
}

// protected override sealed Outracks.Simulator.Client.State OnOk(string input) :488
void ChangeIp__OnOk_fn(ChangeIp* __this, uString* input, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ChangeIp", "OnOk(string)");
    uArray* endpoints = uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[16/*Uno.Net.IPEndPoint[]*/], 1, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(input), uPtr(uPtr(::g::Outracks::Simulator::Client::Context::ProxyEndpoints())->Strong< ::g::Uno::Net::IPEndPoint*>(0))->Port()));
    return *__retval = ::g::Outracks::Simulator::Client::ConnectingToProxy::New2(endpoints), void();
}

// public ChangeIp([string body]) [instance] :483
void ChangeIp::ctor_2(uString* body)
{
    uStackFrame __("Outracks.Simulator.Client.ChangeIp", ".ctor([string])");
    ctor_1(::STRINGS[3/*"Connect to IP"*/], ::g::Uno::String::op_Addition2(body, ::STRINGS[4/*"\nE.g. '192...*/]));
}

// public ChangeIp New([string body]) [static] :483
ChangeIp* ChangeIp::New1(uString* body)
{
    ChangeIp* obj1 = (ChangeIp*)uNew(ChangeIp_typeof());
    obj1->ctor_2(body);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal abstract class Connected :141
// {
// static generated Connected() :141
static void Connected__cctor__fn(uType* __type)
{
    Connected::_activeDiagnostics_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[17/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>*/]));
    Connected::_mutex_ = ::g::Uno::Object::New();
}

static void Connected_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), ::g::Outracks::Simulator::Protocol::Diagnostic_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), ::g::Outracks::Simulator::Protocol::Diagnostic_typeof(), NULL);
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[20] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), ::g::Outracks::Simulator::Protocol::Diagnostic_typeof(), NULL);
    ::TYPES[21] = ::g::Outracks::BinaryMessage_typeof()->MakeMethod(1/*TryParse<Outracks.Simulator.Protocol.BytecodeGenerated>*/, ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), NULL);
    ::TYPES[23] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), NULL);
    ::TYPES[24] = ::g::Outracks::BinaryMessage_typeof()->MakeMethod(1/*TryParse<Outracks.Simulator.Protocol.BytecodeUpdated>*/, ::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(), NULL);
    ::TYPES[26] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(), NULL);
    ::TYPES[27] = ::g::Outracks::BinaryMessage_typeof()->MakeMethod(1/*TryParse<Outracks.Simulator.Protocol.Error>*/, ::g::Outracks::Simulator::Protocol::Error_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Protocol::Error_typeof(), NULL);
    ::TYPES[29] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Error_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Diagnostics::LogHandler_typeof();
    ::TYPES[31] = ::g::Fuse::DiagnosticHandler_typeof();
    ::TYPES[32] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(),
        ::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Outracks::Simulator::Protocol::Error_typeof());
    type->SetFields(0,
        ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/], offsetof(Connected, Client), 0,
        ::TYPES[17/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>*/], (uintptr_t)&Connected::_activeDiagnostics_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&Connected::_mutex_, uFieldFlagsStatic);
}

Connected_type* Connected_typeof()
{
    static uSStrong<Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.FieldCount = 3;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(Connected);
    options.TypeSize = sizeof(Connected_type);
    type = (Connected_type*)uClassType::New("Outracks.Simulator.Client.Connected", options);
    type->fp_build_ = Connected_build;
    type->fp_cctor_ = Connected__cctor__fn;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Connected__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Connected__OnException_fn;
    type->fp_OnLeaveState = (void(*)(::g::Outracks::Simulator::Client::State*))Connected__OnLeaveState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Connected__OnUpdate_fn;
    return type;
}

// protected Connected(Outracks.Simulator.ISimulatorClient client) :145
void Connected__ctor_1_fn(Connected* __this, uObject* client)
{
    __this->ctor_1(client);
}

// public void DismissAllActiveDiagnostics() :249
void Connected__DismissAllActiveDiagnostics_fn(Connected* __this)
{
    __this->DismissAllActiveDiagnostics();
}

// private Outracks.Simulator.Client.State NextState(Outracks.IBinaryMessage message) :189
void Connected__NextState_fn(Connected* __this, uObject* message, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->NextState(message);
}

// protected Outracks.Simulator.Client.State OnConnectionError(Outracks.Simulator.Protocol.Error error) :218
void Connected__OnConnectionError_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Error* error, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->OnConnectionError(error);
}

// private void OnDiagnosticDismissed(Fuse.Diagnostic d) :236
void Connected__OnDiagnosticDismissed_fn(Connected* __this, ::g::Fuse::Diagnostic* d)
{
    __this->OnDiagnosticDismissed(d);
}

// private void OnDiagnosticReported(Fuse.Diagnostic d) :226
void Connected__OnDiagnosticReported_fn(Connected* __this, ::g::Fuse::Diagnostic* d)
{
    __this->OnDiagnosticReported(d);
}

// public override Outracks.Simulator.Client.State OnEnterState() :151
void Connected__OnEnterState_fn(Connected* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnEnterState()");
    ::g::Uno::Diagnostics::Debug::SetLogHandler(uDelegate::New(::TYPES[30/*Uno.Diagnostics.LogHandler*/], (void*)Connected__SendDebugLog_fn, __this));
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::RegisterName::New2(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name()));
    ::g::Fuse::Diagnostics::add_DiagnosticReported(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticReported_fn, __this));
    ::g::Fuse::Diagnostics::add_DiagnosticDismissed(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticDismissed_fn, __this));
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :166
void Connected__OnException_fn(Connected* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnException(Uno.Exception)");
    ::g::Uno::Exception* ret8;
    ::g::Uno::Collections::List* exceptions = ::g::Outracks::Simulator::Client::Exceptions::Unpack(e);
    ::g::Outracks::Simulator::Client::Exceptions::Send(__this->Client, exceptions);
    ::g::Uno::Exception* f = (uPtr(exceptions)->Count() == 1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int32_t>(0), &ret8), ret8) : e;
    return *__retval = __this->OnFaulted(f), void();
}

// protected Outracks.Simulator.Client.State OnExecute(Outracks.Simulator.Protocol.BytecodeUpdated args) :212
void Connected__OnExecute_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::BytecodeUpdated* args, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->OnExecute(args);
}

// public override void OnLeaveState() :160
void Connected__OnLeaveState_fn(Connected* __this)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnLeaveState()");
    ::g::Fuse::Diagnostics::remove_DiagnosticReported(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticReported_fn, __this));
    ::g::Fuse::Diagnostics::remove_DiagnosticDismissed(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticDismissed_fn, __this));
}

// protected Outracks.Simulator.Client.State OnReify(Outracks.Simulator.Protocol.BytecodeGenerated reify) :207
void Connected__OnReify_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->OnReify(reify);
}

// public override Outracks.Simulator.Client.State OnUpdate() :176
void Connected__OnUpdate_fn(Connected* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnUpdate()");
    bool ret9;
    uObject* message;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(::g::Outracks::Simulator::ISimulatorClient::IncommingMessages(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]))), (void**)(&message), &ret9), ret9))
    {
        ::g::Outracks::Simulator::Client::State* newState = __this->NextState(message);

        if (newState != __this)
            return *__retval = newState, void();
    }

    return *__retval = __this, void();
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) :261
void Connected__SendDebugLog_fn(Connected* __this, uString* text, int32_t* type)
{
    __this->SendDebugLog(text, *type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Connected::_activeDiagnostics_;
uSStrong<uObject*> Connected::_mutex_;

// protected Connected(Outracks.Simulator.ISimulatorClient client) [instance] :145
void Connected::ctor_1(uObject* client)
{
    ctor_();
    Client = client;
}

// public void DismissAllActiveDiagnostics() [instance] :249
void Connected::DismissAllActiveDiagnostics()
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "DismissAllActiveDiagnostics()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Diagnostic*>, uStrong< ::g::Outracks::Simulator::Protocol::Diagnostic*> > ret2;
    ::g::Uno::Threading::Monitor::Enter(Connected::_mutex_);

    {
        try
        {
            {
                ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Diagnostic*>, uStrong< ::g::Outracks::Simulator::Protocol::Diagnostic*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Connected::_activeDiagnostics_), &ret2), ret2);

                {
                    try
                    {
                        {
                            while (enum1.MoveNext(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]))
                            {
                                ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Diagnostic*>, uStrong< ::g::Outracks::Simulator::Protocol::Diagnostic*> > k = enum1.Current(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]);
                                ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::DismissDiagnostic::New1(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(k.Value(::TYPES[20/*Uno.Collections.KeyValuePair<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>*/]))->DiagnosticId()));
                            }
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            enum1.Dispose(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]);
                        }
                                                throw __t;
                        goto __after_finally_1;
                    }

                    {
                        enum1.Dispose(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]);
                    }
                    __after_finally_1:;
                }

                uPtr(Connected::_activeDiagnostics_)->Clear();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
        __after_finally_2:;
    }
}

// private Outracks.Simulator.Client.State NextState(Outracks.IBinaryMessage message) [instance] :189
::g::Outracks::Simulator::Client::State* Connected::NextState(uObject* message)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "NextState(Outracks.IBinaryMessage)");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> > ret3;
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeUpdated*> > ret4;
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Error*> > ret5;
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> > bcg = (::g::Outracks::BinaryMessage__TryParse_fn(::TYPES[21/*Outracks.BinaryMessage.TryParse<Outracks.Simulator.Protocol.BytecodeGenerated>*/], message, ::g::Outracks::Simulator::Protocol::BytecodeGenerated::MessageType(), uDelegate::New(::TYPES[22/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.BytecodeGenerated>*/], (void*)::g::Outracks::Simulator::Protocol::BytecodeGenerated__ReadDataFrom_fn), &ret3), ret3);

    if (bcg.HasValue(::TYPES[23/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeGenerated>*/]))
        return OnReify(bcg.Value(::TYPES[23/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeGenerated>*/]));

    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeUpdated*> > bu = (::g::Outracks::BinaryMessage__TryParse_fn(::TYPES[24/*Outracks.BinaryMessage.TryParse<Outracks.Simulator.Protocol.BytecodeUpdated>*/], message, ::g::Outracks::Simulator::Protocol::BytecodeUpdated::MessageType(), uDelegate::New(::TYPES[25/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.BytecodeUpdated>*/], (void*)::g::Outracks::Simulator::Protocol::BytecodeUpdated__ReadDataFrom_fn), &ret4), ret4);

    if (bu.HasValue(::TYPES[26/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeUpdated>*/]))
        return OnExecute(bu.Value(::TYPES[26/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeUpdated>*/]));

    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Error*> > e = (::g::Outracks::BinaryMessage__TryParse_fn(::TYPES[27/*Outracks.BinaryMessage.TryParse<Outracks.Simulator.Protocol.Error>*/], message, ::g::Outracks::Simulator::Protocol::Error::MessageType(), uDelegate::New(::TYPES[28/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.Error>*/], (void*)::g::Outracks::Simulator::Protocol::Error__ReadDataFrom_fn), &ret5), ret5);

    if (e.HasValue(::TYPES[29/*Outracks.Optional<Outracks.Simulator.Protocol.Error>*/]))
        return OnConnectionError(e.Value(::TYPES[29/*Outracks.Optional<Outracks.Simulator.Protocol.Error>*/]));

    return this;
}

// protected Outracks.Simulator.Client.State OnConnectionError(Outracks.Simulator.Protocol.Error error) [instance] :218
::g::Outracks::Simulator::Client::State* Connected::OnConnectionError(::g::Outracks::Simulator::Protocol::Error* error)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnConnectionError(Outracks.Simulator.Protocol.Error)");
    return ::g::Outracks::Simulator::Client::ConnectionLost::New2(uPtr(error)->Exception());
}

// private void OnDiagnosticDismissed(Fuse.Diagnostic d) [instance] :236
void Connected::OnDiagnosticDismissed(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnDiagnosticDismissed(Fuse.Diagnostic)");
    bool ret6;
    bool ret7;
    ::g::Uno::Threading::Monitor::Enter(Connected::_mutex_);

    {
        try
        {
            {
                ::g::Outracks::Simulator::Protocol::Diagnostic* diag;

                if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Connected::_activeDiagnostics_), d, (void**)(&diag), &ret6), ret6))
                {
                    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::DismissDiagnostic::New1(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(diag)->DiagnosticId()));
                    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Connected::_activeDiagnostics_), d, &ret7);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
        __after_finally_3:;
    }
}

// private void OnDiagnosticReported(Fuse.Diagnostic d) [instance] :226
void Connected::OnDiagnosticReported(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnDiagnosticReported(Fuse.Diagnostic)");
    ::g::Uno::Threading::Monitor::Enter(Connected::_mutex_);

    {
        try
        {
            {
                ::g::Outracks::Simulator::Protocol::Diagnostic* diag = ::g::Outracks::Simulator::Protocol::Diagnostic::New1(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(d)->Message, uPtr(d)->ToString(), uPtr(d)->FilePath, uPtr(d)->LineNumber, 0, -1);
                ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)diag);
                ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Connected::_activeDiagnostics_), d, diag);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
        __after_finally_4:;
    }
}

// protected Outracks.Simulator.Client.State OnExecute(Outracks.Simulator.Protocol.BytecodeUpdated args) [instance] :212
::g::Outracks::Simulator::Client::State* Connected::OnExecute(::g::Outracks::Simulator::Protocol::BytecodeUpdated* args)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnExecute(Outracks.Simulator.Protocol.BytecodeUpdated)");
    ::g::Outracks::Simulator::Client::VirtualMachine::Execute(uPtr(args)->Function(), uArray::New(::TYPES[32/*object[]*/], 0));
    return this;
}

// protected Outracks.Simulator.Client.State OnReify(Outracks.Simulator.Protocol.BytecodeGenerated reify) [instance] :207
::g::Outracks::Simulator::Client::State* Connected::OnReify(::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    return ::g::Outracks::Simulator::Client::Reifying::New1(Client, reify);
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) [instance] :261
void Connected::SendDebugLog(uString* text, int32_t type)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "SendDebugLog(string,Uno.Diagnostics.DebugMessageType)");
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::DebugLog::New2(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), text));
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal abstract class Connecting :41
// {
static void Connecting_build(uType* type)
{
    ::TYPES[33] = ::g::Outracks::Simulator::DesignerNotRunning_typeof();
}

::g::Outracks::Simulator::Client::State_type* Connecting_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.ObjectSize = sizeof(Connecting);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.Connecting", options);
    type->fp_build_ = Connecting_build;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Connecting__OnException_fn;
    return type;
}

// protected generated Connecting() :41
void Connecting__ctor_1_fn(Connecting* __this)
{
    __this->ctor_1();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :43
void Connecting__OnException_fn(Connecting* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    if (uIs(e, ::TYPES[33/*Outracks.Simulator.DesignerNotRunning*/]))
        return *__retval = ::g::Outracks::Simulator::Client::DesignerNotRunning::New2(), void();

    return *__retval = ::g::Outracks::Simulator::Client::FailedToConnect::New2(e), void();
}

// protected generated Connecting() [instance] :41
void Connecting::ctor_1()
{
    ctor_();
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ConnectingToHost :100
// {
static void ConnectingToHost_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Connecting");
    ::STRINGS[6] = uString::Const("Fetching project data from computer");
    ::TYPES[34] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.Net.IPEndPoint>*/, ::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(ConnectingToHost, _simulatorEndpoints), 0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof(), NULL), offsetof(ConnectingToHost, _connecting), 0);
}

::g::Outracks::Simulator::Client::State_type* ConnectingToHost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connecting_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ConnectingToHost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ConnectingToHost", options);
    type->fp_build_ = ConnectingToHost_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToHost__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToHost__OnUpdate_fn;
    return type;
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :104
void ConnectingToHost__ctor_2_fn(ConnectingToHost* __this, uObject* simulatorEndpoints)
{
    __this->ctor_2(simulatorEndpoints);
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :104
void ConnectingToHost__New1_fn(uObject* simulatorEndpoints, ConnectingToHost** __retval)
{
    *__retval = ConnectingToHost::New1(simulatorEndpoints);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :111
void ConnectingToHost__OnEnterState_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToHost", "OnEnterState()");
    __this->_connecting = ::g::Outracks::Simulator::ConnectToFirstRespondingEndpoint::Execute((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[35/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_simulatorEndpoints)));
    ::g::Outracks::Simulator::Client::LoadingScreen::Show(::g::Outracks::Simulator::Client::Context::App(), ::STRINGS[5/*"Connecting"*/], ::STRINGS[6/*"Fetching pr...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :126
void ConnectingToHost__OnUpdate_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToHost", "OnUpdate()");
    ::g::Uno::Net::Sockets::Socket* ret2;

    if (uPtr(__this->_connecting)->IsCompleted())
    {
        ::g::Outracks::Simulator::SimulatorClient* client = ::g::Outracks::Simulator::SimulatorClient::New1((::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret2), ret2));
        ::g::Uno::Platform::CoreApp::add_Terminating(::g::Outracks::Simulator::Closure::ToAppStateChangeHandler(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)::g::Outracks::Simulator::SimulatorClient__Dispose_fn, client)));
        return *__retval = ::g::Outracks::Simulator::Client::Idle::New1((uObject*)client), void();
    }

    return *__retval = __this, void();
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [instance] :104
void ConnectingToHost::ctor_2(uObject* simulatorEndpoints)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToHost", ".ctor(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>)");
    ctor_1();
    _simulatorEndpoints = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[34/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Net.IPEndPoint>*/], simulatorEndpoints));
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [static] :104
ConnectingToHost* ConnectingToHost::New1(uObject* simulatorEndpoints)
{
    ConnectingToHost* obj1 = (ConnectingToHost*)uNew(ConnectingToHost_typeof());
    obj1->ctor_2(simulatorEndpoints);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ConnectingToProxy :52
// {
static void ConnectingToProxy_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Connecting");
    ::STRINGS[7] = uString::Const("Connecting to computer...");
    ::TYPES[35] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(ConnectingToProxy, _proxyEndpoints), 0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL), offsetof(ConnectingToProxy, _connecting), 0);
}

::g::Outracks::Simulator::Client::State_type* ConnectingToProxy_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connecting_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConnectingToProxy);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ConnectingToProxy", options);
    type->fp_build_ = ConnectingToProxy_build;
    type->fp_ctor_ = (void*)ConnectingToProxy__New1_fn;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToProxy__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToProxy__OnUpdate_fn;
    return type;
}

// public ConnectingToProxy() :62
void ConnectingToProxy__ctor_2_fn(ConnectingToProxy* __this)
{
    __this->ctor_2();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) :57
void ConnectingToProxy__ctor_3_fn(ConnectingToProxy* __this, uArray* proxyEndpoints)
{
    __this->ctor_3(proxyEndpoints);
}

// public ConnectingToProxy New() :62
void ConnectingToProxy__New1_fn(ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New1();
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) :57
void ConnectingToProxy__New2_fn(uArray* proxyEndpoints, ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New2(proxyEndpoints);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :67
void ConnectingToProxy__OnEnterState_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToProxy", "OnEnterState()");
    __this->_connecting = ::g::Outracks::Simulator::ProxyClient::GetSimulatorEndpoint((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[35/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_proxyEndpoints)), ::g::Outracks::Simulator::Client::Context::Project(), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[36/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], ::g::Outracks::Simulator::Client::Context::Defines())));
    ::g::Outracks::Simulator::Client::LoadingScreen::Show(::g::Outracks::Simulator::Client::Context::App(), ::STRINGS[5/*"Connecting"*/], ::STRINGS[7/*"Connecting ...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :91
void ConnectingToProxy__OnUpdate_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToProxy", "OnUpdate()");
    uArray* ret3;

    if (uPtr(__this->_connecting)->IsCompleted())
        return *__retval = ::g::Outracks::Simulator::Client::ConnectingToHost::New1((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[35/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], (::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret3), ret3)))), void();

    return *__retval = __this, void();
}

// public ConnectingToProxy() [instance] :62
void ConnectingToProxy::ctor_2()
{
    ctor_1();
    _proxyEndpoints = ::g::Outracks::Simulator::Client::Context::ProxyEndpoints();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) [instance] :57
void ConnectingToProxy::ctor_3(uArray* proxyEndpoints)
{
    ctor_1();
    _proxyEndpoints = proxyEndpoints;
}

// public ConnectingToProxy New() [static] :62
ConnectingToProxy* ConnectingToProxy::New1()
{
    ConnectingToProxy* obj2 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj2->ctor_2();
    return obj2;
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) [static] :57
ConnectingToProxy* ConnectingToProxy::New2(uArray* proxyEndpoints)
{
    ConnectingToProxy* obj1 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj1->ctor_3(proxyEndpoints);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ConnectionLost :441
// {
static void ConnectionLost_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Connection lost");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const("Change IP");
    ::STRINGS[11] = uString::Const("Reconnect");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* ConnectionLost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ConnectionLost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ConnectionLost", options);
    type->fp_build_ = ConnectionLost_build;
    return type;
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) :447
void ConnectionLost__ctor_2_fn(ConnectionLost* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    __this->ctor_2(exception);
}

// public ConnectionLost(Uno.Exception exception) :443
void ConnectionLost__ctor_3_fn(ConnectionLost* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_3(exception);
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) :447
void ConnectionLost__New2_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New2(exception);
}

// public ConnectionLost New(Uno.Exception exception) :443
void ConnectionLost__New3_fn(::g::Uno::Exception* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New3(exception);
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) [instance] :447
void ConnectionLost::ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectionLost", ".ctor(Outracks.Simulator.Protocol.ExceptionInfo)");
    ctor_1(::STRINGS[8/*"Connection ...*/], uPtr(exception)->Message, ::STRINGS[9/*""*/], uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 2, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[10/*"Change IP"*/], ::g::Outracks::Simulator::Client::ChangeIp::New1(::STRINGS[9/*""*/])), (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[11/*"Reconnect"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1())));
}

// public ConnectionLost(Uno.Exception exception) [instance] :443
void ConnectionLost::ctor_3(::g::Uno::Exception* exception)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectionLost", ".ctor(Uno.Exception)");
    ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(exception));
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) [static] :447
ConnectionLost* ConnectionLost::New2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ConnectionLost* obj2 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj2->ctor_2(exception);
    return obj2;
}

// public ConnectionLost New(Uno.Exception exception) [static] :443
ConnectionLost* ConnectionLost::New3(::g::Uno::Exception* exception)
{
    ConnectionLost* obj1 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj1->ctor_3(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Context.uno
// -----------------------------------------------------------------

// public static class Context :25
// {
static void Context_build(uType* type)
{
    type->SetFields(0,
        ::g::Outracks::Simulator::Client::FakeApp_typeof(), (uintptr_t)&Context::_App_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&Context::_Defines_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Client::InputMode_typeof(), (uintptr_t)&Context::_InputMode_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Context::_Project_, uFieldFlagsStatic,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), (uintptr_t)&Context::_ProxyEndpoints_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), (uintptr_t)&Context::_Reflection_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_App", NULL, (void*)Context__get_App_fn, 0, true, ::g::Outracks::Simulator::Client::FakeApp_typeof(), 0),
        new uFunction("get_Defines", NULL, (void*)Context__get_Defines_fn, 0, true, ::g::Uno::String_typeof()->Array(), 0),
        new uFunction("get_InputMode", NULL, (void*)Context__get_InputMode_fn, 0, true, ::g::Outracks::Simulator::Client::InputMode_typeof(), 0),
        new uFunction("get_Project", NULL, (void*)Context__get_Project_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_ProxyEndpoints", NULL, (void*)Context__get_ProxyEndpoints_fn, 0, true, ::g::Uno::Net::IPEndPoint_typeof()->Array(), 0),
        new uFunction("get_Reflection", NULL, (void*)Context__get_Reflection_fn, 0, true, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Context__set_Reflection_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()),
        new uFunction("SetApp", NULL, (void*)Context__SetApp_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Client::FakeApp_typeof()),
        new uFunction("SetGlobals", NULL, (void*)Context__SetGlobals_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array()));
}

uClassType* Context_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// public static generated Outracks.Simulator.Client.FakeApp get_App() :28
void Context__get_App_fn(::g::Outracks::Simulator::Client::FakeApp** __retval)
{
    *__retval = Context::App();
}

// private static generated void set_App(Outracks.Simulator.Client.FakeApp value) :28
void Context__set_App_fn(::g::Outracks::Simulator::Client::FakeApp* value)
{
    Context::App(value);
}

// public static generated string[] get_Defines() :31
void Context__get_Defines_fn(uArray** __retval)
{
    *__retval = Context::Defines();
}

// private static generated void set_Defines(string[] value) :31
void Context__set_Defines_fn(uArray* value)
{
    Context::Defines(value);
}

// public static generated Outracks.Simulator.Client.InputMode get_InputMode() :27
void Context__get_InputMode_fn(int32_t* __retval)
{
    *__retval = Context::InputMode();
}

// private static generated void set_InputMode(Outracks.Simulator.Client.InputMode value) :27
void Context__set_InputMode_fn(int32_t* value)
{
    Context::InputMode(*value);
}

// public static generated string get_Project() :30
void Context__get_Project_fn(uString** __retval)
{
    *__retval = Context::Project();
}

// private static generated void set_Project(string value) :30
void Context__set_Project_fn(uString* value)
{
    Context::Project(value);
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() :29
void Context__get_ProxyEndpoints_fn(uArray** __retval)
{
    *__retval = Context::ProxyEndpoints();
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) :29
void Context__set_ProxyEndpoints_fn(uArray* value)
{
    Context::ProxyEndpoints(value);
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() :33
void Context__get_Reflection_fn(uObject** __retval)
{
    *__retval = Context::Reflection();
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :33
void Context__set_Reflection_fn(uObject* value)
{
    Context::Reflection(value);
}

// public static void SetApp(Outracks.Simulator.Client.FakeApp app) :35
void Context__SetApp_fn(::g::Outracks::Simulator::Client::FakeApp* app)
{
    Context::SetApp(app);
}

// public static void SetGlobals(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) :40
void Context__SetGlobals_fn(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    Context::SetGlobals(proxyEndpoints, project, defines);
}

uSStrong< ::g::Outracks::Simulator::Client::FakeApp*> Context::_App_;
uSStrong<uArray*> Context::_Defines_;
int32_t Context::_InputMode_;
uSStrong<uString*> Context::_Project_;
uSStrong<uArray*> Context::_ProxyEndpoints_;
uSStrong<uObject*> Context::_Reflection_;

// public static void SetApp(Outracks.Simulator.Client.FakeApp app) [static] :35
void Context::SetApp(::g::Outracks::Simulator::Client::FakeApp* app)
{
    Context::App(app);
}

// public static void SetGlobals(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) [static] :40
void Context::SetGlobals(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    Context::ProxyEndpoints(proxyEndpoints);
    Context::Project(project);
    Context::Defines(defines);
}

// public static generated Outracks.Simulator.Client.FakeApp get_App() [static] :28
::g::Outracks::Simulator::Client::FakeApp* Context::App()
{
    return Context::_App_;
}

// private static generated void set_App(Outracks.Simulator.Client.FakeApp value) [static] :28
void Context::App(::g::Outracks::Simulator::Client::FakeApp* value)
{
    Context::_App_ = value;
}

// public static generated string[] get_Defines() [static] :31
uArray* Context::Defines()
{
    return Context::_Defines_;
}

// private static generated void set_Defines(string[] value) [static] :31
void Context::Defines(uArray* value)
{
    Context::_Defines_ = value;
}

// public static generated Outracks.Simulator.Client.InputMode get_InputMode() [static] :27
int32_t Context::InputMode()
{
    return Context::_InputMode_;
}

// private static generated void set_InputMode(Outracks.Simulator.Client.InputMode value) [static] :27
void Context::InputMode(int32_t value)
{
    Context::_InputMode_ = value;
}

// public static generated string get_Project() [static] :30
uString* Context::Project()
{
    return Context::_Project_;
}

// private static generated void set_Project(string value) [static] :30
void Context::Project(uString* value)
{
    Context::_Project_ = value;
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() [static] :29
uArray* Context::ProxyEndpoints()
{
    return Context::_ProxyEndpoints_;
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) [static] :29
void Context::ProxyEndpoints(uArray* value)
{
    Context::_ProxyEndpoints_ = value;
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() [static] :33
uObject* Context::Reflection()
{
    return Context::_Reflection_;
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [static] :33
void Context::Reflection(uObject* value)
{
    Context::_Reflection_ = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// internal sealed extern class CppEvent :381
// {
static void CppEvent_build(uType* type)
{
    ::STRINGS[12] = uString::Const("add_");
    ::STRINGS[13] = uString::Const("remove_");
    ::TYPES[38] = ::g::Uno::Type_typeof()->Array();
    type->SetInterfaces(
        ::g::Outracks::Simulator::Client::IEvent_typeof(), offsetof(CppEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(CppEvent, _declaringType), 0,
        ::g::Uno::Type_typeof(), offsetof(CppEvent, _type), 0,
        ::g::Uno::String_typeof(), offsetof(CppEvent, _name), 0);
}

CppEvent_type* CppEvent_typeof()
{
    static uSStrong<CppEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppEvent);
    options.TypeSize = sizeof(CppEvent_type);
    type = (CppEvent_type*)uClassType::New("Outracks.Simulator.Client.CppEvent", options);
    type->fp_build_ = CppEvent_build;
    type->interface0.fp_get_DeclaringType = (void(*)(uObject*, uType**))CppEvent__get_DeclaringType_fn;
    type->interface0.fp_get_AddMethod = (void(*)(uObject*, uObject**))CppEvent__get_AddMethod_fn;
    type->interface0.fp_get_RemoveMethod = (void(*)(uObject*, uObject**))CppEvent__get_RemoveMethod_fn;
    return type;
}

// public CppEvent(Uno.Type declaringType, Uno.Type type, string name) :387
void CppEvent__ctor__fn(CppEvent* __this, uType* declaringType, uType* type, uString* name)
{
    __this->ctor_(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_AddMethod() :401
void CppEvent__get_AddMethod_fn(CppEvent* __this, uObject** __retval)
{
    *__retval = __this->AddMethod();
}

// public Uno.Type get_DeclaringType() :396
void CppEvent__get_DeclaringType_fn(CppEvent* __this, uType** __retval)
{
    *__retval = __this->DeclaringType();
}

// public CppEvent New(Uno.Type declaringType, Uno.Type type, string name) :387
void CppEvent__New1_fn(uType* declaringType, uType* type, uString* name, CppEvent** __retval)
{
    *__retval = CppEvent::New1(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_RemoveMethod() :406
void CppEvent__get_RemoveMethod_fn(CppEvent* __this, uObject** __retval)
{
    *__retval = __this->RemoveMethod();
}

// public CppEvent(Uno.Type declaringType, Uno.Type type, string name) [instance] :387
void CppEvent::ctor_(uType* declaringType, uType* type, uString* name)
{
    _declaringType = declaringType;
    _type = type;
    _name = name;
}

// public Uno.Reflection.IFunction get_AddMethod() [instance] :401
uObject* CppEvent::AddMethod()
{
    uStackFrame __("Outracks.Simulator.Client.CppEvent", "get_AddMethod()");
    return ::g::Outracks::Simulator::Client::TryInvokeExtension::GetMethod(_declaringType, ::g::Uno::String::op_Addition2(::STRINGS[12/*"add_"*/], _name), uArray::Init<uType*>(::TYPES[38/*Uno.Type[]*/], 1, (uType*)_type));
}

// public Uno.Type get_DeclaringType() [instance] :396
uType* CppEvent::DeclaringType()
{
    return _declaringType;
}

// public Uno.Reflection.IFunction get_RemoveMethod() [instance] :406
uObject* CppEvent::RemoveMethod()
{
    uStackFrame __("Outracks.Simulator.Client.CppEvent", "get_RemoveMethod()");
    return ::g::Outracks::Simulator::Client::TryInvokeExtension::GetMethod(_declaringType, ::g::Uno::String::op_Addition2(::STRINGS[13/*"remove_"*/], _name), uArray::Init<uType*>(::TYPES[38/*Uno.Type[]*/], 1, (uType*)_type));
}

// public CppEvent New(Uno.Type declaringType, Uno.Type type, string name) [static] :387
CppEvent* CppEvent::New1(uType* declaringType, uType* type, uString* name)
{
    CppEvent* obj1 = (CppEvent*)uNew(CppEvent_typeof());
    obj1->ctor_(declaringType, type, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// internal sealed extern class CppProperty :411
// {
static void CppProperty_build(uType* type)
{
    ::STRINGS[14] = uString::Const("get_");
    ::STRINGS[15] = uString::Const("set_");
    ::TYPES[38] = ::g::Uno::Type_typeof()->Array();
    type->SetInterfaces(
        ::g::Outracks::Simulator::Client::IProperty_typeof(), offsetof(CppProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(CppProperty, _declaringType), 0,
        ::g::Uno::Type_typeof(), offsetof(CppProperty, _type), 0,
        ::g::Uno::String_typeof(), offsetof(CppProperty, _name), 0);
}

CppProperty_type* CppProperty_typeof()
{
    static uSStrong<CppProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppProperty);
    options.TypeSize = sizeof(CppProperty_type);
    type = (CppProperty_type*)uClassType::New("Outracks.Simulator.Client.CppProperty", options);
    type->fp_build_ = CppProperty_build;
    type->interface0.fp_get_DeclaringType = (void(*)(uObject*, uType**))CppProperty__get_DeclaringType_fn;
    type->interface0.fp_get_GetMethod = (void(*)(uObject*, uObject**))CppProperty__get_GetMethod_fn;
    type->interface0.fp_get_SetMethod = (void(*)(uObject*, uObject**))CppProperty__get_SetMethod_fn;
    return type;
}

// public CppProperty(Uno.Type declaringType, Uno.Type type, string name) :417
void CppProperty__ctor__fn(CppProperty* __this, uType* declaringType, uType* type, uString* name)
{
    __this->ctor_(declaringType, type, name);
}

// public Uno.Type get_DeclaringType() :426
void CppProperty__get_DeclaringType_fn(CppProperty* __this, uType** __retval)
{
    *__retval = __this->DeclaringType();
}

// public Uno.Reflection.IFunction get_GetMethod() :431
void CppProperty__get_GetMethod_fn(CppProperty* __this, uObject** __retval)
{
    *__retval = __this->GetMethod();
}

// public CppProperty New(Uno.Type declaringType, Uno.Type type, string name) :417
void CppProperty__New1_fn(uType* declaringType, uType* type, uString* name, CppProperty** __retval)
{
    *__retval = CppProperty::New1(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_SetMethod() :436
void CppProperty__get_SetMethod_fn(CppProperty* __this, uObject** __retval)
{
    *__retval = __this->SetMethod();
}

// public CppProperty(Uno.Type declaringType, Uno.Type type, string name) [instance] :417
void CppProperty::ctor_(uType* declaringType, uType* type, uString* name)
{
    _declaringType = declaringType;
    _type = type;
    _name = name;
}

// public Uno.Type get_DeclaringType() [instance] :426
uType* CppProperty::DeclaringType()
{
    return _declaringType;
}

// public Uno.Reflection.IFunction get_GetMethod() [instance] :431
uObject* CppProperty::GetMethod()
{
    uStackFrame __("Outracks.Simulator.Client.CppProperty", "get_GetMethod()");
    return ::g::Outracks::Simulator::Client::TryInvokeExtension::GetMethod(_declaringType, ::g::Uno::String::op_Addition2(::STRINGS[14/*"get_"*/], _name), uArray::New(::TYPES[38/*Uno.Type[]*/], 0));
}

// public Uno.Reflection.IFunction get_SetMethod() [instance] :436
uObject* CppProperty::SetMethod()
{
    uStackFrame __("Outracks.Simulator.Client.CppProperty", "get_SetMethod()");
    return ::g::Outracks::Simulator::Client::TryInvokeExtension::GetMethod(_declaringType, ::g::Uno::String::op_Addition2(::STRINGS[15/*"set_"*/], _name), uArray::Init<uType*>(::TYPES[38/*Uno.Type[]*/], 1, (uType*)_type));
}

// public CppProperty New(Uno.Type declaringType, Uno.Type type, string name) [static] :417
CppProperty* CppProperty::New1(uType* declaringType, uType* type, uString* name)
{
    CppProperty* obj1 = (CppProperty*)uNew(CppProperty_typeof());
    obj1->ctor_(declaringType, type, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class DesignerNotRunning :469
// {
static void DesignerNotRunning_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Fuse not running");
    ::STRINGS[17] = uString::Const("Please check that this project is open in Fuse on your computer.");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const("Change IP");
    ::STRINGS[18] = uString::Const("Try again");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* DesignerNotRunning_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DesignerNotRunning);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.DesignerNotRunning", options);
    type->fp_build_ = DesignerNotRunning_build;
    type->fp_ctor_ = (void*)DesignerNotRunning__New2_fn;
    return type;
}

// public DesignerNotRunning() :471
void DesignerNotRunning__ctor_2_fn(DesignerNotRunning* __this)
{
    __this->ctor_2();
}

// public DesignerNotRunning New() :471
void DesignerNotRunning__New2_fn(DesignerNotRunning** __retval)
{
    *__retval = DesignerNotRunning::New2();
}

// public DesignerNotRunning() [instance] :471
void DesignerNotRunning::ctor_2()
{
    uStackFrame __("Outracks.Simulator.Client.DesignerNotRunning", ".ctor()");
    ctor_1(::STRINGS[16/*"Fuse not ru...*/], ::STRINGS[17/*"Please chec...*/], ::STRINGS[9/*""*/], uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 2, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[10/*"Change IP"*/], ::g::Outracks::Simulator::Client::ChangeIp::New1(::STRINGS[9/*""*/])), (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[18/*"Try again"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1())));
}

// public DesignerNotRunning New() [static] :471
DesignerNotRunning* DesignerNotRunning::New2()
{
    DesignerNotRunning* obj1 = (DesignerNotRunning*)uNew(DesignerNotRunning_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal sealed class DialogButton :231
// {
static void DialogButton_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DialogButton, Text), 0,
        ::g::Outracks::Simulator::Client::State_typeof(), offsetof(DialogButton, Destination), 0);
}

uType* DialogButton_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DialogButton);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.DialogButton", options);
    type->fp_build_ = DialogButton_build;
    return type;
}

// public DialogButton(string text, Outracks.Simulator.Client.State destination) :236
void DialogButton__ctor__fn(DialogButton* __this, uString* text, ::g::Outracks::Simulator::Client::State* destination)
{
    __this->ctor_(text, destination);
}

// public DialogButton New(string text, Outracks.Simulator.Client.State destination) :236
void DialogButton__New1_fn(uString* text, ::g::Outracks::Simulator::Client::State* destination, DialogButton** __retval)
{
    *__retval = DialogButton::New1(text, destination);
}

// public DialogButton(string text, Outracks.Simulator.Client.State destination) [instance] :236
void DialogButton::ctor_(uString* text, ::g::Outracks::Simulator::Client::State* destination)
{
    Text = text;
    Destination = destination;
}

// public DialogButton New(string text, Outracks.Simulator.Client.State destination) [static] :236
DialogButton* DialogButton::New1(uString* text, ::g::Outracks::Simulator::Client::State* destination)
{
    DialogButton* obj1 = (DialogButton*)uNew(DialogButton_typeof());
    obj1->ctor_(text, destination);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/DotNetReflection.uno
// -------------------------------------------------------------------------------------

// public sealed class DotNetReflection :9
// {
static void DotNetReflection_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Not DotNet backend");
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(DotNetReflection_type, interface0));
    type->Reflection.SetFunctions(14,
        new uFunction("AddEventHandler", NULL, (void*)DotNetReflection__AddEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, (void*)DotNetReflection__CallDynamic_fn, 0, false, uObject_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, (void*)DotNetReflection__CallStatic_fn, 0, false, uObject_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, (void*)DotNetReflection__CreateDelegate_fn, 0, false, uObject_typeof(), 4, uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("GetEnumValue", NULL, (void*)DotNetReflection__GetEnumValue_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetPropertyValue", NULL, (void*)DotNetReflection__GetPropertyValue_fn, 0, false, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, (void*)DotNetReflection__GetStaticPropertyOrFieldValue_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Instantiate", NULL, (void*)DotNetReflection__Instantiate_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, (void*)DotNetReflection__IsSubtype_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("IsType", NULL, (void*)DotNetReflection__IsType_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Load", NULL, (void*)DotNetReflection__Load_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)DotNetReflection__New1_fn, 0, true, type, 0),
        new uFunction("RemoveEventHandler", NULL, (void*)DotNetReflection__RemoveEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, (void*)DotNetReflection__SetPropertyValue_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()));
}

DotNetReflection_type* DotNetReflection_typeof()
{
    static uSStrong<DotNetReflection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DotNetReflection);
    options.TypeSize = sizeof(DotNetReflection_type);
    type = (DotNetReflection_type*)uClassType::New("Outracks.Simulator.Client.DotNetReflection", options);
    type->fp_build_ = DotNetReflection_build;
    type->fp_ctor_ = (void*)DotNetReflection__New1_fn;
    type->interface0.fp_CallDynamic = (void(*)(uObject*, uObject*, uString*, uArray*, uObject**))DotNetReflection__CallDynamic_fn;
    type->interface0.fp_CallStatic = (void(*)(uObject*, uString*, uString*, uArray*, uObject**))DotNetReflection__CallStatic_fn;
    type->interface0.fp_SetPropertyValue = (void(*)(uObject*, uObject*, uString*, uObject*))DotNetReflection__SetPropertyValue_fn;
    type->interface0.fp_GetPropertyValue = (void(*)(uObject*, uObject*, uString*, uObject**))DotNetReflection__GetPropertyValue_fn;
    type->interface0.fp_GetStaticPropertyOrFieldValue = (void(*)(uObject*, uString*, uString*, uObject**))DotNetReflection__GetStaticPropertyOrFieldValue_fn;
    type->interface0.fp_CreateDelegate = (void(*)(uObject*, uObject*, uString*, uArray*, uString*, uObject**))DotNetReflection__CreateDelegate_fn;
    type->interface0.fp_AddEventHandler = (void(*)(uObject*, uObject*, uString*, uObject*))DotNetReflection__AddEventHandler_fn;
    type->interface0.fp_RemoveEventHandler = (void(*)(uObject*, uObject*, uString*, uObject*))DotNetReflection__RemoveEventHandler_fn;
    type->interface0.fp_Instantiate = (void(*)(uObject*, uString*, uArray*, uObject**))DotNetReflection__Instantiate_fn;
    type->interface0.fp_IsSubtype = (void(*)(uObject*, uObject*, uString*, bool*))DotNetReflection__IsSubtype_fn;
    type->interface0.fp_IsType = (void(*)(uObject*, uObject*, uString*, bool*))DotNetReflection__IsType_fn;
    type->interface0.fp_GetEnumValue = (void(*)(uObject*, uString*, uString*, uObject**))DotNetReflection__GetEnumValue_fn;
    return type;
}

// public generated DotNetReflection() :9
void DotNetReflection__ctor__fn(DotNetReflection* __this)
{
    __this->ctor_();
}

// public void AddEventHandler(object instance, string member, object handlerDelegate) :26
void DotNetReflection__AddEventHandler_fn(DotNetReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate)
{
    __this->AddEventHandler(instance, member, handlerDelegate);
}

// public object CallDynamic(object instance, string methodName, object[] arguments) :16
void DotNetReflection__CallDynamic_fn(DotNetReflection* __this, uObject* instance, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallDynamic(instance, methodName, arguments);
}

// public object CallStatic(string typeName, string methodName, object[] arguments) :17
void DotNetReflection__CallStatic_fn(DotNetReflection* __this, uString* typeName, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallStatic(typeName, methodName, arguments);
}

// public object CreateDelegate(object instance, string methodName, string[] methodArgumentTypes, string delegateTypeName) :24
void DotNetReflection__CreateDelegate_fn(DotNetReflection* __this, uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName, uObject** __retval)
{
    *__retval = __this->CreateDelegate(instance, methodName, methodArgumentTypes, delegateTypeName);
}

// public object GetEnumValue(string enumType, string valueName) :32
void DotNetReflection__GetEnumValue_fn(DotNetReflection* __this, uString* enumType, uString* valueName, uObject** __retval)
{
    *__retval = __this->GetEnumValue(enumType, valueName);
}

// public object GetPropertyValue(object instance, string propertyName) :20
void DotNetReflection__GetPropertyValue_fn(DotNetReflection* __this, uObject* instance, uString* propertyName, uObject** __retval)
{
    *__retval = __this->GetPropertyValue(instance, propertyName);
}

// public object GetStaticPropertyOrFieldValue(string typeName, string memberName) :22
void DotNetReflection__GetStaticPropertyOrFieldValue_fn(DotNetReflection* __this, uString* typeName, uString* memberName, uObject** __retval)
{
    *__retval = __this->GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public object Instantiate(string typeName, object[] args) :29
void DotNetReflection__Instantiate_fn(DotNetReflection* __this, uString* typeName, uArray* args, uObject** __retval)
{
    *__retval = __this->Instantiate(typeName, args);
}

// public bool IsSubtype(object obj, string typeName) :30
void DotNetReflection__IsSubtype_fn(DotNetReflection* __this, uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = __this->IsSubtype(obj, typeName);
}

// public bool IsType(object obj, string typeName) :31
void DotNetReflection__IsType_fn(DotNetReflection* __this, uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = __this->IsType(obj, typeName);
}

// public static Outracks.Simulator.Client.DotNetReflection Load(string outputDir) :11
void DotNetReflection__Load_fn(uString* outputDir, DotNetReflection** __retval)
{
    *__retval = DotNetReflection::Load(outputDir);
}

// public generated DotNetReflection New() :9
void DotNetReflection__New1_fn(DotNetReflection** __retval)
{
    *__retval = DotNetReflection::New1();
}

// public void RemoveEventHandler(object instance, string member, object handlerDelegate) :27
void DotNetReflection__RemoveEventHandler_fn(DotNetReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate)
{
    __this->RemoveEventHandler(instance, member, handlerDelegate);
}

// public void SetPropertyValue(object instance, string propertyName, object value) :19
void DotNetReflection__SetPropertyValue_fn(DotNetReflection* __this, uObject* instance, uString* propertyName, uObject* value)
{
    __this->SetPropertyValue(instance, propertyName, value);
}

// public generated DotNetReflection() [instance] :9
void DotNetReflection::ctor_()
{
}

// public void AddEventHandler(object instance, string member, object handlerDelegate) [instance] :26
void DotNetReflection::AddEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "AddEventHandler(object,string,object)");
    U_THROW(::g::Uno::Exception::New1());
}

// public object CallDynamic(object instance, string methodName, object[] arguments) [instance] :16
uObject* DotNetReflection::CallDynamic(uObject* instance, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "CallDynamic(object,string,object[])");
    U_THROW(::g::Uno::Exception::New1());
}

// public object CallStatic(string typeName, string methodName, object[] arguments) [instance] :17
uObject* DotNetReflection::CallStatic(uString* typeName, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "CallStatic(string,string,object[])");
    U_THROW(::g::Uno::Exception::New1());
}

// public object CreateDelegate(object instance, string methodName, string[] methodArgumentTypes, string delegateTypeName) [instance] :24
uObject* DotNetReflection::CreateDelegate(uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "CreateDelegate(object,string,string[],string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public object GetEnumValue(string enumType, string valueName) [instance] :32
uObject* DotNetReflection::GetEnumValue(uString* enumType, uString* valueName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "GetEnumValue(string,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public object GetPropertyValue(object instance, string propertyName) [instance] :20
uObject* DotNetReflection::GetPropertyValue(uObject* instance, uString* propertyName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "GetPropertyValue(object,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public object GetStaticPropertyOrFieldValue(string typeName, string memberName) [instance] :22
uObject* DotNetReflection::GetStaticPropertyOrFieldValue(uString* typeName, uString* memberName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "GetStaticPropertyOrFieldValue(string,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public object Instantiate(string typeName, object[] args) [instance] :29
uObject* DotNetReflection::Instantiate(uString* typeName, uArray* args)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "Instantiate(string,object[])");
    U_THROW(::g::Uno::Exception::New1());
}

// public bool IsSubtype(object obj, string typeName) [instance] :30
bool DotNetReflection::IsSubtype(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "IsSubtype(object,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public bool IsType(object obj, string typeName) [instance] :31
bool DotNetReflection::IsType(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "IsType(object,string)");
    U_THROW(::g::Uno::Exception::New1());
}

// public void RemoveEventHandler(object instance, string member, object handlerDelegate) [instance] :27
void DotNetReflection::RemoveEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "RemoveEventHandler(object,string,object)");
    U_THROW(::g::Uno::Exception::New1());
}

// public void SetPropertyValue(object instance, string propertyName, object value) [instance] :19
void DotNetReflection::SetPropertyValue(uObject* instance, uString* propertyName, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "SetPropertyValue(object,string,object)");
    U_THROW(::g::Uno::Exception::New1());
}

// public static Outracks.Simulator.Client.DotNetReflection Load(string outputDir) [static] :11
DotNetReflection* DotNetReflection::Load(uString* outputDir)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflection", "Load(string)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Not DotNet ...*/]));
}

// public generated DotNetReflection New() [static] :9
DotNetReflection* DotNetReflection::New1()
{
    DotNetReflection* obj1 = (DotNetReflection*)uNew(DotNetReflection_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/DotNetReflection.uno
// -------------------------------------------------------------------------------------

// public sealed class DotNetReflectionWrapper :37
// {
static void DotNetReflectionWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(DotNetReflectionWrapper_type, interface0));
    type->SetFields(0,
        ::g::Outracks::Simulator::Client::DotNetReflection_typeof(), offsetof(DotNetReflectionWrapper, __reflection1), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("get__reflection", NULL, (void*)DotNetReflectionWrapper__get__reflection_fn, 0, false, ::g::Outracks::Simulator::Client::DotNetReflection_typeof(), 0),
        new uFunction("set__reflection", NULL, (void*)DotNetReflectionWrapper__set__reflection_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Client::DotNetReflection_typeof()),
        new uFunction("AddEventHandler", NULL, (void*)DotNetReflectionWrapper__AddEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, (void*)DotNetReflectionWrapper__CallDynamic_fn, 0, false, uObject_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, (void*)DotNetReflectionWrapper__CallStatic_fn, 0, false, uObject_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, (void*)DotNetReflectionWrapper__CreateDelegate_fn, 0, false, uObject_typeof(), 4, uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("GetEnumValue", NULL, (void*)DotNetReflectionWrapper__GetEnumValue_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetPropertyValue", NULL, (void*)DotNetReflectionWrapper__GetPropertyValue_fn, 0, false, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, (void*)DotNetReflectionWrapper__GetStaticPropertyOrFieldValue_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Instantiate", NULL, (void*)DotNetReflectionWrapper__Instantiate_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, (void*)DotNetReflectionWrapper__IsSubtype_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("IsType", NULL, (void*)DotNetReflectionWrapper__IsType_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)DotNetReflectionWrapper__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Client::DotNetReflection_typeof()),
        new uFunction("RemoveEventHandler", NULL, (void*)DotNetReflectionWrapper__RemoveEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, (void*)DotNetReflectionWrapper__SetPropertyValue_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()));
}

DotNetReflectionWrapper_type* DotNetReflectionWrapper_typeof()
{
    static uSStrong<DotNetReflectionWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DotNetReflectionWrapper);
    options.TypeSize = sizeof(DotNetReflectionWrapper_type);
    type = (DotNetReflectionWrapper_type*)uClassType::New("Outracks.Simulator.Client.DotNetReflectionWrapper", options);
    type->fp_build_ = DotNetReflectionWrapper_build;
    type->interface0.fp_CallDynamic = (void(*)(uObject*, uObject*, uString*, uArray*, uObject**))DotNetReflectionWrapper__CallDynamic_fn;
    type->interface0.fp_CallStatic = (void(*)(uObject*, uString*, uString*, uArray*, uObject**))DotNetReflectionWrapper__CallStatic_fn;
    type->interface0.fp_SetPropertyValue = (void(*)(uObject*, uObject*, uString*, uObject*))DotNetReflectionWrapper__SetPropertyValue_fn;
    type->interface0.fp_GetPropertyValue = (void(*)(uObject*, uObject*, uString*, uObject**))DotNetReflectionWrapper__GetPropertyValue_fn;
    type->interface0.fp_GetStaticPropertyOrFieldValue = (void(*)(uObject*, uString*, uString*, uObject**))DotNetReflectionWrapper__GetStaticPropertyOrFieldValue_fn;
    type->interface0.fp_CreateDelegate = (void(*)(uObject*, uObject*, uString*, uArray*, uString*, uObject**))DotNetReflectionWrapper__CreateDelegate_fn;
    type->interface0.fp_AddEventHandler = (void(*)(uObject*, uObject*, uString*, uObject*))DotNetReflectionWrapper__AddEventHandler_fn;
    type->interface0.fp_RemoveEventHandler = (void(*)(uObject*, uObject*, uString*, uObject*))DotNetReflectionWrapper__RemoveEventHandler_fn;
    type->interface0.fp_Instantiate = (void(*)(uObject*, uString*, uArray*, uObject**))DotNetReflectionWrapper__Instantiate_fn;
    type->interface0.fp_IsSubtype = (void(*)(uObject*, uObject*, uString*, bool*))DotNetReflectionWrapper__IsSubtype_fn;
    type->interface0.fp_IsType = (void(*)(uObject*, uObject*, uString*, bool*))DotNetReflectionWrapper__IsType_fn;
    type->interface0.fp_GetEnumValue = (void(*)(uObject*, uString*, uString*, uObject**))DotNetReflectionWrapper__GetEnumValue_fn;
    return type;
}

// public DotNetReflectionWrapper(Outracks.Simulator.Client.DotNetReflection reflection) :41
void DotNetReflectionWrapper__ctor__fn(DotNetReflectionWrapper* __this, ::g::Outracks::Simulator::Client::DotNetReflection* reflection)
{
    __this->ctor_(reflection);
}

// public generated Outracks.Simulator.Client.DotNetReflection get__reflection() :39
void DotNetReflectionWrapper__get__reflection_fn(DotNetReflectionWrapper* __this, ::g::Outracks::Simulator::Client::DotNetReflection** __retval)
{
    *__retval = __this->_reflection();
}

// public generated void set__reflection(Outracks.Simulator.Client.DotNetReflection value) :39
void DotNetReflectionWrapper__set__reflection_fn(DotNetReflectionWrapper* __this, ::g::Outracks::Simulator::Client::DotNetReflection* value)
{
    __this->_reflection(value);
}

// public void AddEventHandler(object instance, string member, object handlerDelegate) :75
void DotNetReflectionWrapper__AddEventHandler_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* member, uObject* handlerDelegate)
{
    __this->AddEventHandler(instance, member, handlerDelegate);
}

// public object CallDynamic(object instance, string methodName, object[] arguments) :46
void DotNetReflectionWrapper__CallDynamic_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallDynamic(instance, methodName, arguments);
}

// public object CallStatic(string typeName, string methodName, object[] arguments) :51
void DotNetReflectionWrapper__CallStatic_fn(DotNetReflectionWrapper* __this, uString* typeName, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallStatic(typeName, methodName, arguments);
}

// public object CreateDelegate(object instance, string methodName, string[] methodArgumentTypes, string delegateTypeName) :70
void DotNetReflectionWrapper__CreateDelegate_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName, uObject** __retval)
{
    *__retval = __this->CreateDelegate(instance, methodName, methodArgumentTypes, delegateTypeName);
}

// public object GetEnumValue(string enumType, string valueName) :96
void DotNetReflectionWrapper__GetEnumValue_fn(DotNetReflectionWrapper* __this, uString* enumType, uString* valueName, uObject** __retval)
{
    *__retval = __this->GetEnumValue(enumType, valueName);
}

// public object GetPropertyValue(object instance, string propertyName) :60
void DotNetReflectionWrapper__GetPropertyValue_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* propertyName, uObject** __retval)
{
    *__retval = __this->GetPropertyValue(instance, propertyName);
}

// public object GetStaticPropertyOrFieldValue(string typeName, string memberName) :65
void DotNetReflectionWrapper__GetStaticPropertyOrFieldValue_fn(DotNetReflectionWrapper* __this, uString* typeName, uString* memberName, uObject** __retval)
{
    *__retval = __this->GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public object Instantiate(string typeName, object[] args) :84
void DotNetReflectionWrapper__Instantiate_fn(DotNetReflectionWrapper* __this, uString* typeName, uArray* args, uObject** __retval)
{
    *__retval = __this->Instantiate(typeName, args);
}

// public bool IsSubtype(object obj, string typeName) :88
void DotNetReflectionWrapper__IsSubtype_fn(DotNetReflectionWrapper* __this, uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = __this->IsSubtype(obj, typeName);
}

// public bool IsType(object obj, string typeName) :92
void DotNetReflectionWrapper__IsType_fn(DotNetReflectionWrapper* __this, uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = __this->IsType(obj, typeName);
}

// public DotNetReflectionWrapper New(Outracks.Simulator.Client.DotNetReflection reflection) :41
void DotNetReflectionWrapper__New1_fn(::g::Outracks::Simulator::Client::DotNetReflection* reflection, DotNetReflectionWrapper** __retval)
{
    *__retval = DotNetReflectionWrapper::New1(reflection);
}

// public void RemoveEventHandler(object instance, string member, object handlerDelegate) :79
void DotNetReflectionWrapper__RemoveEventHandler_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* member, uObject* handlerDelegate)
{
    __this->RemoveEventHandler(instance, member, handlerDelegate);
}

// public void SetPropertyValue(object instance, string propertyName, object value) :56
void DotNetReflectionWrapper__SetPropertyValue_fn(DotNetReflectionWrapper* __this, uObject* instance, uString* propertyName, uObject* value)
{
    __this->SetPropertyValue(instance, propertyName, value);
}

// public DotNetReflectionWrapper(Outracks.Simulator.Client.DotNetReflection reflection) [instance] :41
void DotNetReflectionWrapper::ctor_(::g::Outracks::Simulator::Client::DotNetReflection* reflection)
{
    _reflection(reflection);
}

// public generated Outracks.Simulator.Client.DotNetReflection get__reflection() [instance] :39
::g::Outracks::Simulator::Client::DotNetReflection* DotNetReflectionWrapper::_reflection()
{
    return __reflection1;
}

// public generated void set__reflection(Outracks.Simulator.Client.DotNetReflection value) [instance] :39
void DotNetReflectionWrapper::_reflection(::g::Outracks::Simulator::Client::DotNetReflection* value)
{
    __reflection1 = value;
}

// public void AddEventHandler(object instance, string member, object handlerDelegate) [instance] :75
void DotNetReflectionWrapper::AddEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "AddEventHandler(object,string,object)");
    uPtr(_reflection())->AddEventHandler(instance, member, handlerDelegate);
}

// public object CallDynamic(object instance, string methodName, object[] arguments) [instance] :46
uObject* DotNetReflectionWrapper::CallDynamic(uObject* instance, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "CallDynamic(object,string,object[])");
    return uPtr(_reflection())->CallDynamic(instance, methodName, arguments);
}

// public object CallStatic(string typeName, string methodName, object[] arguments) [instance] :51
uObject* DotNetReflectionWrapper::CallStatic(uString* typeName, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "CallStatic(string,string,object[])");
    return uPtr(_reflection())->CallStatic(typeName, methodName, arguments);
}

// public object CreateDelegate(object instance, string methodName, string[] methodArgumentTypes, string delegateTypeName) [instance] :70
uObject* DotNetReflectionWrapper::CreateDelegate(uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "CreateDelegate(object,string,string[],string)");
    return uPtr(_reflection())->CreateDelegate(instance, methodName, methodArgumentTypes, delegateTypeName);
}

// public object GetEnumValue(string enumType, string valueName) [instance] :96
uObject* DotNetReflectionWrapper::GetEnumValue(uString* enumType, uString* valueName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "GetEnumValue(string,string)");
    return uPtr(_reflection())->GetEnumValue(enumType, valueName);
}

// public object GetPropertyValue(object instance, string propertyName) [instance] :60
uObject* DotNetReflectionWrapper::GetPropertyValue(uObject* instance, uString* propertyName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "GetPropertyValue(object,string)");
    return uPtr(_reflection())->GetPropertyValue(instance, propertyName);
}

// public object GetStaticPropertyOrFieldValue(string typeName, string memberName) [instance] :65
uObject* DotNetReflectionWrapper::GetStaticPropertyOrFieldValue(uString* typeName, uString* memberName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "GetStaticPropertyOrFieldValue(string,string)");
    return uPtr(_reflection())->GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public object Instantiate(string typeName, object[] args) [instance] :84
uObject* DotNetReflectionWrapper::Instantiate(uString* typeName, uArray* args)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "Instantiate(string,object[])");
    return uPtr(_reflection())->Instantiate(typeName, args);
}

// public bool IsSubtype(object obj, string typeName) [instance] :88
bool DotNetReflectionWrapper::IsSubtype(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "IsSubtype(object,string)");
    return uPtr(_reflection())->IsSubtype(obj, typeName);
}

// public bool IsType(object obj, string typeName) [instance] :92
bool DotNetReflectionWrapper::IsType(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "IsType(object,string)");
    return uPtr(_reflection())->IsType(obj, typeName);
}

// public void RemoveEventHandler(object instance, string member, object handlerDelegate) [instance] :79
void DotNetReflectionWrapper::RemoveEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "RemoveEventHandler(object,string,object)");
    uPtr(_reflection())->RemoveEventHandler(instance, member, handlerDelegate);
}

// public void SetPropertyValue(object instance, string propertyName, object value) [instance] :56
void DotNetReflectionWrapper::SetPropertyValue(uObject* instance, uString* propertyName, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Client.DotNetReflectionWrapper", "SetPropertyValue(object,string,object)");
    uPtr(_reflection())->SetPropertyValue(instance, propertyName, value);
}

// public DotNetReflectionWrapper New(Outracks.Simulator.Client.DotNetReflection reflection) [static] :41
DotNetReflectionWrapper* DotNetReflectionWrapper::New1(::g::Outracks::Simulator::Client::DotNetReflection* reflection)
{
    DotNetReflectionWrapper* obj1 = (DotNetReflectionWrapper*)uNew(DotNetReflectionWrapper_typeof());
    obj1->ctor_(reflection);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal static class Exceptions :395
// {
static void Exceptions_build(uType* type)
{
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[39] = ::g::Uno::AggregateException_typeof();
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[41] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::IDisposable_typeof();
}

uClassType* Exceptions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.Exceptions", options);
    type->fp_build_ = Exceptions_build;
    return type;
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) :397
void Exceptions__Send_fn(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    Exceptions::Send(client, exceptions);
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) :406
void Exceptions__Unpack_fn(::g::Uno::Exception* e, ::g::Uno::Collections::List** __retval)
{
    *__retval = Exceptions::Unpack(e);
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) [static] :397
void Exceptions::Send(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    uStackFrame __("Outracks.Simulator.Client.Exceptions", "Send(Outracks.Simulator.ISimulatorClient,Uno.Collections.List<Uno.Exception>)");
    ::g::Uno::Exception* ret3;

    for (int32_t i = 0; i < uPtr(exceptions)->Count(); ++i)
    {
        ::g::Uno::Exception* unpacked = (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int32_t>(i), &ret3), ret3);
        ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::UnhandledException::New2(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(unpacked)->Message(), uPtr(unpacked)->StackTrace(), uPtr(::g::Uno::Object::GetType(uPtr(unpacked)))->ToString()));
    }
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) [static] :406
::g::Uno::Collections::List* Exceptions::Unpack(::g::Uno::Exception* e)
{
    uStackFrame __("Outracks.Simulator.Client.Exceptions", "Unpack(Uno.Exception)");
    ::g::Uno::Collections::List* collection2;
    ::g::Uno::Exception* ret4;

    if (uIs(e, ::TYPES[39/*Uno.AggregateException*/]))
    {
        ::g::Uno::AggregateException* aggregate = uCast< ::g::Uno::AggregateException*>(e, ::TYPES[39/*Uno.AggregateException*/]);
        ::g::Uno::Collections::List* exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Uno.Exception>*/]);
        uObject* enum1 = (uObject*)uPtr(uPtr(aggregate)->InnerExceptions())->GetEnumerator();

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator*/])))
                    {
                        ::g::Uno::Exception* inner = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[41/*Uno.Collections.IEnumerator<Uno.Exception>*/]), &ret4), ret4);
                        uPtr(exceptions)->AddRange((uObject*)Exceptions::Unpack(inner));
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
                }
                                throw __t;
                goto __after_finally_5;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
            }
            __after_finally_5:;
        }

        return exceptions;
    }
    else if (uPtr(e)->InnerException() != NULL)
        return Exceptions::Unpack(uPtr(e)->InnerException());
    else
    {
        collection2 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Uno.Exception>*/]);
        ::g::Uno::Collections::List__Add_fn(uPtr(collection2), e);
        return collection2;
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class FailedToConnect :457
// {
static void FailedToConnect_build(uType* type)
{
    ::STRINGS[20] = uString::Const("Failed to connect");
    ::STRINGS[21] = uString::Const("Please check that this device is connected to the same network as your computer.");
    ::STRINGS[10] = uString::Const("Change IP");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[18] = uString::Const("Try again");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* FailedToConnect_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FailedToConnect);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.FailedToConnect", options);
    type->fp_build_ = FailedToConnect_build;
    return type;
}

// public FailedToConnect(Uno.Exception exception) :459
void FailedToConnect__ctor_2_fn(FailedToConnect* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_2(exception);
}

// public FailedToConnect New(Uno.Exception exception) :459
void FailedToConnect__New2_fn(::g::Uno::Exception* exception, FailedToConnect** __retval)
{
    *__retval = FailedToConnect::New2(exception);
}

// public FailedToConnect(Uno.Exception exception) [instance] :459
void FailedToConnect::ctor_2(::g::Uno::Exception* exception)
{
    uStackFrame __("Outracks.Simulator.Client.FailedToConnect", ".ctor(Uno.Exception)");
    ctor_1(::STRINGS[20/*"Failed to c...*/], ::STRINGS[21/*"Please chec...*/], uPtr(exception)->Message(), uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 2, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[10/*"Change IP"*/], ::g::Outracks::Simulator::Client::ChangeIp::New1(::STRINGS[9/*""*/])), (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[18/*"Try again"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1())));
}

// public FailedToConnect New(Uno.Exception exception) [static] :459
FailedToConnect* FailedToConnect::New2(::g::Uno::Exception* exception)
{
    FailedToConnect* obj1 = (FailedToConnect*)uNew(FailedToConnect_typeof());
    obj1->ctor_2(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/FakeApp.uno
// -----------------------------------------------------------------

// public sealed class FakeApp :19
// {
static void FakeApp_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(FakeApp_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(FakeApp_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(FakeApp_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(FakeApp_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(FakeApp_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(FakeApp_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(FakeApp_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(FakeApp_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(FakeApp_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(FakeApp_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(FakeApp_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(FakeApp_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(FakeApp_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(FakeApp_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(FakeApp_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(FakeApp_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(FakeApp_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(FakeApp_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(FakeApp_type, interface18),
        ::g::Fuse::IRootVisualProvider_typeof(), offsetof(FakeApp_type, interface19));
    type->SetFields(120,
        ::g::Fuse::App_typeof(), offsetof(FakeApp, _app), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("get_App", NULL, (void*)FakeApp__get_App_fn, 0, false, ::g::Fuse::AppBase_typeof(), 0),
        new uFunction("get_Background", NULL, (void*)FakeApp__get_Background1_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)FakeApp__set_Background1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ClearColor", NULL, (void*)FakeApp__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)FakeApp__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)FakeApp__New4_fn, 0, true, type, 1, ::g::Fuse::App_typeof()),
        new uFunction("get_Resources", NULL, (void*)FakeApp__get_Resources1_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), 0),
        new uFunction("get_RootViewport", NULL, (void*)FakeApp__get_RootViewport_fn, 0, false, ::g::Fuse::RootViewport_typeof(), 0));
}

FakeApp_type* FakeApp_typeof()
{
    static uSStrong<FakeApp_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 121;
    options.InterfaceCount = 20;
    options.ObjectSize = sizeof(FakeApp);
    options.TypeSize = sizeof(FakeApp_type);
    type = (FakeApp_type*)uClassType::New("Outracks.Simulator.Client.FakeApp", options);
    type->fp_build_ = FakeApp_build;
    type->interface19.fp_get_Root = (void(*)(uObject*, ::g::Fuse::Visual**))FakeApp__FuseIRootVisualProviderget_Root_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
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
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
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

// public FakeApp(Fuse.App app) :27
void FakeApp__ctor_7_fn(FakeApp* __this, ::g::Fuse::App* app)
{
    __this->ctor_7(app);
}

// public Fuse.AppBase get_App() :23
void FakeApp__get_App_fn(FakeApp* __this, ::g::Fuse::AppBase** __retval)
{
    *__retval = __this->App();
}

// public new float4 get_Background() :34
void FakeApp__get_Background1_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background1();
}

// public new void set_Background(float4 value) :35
void FakeApp__set_Background1_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->Background1(*value);
}

// public float4 get_ClearColor() :45
void FakeApp__get_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public void set_ClearColor(float4 value) :46
void FakeApp__set_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// private Fuse.Visual Fuse.IRootVisualProvider.get_Root() :25
void FakeApp__FuseIRootVisualProviderget_Root_fn(FakeApp* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "Fuse.IRootVisualProvider.get_Root()");
    return *__retval = __this->RootViewport(), void();
}

// public FakeApp New(Fuse.App app) :27
void FakeApp__New4_fn(::g::Fuse::App* app, FakeApp** __retval)
{
    *__retval = FakeApp::New4(app);
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() :40
void FakeApp__get_Resources1_fn(FakeApp* __this, uObject** __retval)
{
    *__retval = __this->Resources1();
}

// public Fuse.RootViewport get_RootViewport() :51
void FakeApp__get_RootViewport_fn(FakeApp* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// public FakeApp(Fuse.App app) [instance] :27
void FakeApp::ctor_7(::g::Fuse::App* app)
{
    ctor_6();
    _app = app;
}

// public Fuse.AppBase get_App() [instance] :23
::g::Fuse::AppBase* FakeApp::App()
{
    return _app;
}

// public new float4 get_Background() [instance] :34
::g::Uno::Float4 FakeApp::Background1()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_Background()");
    return uPtr(_app)->Background();
}

// public new void set_Background(float4 value) [instance] :35
void FakeApp::Background1(::g::Uno::Float4 value)
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "set_Background(float4)");
    uPtr(_app)->Background(value);
}

// public float4 get_ClearColor() [instance] :45
::g::Uno::Float4 FakeApp::ClearColor()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_ClearColor()");
    return uPtr(_app)->Background();
}

// public void set_ClearColor(float4 value) [instance] :46
void FakeApp::ClearColor(::g::Uno::Float4 value)
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "set_ClearColor(float4)");
    uPtr(_app)->Background(value);
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :40
uObject* FakeApp::Resources1()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_Resources()");
    return uPtr(_app)->Resources();
}

// public Fuse.RootViewport get_RootViewport() [instance] :51
::g::Fuse::RootViewport* FakeApp::RootViewport()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_RootViewport()");
    return uPtr(_app)->RootViewport();
}

// public FakeApp New(Fuse.App app) [static] :27
FakeApp* FakeApp::New4(::g::Fuse::App* app)
{
    FakeApp* obj1 = (FakeApp*)uNew(FakeApp_typeof());
    obj1->ctor_7(app);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Faulted :430
// {
static void Faulted_build(uType* type)
{
    ::STRINGS[22] = uString::Const("Oops! Something went wrong here.");
    ::STRINGS[23] = uString::Const("\n"
        "\n"
        "Please refer to the log for details.");
    ::STRINGS[9] = uString::Const("");
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* Faulted_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Faulted);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.Faulted", options);
    type->fp_build_ = Faulted_build;
    return type;
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) :432
void Faulted__ctor_2_fn(Faulted* __this, bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    __this->ctor_2(*isOnline, exception, buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) :432
void Faulted__New2_fn(bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons, Faulted** __retval)
{
    *__retval = Faulted::New2(*isOnline, exception, buttons);
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) [instance] :432
void Faulted::ctor_2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    uStackFrame __("Outracks.Simulator.Client.Faulted", ".ctor(bool,Uno.Exception,Outracks.Simulator.Client.DialogButton[])");
    ctor_1(::STRINGS[22/*"Oops! Somet...*/], ::g::Uno::String::op_Addition2(uPtr(exception)->Message(), isOnline ? ::STRINGS[23/*"\n\nPlease ...*/] : ::STRINGS[9/*""*/]), ::STRINGS[9/*""*/], buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) [static] :432
Faulted* Faulted::New2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    Faulted* obj1 = (Faulted*)uNew(Faulted_typeof());
    obj1->ctor_2(isOnline, exception, buttons);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Idle :268
// {
static void Idle_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Loading");
    ::STRINGS[25] = uString::Const("Starting project...");
    ::STRINGS[18] = uString::Const("Try again");
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(1);
}

::g::Outracks::Simulator::Client::Connected_type* Idle_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connected_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Idle);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Connected_type);
    type = (::g::Outracks::Simulator::Client::Connected_type*)uClassType::New("Outracks.Simulator.Client.Idle", options);
    type->fp_build_ = Idle_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Idle__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Client::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Idle__OnFaulted_fn;
    return type;
}

// public Idle(Outracks.Simulator.ISimulatorClient client) :270
void Idle__ctor_2_fn(Idle* __this, uObject* client)
{
    __this->ctor_2(client);
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) :270
void Idle__New1_fn(uObject* client, Idle** __retval)
{
    *__retval = Idle::New1(client);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :274
void Idle__OnEnterState_fn(Idle* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Idle", "OnEnterState()");
    ::g::Outracks::Simulator::Client::State* ret2;
    ::g::Outracks::Simulator::Client::Connected__OnEnterState_fn(__this, &ret2);
    ::g::Outracks::Simulator::Client::LoadingScreen::Show(::g::Outracks::Simulator::Client::Context::App(), ::STRINGS[24/*"Loading"*/], ::STRINGS[25/*"Starting pr...*/]);
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.Client.State OnFaulted(Uno.Exception e) :281
void Idle__OnFaulted_fn(Idle* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Idle", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[18/*"Try again"*/], __this))), void();
}

// public Idle(Outracks.Simulator.ISimulatorClient client) [instance] :270
void Idle::ctor_2(uObject* client)
{
    ctor_1(client);
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) [static] :270
Idle* Idle::New1(uObject* client)
{
    Idle* obj1 = (Idle*)uNew(Idle_typeof());
    obj1->ctor_2(client);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// internal abstract interface IEvent :87
// {
uInterfaceType* IEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Client.IEvent", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Context.uno
// -----------------------------------------------------------------

// public enum InputMode :19
uEnumType* InputMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Outracks.Simulator.Client.InputMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Interactive", 0LL,
        "Design", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// internal abstract interface IProperty :80
// {
uInterfaceType* IProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Client.IProperty", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// public abstract interface ITypeMap :12
// {
uInterfaceType* ITypeMap_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Client.ITypeMap", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("ResolveType", NULL, NULL, offsetof(ITypeMap, fp_ResolveType), false, ::g::Uno::Type_typeof(), 1, ::g::Uno::String_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal sealed class LoadingScreen :16
// {
static void LoadingScreen_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
}

uType* LoadingScreen_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LoadingScreen);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.LoadingScreen", options);
    type->fp_build_ = LoadingScreen_build;
    type->fp_ctor_ = (void*)LoadingScreen__New1_fn;
    return type;
}

// public generated LoadingScreen() :16
void LoadingScreen__ctor__fn(LoadingScreen* __this)
{
    __this->ctor_();
}

// public generated LoadingScreen New() :16
void LoadingScreen__New1_fn(LoadingScreen** __retval)
{
    *__retval = LoadingScreen::New1();
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string message) :18
void LoadingScreen__Show_fn(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* message)
{
    LoadingScreen::Show(app, header, message);
}

// public generated LoadingScreen() [instance] :16
void LoadingScreen::ctor_()
{
}

// public generated LoadingScreen New() [static] :16
LoadingScreen* LoadingScreen::New1()
{
    LoadingScreen* obj2 = (LoadingScreen*)uNew(LoadingScreen_typeof());
    obj2->ctor_();
    return obj2;
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string message) [static] :18
void LoadingScreen::Show(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* message)
{
    uStackFrame __("Outracks.Simulator.Client.LoadingScreen", "Show(Outracks.Simulator.Client.FakeApp,string,string)");
    ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* collection1;
    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(app);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection1 = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen::New4(), uPtr(collection1)->Header(header), header, uPtr(collection1)->Message(message), message, collection1));
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal sealed class ModalDialog :30
// {
static void ModalDialog_build(uType* type)
{
    ::TYPES[42] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Fuse.Controls.Control>*/, ::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[43] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[44] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::IDisposable_typeof();
}

uType* ModalDialog_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ModalDialog);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.ModalDialog", options);
    type->fp_build_ = ModalDialog_build;
    type->fp_ctor_ = (void*)ModalDialog__New1_fn;
    return type;
}

// public generated ModalDialog() :30
void ModalDialog__ctor__fn(ModalDialog* __this)
{
    __this->ctor_();
}

// public generated ModalDialog New() :30
void ModalDialog__New1_fn(ModalDialog** __retval)
{
    *__retval = ModalDialog::New1();
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :76
void ModalDialog__Show_fn(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    ModalDialog::Show(app, header, body, details, buttons);
}

// public static void ShowPrompt(Outracks.Simulator.Client.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :32
void ModalDialog__ShowPrompt_fn(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    ModalDialog::ShowPrompt(app, header, body, inputControl, buttons);
}

// public generated ModalDialog() [instance] :30
void ModalDialog::ctor_()
{
}

// public generated ModalDialog New() [static] :30
ModalDialog* ModalDialog::New1()
{
    ModalDialog* obj15 = (ModalDialog*)uNew(ModalDialog_typeof());
    obj15->ctor_();
    return obj15;
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :76
void ModalDialog::Show(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    uStackFrame __("Outracks.Simulator.Client.ModalDialog", "Show(Outracks.Simulator.Client.FakeApp,string,string,string,Uno.Collections.IEnumerable<Fuse.Controls.Control>)");
    ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* collection7;
    collection7 = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog::New4();
    uPtr(collection7)->Header(header);
    header;
    uPtr(collection7)->Body(body);
    body;
    uPtr(collection7)->Details(details);
    details;
    ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* dialog = collection7;
    uArray* buttonArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[42/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Controls.Control>*/], buttons);
    uPtr(uPtr(dialog)->ButtonGrid)->ColumnCount(uPtr(buttonArray)->Length());

    for (int32_t index9 = 0, length10 = buttonArray->Length(); index9 < length10; ++index9)
    {
        ::g::Fuse::Controls::Control* btn = uPtr(buttonArray)->Strong< ::g::Fuse::Controls::Control*>(index9);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(uPtr(dialog)->ButtonGrid)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
    }

    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Client::Context::App());
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(app->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), dialog);
}

// public static void ShowPrompt(Outracks.Simulator.Client.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :32
void ModalDialog::ShowPrompt(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    uStackFrame __("Outracks.Simulator.Client.ModalDialog", "ShowPrompt(Outracks.Simulator.Client.FakeApp,string,string,Fuse.Controls.Control,Uno.Collections.IEnumerable<Fuse.Controls.Control>)");
    ::g::Fuse::Controls::StackPanel* collection1;
    ::g::Uno::Float4 ind11;
    uObject* array2;
    ::g::Fuse::Controls::Text* collection3;
    ::g::Uno::Float4 ind12;
    ::g::Fuse::Controls::Text* collection4;
    ::g::Uno::Float4 ind13;
    ::g::Fuse::Controls::StackPanel* collection5;
    ::g::Uno::Float4 ind14;
    ::g::Fuse::Controls::Control* ret16;
    collection1 = ::g::Fuse::Controls::StackPanel::New4();
    uPtr(collection1)->Alignment(10);
    10;
    ind11 = ::g::Uno::Float4__New1(40.0f);
    uPtr(collection1)->Padding(ind11);
    ind11;
    array2 = uPtr(collection1)->Children();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection3 = ::g::Fuse::Controls::Text::New3(), ind12 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection3)->Margin(ind12), ind12, uPtr(collection3)->Value(header), header, uPtr(collection3)->FontSize(40.0f), 40.0f, uPtr(collection3)->TextAlignment(1), 1, uPtr(collection3)->TextWrapping(1), 1, collection3));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection4 = ::g::Fuse::Controls::Text::New3(), ind13 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection4)->Margin(ind13), ind13, uPtr(collection4)->Value(body), body, uPtr(collection4)->TextWrapping(1), 1, collection4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), inputControl);
    ::g::Fuse::Controls::StackPanel* stackPanel = collection1;
    collection5 = ::g::Fuse::Controls::StackPanel::New4();
    ind14 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f);
    uPtr(collection5)->Margin(ind14);
    ind14;
    uPtr(collection5)->Orientation(0);
    0;
    uPtr(collection5)->Alignment(10);
    10;
    ::g::Fuse::Controls::StackPanel* buttonPanel = collection5;
    uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(buttons), ::TYPES[43/*Uno.Collections.IEnumerable<Fuse.Controls.Control>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::TYPES[9/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Controls::Control* btn = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[44/*Uno.Collections.IEnumerator<Fuse.Controls.Control>*/]), &ret16), ret16);
                    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buttonPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[13/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[13/*Uno.IDisposable*/]));
        }
        __after_finally_6:;
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stackPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), buttonPanel);
    ::g::Fuse::Controls::ClientPanel* root = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(root->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), stackPanel);
    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Client::Context::App());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), root);
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// public sealed extern class NativeReflection :95
// {
static void NativeReflection_build(uType* type)
{
    ::STRINGS[26] = uString::Const("Event '");
    ::STRINGS[27] = uString::Const(".");
    ::STRINGS[28] = uString::Const("' has no add method");
    ::STRINGS[29] = uString::Const("Property '");
    ::STRINGS[30] = uString::Const("' has no getter");
    ::STRINGS[31] = uString::Const(".ctor");
    ::STRINGS[32] = uString::Const("' has no remover method");
    ::STRINGS[33] = uString::Const("obj");
    ::STRINGS[34] = uString::Const("' has no setter");
    ::TYPES[45] = ::g::Outracks::Simulator::Client::IEvent_typeof();
    ::TYPES[32] = uObject_typeof()->Array();
    ::TYPES[46] = ::g::Outracks::Simulator::Client::ITypeMap_typeof();
    ::TYPES[47] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.Type>*/, ::g::Uno::Type_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*Select<string, Uno.Type>*/, ::g::Uno::String_typeof(), ::g::Uno::Type_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Type_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Type_typeof()->Array();
    ::TYPES[50] = ::g::Uno::Reflection::IFunction_typeof();
    ::TYPES[51] = ::g::Outracks::Simulator::Client::IProperty_typeof();
    ::TYPES[52] = ::g::Uno::Reflection::IField_typeof();
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(NativeReflection_type, interface0));
    type->SetFields(0,
        ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/], offsetof(NativeReflection, _typeMap), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("AddEventHandler", NULL, (void*)NativeReflection__AddEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, (void*)NativeReflection__CallDynamic_fn, 0, false, uObject_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), ::TYPES[32/*object[]*/]),
        new uFunction("CallStatic", NULL, (void*)NativeReflection__CallStatic_fn, 0, false, uObject_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::TYPES[32/*object[]*/]),
        new uFunction("CreateDelegate", NULL, (void*)NativeReflection__CreateDelegate_fn, 0, false, uObject_typeof(), 4, uObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), ::g::Uno::String_typeof()),
        new uFunction("GetEnumValue", NULL, (void*)NativeReflection__GetEnumValue_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetPropertyValue", NULL, (void*)NativeReflection__GetPropertyValue_fn, 0, false, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, (void*)NativeReflection__GetStaticPropertyOrFieldValue_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Instantiate", NULL, (void*)NativeReflection__Instantiate_fn, 0, false, uObject_typeof(), 2, ::g::Uno::String_typeof(), ::TYPES[32/*object[]*/]),
        new uFunction("IsSubtype", NULL, (void*)NativeReflection__IsSubtype_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("IsType", NULL, (void*)NativeReflection__IsType_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)NativeReflection__New1_fn, 0, true, type, 1, ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]),
        new uFunction("RemoveEventHandler", NULL, (void*)NativeReflection__RemoveEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, (void*)NativeReflection__SetPropertyValue_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("SetStaticField", NULL, (void*)NativeReflection__SetStaticField_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), uObject_typeof()));
}

NativeReflection_type* NativeReflection_typeof()
{
    static uSStrong<NativeReflection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeReflection);
    options.TypeSize = sizeof(NativeReflection_type);
    type = (NativeReflection_type*)uClassType::New("Outracks.Simulator.Client.NativeReflection", options);
    type->fp_build_ = NativeReflection_build;
    type->interface0.fp_CallDynamic = (void(*)(uObject*, uObject*, uString*, uArray*, uObject**))NativeReflection__CallDynamic_fn;
    type->interface0.fp_CallStatic = (void(*)(uObject*, uString*, uString*, uArray*, uObject**))NativeReflection__CallStatic_fn;
    type->interface0.fp_SetPropertyValue = (void(*)(uObject*, uObject*, uString*, uObject*))NativeReflection__SetPropertyValue_fn;
    type->interface0.fp_GetPropertyValue = (void(*)(uObject*, uObject*, uString*, uObject**))NativeReflection__GetPropertyValue_fn;
    type->interface0.fp_GetStaticPropertyOrFieldValue = (void(*)(uObject*, uString*, uString*, uObject**))NativeReflection__GetStaticPropertyOrFieldValue_fn;
    type->interface0.fp_CreateDelegate = (void(*)(uObject*, uObject*, uString*, uArray*, uString*, uObject**))NativeReflection__CreateDelegate_fn;
    type->interface0.fp_AddEventHandler = (void(*)(uObject*, uObject*, uString*, uObject*))NativeReflection__AddEventHandler_fn;
    type->interface0.fp_RemoveEventHandler = (void(*)(uObject*, uObject*, uString*, uObject*))NativeReflection__RemoveEventHandler_fn;
    type->interface0.fp_Instantiate = (void(*)(uObject*, uString*, uArray*, uObject**))NativeReflection__Instantiate_fn;
    type->interface0.fp_IsSubtype = (void(*)(uObject*, uObject*, uString*, bool*))NativeReflection__IsSubtype_fn;
    type->interface0.fp_IsType = (void(*)(uObject*, uObject*, uString*, bool*))NativeReflection__IsType_fn;
    type->interface0.fp_GetEnumValue = (void(*)(uObject*, uString*, uString*, uObject**))NativeReflection__GetEnumValue_fn;
    return type;
}

// public NativeReflection(Outracks.Simulator.Client.ITypeMap typeMap) :99
void NativeReflection__ctor__fn(NativeReflection* __this, uObject* typeMap)
{
    __this->ctor_(typeMap);
}

// public void AddEventHandler(object instance, string member, object handlerDelegate) :157
void NativeReflection__AddEventHandler_fn(NativeReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate)
{
    __this->AddEventHandler(instance, member, handlerDelegate);
}

// public object CallDynamic(object obj, string methodName, object[] arguments) :187
void NativeReflection__CallDynamic_fn(NativeReflection* __this, uObject* obj, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallDynamic(obj, methodName, arguments);
}

// public object CallStatic(string typeName, string methodName, object[] arguments) :200
void NativeReflection__CallStatic_fn(NativeReflection* __this, uString* typeName, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallStatic(typeName, methodName, arguments);
}

// public object CreateDelegate(object instance, string methodName, string[] methodArgumentTypes, string delegateTypeName) :142
void NativeReflection__CreateDelegate_fn(NativeReflection* __this, uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName, uObject** __retval)
{
    *__retval = __this->CreateDelegate(instance, methodName, methodArgumentTypes, delegateTypeName);
}

// public object GetEnumValue(string enumType, string valueName) :251
void NativeReflection__GetEnumValue_fn(NativeReflection* __this, uString* enumType, uString* valueName, uObject** __retval)
{
    *__retval = __this->GetEnumValue(enumType, valueName);
}

// public object GetPropertyValue(object obj, string propertyName) :104
void NativeReflection__GetPropertyValue_fn(NativeReflection* __this, uObject* obj, uString* propertyName, uObject** __retval)
{
    *__retval = __this->GetPropertyValue(obj, propertyName);
}

// public object GetStaticPropertyOrFieldValue(string typeName, string memberName) :222
void NativeReflection__GetStaticPropertyOrFieldValue_fn(NativeReflection* __this, uString* typeName, uString* memberName, uObject** __retval)
{
    *__retval = __this->GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public object Instantiate(string typeName, object[] args) :195
void NativeReflection__Instantiate_fn(NativeReflection* __this, uString* typeName, uArray* args, uObject** __retval)
{
    *__retval = __this->Instantiate(typeName, args);
}

// public bool IsSubtype(object obj, string typeName) :239
void NativeReflection__IsSubtype_fn(NativeReflection* __this, uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = __this->IsSubtype(obj, typeName);
}

// public bool IsType(object obj, string typeName) :246
void NativeReflection__IsType_fn(NativeReflection* __this, uObject* obj, uString* typeName, bool* __retval)
{
    *__retval = __this->IsType(obj, typeName);
}

// public NativeReflection New(Outracks.Simulator.Client.ITypeMap typeMap) :99
void NativeReflection__New1_fn(uObject* typeMap, NativeReflection** __retval)
{
    *__retval = NativeReflection::New1(typeMap);
}

// public void RemoveEventHandler(object instance, string member, object handlerDelegate) :172
void NativeReflection__RemoveEventHandler_fn(NativeReflection* __this, uObject* instance, uString* member, uObject* handlerDelegate)
{
    __this->RemoveEventHandler(instance, member, handlerDelegate);
}

// private Outracks.Simulator.Client.IProperty ResolveProperty(object obj, string propertyName, Uno.Type propertyType) :124
void NativeReflection__ResolveProperty_fn(NativeReflection* __this, uObject* obj, uString* propertyName, uType* propertyType, uObject** __retval)
{
    *__retval = __this->ResolveProperty(obj, propertyName, propertyType);
}

// public void SetPropertyValue(object obj, string propertyName, object value) :114
void NativeReflection__SetPropertyValue_fn(NativeReflection* __this, uObject* obj, uString* propertyName, uObject* value)
{
    __this->SetPropertyValue(obj, propertyName, value);
}

// public void SetStaticField(string typeName, string fieldName, object value) :209
void NativeReflection__SetStaticField_fn(NativeReflection* __this, uString* typeName, uString* fieldName, uObject* value)
{
    __this->SetStaticField(typeName, fieldName, value);
}

// public NativeReflection(Outracks.Simulator.Client.ITypeMap typeMap) [instance] :99
void NativeReflection::ctor_(uObject* typeMap)
{
    _typeMap = typeMap;
}

// public void AddEventHandler(object instance, string member, object handlerDelegate) [instance] :157
void NativeReflection::AddEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "AddEventHandler(object,string,object)");
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* theEvent = ::g::Outracks::Simulator::Client::TryInvokeExtension::GetEvent(type, member, ::g::Uno::Object::GetType(uPtr(handlerDelegate)));

    if (theEvent == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), member));

    uObject* adder = ::g::Outracks::Simulator::Client::IEvent::AddMethod(uInterface(uPtr(theEvent), ::TYPES[45/*Outracks.Simulator.Client.IEvent*/]));

    if (adder == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[26/*"Event '"*/], ::g::Outracks::Simulator::Client::IEvent::DeclaringType(uInterface(uPtr(theEvent), ::TYPES[45/*Outracks.Simulator.Client.IEvent*/]))), ::STRINGS[27/*"."*/]), member), ::STRINGS[28/*"' has no ad...*/])));

    ::g::Outracks::Simulator::Client::TryInvokeExtension::TryInvoke(adder, instance, uArray::Init<uObject*>(::TYPES[32/*object[]*/], 1, handlerDelegate));
}

// public object CallDynamic(object obj, string methodName, object[] arguments) [instance] :187
uObject* NativeReflection::CallDynamic(uObject* obj, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "CallDynamic(object,string,object[])");
    uType* type = ::g::Uno::Object::GetType(uPtr(obj));
    return ::g::Outracks::Simulator::Client::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Client::TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments), obj, arguments);
}

// public object CallStatic(string typeName, string methodName, object[] arguments) [instance] :200
uObject* NativeReflection::CallStatic(uString* typeName, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "CallStatic(string,string,object[])");
    uType* type = ::g::Outracks::Simulator::Client::ITypeMap::ResolveType(uInterface(uPtr(_typeMap), ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::Simulator::Runtime::TypeNotFound::New4(typeName));

    return ::g::Outracks::Simulator::Client::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Client::TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments), NULL, arguments);
}

// public object CreateDelegate(object instance, string methodName, string[] methodArgumentTypes, string delegateTypeName) [instance] :142
uObject* NativeReflection::CreateDelegate(uObject* instance, uString* methodName, uArray* methodArgumentTypes, uString* delegateTypeName)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "CreateDelegate(object,string,string[],string)");
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* method = (methodArgumentTypes != NULL) ? (uObject*)::g::Outracks::Simulator::Client::TryInvokeExtension::GetMethod(type, methodName, (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[47/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Type>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[48/*Uno.Collections.EnumerableExtensions.Select<string, Uno.Type>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[36/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], methodArgumentTypes)), uDelegate::New(::TYPES[49/*Uno.Func<string, Uno.Type>*/], uInterface(uPtr(_typeMap), ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]), offsetof(::g::Outracks::Simulator::Client::ITypeMap, fp_ResolveType))))) : (uObject*)::g::Outracks::Simulator::Client::TryInvokeExtension::GetMethod(type, methodName, uArray::New(::TYPES[38/*Uno.Type[]*/], 0));

    if (method == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), methodName));

    return ::g::Uno::Reflection::IFunction::CreateDelegate(uInterface(uPtr(method), ::TYPES[50/*Uno.Reflection.IFunction*/]), ::g::Outracks::Simulator::Client::ITypeMap::ResolveType(uInterface(uPtr(_typeMap), ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]), delegateTypeName), instance);
}

// public object GetEnumValue(string enumType, string valueName) [instance] :251
uObject* NativeReflection::GetEnumValue(uString* enumType, uString* valueName)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "GetEnumValue(string,string)");
    uType* type = ::g::Outracks::Simulator::Client::ITypeMap::ResolveType(uInterface(uPtr(_typeMap), ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]), enumType);
    return ::g::Uno::Enum::Parse(type, valueName);
}

// public object GetPropertyValue(object obj, string propertyName) [instance] :104
uObject* NativeReflection::GetPropertyValue(uObject* obj, uString* propertyName)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "GetPropertyValue(object,string)");
    uObject* prop = ResolveProperty(obj, propertyName, NULL);
    uObject* getter = ::g::Outracks::Simulator::Client::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[51/*Outracks.Simulator.Client.IProperty*/]));

    if (getter == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[29/*"Property '"*/], ::g::Outracks::Simulator::Client::IProperty::DeclaringType(uInterface(uPtr(prop), ::TYPES[51/*Outracks.Simulator.Client.IProperty*/]))), ::STRINGS[27/*"."*/]), propertyName), ::STRINGS[30/*"' has no ge...*/])));

    return ::g::Outracks::Simulator::Client::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Client::IProperty::GetMethod(uInterface(prop, ::TYPES[51/*Outracks.Simulator.Client.IProperty*/])), obj, uArray::New(::TYPES[32/*object[]*/], 0));
}

// public object GetStaticPropertyOrFieldValue(string typeName, string memberName) [instance] :222
uObject* NativeReflection::GetStaticPropertyOrFieldValue(uString* typeName, uString* memberName)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "GetStaticPropertyOrFieldValue(string,string)");
    uType* type = ::g::Outracks::Simulator::Client::ITypeMap::ResolveType(uInterface(uPtr(_typeMap), ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::Simulator::Runtime::TypeNotFound::New4(typeName));

    uObject* prop = ::g::Outracks::Simulator::Client::TryInvokeExtension::GetProperty(type, memberName, NULL);

    if ((prop != NULL) && (::g::Outracks::Simulator::Client::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[51/*Outracks.Simulator.Client.IProperty*/])) != NULL))
        return ::g::Uno::Reflection::IFunction::Invoke(uInterface(uPtr(::g::Outracks::Simulator::Client::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[51/*Outracks.Simulator.Client.IProperty*/]))), ::TYPES[50/*Uno.Reflection.IFunction*/]), NULL, uArray::New(::TYPES[32/*object[]*/], 0));

    uObject* field = ::g::Outracks::Simulator::Client::TryInvokeExtension::GetField(type, memberName);

    if (field != NULL)
        return ::g::Uno::Reflection::IField::GetValue(uInterface(uPtr(field), ::TYPES[52/*Uno.Reflection.IField*/]), NULL);

    U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(typeName, memberName));
}

// public object Instantiate(string typeName, object[] args) [instance] :195
uObject* NativeReflection::Instantiate(uString* typeName, uArray* args)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "Instantiate(string,object[])");
    return CallStatic(typeName, ::STRINGS[31/*".ctor"*/], args);
}

// public bool IsSubtype(object obj, string typeName) [instance] :239
bool NativeReflection::IsSubtype(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "IsSubtype(object,string)");
    uType* type = ::g::Outracks::Simulator::Client::ITypeMap::ResolveType(uInterface(uPtr(_typeMap), ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        return false;

    return ::g::Outracks::Simulator::Client::TryInvokeExtension::IsInstanceOfType(type, obj);
}

// public bool IsType(object obj, string typeName) [instance] :246
bool NativeReflection::IsType(uObject* obj, uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "IsType(object,string)");
    return ::g::Uno::String::op_Equality(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(obj)))), typeName);
}

// public void RemoveEventHandler(object instance, string member, object handlerDelegate) [instance] :172
void NativeReflection::RemoveEventHandler(uObject* instance, uString* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "RemoveEventHandler(object,string,object)");
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* theEvent = ::g::Outracks::Simulator::Client::TryInvokeExtension::GetEvent(type, member, ::g::Uno::Object::GetType(uPtr(handlerDelegate)));

    if (theEvent == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), member));

    uObject* remover = ::g::Outracks::Simulator::Client::IEvent::AddMethod(uInterface(uPtr(theEvent), ::TYPES[45/*Outracks.Simulator.Client.IEvent*/]));

    if (remover == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[26/*"Event '"*/], ::g::Outracks::Simulator::Client::IEvent::DeclaringType(uInterface(uPtr(theEvent), ::TYPES[45/*Outracks.Simulator.Client.IEvent*/]))), ::STRINGS[27/*"."*/]), member), ::STRINGS[32/*"' has no re...*/])));

    ::g::Outracks::Simulator::Client::TryInvokeExtension::TryInvoke(remover, instance, uArray::Init<uObject*>(::TYPES[32/*object[]*/], 1, handlerDelegate));
}

// private Outracks.Simulator.Client.IProperty ResolveProperty(object obj, string propertyName, Uno.Type propertyType) [instance] :124
uObject* NativeReflection::ResolveProperty(uObject* obj, uString* propertyName, uType* propertyType)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "ResolveProperty(object,string,Uno.Type)");

    if (obj == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[33/*"obj"*/]));

    uType* objType = ::g::Uno::Object::GetType(uPtr(obj));

    try
    {
        {
            return ::g::Outracks::Simulator::Client::TryInvokeExtension::GetProperty(objType, propertyName, propertyType);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(objType)), propertyName));
    }
}

// public void SetPropertyValue(object obj, string propertyName, object value) [instance] :114
void NativeReflection::SetPropertyValue(uObject* obj, uString* propertyName, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "SetPropertyValue(object,string,object)");
    uObject* prop = ResolveProperty(obj, propertyName, (value != NULL) ? (uType*)::g::Uno::Object::GetType(uPtr(value)) : NULL);
    uObject* setter = ::g::Outracks::Simulator::Client::IProperty::SetMethod(uInterface(uPtr(prop), ::TYPES[51/*Outracks.Simulator.Client.IProperty*/]));

    if (setter == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[29/*"Property '"*/], ::g::Outracks::Simulator::Client::IProperty::DeclaringType(uInterface(uPtr(prop), ::TYPES[51/*Outracks.Simulator.Client.IProperty*/]))), ::STRINGS[27/*"."*/]), propertyName), ::STRINGS[34/*"' has no se...*/])));

    ::g::Outracks::Simulator::Client::TryInvokeExtension::TryInvoke(setter, obj, uArray::Init<uObject*>(::TYPES[32/*object[]*/], 1, value));
}

// public void SetStaticField(string typeName, string fieldName, object value) [instance] :209
void NativeReflection::SetStaticField(uString* typeName, uString* fieldName, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Client.NativeReflection", "SetStaticField(string,string,object)");
    uType* type = ::g::Outracks::Simulator::Client::ITypeMap::ResolveType(uInterface(uPtr(_typeMap), ::TYPES[46/*Outracks.Simulator.Client.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::Simulator::Runtime::TypeNotFound::New4(typeName));

    uObject* field = ::g::Outracks::Simulator::Client::TryInvokeExtension::GetField(type, fieldName);

    if (field == NULL)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(typeName, fieldName));

    ::g::Uno::Reflection::IField::SetValue(uInterface(uPtr(field), ::TYPES[52/*Uno.Reflection.IField*/]), NULL, value);
}

// public NativeReflection New(Outracks.Simulator.Client.ITypeMap typeMap) [static] :99
NativeReflection* NativeReflection::New1(uObject* typeMap)
{
    NativeReflection* obj1 = (NativeReflection*)uNew(NativeReflection_typeof());
    obj1->ctor_(typeMap);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/ReflectionCache.uno
// ------------------------------------------------------------------------------------

// internal static extern class ReflectionCache :11
// {
// static ReflectionCache() :17
static void ReflectionCache__cctor__fn(uType* __type)
{
    ReflectionCache::_functionCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[53/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppFunction[]>*/]));
    ReflectionCache::_fieldCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[54/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppField[]>*/]));
    ReflectionCache::_typeCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[55/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>*/]));
}

static void ReflectionCache_build(uType* type)
{
    ::TYPES[53] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppFunction_typeof()->Array(), NULL);
    ::TYPES[54] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppField_typeof()->Array(), NULL);
    ::TYPES[55] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof(), NULL), NULL);
    ::TYPES[56] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppField_typeof(), NULL);
    ::TYPES[57] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppField_typeof(), NULL);
    ::TYPES[58] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof(), NULL);
    ::TYPES[59] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof(), NULL), NULL);
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::TYPES[53/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppFunction[]>*/], (uintptr_t)&ReflectionCache::_functionCache_, uFieldFlagsStatic,
        ::TYPES[54/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppField[]>*/], (uintptr_t)&ReflectionCache::_fieldCache_, uFieldFlagsStatic,
        ::TYPES[55/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>*/], (uintptr_t)&ReflectionCache::_typeCache_, uFieldFlagsStatic);
}

uClassType* ReflectionCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.ReflectionCache", options);
    type->fp_build_ = ReflectionCache_build;
    type->fp_cctor_ = ReflectionCache__cctor__fn;
    return type;
}

// public static void AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> typeDictionary) :71
void ReflectionCache__AddToTypeCache_fn(::g::Uno::Collections::Dictionary* typeDictionary)
{
    ReflectionCache::AddToTypeCache(typeDictionary);
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) :43
void ReflectionCache__GetFields_fn(uType* type, uArray** __retval)
{
    *__retval = ReflectionCache::GetFields(type);
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) :24
void ReflectionCache__GetFunctions_fn(uType* type, uArray** __retval)
{
    *__retval = ReflectionCache::GetFunctions(type);
}

// public static Uno.Type GetType(Outracks.Simulator.Bytecode.TypeName typeName) :62
void ReflectionCache__GetType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = ReflectionCache::GetType(typeName);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ReflectionCache::_functionCache_;
uSStrong< ::g::Uno::Collections::Dictionary*> ReflectionCache::_fieldCache_;
uSStrong< ::g::Uno::Collections::List*> ReflectionCache::_typeCache_;

// public static void AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> typeDictionary) [static] :71
void ReflectionCache::AddToTypeCache(::g::Uno::Collections::Dictionary* typeDictionary)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionCache", "AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>)");
    ReflectionCache_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(ReflectionCache::_typeCache_), typeDictionary);
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) [static] :43
uArray* ReflectionCache::GetFields(uType* type)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionCache", "GetFields(Uno.Type)");
    ReflectionCache_typeof()->Init();
    bool ret2;
    uArray* ret3;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ReflectionCache::_fieldCache_), type, &ret2), ret2))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ReflectionCache::_fieldCache_), type, &ret3), ret3);

    ::g::Uno::Collections::List* fields = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[56/*Uno.Collections.List<Uno.Reflection.CppField>*/]);
    uType* t = type;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        uPtr(fields)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[57/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppField>*/], ::g::Uno::Reflection::CppReflection::GetFields(t))));
        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    uArray* array = (uArray*)fields->ToArray();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ReflectionCache::_fieldCache_), type, array);
    return array;
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) [static] :24
uArray* ReflectionCache::GetFunctions(uType* type)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionCache", "GetFunctions(Uno.Type)");
    ReflectionCache_typeof()->Init();
    bool ret4;
    uArray* ret5;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ReflectionCache::_functionCache_), type, &ret4), ret4))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ReflectionCache::_functionCache_), type, &ret5), ret5);

    ::g::Uno::Collections::List* functions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<Uno.Reflection.CppFunction>*/]);
    uType* t = type;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        uPtr(functions)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[59/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppFunction>*/], ::g::Uno::Reflection::CppReflection::GetFunctions(t))));
        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    uArray* array = (uArray*)functions->ToArray();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ReflectionCache::_functionCache_), type, array);
    return array;
}

// public static Uno.Type GetType(Outracks.Simulator.Bytecode.TypeName typeName) [static] :62
uType* ReflectionCache::GetType(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionCache", "GetType(Outracks.Simulator.Bytecode.TypeName)");
    ReflectionCache_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::Dictionary*> > ret6;
    bool ret7;
    uType* ret8;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::Dictionary*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ReflectionCache::_typeCache_), &ret6), ret6);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[60/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]))
                {
                    ::g::Uno::Collections::Dictionary* dict = enum1.Current(::TYPES[60/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);

                    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(dict), typeName, &ret7), ret7))
                    {
                        uType* __uno_retval = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(dict), typeName, &ret8), ret8);
                        enum1.Dispose(::TYPES[60/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[60/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            enum1.Dispose(::TYPES[60/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);
        }
        __after_finally_7:;
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/ReflectionExtensions.uno
// -----------------------------------------------------------------------------------------

// internal static extern class ReflectionExtensions :11
// {
// static generated ReflectionExtensions() :11
static void ReflectionExtensions__cctor__fn(uType* __type)
{
    ReflectionExtensions::PropGetPrefix_ = ::STRINGS[14/*"get_"*/];
    ReflectionExtensions::PropSetPrefix_ = ::STRINGS[15/*"set_"*/];
    ReflectionExtensions::EventAdderPrefix_ = ::STRINGS[12/*"add_"*/];
    ReflectionExtensions::EventRemovePrefix_ = ::STRINGS[13/*"remove_"*/];
    ReflectionExtensions::ConstructorName_ = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::STRINGS[31/*".ctor"*/]);
}

static void ReflectionExtensions_build(uType* type)
{
    ::STRINGS[14] = uString::Const("get_");
    ::STRINGS[15] = uString::Const("set_");
    ::STRINGS[12] = uString::Const("add_");
    ::STRINGS[13] = uString::Const("remove_");
    ::STRINGS[31] = uString::Const(".ctor");
    ::TYPES[38] = ::g::Uno::Type_typeof()->Array();
    ::TYPES[58] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof(), NULL);
    type->SetDependencies(
        ::g::Outracks::Simulator::Client::ReflectionCache_typeof(),
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::PropGetPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::PropSetPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::EventAdderPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::EventRemovePrefix_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), (uintptr_t)&ReflectionExtensions::ConstructorName_, uFieldFlagsStatic);
}

uClassType* ReflectionExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.ReflectionExtensions", options);
    type->fp_build_ = ReflectionExtensions_build;
    type->fp_cctor_ = ReflectionExtensions__cctor__fn;
    return type;
}

// private static bool CheckArgumentTypes(Uno.Type[] paramTypes, Uno.Type[] argumentTypes) :117
void ReflectionExtensions__CheckArgumentTypes_fn(uArray* paramTypes, uArray* argumentTypes, bool* __retval)
{
    *__retval = ReflectionExtensions::CheckArgumentTypes(paramTypes, argumentTypes);
}

// public static Uno.Reflection.CppFunction FindConstructor(Uno.Type type, Uno.Type[] paramTypes) :47
void ReflectionExtensions__FindConstructor_fn(uType* type, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindConstructor(type, paramTypes);
}

// public static Uno.Reflection.CppFunction FindEventAddFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) :64
void ReflectionExtensions__FindEventAddFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindEventAddFunction(type, typeMemberName, delegateObj);
}

// public static Uno.Reflection.CppFunction FindEventRemoveFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) :70
void ReflectionExtensions__FindEventRemoveFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindEventRemoveFunction(type, typeMemberName, delegateObj);
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName fieldName) :76
void ReflectionExtensions__FindField_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uField** __retval)
{
    *__retval = ReflectionExtensions::FindField(type, fieldName);
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName, Uno.Type[] paramTypes) :101
void ReflectionExtensions__FindFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindFunction(type, memberName, paramTypes);
}

// private static Uno.Reflection.CppFunction FindFunctionOverload(Uno.Reflection.CppFunction[] functions, Uno.Type[] paramTypes) :106
void ReflectionExtensions__FindFunctionOverload_fn(uArray* functions, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindFunctionOverload(functions, paramTypes);
}

// private static Uno.Reflection.CppFunction[] FindFunctionsByName(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName) :133
void ReflectionExtensions__FindFunctionsByName_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray** __retval)
{
    *__retval = ReflectionExtensions::FindFunctionsByName(type, memberName);
}

// public static Uno.Reflection.CppFunction FindPropertyGetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName) :52
void ReflectionExtensions__FindPropertyGetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindPropertyGetter(type, typeMemberName);
}

// public static Uno.Reflection.CppFunction FindPropertySetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, Uno.Type argType) :58
void ReflectionExtensions__FindPropertySetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindPropertySetter(type, typeMemberName, argType);
}

// public static Uno.Type FindType(Outracks.Simulator.Bytecode.TypeName typeName) :42
void ReflectionExtensions__FindType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = ReflectionExtensions::FindType(typeName);
}

// public static Uno.Type[] FindTypes(Outracks.Simulator.Bytecode.TypeName[] typeName) :32
void ReflectionExtensions__FindTypes_fn(uArray* typeName, uArray** __retval)
{
    *__retval = ReflectionExtensions::FindTypes(typeName);
}

// public static Uno.Type[] GetParameterTypes(Outracks.Simulator.Bytecode.Signature methodSignature) :88
void ReflectionExtensions__GetParameterTypes_fn(::g::Outracks::Simulator::Bytecode::Signature* methodSignature, uArray** __retval)
{
    *__retval = ReflectionExtensions::GetParameterTypes(methodSignature);
}

// public static Uno.Type[] GetTypes(object[] objects) :20
void ReflectionExtensions__GetTypes_fn(uArray* objects, uArray** __retval)
{
    *__retval = ReflectionExtensions::GetTypes(objects);
}

uSStrong<uString*> ReflectionExtensions::PropGetPrefix_;
uSStrong<uString*> ReflectionExtensions::PropSetPrefix_;
uSStrong<uString*> ReflectionExtensions::EventAdderPrefix_;
uSStrong<uString*> ReflectionExtensions::EventRemovePrefix_;
uSStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> ReflectionExtensions::ConstructorName_;

// private static bool CheckArgumentTypes(Uno.Type[] paramTypes, Uno.Type[] argumentTypes) [static] :117
bool ReflectionExtensions::CheckArgumentTypes(uArray* paramTypes, uArray* argumentTypes)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "CheckArgumentTypes(Uno.Type[],Uno.Type[])");
    ReflectionExtensions_typeof()->Init();

    if (uPtr(paramTypes)->Length() != uPtr(argumentTypes)->Length())
        return false;

    for (int32_t i = 0; i < uPtr(paramTypes)->Length(); i++)
    {
        uType* param = uPtr(paramTypes)->Strong<uType*>(i);
        uType* arg = uPtr(argumentTypes)->Strong<uType*>(i);

        if (!::g::Uno::Type::IsSubclassOf(uPtr(arg), param))
            return false;
    }

    return true;
}

// public static Uno.Reflection.CppFunction FindConstructor(Uno.Type type, Uno.Type[] paramTypes) [static] :47
uFunction* ReflectionExtensions::FindConstructor(uType* type, uArray* paramTypes)
{
    ReflectionExtensions_typeof()->Init();
    return ReflectionExtensions::FindFunction(type, ReflectionExtensions::ConstructorName_, paramTypes);
}

// public static Uno.Reflection.CppFunction FindEventAddFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) [static] :64
uFunction* ReflectionExtensions::FindEventAddFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindEventAddFunction(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* eventAddName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::EventAdderPrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, eventAddName, uArray::Init<uType*>(::TYPES[38/*Uno.Type[]*/], 1, (uType*)::g::Uno::Object::GetType(uPtr(delegateObj))));
}

// public static Uno.Reflection.CppFunction FindEventRemoveFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) [static] :70
uFunction* ReflectionExtensions::FindEventRemoveFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindEventRemoveFunction(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* eventRemoveName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::EventRemovePrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, eventRemoveName, uArray::Init<uType*>(::TYPES[38/*Uno.Type[]*/], 1, (uType*)::g::Uno::Object::GetType(uPtr(delegateObj))));
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName fieldName) [static] :76
uField* ReflectionExtensions::FindField(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindField(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName)");
    ReflectionExtensions_typeof()->Init();
    uArray* fields = ::g::Outracks::Simulator::Client::ReflectionCache::GetFields(type);

    for (int32_t i = 0; i < uPtr(fields)->Length(); i++)
    {
        uField* f = uPtr(fields)->Item<uField*>(i);

        if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppField::Name(f), uPtr(fieldName)->Name))
            return f;
    }

    return ::g::Uno::Reflection::CppField::Null();
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName, Uno.Type[] paramTypes) [static] :101
uFunction* ReflectionExtensions::FindFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindFunction(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type[])");
    ReflectionExtensions_typeof()->Init();
    return ReflectionExtensions::FindFunctionOverload(ReflectionExtensions::FindFunctionsByName(type, memberName), paramTypes);
}

// private static Uno.Reflection.CppFunction FindFunctionOverload(Uno.Reflection.CppFunction[] functions, Uno.Type[] paramTypes) [static] :106
uFunction* ReflectionExtensions::FindFunctionOverload(uArray* functions, uArray* paramTypes)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindFunctionOverload(Uno.Reflection.CppFunction[],Uno.Type[])");
    ReflectionExtensions_typeof()->Init();

    for (int32_t i = 0; i < uPtr(functions)->Length(); i++)
        if (ReflectionExtensions::CheckArgumentTypes(::g::Uno::Reflection::CppFunction::ParameterTypes(uPtr(functions)->Item<uFunction*>(i)), paramTypes))
            return uPtr(functions)->Item<uFunction*>(i);

    return ::g::Uno::Reflection::CppFunction::Null();
}

// private static Uno.Reflection.CppFunction[] FindFunctionsByName(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :133
uArray* ReflectionExtensions::FindFunctionsByName(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindFunctionsByName(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName)");
    ReflectionExtensions_typeof()->Init();
    uString* name = uPtr(memberName)->Name;
    uArray* functions = ::g::Outracks::Simulator::Client::ReflectionCache::GetFunctions(type);
    ::g::Uno::Collections::List* matchingFunctions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[58/*Uno.Collections.List<Uno.Reflection.CppFunction>*/]);

    for (int32_t i = 0; i < uPtr(functions)->Length(); i++)
        if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppFunction::Name(uPtr(functions)->Item<uFunction*>(i)), name))
            ::g::Uno::Collections::List__Add_fn(uPtr(matchingFunctions), uCRef(uPtr(functions)->Item<uFunction*>(i)));

    return (uArray*)matchingFunctions->ToArray();
}

// public static Uno.Reflection.CppFunction FindPropertyGetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName) [static] :52
uFunction* ReflectionExtensions::FindPropertyGetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindPropertyGetter(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName)");
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* getterName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::PropGetPrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, getterName, uArray::New(::TYPES[38/*Uno.Type[]*/], 0));
}

// public static Uno.Reflection.CppFunction FindPropertySetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, Uno.Type argType) [static] :58
uFunction* ReflectionExtensions::FindPropertySetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindPropertySetter(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type)");
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* setterName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::PropSetPrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, setterName, uArray::Init<uType*>(::TYPES[38/*Uno.Type[]*/], 1, argType));
}

// public static Uno.Type FindType(Outracks.Simulator.Bytecode.TypeName typeName) [static] :42
uType* ReflectionExtensions::FindType(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindType(Outracks.Simulator.Bytecode.TypeName)");
    ReflectionExtensions_typeof()->Init();
    uType* ind1;
    ind1 = ::g::Outracks::Simulator::Client::ReflectionCache::GetType(typeName);
    return (ind1 != NULL) ? ind1 : (uType*)::g::Uno::Type::GetType2(uPtr(typeName)->FullName(), true);
}

// public static Uno.Type[] FindTypes(Outracks.Simulator.Bytecode.TypeName[] typeName) [static] :32
uArray* ReflectionExtensions::FindTypes(uArray* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "FindTypes(Outracks.Simulator.Bytecode.TypeName[])");
    ReflectionExtensions_typeof()->Init();
    uArray* types = uArray::New(::TYPES[38/*Uno.Type[]*/], uPtr(typeName)->Length());

    for (int32_t i = 0; i < typeName->Length(); i++)
        uPtr(types)->Strong<uType*>(i) = ReflectionExtensions::FindType(uPtr(typeName)->Strong< ::g::Outracks::Simulator::Bytecode::TypeName*>(i));

    return types;
}

// public static Uno.Type[] GetParameterTypes(Outracks.Simulator.Bytecode.Signature methodSignature) [static] :88
uArray* ReflectionExtensions::GetParameterTypes(::g::Outracks::Simulator::Bytecode::Signature* methodSignature)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "GetParameterTypes(Outracks.Simulator.Bytecode.Signature)");
    ReflectionExtensions_typeof()->Init();
    ::g::Outracks::Simulator::Bytecode::Parameter* ret2;
    ::g::Outracks::Simulator::ImmutableList* parameters = uPtr(methodSignature)->Parameters;
    uArray* types = uArray::New(::TYPES[38/*Uno.Type[]*/], uPtr(parameters)->Count());

    for (int32_t i = 0; i < parameters->Count(); i++)
        uPtr(types)->Strong<uType*>(i) = ReflectionExtensions::FindType(uPtr((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(parameters), uCRef<int32_t>(i), &ret2), ret2))->Type);

    return types;
}

// public static Uno.Type[] GetTypes(object[] objects) [static] :20
uArray* ReflectionExtensions::GetTypes(uArray* objects)
{
    uStackFrame __("Outracks.Simulator.Client.ReflectionExtensions", "GetTypes(object[])");
    ReflectionExtensions_typeof()->Init();

    if (objects == NULL)
        return NULL;

    uArray* types = uArray::New(::TYPES[38/*Uno.Type[]*/], uPtr(objects)->Length());

    for (int32_t i = 0; i < objects->Length(); i++)
        uPtr(types)->Strong<uType*>(i) = ::g::Uno::Object::GetType(uPtr(uPtr(objects)->Strong<uObject*>(i)));

    return types;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Reifying :288
// {
static void Reifying_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Try again");
    ::TYPES[32] = uObject_typeof()->Array();
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), offsetof(Reifying, _reify), 0);
}

::g::Outracks::Simulator::Client::Connected_type* Reifying_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connected_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Reifying);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Connected_type);
    type = (::g::Outracks::Simulator::Client::Connected_type*)uClassType::New("Outracks.Simulator.Client.Reifying", options);
    type->fp_build_ = Reifying_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Reifying__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Client::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Reifying__OnFaulted_fn;
    return type;
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) :292
void Reifying__ctor_2_fn(Reifying* __this, uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    __this->ctor_2(client, reify);
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) :292
void Reifying__New1_fn(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify, Reifying** __retval)
{
    *__retval = Reifying::New1(client, reify);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :298
void Reifying__OnEnterState_fn(Reifying* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Reifying", "OnEnterState()");
    ::g::Outracks::Simulator::Client::State* ret2;
    ::g::Outracks::Simulator::Client::Connected__OnEnterState_fn(__this, &ret2);
    __this->DismissAllActiveDiagnostics();
    uObject* previousState = NULL;

    if (uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport() != NULL)
        previousState = uPtr(uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport())->SavePreviewState();

    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Client::Context::App());

    if (uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport() != NULL)
        uPtr(uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport())->RestorePreviewState(previousState);

    ::g::Outracks::Simulator::Client::VirtualMachine::Execute(uPtr(uPtr(__this->_reify)->Bytecode())->Reify, uArray::Init<uObject*>(::TYPES[32/*object[]*/], 1, (::g::Outracks::Simulator::Client::FakeApp*)::g::Outracks::Simulator::Client::Context::App()));
    ::g::Outracks::Simulator::Client::UserAppState* userState = ::g::Outracks::Simulator::Client::UserAppState::Save(::g::Outracks::Simulator::Client::Context::App());
    return *__retval = ::g::Outracks::Simulator::Client::Running::New1(__this->Client, userState, __this->_reify), void();
}

// protected override sealed Outracks.Simulator.Client.State OnFaulted(Uno.Exception e) :318
void Reifying__OnFaulted_fn(Reifying* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Reifying", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[18/*"Try again"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1()))), void();
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) [instance] :292
void Reifying::ctor_2(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    ctor_1(client);
    _reify = reify;
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) [static] :292
Reifying* Reifying::New1(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    Reifying* obj1 = (Reifying*)uNew(Reifying_typeof());
    obj1->ctor_2(client, reify);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Running :341
// {
static void Running_build(uType* type)
{
    ::STRINGS[35] = uString::Const("Restart");
    ::STRINGS[36] = uString::Const("Density changed, reifying");
    ::STRINGS[37] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno");
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::Platform::Displays_typeof());
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), offsetof(Running, _runningReify), 0,
        ::g::Uno::Float_typeof(), offsetof(Running, _zoomWhenRooted), 0,
        ::g::Outracks::Simulator::Client::UserAppState_typeof(), offsetof(Running, _userApp), 0);
}

::g::Outracks::Simulator::Client::Connected_type* Running_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connected_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Running);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Connected_type);
    type = (::g::Outracks::Simulator::Client::Connected_type*)uClassType::New("Outracks.Simulator.Client.Running", options);
    type->fp_build_ = Running_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Running__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Client::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Running__OnFaulted_fn;
    type->fp_OnLeaveState = (void(*)(::g::Outracks::Simulator::Client::State*))Running__OnLeaveState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Running__OnUpdate_fn;
    return type;
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) :348
void Running__ctor_2_fn(Running* __this, uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify)
{
    __this->ctor_2(client, userApp, runningReify);
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) :348
void Running__New1_fn(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify, Running** __retval)
{
    *__retval = Running::New1(client, userApp, runningReify);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :358
void Running__OnEnterState_fn(Running* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnEnterState()");
    ::g::Outracks::Simulator::Client::State* ret2;
    ::g::Outracks::Simulator::Client::Connected__OnEnterState_fn(__this, &ret2);
    uPtr(__this->_userApp)->ApplyTo(::g::Outracks::Simulator::Client::Context::App());
    __this->_zoomWhenRooted = Running::QueryDensity();
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.Client.State OnFaulted(Uno.Exception e) :384
void Running__OnFaulted_fn(Running* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[35/*"Restart"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1()))), void();
}

// public override sealed void OnLeaveState() :366
void Running__OnLeaveState_fn(Running* __this)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnLeaveState()");
    ::g::Outracks::Simulator::Client::Connected__OnLeaveState_fn(__this);
    __this->_userApp = ::g::Outracks::Simulator::Client::UserAppState::Save(::g::Outracks::Simulator::Client::Context::App());
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :372
void Running__OnUpdate_fn(Running* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnUpdate()");
    ::g::Outracks::Simulator::Client::State* ret3;
    float currentZoom = Running::QueryDensity();

    if (currentZoom != __this->_zoomWhenRooted)
    {
        ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[36/*"Density cha...*/], 0, ::STRINGS[37/*"/usr/local/...*/], 377);
        return *__retval = ::g::Outracks::Simulator::Client::Reifying::New1(__this->Client, __this->_runningReify), void();
    }

    return *__retval = (::g::Outracks::Simulator::Client::Connected__OnUpdate_fn(__this, &ret3), ret3), void();
}

// private static float QueryDensity() :389
void Running__QueryDensity_fn(float* __retval)
{
    *__retval = Running::QueryDensity();
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) [instance] :348
void Running::ctor_2(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify)
{
    ctor_1(client);
    _userApp = userApp;
    _runningReify = runningReify;
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) [static] :348
Running* Running::New1(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify)
{
    Running* obj1 = (Running*)uNew(Running_typeof());
    obj1->ctor_2(client, userApp, runningReify);
    return obj1;
}

// private static float QueryDensity() [static] :389
float Running::QueryDensity()
{
    uStackFrame __("Outracks.Simulator.Client.Running", "QueryDensity()");
    return uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal class ShowingModalDialog :169
// {
static void ShowingModalDialog_build(uType* type)
{
    ::STRINGS[38] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno");
    ::TYPES[61] = ::g::Outracks::Optional_typeof()->MakeMethod(2/*Some<Outracks.Simulator.Client.DialogButton>*/, ::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    ::TYPES[62] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[63] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(0/*Apply<Outracks.Simulator.Client.DialogButton>*/, ::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    ::TYPES[64] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    ::TYPES[65] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[66] = ::g::Outracks::Simulator::ForgetAction1_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Gestures::ClickedArgs_typeof(), NULL);
    ::TYPES[67] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ShowingModalDialog, _header), 0,
        ::g::Uno::String_typeof(), offsetof(ShowingModalDialog, _body), 0,
        ::g::Uno::String_typeof(), offsetof(ShowingModalDialog, _details), 0,
        ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array(), offsetof(ShowingModalDialog, _buttons), 0,
        ::TYPES[67/*Outracks.Optional<Outracks.Simulator.Client.DialogButton>*/], (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Outracks::Simulator::Client::State_type* ShowingModalDialog_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ShowingModalDialog);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ShowingModalDialog", options);
    type->fp_build_ = ShowingModalDialog_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingModalDialog__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))ShowingModalDialog__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingModalDialog__OnUpdate_fn;
    return type;
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) :178
void ShowingModalDialog__ctor_1_fn(ShowingModalDialog* __this, uString* header, uString* body, uString* details, uArray* buttons)
{
    __this->ctor_1(header, body, details, buttons);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) :178
void ShowingModalDialog__New1_fn(uString* header, uString* body, uString* details, uArray* buttons, ShowingModalDialog** __retval)
{
    *__retval = ShowingModalDialog::New1(header, body, details, buttons);
}

// private void OnButtonClicked(Outracks.Simulator.Client.DialogButton button) :211
void ShowingModalDialog__OnButtonClicked_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::DialogButton* button)
{
    __this->OnButtonClicked(button);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :190
void ShowingModalDialog__OnEnterState_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingModalDialog", "OnEnterState()");
    uArray* array1;
    int32_t index2;
    int32_t length3;
    ::g::Fuse::Controls::Button* collection4;
    uString* ind5;
    uDelegate* ret8;
    ::g::Uno::Collections::List* buttons = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[62/*Uno.Collections.List<Fuse.Controls.Control>*/]);

    for (array1 = __this->_buttons, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Outracks::Simulator::Client::DialogButton* button = uPtr(array1)->Strong< ::g::Outracks::Simulator::Client::DialogButton*>(index2);
        collection4 = ::g::Fuse::Controls::Button::New5();
        ind5 = uPtr(button)->Text;
        uPtr(collection4)->Text(ind5);
        ind5;
        ::g::Fuse::Controls::Button* node = collection4;
        uDelegate* action = (::g::Outracks::Simulator::Closure__Apply_fn(::TYPES[63/*Outracks.Simulator.Closure.Apply<Outracks.Simulator.Client.DialogButton>*/], uDelegate::New(::TYPES[64/*Uno.Action<Outracks.Simulator.Client.DialogButton>*/], (void*)ShowingModalDialog__OnButtonClicked_fn, __this), button, &ret8), ret8);
        uDelegate* handler = uDelegate::New(::TYPES[65/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Outracks::Simulator::ForgetAction1__Execute_fn, (::g::Outracks::Simulator::ForgetAction1*)::g::Outracks::Simulator::ForgetAction1::New1(::TYPES[66/*Outracks.Simulator.ForgetAction<object, Fuse.Gestures.ClickedArgs>*/], action));
        ::g::Fuse::Gestures::Clicked::AddHandler(node, handler);
        ::g::Uno::Collections::List__Add_fn(uPtr(buttons), node);
    }

    ::g::Outracks::Simulator::Client::ModalDialog::Show(::g::Outracks::Simulator::Client::Context::App(), __this->_header, __this->_body, __this->_details, (uObject*)buttons);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :224
void ShowingModalDialog__OnException_fn(ShowingModalDialog* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingModalDialog", "OnException(Uno.Exception)");
    ::g::Uno::Diagnostics::Debug::Log3(uPtr(e)->Message(), 0, ::STRINGS[38/*"/usr/local/...*/], 226);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :216
void ShowingModalDialog__OnUpdate_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingModalDialog", "OnUpdate()");

    if (__this->_clickedButton().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > >().HasValue(::TYPES[67/*Outracks.Optional<Outracks.Simulator.Client.DialogButton>*/]))
        return *__retval = uPtr(__this->_clickedButton().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > >().Value(::TYPES[67/*Outracks.Optional<Outracks.Simulator.Client.DialogButton>*/]))->Destination, void();

    return *__retval = __this, void();
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) [instance] :178
void ShowingModalDialog::ctor_1(uString* header, uString* body, uString* details, uArray* buttons)
{
    ctor_();
    _header = header;
    _body = body;
    _details = details;
    _buttons = buttons;
}

// private void OnButtonClicked(Outracks.Simulator.Client.DialogButton button) [instance] :211
void ShowingModalDialog::OnButtonClicked(::g::Outracks::Simulator::Client::DialogButton* button)
{
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > ret7;
    _clickedButton().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > >() = (::g::Outracks::Optional__Some_fn(::TYPES[61/*Outracks.Optional.Some<Outracks.Simulator.Client.DialogButton>*/], button, &ret7), ret7);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) [static] :178
ShowingModalDialog* ShowingModalDialog::New1(uString* header, uString* body, uString* details, uArray* buttons)
{
    ShowingModalDialog* obj6 = (ShowingModalDialog*)uNew(ShowingModalDialog_typeof());
    obj6->ctor_1(header, body, details, buttons);
    return obj6;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal abstract class ShowingPrompt :98
// {
static void ShowingPrompt_build(uType* type)
{
    ::STRINGS[39] = uString::Const("Ok");
    ::STRINGS[40] = uString::Const("Cancel");
    ::STRINGS[41] = uString::Const("# ");
    ::STRINGS[38] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno");
    ::TYPES[65] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[68] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[69] = ::g::Fuse::Controls::Control_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ShowingPrompt, _header), 0,
        ::g::Uno::String_typeof(), offsetof(ShowingPrompt, _body), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(ShowingPrompt, _input), 0,
        ::g::Uno::Bool_typeof(), offsetof(ShowingPrompt, _okClicked), 0,
        ::g::Uno::Bool_typeof(), offsetof(ShowingPrompt, _cancelClicked), 0);
}

ShowingPrompt_type* ShowingPrompt_typeof()
{
    static uSStrong<ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ShowingPrompt);
    options.TypeSize = sizeof(ShowingPrompt_type);
    type = (ShowingPrompt_type*)uClassType::New("Outracks.Simulator.Client.ShowingPrompt", options);
    type->fp_build_ = ShowingPrompt_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingPrompt__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingPrompt__OnUpdate_fn;
    return type;
}

// protected ShowingPrompt(string header, string body) :107
void ShowingPrompt__ctor_1_fn(ShowingPrompt* __this, uString* header, uString* body)
{
    __this->ctor_1(header, body);
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) :148
void ShowingPrompt__OnCancelClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnCancelClicked(s, args);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :115
void ShowingPrompt__OnEnterState_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingPrompt", "OnEnterState()");
    ::g::Fuse::Controls::Button* collection1;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Button* collection2;
    ::g::Uno::Float4 ind4;
    collection1 = ::g::Fuse::Controls::Button::New5();
    ind3 = ::g::Uno::Float4__New1(20.0f);
    uPtr(collection1)->Margin(ind3);
    ind3;
    uPtr(collection1)->Text(::STRINGS[39/*"Ok"*/]);
    ::STRINGS[39/*"Ok"*/];
    ::g::Fuse::Controls::Button* ok = collection1;
    ::g::Fuse::Gestures::Clicked::AddHandler(ok, uDelegate::New(::TYPES[65/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnOkClicked_fn, __this));
    collection2 = ::g::Fuse::Controls::Button::New5();
    ind4 = ::g::Uno::Float4__New1(20.0f);
    uPtr(collection2)->Margin(ind4);
    ind4;
    uPtr(collection2)->Text(::STRINGS[40/*"Cancel"*/]);
    ::STRINGS[40/*"Cancel"*/];
    ::g::Fuse::Controls::Button* cancel = collection2;
    ::g::Fuse::Gestures::Clicked::AddHandler(cancel, uDelegate::New(::TYPES[65/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnCancelClicked_fn, __this));
    __this->_input = ::g::Fuse::Controls::TextBox::New4();
    ::g::Uno::Diagnostics::Debug::Log3(::g::Uno::String::op_Addition2(::STRINGS[41/*"# "*/], __this->_header), 0, ::STRINGS[38/*"/usr/local/...*/], 136);
    ::g::Uno::Diagnostics::Debug::Log3(__this->_body, 0, ::STRINGS[38/*"/usr/local/...*/], 137);
    ::g::Outracks::Simulator::Client::ModalDialog::ShowPrompt(::g::Outracks::Simulator::Client::Context::App(), __this->_header, __this->_body, __this->_input, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[68/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Control>*/], uArray::Init< ::g::Fuse::Controls::Control*>(::TYPES[69/*Fuse.Controls.Control[]*/], 2, cancel, ok))));
    return *__retval = __this, void();
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) :143
void ShowingPrompt__OnOkClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnOkClicked(s, args);
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :157
void ShowingPrompt__OnUpdate_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingPrompt", "OnUpdate()");

    if (__this->_cancelClicked)
        return *__retval = __this->OnCancel(), void();

    if (__this->_okClicked)
        return *__retval = __this->OnOk(uPtr(__this->_input)->Value()), void();

    return *__retval = __this, void();
}

// protected ShowingPrompt(string header, string body) [instance] :107
void ShowingPrompt::ctor_1(uString* header, uString* body)
{
    ctor_();
    _header = header;
    _body = body;
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :148
void ShowingPrompt::OnCancelClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    _cancelClicked = true;
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :143
void ShowingPrompt::OnOkClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    _okClicked = true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// public sealed extern class SimpleTypeMap :18
// {
static void SimpleTypeMap_build(uType* type)
{
    ::STRINGS[42] = uString::Const("object");
    ::STRINGS[43] = uString::Const("string");
    ::STRINGS[44] = uString::Const("texture2D");
    ::STRINGS[45] = uString::Const("textureCube");
    ::STRINGS[46] = uString::Const("bool");
    ::STRINGS[47] = uString::Const("char");
    ::STRINGS[48] = uString::Const("byte");
    ::STRINGS[49] = uString::Const("byte2");
    ::STRINGS[50] = uString::Const("byte4");
    ::STRINGS[51] = uString::Const("sbyte");
    ::STRINGS[52] = uString::Const("sbyte2");
    ::STRINGS[53] = uString::Const("sbyte4");
    ::STRINGS[54] = uString::Const("short");
    ::STRINGS[55] = uString::Const("short2");
    ::STRINGS[56] = uString::Const("short4");
    ::STRINGS[57] = uString::Const("ushort");
    ::STRINGS[58] = uString::Const("ushort2");
    ::STRINGS[59] = uString::Const("ushort4");
    ::STRINGS[60] = uString::Const("int");
    ::STRINGS[61] = uString::Const("int2");
    ::STRINGS[62] = uString::Const("int3");
    ::STRINGS[63] = uString::Const("int4");
    ::STRINGS[64] = uString::Const("uint");
    ::STRINGS[65] = uString::Const("long");
    ::STRINGS[66] = uString::Const("ulong");
    ::STRINGS[67] = uString::Const("float");
    ::STRINGS[68] = uString::Const("float2");
    ::STRINGS[69] = uString::Const("float3");
    ::STRINGS[70] = uString::Const("float4");
    ::STRINGS[71] = uString::Const("float2x2");
    ::STRINGS[72] = uString::Const("float3x3");
    ::STRINGS[73] = uString::Const("float4x4");
    ::STRINGS[74] = uString::Const("double");
    ::STRINGS[75] = uString::Const("'");
    ::STRINGS[76] = uString::Const("' was not found");
    ::STRINGS[77] = uString::Const("' is not a closed type");
    ::TYPES[70] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Type_typeof(), NULL);
    ::TYPES[71] = ::g::Uno::Type_typeof();
    ::TYPES[47] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.Type>*/, ::TYPES[71/*Uno.Type*/], NULL);
    ::TYPES[72] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*Select<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::TYPES[71/*Uno.Type*/], NULL);
    ::TYPES[73] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::TYPES[71/*Uno.Type*/], NULL);
    type->SetDependencies(
        ::g::Uno::Type_typeof(),
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::Client::ITypeMap_typeof(), offsetof(SimpleTypeMap_type, interface0));
    type->SetFields(0,
        ::TYPES[70/*Uno.Collections.Dictionary<string, Uno.Type>*/], offsetof(SimpleTypeMap, _builtins), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SimpleTypeMap__New1_fn, 0, true, type, 0),
        new uFunction("ResolveType", NULL, (void*)SimpleTypeMap__ResolveType1_fn, 0, false, ::TYPES[71/*Uno.Type*/], 1, ::g::Uno::String_typeof()));
}

SimpleTypeMap_type* SimpleTypeMap_typeof()
{
    static uSStrong<SimpleTypeMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SimpleTypeMap);
    options.TypeSize = sizeof(SimpleTypeMap_type);
    type = (SimpleTypeMap_type*)uClassType::New("Outracks.Simulator.Client.SimpleTypeMap", options);
    type->fp_build_ = SimpleTypeMap_build;
    type->fp_ctor_ = (void*)SimpleTypeMap__New1_fn;
    type->interface0.fp_ResolveType = (void(*)(uObject*, uString*, uType**))SimpleTypeMap__ResolveType1_fn;
    return type;
}

// public generated SimpleTypeMap() :18
void SimpleTypeMap__ctor__fn(SimpleTypeMap* __this)
{
    __this->ctor_();
}

// public generated SimpleTypeMap New() :18
void SimpleTypeMap__New1_fn(SimpleTypeMap** __retval)
{
    *__retval = SimpleTypeMap::New1();
}

// private Uno.Type ResolveType(Outracks.Simulator.Bytecode.TypeName typeName) :63
void SimpleTypeMap__ResolveType_fn(SimpleTypeMap* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = __this->ResolveType(typeName);
}

// public Uno.Type ResolveType(string typeName) :58
void SimpleTypeMap__ResolveType1_fn(SimpleTypeMap* __this, uString* typeName, uType** __retval)
{
    *__retval = __this->ResolveType1(typeName);
}

// public generated SimpleTypeMap() [instance] :18
void SimpleTypeMap::ctor_()
{
    uStackFrame __("Outracks.Simulator.Client.SimpleTypeMap", ".ctor()");
    ::g::Uno::Collections::Dictionary* collection1;
    _builtins = (collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[70/*Uno.Collections.Dictionary<string, Uno.Type>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[42/*"object"*/], uObject_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[43/*"string"*/], ::g::Uno::String_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[44/*"texture2D"*/], ::g::Uno::Graphics::Texture2D_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[45/*"textureCube"*/], ::g::Uno::Graphics::TextureCube_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[46/*"bool"*/], ::g::Uno::Bool_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[47/*"char"*/], ::g::Uno::Char_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[48/*"byte"*/], ::g::Uno::Byte_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[49/*"byte2"*/], ::g::Uno::Byte2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[50/*"byte4"*/], ::g::Uno::Byte4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[51/*"sbyte"*/], ::g::Uno::SByte_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[52/*"sbyte2"*/], ::g::Uno::SByte2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[53/*"sbyte4"*/], ::g::Uno::SByte4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[54/*"short"*/], ::g::Uno::Short_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[55/*"short2"*/], ::g::Uno::Short2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[56/*"short4"*/], ::g::Uno::Short4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[57/*"ushort"*/], ::g::Uno::UShort_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[58/*"ushort2"*/], ::g::Uno::UShort2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[59/*"ushort4"*/], ::g::Uno::UShort4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[60/*"int"*/], ::g::Uno::Int_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[61/*"int2"*/], ::g::Uno::Int2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[62/*"int3"*/], ::g::Uno::Int3_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[63/*"int4"*/], ::g::Uno::Int4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[64/*"uint"*/], ::g::Uno::UInt_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[65/*"long"*/], ::g::Uno::Long_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[66/*"ulong"*/], ::g::Uno::ULong_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[67/*"float"*/], ::g::Uno::Float_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[68/*"float2"*/], ::g::Uno::Float2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[69/*"float3"*/], ::g::Uno::Float3_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[70/*"float4"*/], ::g::Uno::Float4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[71/*"float2x2"*/], ::g::Uno::Float2x2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[72/*"float3x3"*/], ::g::Uno::Float3x3_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[73/*"float4x4"*/], ::g::Uno::Float4x4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[74/*"double"*/], ::g::Uno::Double_typeof()), collection1);
}

// private Uno.Type ResolveType(Outracks.Simulator.Bytecode.TypeName typeName) [instance] :63
uType* SimpleTypeMap::ResolveType(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.SimpleTypeMap", "ResolveType(Outracks.Simulator.Bytecode.TypeName)");
    bool ret3;
    uType* t = ::g::Uno::Type::GetType1(uPtr(uPtr(typeName)->WithGenericSuffix())->FullName());

    if (::g::Uno::Type::op_Equality(t, NULL) && !(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_builtins), typeName->FullName(), (void**)(&t), &ret3), ret3))
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[75/*"'"*/], typeName), ::STRINGS[76/*"' was not f...*/])));

    if (typeName->IsParameterizedGenericType())
        t = ::g::Uno::Type::MakeGenericType(uPtr(t), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[47/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Type>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[72/*Uno.Collections.EnumerableExtensions.Select<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/], (uObject*)uPtr(typeName)->GenericArgumentsRecursively(), uDelegate::New(::TYPES[73/*Uno.Func<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/], (void*)SimpleTypeMap__ResolveType_fn, this))));

    if (::g::Uno::Type::ContainsGenericParameters(uPtr(t)))
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[75/*"'"*/], typeName), ::STRINGS[77/*"' is not a ...*/])));

    return t;
}

// public Uno.Type ResolveType(string typeName) [instance] :58
uType* SimpleTypeMap::ResolveType1(uString* typeName)
{
    uStackFrame __("Outracks.Simulator.Client.SimpleTypeMap", "ResolveType(string)");
    return ResolveType(::g::Outracks::Simulator::Bytecode::TypeName::Parse(typeName));
}

// public generated SimpleTypeMap New() [static] :18
SimpleTypeMap* SimpleTypeMap::New1()
{
    SimpleTypeMap* obj2 = (SimpleTypeMap*)uNew(SimpleTypeMap_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno
// ---------------------------------------------------------------------

// internal abstract class State :250
// {
static void State_build(uType* type)
{
}

State_type* State_typeof()
{
    static uSStrong<State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(State_type);
    type = (State_type*)uClassType::New("Outracks.Simulator.Client.State", options);
    type->fp_build_ = State_build;
    type->fp_OnEnterState = State__OnEnterState_fn;
    type->fp_OnLeaveState = State__OnLeaveState_fn;
    type->fp_OnUpdate = State__OnUpdate_fn;
    return type;
}

// protected generated State() :250
void State__ctor__fn(State* __this)
{
    __this->ctor_();
}

// public virtual Outracks.Simulator.Client.State OnEnterState() :252
void State__OnEnterState_fn(State* __this, State** __retval)
{
    return *__retval = __this, void();
}

// public virtual void OnLeaveState() :257
void State__OnLeaveState_fn(State* __this)
{
}

// public virtual Outracks.Simulator.Client.State OnUpdate() :261
void State__OnUpdate_fn(State* __this, State** __retval)
{
    return *__retval = __this, void();
}

// protected generated State() [instance] :250
void State::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno
// -------------------------------------------------------------------------------------

// internal static extern class TryInvokeExtension :260
// {
static void TryInvokeExtension_build(uType* type)
{
    ::TYPES[74] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::IFunction_typeof(), NULL);
    ::TYPES[50] = ::g::Uno::Reflection::IFunction_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
}

uClassType* TryInvokeExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.TryInvokeExtension", options);
    type->fp_build_ = TryInvokeExtension_build;
    return type;
}

// public static Uno.Reflection.IFunction FindUnambiguousMethod(Uno.Type type, string methodName, object[] arguments) :262
void TryInvokeExtension__FindUnambiguousMethod_fn(uType* type, uString* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments);
}

// public static Outracks.Simulator.Client.IEvent GetEvent(Uno.Type type, string name, Uno.Type propertyType) :363
void TryInvokeExtension__GetEvent_fn(uType* type, uString* name, uType* propertyType, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetEvent(type, name, propertyType);
}

// public static Uno.Reflection.IField GetField(Uno.Type type, string name) :355
void TryInvokeExtension__GetField_fn(uType* type, uString* name, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetField(type, name);
}

// public static Uno.Reflection.IFunction GetMethod(Uno.Type type, string name, Uno.Type[] parameterTypes) :317
void TryInvokeExtension__GetMethod_fn(uType* type, uString* name, uArray* parameterTypes, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetMethod(type, name, parameterTypes);
}

// public static Uno.Reflection.CppFunction[] GetMethods(Uno.Type type) :345
void TryInvokeExtension__GetMethods_fn(uType* type, uArray** __retval)
{
    *__retval = TryInvokeExtension::GetMethods(type);
}

// public static Outracks.Simulator.Client.IProperty GetProperty(Uno.Type type, string name, Uno.Type propertyType) :350
void TryInvokeExtension__GetProperty_fn(uType* type, uString* name, uType* propertyType, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetProperty(type, name, propertyType);
}

// public static bool IsInstanceOfType(Uno.Type type, object obj) :368
void TryInvokeExtension__IsInstanceOfType_fn(uType* type, uObject* obj, bool* __retval)
{
    *__retval = TryInvokeExtension::IsInstanceOfType(type, obj);
}

// public static bool ParametersMatch(Uno.Reflection.IFunction m, object[] arguments) :290
void TryInvokeExtension__ParametersMatch_fn(uObject* m, uArray* arguments, bool* __retval)
{
    *__retval = TryInvokeExtension::ParametersMatch(m, arguments);
}

// public static object TryInvoke(Uno.Reflection.IFunction mi, object obj, object[] value) :373
void TryInvokeExtension__TryInvoke_fn(uObject* mi, uObject* obj, uArray* value, uObject** __retval)
{
    *__retval = TryInvokeExtension::TryInvoke(mi, obj, value);
}

// public static Uno.Reflection.IFunction FindUnambiguousMethod(Uno.Type type, string methodName, object[] arguments) [static] :262
uObject* TryInvokeExtension::FindUnambiguousMethod(uType* type, uString* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "FindUnambiguousMethod(Uno.Type,string,object[])");
    uArray* array1;
    int32_t index2;
    int32_t length3;
    uObject* ret7;
    ::g::Uno::Collections::List* methods = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[74/*Uno.Collections.List<Uno.Reflection.IFunction>*/]);

    for (uType* t = type; ::g::Uno::Type::op_Inequality(t, NULL); t = ::g::Uno::Type::BaseType(uPtr(t)))
    {
        for (array1 = TryInvokeExtension::GetMethods(t), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            uFunction* m = uPtr(array1)->Item<uFunction*>(index2);

            if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppFunction::Name(m), methodName) && TryInvokeExtension::ParametersMatch(uBox(::g::Uno::Reflection::CppFunction_typeof(), m), arguments))
                ::g::Uno::Collections::List__Add_fn(uPtr(methods), uBox(::g::Uno::Reflection::CppFunction_typeof(), m));

            if (uPtr(methods)->Count() >= 2)
                break;
        }

        if (uPtr(methods)->Count() > 0)
            break;
    }

    if (methods->Count() == 0)
        U_THROW(::g::Outracks::Simulator::Runtime::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), methodName));

    if (methods->Count() > 1)
        U_THROW(::g::Outracks::Simulator::Runtime::UnambiguousMethodNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), methodName));

    return (::g::Uno::Collections::List__get_Item_fn(methods, uCRef<int32_t>(0), &ret7), ret7);
}

// public static Outracks.Simulator.Client.IEvent GetEvent(Uno.Type type, string name, Uno.Type propertyType) [static] :363
uObject* TryInvokeExtension::GetEvent(uType* type, uString* name, uType* propertyType)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "GetEvent(Uno.Type,string,Uno.Type)");
    return (uObject*)::g::Outracks::Simulator::Client::CppEvent::New1(type, propertyType, name);
}

// public static Uno.Reflection.IField GetField(Uno.Type type, string name) [static] :355
uObject* TryInvokeExtension::GetField(uType* type, uString* name)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "GetField(Uno.Type,string)");

    if (::g::Uno::Type::op_Equality(type, NULL))
        return NULL;

    uField* f = ::g::Uno::Reflection::CppReflection::FindField(type, name);
    return ::g::Uno::Reflection::CppField::IsNull(f) ? (uObject*)TryInvokeExtension::GetField(::g::Uno::Type::BaseType(uPtr(type)), name) : uBox(::g::Uno::Reflection::CppField_typeof(), f);
}

// public static Uno.Reflection.IFunction GetMethod(Uno.Type type, string name, Uno.Type[] parameterTypes) [static] :317
uObject* TryInvokeExtension::GetMethod(uType* type, uString* name, uArray* parameterTypes)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "GetMethod(Uno.Type,string,Uno.Type[])");
    uArray* array4;
    int32_t index5;
    int32_t length6;

    for (uType* t = type; ::g::Uno::Type::op_Inequality(t, NULL); t = ::g::Uno::Type::BaseType(uPtr(t)))

        for (array4 = TryInvokeExtension::GetMethods(t), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
        {
            uFunction* f = uPtr(array4)->Item<uFunction*>(index5);

            if (::g::Uno::String::op_Inequality(::g::Uno::Reflection::CppFunction::Name(f), name) || (uPtr(::g::Uno::Reflection::CppFunction::ParameterTypes(f))->Length() != uPtr(parameterTypes)->Length()))
                continue;

            bool found = true;

            for (int32_t i = 0; i < uPtr(parameterTypes)->Length(); i++)
                if (::g::Uno::Type::op_Inequality(uPtr(parameterTypes)->Strong<uType*>(i), NULL) && !::g::Uno::Type::IsSubclassOf(uPtr(uPtr(parameterTypes)->Strong<uType*>(i)), uPtr(::g::Uno::Reflection::CppFunction::ParameterTypes(f))->Strong<uType*>(i)))
                {
                    found = false;
                    break;
                }

            if (found)
                return uBox(::g::Uno::Reflection::CppFunction_typeof(), f);
        }

    return NULL;
}

// public static Uno.Reflection.CppFunction[] GetMethods(Uno.Type type) [static] :345
uArray* TryInvokeExtension::GetMethods(uType* type)
{
    return ::g::Uno::Reflection::CppReflection::GetFunctions(type);
}

// public static Outracks.Simulator.Client.IProperty GetProperty(Uno.Type type, string name, Uno.Type propertyType) [static] :350
uObject* TryInvokeExtension::GetProperty(uType* type, uString* name, uType* propertyType)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "GetProperty(Uno.Type,string,Uno.Type)");
    return (uObject*)::g::Outracks::Simulator::Client::CppProperty::New1(type, propertyType, name);
}

// public static bool IsInstanceOfType(Uno.Type type, object obj) [static] :368
bool TryInvokeExtension::IsInstanceOfType(uType* type, uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "IsInstanceOfType(Uno.Type,object)");
    return ::g::Uno::Type::IsSubclassOf(uPtr(::g::Uno::Object::GetType(uPtr(obj))), type);
}

// public static bool ParametersMatch(Uno.Reflection.IFunction m, object[] arguments) [static] :290
bool TryInvokeExtension::ParametersMatch(uObject* m, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "ParametersMatch(Uno.Reflection.IFunction,object[])");
    uArray* prms = ::g::Uno::Reflection::IFunction::ParameterTypes(uInterface(uPtr(m), ::TYPES[50/*Uno.Reflection.IFunction*/]));

    if (uPtr(prms)->Length() != uPtr(arguments)->Length())
        return false;

    for (int32_t i = 0; i < uPtr(prms)->Length(); i++)
    {
        uType* param = uPtr(prms)->Strong<uType*>(i);
        uObject* arg = uPtr(arguments)->Strong<uObject*>(i);

        if (arg == NULL)
        {
            if (::g::Uno::Type::IsValueType(uPtr(param)))
                return false;
        }
        else
        {
            if (!TryInvokeExtension::IsInstanceOfType(param, arg))
                return false;
        }
    }

    return true;
}

// public static object TryInvoke(Uno.Reflection.IFunction mi, object obj, object[] value) [static] :373
uObject* TryInvokeExtension::TryInvoke(uObject* mi, uObject* obj, uArray* value)
{
    uStackFrame __("Outracks.Simulator.Client.TryInvokeExtension", "TryInvoke(Uno.Reflection.IFunction,object,object[])");
    return ::g::Uno::Reflection::IFunction::Invoke(uInterface(uPtr(mi), ::TYPES[50/*Uno.Reflection.IFunction*/]), obj, value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Uninitialized :23
// {
static void Uninitialized_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Try again");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    ::TYPES[75] = ::g::Outracks::Simulator::Client::Application_typeof();
}

::g::Outracks::Simulator::Client::State_type* Uninitialized_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.ObjectSize = sizeof(Uninitialized);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.Uninitialized", options);
    type->fp_build_ = Uninitialized_build;
    type->fp_ctor_ = (void*)Uninitialized__New1_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Uninitialized__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Uninitialized__OnUpdate_fn;
    return type;
}

// public generated Uninitialized() :23
void Uninitialized__ctor_1_fn(Uninitialized* __this)
{
    __this->ctor_1();
}

// public generated Uninitialized New() :23
void Uninitialized__New1_fn(Uninitialized** __retval)
{
    *__retval = Uninitialized::New1();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :33
void Uninitialized__OnException_fn(Uninitialized* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Uninitialized", "OnException(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(false, e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[18/*"Try again"*/], __this))), void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :25
void Uninitialized__OnUpdate_fn(Uninitialized* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Uninitialized", "OnUpdate()");

    if (uPtr(uCast< ::g::Outracks::Simulator::Client::Application*>(::g::Uno::Application::Current1(), ::TYPES[75/*Outracks.Simulator.Client.Application*/]))->Reflection() != NULL)
        return *__retval = ::g::Outracks::Simulator::Client::ConnectingToProxy::New1(), void();

    return *__retval = __this, void();
}

// public generated Uninitialized() [instance] :23
void Uninitialized::ctor_1()
{
    ctor_();
}

// public generated Uninitialized New() [static] :23
Uninitialized* Uninitialized::New1()
{
    Uninitialized* obj1 = (Uninitialized*)uNew(Uninitialized_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/UserAppState.uno
// ----------------------------------------------------------------------

// internal sealed class UserAppState :16
// {
static void UserAppState_build(uType* type)
{
    ::TYPES[76] = type->MakeMethod(1/*SetIfNotEqual<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[77] = type->MakeMethod(1/*SetIfNotEqual<Uno.UX.Resource>*/, ::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[78] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[79] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.UX.Resource>*/, ::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[80] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[81] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[82] = ::g::Uno::Collections::IListExtensions_typeof();
    ::TYPES[83] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[80/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[81/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*SequenceEquals<T>*/, type->MethodTypes[1]->U(0), NULL),
        type->MakeMethod(2/*SetSequence<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[80/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::TYPES[82/*Uno.Collections.IListExtensions*/]->MakeMethod(0/*AddRange<T>*/, type->MethodTypes[2]->U(0), NULL),
        ::TYPES[83/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(UserAppState, Background), 0,
        ::g::Fuse::Node_typeof()->Array(), offsetof(UserAppState, Children), 0,
        ::g::Uno::UX::Resource_typeof()->Array(), offsetof(UserAppState, Resources), 0,
        ::g::Uno::Float4_typeof(), offsetof(UserAppState, ClearColor), 0,
        type, (uintptr_t)&UserAppState::_Default_, uFieldFlagsStatic);
}

uType* UserAppState_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.MethodTypeCount = 3;
    options.ObjectSize = sizeof(UserAppState);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.UserAppState", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 3,0);
    type->fp_build_ = UserAppState_build;
    return type;
}

// public UserAppState(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) :29
void UserAppState__ctor__fn(UserAppState* __this, ::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor)
{
    __this->ctor_(*background, children, resources, *clearColor);
}

// public void ApplyTo(Outracks.Simulator.Client.FakeApp app) :53
void UserAppState__ApplyTo_fn(UserAppState* __this, ::g::Outracks::Simulator::Client::FakeApp* app)
{
    __this->ApplyTo(app);
}

// public static generated Outracks.Simulator.Client.UserAppState get_Default() :42
void UserAppState__get_Default_fn(UserAppState** __retval)
{
    *__retval = UserAppState::Default();
}

// public static generated void set_Default(Outracks.Simulator.Client.UserAppState value) :42
void UserAppState__set_Default_fn(UserAppState* value)
{
    UserAppState::Default(value);
}

// public UserAppState New(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) :29
void UserAppState__New1_fn(::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor, UserAppState** __retval)
{
    *__retval = UserAppState::New1(*background, children, resources, *clearColor);
}

// public static Outracks.Simulator.Client.UserAppState Save(Outracks.Simulator.Client.FakeApp app) :44
void UserAppState__Save_fn(::g::Outracks::Simulator::Client::FakeApp* app, UserAppState** __retval)
{
    *__retval = UserAppState::Save(app);
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) :73
void UserAppState__SequenceEquals_fn(uType* __type, uObject* left, uArray* right, bool* __retval)
{
    *__retval = UserAppState::SequenceEquals(__type, left, right);
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) :61
void UserAppState__SetIfNotEqual_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetIfNotEqual(__type, list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) :67
void UserAppState__SetSequence_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetSequence(__type, list, elements);
}

uSStrong<UserAppState*> UserAppState::_Default_;

// public UserAppState(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) [instance] :29
void UserAppState::ctor_(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor)
{
    Background = background;
    Children = children;
    Resources = resources;
    ClearColor = clearColor;
}

// public void ApplyTo(Outracks.Simulator.Client.FakeApp app) [instance] :53
void UserAppState::ApplyTo(::g::Outracks::Simulator::Client::FakeApp* app)
{
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "ApplyTo(Outracks.Simulator.Client.FakeApp)");

    if (::g::Uno::Float4__op_Inequality(uPtr(app)->Background1(), Background))
        uPtr(app)->Background1(Background);

    UserAppState::SetIfNotEqual(::TYPES[76/*Outracks.Simulator.Client.UserAppState.SetIfNotEqual<Fuse.Node>*/], uPtr(app)->Children(), Children);
    UserAppState::SetIfNotEqual(::TYPES[77/*Outracks.Simulator.Client.UserAppState.SetIfNotEqual<Uno.UX.Resource>*/], app->Resources1(), Resources);

    if (::g::Uno::Float4__op_Inequality(app->ClearColor(), ClearColor))
        uPtr(app)->ClearColor(ClearColor);
}

// public UserAppState New(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) [static] :29
UserAppState* UserAppState::New1(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor)
{
    UserAppState* obj1 = (UserAppState*)uNew(UserAppState_typeof());
    obj1->ctor_(background, children, resources, clearColor);
    return obj1;
}

// public static Outracks.Simulator.Client.UserAppState Save(Outracks.Simulator.Client.FakeApp app) [static] :44
UserAppState* UserAppState::Save(::g::Outracks::Simulator::Client::FakeApp* app)
{
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "Save(Outracks.Simulator.Client.FakeApp)");
    return UserAppState::New1(uPtr(app)->Background1(), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[78/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], uPtr(app)->Children()), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[79/*Uno.Collections.EnumerableExtensions.ToArray<Uno.UX.Resource>*/], uPtr(app)->Resources1()), uPtr(app)->ClearColor());
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) [static] :73
bool UserAppState::SequenceEquals(uType* __type, uObject* left, uArray* right)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "SequenceEquals`1(Uno.Collections.IList<T>,T[])");
    uT ret2(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(left), __types[0])) != uPtr(right)->Length())
        return false;

    for (int32_t i = 0; i < uPtr(right)->Length(); i++)
        if (uBoxPtr(__type->U(0), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(left), __types[1]), uCRef<int32_t>(i), &ret2), ret2)) != uBoxPtr(__type->U(0), uPtr(right)->TItem(i)))
            return false;

    return true;
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) [static] :61
void UserAppState::SetIfNotEqual(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.Client.UserAppState.SequenceEquals<T>*/),
        __type->Precalced(1/*Outracks.Simulator.Client.UserAppState.SetSequence<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "SetIfNotEqual`1(Uno.Collections.IList<T>,T[])");

    if (!UserAppState::SequenceEquals(__types[0], list, elements))
        UserAppState::SetSequence(__types[1], list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) [static] :67
void UserAppState::SetSequence(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IListExtensions.AddRange<T>*/),
        __type->Precalced(2/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "SetSequence`1(Uno.Collections.IList<T>,T[])");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(list), __types[0]));
    ::g::Uno::Collections::IListExtensions::AddRange(__types[1], list, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[2], elements)));
}

// public static generated Outracks.Simulator.Client.UserAppState get_Default() [static] :42
UserAppState* UserAppState::Default()
{
    return UserAppState::_Default_;
}

// public static generated void set_Default(Outracks.Simulator.Client.UserAppState value) [static] :42
void UserAppState::Default(UserAppState* value)
{
    UserAppState::_Default_ = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// public static class VirtualMachine :327
// {
static void VirtualMachine_build(uType* type)
{
    ::TYPES[75] = ::g::Outracks::Simulator::Client::Application_typeof();
    ::TYPES[84] = ::g::Outracks::Optional_typeof()->MakeMethod(0/*None<Outracks.Simulator.Runtime.Environment>*/, ::g::Outracks::Simulator::Runtime::Environment_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)VirtualMachine__Execute_fn, 0, true, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array()),
        new uFunction("Execute", NULL, (void*)VirtualMachine__Execute1_fn, 0, true, uObject_typeof(), 3, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array()));
}

uClassType* VirtualMachine_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.VirtualMachine", options);
    type->fp_build_ = VirtualMachine_build;
    return type;
}

// public static object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :330
void VirtualMachine__Execute_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = VirtualMachine::Execute(lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Runtime.IReflection reflection, Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :335
void VirtualMachine__Execute1_fn(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = VirtualMachine::Execute1(reflection, lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [static] :330
uObject* VirtualMachine::Execute(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.VirtualMachine", "Execute(Outracks.Simulator.Bytecode.Lambda,object[])");
    return VirtualMachine::Execute1(uPtr(uCast< ::g::Outracks::Simulator::Client::Application*>(::g::Uno::Application::Current1(), ::TYPES[75/*Outracks.Simulator.Client.Application*/]))->Reflection(), lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Runtime.IReflection reflection, Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [static] :335
uObject* VirtualMachine::Execute1(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.VirtualMachine", "Execute(Outracks.Simulator.Runtime.IReflection,Outracks.Simulator.Bytecode.Lambda,object[])");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Runtime::Environment*> > ret1;
    return ::g::Outracks::Simulator::Runtime::ScopeClosure::New1(::g::Outracks::Simulator::Runtime::Environment::New1((::g::Outracks::Optional__None1_fn(::TYPES[84/*Outracks.Optional.None<Outracks.Simulator.Runtime.Environment>*/], &ret1), ret1)), reflection)->Execute1(lambda, arguments);
}
// }

}}}} // ::g::Outracks::Simulator::Client
