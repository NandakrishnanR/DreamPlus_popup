// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FusePreviewCore_FuseElementsElement_Opacity_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Outracks.BinaryMessage.h>
#include <Outracks.IBinaryMessage.h>
#include <Outracks.Optional.h>
#include <Outracks.Optional1-1.h>
#include <Outracks.Simulator.Apply-1.h>
#include <Outracks.Simulator.ApplyFirst-2.h>
#include <Outracks.Simulator.ApplySecond-2.h>
#include <Outracks.Simulator.CharacterNumber.h>
#include <Outracks.Simulator.Closure.h>
#include <Outracks.Simulator.ConcurrentQueue-1.h>
#include <Outracks.Simulator.ConnectToEndpointClosure.h>
#include <Outracks.Simulator.ConnectToFirstRespondingEndpoint.h>
#include <Outracks.Simulator.DesignerNotRunning.h>
#include <Outracks.Simulator.DeveloperMenu.h>
#include <Outracks.Simulator.DummyApplication.h>
#include <Outracks.Simulator.EmptyClass.h>
#include <Outracks.Simulator.FailedToConnectToEndPoint.h>
#include <Outracks.Simulator.FailedToConnectToProxy.h>
#include <Outracks.Simulator.FailedToConnectToSimulator.h>
#include <Outracks.Simulator.Forget1-3.h>
#include <Outracks.Simulator.Forget-2.h>
#include <Outracks.Simulator.ForgetAction-1.h>
#include <Outracks.Simulator.ForgetAction1-2.h>
#include <Outracks.Simulator.GetSimulatorEndpoint.h>
#include <Outracks.Simulator.GuidSerializer.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.IndentString.h>
#include <Outracks.Simulator.ISimulatorClient.h>
#include <Outracks.Simulator.LineNumber.h>
#include <Outracks.Simulator.List.h>
#include <Outracks.Simulator.ObjectIdentifier.h>
#include <Outracks.Simulator.OfflineSimulatorClient.h>
#include <Outracks.Simulator.Protocol.Error.h>
#include <Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <Outracks.Simulator.ProxyClient.h>
#include <Outracks.Simulator.Serialization.h>
#include <Outracks.Simulator.SimulatorClient.h>
#include <Outracks.Simulator.SourceReference.h>
#include <Outracks.Simulator.SourceReferenceCanonicalization.h>
#include <Outracks.Simulator.StringSplitting.h>
#include <Outracks.Simulator.Task-1.h>
#include <Outracks.Simulator.Tasks.h>
#include <Outracks.Simulator.TaskThread-1.h>
#include <Outracks.Simulator.TextOffset.h>
#include <Outracks.Simulator.TextOffsetConversion.h>
#include <Outracks.Simulator.TextPosition.h>
#include <Outracks.Simulator.ToIndentedLinesExtension.h>
#include <Outracks.Simulator.WaitForFirstResult-1.h>
#include <System.IO.BinaryReader.h>
#include <System.IO.BinaryWriter.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Func-1.h>
#include <Uno.Func1-2.h>
#include <Uno.Guid.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.IO.Stream.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.NetworkStream.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.SelectMode.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketShutdown.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[35];
static uType* TYPES[72];

namespace g{
namespace Outracks{
namespace Simulator{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// internal sealed class Apply<TArg1> :106
// {
static void Apply_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(Apply, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Apply_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Apply);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Apply`1", options);
    type->fp_build_ = Apply_build;
    return type;
}

// public Apply(Uno.Action<TArg1> action, TArg1 arg1) :111
void Apply__ctor__fn(Apply* __this, uDelegate* action, void* arg1)
{
    __this->_action = action;
    __this->_arg1() = arg1;
}

// public void Execute() :117
void Apply__Execute_fn(Apply* __this)
{
    __this->Execute();
}

// public Apply New(Uno.Action<TArg1> action, TArg1 arg1) :111
void Apply__New1_fn(uType* __type, uDelegate* action, void* arg1, Apply** __retval)
{
    Apply* obj1 = (Apply*)uNew(__type);
    Apply__ctor__fn(obj1, action, arg1);
    return *__retval = obj1, void();
}

// public void Execute() [instance] :117
void Apply::Execute()
{
    uStackFrame __("Outracks.Simulator.Apply`1", "Execute()");
    uPtr(_action)->InvokeVoid(_arg1());
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// internal sealed class ApplyFirst<TArg1, TArg2> :123
// {
static void ApplyFirst_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(ApplyFirst, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ApplyFirst_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ApplyFirst);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ApplyFirst`2", options);
    type->fp_build_ = ApplyFirst_build;
    return type;
}

// public ApplyFirst(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :127
void ApplyFirst__ctor__fn(ApplyFirst* __this, uDelegate* action, void* arg1)
{
    __this->_action = action;
    __this->_arg1() = arg1;
}

// public void Execute(TArg2 arg2) :133
void ApplyFirst__Execute_fn(ApplyFirst* __this, void* arg2)
{
    uStackFrame __("Outracks.Simulator.ApplyFirst`2", "Execute(TArg2)");
    uPtr(__this->_action)->Invoke(2, (void*)__this->_arg1(), arg2);
}

// public ApplyFirst New(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :127
void ApplyFirst__New1_fn(uType* __type, uDelegate* action, void* arg1, ApplyFirst** __retval)
{
    ApplyFirst* obj1 = (ApplyFirst*)uNew(__type);
    ApplyFirst__ctor__fn(obj1, action, arg1);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// internal sealed class ApplySecond<TArg1, TArg2> :139
// {
static void ApplySecond_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(ApplySecond, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ApplySecond_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ApplySecond);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ApplySecond`2", options);
    type->fp_build_ = ApplySecond_build;
    return type;
}

// public ApplySecond(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :143
void ApplySecond__ctor__fn(ApplySecond* __this, uDelegate* action, void* arg2)
{
    __this->_action = action;
    __this->_arg2() = arg2;
}

// public void Execute(TArg1 arg1) :149
void ApplySecond__Execute_fn(ApplySecond* __this, void* arg1)
{
    uStackFrame __("Outracks.Simulator.ApplySecond`2", "Execute(TArg1)");
    uPtr(__this->_action)->Invoke(2, arg1, (void*)__this->_arg2());
}

// public ApplySecond New(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :143
void ApplySecond__New1_fn(uType* __type, uDelegate* action, void* arg2, ApplySecond** __retval)
{
    ApplySecond* obj1 = (ApplySecond*)uNew(__type);
    ApplySecond__ctor__fn(obj1, action, arg2);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/CharacterNumber.cs
// -------------------------------------------------------------------------------------------

// public struct CharacterNumber :11
// {
static void CharacterNumber_build(uType* type)
{
    ::STRINGS[0] = uString::Const("character");
    ::STRINGS[1] = uString::Const("CharacterNumber must be >= 1");
    ::TYPES[0] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[0/*int*/], offsetof(CharacterNumber, _characterMinusOne), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Equals", NULL, (void*)CharacterNumber__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)CharacterNumber__New1_fn, 0, true, type, 1, ::TYPES[0/*int*/]));
}

uStructType* CharacterNumber_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.Alignment = alignof(CharacterNumber);
    options.ValueSize = sizeof(CharacterNumber);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Outracks.Simulator.CharacterNumber", options);
    type->fp_build_ = CharacterNumber_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))CharacterNumber__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))CharacterNumber__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))CharacterNumber__ToString_fn;
    return type;
}

// public CharacterNumber(int character) :15
void CharacterNumber__ctor__fn(CharacterNumber* __this, int32_t* character)
{
    __this->ctor_(*character);
}

// public override sealed bool Equals(object obj) :36
void CharacterNumber__Equals_fn(CharacterNumber* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.CharacterNumber", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    return *__retval = uIs(obj, __type) && __this->Equals2(uUnbox<CharacterNumber>(__type, obj)), void();
}

// public bool Equals(Outracks.Simulator.CharacterNumber other) :31
void CharacterNumber__Equals2_fn(CharacterNumber* __this, CharacterNumber* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public override sealed int GetHashCode() :42
void CharacterNumber__GetHashCode_fn(CharacterNumber* __this, uType* __type, int32_t* __retval)
{
    return *__retval = __this->_characterMinusOne, void();
}

// public CharacterNumber New(int character) :15
void CharacterNumber__New1_fn(int32_t* character, CharacterNumber* __retval)
{
    *__retval = CharacterNumber__New1(*character);
}

// public static operator ==(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) :47
void CharacterNumber__op_Equality_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval)
{
    *__retval = CharacterNumber__op_Equality(*left, *right);
}

// public static operator >(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) :62
void CharacterNumber__op_GreaterThan_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval)
{
    *__retval = CharacterNumber__op_GreaterThan(*left, *right);
}

// public static operator >=(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) :72
void CharacterNumber__op_GreaterThanOrEqual_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval)
{
    *__retval = CharacterNumber__op_GreaterThanOrEqual(*left, *right);
}

// public static implicit operator int(Outracks.Simulator.CharacterNumber line) :21
void CharacterNumber__op_Implicit1_fn(CharacterNumber* line, int32_t* __retval)
{
    *__retval = CharacterNumber__op_Implicit1(*line);
}

// public static operator !=(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) :52
void CharacterNumber__op_Inequality_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval)
{
    *__retval = CharacterNumber__op_Inequality(*left, *right);
}

// public static operator <(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) :57
void CharacterNumber__op_LessThan_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval)
{
    *__retval = CharacterNumber__op_LessThan(*left, *right);
}

// public static operator <=(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) :67
void CharacterNumber__op_LessThanOrEqual_fn(CharacterNumber* left, CharacterNumber* right, bool* __retval)
{
    *__retval = CharacterNumber__op_LessThanOrEqual(*left, *right);
}

// public override sealed string ToString() :26
void CharacterNumber__ToString_fn(CharacterNumber* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.CharacterNumber", "ToString()");
    return *__retval = ::g::Uno::Int::ToString(CharacterNumber__op_Implicit1(*__this), ::TYPES[0/*int*/]), void();
}

// public CharacterNumber(int character) [instance] :15
void CharacterNumber::ctor_(int32_t character)
{
    uStackFrame __("Outracks.Simulator.CharacterNumber", ".ctor(int)");

    if (character <= 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[0/*"character"*/], ::STRINGS[1/*"CharacterNu...*/]));

    _characterMinusOne = (character - 1);
}

// public bool Equals(Outracks.Simulator.CharacterNumber other) [instance] :31
bool CharacterNumber::Equals2(CharacterNumber other)
{
    return _characterMinusOne == other._characterMinusOne;
}

// public CharacterNumber New(int character) [static] :15
CharacterNumber CharacterNumber__New1(int32_t character)
{
    CharacterNumber obj1;
    obj1.ctor_(character);
    return obj1;
}

// public static operator ==(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) [static] :47
bool CharacterNumber__op_Equality(CharacterNumber left, CharacterNumber right)
{
    return left.Equals2(right);
}

// public static operator >(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) [static] :62
bool CharacterNumber__op_GreaterThan(CharacterNumber left, CharacterNumber right)
{
    return left._characterMinusOne > right._characterMinusOne;
}

// public static operator >=(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) [static] :72
bool CharacterNumber__op_GreaterThanOrEqual(CharacterNumber left, CharacterNumber right)
{
    return left._characterMinusOne >= right._characterMinusOne;
}

// public static implicit operator int(Outracks.Simulator.CharacterNumber line) [static] :21
int32_t CharacterNumber__op_Implicit1(CharacterNumber line)
{
    return line._characterMinusOne + 1;
}

// public static operator !=(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) [static] :52
bool CharacterNumber__op_Inequality(CharacterNumber left, CharacterNumber right)
{
    return !left.Equals2(right);
}

// public static operator <(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) [static] :57
bool CharacterNumber__op_LessThan(CharacterNumber left, CharacterNumber right)
{
    return left._characterMinusOne < right._characterMinusOne;
}

// public static operator <=(Outracks.Simulator.CharacterNumber left, Outracks.Simulator.CharacterNumber right) [static] :67
bool CharacterNumber__op_LessThanOrEqual(CharacterNumber left, CharacterNumber right)
{
    return left._characterMinusOne <= right._characterMinusOne;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// public static class Closure :8
// {
static void Closure_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Outracks::Simulator::Apply_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof();
    ::TYPES[4] = ::g::Outracks::Simulator::ApplyFirst_typeof();
    ::TYPES[5] = ::g::Outracks::Simulator::ApplySecond_typeof();
    ::TYPES[6] = ::g::Uno::Action2_typeof();
    ::TYPES[7] = ::g::Outracks::Simulator::ForgetAction1_typeof();
    ::TYPES[8] = ::g::Uno::Func1_typeof();
    ::TYPES[9] = ::g::Outracks::Simulator::Forget_typeof();
    ::TYPES[10] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[11] = ::g::Outracks::Simulator::ForgetAction_typeof()->MakeType(::g::Uno::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::EventHandler_typeof();
    ::TYPES[13] = ::TYPES[7/*Outracks.Simulator.ForgetAction`2*/]->MakeType(uObject_typeof(), ::g::Uno::EventArgs_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[2/*Outracks.Simulator.Apply`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[3/*Uno.Action`1*/]->MakeType(type->MethodTypes[1]->U(1), NULL),
        ::TYPES[4/*Outracks.Simulator.ApplyFirst`2*/]->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[3/*Uno.Action`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::TYPES[5/*Outracks.Simulator.ApplySecond`2*/]->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[6/*Uno.Action`2*/]->MakeType(type->MethodTypes[3]->U(0), type->MethodTypes[3]->U(1), NULL),
        ::TYPES[7/*Outracks.Simulator.ForgetAction`2*/]->MakeType(type->MethodTypes[3]->U(0), type->MethodTypes[3]->U(1), NULL));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[8/*Uno.Func`2*/]->MakeType(type->MethodTypes[4]->U(0), type->MethodTypes[4]->U(1), NULL),
        ::TYPES[9/*Outracks.Simulator.Forget`2*/]->MakeType(type->MethodTypes[4]->U(0), type->MethodTypes[4]->U(1), NULL));
    type->Reflection.SetFunctions(7,
        new uFunction("Apply`1", type->MethodTypes[0], (void*)Closure__Apply_fn, 0, true, ::TYPES[1/*Uno.Action*/], 2, ::TYPES[3/*Uno.Action`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL), type->MethodTypes[0]->U(0)),
        new uFunction("ApplyFirst`2", type->MethodTypes[1], (void*)Closure__ApplyFirst_fn, 0, true, ::TYPES[3/*Uno.Action`1*/]->MakeType(type->MethodTypes[1]->U(1), NULL), 2, ::TYPES[6/*Uno.Action`2*/]->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL), type->MethodTypes[1]->U(0)),
        new uFunction("ApplySecond`2", type->MethodTypes[2], (void*)Closure__ApplySecond_fn, 0, true, ::TYPES[3/*Uno.Action`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL), 2, ::TYPES[6/*Uno.Action`2*/]->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), NULL), type->MethodTypes[2]->U(1)),
        new uFunction("Forget`2", type->MethodTypes[3], (void*)Closure__Forget_fn, 0, true, ::TYPES[6/*Uno.Action`2*/]->MakeType(type->MethodTypes[3]->U(0), type->MethodTypes[3]->U(1), NULL), 1, ::TYPES[1/*Uno.Action*/]),
        new uFunction("Return`2", type->MethodTypes[4], (void*)Closure__Return_fn, 0, true, ::TYPES[8/*Uno.Func`2*/]->MakeType(type->MethodTypes[4]->U(0), type->MethodTypes[4]->U(1), NULL), 1, type->MethodTypes[4]->U(1)),
        new uFunction("ToAppStateChangeHandler", NULL, (void*)Closure__ToAppStateChangeHandler_fn, 0, true, ::TYPES[10/*Uno.Platform.ApplicationStateTransitionHandler*/], 1, ::TYPES[1/*Uno.Action*/]),
        new uFunction("ToEventHandler", NULL, (void*)Closure__ToEventHandler_fn, 0, true, ::TYPES[12/*Uno.EventHandler*/], 1, ::TYPES[1/*Uno.Action*/]));
}

uClassType* Closure_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Closure", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(2, 2,0);
    type->MethodTypes[2] = type->NewMethodType(2, 2,0);
    type->MethodTypes[3] = type->NewMethodType(2, 2,0);
    type->MethodTypes[4] = type->NewMethodType(2, 2,0);
    type->fp_build_ = Closure_build;
    return type;
}

// public static Uno.Action Apply<T>(Uno.Action<T> action, T arg) :25
void Closure__Apply_fn(uType* __type, uDelegate* action, void* arg, uDelegate** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.Apply<T>*/),
    };
    ::g::Outracks::Simulator::Apply* ret1;
    return *__retval = uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)::g::Outracks::Simulator::Apply__Execute_fn, (::g::Outracks::Simulator::Apply__New1_fn(__types[0], action, arg, &ret1), ret1)), void();
}

// public static Uno.Action<TArg2> ApplyFirst<TArg1, TArg2>(Uno.Action<TArg1, TArg2> action, TArg1 arg1) :10
void Closure__ApplyFirst_fn(uType* __type, uDelegate* action, void* arg1, uDelegate** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TArg2>*/),
        __type->Precalced(1/*Outracks.Simulator.ApplyFirst<TArg1, TArg2>*/),
    };
    ::g::Outracks::Simulator::ApplyFirst* ret2;
    return *__retval = uDelegate::New(__types[0], (void*)::g::Outracks::Simulator::ApplyFirst__Execute_fn, (::g::Outracks::Simulator::ApplyFirst__New1_fn(__types[1], action, arg1, &ret2), ret2)), void();
}

// public static Uno.Action<TArg1> ApplySecond<TArg1, TArg2>(Uno.Action<TArg1, TArg2> action, TArg2 arg2) :15
void Closure__ApplySecond_fn(uType* __type, uDelegate* action, void* arg2, uDelegate** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TArg1>*/),
        __type->Precalced(1/*Outracks.Simulator.ApplySecond<TArg1, TArg2>*/),
    };
    ::g::Outracks::Simulator::ApplySecond* ret3;
    return *__retval = uDelegate::New(__types[0], (void*)::g::Outracks::Simulator::ApplySecond__Execute_fn, (::g::Outracks::Simulator::ApplySecond__New1_fn(__types[1], action, arg2, &ret3), ret3)), void();
}

// public static Uno.Action<TArg1, TArg2> Forget<TArg1, TArg2>(Uno.Action action) :30
void Closure__Forget_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = Closure::Forget(__type, action);
}

// public static Uno.Func<TArg, TResult> Return<TArg, TResult>(TResult result) :20
void Closure__Return_fn(uType* __type, void* result, uDelegate** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Func<TArg, TResult>*/),
        __type->Precalced(1/*Outracks.Simulator.Forget<TArg, TResult>*/),
    };
    ::g::Outracks::Simulator::Forget* ret4;
    return *__retval = uDelegate::New(__types[0], (void*)::g::Outracks::Simulator::Forget__Execute_fn, (::g::Outracks::Simulator::Forget__New1_fn(__types[1], result, &ret4), ret4)), void();
}

// public static Uno.Platform.ApplicationStateTransitionHandler ToAppStateChangeHandler(Uno.Action action) :40
void Closure__ToAppStateChangeHandler_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = Closure::ToAppStateChangeHandler(action);
}

// public static Uno.EventHandler ToEventHandler(Uno.Action action) :35
void Closure__ToEventHandler_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = Closure::ToEventHandler(action);
}

// public static Uno.Action<TArg1, TArg2> Forget<TArg1, TArg2>(Uno.Action action) [static] :30
uDelegate* Closure::Forget(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TArg1, TArg2>*/),
        __type->Precalced(1/*Outracks.Simulator.ForgetAction<TArg1, TArg2>*/),
    };
    return uDelegate::New(__types[0], (void*)::g::Outracks::Simulator::ForgetAction1__Execute_fn, (::g::Outracks::Simulator::ForgetAction1*)::g::Outracks::Simulator::ForgetAction1::New1(__types[1], action));
}

// public static Uno.Platform.ApplicationStateTransitionHandler ToAppStateChangeHandler(Uno.Action action) [static] :40
uDelegate* Closure::ToAppStateChangeHandler(uDelegate* action)
{
    return uDelegate::New(::TYPES[10/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)::g::Outracks::Simulator::ForgetAction__Execute_fn, (::g::Outracks::Simulator::ForgetAction*)::g::Outracks::Simulator::ForgetAction::New1(::TYPES[11/*Outracks.Simulator.ForgetAction<Uno.Platform.ApplicationState>*/], action));
}

