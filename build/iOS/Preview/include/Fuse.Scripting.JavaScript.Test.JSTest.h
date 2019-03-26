// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.9.0/JSTest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{namespace Test{struct JSTest;}}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{
namespace Test{

// public sealed class JSTest :16
// {
uType* JSTest_typeof();
void JSTest__ctor__fn(JSTest* __this, uDelegate* test);
void JSTest__AddTestToJSContext_fn(JSTest* __this, ::g::Fuse::Scripting::Context* context);
void JSTest__JSAssertCallback_fn(JSTest* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void JSTest__New1_fn(uDelegate* test, JSTest** __retval);
void JSTest__RunTest_fn(uDelegate* method);
void JSTest__TestBodyWrapper_fn(JSTest* __this, ::g::Fuse::Scripting::Context* context);
void JSTest__WaitOnResults_fn(JSTest* __this);

struct JSTest : uObject
{
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _testComplete;
    uStrong<uDelegate*> _test;
    uStrong< ::g::Uno::Collections::List*> _failures;

    void ctor_(uDelegate* test);
    void AddTestToJSContext(::g::Fuse::Scripting::Context* context);
    uObject* JSAssertCallback(::g::Fuse::Scripting::Context* context, uArray* args);
    void TestBodyWrapper(::g::Fuse::Scripting::Context* context);
    void WaitOnResults();
    static JSTest* New1(uDelegate* test);
    static void RunTest(uDelegate* method);
};
// }

}}}}} // ::g::Fuse::Scripting::JavaScript::Test
