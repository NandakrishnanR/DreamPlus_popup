// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.9.0/iOS/DateTimeConverterHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.DateTimeConverterHelpers.h>
#include <ObjC.Object.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Double.h>
#include <Uno.Long.h>
#include <uObjC.Foreign.h>
#include <Uno.DateTime.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal static extern class DateTimeConverterHelpers :6
// {
static void DateTimeConverterHelpers_build(uType* type)
{
}

uClassType* DateTimeConverterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.DateTimeConverterHelpers", options);
    type->fp_build_ = DateTimeConverterHelpers_build;
    return type;
}

// public static ObjC.Object ConvertDateTimeToNSDate(Uno.DateTime dt) :21
void DateTimeConverterHelpers__ConvertDateTimeToNSDate_fn(::g::Uno::DateTime* dt, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateTimeToNSDate(*dt);
}

// public static Uno.DateTime ConvertNSDateToDateTime(ObjC.Object date) :11
void DateTimeConverterHelpers__ConvertNSDateToDateTime_fn(::g::ObjC::Object* date, ::g::Uno::DateTime* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertNSDateToDateTime(date);
}

// public static double NSDateToSecondsSince1970InUtc(ObjC.Object date) :33
void DateTimeConverterHelpers__NSDateToSecondsSince1970InUtc_fn(::g::ObjC::Object* date, double* __retval)
{
    *__retval = DateTimeConverterHelpers::NSDateToSecondsSince1970InUtc(date);
}

// public static ObjC.Object ReconstructUtcDate(ObjC.Object date) :45
void DateTimeConverterHelpers__ReconstructUtcDate_fn(::g::ObjC::Object* date, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::ReconstructUtcDate(date);
}

// public static ObjC.Object ReconstructUtcTime(ObjC.Object date) :65
void DateTimeConverterHelpers__ReconstructUtcTime_fn(::g::ObjC::Object* date, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::ReconstructUtcTime(date);
}

// public static ObjC.Object SecondsSince1970InUtcToNSDate(double secondsSince1970InUtc) :39
void DateTimeConverterHelpers__SecondsSince1970InUtcToNSDate_fn(double* secondsSince1970InUtc, ::g::ObjC::Object** __retval)
{
    *__retval = DateTimeConverterHelpers::SecondsSince1970InUtcToNSDate(*secondsSince1970InUtc);
}

// public static ObjC.Object ConvertDateTimeToNSDate(Uno.DateTime dt) [static] :21
::g::ObjC::Object* DateTimeConverterHelpers::ConvertDateTimeToNSDate(::g::Uno::DateTime dt)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DateTimeConverterHelpers", "ConvertDateTimeToNSDate(Uno.DateTime)");
    dt = dt.ToUniversalTime();
    int64_t dotNetTicks = dt.Ticks();
    int64_t dotNetTicksRelativeToUnixEpoch = dotNetTicks - 621355968000000000LL;
    int64_t secondsSince1970InUtc = dotNetTicksRelativeToUnixEpoch / 10000000LL;
    return DateTimeConverterHelpers::SecondsSince1970InUtcToNSDate((double)secondsSince1970InUtc);
}

// public static Uno.DateTime ConvertNSDateToDateTime(ObjC.Object date) [static] :11
::g::Uno::DateTime DateTimeConverterHelpers::ConvertNSDateToDateTime(::g::ObjC::Object* date)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DateTimeConverterHelpers", "ConvertNSDateToDateTime(ObjC.Object)");
    int64_t secondsSince1970InUtc = (int64_t)DateTimeConverterHelpers::NSDateToSecondsSince1970InUtc(date);
    int64_t dotNetTicksRelativeToUnixEpoch = secondsSince1970InUtc * 10000000LL;
    int64_t dotNetTicks = dotNetTicksRelativeToUnixEpoch + 621355968000000000LL;
    return ::g::Uno::DateTime__New1(dotNetTicks, 1);
}

// public static double NSDateToSecondsSince1970InUtc(ObjC.Object date) [static] :33
double DateTimeConverterHelpers::NSDateToSecondsSince1970InUtc(::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        return [] (::id date) -> double
        {
            return [date timeIntervalSince1970];
        } (::g::ObjC::Object::GetHandle(date));
        
    }
    
}

// public static ObjC.Object ReconstructUtcDate(ObjC.Object date) [static] :45
::g::ObjC::Object* DateTimeConverterHelpers::ReconstructUtcDate(::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id date) -> ::id
        {
            if (!date)
            	return [NSDate dateWithTimeIntervalSince1970:0];
            
            // Reconstruct the same date in UTC without time components
            NSCalendar *utcCalendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
            [utcCalendar setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            NSDateComponents *components = [utcCalendar components:NSCalendarUnitYear|NSCalendarUnitMonth|NSCalendarUnitDay fromDate:date];
            
            NSDateComponents *utcComponents = [[NSDateComponents alloc] init];
            [utcComponents setYear:[components year]];
            [utcComponents setMonth:[components month]];
            [utcComponents setDay:[components day]];
            
            return [utcCalendar dateFromComponents:utcComponents];
        } (::g::ObjC::Object::GetHandle(date)));
        
    }
    
}

// public static ObjC.Object ReconstructUtcTime(ObjC.Object date) [static] :65
::g::ObjC::Object* DateTimeConverterHelpers::ReconstructUtcTime(::g::ObjC::Object* date)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id date) -> ::id
        {
            if (!date)
            	return [NSDate dateWithTimeIntervalSince1970:0];
            
            // Reconstruct the same date in UTC without date components
            NSCalendar *utcCalendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
            [utcCalendar setTimeZone:[NSTimeZone timeZoneForSecondsFromGMT:0]];
            
            NSDateComponents *components = [utcCalendar components:NSCalendarUnitHour|NSCalendarUnitMinute fromDate:date];
            
            NSDateComponents *utcComponents = [[NSDateComponents alloc] init];
            [utcComponents setYear:1970];
            [utcComponents setMonth:1];
            [utcComponents setDay:1];
            [utcComponents setHour:[components hour]];
            [utcComponents setMinute:[components minute]];
            
            return [utcCalendar dateFromComponents:utcComponents];
        } (::g::ObjC::Object::GetHandle(date)));
        
    }
    
}

// public static ObjC.Object SecondsSince1970InUtcToNSDate(double secondsSince1970InUtc) [static] :39
::g::ObjC::Object* DateTimeConverterHelpers::SecondsSince1970InUtcToNSDate(double secondsSince1970InUtc)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (double secondsSince1970InUtc) -> ::id
        {
            return [NSDate dateWithTimeIntervalSince1970:secondsSince1970InUtc];
        } (secondsSince1970InUtc));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