// public static Uno.EventHandler ToEventHandler(Uno.Action action) [static] :35
uDelegate* Closure::ToEventHandler(uDelegate* action)
{
    return uDelegate::New(::TYPES[12/*Uno.EventHandler*/], (void*)::g::Outracks::Simulator::ForgetAction1__Execute_fn, (::g::Outracks::Simulator::ForgetAction1*)::g::Outracks::Simulator::ForgetAction1::New1(::TYPES[13/*Outracks.Simulator.ForgetAction<object, Uno.EventArgs>*/], action));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/ConcurrentQueue.cs
// -------------------------------------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :8
// {
static void ConcurrentQueue_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[14/*Uno.Collections.Queue`1*/]->MakeType(type->T(0), NULL), offsetof(ConcurrentQueue, _queue), 0,
        uObject_typeof(), offsetof(ConcurrentQueue, _mutex), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Enqueue", NULL, (void*)ConcurrentQueue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)ConcurrentQueue__New1_fn, 0, true, type, 0),
        new uFunction("TryDequeue", NULL, (void*)ConcurrentQueue__TryDequeue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
}

uType* ConcurrentQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ConcurrentQueue`1", options);
    type->fp_build_ = ConcurrentQueue_build;
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    return type;
}

// public ConcurrentQueue() :13
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public void Enqueue(T data) :19
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* data)
{
    uStackFrame __("Outracks.Simulator.ConcurrentQueue`1", "Enqueue(T)");
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        try
        {
            {
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), data);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        }
        __after_finally_0:;
    }
}

// public ConcurrentQueue New() :13
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& data) :25
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef data, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.ConcurrentQueue`1", "TryDequeue(T&)");
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    bool result = false;
    data.Default(__this->__type->T(0));
    ::g::Uno::Threading::Monitor::Enter(__this->_mutex);

    {
        try
        {
            {
                if (uPtr(__this->_queue)->Count() != 0)
                {
                    data.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
                    result = true;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(__this->_mutex);
        }
        __after_finally_1:;
    }

    return *__retval = result, void();
}

// public ConcurrentQueue() [instance] :13
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Object::New();
}

// public ConcurrentQueue New() [static] :13
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// internal sealed class ConnectToEndpointClosure :107
// {
static void ConnectToEndpointClosure_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Connection already established");
    ::TYPES[15] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof(), offsetof(ConnectToEndpointClosure, _endpoint), 0,
        ::g::Uno::Threading::EventWaitHandle_typeof(), offsetof(ConnectToEndpointClosure, _isNotConnected), 0);
}

uType* ConnectToEndpointClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConnectToEndpointClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ConnectToEndpointClosure", options);
    type->fp_build_ = ConnectToEndpointClosure_build;
    return type;
}

// public ConnectToEndpointClosure(Uno.Net.IPEndPoint endpoint, Uno.Threading.EventWaitHandle isNotConnected) :112
void ConnectToEndpointClosure__ctor__fn(ConnectToEndpointClosure* __this, ::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Threading::EventWaitHandle* isNotConnected)
{
    __this->ctor_(endpoint, isNotConnected);
}

// public Uno.Net.Sockets.Socket Execute() :118
void ConnectToEndpointClosure__Execute_fn(ConnectToEndpointClosure* __this, ::g::Uno::Net::Sockets::Socket** __retval)
{
    *__retval = __this->Execute();
}

// public ConnectToEndpointClosure New(Uno.Net.IPEndPoint endpoint, Uno.Threading.EventWaitHandle isNotConnected) :112
void ConnectToEndpointClosure__New1_fn(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Threading::EventWaitHandle* isNotConnected, ConnectToEndpointClosure** __retval)
{
    *__retval = ConnectToEndpointClosure::New1(endpoint, isNotConnected);
}

// public ConnectToEndpointClosure(Uno.Net.IPEndPoint endpoint, Uno.Threading.EventWaitHandle isNotConnected) [instance] :112
void ConnectToEndpointClosure::ctor_(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Threading::EventWaitHandle* isNotConnected)
{
    _endpoint = endpoint;
    _isNotConnected = isNotConnected;
}

// public Uno.Net.Sockets.Socket Execute() [instance] :118
::g::Uno::Net::Sockets::Socket* ConnectToEndpointClosure::Execute()
{
    uStackFrame __("Outracks.Simulator.ConnectToEndpointClosure", "Execute()");

    try
    {
        {
            ::g::Uno::Net::Sockets::Socket* socket = ::g::Uno::Net::Sockets::Socket::New1(2, 1, 6);
            socket->Connect1(_endpoint);

            if (uPtr(_isNotConnected)->WaitOne1(0) == false)
            {
                uPtr(socket)->Dispose();
                U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Connection ...*/]));
            }

            return socket;
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::Simulator::FailedToConnectToEndPoint::New4(_endpoint, e));
    }
}

// public ConnectToEndpointClosure New(Uno.Net.IPEndPoint endpoint, Uno.Threading.EventWaitHandle isNotConnected) [static] :112
ConnectToEndpointClosure* ConnectToEndpointClosure::New1(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Threading::EventWaitHandle* isNotConnected)
{
    ConnectToEndpointClosure* obj1 = (ConnectToEndpointClosure*)uNew(ConnectToEndpointClosure_typeof());
    obj1->ctor_(endpoint, isNotConnected);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// public static class ConnectToFirstRespondingEndpoint :89
// {
static void ConnectToFirstRespondingEndpoint_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof(), NULL), NULL);
    ::TYPES[17] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[20] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(0/*Run<Uno.Net.Sockets.Socket>*/, ::g::Uno::Net::Sockets::Socket_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    ::TYPES[23] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1/*WaitForFirstResult<Uno.Net.Sockets.Socket>*/, ::g::Uno::Net::Sockets::Socket_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), ::g::Uno::Net::Sockets::Socket_typeof(), NULL);
    type->Reflection.SetFunctions(1,
        new uFunction("Execute", NULL, (void*)ConnectToFirstRespondingEndpoint__Execute_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof(), NULL), 1, ::TYPES[17/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/]));
}

uClassType* ConnectToFirstRespondingEndpoint_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.ConnectToFirstRespondingEndpoint", options);
    type->fp_build_ = ConnectToFirstRespondingEndpoint_build;
    return type;
}

// public static Outracks.Simulator.Task<Uno.Net.Sockets.Socket> Execute(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :91
void ConnectToFirstRespondingEndpoint__Execute_fn(uObject* simulatorEndpoints, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = ConnectToFirstRespondingEndpoint::Execute(simulatorEndpoints);
}

// private static Uno.Net.Sockets.Socket OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) :101
void ConnectToFirstRespondingEndpoint__OnNoResult_fn(uObject* exceptions, ::g::Uno::Net::Sockets::Socket** __retval)
{
    *__retval = ConnectToFirstRespondingEndpoint::OnNoResult(exceptions);
}

// public static Outracks.Simulator.Task<Uno.Net.Sockets.Socket> Execute(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [static] :91
::g::Outracks::Simulator::Task* ConnectToFirstRespondingEndpoint::Execute(uObject* simulatorEndpoints)
{
    uStackFrame __("Outracks.Simulator.ConnectToFirstRespondingEndpoint", "Execute(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>)");
    ::g::Uno::Net::IPEndPoint* ret2;
    ::g::Uno::Threading::AutoResetEvent* isNotConnected = ::g::Uno::Threading::AutoResetEvent::New2(true);
    ::g::Uno::Collections::List* socketTasks = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[16/*Uno.Collections.List<Outracks.Simulator.Task<Uno.Net.Sockets.Socket>>*/]);
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(simulatorEndpoints), ::TYPES[17/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::Net::IPEndPoint* endpoint = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[19/*Uno.Collections.IEnumerator<Uno.Net.IPEndPoint>*/]), &ret2), ret2);
                    ::g::Uno::Collections::List__Add_fn(uPtr(socketTasks), (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::Run(::TYPES[20/*Outracks.Simulator.Tasks.Run<Uno.Net.Sockets.Socket>*/], uDelegate::New(::TYPES[21/*Uno.Func<Uno.Net.Sockets.Socket>*/], (void*)::g::Outracks::Simulator::ConnectToEndpointClosure__Execute_fn, ::g::Outracks::Simulator::ConnectToEndpointClosure::New1(endpoint, isNotConnected))));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_2:;
    }

    return (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::WaitForFirstResult(::TYPES[23/*Outracks.Simulator.Tasks.WaitForFirstResult<Uno.Net.Sockets.Socket>*/], (uObject*)socketTasks, uDelegate::New(::TYPES[24/*Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, Uno.Net.Sockets.Socket>*/], (void*)ConnectToFirstRespondingEndpoint__OnNoResult_fn));
}

// private static Uno.Net.Sockets.Socket OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) [static] :101
::g::Uno::Net::Sockets::Socket* ConnectToFirstRespondingEndpoint::OnNoResult(uObject* exceptions)
{
    uStackFrame __("Outracks.Simulator.ConnectToFirstRespondingEndpoint", "OnNoResult(Uno.Collections.IEnumerable<Uno.Exception>)");
    U_THROW(::g::Outracks::Simulator::FailedToConnectToSimulator::New4(exceptions));
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ProxyClient.uno
// ---------------------------------------------------------------------

// public sealed class DesignerNotRunning :22
// {
static void DesignerNotRunning_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DesignerNotRunning__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* DesignerNotRunning_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DesignerNotRunning);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.DesignerNotRunning", options);
    type->fp_build_ = DesignerNotRunning_build;
    type->fp_ctor_ = (void*)DesignerNotRunning__New4_fn;
    return type;
}

// public generated DesignerNotRunning() :22
void DesignerNotRunning__ctor_3_fn(DesignerNotRunning* __this)
{
    __this->ctor_3();
}

// public generated DesignerNotRunning New() :22
void DesignerNotRunning__New4_fn(DesignerNotRunning** __retval)
{
    *__retval = DesignerNotRunning::New4();
}

// public generated DesignerNotRunning() [instance] :22
void DesignerNotRunning::ctor_3()
{
    ctor_();
}

// public generated DesignerNotRunning New() [static] :22
DesignerNotRunning* DesignerNotRunning::New4()
{
    DesignerNotRunning* obj1 = (DesignerNotRunning*)uNew(DesignerNotRunning_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/DeveloperMenu.ux.uno
// --------------------------------------------------------------------------

// public partial sealed class DeveloperMenu :4
// {
// static DeveloperMenu() :7
static void DeveloperMenu__cctor_4_fn(uType* __type)
{
    DeveloperMenu::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Opacity"*/]);
}

static void DeveloperMenu_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Opacity");
    ::STRINGS[4] = uString::Const("DeveloperMenu.ux");
    ::STRINGS[5] = uString::Const("Go back");
    ::STRINGS[6] = uString::Const("Fuse Preview Menu");
    ::STRINGS[7] = uString::Const("Tap to dismiss");
    ::TYPES[25] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[26] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[27] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Input::Keyboard_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(DeveloperMenu, this_Opacity_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DeveloperMenu::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DeveloperMenu__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* DeveloperMenu_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 122;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(DeveloperMenu);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Outracks.Simulator.DeveloperMenu", options);
    type->fp_build_ = DeveloperMenu_build;
    type->fp_ctor_ = (void*)DeveloperMenu__New4_fn;
    type->fp_cctor_ = DeveloperMenu__cctor_4_fn;
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

// public DeveloperMenu() :11
void DeveloperMenu__ctor_7_fn(DeveloperMenu* __this)
{
    __this->ctor_7();
}

// private void Close(object sender, Uno.EventArgs args) :11
void DeveloperMenu__Close_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->Close(sender, args);
}

// private void GoBack(object sender, Uno.EventArgs args) :6
void DeveloperMenu__GoBack_fn(DeveloperMenu* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->GoBack(sender, args);
}

// private void InitializeUX() :15
void DeveloperMenu__InitializeUX_fn(DeveloperMenu* __this)
{
    __this->InitializeUX();
}

// public DeveloperMenu New() :11
void DeveloperMenu__New4_fn(DeveloperMenu** __retval)
{
    *__retval = DeveloperMenu::New4();
}

::g::Uno::UX::Selector DeveloperMenu::__selector0_;

// public DeveloperMenu() [instance] :11
void DeveloperMenu::ctor_7()
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void Close(object sender, Uno.EventArgs args) [instance] :11
void DeveloperMenu::Close(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", "Close(object,Uno.EventArgs)");
    uPtr(Parent())->BeginRemoveVisual(this, NULL);
}

// private void GoBack(object sender, Uno.EventArgs args) [instance] :6
void DeveloperMenu::GoBack(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", "GoBack(object,Uno.EventArgs)");
    ::g::Fuse::Input::Keyboard::EmulateBackButtonTap();
}

// private void InitializeUX() [instance] :15
void DeveloperMenu::InitializeUX()
{
    uStackFrame __("Outracks.Simulator.DeveloperMenu", "InitializeUX()");
    this_Opacity_inst = ::g::FusePreviewCore_FuseElementsElement_Opacity_Property::New1(this, DeveloperMenu::__selector0_);
    ::g::Fuse::Controls::ClientPanel* temp = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Button* temp1 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Triggers::AddingAnimation* temp5 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Change* temp6 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[25/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Animations::Scale* temp7 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Triggers::RemovingAnimation* temp8 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[25/*Fuse.Animations.Change<float>*/], this_Opacity_inst);
    ::g::Fuse::Animations::Scale* temp10 = ::g::Fuse::Animations::Scale::New2();
    Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.8f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(this, uDelegate::New(::TYPES[26/*Fuse.Gestures.ClickedHandler*/], (void*)DeveloperMenu__Close_fn, this));
    temp->SourceLineNumber(2);
    temp->SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->Text(::STRINGS[5/*"Go back"*/]);
    temp1->Alignment(5);
    temp1->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp1->SourceLineNumber(3);
    temp1->SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp1, uDelegate::New(::TYPES[26/*Fuse.Gestures.ClickedHandler*/], (void*)DeveloperMenu__GoBack_fn, this));
    temp2->Alignment(10);
    temp2->SourceLineNumber(4);
    temp2->SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp3->Value(::STRINGS[6/*"Fuse Previe...*/]);
    temp3->Color(::g::Fuse::Drawing::Colors::White());
    temp3->Alignment(10);
    temp3->SourceLineNumber(5);
    temp3->SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    temp4->Value(::STRINGS[7/*"Tap to dism...*/]);
    temp4->Color(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    temp4->Alignment(10);
    temp4->SourceLineNumber(6);
    temp4->SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    temp5->SourceLineNumber(9);
    temp5->SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp7);
    ::g::Fuse::Animations::Change__set_Value_fn(temp6, uCRef(0.0f));
    temp6->Duration(0.3);
    temp6->Easing(::g::Fuse::Animations::Easing::CubicIn());
    temp7->Factor(1.2f);
    temp7->Duration(0.3);
    temp7->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp8->SourceLineNumber(13);
    temp8->SourceFileName(::STRINGS[4/*"DeveloperMe...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::TYPES[28/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(0.0f));
    temp9->Duration(0.3);
    temp9->Easing(::g::Fuse::Animations::Easing::CubicOut());
    temp10->Factor(0.8f);
    temp10->Duration(0.3);
    temp10->Easing(::g::Fuse::Animations::Easing::CubicOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[27/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public DeveloperMenu New() [static] :11
DeveloperMenu* DeveloperMenu::New4()
{
    DeveloperMenu* obj1 = (DeveloperMenu*)uNew(DeveloperMenu_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/MissingStuff.cs
// ----------------------------------------------------------------------------------------

// public sealed class DummyApplication :75
// {
static void DummyApplication_build(uType* type)
{
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DummyApplication__New1_fn, 0, true, type, 0));
}

uType* DummyApplication_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Application_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DummyApplication);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.DummyApplication", options);
    type->fp_build_ = DummyApplication_build;
    type->fp_ctor_ = (void*)DummyApplication__New1_fn;
    return type;
}

// public generated DummyApplication() :75
void DummyApplication__ctor_2_fn(DummyApplication* __this)
{
    __this->ctor_2();
}

// public generated DummyApplication New() :75
void DummyApplication__New1_fn(DummyApplication** __retval)
{
    *__retval = DummyApplication::New1();
}

// public generated DummyApplication() [instance] :75
void DummyApplication::ctor_2()
{
    uStackFrame __("Outracks.Simulator.DummyApplication", ".ctor()");
    ctor_1();
}

// public generated DummyApplication New() [static] :75
DummyApplication* DummyApplication::New1()
{
    DummyApplication* obj1 = (DummyApplication*)uNew(DummyApplication_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/EmptyClass.cs
// -------------------------------------------------------------------------------

// public sealed class EmptyClass :5
// {
static void EmptyClass_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EmptyClass__New1_fn, 0, true, type, 0));
}

uType* EmptyClass_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(EmptyClass);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.EmptyClass", options);
    type->fp_build_ = EmptyClass_build;
    type->fp_ctor_ = (void*)EmptyClass__New1_fn;
    return type;
}

// public EmptyClass() :7
void EmptyClass__ctor__fn(EmptyClass* __this)
{
    __this->ctor_();
}

// public EmptyClass New() :7
void EmptyClass__New1_fn(EmptyClass** __retval)
{
    *__retval = EmptyClass::New1();
}

// public EmptyClass() [instance] :7
void EmptyClass::ctor_()
{
}

// public EmptyClass New() [static] :7
EmptyClass* EmptyClass::New1()
{
    EmptyClass* obj1 = (EmptyClass*)uNew(EmptyClass_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// public sealed class FailedToConnectToEndPoint :60
// {
static void FailedToConnectToEndPoint_build(uType* type)
{
    ::STRINGS[8] = uString::Const(": ");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToEndPoint__New4_fn, 0, true, type, 2, ::g::Uno::Net::IPEndPoint_typeof(), ::g::Uno::Exception_typeof()));
}

::g::Uno::Exception_type* FailedToConnectToEndPoint_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FailedToConnectToEndPoint);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToEndPoint", options);
    type->fp_build_ = FailedToConnectToEndPoint_build;
    return type;
}

// public FailedToConnectToEndPoint(Uno.Net.IPEndPoint endpoint, Uno.Exception e) :62
void FailedToConnectToEndPoint__ctor_3_fn(FailedToConnectToEndPoint* __this, ::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    __this->ctor_3(endpoint, e);
}

// public FailedToConnectToEndPoint New(Uno.Net.IPEndPoint endpoint, Uno.Exception e) :62
void FailedToConnectToEndPoint__New4_fn(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e, FailedToConnectToEndPoint** __retval)
{
    *__retval = FailedToConnectToEndPoint::New4(endpoint, e);
}

// public FailedToConnectToEndPoint(Uno.Net.IPEndPoint endpoint, Uno.Exception e) [instance] :62
void FailedToConnectToEndPoint::ctor_3(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(endpoint)->ToString(), ::STRINGS[8/*": "*/]), uPtr(e)->Message()));
}

// public FailedToConnectToEndPoint New(Uno.Net.IPEndPoint endpoint, Uno.Exception e) [static] :62
FailedToConnectToEndPoint* FailedToConnectToEndPoint::New4(::g::Uno::Net::IPEndPoint* endpoint, ::g::Uno::Exception* e)
{
    FailedToConnectToEndPoint* obj1 = (FailedToConnectToEndPoint*)uNew(FailedToConnectToEndPoint_typeof());
    obj1->ctor_3(endpoint, e);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ProxyClient.uno
// ---------------------------------------------------------------------

// public sealed class FailedToConnectToProxy :11
// {
static void FailedToConnectToProxy_build(uType* type)
{
    ::STRINGS[9] = uString::Const("Failed to connect to proxy:\n"
        "");
    ::TYPES[29] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Uno.Exception>*/, ::g::Uno::Exception_typeof(), NULL);
    type->SetFields(4,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(FailedToConnectToProxy, InnerExceptions), 0);
    type->Reflection.SetFields(1,
        new uField("InnerExceptions", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToProxy__New4_fn, 0, true, type, 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL)));
}

::g::Uno::Exception_type* FailedToConnectToProxy_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FailedToConnectToProxy);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToProxy", options);
    type->fp_build_ = FailedToConnectToProxy_build;
    return type;
}

// public FailedToConnectToProxy(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :15
void FailedToConnectToProxy__ctor_3_fn(FailedToConnectToProxy* __this, uObject* innerExceptions)
{
    __this->ctor_3(innerExceptions);
}

// public FailedToConnectToProxy New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :15
void FailedToConnectToProxy__New4_fn(uObject* innerExceptions, FailedToConnectToProxy** __retval)
{
    *__retval = FailedToConnectToProxy::New4(innerExceptions);
}

// public FailedToConnectToProxy(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [instance] :15
void FailedToConnectToProxy::ctor_3(uObject* innerExceptions)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[9/*"Failed to c...*/], ::g::Outracks::Simulator::ToIndentedLinesExtension::ToIndentedLines(innerExceptions)));
    InnerExceptions = ((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[29/*Outracks.Simulator.List.ToImmutableList<Uno.Exception>*/], innerExceptions));
}

// public FailedToConnectToProxy New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :15
FailedToConnectToProxy* FailedToConnectToProxy::New4(uObject* innerExceptions)
{
    FailedToConnectToProxy* obj1 = (FailedToConnectToProxy*)uNew(FailedToConnectToProxy_typeof());
    obj1->ctor_3(innerExceptions);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// public sealed class FailedToConnectToSimulator :67
// {
static void FailedToConnectToSimulator_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Failed to connect to simulator host: ");
    ::TYPES[29] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(3/*ToImmutableList<Uno.Exception>*/, ::g::Uno::Exception_typeof(), NULL);
    type->SetFields(4,
        ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(FailedToConnectToSimulator, InnerExceptions), 0);
    type->Reflection.SetFields(1,
        new uField("InnerExceptions", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FailedToConnectToSimulator__New4_fn, 0, true, type, 1, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL)));
}

::g::Uno::Exception_type* FailedToConnectToSimulator_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FailedToConnectToSimulator);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.FailedToConnectToSimulator", options);
    type->fp_build_ = FailedToConnectToSimulator_build;
    return type;
}

// public FailedToConnectToSimulator(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :71
void FailedToConnectToSimulator__ctor_3_fn(FailedToConnectToSimulator* __this, uObject* innerExceptions)
{
    __this->ctor_3(innerExceptions);
}

// public FailedToConnectToSimulator New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :71
void FailedToConnectToSimulator__New4_fn(uObject* innerExceptions, FailedToConnectToSimulator** __retval)
{
    *__retval = FailedToConnectToSimulator::New4(innerExceptions);
}

// public FailedToConnectToSimulator(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [instance] :71
void FailedToConnectToSimulator::ctor_3(uObject* innerExceptions)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[10/*"Failed to c...*/], ::g::Outracks::Simulator::ToIndentedLinesExtension::ToIndentedLines(innerExceptions)));
    InnerExceptions = ((::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::ToImmutableList(::TYPES[29/*Outracks.Simulator.List.ToImmutableList<Uno.Exception>*/], innerExceptions));
}

// public FailedToConnectToSimulator New(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :71
FailedToConnectToSimulator* FailedToConnectToSimulator::New4(uObject* innerExceptions)
{
    FailedToConnectToSimulator* obj1 = (FailedToConnectToSimulator*)uNew(FailedToConnectToSimulator_typeof());
    obj1->ctor_3(innerExceptions);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// internal sealed class Forget<TArg, TResult> :47
// {
static void Forget_build(uType* type)
{
    type->SetFields(0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Forget_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(Forget);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Forget`2", options);
    type->fp_build_ = Forget_build;
    return type;
}

