// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Expression.Argument.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.ExpressionSubscriber.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod1-1.h>
#include <Fuse.Selection.Deselected.h>
#include <Fuse.Selection.IsSelectedFunction.h>
#include <Fuse.Selection.IsSelectedFunction.OuterSubscription.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.Selected.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Selection.Selection.How.h>
#include <Fuse.Selection.Selection.ListWrapper.h>
#include <Fuse.Selection.SelectionEvent.h>
#include <Fuse.Selection.SelectionEventArgs.h>
#include <Fuse.Selection.SelectionReplace.h>
#include <Fuse.Selection.SelectMode.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[22];
static uType* TYPES[9];

namespace g{
namespace Fuse{
namespace Selection{

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selected.uno
// ---------------------------------------------------------------

// public sealed class Deselected :87
// {
static void Deselected_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface8));
    type->SetFields(43);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Deselected__New2_fn, 0, true, type, 0));
}

::g::Fuse::Selection::SelectionEvent_type* Deselected_typeof()
{
    static uSStrong< ::g::Fuse::Selection::SelectionEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Selection::SelectionEvent_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Deselected);
    options.TypeSize = sizeof(::g::Fuse::Selection::SelectionEvent_type);
    type = (::g::Fuse::Selection::SelectionEvent_type*)uClassType::New("Fuse.Selection.Deselected", options);
    type->fp_build_ = Deselected_build;
    type->fp_ctor_ = (void*)Deselected__New2_fn;
    type->fp_IsTriggered = (void(*)(::g::Fuse::Selection::SelectionEvent*, bool*, bool*))Deselected__IsTriggered_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Deselected() :87
void Deselected__ctor_7_fn(Deselected* __this)
{
    __this->ctor_7();
}

// protected override sealed bool IsTriggered(bool on) :89
void Deselected__IsTriggered_fn(Deselected* __this, bool* on, bool* __retval)
{
    bool on_ = *on;
    return *__retval = !on_, void();
}

// public generated Deselected New() :87
void Deselected__New2_fn(Deselected** __retval)
{
    *__retval = Deselected::New2();
}

// public generated Deselected() [instance] :87
void Deselected::ctor_7()
{
    ctor_6();
}

// public generated Deselected New() [static] :87
Deselected* Deselected::New2()
{
    Deselected* obj1 = (Deselected*)uNew(Deselected_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno
// ----------------------------------------------------------------

// private enum Selection.How :333
uEnumType* Selection__How_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.Selection.How", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "API", 0LL,
        "Observable", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/IsSelected.uno
// -----------------------------------------------------------------

// public sealed class IsSelectedFunction :14
// {
static void IsSelectedFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IsSelectedFunction__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Expression_type* IsSelectedFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsSelectedFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Selection.IsSelectedFunction", options);
    type->fp_build_ = IsSelectedFunction_build;
    type->fp_ctor_ = (void*)IsSelectedFunction__New1_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))IsSelectedFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))IsSelectedFunction__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))IsSelectedFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public IsSelectedFunction() :17
void IsSelectedFunction__ctor_2_fn(IsSelectedFunction* __this)
{
    __this->ctor_2();
}

// public IsSelectedFunction New() :17
void IsSelectedFunction__New1_fn(IsSelectedFunction** __retval)
{
    *__retval = IsSelectedFunction::New1();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :25
void IsSelectedFunction__Subscribe_fn(IsSelectedFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL))) > 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("too many arguments for isSelected"), __this, ::STRINGS[1/*"/usr/local/...*/], 29, uString::Const("Subscribe"), NULL);
        return *__retval = NULL, void();
    }

    IsSelectedFunction__OuterSubscription* ins = IsSelectedFunction__OuterSubscription::New1(__this, listener, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::g::Fuse::Reactive::IContext_typeof())));
    ins->Init(context);
    return *__retval = (uObject*)ins, void();
}

// public override sealed string ToString() :20
void IsSelectedFunction__ToString_fn(IsSelectedFunction* __this, uString** __retval)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction", "ToString()");
    return *__retval = __this->FormatString(uString::Const("isSelected")), void();
}

// public IsSelectedFunction() [instance] :17
void IsSelectedFunction::ctor_2()
{
    ctor_1();
}

// public IsSelectedFunction New() [static] :17
IsSelectedFunction* IsSelectedFunction::New1()
{
    IsSelectedFunction* obj1 = (IsSelectedFunction*)uNew(IsSelectedFunction_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno
// ----------------------------------------------------------------

// private sealed class Selection.ListWrapper :339
// {
static void Selection__ListWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Selection__ListWrapper_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Selection__ListWrapper, _list), 0);
}

Selection__ListWrapper_type* Selection__ListWrapper_typeof()
{
    static uSStrong<Selection__ListWrapper_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Selection__ListWrapper);
    options.TypeSize = sizeof(Selection__ListWrapper_type);
    type = (Selection__ListWrapper_type*)uClassType::New("Fuse.Selection.Selection.ListWrapper", options);
    type->fp_build_ = Selection__ListWrapper_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int32_t*))Selection__ListWrapper__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))Selection__ListWrapper__get_Item_fn;
    return type;
}

// public ListWrapper(Uno.Collections.List<string> list) :342
void Selection__ListWrapper__ctor__fn(Selection__ListWrapper* __this, ::g::Uno::Collections::List* list)
{
    __this->ctor_(list);
}

// public object get_Item(int index) :347
void Selection__ListWrapper__get_Item_fn(Selection__ListWrapper* __this, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :346
void Selection__ListWrapper__get_Length_fn(Selection__ListWrapper* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public ListWrapper New(Uno.Collections.List<string> list) :342
void Selection__ListWrapper__New1_fn(::g::Uno::Collections::List* list, Selection__ListWrapper** __retval)
{
    *__retval = Selection__ListWrapper::New1(list);
}

// public ListWrapper(Uno.Collections.List<string> list) [instance] :342
void Selection__ListWrapper::ctor_(::g::Uno::Collections::List* list)
{
    _list = list;
}

// public object get_Item(int index) [instance] :347
uObject* Selection__ListWrapper::Item(int32_t index)
{
    uStackFrame __("Fuse.Selection.Selection.ListWrapper", "get_Item(int)");
    uString* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int32_t>(index), &ret2), ret2);
}

// public int get_Length() [instance] :346
int32_t Selection__ListWrapper::Length()
{
    uStackFrame __("Fuse.Selection.Selection.ListWrapper", "get_Length()");
    return uPtr(_list)->Count();
}

// public ListWrapper New(Uno.Collections.List<string> list) [static] :342
Selection__ListWrapper* Selection__ListWrapper::New1(::g::Uno::Collections::List* list)
{
    Selection__ListWrapper* obj1 = (Selection__ListWrapper*)uNew(Selection__ListWrapper_typeof());
    obj1->ctor_(list);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/IsSelected.uno
// -----------------------------------------------------------------

// private sealed class IsSelectedFunction.OuterSubscription :38
// {
static void IsSelectedFunction__OuterSubscription_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unable to locate a `Selectable` and `Selection`");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/IsSelected.uno");
    ::STRINGS[2] = uString::Const("NewNode");
    ::STRINGS[3] = uString::Const("Argument does not resolve to a Node");
    ::STRINGS[4] = uString::Const("OnNewArguments");
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(IsSelectedFunction__OuterSubscription_type, interface0),
        ::TYPES[2/*Fuse.Reactive.IListener*/], offsetof(IsSelectedFunction__OuterSubscription_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(IsSelectedFunction__OuterSubscription_type, interface2));
    type->SetFields(7,
        ::g::Fuse::Selection::IsSelectedFunction_typeof(), offsetof(IsSelectedFunction__OuterSubscription, _expr), 0,
        ::TYPES[2/*Fuse.Reactive.IListener*/], offsetof(IsSelectedFunction__OuterSubscription, _listener), 0,
        ::TYPES[3/*Fuse.Node*/], offsetof(IsSelectedFunction__OuterSubscription, _from), 0,
        ::TYPES[3/*Fuse.Node*/], offsetof(IsSelectedFunction__OuterSubscription, _curFrom), 0,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(IsSelectedFunction__OuterSubscription, _selection), 0,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(IsSelectedFunction__OuterSubscription, _selectable), 0,
        ::TYPES[3/*Fuse.Node*/], offsetof(IsSelectedFunction__OuterSubscription, _pendingNode), 0);
}

