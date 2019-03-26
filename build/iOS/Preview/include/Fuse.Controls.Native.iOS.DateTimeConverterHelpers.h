// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/iOS/DateTimeConverterHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct DateTimeConverterHelpers;}}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class DateTimeConverterHelpers :6
// {
uClassType* DateTimeConverterHelpers_typeof();
void DateTimeConverterHelpers__ConvertDateTimeToNSDate_fn(::g::Uno::DateTime* dt, ::g::ObjC::Object** __retval);
void DateTimeConverterHelpers__ConvertNSDateToDateTime_fn(::g::ObjC::Object* date, ::g::Uno::DateTime* __retval);
void DateTimeConverterHelpers__NSDateToSecondsSince1970InUtc_fn(::g::ObjC::Object* date, double* __retval);
void DateTimeConverterHelpers__ReconstructUtcDate_fn(::g::ObjC::Object* date, ::g::ObjC::Object** __retval);
void DateTimeConverterHelpers__ReconstructUtcTime_fn(::g::ObjC::Object* date, ::g::ObjC::Object** __retval);
void DateTimeConverterHelpers__SecondsSince1970InUtcToNSDate_fn(double* secondsSince1970InUtc, ::g::ObjC::Object** __retval);

struct DateTimeConverterHelpers : uObject
{
    static ::g::ObjC::Object* ConvertDateTimeToNSDate(::g::Uno::DateTime dt);
    static ::g::Uno::DateTime ConvertNSDateToDateTime(::g::ObjC::Object* date);
    static double NSDateToSecondsSince1970InUtc(::g::ObjC::Object* date);
    static ::g::ObjC::Object* ReconstructUtcDate(::g::ObjC::Object* date);
    static ::g::ObjC::Object* ReconstructUtcTime(::g::ObjC::Object* date);
    static ::g::ObjC::Object* SecondsSince1970InUtcToNSDate(double secondsSince1970InUtc);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