// public Forget(TResult result) :50
void Forget__ctor__fn(Forget* __this, void* result)
{
    __this->_result() = result;
}

// public TResult Execute(TArg _) :55
void Forget__Execute_fn(Forget* __this, void* _, uTRef __retval)
{
    return __retval.Store(__this->_result()), void();
}

// public Forget New(TResult result) :50
void Forget__New1_fn(uType* __type, void* result, Forget** __retval)
{
    Forget* obj1 = (Forget*)uNew(__type);
    Forget__ctor__fn(obj1, result);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// internal sealed class Forget<TArg1, TArg2, TResult> :92
// {
static void Forget1_build(uType* type)
{
    type->SetFields(0,
        type->T(2), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Forget1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(Forget1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Forget`3", options);
    type->fp_build_ = Forget1_build;
    return type;
}

// public Forget(TResult result) :95
void Forget1__ctor__fn(Forget1* __this, void* result)
{
    __this->_result() = result;
}

// public TResult Execute(TArg1 arg1, TArg2 arg2) :100
void Forget1__Execute_fn(Forget1* __this, void* arg1, void* arg2, uTRef __retval)
{
    return __retval.Store(__this->_result()), void();
}

// public Forget New(TResult result) :95
void Forget1__New1_fn(uType* __type, void* result, Forget1** __retval)
{
    Forget1* obj1 = (Forget1*)uNew(__type);
    Forget1__ctor__fn(obj1, result);
    return *__retval = obj1, void();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// public sealed class ForgetAction<TArg1> :61
// {
static void ForgetAction_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(ForgetAction, _action), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)ForgetAction__Execute_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction(".ctor", type, (void*)ForgetAction__New1_fn, 0, true, type, 1, ::g::Uno::Action_typeof()));
}

uType* ForgetAction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ForgetAction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ForgetAction`1", options);
    type->fp_build_ = ForgetAction_build;
    return type;
}

// public ForgetAction(Uno.Action action) :65
void ForgetAction__ctor__fn(ForgetAction* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public void Execute(TArg1 arg1) :70
void ForgetAction__Execute_fn(ForgetAction* __this, void* arg1)
{
    uStackFrame __("Outracks.Simulator.ForgetAction`1", "Execute(TArg1)");
    uPtr(__this->_action)->InvokeVoid();
}

// public ForgetAction New(Uno.Action action) :65
void ForgetAction__New1_fn(uType* __type, uDelegate* action, ForgetAction** __retval)
{
    *__retval = ForgetAction::New1(__type, action);
}

// public ForgetAction(Uno.Action action) [instance] :65
void ForgetAction::ctor_(uDelegate* action)
{
    _action = action;
}

// public ForgetAction New(Uno.Action action) [static] :65
ForgetAction* ForgetAction::New1(uType* __type, uDelegate* action)
{
    ForgetAction* obj1 = (ForgetAction*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Closure.cs
// -----------------------------------------------------------------------------------

// public sealed class ForgetAction<TArg1, TArg2> :77
// {
static void ForgetAction1_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(ForgetAction1, _action), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)ForgetAction1__Execute_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)ForgetAction1__New1_fn, 0, true, type, 1, ::g::Uno::Action_typeof()));
}

uType* ForgetAction1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ForgetAction1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ForgetAction`2", options);
    type->fp_build_ = ForgetAction1_build;
    return type;
}

// public ForgetAction(Uno.Action action) :81
void ForgetAction1__ctor__fn(ForgetAction1* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public void Execute(TArg1 arg1, TArg2 arg2) :86
void ForgetAction1__Execute_fn(ForgetAction1* __this, void* arg1, void* arg2)
{
    uStackFrame __("Outracks.Simulator.ForgetAction`2", "Execute(TArg1,TArg2)");
    uPtr(__this->_action)->InvokeVoid();
}

// public ForgetAction New(Uno.Action action) :81
void ForgetAction1__New1_fn(uType* __type, uDelegate* action, ForgetAction1** __retval)
{
    *__retval = ForgetAction1::New1(__type, action);
}

// public ForgetAction(Uno.Action action) [instance] :81
void ForgetAction1::ctor_(uDelegate* action)
{
    _action = action;
}

// public ForgetAction New(Uno.Action action) [static] :81
ForgetAction1* ForgetAction1::New1(uType* __type, uDelegate* action)
{
    ForgetAction1* obj1 = (ForgetAction1*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ProxyClient.uno
// ---------------------------------------------------------------------

// internal sealed class GetSimulatorEndpoint :54
// {
static void GetSimulatorEndpoint_build(uType* type)
{
    ::STRINGS[11] = uString::Const(" ");
    ::STRINGS[12] = uString::Const("DESIGNER_NOT_RUNNING");
    ::STRINGS[13] = uString::Const("SUCCESS");
    ::STRINGS[14] = uString::Const("Failed to request host.");
    ::STRINGS[15] = uString::Const("Call Tom Curise");
    ::TYPES[30] = ::g::Outracks::Simulator::DesignerNotRunning_typeof();
    ::TYPES[15] = ::g::Uno::Exception_typeof();
    ::TYPES[31] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Uno::Net::IPAddress_typeof());
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof(), offsetof(GetSimulatorEndpoint, proxy), 0,
        ::g::Uno::String_typeof(), offsetof(GetSimulatorEndpoint, project), 0,
        ::g::Uno::String_typeof()->Array(), offsetof(GetSimulatorEndpoint, defines), 0);
}

uType* GetSimulatorEndpoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GetSimulatorEndpoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.GetSimulatorEndpoint", options);
    type->fp_build_ = GetSimulatorEndpoint_build;
    return type;
}

// public GetSimulatorEndpoint(Uno.Net.IPEndPoint proxy, string project, string[] defines) :61
void GetSimulatorEndpoint__ctor__fn(GetSimulatorEndpoint* __this, ::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1)
{
    __this->ctor_(proxy1, project1, defines1);
}

// public Uno.Net.IPEndPoint[] Execute() :68
void GetSimulatorEndpoint__Execute_fn(GetSimulatorEndpoint* __this, uArray** __retval)
{
    *__retval = __this->Execute();
}

// public GetSimulatorEndpoint New(Uno.Net.IPEndPoint proxy, string project, string[] defines) :61
void GetSimulatorEndpoint__New1_fn(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1, GetSimulatorEndpoint** __retval)
{
    *__retval = GetSimulatorEndpoint::New1(proxy1, project1, defines1);
}

// public GetSimulatorEndpoint(Uno.Net.IPEndPoint proxy, string project, string[] defines) [instance] :61
void GetSimulatorEndpoint::ctor_(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1)
{
    proxy = proxy1;
    project = project1;
    defines = defines1;
}

// public Uno.Net.IPEndPoint[] Execute() [instance] :68
uArray* GetSimulatorEndpoint::Execute()
{
    uStackFrame __("Outracks.Simulator.GetSimulatorEndpoint", "Execute()");

    try
    {
        {
            ::g::Uno::Net::Sockets::Socket* socket = ::g::Uno::Net::Sockets::Socket::New1(2, 1, 6);
            socket->Connect1(proxy);
            ::g::Uno::Net::Sockets::NetworkStream* stream = ::g::Uno::Net::Sockets::NetworkStream::New1(socket);

            {
                try
                {
                    {
                        ::g::System::IO::BinaryWriter* writer = ::g::System::IO::BinaryWriter::New1(stream);

                        {
                            try
                            {
                                {
                                    ::g::System::IO::BinaryReader* reader = ::g::System::IO::BinaryReader::New1(stream);

                                    {
                                        try
                                        {
                                            {
                                                uPtr(writer)->Write6(project);
                                                writer->Write6(::g::Uno::String::Join(::STRINGS[11/*" "*/], defines));
                                                uString* initialState = uPtr(reader)->ReadString();

                                                if (::g::Uno::String::Equals2(uPtr<uString*>(::STRINGS[12/*"DESIGNER_NO...*/]), initialState))
                                                    U_THROW(::g::Outracks::Simulator::DesignerNotRunning::New4());

                                                if (::g::Uno::String::Equals2(uPtr<uString*>(::STRINGS[13/*"SUCCESS"*/]), initialState) == false)
                                                    U_THROW(::g::Uno::Exception::New2(::STRINGS[14/*"Failed to r...*/]));

                                                int32_t endpointCount = reader->ReadInt32();
                                                uArray* endpoints = uArray::New(::TYPES[31/*Uno.Net.IPEndPoint[]*/], endpointCount);

                                                for (int32_t i = 0; i < endpoints->Length(); i++)
                                                {
                                                    uString* simulatorAddress = uPtr(reader)->ReadString();
                                                    int32_t simulatorPort = reader->ReadInt32();
                                                    uPtr(endpoints)->Strong< ::g::Uno::Net::IPEndPoint*>(i) = ::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(simulatorAddress), simulatorPort);
                                                }

                                                try
                                                {
                                                    {
                                                        uPtr(socket)->Shutdown(2);
                                                    }
                                                }

                                                catch (const uThrowable& __t)
                                                {
                                                    ::g::Uno::Exception* e1 = __t.Exception;
                                                }

                                                return endpoints;
                                            }
                                        }

                                        catch (const uThrowable& __t)
                                        {
                                            {
                                                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[22/*Uno.IDisposable*/]));
                                            }
                                                                                        throw __t;
                                            goto __after_finally_3;
                                        }

                                        {
                                            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[22/*Uno.IDisposable*/]));
                                        }
                                        __after_finally_3:;
                                    }
                                }
                            }

                            catch (const uThrowable& __t)
                            {
                                {
                                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[22/*Uno.IDisposable*/]));
                                }
                                                                throw __t;
                                goto __after_finally_4;
                            }

                            {
                                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)writer), ::TYPES[22/*Uno.IDisposable*/]));
                            }
                            __after_finally_4:;
                        }
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[22/*Uno.IDisposable*/]));
                    }
                                        throw __t;
                    goto __after_finally_5;
                }

                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[22/*Uno.IDisposable*/]));
                }
                __after_finally_5:;
            }

            U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"Call Tom Cu...*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[30/*Outracks.Simulator.DesignerNotRunning*/]))
        {
            ::g::Outracks::Simulator::DesignerNotRunning* exception_ = (::g::Outracks::Simulator::DesignerNotRunning*)__t.Exception;
            throw __t;
        }
        else if (uIs(__t.Exception, ::TYPES[15/*Uno.Exception*/]))
        {
            ::g::Uno::Exception* e = (::g::Uno::Exception*)__t.Exception;
            U_THROW(::g::Outracks::Simulator::FailedToConnectToEndPoint::New4(proxy, e));
        }
        else         throw __t;
    }
}

// public GetSimulatorEndpoint New(Uno.Net.IPEndPoint proxy, string project, string[] defines) [static] :61
GetSimulatorEndpoint* GetSimulatorEndpoint::New1(::g::Uno::Net::IPEndPoint* proxy1, uString* project1, uArray* defines1)
{
    GetSimulatorEndpoint* obj1 = (GetSimulatorEndpoint*)uNew(GetSimulatorEndpoint_typeof());
    obj1->ctor_(proxy1, project1, defines1);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/MissingStuff.cs
// ----------------------------------------------------------------------------------------

// public static class GuidSerializer :50
// {
static void GuidSerializer_build(uType* type)
{
    ::TYPES[32] = ::g::Uno::Guid_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("ReadGuid", NULL, (void*)GuidSerializer__ReadGuid_fn, 0, true, ::TYPES[32/*Uno.Guid*/], 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("WriteGuid", NULL, (void*)GuidSerializer__WriteGuid_fn, 0, true, uVoid_typeof(), 2, ::g::System::IO::BinaryWriter_typeof(), ::TYPES[32/*Uno.Guid*/]));
}

uClassType* GuidSerializer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.GuidSerializer", options);
    type->fp_build_ = GuidSerializer_build;
    return type;
}

// public static Uno.Guid ReadGuid(System.IO.BinaryReader reader) :59
void GuidSerializer__ReadGuid_fn(::g::System::IO::BinaryReader* reader, ::g::Uno::Guid* __retval)
{
    *__retval = GuidSerializer::ReadGuid(reader);
}

// public static void WriteGuid(System.IO.BinaryWriter writer, Uno.Guid guid) :54
void GuidSerializer__WriteGuid_fn(::g::System::IO::BinaryWriter* writer, ::g::Uno::Guid* guid)
{
    GuidSerializer::WriteGuid(writer, *guid);
}

// public static Uno.Guid ReadGuid(System.IO.BinaryReader reader) [static] :59
::g::Uno::Guid GuidSerializer::ReadGuid(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.GuidSerializer", "ReadGuid(System.IO.BinaryReader)");
    return ::g::Uno::Guid__New4(uPtr(reader)->ReadString());
}

// public static void WriteGuid(System.IO.BinaryWriter writer, Uno.Guid guid) [static] :54
void GuidSerializer::WriteGuid(::g::System::IO::BinaryWriter* writer, ::g::Uno::Guid guid)
{
    uStackFrame __("Outracks.Simulator.GuidSerializer", "WriteGuid(System.IO.BinaryWriter,Uno.Guid)");
    uPtr(writer)->Write6(guid.ToString(::TYPES[32/*Uno.Guid*/]));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/ImmutableList.cs
// -----------------------------------------------------------------------------------------

// public sealed class ImmutableList<T> :8
// {
static void ImmutableList_build(uType* type)
{
    ::STRINGS[16] = uString::Const("[");
    ::STRINGS[17] = uString::Const(", ");
    ::STRINGS[18] = uString::Const("]");
    ::TYPES[33] = ::g::Uno::Array_typeof();
    ::TYPES[34] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[35] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[36] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[37] = ::g::Outracks::Simulator::StringSplitting_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<T>*/, type->T(0), NULL),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Outracks::Simulator::StringSplitting_typeof()->MakeMethod(0/*JoinToString<T>*/, type->T(0), NULL),
        ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<T>*/, type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(ImmutableList_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(ImmutableList, _array), 0);
    type->Reflection.SetFunctions(8,
        new uFunction("Add", NULL, (void*)ImmutableList__Add_fn, 0, false, type, 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)ImmutableList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_Empty", type, (void*)ImmutableList__get_Empty_fn, 0, true, type, 0),
        new uFunction("Get", NULL, (void*)ImmutableList__Get_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetEnumerator", NULL, (void*)ImmutableList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("InsertRange", NULL, (void*)ImmutableList__InsertRange_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("get_Item", NULL, (void*)ImmutableList__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("Replace", NULL, (void*)ImmutableList__Replace_fn, 0, false, type, 2, type->T(0), type->T(0)));
}

ImmutableList_type* ImmutableList_typeof()
{
    static uSStrong<ImmutableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(ImmutableList);
    options.TypeSize = sizeof(ImmutableList_type);
    type = (ImmutableList_type*)uClassType::New("Outracks.Simulator.ImmutableList`1", options);
    type->fp_build_ = ImmutableList_build;
    type->fp_ToString = (void(*)(uObject*, uString**))ImmutableList__ToString_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ImmutableList__GetEnumerator_fn;
    return type;
}

// internal ImmutableList(T[] array) :17
void ImmutableList__ctor__fn(ImmutableList* __this, uArray* array)
{
    __this->ctor_(array);
}

// public Outracks.Simulator.ImmutableList<T> Add(T element) :32
void ImmutableList__Add_fn(ImmutableList* __this, void* element, ImmutableList** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T[]*/),
        __this->__type->Precalced(2/*Uno.Array.Copy<T>*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "Add(T)");
    uArray* copy = uArray::New(__types[0], __this->Count() + 1);
    ::g::Uno::Array::Copy1(__types[1], __this->_array, copy, __this->Count());
    copy->TItem(__this->Count()) = element;
    return *__retval = ImmutableList::New1(__this->__type, copy), void();
}

// public int get_Count() :24
void ImmutableList__get_Count_fn(ImmutableList* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public static Outracks.Simulator.ImmutableList<T> get_Empty() :12
void ImmutableList__get_Empty_fn(uType* __type, ImmutableList** __retval)
{
    *__retval = ImmutableList::Empty(__type);
}

// public T Get(int i) :61
void ImmutableList__Get_fn(ImmutableList* __this, int32_t* i, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "Get(int)");
    int32_t i_ = *i;
    return __retval.Store(uPtr(__this->_array)->TItem(i_)), void();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :27
void ImmutableList__GetEnumerator_fn(ImmutableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Outracks.Simulator.ImmutableList<T> InsertRange(int index, Uno.Collections.IEnumerable<T> items) :40
void ImmutableList__InsertRange_fn(ImmutableList* __this, int32_t* index, uObject* items, ImmutableList** __retval)
{
    *__retval = __this->InsertRange(*index, items);
}

// public T get_Item(int i) :68
void ImmutableList__get_Item_fn(ImmutableList* __this, int32_t* i, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "get_Item(int)");
    int32_t i_ = *i;
    return __retval.Store(uPtr(__this->_array)->TItem(i_)), void();
}

// internal ImmutableList New(T[] array) :17
void ImmutableList__New1_fn(uType* __type, uArray* array, ImmutableList** __retval)
{
    *__retval = ImmutableList::New1(__type, array);
}

// public Outracks.Simulator.ImmutableList<T> Replace(T element, T replacement) :51
void ImmutableList__Replace_fn(ImmutableList* __this, void* element, void* replacement, ImmutableList** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "Replace(T,T)");
    uArray* copy = uArray::New(__types[0], __this->Count());

    for (int32_t i = 0; i < __this->Count(); i++)
        uPtr(copy)->TItem(i) = ::g::Uno::Object::Equals(uBoxPtr(__this->__type->T(0), uPtr(uPtr(__this->_array)->TItem(i)), U_ALLOCA(__this->__type->T(0)->ObjectSize)), uBoxPtr(__this->__type->T(0), element)) ? replacement : (void*)uPtr(__this->_array)->TItem(i);

    return *__retval = ImmutableList::New1(__this->__type, copy), void();
}

// public override sealed string ToString() :71
void ImmutableList__ToString_fn(ImmutableList* __this, uString** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Outracks.Simulator.StringSplitting.JoinToString<T>*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[16/*"["*/], ::g::Outracks::Simulator::StringSplitting::JoinToString(__types[0], (uObject*)__this, ::STRINGS[17/*", "*/])), ::STRINGS[18/*"]"*/]), void();
}