IsSelectedFunction__OuterSubscription_type* IsSelectedFunction__OuterSubscription_typeof()
{
    static uSStrong<IsSelectedFunction__OuterSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction__Subscription_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(IsSelectedFunction__OuterSubscription);
    options.TypeSize = sizeof(IsSelectedFunction__OuterSubscription_type);
    type = (IsSelectedFunction__OuterSubscription_type*)uClassType::New("Fuse.Selection.IsSelectedFunction.OuterSubscription", options);
    type->fp_build_ = IsSelectedFunction__OuterSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))IsSelectedFunction__OuterSubscription__Dispose_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))IsSelectedFunction__OuterSubscription__OnNewArguments_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))IsSelectedFunction__OuterSubscription__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))IsSelectedFunction__OuterSubscription__Dispose_fn;
    return type;
}

// public OuterSubscription(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from) :53
void IsSelectedFunction__OuterSubscription__ctor_4_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from)
{
    __this->ctor_4(expr, listener, from);
}

// private void CleanListener() :132
void IsSelectedFunction__OuterSubscription__CleanListener_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->CleanListener();
}

// private void CleanPending() :92
void IsSelectedFunction__OuterSubscription__CleanPending_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->CleanPending();
}

// public override sealed void Dispose() :142
void IsSelectedFunction__OuterSubscription__Dispose_fn(IsSelectedFunction__OuterSubscription* __this)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "Dispose()");
    ::g::Fuse::Reactive::VarArgFunction__Subscription__Dispose_fn(__this);
    __this->CleanPending();
    __this->CleanListener();
}

// public OuterSubscription New(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from) :53
void IsSelectedFunction__OuterSubscription__New1_fn(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from, IsSelectedFunction__OuterSubscription** __retval)
{
    *__retval = IsSelectedFunction__OuterSubscription::New1(expr, listener, from);
}

// private void NewNode(Fuse.Node from) :100
void IsSelectedFunction__OuterSubscription__NewNode_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Fuse::Node* from)
{
    __this->NewNode(from);
}

// protected override sealed void OnNewArguments(Fuse.Reactive.Expression.Argument[] args) :61
void IsSelectedFunction__OuterSubscription__OnNewArguments_fn(IsSelectedFunction__OuterSubscription* __this, uArray* args)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "OnNewArguments(Fuse.Reactive.Expression.Argument[])");
    ::g::Fuse::Node* node = __this->_from;

    if (uPtr(args)->Length() > 0)
    {
        node = uAs< ::g::Fuse::Node*>(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value(), ::TYPES[3/*Fuse.Node*/]);

        if (node == NULL)
            ::g::Fuse::Diagnostics::UserError(::STRINGS[3/*"Argument do...*/], __this->_expr, ::STRINGS[1/*"/usr/local/...*/], 69, ::STRINGS[4/*"OnNewArgume...*/], NULL);
        else if (!uPtr(node)->IsRootingCompleted())
        {
            __this->CleanPending();
            __this->_pendingNode = node;
            uPtr(__this->_pendingNode)->add_RootingCompleted(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)IsSelectedFunction__OuterSubscription__OnPendingRooted_fn, __this));
            node = NULL;
        }
    }

    __this->NewNode(node);
}

// private void OnPendingRooted() :83
void IsSelectedFunction__OuterSubscription__OnPendingRooted_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->OnPendingRooted();
}

// private void OnSelectionChanged(object s, object args) :155
void IsSelectedFunction__OuterSubscription__OnSelectionChanged_fn(IsSelectedFunction__OuterSubscription* __this, uObject* s, uObject* args)
{
    __this->OnSelectionChanged(s, args);
}

// private void PushNewValue() :126
void IsSelectedFunction__OuterSubscription__PushNewValue_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->PushNewValue();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :149
void IsSelectedFunction__OuterSubscription__UnoUXIPropertyListenerOnPropertyChanged_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");

    if (obj == __this->_selectable)
        __this->PushNewValue();
}

// public OuterSubscription(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from) [instance] :53
void IsSelectedFunction__OuterSubscription::ctor_4(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", ".ctor(Fuse.Selection.IsSelectedFunction,Fuse.Reactive.IListener,Fuse.Node)");
    ctor_2(expr);
    _from = from;
    _expr = expr;
    _listener = listener;
}

// private void CleanListener() [instance] :132
void IsSelectedFunction__OuterSubscription::CleanListener()
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "CleanListener()");

    if (_selection == NULL)
        return;

    uPtr(_selection)->remove_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)IsSelectedFunction__OuterSubscription__OnSelectionChanged_fn, this));
    uPtr(_selectable)->RemovePropertyListener((uObject*)this);
    _selection = NULL;
    _selectable = NULL;
}

// private void CleanPending() [instance] :92
void IsSelectedFunction__OuterSubscription::CleanPending()
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "CleanPending()");

    if (_pendingNode == NULL)
        return;

    uPtr(_pendingNode)->remove_RootingCompleted(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)IsSelectedFunction__OuterSubscription__OnPendingRooted_fn, this));
    _pendingNode = NULL;
}

// private void NewNode(Fuse.Node from) [instance] :100
void IsSelectedFunction__OuterSubscription::NewNode(::g::Fuse::Node* from)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "NewNode(Fuse.Node)");

    if (_curFrom == from)
        return;

    CleanListener();
    _curFrom = from;

    if (from == NULL)
    {
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[2/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
        return;
    }

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(_curFrom, &_selectable, &_selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Unable to l...*/], _expr, ::STRINGS[1/*"/usr/local/...*/], 116, ::STRINGS[2/*"NewNode"*/], NULL);
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[2/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
        return;
    }

    uPtr(_selection)->add_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)IsSelectedFunction__OuterSubscription__OnSelectionChanged_fn, this));
    uPtr(_selectable)->AddPropertyListener((uObject*)this);
    PushNewValue();
}

// private void OnPendingRooted() [instance] :83
void IsSelectedFunction__OuterSubscription::OnPendingRooted()
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "OnPendingRooted()");

    if (_pendingNode == NULL)
        return;

    ::g::Fuse::Node* p = _pendingNode;
    CleanPending();
    NewNode(p);
}

// private void OnSelectionChanged(object s, object args) [instance] :155
void IsSelectedFunction__OuterSubscription::OnSelectionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "OnSelectionChanged(object,object)");
    PushNewValue();
}

