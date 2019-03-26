// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Threading/MainThreadAttribute.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{namespace Threading{struct MainThreadAttribute;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class MainThreadAttribute :5
// {
uType* MainThreadAttribute_typeof();
void MainThreadAttribute__ctor_1_fn(MainThreadAttribute* __this);
void MainThreadAttribute__New1_fn(MainThreadAttribute** __retval);

struct MainThreadAttribute : ::g::Uno::Attribute
{
    void ctor_1();
    static MainThreadAttribute* New1();
};
// }

}}} // ::g::Uno::Threading