// internal ImmutableList(T[] array) [instance] :17
void ImmutableList::ctor_(uArray* array)
{
    _array = array;
}

// public int get_Count() [instance] :24
int32_t ImmutableList::Count()
{
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "get_Count()");
    return uPtr(_array)->Length();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :27
uObject* ImmutableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "GetEnumerator()");
    return (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[1], _array)), __types[0]));
}

// public Outracks.Simulator.ImmutableList<T> InsertRange(int index, Uno.Collections.IEnumerable<T> items) [instance] :40
ImmutableList* ImmutableList::InsertRange(int32_t index, uObject* items)
{
    uType* __types[] = {
        __type->Precalced(5/*Uno.Collections.EnumerableExtensions.ToArray<T>*/),
        __type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Outracks.Simulator.ImmutableList`1", "InsertRange(int,Uno.Collections.IEnumerable<T>)");
    uArray* itemsArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[0], items);
    uArray* copy = uArray::New(__types[1], Count() + uPtr(itemsArray)->Length());

    for (int32_t i = 0; i < itemsArray->Length(); i++)
        uPtr(copy)->TItem(i) = uPtr(itemsArray)->TItem(i);

    for (int32_t i1 = 0; i1 < Count(); i1++)
        uPtr(copy)->TItem(uPtr(itemsArray)->Length() + i1) = uPtr(_array)->TItem(i1);

    return ImmutableList::New1(__type, copy);
}

// internal ImmutableList New(T[] array) [static] :17
ImmutableList* ImmutableList::New1(uType* __type, uArray* array)
{
    ImmutableList* obj1 = (ImmutableList*)uNew(__type);
    obj1->ctor_(array);
    return obj1;
}

// public static Outracks.Simulator.ImmutableList<T> get_Empty() [static] :12
ImmutableList* ImmutableList::Empty(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    return ImmutableList::New1(__type, uArray::New(__types[0], 0));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/StringExtensions.cs
// --------------------------------------------------------------------------------------------

// public static class IndentString :8
// {
static void IndentString_build(uType* type)
{
    ::STRINGS[19] = uString::Const("\n"
        "");
    ::STRINGS[20] = uString::Const("\t");
    ::TYPES[38] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*Select<string, string>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[39] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[41] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    type->Reflection.SetFunctions(1,
        new uFunction("Indent", NULL, (void*)IndentString__Indent_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()));
}

uClassType* IndentString_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.IndentString", options);
    type->fp_build_ = IndentString_build;
    return type;
}

// public static string Indent(string str) :10
void IndentString__Indent_fn(uString* str, uString** __retval)
{
    *__retval = IndentString::Indent(str);
}

// private static string PrefixWithTab(string s) :15
void IndentString__PrefixWithTab_fn(uString* s, uString** __retval)
{
    *__retval = IndentString::PrefixWithTab(s);
}

// public static string Indent(string str) [static] :10
uString* IndentString::Indent(uString* str)
{
    uStackFrame __("Outracks.Simulator.IndentString", "Indent(string)");
    return ::g::Outracks::Simulator::StringSplitting::Join((uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[38/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[39/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], ::g::Uno::String::Split(uPtr(str), uArray::Init<int32_t>(::TYPES[40/*char[]*/], 1, 10)))), uDelegate::New(::TYPES[41/*Uno.Func<string, string>*/], (void*)IndentString__PrefixWithTab_fn)), ::STRINGS[19/*"\n"*/]);
}

// private static string PrefixWithTab(string s) [static] :15
uString* IndentString::PrefixWithTab(uString* s)
{
    uStackFrame __("Outracks.Simulator.IndentString", "PrefixWithTab(string)");
    return ::g::Uno::String::op_Addition2(::STRINGS[20/*"\t"*/], s);
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// public abstract interface ISimulatorClient :16
// {
uInterfaceType* ISimulatorClient_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.ISimulatorClient", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_IncommingMessages", NULL, NULL, offsetof(ISimulatorClient, fp_get_IncommingMessages), false, ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::IBinaryMessage_typeof(), NULL), 0),
        new uFunction("get_IsOnline", NULL, NULL, offsetof(ISimulatorClient, fp_get_IsOnline), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Send", NULL, NULL, offsetof(ISimulatorClient, fp_Send), false, uVoid_typeof(), 1, ::g::Outracks::IBinaryMessage_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/LineNumber.cs
// --------------------------------------------------------------------------------------

// public struct LineNumber :8
// {
static void LineNumber_build(uType* type)
{
    ::STRINGS[21] = uString::Const("line");
    ::STRINGS[22] = uString::Const("LineNumber must be >= 1");
    ::TYPES[0] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[0/*int*/], offsetof(LineNumber, _lineMinusOne), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Equals", NULL, (void*)LineNumber__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)LineNumber__New1_fn, 0, true, type, 1, ::TYPES[0/*int*/]));
}

uStructType* LineNumber_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.Alignment = alignof(LineNumber);
    options.ValueSize = sizeof(LineNumber);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Outracks.Simulator.LineNumber", options);
    type->fp_build_ = LineNumber_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))LineNumber__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))LineNumber__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))LineNumber__ToString_fn;
    return type;
}

// public LineNumber(int line) :12
void LineNumber__ctor__fn(LineNumber* __this, int32_t* line)
{
    __this->ctor_(*line);
}

// public override sealed bool Equals(object obj) :33
void LineNumber__Equals_fn(LineNumber* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.LineNumber", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    return *__retval = uIs(obj, __type) && __this->Equals2(uUnbox<LineNumber>(__type, obj)), void();
}

// public bool Equals(Outracks.Simulator.LineNumber other) :28
void LineNumber__Equals2_fn(LineNumber* __this, LineNumber* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public override sealed int GetHashCode() :39
void LineNumber__GetHashCode_fn(LineNumber* __this, uType* __type, int32_t* __retval)
{
    return *__retval = __this->_lineMinusOne, void();
}

// public LineNumber New(int line) :12
void LineNumber__New1_fn(int32_t* line, LineNumber* __retval)
{
    *__retval = LineNumber__New1(*line);
}

// public static operator ==(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) :44
void LineNumber__op_Equality_fn(LineNumber* left, LineNumber* right, bool* __retval)
{
    *__retval = LineNumber__op_Equality(*left, *right);
}

// public static operator >(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) :59
void LineNumber__op_GreaterThan_fn(LineNumber* left, LineNumber* right, bool* __retval)
{
    *__retval = LineNumber__op_GreaterThan(*left, *right);
}

// public static operator >=(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) :69
void LineNumber__op_GreaterThanOrEqual_fn(LineNumber* left, LineNumber* right, bool* __retval)
{
    *__retval = LineNumber__op_GreaterThanOrEqual(*left, *right);
}

// public static implicit operator int(Outracks.Simulator.LineNumber line) :18
void LineNumber__op_Implicit1_fn(LineNumber* line, int32_t* __retval)
{
    *__retval = LineNumber__op_Implicit1(*line);
}

// public static operator !=(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) :49
void LineNumber__op_Inequality_fn(LineNumber* left, LineNumber* right, bool* __retval)
{
    *__retval = LineNumber__op_Inequality(*left, *right);
}

// public static operator <(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) :54
void LineNumber__op_LessThan_fn(LineNumber* left, LineNumber* right, bool* __retval)
{
    *__retval = LineNumber__op_LessThan(*left, *right);
}

// public static operator <=(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) :64
void LineNumber__op_LessThanOrEqual_fn(LineNumber* left, LineNumber* right, bool* __retval)
{
    *__retval = LineNumber__op_LessThanOrEqual(*left, *right);
}

// public override sealed string ToString() :23
void LineNumber__ToString_fn(LineNumber* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.LineNumber", "ToString()");
    return *__retval = ::g::Uno::Int::ToString(LineNumber__op_Implicit1(*__this), ::TYPES[0/*int*/]), void();
}

// public LineNumber(int line) [instance] :12
void LineNumber::ctor_(int32_t line)
{
    uStackFrame __("Outracks.Simulator.LineNumber", ".ctor(int)");

    if (line <= 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[21/*"line"*/], ::STRINGS[22/*"LineNumber ...*/]));

    _lineMinusOne = (line - 1);
}

// public bool Equals(Outracks.Simulator.LineNumber other) [instance] :28
bool LineNumber::Equals2(LineNumber other)
{
    return _lineMinusOne == other._lineMinusOne;
}

// public LineNumber New(int line) [static] :12
LineNumber LineNumber__New1(int32_t line)
{
    LineNumber obj1;
    obj1.ctor_(line);
    return obj1;
}

// public static operator ==(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) [static] :44
bool LineNumber__op_Equality(LineNumber left, LineNumber right)
{
    return left.Equals2(right);
}

// public static operator >(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) [static] :59
bool LineNumber__op_GreaterThan(LineNumber left, LineNumber right)
{
    return left._lineMinusOne > right._lineMinusOne;
}

// public static operator >=(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) [static] :69
bool LineNumber__op_GreaterThanOrEqual(LineNumber left, LineNumber right)
{
    return left._lineMinusOne >= right._lineMinusOne;
}

// public static implicit operator int(Outracks.Simulator.LineNumber line) [static] :18
int32_t LineNumber__op_Implicit1(LineNumber line)
{
    return line._lineMinusOne + 1;
}

// public static operator !=(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) [static] :49
bool LineNumber__op_Inequality(LineNumber left, LineNumber right)
{
    return !left.Equals2(right);
}

// public static operator <(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) [static] :54
bool LineNumber__op_LessThan(LineNumber left, LineNumber right)
{
    return left._lineMinusOne < right._lineMinusOne;
}

// public static operator <=(Outracks.Simulator.LineNumber left, Outracks.Simulator.LineNumber right) [static] :64
bool LineNumber__op_LessThanOrEqual(LineNumber left, LineNumber right)
{
    return left._lineMinusOne <= right._lineMinusOne;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/ImmutableList.cs
// -----------------------------------------------------------------------------------------

// public static class List :78
// {
static void List_build(uType* type)
{
    ::TYPES[42] = ::g::Outracks::Simulator::ImmutableList_typeof();
    ::TYPES[36] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[43] = ::g::Outracks::Optional1_typeof();
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[44] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    ::TYPES[34] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[45] = ::TYPES[36/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(9/*ToArray<object>*/, uObject_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(2/*ReadImmutableList<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MethodTypes[2]->U(0)->Array(),
        ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::TYPES[36/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(9/*ToArray<T>*/, type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[43/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL),
        ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL),
        type->MethodTypes[4]->U(0)->Array());
    type->MethodTypes[5]->SetPrecalc(
        type->MakeMethod(6/*Write<T>*/, type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::TYPES[44/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL));
    type->MethodTypes[7]->SetPrecalc(
        ::TYPES[36/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(2/*Count<T>*/, type->MethodTypes[7]->U(0), NULL),
        ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL),
        ::TYPES[44/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL));
    type->Reflection.SetFunctions(9,
        new uFunction("Create`1", type->MethodTypes[0], (void*)List__Create_fn, 0, true, ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL), 1, type->MethodTypes[0]->U(0)->Array()),
        new uFunction("Read`1", type->MethodTypes[1], (void*)List__Read_fn, 0, true, ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL), 2, ::g::System::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type->MethodTypes[1]->U(0), NULL)),
        new uFunction("ReadImmutableList`1", type->MethodTypes[2], (void*)List__ReadImmutableList_fn, 0, true, ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL), 2, ::g::System::IO::BinaryReader_typeof(), ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), type->MethodTypes[2]->U(0), NULL)),
        new uFunction("ToImmutableList`1", type->MethodTypes[3], (void*)List__ToImmutableList_fn, 0, true, ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL), 1, ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL)),
        new uFunction("ToList`1", type->MethodTypes[4], (void*)List__ToList_fn, 0, true, ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL), 1, ::TYPES[43/*Outracks.Optional`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL)),
        new uFunction("Write`1", type->MethodTypes[5], (void*)List__Write_fn, 0, true, uVoid_typeof(), 3, ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL), ::g::System::IO::BinaryWriter_typeof(), ::g::Uno::Action2_typeof()->MakeType(type->MethodTypes[5]->U(0), ::g::System::IO::BinaryWriter_typeof(), NULL)),
        new uFunction("Write`1", type->MethodTypes[6], (void*)List__Write1_fn, 0, true, uVoid_typeof(), 3, ::g::System::IO::BinaryWriter_typeof(), ::TYPES[42/*Outracks.Simulator.ImmutableList`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL), ::g::Uno::Action2_typeof()->MakeType(type->MethodTypes[6]->U(0), ::g::System::IO::BinaryWriter_typeof(), NULL)),
        new uFunction("Write`1", type->MethodTypes[7], (void*)List__Write2_fn, 0, true, uVoid_typeof(), 3, ::g::System::IO::BinaryWriter_typeof(), ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL), ::g::Uno::Action2_typeof()->MakeType(type->MethodTypes[7]->U(0), ::g::System::IO::BinaryWriter_typeof(), NULL)),
        new uFunction("WriteImmutableList", NULL, (void*)List__WriteImmutableList_fn, 0, true, uVoid_typeof(), 3, ::g::System::IO::BinaryWriter_typeof(), ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(uObject_typeof(), NULL), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL)));
}

uClassType* List_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 8;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.List", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->MethodTypes[3] = type->NewMethodType(1, 2,0);
    type->MethodTypes[4] = type->NewMethodType(1, 3,0);
    type->MethodTypes[5] = type->NewMethodType(1, 1,0);
    type->MethodTypes[6] = type->NewMethodType(1, 1,0);
    type->MethodTypes[7] = type->NewMethodType(1, 3,0);
    type->fp_build_ = List_build;
    return type;
}

// public static Outracks.Simulator.ImmutableList<T> Create<T>(T[] elements) :90
void List__Create_fn(uType* __type, uArray* elements, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::Create(__type, elements);
}

// public static Outracks.Simulator.ImmutableList<T> Read<T>(System.IO.BinaryReader reader, Uno.Func<System.IO.BinaryReader, T> elementReader) :119
void List__Read_fn(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::Read(__type, reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ReadImmutableList<T>(System.IO.BinaryReader reader, Uno.Func<System.IO.BinaryReader, T> elementReader) :132
void List__ReadImmutableList_fn(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::ReadImmutableList(__type, reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ToImmutableList<T>(Uno.Collections.IEnumerable<T> self) :95
void List__ToImmutableList_fn(uType* __type, uObject* self, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    *__retval = List::ToImmutableList(__type, self);
}

// public static Outracks.Simulator.ImmutableList<T> ToList<T>(Outracks.Optional<T> element) :80
void List__ToList_fn(uType* __type, void* element, ::g::Outracks::Simulator::ImmutableList** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Optional<T>*/),
        __type->Precalced(1/*Outracks.Simulator.ImmutableList<T>*/),
        __type->Precalced(2/*T[]*/),
    };
    uStackFrame __("Outracks.Simulator.List", "ToList`1(Outracks.Optional<T>)");
    uT element_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    bool ret5;
    element_ = element;

    if (!(::g::Outracks::Optional1__get_HasValue_fn(&element_, __types[0], &ret5), ret5))
        return *__retval = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::Empty(__types[1]), void();

    uArray* array = uArray::New(__types[2], 1);
    array->TItem(0) = (::g::Outracks::Optional1__get_Value_fn(&element_, __types[0], &ret6), ret6);
    return *__retval = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[1], array), void();
}

// public static void Write<T>(Outracks.Simulator.ImmutableList<T> array, System.IO.BinaryWriter writer, Uno.Action<T, System.IO.BinaryWriter> elementWriter) :100
void List__Write_fn(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::System::IO::BinaryWriter* writer, uDelegate* elementWriter)
{
    List::Write(__type, array, writer, elementWriter);
}

// public static void Write<T>(System.IO.BinaryWriter writer, Outracks.Simulator.ImmutableList<T> array, Uno.Action<T, System.IO.BinaryWriter> elementWriter) :112
void List__Write1_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter)
{
    List::Write1(__type, writer, array, elementWriter);
}

// public static void Write<T>(System.IO.BinaryWriter writer, Uno.Collections.IEnumerable<T> array, Uno.Action<T, System.IO.BinaryWriter> elementWriter) :105
void List__Write2_fn(uType* __type, ::g::System::IO::BinaryWriter* writer, uObject* array, uDelegate* elementWriter)
{
    List::Write2(__type, writer, array, elementWriter);
}

// public static void WriteImmutableList(System.IO.BinaryWriter writer, Uno.Collections.IEnumerable<object> elements, Uno.Action<object> writeElement) :124
void List__WriteImmutableList_fn(::g::System::IO::BinaryWriter* writer, uObject* elements, uDelegate* writeElement)
{
    List::WriteImmutableList(writer, elements, writeElement);
}

// public static Outracks.Simulator.ImmutableList<T> Create<T>(T[] elements) [static] :90
::g::Outracks::Simulator::ImmutableList* List::Create(uType* __type, uArray* elements)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.ImmutableList<T>*/),
    };
    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[0], elements);
}

// public static Outracks.Simulator.ImmutableList<T> Read<T>(System.IO.BinaryReader reader, Uno.Func<System.IO.BinaryReader, T> elementReader) [static] :119
::g::Outracks::Simulator::ImmutableList* List::Read(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.List.ReadImmutableList<T>*/),
    };
    uStackFrame __("Outracks.Simulator.List", "Read`1(System.IO.BinaryReader,Uno.Func<System.IO.BinaryReader, T>)");
    return (::g::Outracks::Simulator::ImmutableList*)List::ReadImmutableList(__types[0], reader, elementReader);
}

// public static Outracks.Simulator.ImmutableList<T> ReadImmutableList<T>(System.IO.BinaryReader reader, Uno.Func<System.IO.BinaryReader, T> elementReader) [static] :132
::g::Outracks::Simulator::ImmutableList* List::ReadImmutableList(uType* __type, ::g::System::IO::BinaryReader* reader, uDelegate* elementReader)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
        __type->Precalced(1/*Outracks.Simulator.ImmutableList<T>*/),
    };
    uStackFrame __("Outracks.Simulator.List", "ReadImmutableList`1(System.IO.BinaryReader,Uno.Func<System.IO.BinaryReader, T>)");
    uT ret4(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uArray* array = uArray::New(__types[0], uPtr(reader)->ReadInt32());

    for (int32_t i = 0; i < array->Length(); i++)
        uPtr(array)->TItem(i) = (uPtr(elementReader)->Invoke(&ret4, 1, reader), ret4);

    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[1], array);
}

// public static Outracks.Simulator.ImmutableList<T> ToImmutableList<T>(Uno.Collections.IEnumerable<T> self) [static] :95
::g::Outracks::Simulator::ImmutableList* List::ToImmutableList(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.ImmutableList<T>*/),
        __type->Precalced(1/*Uno.Collections.EnumerableExtensions.ToArray<T>*/),
    };
    uStackFrame __("Outracks.Simulator.List", "ToImmutableList`1(Uno.Collections.IEnumerable<T>)");
    return (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::New1(__types[0], (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(__types[1], self));
}

// public static void Write<T>(Outracks.Simulator.ImmutableList<T> array, System.IO.BinaryWriter writer, Uno.Action<T, System.IO.BinaryWriter> elementWriter) [static] :100
void List::Write(uType* __type, ::g::Outracks::Simulator::ImmutableList* array, ::g::System::IO::BinaryWriter* writer, uDelegate* elementWriter)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.List.Write<T>*/),
    };
    uStackFrame __("Outracks.Simulator.List", "Write`1(Outracks.Simulator.ImmutableList<T>,System.IO.BinaryWriter,Uno.Action<T, System.IO.BinaryWriter>)");
    List::Write1(__types[0], writer, array, elementWriter);
}