// private void PushNewValue() [instance] :126
void IsSelectedFunction__OuterSubscription::PushNewValue()
{
    uStackFrame __("Fuse.Selection.IsSelectedFunction.OuterSubscription", "PushNewValue()");

    if (_selection != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[2/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uBox(::g::Uno::Bool_typeof(), uPtr(_selection)->IsSelected(_selectable)));
}

// public OuterSubscription New(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from) [static] :53
IsSelectedFunction__OuterSubscription* IsSelectedFunction__OuterSubscription::New1(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from)
{
    IsSelectedFunction__OuterSubscription* obj1 = (IsSelectedFunction__OuterSubscription*)uNew(IsSelectedFunction__OuterSubscription_typeof());
    obj1->ctor_4(expr, listener, from);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selectable.ScriptClass.uno
// -----------------------------------------------------------------------------

// public partial sealed class Selectable :9
// {
// static Selectable() :11
static void Selectable__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Selectable::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[5/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[5/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[6/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[6/*"add"*/], uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Selection.Selectable>*/], (void*)Selectable__add_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[6/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[7/*"remove"*/], uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Selection.Selectable>*/], (void*)Selectable__remove_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::TYPES[6/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[8/*"toggle"*/], uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Selection.Selectable>*/], (void*)Selectable__toggle_fn))));
}

static void Selectable_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("add");
    ::STRINGS[7] = uString::Const("remove");
    ::STRINGS[8] = uString::Const("toggle");
    ::STRINGS[9] = uString::Const("No selection, perhaps not rooted");
    ::STRINGS[10] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selectable.uno");
    ::STRINGS[11] = uString::Const("Add");
    ::STRINGS[12] = uString::Const("Unable to locate `Selection`");
    ::STRINGS[13] = uString::Const("OnRooted");
    ::STRINGS[14] = uString::Const("Remove");
    ::STRINGS[15] = uString::Const("Toggle");
    ::TYPES[4] = ::g::Uno::Type_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[6] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(Selectable, _selection), 0,
        ::g::Uno::String_typeof(), offsetof(Selectable, _value), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Selectable::ValueName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ValueName", 20));
    type->Reflection.SetFunctions(6,
        new uFunction("Add", NULL, (void*)Selectable__Add1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Selectable__New2_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)Selectable__Remove1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Toggle", NULL, (void*)Selectable__Toggle_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)Selectable__get_Value_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Selectable__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Node_type* Selectable_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Selectable);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Selection.Selectable", options);
    type->fp_build_ = Selectable_build;
    type->fp_ctor_ = (void*)Selectable__New2_fn;
    type->fp_cctor_ = Selectable__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selectable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selectable__OnUnrooted_fn;
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

// public generated Selectable() :9
void Selectable__ctor_3_fn(Selectable* __this)
{
    __this->ctor_3();
}

// private static void add(Fuse.Selection.Selectable s) :24
void Selectable__add_fn(Selectable* s)
{
    Selectable::add(s);
}

// public void Add() :78
void Selectable__Add1_fn(Selectable* __this)
{
    __this->Add1();
}

// public generated Selectable New() :9
void Selectable__New2_fn(Selectable** __retval)
{
    *__retval = Selectable::New2();
}

// protected override sealed void OnRooted() :35
void Selectable__OnRooted_fn(Selectable* __this)
{
    uStackFrame __("Fuse.Selection.Selectable", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_selection = ::g::Fuse::Selection::Selection::TryFindSelection(__this->Parent());

    if (__this->_selection == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"Unable to l...*/], __this, ::STRINGS[10/*"/usr/local/...*/], 41, ::STRINGS[13/*"OnRooted"*/], NULL);
}

// protected override sealed void OnUnrooted() :44
void Selectable__OnUnrooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_selection = NULL;
}

// private static void remove(Fuse.Selection.Selectable s) :36
void Selectable__remove_fn(Selectable* s)
{
    Selectable::remove(s);
}

// public void Remove() :92
void Selectable__Remove1_fn(Selectable* __this)
{
    __this->Remove1();
}

// private static void toggle(Fuse.Selection.Selectable s) :46
void Selectable__toggle_fn(Selectable* s)
{
    Selectable::toggle(s);
}

// public void Toggle() :106
void Selectable__Toggle_fn(Selectable* __this)
{
    __this->Toggle();
}

// public string get_Value() :60
void Selectable__get_Value_fn(Selectable* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :61
void Selectable__set_Value_fn(Selectable* __this, uString* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector Selectable::ValueName_;

// public generated Selectable() [instance] :9
void Selectable::ctor_3()
{
    ctor_2();
}

// public void Add() [instance] :78
void Selectable::Add1()
{
    uStackFrame __("Fuse.Selection.Selectable", "Add()");

    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"No selectio...*/], this, ::STRINGS[10/*"/usr/local/...*/], 82, ::STRINGS[11/*"Add"*/], NULL);
        return;
    }

    uPtr(_selection)->Add1(this);
}

// public void Remove() [instance] :92
void Selectable::Remove1()
{
    uStackFrame __("Fuse.Selection.Selectable", "Remove()");

    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"No selectio...*/], this, ::STRINGS[10/*"/usr/local/...*/], 96, ::STRINGS[14/*"Remove"*/], NULL);
        return;
    }

    uPtr(_selection)->Remove1(this);
}

// public void Toggle() [instance] :106
void Selectable::Toggle()
{
    uStackFrame __("Fuse.Selection.Selectable", "Toggle()");

    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"No selectio...*/], this, ::STRINGS[10/*"/usr/local/...*/], 110, ::STRINGS[15/*"Toggle"*/], NULL);
        return;
    }

    uPtr(_selection)->Toggle(this);
}

// public string get_Value() [instance] :60
uString* Selectable::Value()
{
    return _value;
}

// public void set_Value(string value) [instance] :61
void Selectable::Value(uString* value)
{
    uStackFrame __("Fuse.Selection.Selectable", "set_Value(string)");

    if (::g::Uno::String::op_Equality(_value, value))
        return;

    uString* old = _value;
    _value = value;

    if (_selection != NULL)
        uPtr(_selection)->ModifyValue(old, _value);

    OnPropertyChanged(Selectable::ValueName_);
}

// private static void add(Fuse.Selection.Selectable s) [static] :24
void Selectable::add(Selectable* s)
{
    uStackFrame __("Fuse.Selection.Selectable", "add(Fuse.Selection.Selectable)");
    Selectable_typeof()->Init();
    uPtr(s)->Add1();
}

// public generated Selectable New() [static] :9
Selectable* Selectable::New2()
{
    Selectable* obj1 = (Selectable*)uNew(Selectable_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static void remove(Fuse.Selection.Selectable s) [static] :36
void Selectable::remove(Selectable* s)
{
    uStackFrame __("Fuse.Selection.Selectable", "remove(Fuse.Selection.Selectable)");
    Selectable_typeof()->Init();
    uPtr(s)->Remove1();
}

// private static void toggle(Fuse.Selection.Selectable s) [static] :46
void Selectable::toggle(Selectable* s)
{
    uStackFrame __("Fuse.Selection.Selectable", "toggle(Fuse.Selection.Selectable)");
    Selectable_typeof()->Init();
    uPtr(s)->Toggle();
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selected.uno
// ---------------------------------------------------------------

// public sealed class Selected :76
// {
static void Selected_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface8));
    type->SetFields(43);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Selected__New2_fn, 0, true, type, 0));
}

::g::Fuse::Selection::SelectionEvent_type* Selected_typeof()
{
    static uSStrong< ::g::Fuse::Selection::SelectionEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Selection::SelectionEvent_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Selected);
    options.TypeSize = sizeof(::g::Fuse::Selection::SelectionEvent_type);
    type = (::g::Fuse::Selection::SelectionEvent_type*)uClassType::New("Fuse.Selection.Selected", options);
    type->fp_build_ = Selected_build;
    type->fp_ctor_ = (void*)Selected__New2_fn;
    type->fp_IsTriggered = (void(*)(::g::Fuse::Selection::SelectionEvent*, bool*, bool*))Selected__IsTriggered_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Selected() :76
