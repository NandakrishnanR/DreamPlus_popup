// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.JavaScript.RootableScriptModule.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.Fence.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Testing.JavaScriptTest.h>
#include <Fuse.Testing.TestFailedException.h>
#include <Fuse.Testing.TestRootPanel.h>
#include <Fuse.Testing.TestRootPanel.StepFlags.h>
#include <Fuse.Testing.TestRootSingletonsGuard.h>
#include <Fuse.Testing.TestRootViewport.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Testing.UnoTestingHelper.TestFailure.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.Testing.Assert.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[2];

namespace g{
namespace Fuse{
namespace Testing{

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/JavaScriptTest.uno
// -------------------------------------------------------------------

// public sealed class JavaScriptTest :51
// {
static void JavaScriptTest_build(uType* type)
{
    ::STRINGS[0] = uString::Const("try {\n"
        "");
    ::STRINGS[1] = uString::Const("\n"
        "} catch (err) {\n"
        "\tvar helper = require(\"FuseJS/Internal/UnoTestingHelper\");\n"
        "\thelper.testFailed(\"stack\" in err ? err.stack : err.message);\n"
        "}\n"
        "");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::JavaScript_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::JavaScript_type, interface6),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface7),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface8),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface9),
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::JavaScript_type, interface10));
    type->SetFields(26);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)JavaScriptTest__New3_fn, 0, true, type, 1, ::g::Uno::UX::NameTable_typeof()));
}

::g::Fuse::Reactive::JavaScript_type* JavaScriptTest_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::JavaScript_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 11;
    options.ObjectSize = sizeof(JavaScriptTest);
    options.TypeSize = sizeof(::g::Fuse::Reactive::JavaScript_type);
    type = (::g::Fuse::Reactive::JavaScript_type*)uClassType::New("Fuse.Testing.JavaScriptTest", options);
    type->fp_build_ = JavaScriptTest_build;
    type->interface10.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::JavaScript__FuseReactiveIContextSubscribe_fn;
    type->interface10.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::JavaScript__FuseReactiveIContextSubscribeResource_fn;
    type->interface7.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Reactive::JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface8.fp_NewValue = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface8.fp_LostValue = (void(*)(uObject*))::g::Fuse::Reactive::JavaScript__FuseReactiveValueForwarderIValueListenerLostValue_fn;
    type->interface9.fp_TryGetDataProvider = (void(*)(uObject*, int32_t*, uObject**, int32_t*))::g::Fuse::Reactive::JavaScript__FuseNodeISiblingDataProviderTryGetDataProvider_fn;
    type->interface10.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::JavaScript__FuseReactiveIContextget_Node_fn;
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

// public JavaScriptTest(Uno.UX.NameTable nameTable) :54
void JavaScriptTest__ctor_4_fn(JavaScriptTest* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_4(nameTable);
}

// public JavaScriptTest New(Uno.UX.NameTable nameTable) :54
void JavaScriptTest__New3_fn(::g::Uno::UX::NameTable* nameTable, JavaScriptTest** __retval)
{
    *__retval = JavaScriptTest::New3(nameTable);
}

// public JavaScriptTest(Uno.UX.NameTable nameTable) [instance] :54
void JavaScriptTest::ctor_4(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Testing.JavaScriptTest", ".ctor(Uno.UX.NameTable)");
    ctor_3(nameTable);
    uPtr(ScriptModule())->Preamble(::STRINGS[0/*"try {\n"*/]);
    uPtr(ScriptModule())->Postamble(::STRINGS[1/*"\n} catch (...*/]);
}