// public static void Write<T>(System.IO.BinaryWriter writer, Outracks.Simulator.ImmutableList<T> array, Uno.Action<T, System.IO.BinaryWriter> elementWriter) [static] :112
void List::Write1(uType* __type, ::g::System::IO::BinaryWriter* writer, ::g::Outracks::Simulator::ImmutableList* array, uDelegate* elementWriter)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Outracks.Simulator.List", "Write`1(System.IO.BinaryWriter,Outracks.Simulator.ImmutableList<T>,Uno.Action<T, System.IO.BinaryWriter>)");
    uT ret7(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT elm(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uPtr(writer)->Write5(uPtr(array)->Count());
    uObject* enum1 = (uObject*)uPtr(array)->GetEnumerator();

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    elm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[0]), &ret7), ret7);
                    uPtr(elementWriter)->Invoke(2, (void*)elm, writer);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_6:;
    }
}

// public static void Write<T>(System.IO.BinaryWriter writer, Uno.Collections.IEnumerable<T> array, Uno.Action<T, System.IO.BinaryWriter> elementWriter) [static] :105
void List::Write2(uType* __type, ::g::System::IO::BinaryWriter* writer, uObject* array, uDelegate* elementWriter)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.Count<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(2/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Outracks.Simulator.List", "Write`1(System.IO.BinaryWriter,Uno.Collections.IEnumerable<T>,Uno.Action<T, System.IO.BinaryWriter>)");
    uT ret8(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT elm(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uPtr(writer)->Write5(::g::Uno::Collections::EnumerableExtensions::Count(__types[0], array));
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(array), __types[1]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    elm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret8), ret8);
                    uPtr(elementWriter)->Invoke(2, (void*)elm, writer);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_7:;
    }
}

// public static void WriteImmutableList(System.IO.BinaryWriter writer, Uno.Collections.IEnumerable<object> elements, Uno.Action<object> writeElement) [static] :124
void List::WriteImmutableList(::g::System::IO::BinaryWriter* writer, uObject* elements, uDelegate* writeElement)
{
    uStackFrame __("Outracks.Simulator.List", "WriteImmutableList(System.IO.BinaryWriter,Uno.Collections.IEnumerable<object>,Uno.Action<object>)");
    uArray* elementsArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[45/*Uno.Collections.EnumerableExtensions.ToArray<object>*/], elements);
    uPtr(writer)->Write5(uPtr(elementsArray)->Length());

    for (int32_t index2 = 0, length3 = elementsArray->Length(); index2 < length3; ++index2)
    {
        uObject* element = uPtr(elementsArray)->Strong<uObject*>(index2);
        uPtr(writeElement)->InvokeVoid(element);
    }
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/ObjectIdentifier.cs
// -------------------------------------------------------------------------------------

// public sealed class ObjectIdentifier :6
// {
// static generated ObjectIdentifier() :6
static void ObjectIdentifier__cctor__fn(uType* __type)
{
    ObjectIdentifier::None_ = ObjectIdentifier::New2(::STRINGS[23/*"N/A"*/], 0);
}

static void ObjectIdentifier_build(uType* type)
{
    ::STRINGS[23] = uString::Const("N/A");
    ::STRINGS[24] = uString::Const("#");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ObjectIdentifier, Document), 0,
        ::g::Uno::String_typeof(), offsetof(ObjectIdentifier, _string), 0,
        type, (uintptr_t)&ObjectIdentifier::None_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Document", 0),
        new uField("None", 2));
    type->Reflection.SetFunctions(6,
        new uFunction("Equals", NULL, (void*)ObjectIdentifier__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)ObjectIdentifier__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ObjectIdentifier__New2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Read", NULL, (void*)ObjectIdentifier__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ObjectIdentifier__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::System::IO::BinaryWriter_typeof()),
        new uFunction("Write", NULL, (void*)ObjectIdentifier__Write1_fn, 0, false, uVoid_typeof(), 1, ::g::System::IO::BinaryWriter_typeof()));
}

uType* ObjectIdentifier_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ObjectIdentifier);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ObjectIdentifier", options);
    type->fp_build_ = ObjectIdentifier_build;
    type->fp_cctor_ = ObjectIdentifier__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))ObjectIdentifier__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))ObjectIdentifier__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ObjectIdentifier__ToString_fn;
    return type;
}

// public ObjectIdentifier(string str, [string document]) :41
void ObjectIdentifier__ctor__fn(ObjectIdentifier* __this, uString* str, uString* document)
{
    __this->ctor_(str, document);
}

// public ObjectIdentifier(string document, int tagIndex) :35
void ObjectIdentifier__ctor_1_fn(ObjectIdentifier* __this, uString* document, int32_t* tagIndex)
{
    __this->ctor_1(document, *tagIndex);
}

// public override sealed bool Equals(object obj) :54
void ObjectIdentifier__Equals_fn(ObjectIdentifier* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(NULL, obj))
        return *__retval = false, void();

    if (::g::Uno::Object::ReferenceEquals(__this, obj))
        return *__retval = true, void();

    return *__retval = uIs(obj, __this->__type) && __this->Equals2(uCast<ObjectIdentifier*>(obj, __this->__type)), void();
}

// public bool Equals(Outracks.Simulator.ObjectIdentifier other) :47
void ObjectIdentifier__Equals2_fn(ObjectIdentifier* __this, ObjectIdentifier* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :61
void ObjectIdentifier__GetHashCode_fn(ObjectIdentifier* __this, int32_t* __retval)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "GetHashCode()");
    return *__retval = uPtr(__this->_string)->GetHashCode(), void();
}

// public ObjectIdentifier New(string str, [string document]) :41
void ObjectIdentifier__New1_fn(uString* str, uString* document, ObjectIdentifier** __retval)
{
    *__retval = ObjectIdentifier::New1(str, document);
}

// public ObjectIdentifier New(string document, int tagIndex) :35
void ObjectIdentifier__New2_fn(uString* document, int32_t* tagIndex, ObjectIdentifier** __retval)
{
    *__retval = ObjectIdentifier::New2(document, *tagIndex);
}

// public static operator ==(Outracks.Simulator.ObjectIdentifier left, Outracks.Simulator.ObjectIdentifier right) :66
void ObjectIdentifier__op_Equality_fn(ObjectIdentifier* left, ObjectIdentifier* right, bool* __retval)
{
    *__retval = ObjectIdentifier::op_Equality(left, right);
}

// public static operator !=(Outracks.Simulator.ObjectIdentifier left, Outracks.Simulator.ObjectIdentifier right) :71
void ObjectIdentifier__op_Inequality_fn(ObjectIdentifier* left, ObjectIdentifier* right, bool* __retval)
{
    *__retval = ObjectIdentifier::op_Inequality(left, right);
}

// public static Outracks.Simulator.ObjectIdentifier Read(System.IO.BinaryReader reader) :21
void ObjectIdentifier__Read_fn(::g::System::IO::BinaryReader* reader, ObjectIdentifier** __retval)
{
    *__retval = ObjectIdentifier::Read(reader);
}

// public override sealed string ToString() :76
void ObjectIdentifier__ToString_fn(ObjectIdentifier* __this, uString** __retval)
{
    return *__retval = __this->_string, void();
}

// public static void Write(Outracks.Simulator.ObjectIdentifier id, System.IO.BinaryWriter writer) :10
void ObjectIdentifier__Write_fn(ObjectIdentifier* id, ::g::System::IO::BinaryWriter* writer)
{
    ObjectIdentifier::Write(id, writer);
}

// public void Write(System.IO.BinaryWriter writer) :15
void ObjectIdentifier__Write1_fn(ObjectIdentifier* __this, ::g::System::IO::BinaryWriter* writer)
{
    __this->Write1(writer);
}

uSStrong<ObjectIdentifier*> ObjectIdentifier::None_;

// public ObjectIdentifier(string str, [string document]) [instance] :41
void ObjectIdentifier::ctor_(uString* str, uString* document)
{
    _string = str;
    Document = document;
}

// public ObjectIdentifier(string document, int tagIndex) [instance] :35
void ObjectIdentifier::ctor_1(uString* document, int32_t tagIndex)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", ".ctor(string,int)");
    _string = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(document, ::STRINGS[24/*"#"*/]), uBox<int32_t>(::TYPES[0/*int*/], tagIndex));
    Document = document;
}

// public bool Equals(Outracks.Simulator.ObjectIdentifier other) [instance] :47
bool ObjectIdentifier::Equals2(ObjectIdentifier* other)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "Equals(Outracks.Simulator.ObjectIdentifier)");

    if (::g::Uno::Object::ReferenceEquals(NULL, other))
        return false;

    if (::g::Uno::Object::ReferenceEquals(this, other))
        return true;

    return ::g::Uno::String::Equals2(uPtr(_string), uPtr(other)->_string);
}

// public void Write(System.IO.BinaryWriter writer) [instance] :15
void ObjectIdentifier::Write1(::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "Write(System.IO.BinaryWriter)");
    uPtr(writer)->Write6(_string);
    writer->Write6(Document);
}

// public ObjectIdentifier New(string str, [string document]) [static] :41
ObjectIdentifier* ObjectIdentifier::New1(uString* str, uString* document)
{
    ObjectIdentifier* obj2 = (ObjectIdentifier*)uNew(ObjectIdentifier_typeof());
    obj2->ctor_(str, document);
    return obj2;
}

// public ObjectIdentifier New(string document, int tagIndex) [static] :35
ObjectIdentifier* ObjectIdentifier::New2(uString* document, int32_t tagIndex)
{
    ObjectIdentifier* obj1 = (ObjectIdentifier*)uNew(ObjectIdentifier_typeof());
    obj1->ctor_1(document, tagIndex);
    return obj1;
}

// public static operator ==(Outracks.Simulator.ObjectIdentifier left, Outracks.Simulator.ObjectIdentifier right) [static] :66
bool ObjectIdentifier::op_Equality(ObjectIdentifier* left, ObjectIdentifier* right)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "==(Outracks.Simulator.ObjectIdentifier,Outracks.Simulator.ObjectIdentifier)");
    ObjectIdentifier_typeof()->Init();
    return ::g::Uno::Object::Equals1(left, right);
}

// public static operator !=(Outracks.Simulator.ObjectIdentifier left, Outracks.Simulator.ObjectIdentifier right) [static] :71
bool ObjectIdentifier::op_Inequality(ObjectIdentifier* left, ObjectIdentifier* right)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "!=(Outracks.Simulator.ObjectIdentifier,Outracks.Simulator.ObjectIdentifier)");
    ObjectIdentifier_typeof()->Init();
    return !::g::Uno::Object::Equals1(left, right);
}

// public static Outracks.Simulator.ObjectIdentifier Read(System.IO.BinaryReader reader) [static] :21
ObjectIdentifier* ObjectIdentifier::Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "Read(System.IO.BinaryReader)");
    ObjectIdentifier_typeof()->Init();
    uString* str = uPtr(reader)->ReadString();
    uString* document = reader->ReadString();
    return ObjectIdentifier::New1(str, document);
}

// public static void Write(Outracks.Simulator.ObjectIdentifier id, System.IO.BinaryWriter writer) [static] :10
void ObjectIdentifier::Write(ObjectIdentifier* id, ::g::System::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.ObjectIdentifier", "Write(Outracks.Simulator.ObjectIdentifier,System.IO.BinaryWriter)");
    ObjectIdentifier_typeof()->Init();
    uPtr(id)->Write1(writer);
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// public sealed class OfflineSimulatorClient :25
// {
static void OfflineSimulatorClient_build(uType* type)
{
    ::TYPES[46] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::IBinaryMessage_typeof(), NULL);
    type->SetInterfaces(
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(OfflineSimulatorClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(OfflineSimulatorClient_type, interface1));
    type->SetFields(0,
        ::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/], offsetof(OfflineSimulatorClient, _messagesFromClient), 0,
        ::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/], offsetof(OfflineSimulatorClient, _messagesToClient), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Dispose", NULL, (void*)OfflineSimulatorClient__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IncommingMessages", NULL, (void*)OfflineSimulatorClient__get_IncommingMessages_fn, 0, false, ::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/], 0),
        new uFunction("get_IsOnline", NULL, (void*)OfflineSimulatorClient__get_IsOnline_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)OfflineSimulatorClient__New1_fn, 0, true, type, 1, ::g::Outracks::IBinaryMessage_typeof()->Array()),
        new uFunction("Send", NULL, (void*)OfflineSimulatorClient__Send_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::IBinaryMessage_typeof()));
}

OfflineSimulatorClient_type* OfflineSimulatorClient_typeof()
{
    static uSStrong<OfflineSimulatorClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(OfflineSimulatorClient);
    options.TypeSize = sizeof(OfflineSimulatorClient_type);
    type = (OfflineSimulatorClient_type*)uClassType::New("Outracks.Simulator.OfflineSimulatorClient", options);
    type->fp_build_ = OfflineSimulatorClient_build;
    type->interface0.fp_Send = (void(*)(uObject*, uObject*))OfflineSimulatorClient__Send_fn;
    type->interface0.fp_get_IncommingMessages = (void(*)(uObject*, ::g::Outracks::Simulator::ConcurrentQueue**))OfflineSimulatorClient__get_IncommingMessages_fn;
    type->interface0.fp_get_IsOnline = (void(*)(uObject*, bool*))OfflineSimulatorClient__get_IsOnline_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))OfflineSimulatorClient__Dispose_fn;
    return type;
}

// public OfflineSimulatorClient(Outracks.IBinaryMessage[] initialMessages) :30
void OfflineSimulatorClient__ctor__fn(OfflineSimulatorClient* __this, uArray* initialMessages)
{
    __this->ctor_(initialMessages);
}

// public void Dispose() :46
void OfflineSimulatorClient__Dispose_fn(OfflineSimulatorClient* __this)
{
    __this->Dispose();
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage> get_IncommingMessages() :38
void OfflineSimulatorClient__get_IncommingMessages_fn(OfflineSimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval)
{
    *__retval = __this->IncommingMessages();
}

// public bool get_IsOnline() :53
void OfflineSimulatorClient__get_IsOnline_fn(OfflineSimulatorClient* __this, bool* __retval)
{
    *__retval = __this->IsOnline();
}

// public OfflineSimulatorClient New(Outracks.IBinaryMessage[] initialMessages) :30
void OfflineSimulatorClient__New1_fn(uArray* initialMessages, OfflineSimulatorClient** __retval)
{
    *__retval = OfflineSimulatorClient::New1(initialMessages);
}

// public void Send(Outracks.IBinaryMessage message) :41
void OfflineSimulatorClient__Send_fn(OfflineSimulatorClient* __this, uObject* message)
{
    __this->Send(message);
}

// public OfflineSimulatorClient(Outracks.IBinaryMessage[] initialMessages) [instance] :30
void OfflineSimulatorClient::ctor_(uArray* initialMessages)
{
    uStackFrame __("Outracks.Simulator.OfflineSimulatorClient", ".ctor(Outracks.IBinaryMessage[])");
    uArray* array1;
    int32_t index2;
    int32_t length3;
    _messagesFromClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/]));
    _messagesToClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/]));

    for (array1 = initialMessages, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uObject* msg = uPtr(array1)->Strong<uObject*>(index2);
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), msg);
    }
}

// public void Dispose() [instance] :46
void OfflineSimulatorClient::Dispose()
{
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage> get_IncommingMessages() [instance] :38
::g::Outracks::Simulator::ConcurrentQueue* OfflineSimulatorClient::IncommingMessages()
{
    return _messagesToClient;
}

// public bool get_IsOnline() [instance] :53
bool OfflineSimulatorClient::IsOnline()
{
    return false;
}

// public void Send(Outracks.IBinaryMessage message) [instance] :41
void OfflineSimulatorClient::Send(uObject* message)
{
    uStackFrame __("Outracks.Simulator.OfflineSimulatorClient", "Send(Outracks.IBinaryMessage)");
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesFromClient), message);
}

// public OfflineSimulatorClient New(Outracks.IBinaryMessage[] initialMessages) [static] :30
OfflineSimulatorClient* OfflineSimulatorClient::New1(uArray* initialMessages)
{
    OfflineSimulatorClient* obj4 = (OfflineSimulatorClient*)uNew(OfflineSimulatorClient_typeof());
    obj4->ctor_(initialMessages);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ProxyClient.uno
// ---------------------------------------------------------------------

// public sealed class ProxyClient :27
// {
static void ProxyClient_build(uType* type)
{
    ::TYPES[47] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL), NULL);
    ::TYPES[17] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[19] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[48] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(0/*Run<Uno.Net.IPEndPoint[]>*/, ::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL);
    ::TYPES[49] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL);
    ::TYPES[50] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    ::TYPES[51] = ::g::Outracks::Simulator::Tasks_typeof()->MakeMethod(1/*WaitForFirstResult<Uno.Net.IPEndPoint[]>*/, ::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL);
    ::TYPES[52] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), ::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL);
    ::TYPES[53] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[54] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[30] = ::g::Outracks::Simulator::DesignerNotRunning_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("GetSimulatorEndpoint", NULL, (void*)ProxyClient__GetSimulatorEndpoint_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL), 3, ::TYPES[17/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/], ::g::Uno::String_typeof(), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL)),
        new uFunction(".ctor", NULL, (void*)ProxyClient__New1_fn, 0, true, type, 0));
}

uType* ProxyClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ProxyClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.ProxyClient", options);
    type->fp_build_ = ProxyClient_build;
    type->fp_ctor_ = (void*)ProxyClient__New1_fn;
    return type;
}

// public generated ProxyClient() :27
void ProxyClient__ctor__fn(ProxyClient* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.Task<Uno.Net.IPEndPoint[]> GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> proxyEndpoints, string project, Uno.Collections.IEnumerable<string> defines) :29
void ProxyClient__GetSimulatorEndpoint_fn(uObject* proxyEndpoints, uString* project, uObject* defines, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = ProxyClient::GetSimulatorEndpoint(proxyEndpoints, project, defines);
}

// public generated ProxyClient New() :27
void ProxyClient__New1_fn(ProxyClient** __retval)
{
    *__retval = ProxyClient::New1();
}

// private static Uno.Net.IPEndPoint[] OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) :41
void ProxyClient__OnNoResult_fn(uObject* exceptions, uArray** __retval)
{
    *__retval = ProxyClient::OnNoResult(exceptions);
}

// public generated ProxyClient() [instance] :27
void ProxyClient::ctor_()
{
}

// public static Outracks.Simulator.Task<Uno.Net.IPEndPoint[]> GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> proxyEndpoints, string project, Uno.Collections.IEnumerable<string> defines) [static] :29
::g::Outracks::Simulator::Task* ProxyClient::GetSimulatorEndpoint(uObject* proxyEndpoints, uString* project, uObject* defines)
{
    uStackFrame __("Outracks.Simulator.ProxyClient", "GetSimulatorEndpoint(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>,string,Uno.Collections.IEnumerable<string>)");
    ::g::Uno::Net::IPEndPoint* ret4;
    ::g::Uno::Collections::List* tasks = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[47/*Uno.Collections.List<Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>>*/]);
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(proxyEndpoints), ::TYPES[17/*Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::Net::IPEndPoint* endpoint = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[19/*Uno.Collections.IEnumerator<Uno.Net.IPEndPoint>*/]), &ret4), ret4);
                    ::g::Uno::Collections::List__Add_fn(uPtr(tasks), (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::Run(::TYPES[48/*Outracks.Simulator.Tasks.Run<Uno.Net.IPEndPoint[]>*/], uDelegate::New(::TYPES[49/*Uno.Func<Uno.Net.IPEndPoint[]>*/], (void*)::g::Outracks::Simulator::GetSimulatorEndpoint__Execute_fn, ::g::Outracks::Simulator::GetSimulatorEndpoint::New1(endpoint, project, (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[50/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], defines)))));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_8:;
    }

    return (::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Tasks::WaitForFirstResult(::TYPES[51/*Outracks.Simulator.Tasks.WaitForFirstResult<Uno.Net.IPEndPoint[]>*/], (uObject*)tasks, uDelegate::New(::TYPES[52/*Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, Uno.Net.IPEndPoint[]>*/], (void*)ProxyClient__OnNoResult_fn));
}

// public generated ProxyClient New() [static] :27
ProxyClient* ProxyClient::New1()
{
    ProxyClient* obj3 = (ProxyClient*)uNew(ProxyClient_typeof());
    obj3->ctor_();
    return obj3;
}

