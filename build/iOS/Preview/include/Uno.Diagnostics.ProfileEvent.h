// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/ProfileEvent.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public abstract class ProfileEvent :4
// {
struct ProfileEvent_type : uType
{
    void(*fp_get_Type)(::g::Uno::Diagnostics::ProfileEvent*, int32_t*);
};

ProfileEvent_type* ProfileEvent_typeof();
void ProfileEvent__ctor__fn(ProfileEvent* __this);

struct ProfileEvent : uObject
{
    double TimeStamp;

    void ctor_();
    int32_t Type() { int32_t __retval; return (((ProfileEvent_type*)__type)->fp_get_Type)(this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Diagnostics