// public JavaScriptTest New(Uno.UX.NameTable nameTable) [static] :54
JavaScriptTest* JavaScriptTest::New3(::g::Uno::UX::NameTable* nameTable)
{
    JavaScriptTest* obj1 = (JavaScriptTest*)uNew(JavaScriptTest_typeof());
    obj1->ctor_4(nameTable);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/TestRootPanel.uno
// ------------------------------------------------------------------

// private enum TestRootPanel.StepFlags :142
uEnumType* TestRootPanel__StepFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Testing.TestRootPanel.StepFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "WaitJS", 1LL,
        "IncrementFrame", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/JavaScriptTest.uno
// -------------------------------------------------------------------

// internal sealed class TestFailedException :9
// {
static void TestFailedException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* TestFailedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(TestFailedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Testing.TestFailedException", options);
    type->fp_build_ = TestFailedException_build;
    return type;
}

// public TestFailedException(string message) :11
void TestFailedException__ctor_3_fn(TestFailedException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public TestFailedException New(string message) :11
void TestFailedException__New4_fn(uString* message, TestFailedException** __retval)
{
    *__retval = TestFailedException::New4(message);
}

// public TestFailedException(string message) [instance] :11
void TestFailedException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public TestFailedException New(string message) [static] :11
TestFailedException* TestFailedException::New4(uString* message)
{
    TestFailedException* obj1 = (TestFailedException*)uNew(TestFailedException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/JavaScriptTest.uno
// -------------------------------------------------------------------

// private sealed class UnoTestingHelper.TestFailure :29
// {
static void UnoTestingHelper__TestFailure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(UnoTestingHelper__TestFailure, _message), 0);
}

uType* UnoTestingHelper__TestFailure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UnoTestingHelper__TestFailure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Testing.UnoTestingHelper.TestFailure", options);
    type->fp_build_ = UnoTestingHelper__TestFailure_build;
    return type;
}

// public TestFailure(string message) :32
void UnoTestingHelper__TestFailure__ctor__fn(UnoTestingHelper__TestFailure* __this, uString* message)
{
    __this->ctor_(message);
}

// public void Fail() :37
void UnoTestingHelper__TestFailure__Fail_fn(UnoTestingHelper__TestFailure* __this)
{
    __this->Fail();
}

// public TestFailure New(string message) :32
void UnoTestingHelper__TestFailure__New1_fn(uString* message, UnoTestingHelper__TestFailure** __retval)
{
    *__retval = UnoTestingHelper__TestFailure::New1(message);
}

// public TestFailure(string message) [instance] :32
void UnoTestingHelper__TestFailure::ctor_(uString* message)
{
    _message = message;
}

// public void Fail() [instance] :37
void UnoTestingHelper__TestFailure::Fail()
{
    uStackFrame __("Fuse.Testing.UnoTestingHelper.TestFailure", "Fail()");
    U_THROW(::g::Fuse::Testing::TestFailedException::New4(_message));
}

// public TestFailure New(string message) [static] :32
UnoTestingHelper__TestFailure* UnoTestingHelper__TestFailure::New1(uString* message)
{
    UnoTestingHelper__TestFailure* obj1 = (UnoTestingHelper__TestFailure*)uNew(UnoTestingHelper__TestFailure_typeof());
    obj1->ctor_(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/TestRootPanel.uno
// ------------------------------------------------------------------

// public sealed class TestRootPanel :54
// {
static void TestRootPanel_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Testing::Assert_typeof(),
        ::g::Fuse::UpdateManager_typeof());
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
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Fuse::Testing::TestRootViewport_typeof(), offsetof(TestRootPanel, _rootViewport), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL), offsetof(TestRootPanel, _errors), 0,
        ::g::Uno::Float_typeof(), offsetof(TestRootPanel, _frameIncrement), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)TestRootPanel__New4_fn, 0, true, type, 0),
        new uFunction("RunTest", NULL, (void*)TestRootPanel__RunTest_fn, 0, false, uVoid_typeof(), 0));
}