// private static Uno.Net.IPEndPoint[] OnNoResult(Uno.Collections.IEnumerable<Uno.Exception> exceptions) [static] :41
uArray* ProxyClient::OnNoResult(uObject* exceptions)
{
    uStackFrame __("Outracks.Simulator.ProxyClient", "OnNoResult(Uno.Collections.IEnumerable<Uno.Exception>)");
    ::g::Uno::Exception* ret5;
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(exceptions), ::TYPES[53/*Uno.Collections.IEnumerable<Uno.Exception>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::Exception* exception = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[54/*Uno.Collections.IEnumerator<Uno.Exception>*/]), &ret5), ret5);

                    if (uIs(exception, ::TYPES[30/*Outracks.Simulator.DesignerNotRunning*/]))
                        U_THROW(::g::Outracks::Simulator::DesignerNotRunning::New4());
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_9;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_9:;
    }

    U_THROW(::g::Outracks::Simulator::FailedToConnectToProxy::New4(exceptions));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/MissingStuff.cs
// ----------------------------------------------------------------------------------------

// internal static class Serialization :65
// {
// static generated Serialization() :65
static void Serialization__cctor__fn(uType* __type)
{
    Serialization::ReadString_ = uDelegate::New(::TYPES[55/*Uno.Func<System.IO.BinaryReader, string>*/], (void*)Serialization___ReadString_fn);
}

static void Serialization_build(uType* type)
{
    ::TYPES[55] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[55/*Uno.Func<System.IO.BinaryReader, string>*/], (uintptr_t)&Serialization::ReadString_, uFieldFlagsStatic);
}

uClassType* Serialization_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Serialization", options);
    type->fp_build_ = Serialization_build;
    type->fp_cctor_ = Serialization__cctor__fn;
    return type;
}

// public static string _ReadString(System.IO.BinaryReader reader) :69
void Serialization___ReadString_fn(::g::System::IO::BinaryReader* reader, uString** __retval)
{
    *__retval = Serialization::_ReadString(reader);
}

uSStrong<uDelegate*> Serialization::ReadString_;

// public static string _ReadString(System.IO.BinaryReader reader) [static] :69
uString* Serialization::_ReadString(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Serialization", "_ReadString(System.IO.BinaryReader)");
    Serialization_typeof()->Init();
    return uPtr(reader)->ReadString();
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// public sealed class SimulatorClient :141
// {
static void SimulatorClient_build(uType* type)
{
    ::STRINGS[25] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno");
    ::TYPES[46] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Outracks::IBinaryMessage_typeof(), NULL);
    ::TYPES[56] = ::g::Uno::Threading::ThreadStart_typeof();
    ::TYPES[15] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::ISimulatorClient_typeof(), offsetof(SimulatorClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SimulatorClient_type, interface1));
    type->SetFields(0,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(SimulatorClient, _socket), 0,
        ::g::Uno::Net::Sockets::NetworkStream_typeof(), offsetof(SimulatorClient, _stream), 0,
        ::g::System::IO::BinaryWriter_typeof(), offsetof(SimulatorClient, _writer), 0,
        ::g::System::IO::BinaryReader_typeof(), offsetof(SimulatorClient, _reader), 0,
        ::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/], offsetof(SimulatorClient, _messagesFromClient), 0,
        ::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/], offsetof(SimulatorClient, _messagesToClient), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(SimulatorClient, _readWorker), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(SimulatorClient, _writeWorker), 0,
        ::g::Uno::Bool_typeof(), offsetof(SimulatorClient, _running), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Dispose", NULL, (void*)SimulatorClient__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_IncommingMessages", NULL, (void*)SimulatorClient__get_IncommingMessages_fn, 0, false, ::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/], 0),
        new uFunction("get_IsOnline", NULL, (void*)SimulatorClient__get_IsOnline_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)SimulatorClient__New1_fn, 0, true, type, 1, ::g::Uno::Net::Sockets::Socket_typeof()),
        new uFunction("Send", NULL, (void*)SimulatorClient__Send_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::IBinaryMessage_typeof()));
}

SimulatorClient_type* SimulatorClient_typeof()
{
    static uSStrong<SimulatorClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SimulatorClient);
    options.TypeSize = sizeof(SimulatorClient_type);
    type = (SimulatorClient_type*)uClassType::New("Outracks.Simulator.SimulatorClient", options);
    type->fp_build_ = SimulatorClient_build;
    type->interface0.fp_Send = (void(*)(uObject*, uObject*))SimulatorClient__Send_fn;
    type->interface0.fp_get_IncommingMessages = (void(*)(uObject*, ::g::Outracks::Simulator::ConcurrentQueue**))SimulatorClient__get_IncommingMessages_fn;
    type->interface0.fp_get_IsOnline = (void(*)(uObject*, bool*))SimulatorClient__get_IsOnline_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SimulatorClient__Dispose_fn;
    return type;
}

// public SimulatorClient(Uno.Net.Sockets.Socket socket) :163
void SimulatorClient__ctor__fn(SimulatorClient* __this, ::g::Uno::Net::Sockets::Socket* socket)
{
    __this->ctor_(socket);
}

// public void Dispose() :227
void SimulatorClient__Dispose_fn(SimulatorClient* __this)
{
    __this->Dispose();
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage> get_IncommingMessages() :155
void SimulatorClient__get_IncommingMessages_fn(SimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval)
{
    *__retval = __this->IncommingMessages();
}

// public bool get_IsOnline() :250
void SimulatorClient__get_IsOnline_fn(SimulatorClient* __this, bool* __retval)
{
    *__retval = __this->IsOnline();
}

// public SimulatorClient New(Uno.Net.Sockets.Socket socket) :163
void SimulatorClient__New1_fn(::g::Uno::Net::Sockets::Socket* socket, SimulatorClient** __retval)
{
    *__retval = SimulatorClient::New1(socket);
}

// private void ReadLoop() :189
void SimulatorClient__ReadLoop_fn(SimulatorClient* __this)
{
    __this->ReadLoop();
}

// public void Send(Outracks.IBinaryMessage message) :158
void SimulatorClient__Send_fn(SimulatorClient* __this, uObject* message)
{
    __this->Send(message);
}

// private void WriteLoop() :207
void SimulatorClient__WriteLoop_fn(SimulatorClient* __this)
{
    __this->WriteLoop();
}

// public SimulatorClient(Uno.Net.Sockets.Socket socket) [instance] :163
void SimulatorClient::ctor_(::g::Uno::Net::Sockets::Socket* socket)
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", ".ctor(Uno.Net.Sockets.Socket)");
    _messagesFromClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/]));
    _messagesToClient = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[46/*Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage>*/]));
    _running = true;
    _socket = socket;
    _stream = ::g::Uno::Net::Sockets::NetworkStream::New1(_socket);
    _writer = ::g::System::IO::BinaryWriter::New1(_stream);
    _reader = ::g::System::IO::BinaryReader::New1(_stream);
    _readWorker = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[56/*Uno.Threading.ThreadStart*/], (void*)SimulatorClient__ReadLoop_fn, this));
    _writeWorker = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[56/*Uno.Threading.ThreadStart*/], (void*)SimulatorClient__WriteLoop_fn, this));
    uPtr(_readWorker)->Start();
    uPtr(_writeWorker)->Start();
}

// public void Dispose() [instance] :227
void SimulatorClient::Dispose()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "Dispose()");
    _running = false;
    uPtr(_readWorker)->Join();
    uPtr(_writeWorker)->Join();
    uPtr(_stream)->Dispose();

    try
    {
        {
            uPtr(_socket)->Shutdown(2);
            uPtr(_socket)->Close();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log3(uPtr(e)->Message(), 0, ::STRINGS[25/*"/usr/local/...*/], 244);
    }
}

// public Outracks.Simulator.ConcurrentQueue<Outracks.IBinaryMessage> get_IncommingMessages() [instance] :155
::g::Outracks::Simulator::ConcurrentQueue* SimulatorClient::IncommingMessages()
{
    return _messagesToClient;
}

// public bool get_IsOnline() [instance] :250
bool SimulatorClient::IsOnline()
{
    return true;
}

// private void ReadLoop() [instance] :189
void SimulatorClient::ReadLoop()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "ReadLoop()");

    try
    {
        {
            while (_running)
            {
                while (uPtr(_socket)->Poll(0, 0))
                    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), ::g::Outracks::BinaryMessage::ReadFrom(_reader));

                ::g::Uno::Threading::Thread::Sleep(10);
            }
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), (uObject*)::g::Outracks::Simulator::Protocol::Error::New2(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(e)));
    }
}

// public void Send(Outracks.IBinaryMessage message) [instance] :158
void SimulatorClient::Send(uObject* message)
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "Send(Outracks.IBinaryMessage)");
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesFromClient), message);
}

// private void WriteLoop() [instance] :207
void SimulatorClient::WriteLoop()
{
    uStackFrame __("Outracks.Simulator.SimulatorClient", "WriteLoop()");
    bool ret2;

    try
    {
        {
            while (_running)
            {
                uObject* message;

                while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(_messagesFromClient), (void**)(&message), &ret2), ret2))
                    ::g::Outracks::BinaryMessage::WriteTo(message, _writer);

                ::g::Uno::Threading::Thread::Sleep(10);
            }
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_messagesToClient), (uObject*)::g::Outracks::Simulator::Protocol::Error::New2(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(e)));
        _running = false;
    }
}

// public SimulatorClient New(Uno.Net.Sockets.Socket socket) [static] :163
SimulatorClient* SimulatorClient::New1(::g::Uno::Net::Sockets::Socket* socket)
{
    SimulatorClient* obj1 = (SimulatorClient*)uNew(SimulatorClient_typeof());
    obj1->ctor_(socket);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/SourceReference.cs
// -------------------------------------------------------------------------------------------

// public sealed class SourceReference :6
// {
static void SourceReference_build(uType* type)
{
    ::TYPES[57] = ::g::Outracks::Optional_typeof()->MakeMethod(1/*Read<Outracks.Simulator.TextPosition>*/, ::g::Outracks::Simulator::TextPosition_typeof(), NULL);
    ::TYPES[58] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::TextPosition_typeof(), NULL);
    ::TYPES[59] = ::g::Outracks::Optional_typeof()->MakeMethod(3/*Write<Outracks.Simulator.TextPosition>*/, ::g::Outracks::Simulator::TextPosition_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Action2_typeof()->MakeType(::g::System::IO::BinaryWriter_typeof(), ::g::Outracks::Simulator::TextPosition_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(SourceReference, File), 0,
        ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::TextPosition_typeof(), NULL), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFields(2,
        new uField("File", 0),
        new uField("Location", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SourceReference__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::TextPosition_typeof(), NULL)),
        new uFunction("Read", NULL, (void*)SourceReference__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)SourceReference__Write_fn, 0, true, uVoid_typeof(), 2, ::g::System::IO::BinaryWriter_typeof(), type));
}

uType* SourceReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SourceReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.SourceReference", options);
    type->fp_build_ = SourceReference_build;
    return type;
}

// public SourceReference(string file, Outracks.Optional<Outracks.Simulator.TextPosition> location) :8
void SourceReference__ctor__fn(SourceReference* __this, uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition>* location)
{
    __this->ctor_(file, *location);
}

// public SourceReference New(string file, Outracks.Optional<Outracks.Simulator.TextPosition> location) :8
void SourceReference__New1_fn(uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition>* location, SourceReference** __retval)
{
    *__retval = SourceReference::New1(file, *location);
}

// public static Outracks.Simulator.SourceReference Read(System.IO.BinaryReader r) :19
void SourceReference__Read_fn(::g::System::IO::BinaryReader* r, SourceReference** __retval)
{
    *__retval = SourceReference::Read(r);
}

// public static void Write(System.IO.BinaryWriter w, Outracks.Simulator.SourceReference s) :27
void SourceReference__Write_fn(::g::System::IO::BinaryWriter* w, SourceReference* s)
{
    SourceReference::Write(w, s);
}

// public SourceReference(string file, Outracks.Optional<Outracks.Simulator.TextPosition> location) [instance] :8
void SourceReference::ctor_(uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> location)
{
    File = file;
    Location().Value< ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> >() = location;
}

// public SourceReference New(string file, Outracks.Optional<Outracks.Simulator.TextPosition> location) [static] :8
SourceReference* SourceReference::New1(uString* file, ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> location)
{
    SourceReference* obj1 = (SourceReference*)uNew(SourceReference_typeof());
    obj1->ctor_(file, location);
    return obj1;
}

// public static Outracks.Simulator.SourceReference Read(System.IO.BinaryReader r) [static] :19
SourceReference* SourceReference::Read(::g::System::IO::BinaryReader* r)
{
    uStackFrame __("Outracks.Simulator.SourceReference", "Read(System.IO.BinaryReader)");
    ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> ret2;
    uString* file = uPtr(r)->ReadString();
    ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> location = (::g::Outracks::Optional__Read_fn(::TYPES[57/*Outracks.Optional.Read<Outracks.Simulator.TextPosition>*/], r, uDelegate::New(::TYPES[58/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.TextPosition>*/], (void*)::g::Outracks::Simulator::TextPosition__Read_fn), &ret2), ret2);
    return SourceReference::New1(file, location);
}

// public static void Write(System.IO.BinaryWriter w, Outracks.Simulator.SourceReference s) [static] :27
void SourceReference::Write(::g::System::IO::BinaryWriter* w, SourceReference* s)
{
    uStackFrame __("Outracks.Simulator.SourceReference", "Write(System.IO.BinaryWriter,Outracks.Simulator.SourceReference)");
    uPtr(w)->Write6(uPtr(s)->File);
    ::g::Outracks::Optional__Write_fn(::TYPES[59/*Outracks.Optional.Write<Outracks.Simulator.TextPosition>*/], w, uCRef(s->Location().Value< ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> >()), uDelegate::New(::TYPES[60/*Uno.Action<System.IO.BinaryWriter, Outracks.Simulator.TextPosition>*/], (void*)::g::Outracks::Simulator::TextPosition__Write_fn));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/SourceReference.cs
// -------------------------------------------------------------------------------------------

// public static class SourceReferenceCanonicalization :34
// {
static void SourceReferenceCanonicalization_build(uType* type)
{
    ::STRINGS[26] = uString::Const("?");
    ::STRINGS[27] = uString::Const("(");
    ::STRINGS[28] = uString::Const(")");
    ::STRINGS[29] = uString::Const("");
    ::STRINGS[30] = uString::Const(",");
    ::TYPES[61] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::SourceReference_typeof(), NULL);
    ::TYPES[62] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::TextPosition_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("ToCanonicalForm", NULL, (void*)SourceReferenceCanonicalization__ToCanonicalForm_fn, 0, true, ::g::Uno::String_typeof(), 1, ::TYPES[61/*Outracks.Optional<Outracks.Simulator.SourceReference>*/]),
        new uFunction("ToCanonicalForm", NULL, (void*)SourceReferenceCanonicalization__ToCanonicalForm1_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Outracks::Simulator::SourceReference_typeof()));
}

uClassType* SourceReferenceCanonicalization_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.SourceReferenceCanonicalization", options);
    type->fp_build_ = SourceReferenceCanonicalization_build;
    return type;
}

// public static string ToCanonicalForm(Outracks.Optional<Outracks.Simulator.SourceReference> src) :36
void SourceReferenceCanonicalization__ToCanonicalForm_fn(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> >* src, uString** __retval)
{
    *__retval = SourceReferenceCanonicalization::ToCanonicalForm(*src);
}

// public static string ToCanonicalForm(Outracks.Simulator.SourceReference src) :41
void SourceReferenceCanonicalization__ToCanonicalForm1_fn(::g::Outracks::Simulator::SourceReference* src, uString** __retval)
{
    *__retval = SourceReferenceCanonicalization::ToCanonicalForm1(src);
}

// private static string ToCanonicalForm(Outracks.Simulator.TextPosition pos) :49
void SourceReferenceCanonicalization__ToCanonicalForm2_fn(::g::Outracks::Simulator::TextPosition* pos, uString** __retval)
{
    *__retval = SourceReferenceCanonicalization::ToCanonicalForm2(*pos);
}

// public static string ToCanonicalForm(Outracks.Optional<Outracks.Simulator.SourceReference> src) [static] :36
uString* SourceReferenceCanonicalization::ToCanonicalForm(::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::SourceReference*> > src)
{
    uStackFrame __("Outracks.Simulator.SourceReferenceCanonicalization", "ToCanonicalForm(Outracks.Optional<Outracks.Simulator.SourceReference>)");
    return src.HasValue(::TYPES[61/*Outracks.Optional<Outracks.Simulator.SourceReference>*/]) ? (uString*)SourceReferenceCanonicalization::ToCanonicalForm1(src.Value(::TYPES[61/*Outracks.Optional<Outracks.Simulator.SourceReference>*/])) : ::STRINGS[26/*"?"*/];
}

// public static string ToCanonicalForm(Outracks.Simulator.SourceReference src) [static] :41
uString* SourceReferenceCanonicalization::ToCanonicalForm1(::g::Outracks::Simulator::SourceReference* src)
{
    uStackFrame __("Outracks.Simulator.SourceReferenceCanonicalization", "ToCanonicalForm(Outracks.Simulator.SourceReference)");
    ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> ind1;
    ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> ind2;
    return ::g::Uno::String::op_Addition2(uPtr(src)->File, (ind1 = uPtr(src)->Location().Value< ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> >(), (&ind1))->HasValue(::TYPES[62/*Outracks.Optional<Outracks.Simulator.TextPosition>*/]) ? (uString*)::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[27/*"("*/], SourceReferenceCanonicalization::ToCanonicalForm2((ind2 = uPtr(src)->Location().Value< ::g::Outracks::Optional1< ::g::Outracks::Simulator::TextPosition> >(), (&ind2))->Value(::TYPES[62/*Outracks.Optional<Outracks.Simulator.TextPosition>*/]))), ::STRINGS[28/*")"*/]) : ::STRINGS[29/*""*/]);
}

// private static string ToCanonicalForm(Outracks.Simulator.TextPosition pos) [static] :49
uString* SourceReferenceCanonicalization::ToCanonicalForm2(::g::Outracks::Simulator::TextPosition pos)
{
    uStackFrame __("Outracks.Simulator.SourceReferenceCanonicalization", "ToCanonicalForm(Outracks.Simulator.TextPosition)");
    return ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox(::TYPES[69/*Outracks.Simulator.LineNumber*/], pos.Line), ::STRINGS[30/*","*/]), uBox(::TYPES[70/*Outracks.Simulator.CharacterNumber*/], pos.Character));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/StringExtensions.cs
// --------------------------------------------------------------------------------------------

// public static class StringSplitting :21
// {
static void StringSplitting_build(uType* type)
{
    ::TYPES[63] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[64] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    ::TYPES[34] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[44] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[44/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->Reflection.SetFunctions(8,
        new uFunction("AfterFirst", NULL, (void*)StringSplitting__AfterFirst_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("AfterLast", NULL, (void*)StringSplitting__AfterLast_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("BeforeFirst", NULL, (void*)StringSplitting__BeforeFirst_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("BeforeLast", NULL, (void*)StringSplitting__BeforeLast_fn, 0, true, ::g::Uno::String_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Join", NULL, (void*)StringSplitting__Join_fn, 0, true, ::g::Uno::String_typeof(), 2, ::TYPES[63/*Uno.Collections.IEnumerable<string>*/], ::g::Uno::String_typeof()),
        new uFunction("JoinToString`1", type->MethodTypes[0], (void*)StringSplitting__JoinToString_fn, 0, true, ::g::Uno::String_typeof(), 2, ::TYPES[34/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL), ::g::Uno::String_typeof()),
        new uFunction("OrdinalIndexOf", NULL, (void*)StringSplitting__OrdinalIndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("OrdinalLastIndexOf", NULL, (void*)StringSplitting__OrdinalLastIndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uClassType* StringSplitting_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.StringSplitting", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->fp_build_ = StringSplitting_build;
    return type;
}

// public static string AfterFirst(string s, string seperator) :58
void StringSplitting__AfterFirst_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::AfterFirst(s, seperator);
}

// public static string AfterLast(string s, string seperator) :41
void StringSplitting__AfterLast_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::AfterLast(s, seperator);
}

// public static string BeforeFirst(string s, string seperator) :66
void StringSplitting__BeforeFirst_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::BeforeFirst(s, seperator);
}

// public static string BeforeLast(string s, string seperator) :49
void StringSplitting__BeforeLast_fn(uString* s, uString* seperator, uString** __retval)
{
    *__retval = StringSplitting::BeforeLast(s, seperator);
}

// public static string Join(Uno.Collections.IEnumerable<string> si, string separator) :92
void StringSplitting__Join_fn(uObject* si, uString* separator, uString** __retval)
{
    *__retval = StringSplitting::Join(si, separator);
}

// public static string JoinToString<T>(Uno.Collections.IEnumerable<T> objects, string separator) :75
void StringSplitting__JoinToString_fn(uType* __type, uObject* objects, uString* separator, uString** __retval)
{
    *__retval = StringSplitting::JoinToString(__type, objects, separator);
}

// public static int OrdinalIndexOf(string str, string seperator) :36
void StringSplitting__OrdinalIndexOf_fn(uString* str, uString* seperator, int32_t* __retval)
{
    *__retval = StringSplitting::OrdinalIndexOf(str, seperator);
}

// public static int OrdinalLastIndexOf(string str, string seperator) :23
void StringSplitting__OrdinalLastIndexOf_fn(uString* str, uString* seperator, int32_t* __retval)
{
    *__retval = StringSplitting::OrdinalLastIndexOf(str, seperator);
}

// public static string AfterFirst(string s, string seperator) [static] :58
uString* StringSplitting::AfterFirst(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "AfterFirst(string,string)");
    int32_t index = ::g::Uno::String::IndexOf3(uPtr(s), seperator, 0);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring(s, index + uPtr(seperator)->Length());
}

// public static string AfterLast(string s, string seperator) [static] :41
uString* StringSplitting::AfterLast(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "AfterLast(string,string)");
    int32_t index = StringSplitting::OrdinalLastIndexOf(s, seperator);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring(uPtr(s), index + uPtr(seperator)->Length());
}

// public static string BeforeFirst(string s, string seperator) [static] :66
uString* StringSplitting::BeforeFirst(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "BeforeFirst(string,string)");
    int32_t index = ::g::Uno::String::IndexOf3(uPtr(s), seperator, 0);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring1(s, 0, index);
}

// public static string BeforeLast(string s, string seperator) [static] :49
uString* StringSplitting::BeforeLast(uString* s, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "BeforeLast(string,string)");
    int32_t index = StringSplitting::OrdinalLastIndexOf(s, seperator);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New1());

    return ::g::Uno::String::Substring1(uPtr(s), 0, index);
}