void Selected__ctor_7_fn(Selected* __this)
{
    __this->ctor_7();
}

// protected override sealed bool IsTriggered(bool on) :78
void Selected__IsTriggered_fn(Selected* __this, bool* on, bool* __retval)
{
    bool on_ = *on;
    return *__retval = on_, void();
}

// public generated Selected New() :76
void Selected__New2_fn(Selected** __retval)
{
    *__retval = Selected::New2();
}

// public generated Selected() [instance] :76
void Selected::ctor_7()
{
    ctor_6();
}

// public generated Selected New() [static] :76
Selected* Selected::New2()
{
    Selected* obj1 = (Selected*)uNew(Selected_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.ScriptClass.uno
// ----------------------------------------------------------------------------

// public partial sealed class Selection :9
// {
// static Selection() :11
static void Selection__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Selection::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[5/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[5/*Fuse.Scripting.ScriptMember[]*/], 6, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New3(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("clear"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, NULL), (void*)Selection__clear_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[6/*"add"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)Selection__add_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[7/*"remove"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)Selection__remove_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("forceAdd"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)Selection__forceAdd_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), uString::Const("forceRemove"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)Selection__forceRemove_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, NULL), ::STRINGS[8/*"toggle"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), NULL), (void*)Selection__toggle_fn))));
}

static void Selection_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Selection_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Selection_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Selection_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Selection_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface6),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Selection_type, interface7));
    type->SetFields(18,
        ::g::Fuse::Selection::SelectionReplace_typeof(), offsetof(Selection, _replace), 0,
        ::g::Uno::Int_typeof(), offsetof(Selection, _minCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(Selection, _hasMaxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(Selection, _maxCount), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Selection, _values), 0,
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(Selection, _observableValues), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(Selection, _subscription), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(Selection, SelectionChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Selection::ValueName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ValueName", 26));
    type->Reflection.SetFunctions(23,
        new uFunction("Add", NULL, (void*)Selection__Add1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("Clear", NULL, (void*)Selection__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("ForceAdd", NULL, (void*)Selection__ForceAdd_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("ForceRemove", NULL, (void*)Selection__ForceRemove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_HasMaxCount", NULL, (void*)Selection__get_HasMaxCount_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsSelected", NULL, (void*)Selection__IsSelected_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_MaxCount", NULL, (void*)Selection__get_MaxCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_MaxCount", NULL, (void*)Selection__set_MaxCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_MinCount", NULL, (void*)Selection__get_MinCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_MinCount", NULL, (void*)Selection__set_MinCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Selection__New2_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)Selection__Remove1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_Replace", NULL, (void*)Selection__get_Replace_fn, 0, false, ::g::Fuse::Selection::SelectionReplace_typeof(), 0),
        new uFunction("set_Replace", NULL, (void*)Selection__set_Replace_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::SelectionReplace_typeof()),
        new uFunction("get_SelectedCount", NULL, (void*)Selection__get_SelectedCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_SelectionChanged", NULL, (void*)Selection__add_SelectionChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_SelectionChanged", NULL, (void*)Selection__remove_SelectionChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("SetValue", NULL, (void*)Selection__SetValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("Toggle", NULL, (void*)Selection__Toggle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_Value", NULL, (void*)Selection__get_Value_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Selection__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Values", NULL, (void*)Selection__get_Values_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Values", NULL, (void*)Selection__set_Values_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Selection_type* Selection_typeof()
{
    static uSStrong<Selection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Selection);
    options.TypeSize = sizeof(Selection_type);
    type = (Selection_type*)uClassType::New("Fuse.Selection.Selection", options);
    type->fp_build_ = Selection_build;
    type->fp_ctor_ = (void*)Selection__New2_fn;
    type->fp_cctor_ = Selection__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selection__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selection__OnUnrooted_fn;
    type->interface7.fp_OnClear = (void(*)(uObject*))Selection__FuseReactiveIObserverOnClear_fn;
    type->interface7.fp_OnNewAll = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))Selection__FuseReactiveIObserverOnNewAt_fn;
    type->interface7.fp_OnSet = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnSet_fn;
    type->interface7.fp_OnAdd = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnAdd_fn;
    type->interface7.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))Selection__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface7.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))Selection__FuseReactiveIObserverOnInsertAt_fn;
    type->interface7.fp_OnFailed = (void(*)(uObject*, uString*))Selection__FuseReactiveIObserverOnFailed_fn;
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

// public generated Selection() :9
void Selection__ctor_3_fn(Selection* __this)
{
    __this->ctor_3();
}

// private static void add(Fuse.Selection.Selection s, object[] args) :39
void Selection__add_fn(Selection* s, uArray* args)
{
    Selection::add(s, args);
}

// public void Add(Fuse.Selection.Selectable b) :192
void Selection__Add1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Add1(b);
}

// private void Add(string value) :308
void Selection__Add2_fn(Selection* __this, uString* value)
{
    __this->Add2(value);
}

// private static void clear(Fuse.Selection.Selection s) :27
void Selection__clear_fn(Selection* s)
{
    Selection::clear(s);
}

// public void Clear() :212
void Selection__Clear_fn(Selection* __this)
{
    __this->Clear();
}

// private void ClearSubscription() :418
void Selection__ClearSubscription_fn(Selection* __this)
{
    __this->ClearSubscription();
}

// private static void forceAdd(Fuse.Selection.Selection s, object[] args) :71
void Selection__forceAdd_fn(Selection* s, uArray* args)
{
    Selection::forceAdd(s, args);
}

// public void ForceAdd(Fuse.Selection.Selectable b) :221
void Selection__ForceAdd_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->ForceAdd(b);
}

// private void ForceAdd(string value) :226
void Selection__ForceAdd1_fn(Selection* __this, uString* value)
{
    __this->ForceAdd1(value);
}

// private static void forceRemove(Fuse.Selection.Selection s, object[] args) :85
void Selection__forceRemove_fn(Selection* s, uArray* args)
{
    Selection::forceRemove(s, args);
}

// public void ForceRemove(Fuse.Selection.Selectable b) :238
void Selection__ForceRemove_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->ForceRemove(b);
}

// private void ForceRemove(string value) :243
void Selection__ForceRemove1_fn(Selection* __this, uString* value)
{
    __this->ForceRemove1(value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :464
void Selection__FuseReactiveIObserverOnAdd_fn(Selection* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnAdd(object)");
    uString* ret9;
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), addedValue, &ret9), ret9));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnClear() :427
void Selection__FuseReactiveIObserverOnClear_fn(Selection* __this)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnClear()");
    uPtr(__this->_values)->Clear();
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :492
void Selection__FuseReactiveIObserverOnFailed_fn(Selection* __this, uString* message)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnFailed(string)");
    ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uAs<uObject*>(__this, ::g::Fuse::Reactive::IObserver_typeof())), ::g::Fuse::Reactive::IObserver_typeof()));
    ::g::Fuse::Diagnostics::InternalError(message, __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno"), 495, uString::Const("Fuse.Reactive.IObserver.OnFailed"));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :481
void Selection__FuseReactiveIObserverOnInsertAt_fn(Selection* __this, int32_t* index, uObject* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int32_t index_ = *index;
    uString* ret10;

    if ((index_ < 0) || (index_ > uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno"), 485, uString::Const("Fuse.Reactive.IObserver.OnInsertAt"));
        return;
    }

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_values), uCRef<int32_t>(index_), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), value, &ret10), ret10));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :433
void Selection__FuseReactiveIObserverOnNewAll_fn(Selection* __this, uObject* values)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");
    __this->OnNewAll(values);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :446
void Selection__FuseReactiveIObserverOnNewAt_fn(Selection* __this, int32_t* index, uObject* newValue)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int32_t index_ = *index;
    uString* ret11;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno"), 450, uString::Const("Fuse.Reactive.IObserver.OnNewAt"));
        return;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_values), uCRef<int32_t>(index_), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), newValue, &ret11), ret11));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :470
void Selection__FuseReactiveIObserverOnRemoveAt_fn(Selection* __this, int32_t* index)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    int32_t index_ = *index;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno"), 474, uString::Const("Fuse.Reactive.IObserver.OnRemoveAt"));
        return;
    }

    uPtr(__this->_values)->RemoveAt(index_);
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :457
void Selection__FuseReactiveIObserverOnSet_fn(Selection* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Reactive.IObserver.OnSet(object)");
    uString* ret12;
    uPtr(__this->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), newValue, &ret12), ret12));
    __this->OnSelectionChanged(1);
}

// public bool get_HasMaxCount() :152
void Selection__get_HasMaxCount_fn(Selection* __this, bool* __retval)
{
    *__retval = __this->HasMaxCount();
}

// public bool IsSelected(Fuse.Selection.Selectable b) :160
void Selection__IsSelected_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b, bool* __retval)
{
    *__retval = __this->IsSelected(b);
}

// public int get_MaxCount() :130
void Selection__get_MaxCount_fn(Selection* __this, int32_t* __retval)
{
    *__retval = __this->MaxCount();
}

// public void set_MaxCount(int value) :131
void Selection__set_MaxCount_fn(Selection* __this, int32_t* value)
{
    __this->MaxCount(*value);
}

// public int get_MinCount() :113
void Selection__get_MinCount_fn(Selection* __this, int32_t* __retval)
{
    *__retval = __this->MinCount();
}

// public void set_MinCount(int value) :114
void Selection__set_MinCount_fn(Selection* __this, int32_t* value)
{
    __this->MinCount(*value);
}

// internal void ModifyValue(string old, string nw) :367
void Selection__ModifyValue_fn(Selection* __this, uString* old, uString* nw)
{
    __this->ModifyValue(old, nw);
}

// public generated Selection New() :9
void Selection__New2_fn(Selection** __retval)
{
    *__retval = Selection::New2();
}

// private void OnNewAll(Fuse.IArray values) :438
void Selection__OnNewAll_fn(Selection* __this, uObject* values)
{
    __this->OnNewAll(values);
}

// private void OnObservableValuesChanged() :406
void Selection__OnObservableValuesChanged_fn(Selection* __this)
{
    __this->OnObservableValuesChanged();
}

// protected override sealed void OnRooted() :85
void Selection__OnRooted_fn(Selection* __this)
{
    uStackFrame __("Fuse.Selection.Selection", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnObservableValuesChanged();
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) :350
void Selection__OnSelectionChanged_fn(Selection* __this, int32_t* how)
{
    __this->OnSelectionChanged(*how);
}

// protected override sealed void OnUnrooted() :91
void Selection__OnUnrooted_fn(Selection* __this)
{
    uStackFrame __("Fuse.Selection.Selection", "OnUnrooted()");
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void remove(Fuse.Selection.Selection s, object[] args) :57
void Selection__remove_fn(Selection* s, uArray* args)
{
    Selection::remove(s, args);
}

// public void Remove(Fuse.Selection.Selectable b) :202
void Selection__Remove1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Remove1(b);
}

// private void Remove(string value) :296
void Selection__Remove2_fn(Selection* __this, uString* value)
{
    __this->Remove2(value);
}

// public Fuse.Selection.SelectionReplace get_Replace() :103
void Selection__get_Replace_fn(Selection* __this, int32_t* __retval)
{
    *__retval = __this->Replace();
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) :104
void Selection__set_Replace_fn(Selection* __this, int32_t* value)
{
    __this->Replace(*value);
}

// public int get_SelectedCount() :257
void Selection__get_SelectedCount_fn(Selection* __this, int32_t* __retval)
{
    *__retval = __this->SelectedCount();
}

// public generated void add_SelectionChanged(Uno.EventHandler value) :331
void Selection__add_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->add_SelectionChanged(value);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) :331
void Selection__remove_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->remove_SelectionChanged(value);
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) :278
void Selection__SetValue_fn(Selection* __this, uString* value, uObject* origin)
{
    __this->SetValue(value, origin);
}

// private static void toggle(Fuse.Selection.Selection s, object[] args) :101
void Selection__toggle_fn(Selection* s, uArray* args)
{
    Selection::toggle(s, args);
}

// public void Toggle(Fuse.Selection.Selectable b) :174
void Selection__Toggle_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Toggle(b);
}

// private void Toggle(string value) :179
void Selection__Toggle1_fn(Selection* __this, uString* value)
{
    __this->Toggle1(value);
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) :58
void Selection__TryFindSelectable_fn(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection, bool* __retval)
{
    *__retval = Selection::TryFindSelectable(n, selectable, selection);
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) :41
void Selection__TryFindSelection_fn(::g::Fuse::Node* v, Selection** __retval)
{
    *__retval = Selection::TryFindSelection(v);
}

// public string get_Value() :272
void Selection__get_Value_fn(Selection* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :276
void Selection__set_Value_fn(Selection* __this, uString* value)
{
    __this->Value(value);
}

// public object get_Values() :388
void Selection__get_Values_fn(Selection* __this, uObject** __retval)
{
    *__retval = __this->Values();
}

// public void set_Values(object value) :389
void Selection__set_Values_fn(Selection* __this, uObject* value)
{
    __this->Values(value);
}

::g::Uno::UX::Selector Selection::ValueName_;

// public generated Selection() [instance] :9
void Selection::ctor_3()
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL)));
    ctor_2();
}

// public void Add(Fuse.Selection.Selectable b) [instance] :192
void Selection::Add1(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "Add(Fuse.Selection.Selectable)");
    Add2(uPtr(b)->Value());
}

// private void Add(string value) [instance] :308
void Selection::Add2(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Add(string)");
    bool ret3;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret3), ret3))
        return;

    if (HasMaxCount() && ((uPtr(_values)->Count() + 1) > MaxCount()))
    {
        if ((Replace() == 2) || (MaxCount() < 1))
            return;

        if (Replace() == 0)
            uPtr(_values)->RemoveAt(0);
        else
            uPtr(_values)->RemoveAt(uPtr(_values)->Count() - 1);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
    OnSelectionChanged(0);
}

// public void Clear() [instance] :212
void Selection::Clear()
{
    uStackFrame __("Fuse.Selection.Selection", "Clear()");
    uPtr(_values)->Clear();
    OnSelectionChanged(0);
}

// private void ClearSubscription() [instance] :418
void Selection::ClearSubscription()
{
    uStackFrame __("Fuse.Selection.Selection", "ClearSubscription()");

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::g::Uno::IDisposable_typeof()));
        _subscription = NULL;
    }
}

// public void ForceAdd(Fuse.Selection.Selectable b) [instance] :221
void Selection::ForceAdd(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceAdd(Fuse.Selection.Selectable)");
    ForceAdd1(uPtr(b)->Value());
}

// private void ForceAdd(string value) [instance] :226
void Selection::ForceAdd1(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceAdd(string)");
    bool ret5;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret5), ret5))
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
        OnSelectionChanged(0);
    }
}

// public void ForceRemove(Fuse.Selection.Selectable b) [instance] :238
void Selection::ForceRemove(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceRemove(Fuse.Selection.Selectable)");
    ForceRemove1(uPtr(b)->Value());
}

// private void ForceRemove(string value) [instance] :243
void Selection::ForceRemove1(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceRemove(string)");
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret7), ret7))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret8);
        OnSelectionChanged(0);
    }
}

// public bool get_HasMaxCount() [instance] :152
bool Selection::HasMaxCount()
{
    return _hasMaxCount;
}

// public bool IsSelected(Fuse.Selection.Selectable b) [instance] :160
bool Selection::IsSelected(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "IsSelected(Fuse.Selection.Selectable)");
    bool ret13;

    if (::g::Uno::String::IsNullOrEmpty(uPtr(b)->Value()))
        return false;

    return (::g::Uno::Collections::List__Contains_fn(uPtr(_values), uPtr(b)->Value(), &ret13), ret13);
}

// public int get_MaxCount() [instance] :130
int32_t Selection::MaxCount()
{
    return _maxCount;
}

// public void set_MaxCount(int value) [instance] :131
void Selection::MaxCount(int32_t value)
{
    if (_hasMaxCount && (value == _maxCount))
        return;

    if (value < 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("MaxCount must >= 1"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno"), 138, uString::Const("set_MaxCount"), NULL);
        return;
    }

    _hasMaxCount = true;
    _maxCount = value;
}

// public int get_MinCount() [instance] :113
int32_t Selection::MinCount()
{
    return _minCount;
}

// public void set_MinCount(int value) [instance] :114
void Selection::MinCount(int32_t value)
{
    if (value == _minCount)
        return;

    _minCount = value;
}

// internal void ModifyValue(string old, string nw) [instance] :367
void Selection::ModifyValue(uString* old, uString* nw)
{
    uStackFrame __("Fuse.Selection.Selection", "ModifyValue(string,string)");
    bool ret14;
    bool ret15;

    if (::g::Uno::String::IsNullOrEmpty(old) || ::g::Uno::String::IsNullOrEmpty(nw))
        return;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), old, &ret14), ret14))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), old, &ret15);
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), nw);
        OnSelectionChanged(0);
    }
}

// private void OnNewAll(Fuse.IArray values) [instance] :438
void Selection::OnNewAll(uObject* values)
{
    uStackFrame __("Fuse.Selection.Selection", "OnNewAll(Fuse.IArray)");
    uString* ret16;
    uPtr(_values)->Clear();

    for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::g::Fuse::IArray_typeof())); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::g::Fuse::IArray_typeof()), i), &ret16), ret16));

    OnSelectionChanged(1);
}

// private void OnObservableValuesChanged() [instance] :406
void Selection::OnObservableValuesChanged()
{
    uStackFrame __("Fuse.Selection.Selection", "OnObservableValuesChanged()");
    ClearSubscription();

    if (_observableValues == NULL)
        return;

    OnNewAll(_observableValues);
    _subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(_observableValues), ::g::Fuse::Reactive::IObservableArray_typeof()), (uObject*)this);
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) [instance] :350
void Selection::OnSelectionChanged(int32_t how)
{
    uStackFrame __("Fuse.Selection.Selection", "OnSelectionChanged(Fuse.Selection.Selection.How)");

    if ((how == 0) && (_subscription != NULL))
    {
        uObject* sub = uAs<uObject*>(_subscription, ::g::Fuse::Reactive::ISubscription_typeof());

        if (sub != NULL)
            ::g::Fuse::Reactive::ISubscription::ReplaceAllExclusive(uInterface(uPtr(sub), ::g::Fuse::Reactive::ISubscription_typeof()), (uObject*)Selection__ListWrapper::New1(_values));
        else
            ::g::Fuse::Diagnostics::UserWarning(uString::Const("Selection changed, but the bound collection is not writeable."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno"), 356, uString::Const("OnSelectionChanged"));
    }

    OnPropertyChanged(Selection::ValueName_);

    if (::g::Uno::Delegate::op_Inequality(SelectionChanged1, NULL))
        uPtr(SelectionChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Remove(Fuse.Selection.Selectable b) [instance] :202
void Selection::Remove1(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "Remove(Fuse.Selection.Selectable)");
    Remove2(uPtr(b)->Value());
}

// private void Remove(string value) [instance] :296
void Selection::Remove2(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Remove(string)");
    bool ret18;
    bool ret19;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret18), ret18))
        return;

    if ((uPtr(_values)->Count() - 1) < MinCount())
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret19);
    OnSelectionChanged(0);
}

// public Fuse.Selection.SelectionReplace get_Replace() [instance] :103
int32_t Selection::Replace()
{
    return _replace;
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) [instance] :104
void Selection::Replace(int32_t value)
{
    _replace = value;
}

// public int get_SelectedCount() [instance] :257
int32_t Selection::SelectedCount()
{
    uStackFrame __("Fuse.Selection.Selection", "get_SelectedCount()");
    return uPtr(_values)->Count();
}

// public generated void add_SelectionChanged(Uno.EventHandler value) [instance] :331
void Selection::add_SelectionChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Selection.Selection", "add_SelectionChanged(Uno.EventHandler)");
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SelectionChanged1, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) [instance] :331
void Selection::remove_SelectionChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Selection.Selection", "remove_SelectionChanged(Uno.EventHandler)");
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SelectionChanged1, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) [instance] :278
void Selection::SetValue(uString* value, uObject* origin)
{
    uStackFrame __("Fuse.Selection.Selection", "SetValue(string,Uno.UX.IPropertyListener)");
    uString* ret20;
    uString* ret21;

    if (::g::Uno::String::op_Equality(value, Value()))
        return;

    bool has = false;

    for (int32_t i = uPtr(_values)->Count() - 1; i >= 0; i--)
        if (::g::Uno::String::op_Inequality((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int32_t>(i), &ret20), ret20), value))
            Remove2((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int32_t>(i), &ret21), ret21));
        else
            has = true;

    if (!has)
        Add2(value);
}

// public void Toggle(Fuse.Selection.Selectable b) [instance] :174
void Selection::Toggle(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "Toggle(Fuse.Selection.Selectable)");
    Toggle1(uPtr(b)->Value());
}

// private void Toggle(string value) [instance] :179
void Selection::Toggle1(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Toggle(string)");
    bool ret24;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret24), ret24))
        Remove2(value);
    else
        Add2(value);
}

// public string get_Value() [instance] :272
uString* Selection::Value()
{
    uStackFrame __("Fuse.Selection.Selection", "get_Value()");
    uString* ret25;
    return (uPtr(_values)->Count() > 0) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int32_t>(0), &ret25), ret25) : uString::Const("");
}

// public void set_Value(string value) [instance] :276
void Selection::Value(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "set_Value(string)");
    SetValue(value, NULL);
}

// public object get_Values() [instance] :388
uObject* Selection::Values()
{
    return _observableValues;
}

// public void set_Values(object value) [instance] :389
void Selection::Values(uObject* value)
{
    uStackFrame __("Fuse.Selection.Selection", "set_Values(object)");
    uObject* q = uAs<uObject*>(value, ::g::Fuse::Reactive::IObservableArray_typeof());

    if ((value != NULL) && (q == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("`Values` must be an IObservableArray"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno"), 394, uString::Const("set_Values"), NULL);
        return;
    }

    if (_observableValues != q)
    {
        _observableValues = q;
        OnObservableValuesChanged();
    }
}

// private static void add(Fuse.Selection.Selection s, object[] args) [static] :39
void Selection::add(Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "add(Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret2;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("add requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.ScriptClass.uno"), 43, ::STRINGS[6/*"add"*/], NULL);
        return;
    }

    uPtr(s)->Add2((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret2), ret2));
}