::g::Fuse::Controls::Panel_type* TestRootPanel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 123;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(TestRootPanel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Testing.TestRootPanel", options);
    type->fp_build_ = TestRootPanel_build;
    type->fp_ctor_ = (void*)TestRootPanel__New4_fn;
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

// public TestRootPanel() :60
void TestRootPanel__ctor_7_fn(TestRootPanel* __this)
{
    __this->ctor_7();
}

// private Fuse.Testing.TestFailedException FindTestFailedException(Uno.Exception e) :71
void TestRootPanel__FindTestFailedException_fn(TestRootPanel* __this, ::g::Uno::Exception* e, ::g::Fuse::Testing::TestFailedException** __retval)
{
    *__retval = __this->FindTestFailedException(e);
}

// private void IncrementFrameImpl([float elapsedTime], [Fuse.Testing.TestRootPanel.StepFlags flags]) :173
void TestRootPanel__IncrementFrameImpl_fn(TestRootPanel* __this, float* elapsedTime, int32_t* flags)
{
    __this->IncrementFrameImpl(*elapsedTime, *flags);
}

// public TestRootPanel New() :60
void TestRootPanel__New4_fn(TestRootPanel** __retval)
{
    *__retval = TestRootPanel::New4();
}

// private void OnDiagnostic(Fuse.Diagnostic d) :133
void TestRootPanel__OnDiagnostic_fn(TestRootPanel* __this, ::g::Fuse::Diagnostic* d)
{
    __this->OnDiagnostic(d);
}

// internal Fuse.Testing.TestRootViewport get_RootViewport() :58
void TestRootPanel__get_RootViewport_fn(TestRootPanel* __this, ::g::Fuse::Testing::TestRootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// public void RunTest() :96
void TestRootPanel__RunTest_fn(TestRootPanel* __this)
{
    __this->RunTest();
}

// internal void StepFrameJS() :229
void TestRootPanel__StepFrameJS_fn(TestRootPanel* __this)
{
    __this->StepFrameJS();
}

// public TestRootPanel() [instance] :60
void TestRootPanel::ctor_7()
{
    uStackFrame __("Fuse.Testing.TestRootPanel", ".ctor()");
    _errors = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL)));
    _frameIncrement = 0.0166666675f;
    ctor_6();
    SnapToPixels(false);
    _rootViewport = ::g::Fuse::Testing::TestRootViewport::New4(uPtr(::g::Uno::Application::Current1())->Window(), 1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(_rootViewport)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), this);
    ::g::Fuse::Time::Init(0.0);
}

// private Fuse.Testing.TestFailedException FindTestFailedException(Uno.Exception e) [instance] :71
::g::Fuse::Testing::TestFailedException* TestRootPanel::FindTestFailedException(::g::Uno::Exception* e)
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "FindTestFailedException(Uno.Exception)");
    ::g::Uno::Exception* ret5;
    ::g::Fuse::Testing::TestFailedException* testFailedException = uAs< ::g::Fuse::Testing::TestFailedException*>(e, ::g::Fuse::Testing::TestFailedException_typeof());

    if (testFailedException != NULL)
        return testFailedException;

    ::g::Uno::AggregateException* aggregateException = uAs< ::g::Uno::AggregateException*>(e, ::g::Uno::AggregateException_typeof());

    if (aggregateException != NULL)
    {
        uObject* enum1 = (uObject*)uPtr(uPtr(aggregateException)->InnerExceptions())->GetEnumerator();

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        ::g::Uno::Exception* innerException = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL)), &ret5), ret5);
                        testFailedException = FindTestFailedException(innerException);

                        if (testFailedException != NULL)
                        {
                            ::g::Fuse::Testing::TestFailedException* __uno_retval = testFailedException;
                            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
                            return __uno_retval;
                        }
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
            }
            __after_finally_0:;
        }
    }

    ::g::Fuse::WrapException* wrapException = uAs< ::g::Fuse::WrapException*>(e, ::g::Fuse::WrapException_typeof());

    if (wrapException != NULL)
        return FindTestFailedException(uPtr(wrapException)->InnerException());

    return NULL;
}

// private void IncrementFrameImpl([float elapsedTime], [Fuse.Testing.TestRootPanel.StepFlags flags]) [instance] :173
void TestRootPanel::IncrementFrameImpl(float elapsedTime, int32_t flags)
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "IncrementFrameImpl([float],[Fuse.Testing.TestRootPanel.StepFlags])");

    if (elapsedTime < 0.0f)
        elapsedTime = _frameIncrement;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Scripting::JavaScript::ThreadWorker* w = ::g::Fuse::Reactive::JavaScript::Worker_;

        if (w != NULL)
            uPtr(w)->WaitIdle();
    }

    ::g::Fuse::Time::Set(::g::Fuse::Time::FrameTime() + (double)elapsedTime);
    ::g::Fuse::UpdateManager::Update();

    if ((flags & 2) == 2)
        ::g::Fuse::UpdateManager::IncreaseFrameIndex();
}