// public static string Join(Uno.Collections.IEnumerable<string> si, string separator) [static] :92
uString* StringSplitting::Join(uObject* si, uString* separator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "Join(Uno.Collections.IEnumerable<string>,string)");
    uString* ret2;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    bool isFirst = true;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(si), ::TYPES[63/*Uno.Collections.IEnumerable<string>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    uString* part = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[64/*Uno.Collections.IEnumerator<string>*/]), &ret2), ret2);

                    if (isFirst)
                        isFirst = false;
                    else
                        uPtr(sb)->Append2(separator);

                    uPtr(sb)->Append2(part);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_10;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_10:;
    }

    return sb->ToString();
}

// public static string JoinToString<T>(Uno.Collections.IEnumerable<T> objects, string separator) [static] :75
uString* StringSplitting::JoinToString(uType* __type, uObject* objects, uString* separator)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Outracks.Simulator.StringSplitting", "JoinToString`1(Uno.Collections.IEnumerable<T>,string)");
    uT ret3(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT obj(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    bool isFirst = true;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(objects), __types[0]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[1]), &ret3), ret3);

                    if (isFirst)
                        isFirst = false;
                    else
                        uPtr(sb)->Append2(separator);

                    uPtr(sb)->Append2(::g::Uno::Object::ToString(uBoxPtr(__type->U(0), uPtr(obj), U_ALLOCA(__type->U(0)->ObjectSize))));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_11;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_11:;
    }

    return sb->ToString();
}

// public static int OrdinalIndexOf(string str, string seperator) [static] :36
int32_t StringSplitting::OrdinalIndexOf(uString* str, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "OrdinalIndexOf(string,string)");
    return ::g::Uno::String::IndexOf3(uPtr(str), seperator, 0);
}

// public static int OrdinalLastIndexOf(string str, string seperator) [static] :23
int32_t StringSplitting::OrdinalLastIndexOf(uString* str, uString* seperator)
{
    uStackFrame __("Outracks.Simulator.StringSplitting", "OrdinalLastIndexOf(string,string)");

    for (int32_t i = uPtr(str)->Length() - uPtr(seperator)->Length(); (i--) > 0; )
    {
        int32_t j = 0;

        while ((j < uPtr(seperator)->Length()) && (uPtr(str)->Item(i + j) == uPtr(seperator)->Item(j)))
            j++;

        if (j == uPtr(seperator)->Length())
            return i;
    }

    return -1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Tasks.cs
// ---------------------------------------------------------------------------------

// public sealed class Task<T> :8
// {
static void Task_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(Task, Mutex), 0,
        ::g::Uno::Action_typeof(), offsetof(Task, _wait), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Exception_typeof(), offsetof(Task, _Exception), 0,
        ::g::Uno::Bool_typeof(), offsetof(Task, _IsCompleted), 0,
        ::g::Uno::Bool_typeof(), offsetof(Task, _IsFaulted), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Exception", NULL, (void*)Task__get_Exception_fn, 0, false, ::g::Uno::Exception_typeof(), 0),
        new uFunction("get_IsCompleted", NULL, (void*)Task__get_IsCompleted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsFaulted", NULL, (void*)Task__get_IsFaulted_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Result", NULL, (void*)Task__get_Result_fn, 0, false, type->T(0), 0));
}

uType* Task_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Task`1", options);
    type->fp_build_ = Task_build;
    return type;
}

// internal Task(Uno.Action wait) :14
void Task__ctor__fn(Task* __this, uDelegate* wait)
{
    __this->ctor_(wait);
}

// public generated Uno.Exception get_Exception() :23
void Task__get_Exception_fn(Task* __this, ::g::Uno::Exception** __retval)
{
    *__retval = __this->Exception();
}

// internal generated void set_Exception(Uno.Exception value) :23
void Task__set_Exception_fn(Task* __this, ::g::Uno::Exception* value)
{
    __this->Exception(value);
}

// public generated bool get_IsCompleted() :19
void Task__get_IsCompleted_fn(Task* __this, bool* __retval)
{
    *__retval = __this->IsCompleted();
}

// internal generated void set_IsCompleted(bool value) :19
void Task__set_IsCompleted_fn(Task* __this, bool* value)
{
    __this->IsCompleted(*value);
}

// public generated bool get_IsFaulted() :21
void Task__get_IsFaulted_fn(Task* __this, bool* __retval)
{
    *__retval = __this->IsFaulted();
}

// internal generated void set_IsFaulted(bool value) :21
void Task__set_IsFaulted_fn(Task* __this, bool* value)
{
    __this->IsFaulted(*value);
}

// internal Task New(Uno.Action wait) :14
void Task__New1_fn(uType* __type, uDelegate* wait, Task** __retval)
{
    *__retval = Task::New1(__type, wait);
}

// public T get_Result() :28
void Task__get_Result_fn(Task* __this, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Task`1", "get_Result()");
    uPtr(__this->_wait)->InvokeVoid();

    if (__this->IsFaulted())
        U_THROW(__this->Exception());

    return __retval.Store(__this->_result()), void();
}

// internal void set_Result(T value) :37
void Task__set_Result_fn(Task* __this, void* value)
{
    __this->_result() = value;
}

// internal Task(Uno.Action wait) [instance] :14
void Task::ctor_(uDelegate* wait)
{
    Mutex = ::g::Uno::Threading::Mutex::New1();
    _wait = wait;
}

// public generated Uno.Exception get_Exception() [instance] :23
::g::Uno::Exception* Task::Exception()
{
    return _Exception;
}

// internal generated void set_Exception(Uno.Exception value) [instance] :23
void Task::Exception(::g::Uno::Exception* value)
{
    _Exception = value;
}

// public generated bool get_IsCompleted() [instance] :19
bool Task::IsCompleted()
{
    return _IsCompleted;
}

// internal generated void set_IsCompleted(bool value) [instance] :19
void Task::IsCompleted(bool value)
{
    _IsCompleted = value;
}

// public generated bool get_IsFaulted() [instance] :21
bool Task::IsFaulted()
{
    return _IsFaulted;
}

// internal generated void set_IsFaulted(bool value) [instance] :21
void Task::IsFaulted(bool value)
{
    _IsFaulted = value;
}

// internal Task New(Uno.Action wait) [static] :14
Task* Task::New1(uType* __type, uDelegate* wait)
{
    Task* obj1 = (Task*)uNew(__type);
    obj1->ctor_(wait);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Tasks.cs
// ---------------------------------------------------------------------------------

// public static class Tasks :42
// {
static void Tasks_build(uType* type)
{
    ::TYPES[65] = ::g::Outracks::Simulator::TaskThread_typeof();
    ::TYPES[66] = ::g::Uno::Func_typeof();
    ::TYPES[67] = ::g::Outracks::Simulator::WaitForFirstResult_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[65/*Outracks.Simulator.TaskThread`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*Run<T>*/, type->MethodTypes[1]->U(0), NULL),
        ::TYPES[66/*Uno.Func`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[67/*Outracks.Simulator.WaitForFirstResult`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->Reflection.SetFunctions(2,
        new uFunction("Run`1", type->MethodTypes[0], (void*)Tasks__Run_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL), 1, ::TYPES[66/*Uno.Func`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL)),
        new uFunction("WaitForFirstResult`1", type->MethodTypes[1], (void*)Tasks__WaitForFirstResult_fn, 0, true, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->MethodTypes[1]->U(0), NULL), 2, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(type->MethodTypes[1]->U(0), NULL), NULL), ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), type->MethodTypes[1]->U(0), NULL)));
}

uClassType* Tasks_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Tasks", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(1, 3,0);
    type->fp_build_ = Tasks_build;
    return type;
}

// public static Outracks.Simulator.Task<T> Run<T>(Uno.Func<T> method) :49
void Tasks__Run_fn(uType* __type, uDelegate* method, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = Tasks::Run(__type, method);
}

// public static Outracks.Simulator.Task<T> WaitForFirstResult<T>(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> tasks, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :44
void Tasks__WaitForFirstResult_fn(uType* __type, uObject* tasks, uDelegate* onNoResult, ::g::Outracks::Simulator::Task** __retval)
{
    *__retval = Tasks::WaitForFirstResult(__type, tasks, onNoResult);
}

// public static Outracks.Simulator.Task<T> Run<T>(Uno.Func<T> method) [static] :49
::g::Outracks::Simulator::Task* Tasks::Run(uType* __type, uDelegate* method)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.TaskThread<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Tasks", "Run`1(Uno.Func<T>)");
    ::g::Outracks::Simulator::TaskThread* t = (::g::Outracks::Simulator::TaskThread*)::g::Outracks::Simulator::TaskThread::New1(__types[0], method);
    uPtr(t->Thread)->Start();
    return (::g::Outracks::Simulator::Task*)t->Task;
}

// public static Outracks.Simulator.Task<T> WaitForFirstResult<T>(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> tasks, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [static] :44
::g::Outracks::Simulator::Task* Tasks::WaitForFirstResult(uType* __type, uObject* tasks, uDelegate* onNoResult)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.Tasks.Run<T>*/),
        __type->Precalced(1/*Uno.Func<T>*/),
        __type->Precalced(2/*Outracks.Simulator.WaitForFirstResult<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Tasks", "WaitForFirstResult`1(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>>,Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T>)");
    return (::g::Outracks::Simulator::Task*)Tasks::Run(__types[0], uDelegate::New(__types[1], (void*)::g::Outracks::Simulator::WaitForFirstResult__Execute_fn, (::g::Outracks::Simulator::WaitForFirstResult*)::g::Outracks::Simulator::WaitForFirstResult::New1(__types[2], tasks, onNoResult)));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Tasks.cs
// ---------------------------------------------------------------------------------

// internal sealed class TaskThread<T> :65
// {
static void TaskThread_build(uType* type)
{
    ::TYPES[56] = ::g::Uno::Threading::ThreadStart_typeof();
    ::TYPES[68] = ::g::Outracks::Simulator::Task_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[15] = ::g::Uno::Exception_typeof();
    type->SetPrecalc(
        ::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::TYPES[68/*Outracks.Simulator.Task`1*/]->MakeType(type->T(0), NULL), offsetof(TaskThread, Task), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(TaskThread, Thread), 0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(TaskThread, _func), 0);
}

uType* TaskThread_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TaskThread);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.TaskThread`1", options);
    type->fp_build_ = TaskThread_build;
    return type;
}

// public TaskThread(Uno.Func<T> func) :72
void TaskThread__ctor__fn(TaskThread* __this, uDelegate* func)
{
    __this->ctor_(func);
}

// public TaskThread New(Uno.Func<T> func) :72
void TaskThread__New1_fn(uType* __type, uDelegate* func, TaskThread** __retval)
{
    *__retval = TaskThread::New1(__type, func);
}

// private void Run() :79
void TaskThread__Run_fn(TaskThread* __this)
{
    __this->Run();
}

// public TaskThread(Uno.Func<T> func) [instance] :72
void TaskThread::ctor_(uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.Task<T>*/),
    };
    uStackFrame __("Outracks.Simulator.TaskThread`1", ".ctor(Uno.Func<T>)");
    _func = func;
    Thread = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[56/*Uno.Threading.ThreadStart*/], (void*)TaskThread__Run_fn, this));
    Task = ((::g::Outracks::Simulator::Task*)::g::Outracks::Simulator::Task::New1(__types[0], uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)::g::Uno::Threading::Thread__Join_fn, uPtr(Thread))));
}

// private void Run() [instance] :79
void TaskThread::Run()
{
    uStackFrame __("Outracks.Simulator.TaskThread`1", "Run()");
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    try
    {
        {
            ::g::Outracks::Simulator::Task__set_Result_fn(uPtr(Task), (uPtr(_func)->Invoke(&ret2), ret2));
            uPtr(Task)->IsCompleted(true);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(Task)->Exception(e);
        uPtr(Task)->IsFaulted(true);
        uPtr(Task)->IsCompleted(true);
    }
}

// public TaskThread New(Uno.Func<T> func) [static] :72
TaskThread* TaskThread::New1(uType* __type, uDelegate* func)
{
    TaskThread* obj1 = (TaskThread*)uNew(__type);
    obj1->ctor_(func);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/TextOffset.cs
// --------------------------------------------------------------------------------------

// public sealed class TextOffset :5
// {
static void TextOffset_build(uType* type)
{
    ::STRINGS[31] = uString::Const("@");
    ::TYPES[0] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[0/*int*/], offsetof(TextOffset, _offset), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Equals", NULL, (void*)TextOffset__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)TextOffset__New1_fn, 0, true, type, 1, ::TYPES[0/*int*/]));
}

uType* TextOffset_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TextOffset);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.TextOffset", options);
    type->fp_build_ = TextOffset_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))TextOffset__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))TextOffset__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))TextOffset__ToString_fn;
    return type;
}

// public TextOffset(int offset) :9
void TextOffset__ctor__fn(TextOffset* __this, int32_t* offset)
{
    __this->ctor_(*offset);
}

// public override sealed bool Equals(object obj) :36
void TextOffset__Equals_fn(TextOffset* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "Equals(object)");
    return *__retval = uIs(obj, __this->__type) && __this->Equals2(uCast<TextOffset*>(obj, __this->__type)), void();
}

// public bool Equals(Outracks.Simulator.TextOffset other) :41
void TextOffset__Equals2_fn(TextOffset* __this, TextOffset* other, bool* __retval)
{
    *__retval = __this->Equals2(other);
}

// public override sealed int GetHashCode() :31
void TextOffset__GetHashCode_fn(TextOffset* __this, int32_t* __retval)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "GetHashCode()");
    int32_t ind1;
    return *__retval = ::g::Uno::Int::GetHashCode((ind1 = __this->_offset, ind1), ::TYPES[0/*int*/]), void();
}

// public TextOffset New(int offset) :9
void TextOffset__New1_fn(int32_t* offset, TextOffset** __retval)
{
    *__retval = TextOffset::New1(*offset);
}

// public static operator ==(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) :46
void TextOffset__op_Equality_fn(TextOffset* a, TextOffset* b, bool* __retval)
{
    *__retval = TextOffset::op_Equality(a, b);
}

// public static operator >(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) :64
void TextOffset__op_GreaterThan_fn(TextOffset* a, TextOffset* b, bool* __retval)
{
    *__retval = TextOffset::op_GreaterThan(a, b);
}

// public static operator >=(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) :74
void TextOffset__op_GreaterThanOrEqual_fn(TextOffset* a, TextOffset* b, bool* __retval)
{
    *__retval = TextOffset::op_GreaterThanOrEqual(a, b);
}

// public static implicit operator int(Outracks.Simulator.TextOffset d) :14
void TextOffset__op_Implicit1_fn(TextOffset* d, int32_t* __retval)
{
    *__retval = TextOffset::op_Implicit1(d);
}

// public static operator !=(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) :54
void TextOffset__op_Inequality_fn(TextOffset* a, TextOffset* b, bool* __retval)
{
    *__retval = TextOffset::op_Inequality(a, b);
}

// public static operator <(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) :59
void TextOffset__op_LessThan_fn(TextOffset* a, TextOffset* b, bool* __retval)
{
    *__retval = TextOffset::op_LessThan(a, b);
}

// public static operator <=(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) :69
void TextOffset__op_LessThanOrEqual_fn(TextOffset* a, TextOffset* b, bool* __retval)
{
    *__retval = TextOffset::op_LessThanOrEqual(a, b);
}

// public override sealed string ToString() :26
void TextOffset__ToString_fn(TextOffset* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::STRINGS[31/*"@"*/], uBox<int32_t>(::TYPES[0/*int*/], __this->_offset)), void();
}

// public TextOffset(int offset) [instance] :9
void TextOffset::ctor_(int32_t offset)
{
    _offset = offset;
}

// public bool Equals(Outracks.Simulator.TextOffset other) [instance] :41
bool TextOffset::Equals2(TextOffset* other)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "Equals(Outracks.Simulator.TextOffset)");
    return _offset == uPtr(other)->_offset;
}

// public TextOffset New(int offset) [static] :9
TextOffset* TextOffset::New1(int32_t offset)
{
    TextOffset* obj2 = (TextOffset*)uNew(TextOffset_typeof());
    obj2->ctor_(offset);
    return obj2;
}

// public static operator ==(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) [static] :46
bool TextOffset::op_Equality(TextOffset* a, TextOffset* b)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "==(Outracks.Simulator.TextOffset,Outracks.Simulator.TextOffset)");

    if (a == NULL)
        return b == NULL;

    return uPtr(a)->Equals2(b);
}

// public static operator >(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) [static] :64
bool TextOffset::op_GreaterThan(TextOffset* a, TextOffset* b)
{
    uStackFrame __("Outracks.Simulator.TextOffset", ">(Outracks.Simulator.TextOffset,Outracks.Simulator.TextOffset)");
    return uPtr(a)->_offset > uPtr(b)->_offset;
}

// public static operator >=(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) [static] :74
bool TextOffset::op_GreaterThanOrEqual(TextOffset* a, TextOffset* b)
{
    uStackFrame __("Outracks.Simulator.TextOffset", ">=(Outracks.Simulator.TextOffset,Outracks.Simulator.TextOffset)");
    return uPtr(a)->_offset >= uPtr(b)->_offset;
}

// public static implicit operator int(Outracks.Simulator.TextOffset d) [static] :14
int32_t TextOffset::op_Implicit1(TextOffset* d)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "op_Implicit(Outracks.Simulator.TextOffset)~int");
    return uPtr(d)->_offset;
}

// public static operator !=(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) [static] :54
bool TextOffset::op_Inequality(TextOffset* a, TextOffset* b)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "!=(Outracks.Simulator.TextOffset,Outracks.Simulator.TextOffset)");
    return !TextOffset::op_Equality(a, b);
}

// public static operator <(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) [static] :59
bool TextOffset::op_LessThan(TextOffset* a, TextOffset* b)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "<(Outracks.Simulator.TextOffset,Outracks.Simulator.TextOffset)");
    return uPtr(a)->_offset < uPtr(b)->_offset;
}