// private static void clear(Fuse.Selection.Selection s) [static] :27
void Selection::clear(Selection* s)
{
    uStackFrame __("Fuse.Selection.Selection", "clear(Fuse.Selection.Selection)");
    Selection_typeof()->Init();
    uPtr(s)->Clear();
}

// private static void forceAdd(Fuse.Selection.Selection s, object[] args) [static] :71
void Selection::forceAdd(Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "forceAdd(Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret4;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("forceAdd requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.ScriptClass.uno"), 75, uString::Const("forceAdd"), NULL);
        return;
    }

    uPtr(s)->ForceAdd1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret4), ret4));
}

// private static void forceRemove(Fuse.Selection.Selection s, object[] args) [static] :85
void Selection::forceRemove(Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "forceRemove(Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret6;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("forceRemove requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.ScriptClass.uno"), 89, uString::Const("forceRemove"), NULL);
        return;
    }

    uPtr(s)->ForceRemove1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret6), ret6));
}

// public generated Selection New() [static] :9
Selection* Selection::New2()
{
    Selection* obj1 = (Selection*)uNew(Selection_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static void remove(Fuse.Selection.Selection s, object[] args) [static] :57
void Selection::remove(Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "remove(Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret17;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("remove requires 1 argument, the value of the item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.ScriptClass.uno"), 61, ::STRINGS[7/*"remove"*/], NULL);
        return;
    }

    uPtr(s)->Remove2((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret17), ret17));
}

