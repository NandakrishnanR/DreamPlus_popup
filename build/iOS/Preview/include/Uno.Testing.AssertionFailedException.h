// This file was generated based on /usr/local/share/uno/Packages/Uno.Testing/1.9.0/Exceptions/AssertionFailedException.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Testing{struct AssertionFailedException;}}}

namespace g{
namespace Uno{
namespace Testing{

// internal sealed class AssertionFailedException :3
// {
::g::Uno::Exception_type* AssertionFailedException_typeof();
void AssertionFailedException__ctor_3_fn(AssertionFailedException* __this, uString* fileName, int32_t* line, uString* memberName, uString* expected, uString* actual);
void AssertionFailedException__New4_fn(uString* fileName, int32_t* line, uString* memberName, uString* expected, uString* actual, AssertionFailedException** __retval);

struct AssertionFailedException : ::g::Uno::Exception
{
    uStrong<uString*> FileName;
    int32_t Line;
    uStrong<uString*> MemberName;
    uStrong<uObject*> Expected;
    uStrong<uObject*> Actual;

    void ctor_3(uString* fileName, int32_t line, uString* memberName, uString* expected, uString* actual);
    static AssertionFailedException* New4(uString* fileName, int32_t line, uString* memberName, uString* expected, uString* actual);
};
// }

}}} // ::g::Uno::Testing