// private void OnDiagnostic(Fuse.Diagnostic d) [instance] :133
void TestRootPanel::OnDiagnostic(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "OnDiagnostic(Fuse.Diagnostic)");

    if (uPtr(d)->UnoType() == 3)
        ::g::Uno::Collections::List__Add_fn(uPtr(_errors), d);
}

// internal Fuse.Testing.TestRootViewport get_RootViewport() [instance] :58
::g::Fuse::Testing::TestRootViewport* TestRootPanel::RootViewport()
{
    return _rootViewport;
}

// public void RunTest() [instance] :96
void TestRootPanel::RunTest()
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "RunTest()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Diagnostic*> > ret7;
    ::g::Fuse::Testing::TestRootSingletonsGuard* guard = ::g::Fuse::Testing::TestRootSingletonsGuard::New1(this);

    {
        try
        {
            {
                ::g::Fuse::Diagnostics::add_DiagnosticReported(uDelegate::New(::g::Fuse::DiagnosticHandler_typeof(), (void*)TestRootPanel__OnDiagnostic_fn, this));
                uPtr(_rootViewport)->Resize(::g::Uno::Float2__op_Implicit2(::g::Uno::Int2__New2(800, 600)));
                PerformLayout1(::g::Uno::Float2__op_Implicit2(::g::Uno::Int2__New2(800, 600)));

                try
                {
                    {
                        StepFrameJS();
                    }
                }

                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Fuse::Testing::TestFailedException* testFailedException = FindTestFailedException(e);

                    if (testFailedException != NULL)
                        ::g::Uno::Testing::Assert::Fail(uPtr(testFailedException)->Message(), uString::Const("/usr/local/share/uno/Packages/Fuse.Testing/1.9.0/TestRootPanel.uno"), 115, uString::Const("RunTest"));
                    else
                        throw __t;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Fuse::Diagnostics::remove_DiagnosticReported(uDelegate::New(::g::Fuse::DiagnosticHandler_typeof(), (void*)TestRootPanel__OnDiagnostic_fn, this));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Fuse::Diagnostics::remove_DiagnosticReported(uDelegate::New(::g::Fuse::DiagnosticHandler_typeof(), (void*)TestRootPanel__OnDiagnostic_fn, this));
        }
        __after_finally_1:;
    }

    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Diagnostic*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_errors), &ret7), ret7);

    {
        try
        {
            {
                while (enum2.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL)))
                {
                    ::g::Fuse::Diagnostic* e1 = enum2.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL));
                    ::g::Uno::Testing::Assert::Fail(uPtr(e1)->ToString(), uString::Const("/usr/local/share/uno/Packages/Fuse.Testing/1.9.0/TestRootPanel.uno"), 127, uString::Const("RunTest"));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), NULL));
        }
        __after_finally_2:;
    }

    guard->Dispose();
}

// internal void StepFrameJS() [instance] :229
void TestRootPanel::StepFrameJS()
{
    uStackFrame __("Fuse.Testing.TestRootPanel", "StepFrameJS()");
    ::g::Fuse::Scripting::JavaScript::ThreadWorker__Fence* fence = uPtr(::g::Fuse::Reactive::JavaScript::Worker_)->PostFence();
    bool loop = true;

    while (loop)
    {
        loop = !uPtr(fence)->IsSignaled();
        IncrementFrameImpl(_frameIncrement, 3);
    }
}

// public TestRootPanel New() [static] :60
TestRootPanel* TestRootPanel::New4()
{
    TestRootPanel* obj4 = (TestRootPanel*)uNew(TestRootPanel_typeof());
    obj4->ctor_7();
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/TestRootPanel.uno
// ------------------------------------------------------------------

// internal sealed class TestRootSingletonsGuard :343
// {
static void TestRootSingletonsGuard_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(TestRootSingletonsGuard_type, interface0));
}

TestRootSingletonsGuard_type* TestRootSingletonsGuard_typeof()
{
    static uSStrong<TestRootSingletonsGuard_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TestRootSingletonsGuard);
    options.TypeSize = sizeof(TestRootSingletonsGuard_type);
    type = (TestRootSingletonsGuard_type*)uClassType::New("Fuse.Testing.TestRootSingletonsGuard", options);
    type->fp_build_ = TestRootSingletonsGuard_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))TestRootSingletonsGuard__Dispose_fn;
    return type;
}