// private static void toggle(Fuse.Selection.Selection s, object[] args) [static] :101
void Selection::toggle(Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "toggle(Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret23;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("toggle requires 1 argument, the value of them item"), s, uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.ScriptClass.uno"), 105, ::STRINGS[8/*"toggle"*/], NULL);
        return;
    }

    uPtr(s)->Toggle1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL), uPtr(args)->Strong<uObject*>(0), &ret23), ret23));
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) [static] :58
bool Selection::TryFindSelectable(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection)
{
    uStackFrame __("Fuse.Selection.Selection", "TryFindSelectable(Fuse.Node,Fuse.Selection.Selectable&,Fuse.Selection.Selection&)");
    Selection_typeof()->Init();
    *selectable = NULL;
    *selection = NULL;

    while (n != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(n, ::g::Fuse::Visual_typeof());

        if (vs != NULL)
        {
            if (*selectable == NULL)
                *selectable = (::g::Fuse::Selection::Selectable*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selectable>*/, ::g::Fuse::Selection::Selectable_typeof(), NULL));
            else
                *selection = (Selection*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selection>*/, Selection_typeof(), NULL));

            if ((*selectable != NULL) && (*selection != NULL))
                return true;
        }

        n = uPtr(n)->ContextParent();
    }

    *selectable = NULL;
    *selection = NULL;
    return false;
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) [static] :41
Selection* Selection::TryFindSelection(::g::Fuse::Node* v)
{
    uStackFrame __("Fuse.Selection.Selection", "TryFindSelection(Fuse.Node)");
    Selection_typeof()->Init();

    while (v != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(v, ::g::Fuse::Visual_typeof());

        if (vs != NULL)
        {
            Selection* l = (Selection*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selection>*/, Selection_typeof(), NULL));

            if (l != NULL)
                return l;
        }

        v = uPtr(v)->ContextParent();
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selected.uno
// ---------------------------------------------------------------

// public abstract class SelectionEvent :26
// {
static void SelectionEvent_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unable to locate a `Selectable` and `Selection`");
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selected.uno");
    ::STRINGS[13] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Fuse::Selection::SelectionEventArgs_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SelectionEvent_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SelectionEvent_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SelectionEvent_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SelectionEvent_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(SelectionEvent_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SelectionEvent_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SelectionEvent_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(SelectionEvent_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(SelectionEvent_type, interface8));
    type->SetFields(40,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(SelectionEvent, _selectable), 0,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(SelectionEvent, _selection), 0,
        ::g::Uno::Bool_typeof(), offsetof(SelectionEvent, _selected), 0);
}

SelectionEvent_type* SelectionEvent_typeof()
{
    static uSStrong<SelectionEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SelectionEvent);
    options.TypeSize = sizeof(SelectionEvent_type);
    type = (SelectionEvent_type*)uClassType::New("Fuse.Selection.SelectionEvent", options);
    type->fp_build_ = SelectionEvent_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SelectionEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SelectionEvent__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// internal SelectionEvent() :28
void SelectionEvent__ctor_6_fn(SelectionEvent* __this)
{
    __this->ctor_6();
}

// protected override sealed void OnRooted() :35
void SelectionEvent__OnRooted_fn(SelectionEvent* __this)
{
    uStackFrame __("Fuse.Selection.SelectionEvent", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(__this->Parent(), &__this->_selectable, &__this->_selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Unable to l...*/], __this, ::STRINGS[16/*"/usr/local/...*/], 41, ::STRINGS[13/*"OnRooted"*/], NULL);
        return;
    }

    uPtr(__this->_selection)->add_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)SelectionEvent__OnSelectionChanged_fn, __this));
    __this->_selected = uPtr(__this->_selection)->IsSelected(__this->_selectable);
}

