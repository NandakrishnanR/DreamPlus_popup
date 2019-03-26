// This file was generated based on /usr/local/share/uno/Packages/Uno.Testing/1.9.0/Registry.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Testing{struct NamedTestMethod;}}}
namespace g{namespace Uno{namespace Testing{struct Registry;}}}

namespace g{
namespace Uno{
namespace Testing{

// public sealed class Registry :5
// {
uType* Registry_typeof();
void Registry__ctor__fn(Registry* __this);
void Registry__New1_fn(Registry** __retval);

struct Registry : uObject
{
    uStrong< ::g::Uno::Collections::List*> _tests;

    void ctor_();
    static Registry* New1();
};
// }

}}} // ::g::Uno::Testing
