// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Marshal.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.JavaScript.Test.JSTest.h>
#include <Fuse.Scripting.JavaScript.ThreadWorker.h>
#include <Fuse.Scripting.Object.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.ManualResetEvent.h>
static uString* STRINGS[3];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{
namespace Test{

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.9.0/JSTest.uno
// ------------------------------------------------------------------------

// public sealed class JSTest :16
// {
static void JSTest_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("(function(obj, assert) { obj['test'] = { assert: function(exp, msg) { try { assert(Boolean(exp ? 1 : 0), msg); } catch(e) { assert(0, 'Error: ' + e); } } }; } )");
    ::STRINGS[2] = uString::Const("Uknown JS assertion failure");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Exception_typeof();
    ::TYPES[7] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[6/*Uno.Exception*/], NULL);
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof());
    type->SetFields(0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(JSTest, _testComplete), 0,
        ::TYPES[1/*Uno.Action<Fuse.Scripting.Context>*/], offsetof(JSTest, _test), 0,
        ::TYPES[0/*Uno.Collections.List<Uno.Exception>*/], offsetof(JSTest, _failures), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("RunTest", NULL, (void*)JSTest__RunTest_fn, 0, true, uVoid_typeof(), 1, ::TYPES[1/*Uno.Action<Fuse.Scripting.Context>*/]));
}

uType* JSTest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(JSTest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JavaScript.Test.JSTest", options);
    type->fp_build_ = JSTest_build;
    return type;
}

// private JSTest(Uno.Action<Fuse.Scripting.Context> test) :22
void JSTest__ctor__fn(JSTest* __this, uDelegate* test)
{
    __this->ctor_(test);
}

// private void AddTestToJSContext(Fuse.Scripting.Context context) :29
void JSTest__AddTestToJSContext_fn(JSTest* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->AddTestToJSContext(context);
}

// private object JSAssertCallback(Fuse.Scripting.Context context, object[] args) :35
void JSTest__JSAssertCallback_fn(JSTest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->JSAssertCallback(context, args);
}

// private JSTest New(Uno.Action<Fuse.Scripting.Context> test) :22
void JSTest__New1_fn(uDelegate* test, JSTest** __retval)
{
    *__retval = JSTest::New1(test);
}

// public static void RunTest(Uno.Action<Fuse.Scripting.Context> method) :75
void JSTest__RunTest_fn(uDelegate* method)
{
    JSTest::RunTest(method);
}

// private void TestBodyWrapper(Fuse.Scripting.Context context) :51
void JSTest__TestBodyWrapper_fn(JSTest* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->TestBodyWrapper(context);
}

// private void WaitOnResults() :65
void JSTest__WaitOnResults_fn(JSTest* __this)
{
    __this->WaitOnResults();
}

// private JSTest(Uno.Action<Fuse.Scripting.Context> test) [instance] :22
void JSTest::ctor_(uDelegate* test)
{
    uStackFrame __("Fuse.Scripting.JavaScript.Test.JSTest", ".ctor(Uno.Action<Fuse.Scripting.Context>)");
    _testComplete = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _failures = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Exception>*/]));
    ::g::Fuse::Reactive::JavaScript::EnsureVMStarted();
    _test = test;
    uPtr(::g::Fuse::Reactive::JavaScript::Worker_)->Invoke1(uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Scripting.Context>*/], (void*)JSTest__TestBodyWrapper_fn, this));
}

// private void AddTestToJSContext(Fuse.Scripting.Context context) [instance] :29
void JSTest::AddTestToJSContext(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Scripting.JavaScript.Test.JSTest", "AddTestToJSContext(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Function* f = uAs< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::STRINGS[0/*""*/], ::STRINGS[1/*"(function(o...*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);
    uPtr(f)->Call(context, uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, (::g::Fuse::Scripting::Object*)context->GlobalObject(), uDelegate::New(::TYPES[4/*Fuse.Scripting.Callback*/], (void*)JSTest__JSAssertCallback_fn, this)));
}

// private object JSAssertCallback(Fuse.Scripting.Context context, object[] args) [instance] :35
uObject* JSTest::JSAssertCallback(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.Scripting.JavaScript.Test.JSTest", "JSAssertCallback(Fuse.Scripting.Context,object[])");
    bool result = false;

    if (uPtr(args)->Length() > 0)
        result = ::g::Fuse::Marshal::ToBool(uPtr(args)->Strong<uObject*>(0));

    uString* msg = ::STRINGS[2/*"Uknown JS a...*/];

    if (uPtr(args)->Length() > 1)
        msg = uCast<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[5/*string*/]);

    if (!result)
        ::g::Uno::Collections::List__Add_fn(uPtr(_failures), ::g::Uno::Exception::New2(msg));

    return NULL;
}

// private void TestBodyWrapper(Fuse.Scripting.Context context) [instance] :51
void JSTest::TestBodyWrapper(::g::Fuse::Scripting::Context* context)
{
    uStackFrame __("Fuse.Scripting.JavaScript.Test.JSTest", "TestBodyWrapper(Fuse.Scripting.Context)");
    AddTestToJSContext(context);

    try
    {
        {
            uPtr(_test)->InvokeVoid(context);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Collections::List__Add_fn(uPtr(_failures), e);
    }

    uPtr(_testComplete)->Set();
}

// private void WaitOnResults() [instance] :65
void JSTest::WaitOnResults()
{
    uStackFrame __("Fuse.Scripting.JavaScript.Test.JSTest", "WaitOnResults()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Exception*> > ret3;
    uPtr(_testComplete)->WaitOne();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Exception*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_failures), &ret3), ret3);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[7/*Uno.Collections.List<Uno.Exception>.Enumerator*/]))
                {
                    ::g::Uno::Exception* f = enum1.Current(::TYPES[7/*Uno.Collections.List<Uno.Exception>.Enumerator*/]);
                    U_THROW(f);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[7/*Uno.Collections.List<Uno.Exception>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[7/*Uno.Collections.List<Uno.Exception>.Enumerator*/]);
        }
        __after_finally_0:;
    }
}

// private JSTest New(Uno.Action<Fuse.Scripting.Context> test) [static] :22
JSTest* JSTest::New1(uDelegate* test)
{
    JSTest* obj2 = (JSTest*)uNew(JSTest_typeof());
    obj2->ctor_(test);
    return obj2;
}

// public static void RunTest(Uno.Action<Fuse.Scripting.Context> method) [static] :75
void JSTest::RunTest(uDelegate* method)
{
    uStackFrame __("Fuse.Scripting.JavaScript.Test.JSTest", "RunTest(Uno.Action<Fuse.Scripting.Context>)");
    JSTest* test = JSTest::New1(method);
    test->WaitOnResults();
}
// }

}}}}} // ::g::Fuse::Scripting::JavaScript::Test