// private void OnSelectionChanged(object s, object args) :59
void SelectionEvent__OnSelectionChanged_fn(SelectionEvent* __this, uObject* s, uObject* args)
{
    __this->OnSelectionChanged(s, args);
}

// protected override sealed void OnUnrooted() :49
void SelectionEvent__OnUnrooted_fn(SelectionEvent* __this)
{
    uStackFrame __("Fuse.Selection.SelectionEvent", "OnUnrooted()");

    if (__this->_selection != NULL)
        uPtr(__this->_selection)->remove_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)SelectionEvent__OnSelectionChanged_fn, __this));

    __this->_selection = NULL;
    __this->_selectable = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// internal SelectionEvent() [instance] :28
void SelectionEvent::ctor_6()
{
    ctor_5();
}

// private void OnSelectionChanged(object s, object args) [instance] :59
void SelectionEvent::OnSelectionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Selection.SelectionEvent", "OnSelectionChanged(object,object)");
    bool news = uPtr(_selection)->IsSelected(_selectable);

    if (news == _selected)
        return;

    if (IsTriggered(news))
        Pulse1(::g::Fuse::Selection::SelectionEventArgs::New2(uPtr(_selectable)->Value()));

    _selected = news;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selected.uno
// ---------------------------------------------------------------

// public sealed class SelectionEventArgs :8
// {
static void SelectionEventArgs_build(uType* type)
{
    ::STRINGS[17] = uString::Const("value");
    ::TYPES[8] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(SelectionEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(SelectionEventArgs, _Value), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SelectionEventArgs__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)SelectionEventArgs__get_Value_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

SelectionEventArgs_type* SelectionEventArgs_typeof()
{
    static uSStrong<SelectionEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SelectionEventArgs);
    options.TypeSize = sizeof(SelectionEventArgs_type);
    type = (SelectionEventArgs_type*)uClassType::New("Fuse.Selection.SelectionEventArgs", options);
    type->fp_build_ = SelectionEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))SelectionEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public SelectionEventArgs(string value) :15