// internal TestRootSingletonsGuard(Fuse.Testing.TestRootPanel trp) :345
void TestRootSingletonsGuard__ctor__fn(TestRootSingletonsGuard* __this, ::g::Fuse::Testing::TestRootPanel* trp)
{
    __this->ctor_(trp);
}

// public void Dispose() :350
void TestRootSingletonsGuard__Dispose_fn(TestRootSingletonsGuard* __this)
{
    __this->Dispose();
}

// internal TestRootSingletonsGuard New(Fuse.Testing.TestRootPanel trp) :345
void TestRootSingletonsGuard__New1_fn(::g::Fuse::Testing::TestRootPanel* trp, TestRootSingletonsGuard** __retval)
{
    *__retval = TestRootSingletonsGuard::New1(trp);
}

// internal TestRootSingletonsGuard(Fuse.Testing.TestRootPanel trp) [instance] :345
void TestRootSingletonsGuard::ctor_(::g::Fuse::Testing::TestRootPanel* trp)
{
    uStackFrame __("Fuse.Testing.TestRootSingletonsGuard", ".ctor(Fuse.Testing.TestRootPanel)");
    ::g::Fuse::AppBase::TestSetRootViewport(uPtr(trp)->RootViewport());
}

// public void Dispose() [instance] :350
void TestRootSingletonsGuard::Dispose()
{
    ::g::Fuse::AppBase::TestSetRootViewport(NULL);
}

