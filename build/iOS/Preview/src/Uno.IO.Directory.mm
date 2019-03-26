// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Directory.uno.
// WARNING: Changes might be lost if you edit this file directly.

#import <Foundation/Foundation.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.Enumerable.h>
#include <Uno.IO.Directory.EnumeratorMode.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.IOException.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Uno{
namespace IO{

// public static class Directory :29
// {
static void Directory_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->Reflection.SetFunctions(9,
        new uFunction("CreateDirectory", NULL, (void*)Directory__CreateDirectory_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Delete", NULL, (void*)Directory__Delete_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("EnumerateDirectories", NULL, (void*)Directory__EnumerateDirectories_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("EnumerateFiles", NULL, (void*)Directory__EnumerateFiles_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("EnumerateFileSystemEntries", NULL, (void*)Directory__EnumerateFileSystemEntries_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("Exists", NULL, (void*)Directory__Exists_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetCurrentDirectory", NULL, (void*)Directory__GetCurrentDirectory_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("GetUserDirectory", NULL, (void*)Directory__GetUserDirectory_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::IO::UserDirectory_typeof()),
        new uFunction("Move", NULL, (void*)Directory__Move_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

uClassType* Directory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Directory", options);
    type->fp_build_ = Directory_build;
    return type;
}

// public static void CreateDirectory(string dirName) :283
void Directory__CreateDirectory_fn(uString* dirName)
{
    Directory::CreateDirectory(dirName);
}

// public static void Delete(string dirName, bool recursive) :320
void Directory__Delete_fn(uString* dirName, bool* recursive)
{
    Directory::Delete(dirName, *recursive);
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) :392
void Directory__EnumerateDirectories_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateDirectories(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) :397
void Directory__EnumerateFiles_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFiles(dirName);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) :402
void Directory__EnumerateFileSystemEntries_fn(uString* dirName, uObject** __retval)
{
    *__retval = Directory::EnumerateFileSystemEntries(dirName);
}

// public static bool Exists(string dirName) :371
void Directory__Exists_fn(uString* dirName, bool* __retval)
{
    *__retval = Directory::Exists(dirName);
}

// internal static string GetBaseDirectory() :211
void Directory__GetBaseDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetBaseDirectory();
}

// public static string GetCurrentDirectory() :245
void Directory__GetCurrentDirectory_fn(uString** __retval)
{
    *__retval = Directory::GetCurrentDirectory();
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) :32
void Directory__GetUserDirectory_fn(int32_t* dir, uString** __retval)
{
    *__retval = Directory::GetUserDirectory(*dir);
}

// private static extern string GetUserDirectoryApple(int directory) :176
void Directory__GetUserDirectoryApple_fn(int32_t* directory, uString** __retval)
{
    *__retval = Directory::GetUserDirectoryApple(*directory);
}

// public static void Move(string oldName, string newName) :348
void Directory__Move_fn(uString* oldName, uString* newName)
{
    Directory::Move(oldName, newName);
}

// public static void CreateDirectory(string dirName) [static] :283
void Directory::CreateDirectory(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "CreateDirectory(string)");

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dirName")));

    if (((uPtr(dirName)->Length() == 0) || ((false && (uPtr(dirName)->Length() == 2)) && (uPtr(dirName)->Item(1) == ':'))) || Directory::Exists(dirName))
        return;

    Directory::CreateDirectory(::g::Uno::IO::Path::GetDirectoryName(dirName));
    if (mkdir(uCString(dirName).Ptr, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) == 0 ||
            errno == EEXIST)
        return;
    U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to create directory '"), dirName), uString::Const("'"))));
}