void SelectionEventArgs__ctor_1_fn(SelectionEventArgs* __this, uString* value)
{
    __this->ctor_1(value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :20
void SelectionEventArgs__FuseScriptingIScriptEventSerialize_fn(SelectionEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Selection.SelectionEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[8/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"value"*/], __this->Value());
}

// public SelectionEventArgs New(string value) :15
void SelectionEventArgs__New2_fn(uString* value, SelectionEventArgs** __retval)
{
    *__retval = SelectionEventArgs::New2(value);
}

// public generated string get_Value() :13
void SelectionEventArgs__get_Value_fn(SelectionEventArgs* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(string value) :13
void SelectionEventArgs__set_Value_fn(SelectionEventArgs* __this, uString* value)
{
    __this->Value(value);
}

// public SelectionEventArgs(string value) [instance] :15
void SelectionEventArgs::ctor_1(uString* value)
{
    ctor_();
    Value(value);
}

// public generated string get_Value() [instance] :13
uString* SelectionEventArgs::Value()
{
    return _Value;
}

// private generated void set_Value(string value) [instance] :13
void SelectionEventArgs::Value(uString* value)
{
    _Value = value;
}

// public SelectionEventArgs New(string value) [static] :15
SelectionEventArgs* SelectionEventArgs::New2(uString* value)
{
    SelectionEventArgs* obj1 = (SelectionEventArgs*)uNew(SelectionEventArgs_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/Selection.uno
// ----------------------------------------------------------------

// public enum SelectionReplace :9
uEnumType* SelectionReplace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectionReplace", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Oldest", 0LL,
        "Newest", 1LL,
        "None", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/ToggleSelection.uno
// ----------------------------------------------------------------------

// public enum SelectMode :8
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Toggle", 0LL,
        "AddOnly", 1LL,
        "RemoveOnly", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/ToggleSelection.uno
// ----------------------------------------------------------------------

// public sealed class ToggleSelection :26
// {
static void ToggleSelection_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Unable to locate Selectable");
    ::STRINGS[19] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/ToggleSelection.uno");
    ::STRINGS[20] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(11,
        ::g::Fuse::Selection::SelectMode_typeof(), offsetof(ToggleSelection, _mode), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Mode", NULL, (void*)ToggleSelection__get_Mode_fn, 0, false, ::g::Fuse::Selection::SelectMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)ToggleSelection__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::SelectMode_typeof()),
        new uFunction(".ctor", NULL, (void*)ToggleSelection__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ToggleSelection);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Selection.ToggleSelection", options);
    type->fp_build_ = ToggleSelection_build;
    type->fp_ctor_ = (void*)ToggleSelection__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSelection__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated ToggleSelection() :26
void ToggleSelection__ctor_2_fn(ToggleSelection* __this)
{
    __this->ctor_2();
}

// public Fuse.Selection.SelectMode get_Mode() :36
void ToggleSelection__get_Mode_fn(ToggleSelection* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Selection.SelectMode value) :37
void ToggleSelection__set_Mode_fn(ToggleSelection* __this, int32_t* value)
{
    __this->Mode(*value);
}

// public generated ToggleSelection New() :26
void ToggleSelection__New2_fn(ToggleSelection** __retval)
{
    *__retval = ToggleSelection::New2();
}

// protected override sealed void Perform(Fuse.Node target) :40
void ToggleSelection__Perform_fn(ToggleSelection* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Selection.ToggleSelection", "Perform(Fuse.Node)");
    ::g::Fuse::Selection::Selectable* selectable;
    ::g::Fuse::Selection::Selection* selection;

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(target, &selectable, &selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[18/*"Unable to l...*/], __this, ::STRINGS[19/*"/usr/local/...*/], 46, ::STRINGS[20/*"Perform"*/], NULL);
        return;
    }

    switch (__this->Mode())
    {
        case 0:
        {
            uPtr(selection)->Toggle(selectable);
            break;
        }
        case 1:
        {
            uPtr(selection)->Add1(selectable);
            break;
        }
        case 2:
        {
            uPtr(selection)->Remove1(selectable);
            break;
        }
    }
}

// public generated ToggleSelection() [instance] :26
void ToggleSelection::ctor_2()
{
    ctor_1();
}

// public Fuse.Selection.SelectMode get_Mode() [instance] :36
int32_t ToggleSelection::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Selection.SelectMode value) [instance] :37
void ToggleSelection::Mode(int32_t value)
{
    _mode = value;
}

// public generated ToggleSelection New() [static] :26
ToggleSelection* ToggleSelection::New2()
{
    ToggleSelection* obj1 = (ToggleSelection*)uNew(ToggleSelection_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Selection/1.9.0/WhileSelected.uno
// --------------------------------------------------------------------

// public sealed class WhileSelected :17
// {
static void WhileSelected_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unable to locate a `Selectable` and `Selection`");
    ::STRINGS[21] = uString::Const("/usr/local/share/uno/Packages/Fuse.Selection/1.9.0/WhileSelected.uno");
    ::STRINGS[13] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSelected_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileSelected_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileSelected_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileSelected_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(WhileSelected_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSelected_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSelected_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileSelected_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileSelected_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileSelected_type, interface9));
    type->SetFields(40,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(WhileSelected, _selectable), 0,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(WhileSelected, _selection), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileSelected__New2_fn, 0, true, type, 0));
}

WhileSelected_type* WhileSelected_typeof()
{
    static uSStrong<WhileSelected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WhileSelected);
    options.TypeSize = sizeof(WhileSelected_type);
    type = (WhileSelected_type*)uClassType::New("Fuse.Selection.WhileSelected", options);
    type->fp_build_ = WhileSelected_build;
    type->fp_ctor_ = (void*)WhileSelected__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileSelected__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileSelected__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileSelected__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileSelected() :17
void WhileSelected__ctor_6_fn(WhileSelected* __this)
{
    __this->ctor_6();
}

// public generated WhileSelected New() :17
void WhileSelected__New2_fn(WhileSelected** __retval)
{
    *__retval = WhileSelected::New2();
}

// protected override sealed void OnRooted() :22
void WhileSelected__OnRooted_fn(WhileSelected* __this)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(__this->Parent(), &__this->_selectable, &__this->_selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Unable to l...*/], __this, ::STRINGS[21/*"/usr/local/...*/], 28, ::STRINGS[13/*"OnRooted"*/], NULL);
        return;
    }

    __this->SetActive(uPtr(__this->_selection)->IsSelected(__this->_selectable));
    uPtr(__this->_selection)->add_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)WhileSelected__OnSelectionChanged_fn, __this));
    uPtr(__this->_selectable)->AddPropertyListener((uObject*)__this);
}

// private void OnSelectionChanged(object s, object args) :60
void WhileSelected__OnSelectionChanged_fn(WhileSelected* __this, uObject* s, uObject* args)
{
    __this->OnSelectionChanged(s, args);
}

// protected override sealed void OnUnrooted() :37
void WhileSelected__OnUnrooted_fn(WhileSelected* __this)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "OnUnrooted()");

    if (__this->_selection != NULL)
    {
        uPtr(__this->_selection)->remove_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)WhileSelected__OnSelectionChanged_fn, __this));
        uPtr(__this->_selectable)->RemovePropertyListener((uObject*)__this);
    }

    __this->_selection = NULL;
    __this->_selectable = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :50
void WhileSelected__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSelected* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");

    if (obj == __this->_selectable)
        __this->BypassSetActive(uPtr(__this->_selection)->IsSelected(__this->_selectable));
}

// public generated WhileSelected() [instance] :17
void WhileSelected::ctor_6()
{
    ctor_5();
}

// private void OnSelectionChanged(object s, object args) [instance] :60
void WhileSelected::OnSelectionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "OnSelectionChanged(object,object)");
    SetActive(uPtr(_selection)->IsSelected(_selectable));
}

// public generated WhileSelected New() [static] :17
WhileSelected* WhileSelected::New2()
{
    WhileSelected* obj1 = (WhileSelected*)uNew(WhileSelected_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

}}} // ::g::Fuse::Selection