// internal TestRootSingletonsGuard New(Fuse.Testing.TestRootPanel trp) [static] :345
TestRootSingletonsGuard* TestRootSingletonsGuard::New1(::g::Fuse::Testing::TestRootPanel* trp)
{
    TestRootSingletonsGuard* obj1 = (TestRootSingletonsGuard*)uNew(TestRootSingletonsGuard_typeof());
    obj1->ctor_(trp);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/TestRootPanel.uno
// ------------------------------------------------------------------

// internal sealed class TestRootViewport :23
// {
static void TestRootViewport_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TestRootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(TestRootViewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(TestRootViewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(TestRootViewport_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(TestRootViewport_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TestRootViewport_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(TestRootViewport_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(TestRootViewport_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(TestRootViewport_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(TestRootViewport_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(TestRootViewport_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(TestRootViewport_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(TestRootViewport_type, interface12),
        ::g::Fuse::IViewport_typeof(), offsetof(TestRootViewport_type, interface13),
        ::g::Uno::IDisposable_typeof(), offsetof(TestRootViewport_type, interface14),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(TestRootViewport_type, interface15),
        ::g::Fuse::IRenderViewport_typeof(), offsetof(TestRootViewport_type, interface16));
    type->SetFields(79);
}

TestRootViewport_type* TestRootViewport_typeof()
{
    static uSStrong<TestRootViewport_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RootViewport_typeof();
    options.FieldCount = 79;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(TestRootViewport);
    options.TypeSize = sizeof(TestRootViewport_type);
    type = (TestRootViewport_type*)uClassType::New("Fuse.Testing.TestRootViewport", options);
    type->fp_build_ = TestRootViewport_build;
    type->interface16.fp_get_ProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ProjectionTransform_fn;
    type->interface16.fp_get_ViewProjectionTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewProjectionTransform_fn;
    type->interface16.fp_get_ViewOrigin = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::RootViewport__get_ViewOrigin_fn;
    type->interface16.fp_get_ViewRange = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_ViewRange_fn;
    type->interface15.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PixelsPerPoint_fn;
    type->interface15.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface15.fp_get_PixelSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_PixelSize_fn;
    type->interface15.fp_get_ViewTransform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::RootViewport__get_ViewTransform_fn;
    type->interface14.fp_Dispose = (void(*)(uObject*))::g::Fuse::RootViewport__UnoIDisposableDispose_fn;
    type->interface13.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface13.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))::g::Fuse::RootViewport__WorldToLocalRay_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// public extern TestRootViewport(Uno.Platform.Window window, [float pixelsPerPoint]) :33
void TestRootViewport__ctor_5_fn(TestRootViewport* __this, ::g::Uno::Platform::Window* window, float* pixelsPerPoint)
{
    __this->ctor_5(window, *pixelsPerPoint);
}

// public extern TestRootViewport New(Uno.Platform.Window window, [float pixelsPerPoint]) :33
void TestRootViewport__New4_fn(::g::Uno::Platform::Window* window, float* pixelsPerPoint, TestRootViewport** __retval)
{
    *__retval = TestRootViewport::New4(window, *pixelsPerPoint);
}

// internal void Resize(float2 size) :38
void TestRootViewport__Resize_fn(TestRootViewport* __this, ::g::Uno::Float2* size)
{
    __this->Resize(*size);
}

// public extern TestRootViewport(Uno.Platform.Window window, [float pixelsPerPoint]) [instance] :33
void TestRootViewport::ctor_5(::g::Uno::Platform::Window* window, float pixelsPerPoint)
{
    uStackFrame __("Fuse.Testing.TestRootViewport", ".ctor(Uno.Platform.Window,[float])");
    ctor_3();
    OverrideSize(::g::Uno::Float2__New1(100.0f), pixelsPerPoint, pixelsPerPoint);
}

// internal void Resize(float2 size) [instance] :38
void TestRootViewport::Resize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Testing.TestRootViewport", "Resize(float2)");
    OverrideSize(size, PixelsPerPoint(), PixelsPerOSPoint());
    OnResized(NULL, NULL);
}

// public extern TestRootViewport New(Uno.Platform.Window window, [float pixelsPerPoint]) [static] :33
TestRootViewport* TestRootViewport::New4(::g::Uno::Platform::Window* window, float pixelsPerPoint)
{
    TestRootViewport* obj1 = (TestRootViewport*)uNew(TestRootViewport_typeof());
    obj1->ctor_5(window, pixelsPerPoint);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Testing/1.9.0/JavaScriptTest.uno
// -------------------------------------------------------------------

// public sealed class UnoTestingHelper :17
// {
static void UnoTestingHelper_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&UnoTestingHelper::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UnoTestingHelper__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* UnoTestingHelper_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(UnoTestingHelper);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Testing.UnoTestingHelper", options);
    type->fp_build_ = UnoTestingHelper_build;
    type->fp_ctor_ = (void*)UnoTestingHelper__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UnoTestingHelper() :20
void UnoTestingHelper__ctor_2_fn(UnoTestingHelper* __this)
{
    __this->ctor_2();
}

// public UnoTestingHelper New() :20
void UnoTestingHelper__New2_fn(UnoTestingHelper** __retval)
{
    *__retval = UnoTestingHelper::New2();
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) :43
void UnoTestingHelper__TestFailed_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = UnoTestingHelper::TestFailed(c, args);
}

uSStrong<UnoTestingHelper*> UnoTestingHelper::_instance_;

// public UnoTestingHelper() [instance] :20
void UnoTestingHelper::ctor_2()
{
    uStackFrame __("Fuse.Testing.UnoTestingHelper", ".ctor()");
    ctor_1();

    if (UnoTestingHelper::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UnoTestingHelper::_instance_ = this, uString::Const("FuseJS/Internal/UnoTestingHelper"));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("testFailed"), uDelegate::New(::g::Fuse::Scripting::NativeCallback_typeof(), (void*)UnoTestingHelper__TestFailed_fn)));
}

// public UnoTestingHelper New() [static] :20
UnoTestingHelper* UnoTestingHelper::New2()
{
    UnoTestingHelper* obj1 = (UnoTestingHelper*)uNew(UnoTestingHelper_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object TestFailed(Fuse.Scripting.Context c, object[] args) [static] :43
uObject* UnoTestingHelper::TestFailed(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("Fuse.Testing.UnoTestingHelper", "TestFailed(Fuse.Scripting.Context,object[])");
    uString* message = ::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)));
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::g::Uno::Action_typeof(), (void*)UnoTestingHelper__TestFailure__Fail_fn, UnoTestingHelper__TestFailure::New1(message)));
    return NULL;
}
// }

}}} // ::g::Fuse::Testing
