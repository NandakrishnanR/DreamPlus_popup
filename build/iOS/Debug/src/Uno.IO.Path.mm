// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IO/Path.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.Path.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace IO{

// public static class Path :7
// {
// static generated Path() :7
static void Path__cctor__fn(uType* __type)
{
    Path::DirectorySeparatorChar_ = Path::GetDirectorySeparatorChar();
    Path::AltDirectorySeparatorChar_ = '/';
    Path::PathSeparator_ = Path::GetPathSeparator();
    Path::VolumeSeparatorChar_ = Path::GetVolumeSeparatorChar();
    Path::DirectorySeparatorChars_ = Path::GetDirectorySeparatorChars();
}

static void Path_build(uType* type)
{
    ::STRINGS[0] = uString::Const("path1");
    ::STRINGS[1] = uString::Const("path2");
    ::TYPES[0] = ::g::Uno::Char_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::DirectorySeparatorChar_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::AltDirectorySeparatorChar_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::PathSeparator_, uFieldFlagsStatic,
        ::g::Uno::Char_typeof(), (uintptr_t)&Path::VolumeSeparatorChar_, uFieldFlagsStatic,
        ::TYPES[0/*char[]*/], (uintptr_t)&Path::DirectorySeparatorChars_, uFieldFlagsStatic);
}

uClassType* Path_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.IO.Path", options);
    type->fp_build_ = Path_build;
    type->fp_cctor_ = Path__cctor__fn;
    return type;
}

// public static string Combine(string path1, string path2) :38
void Path__Combine_fn(uString* path1, uString* path2, uString** __retval)
{
    *__retval = Path::Combine(path1, path2);
}

// private static string CombineInternal(string a, string b) :21
void Path__CombineInternal_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = Path::CombineInternal(a, b);
}

// public static string GetDirectoryName(string path) :117
void Path__GetDirectoryName_fn(uString* path, uString** __retval)
{
    *__retval = Path::GetDirectoryName(path);
}

// private static char GetDirectorySeparatorChar() :254
void Path__GetDirectorySeparatorChar_fn(char16_t* __retval)
{
    *__retval = Path::GetDirectorySeparatorChar();
}

// private static char[] GetDirectorySeparatorChars() :261
void Path__GetDirectorySeparatorChars_fn(uArray** __retval)
{
    *__retval = Path::GetDirectorySeparatorChars();
}

// public static string GetFullPath(string filename) :188
void Path__GetFullPath_fn(uString* filename, uString** __retval)
{
    *__retval = Path::GetFullPath(filename);
}

// private static char GetPathSeparator() :268
void Path__GetPathSeparator_fn(char16_t* __retval)
{
    *__retval = Path::GetPathSeparator();
}

// private static char GetVolumeSeparatorChar() :275
void Path__GetVolumeSeparatorChar_fn(char16_t* __retval)
{
    *__retval = Path::GetVolumeSeparatorChar();
}

// private static bool IsDirectorySeparator(char ch) :16
void Path__IsDirectorySeparator_fn(char16_t* ch, bool* __retval)
{
    *__retval = Path::IsDirectorySeparator(*ch);
}

// public static bool IsPathRooted(string path) :213
void Path__IsPathRooted_fn(uString* path, bool* __retval)
{
    *__retval = Path::IsPathRooted(path);
}

// private static string NormalizePathSeparators(string path) :93
void Path__NormalizePathSeparators_fn(uString* path, uString** __retval)
{
    *__retval = Path::NormalizePathSeparators(path);
}

char16_t Path::DirectorySeparatorChar_;
char16_t Path::AltDirectorySeparatorChar_;
char16_t Path::PathSeparator_;
char16_t Path::VolumeSeparatorChar_;
uSStrong<uArray*> Path::DirectorySeparatorChars_;

// public static string Combine(string path1, string path2) [static] :38
uString* Path::Combine(uString* path1, uString* path2)
{
    Path_typeof()->Init();

    if (::g::Uno::String::op_Equality(path1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"path1"*/]));

    if (::g::Uno::String::op_Equality(path2, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"path2"*/]));

    return Path::CombineInternal(path1, path2);
}