// public static void Delete(string dirName, bool recursive) [static] :320
void Directory::Delete(uString* dirName, bool recursive)
{
    uStackFrame __("Uno.IO.Directory", "Delete(string,bool)");
    uString* ret3;
    uString* ret4;

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dirName")));

    if (recursive)
    {
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Directory::EnumerateDirectories(dirName)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL)));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        uString* e = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)), &ret3), ret3);
                        Directory::Delete(e, true);
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

        uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Directory::EnumerateFiles(dirName)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL)));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())))
                    {
                        uString* e1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)), &ret4), ret4);
                        ::g::Uno::IO::File::Delete(e1);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
                }
                                throw __t;
                goto __after_finally_1;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
            }
            __after_finally_1:;
        }
    }

    uCString cstr(dirName);

    if (rmdir(cstr.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to delete directory '"), dirName), uString::Const("'"))));
}

// public static Uno.Collections.IEnumerable<string> EnumerateDirectories(string dirName) [static] :392
uObject* Directory::EnumerateDirectories(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateDirectories(string)");
    return (uObject*)Directory__Enumerable::New1(dirName, 1);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFiles(string dirName) [static] :397
uObject* Directory::EnumerateFiles(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateFiles(string)");
    return (uObject*)Directory__Enumerable::New1(dirName, 2);
}

// public static Uno.Collections.IEnumerable<string> EnumerateFileSystemEntries(string dirName) [static] :402
uObject* Directory::EnumerateFileSystemEntries(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "EnumerateFileSystemEntries(string)");
    return (uObject*)Directory__Enumerable::New1(dirName, 0);
}

// public static bool Exists(string dirName) [static] :371
bool Directory::Exists(uString* dirName)
{
    uStackFrame __("Uno.IO.Directory", "Exists(string)");

    if (::g::Uno::String::op_Equality(dirName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dirName")));

    struct stat attributes;
    return stat(uCString(dirName).Ptr, &attributes) != -1 &&
        S_ISDIR(attributes.st_mode);
}

// internal static string GetBaseDirectory() [static] :211
uString* Directory::GetBaseDirectory()
{
    NSArray* arguments = [[NSProcessInfo processInfo] arguments];
    NSString* exe = [arguments objectAtIndex:0];
    return ::g::Uno::IO::Path::GetDirectoryName(uString::Utf8([exe UTF8String]));
}

// public static string GetCurrentDirectory() [static] :245
uString* Directory::GetCurrentDirectory()
{
    char buf[4096];
    if (getcwd(buf, sizeof(buf)) != buf)
        U_THROW_IOE("getcwd() failed");
    
    return uString::Utf8(buf);
}

// public static string GetUserDirectory(Uno.IO.UserDirectory dir) [static] :32
uString* Directory::GetUserDirectory(int32_t dir)
{
    uStackFrame __("Uno.IO.Directory", "GetUserDirectory(Uno.IO.UserDirectory)");

    switch (dir)
    {
        case 0:
            return Directory::GetUserDirectoryApple(NSCachesDirectory);
        case 1:
            return Directory::GetUserDirectoryApple(NSLibraryDirectory);
        case 2:
            return Directory::GetUserDirectoryApple(NSLibraryDirectory);
        case 3:
            return Directory::GetUserDirectoryApple(NSDesktopDirectory);
        case 4:
            return Directory::GetUserDirectoryApple(NSDownloadsDirectory);
        case 5:
            return ::g::Uno::String::op_Addition2(Directory::GetUserDirectoryApple(NSUserDirectory), uString::Const("/Templates"));
        case 6:
            return Directory::GetUserDirectoryApple(NSSharedPublicDirectory);
        case 7:
            return Directory::GetUserDirectoryApple(NSDocumentDirectory);
        case 8:
            return Directory::GetUserDirectoryApple(NSMusicDirectory);
        case 9:
            return Directory::GetUserDirectoryApple(NSPicturesDirectory);
        case 10:
            return Directory::GetUserDirectoryApple(NSMoviesDirectory);
    }

    U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("dir")));
}

// private static extern string GetUserDirectoryApple(int directory) [static] :176
uString* Directory::GetUserDirectoryApple(int32_t directory)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (int32_t directory) -> ::NSString*
        {
            return NSSearchPathForDirectoriesInDomains((NSSearchPathDirectory) directory, NSUserDomainMask, YES)[0];
        } (directory));
        
    }
    
}

// public static void Move(string oldName, string newName) [static] :348
void Directory::Move(uString* oldName, uString* newName)
{
    uStackFrame __("Uno.IO.Directory", "Move(string,string)");

    if (::g::Uno::String::op_Equality(oldName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("oldName")));

    if (::g::Uno::String::op_Equality(newName, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("newName")));

    uCString oldNameU8(oldName);
    uCString newNameU8(newName);

    if (rename(oldNameU8.Ptr, newNameU8.Ptr) != 0)
        U_THROW(::g::Uno::IO::IOException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Unable to move directory '"), oldName), uString::Const("' to '")), newName), uString::Const("'"))));
}
// }

}}} // ::g::Uno::IO