// public static operator <=(Outracks.Simulator.TextOffset a, Outracks.Simulator.TextOffset b) [static] :69
bool TextOffset::op_LessThanOrEqual(TextOffset* a, TextOffset* b)
{
    uStackFrame __("Outracks.Simulator.TextOffset", "<=(Outracks.Simulator.TextOffset,Outracks.Simulator.TextOffset)");
    return uPtr(a)->_offset <= uPtr(b)->_offset;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/TextOffsetConversion.cs
// ------------------------------------------------------------------------------------------------

// public static class TextOffsetConversion :5
// {
static void TextOffsetConversion_build(uType* type)
{
    ::STRINGS[32] = uString::Const("\r");
    ::STRINGS[29] = uString::Const("");
    ::TYPES[40] = ::g::Uno::Char_typeof()->Array();
    type->Reflection.SetFunctions(3,
        new uFunction("OffsetBy", NULL, (void*)TextOffsetConversion__OffsetBy_fn, 0, true, ::g::Outracks::Simulator::TextPosition_typeof(), 3, ::g::Outracks::Simulator::TextPosition_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof()),
        new uFunction("ToOffset", NULL, (void*)TextOffsetConversion__ToOffset_fn, 0, true, ::g::Outracks::Simulator::TextOffset_typeof(), 2, ::g::Outracks::Simulator::TextPosition_typeof(), ::g::Uno::String_typeof()),
        new uFunction("ToPosition", NULL, (void*)TextOffsetConversion__ToPosition_fn, 0, true, ::g::Outracks::Simulator::TextPosition_typeof(), 2, ::g::Outracks::Simulator::TextOffset_typeof(), ::g::Uno::String_typeof()));
}

uClassType* TextOffsetConversion_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.TextOffsetConversion", options);
    type->fp_build_ = TextOffsetConversion_build;
    return type;
}

// public static Outracks.Simulator.TextPosition OffsetBy(Outracks.Simulator.TextPosition pos, int characters, string code) :63
void TextOffsetConversion__OffsetBy_fn(::g::Outracks::Simulator::TextPosition* pos, int32_t* characters, uString* code, ::g::Outracks::Simulator::TextPosition* __retval)
{
    *__retval = TextOffsetConversion::OffsetBy(*pos, *characters, code);
}

// public static Outracks.Simulator.TextOffset ToOffset(Outracks.Simulator.TextPosition pos, string data) :14
void TextOffsetConversion__ToOffset_fn(::g::Outracks::Simulator::TextPosition* pos, uString* data, ::g::Outracks::Simulator::TextOffset** __retval)
{
    *__retval = TextOffsetConversion::ToOffset(*pos, data);
}

// public static Outracks.Simulator.TextPosition ToPosition(Outracks.Simulator.TextOffset offset, string data) :37
void TextOffsetConversion__ToPosition_fn(::g::Outracks::Simulator::TextOffset* offset, uString* data, ::g::Outracks::Simulator::TextPosition* __retval)
{
    *__retval = TextOffsetConversion::ToPosition(offset, data);
}

// public static Outracks.Simulator.TextPosition OffsetBy(Outracks.Simulator.TextPosition pos, int characters, string code) [static] :63
::g::Outracks::Simulator::TextPosition TextOffsetConversion::OffsetBy(::g::Outracks::Simulator::TextPosition pos, int32_t characters, uString* code)
{
    uStackFrame __("Outracks.Simulator.TextOffsetConversion", "OffsetBy(Outracks.Simulator.TextPosition,int,string)");
    return TextOffsetConversion::ToPosition(::g::Outracks::Simulator::TextOffset::New1(::g::Outracks::Simulator::TextOffset::op_Implicit1(TextOffsetConversion::ToOffset(pos, code)) + characters), code);
}

// public static Outracks.Simulator.TextOffset ToOffset(Outracks.Simulator.TextPosition pos, string data) [static] :14
::g::Outracks::Simulator::TextOffset* TextOffsetConversion::ToOffset(::g::Outracks::Simulator::TextPosition pos, uString* data)
{
    uStackFrame __("Outracks.Simulator.TextOffsetConversion", "ToOffset(Outracks.Simulator.TextPosition,string)");

    if (::g::Uno::String::IsNullOrEmpty(data))
        U_THROW(::g::Uno::ArgumentNullException::New6(data));

    uArray* lines = ::g::Uno::String::Split(uPtr(data), uArray::Init<int32_t>(::TYPES[40/*char[]*/], 1, 10));

    if ((::g::Outracks::Simulator::LineNumber__op_Implicit1(pos.Line) < 1) || (::g::Outracks::Simulator::LineNumber__op_Implicit1(pos.Line) > uPtr(lines)->Length()))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    int32_t sizeOfDataBefore = 0;

    for (int32_t i = 0; i < (::g::Outracks::Simulator::LineNumber__op_Implicit1(pos.Line) - 1); ++i)
        sizeOfDataBefore = sizeOfDataBefore + (uPtr(::g::Uno::String::Replace1(uPtr(uPtr(lines)->Strong<uString*>(i)), ::STRINGS[32/*"\r"*/], ::STRINGS[29/*""*/]))->Length() + 1);

    uString* line = ::g::Uno::String::Replace1(uPtr(uPtr(lines)->Strong<uString*>(::g::Outracks::Simulator::LineNumber__op_Implicit1(pos.Line) - 1)), ::STRINGS[32/*"\r"*/], ::STRINGS[29/*""*/]);

    if ((::g::Outracks::Simulator::CharacterNumber__op_Implicit1(pos.Character) < 1) || ((::g::Outracks::Simulator::CharacterNumber__op_Implicit1(pos.Character) - 1) > uPtr(line)->Length()))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return ::g::Outracks::Simulator::TextOffset::New1((sizeOfDataBefore + ::g::Outracks::Simulator::CharacterNumber__op_Implicit1(pos.Character)) - 1);
}

// public static Outracks.Simulator.TextPosition ToPosition(Outracks.Simulator.TextOffset offset, string data) [static] :37
::g::Outracks::Simulator::TextPosition TextOffsetConversion::ToPosition(::g::Outracks::Simulator::TextOffset* offset, uString* data)
{
    uStackFrame __("Outracks.Simulator.TextOffsetConversion", "ToPosition(Outracks.Simulator.TextOffset,string)");

    if (::g::Uno::String::IsNullOrEmpty(data))
        U_THROW(::g::Uno::ArgumentNullException::New6(data));

    uArray* lines = ::g::Uno::String::Split(uPtr(::g::Uno::String::Replace1(uPtr(data), ::STRINGS[32/*"\r"*/], ::STRINGS[29/*""*/])), uArray::Init<int32_t>(::TYPES[40/*char[]*/], 1, 10));
    int32_t numLinesBeforeOffset = 0;
    int32_t pos = 0;

    for (int32_t i = 0; i < uPtr(lines)->Length(); ++i)
    {
        if (::g::Outracks::Simulator::TextOffset::op_Implicit1(offset) < ((pos + uPtr(uPtr(lines)->Strong<uString*>(i))->Length()) + 1))
            break;

        ++numLinesBeforeOffset;
        pos = pos + (uPtr(uPtr(lines)->Strong<uString*>(i))->Length() + 1);
    }

    int32_t character = ::g::Outracks::Simulator::TextOffset::op_Implicit1(offset) - pos;
    return ::g::Outracks::Simulator::TextPosition__New1(::g::Outracks::Simulator::LineNumber__New1(numLinesBeforeOffset + 1), ::g::Outracks::Simulator::CharacterNumber__New1(character + 1));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/TextPosition.cs
// ----------------------------------------------------------------------------------------

// public struct TextPosition :6
// {
static void TextPosition_build(uType* type)
{
    ::STRINGS[33] = uString::Const(":");
    ::TYPES[69] = ::g::Outracks::Simulator::LineNumber_typeof();
    ::TYPES[70] = ::g::Outracks::Simulator::CharacterNumber_typeof();
    type->SetFields(0,
        ::TYPES[69/*Outracks.Simulator.LineNumber*/], offsetof(TextPosition, Line), 0,
        ::TYPES[70/*Outracks.Simulator.CharacterNumber*/], offsetof(TextPosition, Character), 0);
    type->Reflection.SetFields(2,
        new uField("Character", 1),
        new uField("Line", 0));
    type->Reflection.SetFunctions(4,
        new uFunction("Equals", NULL, (void*)TextPosition__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction(".ctor", NULL, (void*)TextPosition__New1_fn, 0, true, type, 2, ::TYPES[69/*Outracks.Simulator.LineNumber*/], ::TYPES[70/*Outracks.Simulator.CharacterNumber*/]),
        new uFunction("Read", NULL, (void*)TextPosition__Read_fn, 0, true, type, 1, ::g::System::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)TextPosition__Write_fn, 0, true, uVoid_typeof(), 2, ::g::System::IO::BinaryWriter_typeof(), type));
}

uStructType* TextPosition_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(TextPosition);
    options.ValueSize = sizeof(TextPosition);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Outracks.Simulator.TextPosition", options);
    type->fp_build_ = TextPosition_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))TextPosition__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))TextPosition__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))TextPosition__ToString_fn;
    return type;
}

// public TextPosition(Outracks.Simulator.LineNumber line, Outracks.Simulator.CharacterNumber character) :11
void TextPosition__ctor__fn(TextPosition* __this, ::g::Outracks::Simulator::LineNumber* line, ::g::Outracks::Simulator::CharacterNumber* character)
{
    __this->ctor_(*line, *character);
}

// public override sealed bool Equals(object obj) :27
void TextPosition__Equals_fn(TextPosition* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.TextPosition", "Equals(object)");
    return *__retval = uIs(obj, __type) && __this->Equals2(uUnbox<TextPosition>(__type, obj)), void();
}

// public bool Equals(Outracks.Simulator.TextPosition other) :32
void TextPosition__Equals2_fn(TextPosition* __this, TextPosition* other, bool* __retval)
{
    *__retval = __this->Equals2(*other);
}

// public override sealed int GetHashCode() :22
void TextPosition__GetHashCode_fn(TextPosition* __this, uType* __type, int32_t* __retval)
{
    uStackFrame __("Outracks.Simulator.TextPosition", "GetHashCode()");
    ::g::Outracks::Simulator::LineNumber ind1;
    ::g::Outracks::Simulator::CharacterNumber ind2;
    return *__retval = (ind1 = __this->Line, (&ind1))->GetHashCode(::TYPES[69/*Outracks.Simulator.LineNumber*/]) ^ (ind2 = __this->Character, (&ind2))->GetHashCode(::TYPES[70/*Outracks.Simulator.CharacterNumber*/]), void();
}

// public TextPosition New(Outracks.Simulator.LineNumber line, Outracks.Simulator.CharacterNumber character) :11
void TextPosition__New1_fn(::g::Outracks::Simulator::LineNumber* line, ::g::Outracks::Simulator::CharacterNumber* character, TextPosition* __retval)
{
    *__retval = TextPosition__New1(*line, *character);
}

// public static operator ==(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) :37
void TextPosition__op_Equality_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition__op_Equality(*a, *b);
}

// public static operator >(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) :54
void TextPosition__op_GreaterThan_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition__op_GreaterThan(*a, *b);
}

// public static operator >=(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) :64
void TextPosition__op_GreaterThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition__op_GreaterThanOrEqual(*a, *b);
}

// public static operator !=(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) :42
void TextPosition__op_Inequality_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition__op_Inequality(*a, *b);
}

// public static operator <(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) :47
void TextPosition__op_LessThan_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition__op_LessThan(*a, *b);
}

// public static operator <=(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) :59
void TextPosition__op_LessThanOrEqual_fn(TextPosition* a, TextPosition* b, bool* __retval)
{
    *__retval = TextPosition__op_LessThanOrEqual(*a, *b);
}

// public static Outracks.Simulator.TextPosition Read(System.IO.BinaryReader reader) :69
void TextPosition__Read_fn(::g::System::IO::BinaryReader* reader, TextPosition* __retval)
{
    *__retval = TextPosition__Read(reader);
}

// public override sealed string ToString() :17
void TextPosition__ToString_fn(TextPosition* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.TextPosition", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox(::TYPES[69/*Outracks.Simulator.LineNumber*/], __this->Line), ::STRINGS[33/*":"*/]), uBox(::TYPES[70/*Outracks.Simulator.CharacterNumber*/], __this->Character)), void();
}

// public static void Write(System.IO.BinaryWriter writer, Outracks.Simulator.TextPosition value) :78
void TextPosition__Write_fn(::g::System::IO::BinaryWriter* writer, TextPosition* value)
{
    TextPosition__Write(writer, *value);
}

// public TextPosition(Outracks.Simulator.LineNumber line, Outracks.Simulator.CharacterNumber character) [instance] :11
void TextPosition::ctor_(::g::Outracks::Simulator::LineNumber line, ::g::Outracks::Simulator::CharacterNumber character)
{
    Line = line;
    Character = character;
}

// public bool Equals(Outracks.Simulator.TextPosition other) [instance] :32
bool TextPosition::Equals2(TextPosition other)
{
    return ::g::Outracks::Simulator::LineNumber__op_Equality(Line, other.Line) && ::g::Outracks::Simulator::CharacterNumber__op_Equality(Character, other.Character);
}

// public TextPosition New(Outracks.Simulator.LineNumber line, Outracks.Simulator.CharacterNumber character) [static] :11
TextPosition TextPosition__New1(::g::Outracks::Simulator::LineNumber line, ::g::Outracks::Simulator::CharacterNumber character)
{
    TextPosition obj3;
    obj3.ctor_(line, character);
    return obj3;
}

// public static operator ==(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) [static] :37
bool TextPosition__op_Equality(TextPosition a, TextPosition b)
{
    return a.Equals2(b);
}

// public static operator >(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) [static] :54
bool TextPosition__op_GreaterThan(TextPosition a, TextPosition b)
{
    return TextPosition__op_Inequality(a, b) && !TextPosition__op_LessThan(a, b);
}

// public static operator >=(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) [static] :64
bool TextPosition__op_GreaterThanOrEqual(TextPosition a, TextPosition b)
{
    return TextPosition__op_Equality(a, b) || TextPosition__op_GreaterThan(a, b);
}

// public static operator !=(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) [static] :42
bool TextPosition__op_Inequality(TextPosition a, TextPosition b)
{
    return !TextPosition__op_Equality(a, b);
}

// public static operator <(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) [static] :47
bool TextPosition__op_LessThan(TextPosition a, TextPosition b)
{
    if (::g::Outracks::Simulator::LineNumber__op_LessThan(a.Line, b.Line))
        return true;

    if (::g::Outracks::Simulator::LineNumber__op_GreaterThan(a.Line, b.Line))
        return false;

    return ::g::Outracks::Simulator::CharacterNumber__op_LessThan(a.Character, b.Character);
}

// public static operator <=(Outracks.Simulator.TextPosition a, Outracks.Simulator.TextPosition b) [static] :59
bool TextPosition__op_LessThanOrEqual(TextPosition a, TextPosition b)
{
    return TextPosition__op_Equality(a, b) || TextPosition__op_LessThan(a, b);
}

// public static Outracks.Simulator.TextPosition Read(System.IO.BinaryReader reader) [static] :69
TextPosition TextPosition__Read(::g::System::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.TextPosition", "Read(System.IO.BinaryReader)");
    int32_t line = uPtr(reader)->ReadInt32();
    int32_t character = reader->ReadInt32();
    return TextPosition__New1(::g::Outracks::Simulator::LineNumber__New1(line), ::g::Outracks::Simulator::CharacterNumber__New1(character));
}

// public static void Write(System.IO.BinaryWriter writer, Outracks.Simulator.TextPosition value) [static] :78
void TextPosition__Write(::g::System::IO::BinaryWriter* writer, TextPosition value)
{
    uStackFrame __("Outracks.Simulator.TextPosition", "Write(System.IO.BinaryWriter,Outracks.Simulator.TextPosition)");
    uPtr(writer)->Write5(::g::Outracks::Simulator::LineNumber__op_Implicit1(value.Line));
    writer->Write5(::g::Outracks::Simulator::CharacterNumber__op_Implicit1(value.Character));
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/SimulatorClient.uno
// -------------------------------------------------------------------------

// public static class ToIndentedLinesExtension :78
// {
static void ToIndentedLinesExtension_build(uType* type)
{
    ::STRINGS[29] = uString::Const("");
    ::STRINGS[34] = uString::Const("    ");
    ::STRINGS[19] = uString::Const("\n"
        "");
    ::TYPES[53] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[54] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("ToIndentedLines", NULL, (void*)ToIndentedLinesExtension__ToIndentedLines_fn, 0, true, ::g::Uno::String_typeof(), 1, ::TYPES[53/*Uno.Collections.IEnumerable<Uno.Exception>*/]));
}

uClassType* ToIndentedLinesExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.ToIndentedLinesExtension", options);
    type->fp_build_ = ToIndentedLinesExtension_build;
    return type;
}

// public static string ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) :80
void ToIndentedLinesExtension__ToIndentedLines_fn(uObject* innerExceptions, uString** __retval)
{
    *__retval = ToIndentedLinesExtension::ToIndentedLines(innerExceptions);
}

// public static string ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception> innerExceptions) [static] :80
uString* ToIndentedLinesExtension::ToIndentedLines(uObject* innerExceptions)
{
    uStackFrame __("Outracks.Simulator.ToIndentedLinesExtension", "ToIndentedLines(Uno.Collections.IEnumerable<Uno.Exception>)");
    ::g::Uno::Exception* ret2;
    uString* s = ::STRINGS[29/*""*/];
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(innerExceptions), ::TYPES[53/*Uno.Collections.IEnumerable<Uno.Exception>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[18/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::Exception* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[54/*Uno.Collections.IEnumerator<Uno.Exception>*/]), &ret2), ret2);
                    s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[34/*"    "*/], uPtr(e)->Message()), ::STRINGS[19/*"\n"*/]));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_12;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[22/*Uno.IDisposable*/]));
        }
        __after_finally_12:;
    }

    return s;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Tasks.cs
// ---------------------------------------------------------------------------------

// internal sealed class WaitForFirstResult<T> :95
// {
static void WaitForFirstResult_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[71] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetPrecalc(
        ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(10/*ToList<Outracks.Simulator.Task<T>>*/, ::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0), NULL), NULL));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Outracks::Simulator::Task_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(WaitForFirstResult, _pending), 0,
        ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), type->T(0), NULL), offsetof(WaitForFirstResult, _onNoResult), 0);
}

uType* WaitForFirstResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(WaitForFirstResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.WaitForFirstResult`1", options);
    type->fp_build_ = WaitForFirstResult_build;
    return type;
}

// public WaitForFirstResult(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :100
void WaitForFirstResult__ctor__fn(WaitForFirstResult* __this, uObject* pending, uDelegate* onNoResult)
{
    __this->ctor_(pending, onNoResult);
}

// public T Execute() :108
void WaitForFirstResult__Execute_fn(WaitForFirstResult* __this, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.WaitForFirstResult`1", "Execute()");
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uArray* array1;
    int32_t index2;
    int32_t length3;
    bool ret3;
    ::g::Uno::Collections::List* exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[71/*Uno.Collections.List<Uno.Exception>*/]);

    while (uPtr(__this->_pending)->Count() != 0)

        for (array1 = (uArray*)uPtr(__this->_pending)->ToArray(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            ::g::Outracks::Simulator::Task* task = uPtr(array1)->Strong< ::g::Outracks::Simulator::Task*>(index2);

            if (uPtr(task)->IsCompleted())
            {
                if (uPtr(task)->IsFaulted())
                    ::g::Uno::Collections::List__Add_fn(uPtr(exceptions), uPtr(task)->Exception());
                else
                    return __retval.Store((::g::Outracks::Simulator::Task__get_Result_fn(uPtr(task), &ret2), ret2)), void();

                ::g::Uno::Collections::List__Remove_fn(uPtr(__this->_pending), task, &ret3);
            }

            ::g::Uno::Threading::Thread::Sleep(10);
        }

    return __retval.Store((uPtr(__this->_onNoResult)->Invoke(&ret4, 1, (uObject*)exceptions), ret4)), void();
}

// public WaitForFirstResult New(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) :100
void WaitForFirstResult__New1_fn(uType* __type, uObject* pending, uDelegate* onNoResult, WaitForFirstResult** __retval)
{
    *__retval = WaitForFirstResult::New1(__type, pending, onNoResult);
}

// public WaitForFirstResult(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [instance] :100
void WaitForFirstResult::ctor_(uObject* pending, uDelegate* onNoResult)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.ToList<Outracks.Simulator.Task<T>>*/),
    };
    uStackFrame __("Outracks.Simulator.WaitForFirstResult`1", ".ctor(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>>,Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T>)");
    _pending = ((::g::Uno::Collections::List*)::g::Uno::Collections::EnumerableExtensions::ToList(__types[0], pending));
    _onNoResult = onNoResult;
}

// public WaitForFirstResult New(Uno.Collections.IEnumerable<Outracks.Simulator.Task<T>> pending, Uno.Func<Uno.Collections.IEnumerable<Uno.Exception>, T> onNoResult) [static] :100
WaitForFirstResult* WaitForFirstResult::New1(uType* __type, uObject* pending, uDelegate* onNoResult)
{
    WaitForFirstResult* obj1 = (WaitForFirstResult*)uNew(__type);
    obj1->ctor_(pending, onNoResult);
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