// private static string CombineInternal(string a, string b) [static] :21
uString* Path::CombineInternal(uString* a, uString* b)
{
    Path_typeof()->Init();

    if (uPtr(b)->Length() == 0)
        return a;

    if (uPtr(a)->Length() == 0)
        return b;

    if (Path::IsPathRooted(b))
        return b;

    if (Path::IsDirectorySeparator(uPtr(a)->Item(uPtr(a)->Length() - 1)))
        return ::g::Uno::String::op_Addition2(a, b);

    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(a, uBox<char16_t>(::g::Uno::Char_typeof(), Path::DirectorySeparatorChar_)), b);
}

// public static string GetDirectoryName(string path) [static] :117
uString* Path::GetDirectoryName(uString* path)
{
    Path_typeof()->Init();

    if (::g::Uno::String::op_Equality(path, NULL))
        return NULL;

    path = Path::NormalizePathSeparators(path);
    int32_t lastDirectorySeparator = ::g::Uno::String::LastIndexOfAny(uPtr(path), Path::DirectorySeparatorChars_);

    if (lastDirectorySeparator < 0)
        return ::g::Uno::String::Empty();

    if (lastDirectorySeparator == 0)
    {
        if (uPtr(path)->Length() == 1)
            return NULL;

        lastDirectorySeparator = 1;
    }

    return ::g::Uno::String::Substring1(path, 0, lastDirectorySeparator);
}

// private static char GetDirectorySeparatorChar() [static] :254
char16_t Path::GetDirectorySeparatorChar()
{
    Path_typeof()->Init();
    return '/';
}

// private static char[] GetDirectorySeparatorChars() [static] :261
uArray* Path::GetDirectorySeparatorChars()
{
    Path_typeof()->Init();
    return uArray::Init<int32_t>(::TYPES[0/*char[]*/], 1, '/');
}

// public static string GetFullPath(string filename) [static] :188
uString* Path::GetFullPath(uString* filename)
{
    Path_typeof()->Init();
    return Path::IsPathRooted(filename) ? filename : (uString*)Path::Combine(::g::Uno::IO::Directory::GetCurrentDirectory(), filename);
}

// private static char GetPathSeparator() [static] :268
char16_t Path::GetPathSeparator()
{
    Path_typeof()->Init();
    return ':';
}

// private static char GetVolumeSeparatorChar() [static] :275
char16_t Path::GetVolumeSeparatorChar()
{
    Path_typeof()->Init();
    return '/';
}

// private static bool IsDirectorySeparator(char ch) [static] :16
bool Path::IsDirectorySeparator(char16_t ch)
{
    Path_typeof()->Init();
    return (ch == Path::DirectorySeparatorChar_) || (ch == Path::AltDirectorySeparatorChar_);
}

// public static bool IsPathRooted(string path) [static] :213
bool Path::IsPathRooted(uString* path)
{
    Path_typeof()->Init();

    if (::g::Uno::String::IsNullOrEmpty(path))
        return false;

    if (Path::IsDirectorySeparator(uPtr(path)->Item(0)))
        return true;

    return false;
}

// private static string NormalizePathSeparators(string path) [static] :93
uString* Path::NormalizePathSeparators(uString* path)
{
    Path_typeof()->Init();
    int32_t length = uPtr(path)->Length();
    int32_t pos = 0;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (; pos < length; ++pos)
    {
        char16_t ch = uPtr(path)->Item(pos);

        if (!Path::IsDirectorySeparator(ch))
        {
            uPtr(sb)->Append(ch);
            continue;
        }

        while (((pos + 1) < length) && Path::IsDirectorySeparator(path->Item(pos + 1)))
            pos++;

        uPtr(sb)->Append(Path::DirectorySeparatorChar_);
    }

    return sb->ToString();
}
// }

}}} // ::g::Uno::IO
