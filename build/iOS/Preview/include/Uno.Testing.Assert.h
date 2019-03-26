// This file was generated based on /usr/local/share/uno/Packages/Uno.Testing/1.9.0/Assert.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Testing{struct Assert;}}}

namespace g{
namespace Uno{
namespace Testing{

// public partial static class Assert :8
// {
uClassType* Assert_typeof();
void Assert__Fail_fn(uString* message, uString* filePath, int32_t* lineNumber, uString* memberName);
void Assert__ReportFailure_fn(uString* filePath, int32_t* lineNumber, uString* memberName, uString* expected, uString* actual);

struct Assert : uObject
{
    static int32_t maxStringLength_;
    static int32_t& maxStringLength() { return Assert_typeof()->Init(), maxStringLength_; }

    static void Fail(uString* message, uString* filePath, int32_t lineNumber, uString* memberName);
    static void ReportFailure(uString* filePath, int32_t lineNumber, uString* memberName, uString* expected, uString* actual);
};
// }

}}} // ::g::Uno::Testing
