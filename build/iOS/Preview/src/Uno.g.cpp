// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <errno.h>
#include <inttypes.h>
#include <Uno.Action.h>
#include <Uno.Action10-10.h>
#include <Uno.Action1-1.h>
#include <Uno.Action11-11.h>
#include <Uno.Action12-12.h>
#include <Uno.Action13-13.h>
#include <Uno.Action14-14.h>
#include <Uno.Action15-15.h>
#include <Uno.Action16-16.h>
#include <Uno.Action2-2.h>
#include <Uno.Action3-3.h>
#include <Uno.Action4-4.h>
#include <Uno.Action5-5.h>
#include <Uno.Action6-6.h>
#include <Uno.Action7-7.h>
#include <Uno.Action8-8.h>
#include <Uno.Action9-9.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Attribute.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte2.h>
#include <Uno.Byte4.h>
#include <Uno.Char.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Color.h>
#include <Uno.Comparison-1.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.Environment.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.FakeTime.h>
#include <Uno.FlagsAttribute.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.FormatException.h>
#include <Uno.Func-1.h>
#include <Uno.Func10-11.h>
#include <Uno.Func11-12.h>
#include <Uno.Func1-2.h>
#include <Uno.Func12-13.h>
#include <Uno.Func13-14.h>
#include <Uno.Func14-15.h>
#include <Uno.Func15-16.h>
#include <Uno.Func16-17.h>
#include <Uno.Func2-3.h>
#include <Uno.Func3-4.h>
#include <Uno.Func4-5.h>
#include <Uno.Func5-6.h>
#include <Uno.Func6-7.h>
#include <Uno.Func7-8.h>
#include <Uno.Func8-9.h>
#include <Uno.Func9-10.h>
#include <Uno.GC.h>
#include <Uno.Generic.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.IntPtr.h>
#include <Uno.InvalidCastException.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.ITuple.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.NullReferenceException.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.ObsoleteAttribute.h>
#include <Uno.OverflowException.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.Internal.ArrayList-1.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <Uno.SByte.h>
#include <Uno.SByte2.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Tuple.h>
#include <Uno.Tuple2-2.h>
#include <Uno.Type.h>
#include <Uno.TypeInitializationException.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
#include <Uno.Vector.h>
#include <Uno.WeakReference-1.h>
#include <Uno.WeakReferenceAttribute.h>
extern uSStrong<uArray*> _CommandLineArgs;
static uString* STRINGS[57];
static uType* TYPES[24];

namespace g{
namespace Uno{

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action() :6
uDelegateType* Action_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T>(T arg) :9
uDelegateType* Action1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`1", 1, 1);
    type->SetSignature(uVoid_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2>(T1 arg1, T2 arg2) :12
uDelegateType* Action2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`2", 2, 2);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3>(T1 arg1, T2 arg2, T3 arg3) :15
uDelegateType* Action3_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`3", 3, 3);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4>(T1 arg1, T2 arg2, T3 arg3, T4 arg4) :18
uDelegateType* Action4_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`4", 4, 4);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) :21
uDelegateType* Action5_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`5", 5, 5);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) :24
uDelegateType* Action6_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`6", 6, 6);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) :27
uDelegateType* Action7_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`7", 7, 7);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) :30
uDelegateType* Action8_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`8", 8, 8);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) :33
uDelegateType* Action9_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`9", 9, 9);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) :36
uDelegateType* Action10_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`10", 10, 10);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) :39
uDelegateType* Action11_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`11", 11, 11);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12) :42
uDelegateType* Action12_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`12", 12, 12);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) :45
uDelegateType* Action13_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`13", 13, 13);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14) :48
uDelegateType* Action14_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`14", 14, 14);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15) :51
uDelegateType* Action15_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`15", 15, 15);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15, T16 arg16) :54
uDelegateType* Action16_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`16", 16, 16);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14),
        type->T(15));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/AggregateException.uno
// ----------------------------------------------------------------------------------------

// public sealed class AggregateException :8
// {
static void AggregateException_build(uType* type)
{
    ::STRINGS[0] = uString::Const("One or more errors occurred.");
    ::STRINGS[1] = uString::Const("---> (Inner Exception #{0}) ");
    ::STRINGS[2] = uString::Const("<---\n"
        "");
    ::STRINGS[3] = uString::Const("\n"
        "");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Runtime::Implementation::Internal::ArrayList_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ReadOnlyCollection_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(4,
        ::g::Uno::Exception_typeof()->Array(), offsetof(AggregateException, _innerExceptions), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_InnerExceptions", NULL, (void*)AggregateException__get_InnerExceptions_fn, 0, false, ::TYPES[2/*Uno.Collections.ReadOnlyCollection<Uno.Exception>*/], 0),
        new uFunction(".ctor", NULL, (void*)AggregateException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)AggregateException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)AggregateException__New6_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Exception_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)AggregateException__New7_fn, 0, true, type, 1, ::g::Uno::Exception_typeof()->Array()));
}

::g::Uno::Exception_type* AggregateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(AggregateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.AggregateException", options);
    type->fp_build_ = AggregateException_build;
    type->fp_ctor_ = (void*)AggregateException__New4_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))AggregateException__ToString_fn;
    return type;
}

// public AggregateException() :20
void AggregateException__ctor_3_fn(AggregateException* __this)
{
    __this->ctor_3();
}

// public AggregateException(string message) :30
void AggregateException__ctor_4_fn(AggregateException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) :35
void AggregateException__ctor_5_fn(AggregateException* __this, uString* message, uArray* innerExceptions)
{
    __this->ctor_5(message, innerExceptions);
}

// public AggregateException(Uno.Exception[] innerExceptions) :25
void AggregateException__ctor_6_fn(AggregateException* __this, uArray* innerExceptions)
{
    __this->ctor_6(innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() :13
void AggregateException__get_InnerExceptions_fn(AggregateException* __this, ::g::Uno::Collections::ReadOnlyCollection** __retval)
{
    *__retval = __this->InnerExceptions();
}

// public AggregateException New() :20
void AggregateException__New4_fn(AggregateException** __retval)
{
    *__retval = AggregateException::New4();
}

// public AggregateException New(string message) :30
void AggregateException__New5_fn(uString* message, AggregateException** __retval)
{
    *__retval = AggregateException::New5(message);
}

// public AggregateException New(string message, Uno.Exception[] innerExceptions) :35
void AggregateException__New6_fn(uString* message, uArray* innerExceptions, AggregateException** __retval)
{
    *__retval = AggregateException::New6(message, innerExceptions);
}

// public AggregateException New(Uno.Exception[] innerExceptions) :25
void AggregateException__New7_fn(uArray* innerExceptions, AggregateException** __retval)
{
    *__retval = AggregateException::New7(innerExceptions);
}

// public override sealed string ToString() :41
void AggregateException__ToString_fn(AggregateException* __this, uString** __retval)
{
    uStackFrame __("Uno.AggregateException", "ToString()");
    uString* ret5;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (int32_t i = 0; i < uPtr(__this->_innerExceptions)->Length(); ++i)
    {
        uPtr(sb)->Append2(::g::Uno::String::Format(::STRINGS[1/*"---> (Inner...*/], uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, uBox<int32_t>(::TYPES[8/*int*/], i))));
        sb->Append2(uPtr(uPtr(__this->_innerExceptions)->Strong< ::g::Uno::Exception*>(i))->ToString());
        sb->Append2(::STRINGS[2/*"<---\n"*/]);

        if (i != (uPtr(__this->_innerExceptions)->Length() - 1))
            uPtr(sb)->Append2(::STRINGS[3/*"\n"*/]);
    }

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((::g::Uno::Exception__ToString_fn(__this, &ret5), ret5), ::STRINGS[3/*"\n"*/]), sb->ToString()), void();
}

// public AggregateException() [instance] :20
void AggregateException::ctor_3()
{
    ctor_4(::STRINGS[0/*"One or more...*/]);
}

// public AggregateException(string message) [instance] :30
void AggregateException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) [instance] :35
void AggregateException::ctor_5(uString* message, uArray* innerExceptions)
{
    ctor_1(message);
    _innerExceptions = innerExceptions;
}

// public AggregateException(Uno.Exception[] innerExceptions) [instance] :25
void AggregateException::ctor_6(uArray* innerExceptions)
{
    ctor_5(::STRINGS[0/*"One or more...*/], innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() [instance] :13
::g::Uno::Collections::ReadOnlyCollection* AggregateException::InnerExceptions()
{
    uStackFrame __("Uno.AggregateException", "get_InnerExceptions()");
    ::g::Uno::Runtime::Implementation::Internal::ArrayList* wrapper = (::g::Uno::Runtime::Implementation::Internal::ArrayList*)::g::Uno::Runtime::Implementation::Internal::ArrayList::New1(::TYPES[1/*Uno.Runtime.Implementation.Internal.ArrayList<Uno.Exception>*/], _innerExceptions);
    return (::g::Uno::Collections::ReadOnlyCollection*)::g::Uno::Collections::ReadOnlyCollection::New1(::TYPES[2/*Uno.Collections.ReadOnlyCollection<Uno.Exception>*/], (uObject*)wrapper);
}

// public AggregateException New() [static] :20
AggregateException* AggregateException::New4()
{
    AggregateException* obj1 = (AggregateException*)uNew(AggregateException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public AggregateException New(string message) [static] :30
AggregateException* AggregateException::New5(uString* message)
{
    AggregateException* obj3 = (AggregateException*)uNew(AggregateException_typeof());
    obj3->ctor_4(message);
    return obj3;
}

// public AggregateException New(string message, Uno.Exception[] innerExceptions) [static] :35
AggregateException* AggregateException::New6(uString* message, uArray* innerExceptions)
{
    AggregateException* obj4 = (AggregateException*)uNew(AggregateException_typeof());
    obj4->ctor_5(message, innerExceptions);
    return obj4;
}

// public AggregateException New(Uno.Exception[] innerExceptions) [static] :25
AggregateException* AggregateException::New7(uArray* innerExceptions)
{
    AggregateException* obj2 = (AggregateException*)uNew(AggregateException_typeof());
    obj2->ctor_6(innerExceptions);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Application.uno
// ----------------------------------------------------------------------

// public abstract extern class Application :11
// {
static void Application_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::g::Uno::Platform::Window_typeof(), offsetof(Application, _Window), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Current", NULL, (void*)Application__get_Current1_fn, 0, true, type, 0),
        new uFunction("Draw", NULL, (void*)Application__Draw_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_NeedsRedraw", NULL, (void*)Application__get_NeedsRedraw_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Update", NULL, (void*)Application__Update_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Window", NULL, (void*)Application__get_Window_fn, 0, false, ::g::Uno::Platform::Window_typeof(), 0));
}

uType* Application_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::CoreApp_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Application", options);
    type->fp_build_ = Application_build;
    return type;
}

// protected Application() :32
void Application__ctor_1_fn(Application* __this)
{
    __this->ctor_1();
}

// public static new Uno.Application get_Current() :16
void Application__get_Current1_fn(Application** __retval)
{
    *__retval = Application::Current1();
}

// public void Draw() :43
void Application__Draw_fn(Application* __this)
{
    __this->Draw();
}

// public bool get_NeedsRedraw() :29
void Application__get_NeedsRedraw_fn(Application* __this, bool* __retval)
{
    *__retval = __this->NeedsRedraw();
}

// public void Update() :38
void Application__Update_fn(Application* __this)
{
    __this->Update();
}

// public generated Uno.Platform.Window get_Window() :22
void Application__get_Window_fn(Application* __this, ::g::Uno::Platform::Window** __retval)
{
    *__retval = __this->Window();
}

// private generated void set_Window(Uno.Platform.Window value) :23
void Application__set_Window_fn(Application* __this, ::g::Uno::Platform::Window* value)
{
    __this->Window(value);
}

// protected Application() [instance] :32
void Application::ctor_1()
{
    uStackFrame __("Uno.Application", ".ctor()");
    ctor_();
    Window(::g::Uno::Platform::Window::New2());
}

// public void Draw() [instance] :43
void Application::Draw()
{
}

// public bool get_NeedsRedraw() [instance] :29
bool Application::NeedsRedraw()
{
    return true;
}

// public void Update() [instance] :38
void Application::Update()
{
}

// public generated Uno.Platform.Window get_Window() [instance] :22
::g::Uno::Platform::Window* Application::Window()
{
    return _Window;
}

// private generated void set_Window(Uno.Platform.Window value) [instance] :23
void Application::Window(::g::Uno::Platform::Window* value)
{
    _Window = value;
}

// public static new Uno.Application get_Current() [static] :16
Application* Application::Current1()
{
    return uAs<Application*>(::g::Uno::Platform::CoreApp::Current(), Application_typeof());
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/ArgumentException.uno
// ---------------------------------------------------------------------------------------

// public class ArgumentException :6
// {
static void ArgumentException_build(uType* type)
{
    ::STRINGS[4] = uString::Const(": ");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ArgumentException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ArgumentException__New5_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ArgumentException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentException", options);
    type->fp_build_ = ArgumentException_build;
    return type;
}

// public ArgumentException(string message) :8
void ArgumentException__ctor_3_fn(ArgumentException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public ArgumentException(string message, string paramName) :13
void ArgumentException__ctor_4_fn(ArgumentException* __this, uString* message, uString* paramName)
{
    __this->ctor_4(message, paramName);
}

// public ArgumentException New(string message) :8
void ArgumentException__New4_fn(uString* message, ArgumentException** __retval)
{
    *__retval = ArgumentException::New4(message);
}

// public ArgumentException New(string message, string paramName) :13
void ArgumentException__New5_fn(uString* message, uString* paramName, ArgumentException** __retval)
{
    *__retval = ArgumentException::New5(message, paramName);
}

// public ArgumentException(string message) [instance] :8
void ArgumentException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public ArgumentException(string message, string paramName) [instance] :13
void ArgumentException::ctor_4(uString* message, uString* paramName)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(paramName, ::STRINGS[4/*": "*/]), message));
}

// public ArgumentException New(string message) [static] :8
ArgumentException* ArgumentException::New4(uString* message)
{
    ArgumentException* obj1 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj1->ctor_3(message);
    return obj1;
}

// public ArgumentException New(string message, string paramName) [static] :13
ArgumentException* ArgumentException::New5(uString* message, uString* paramName)
{
    ArgumentException* obj2 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj2->ctor_4(message, paramName);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/ArgumentNullException.uno
// -------------------------------------------------------------------------------------------

// public sealed class ArgumentNullException :6
// {
static void ArgumentNullException_build(uType* type)
{
    ::STRINGS[5] = uString::Const("value was null");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ArgumentNullException__New6_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentNullException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ArgumentException_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ArgumentNullException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentNullException", options);
    type->fp_build_ = ArgumentNullException_build;
    return type;
}

// public ArgumentNullException(string paramName) :8
void ArgumentNullException__ctor_5_fn(ArgumentNullException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentNullException New(string paramName) :8
void ArgumentNullException__New6_fn(uString* paramName, ArgumentNullException** __retval)
{
    *__retval = ArgumentNullException::New6(paramName);
}

// public ArgumentNullException(string paramName) [instance] :8
void ArgumentNullException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[5/*"value was n...*/], paramName);
}

// public ArgumentNullException New(string paramName) [static] :8
ArgumentNullException* ArgumentNullException::New6(uString* paramName)
{
    ArgumentNullException* obj1 = (ArgumentNullException*)uNew(ArgumentNullException_typeof());
    obj1->ctor_5(paramName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/ArgumentOutOfRangeException.uno
// -------------------------------------------------------------------------------------------------

// public sealed class ArgumentOutOfRangeException :6
// {
static void ArgumentOutOfRangeException_build(uType* type)
{
    ::STRINGS[6] = uString::Const("value out of range");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ArgumentOutOfRangeException__New6_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ArgumentOutOfRangeException__New7_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ArgumentException_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ArgumentOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentOutOfRangeException", options);
    type->fp_build_ = ArgumentOutOfRangeException_build;
    return type;
}

// public ArgumentOutOfRangeException(string paramName) :13
void ArgumentOutOfRangeException__ctor_5_fn(ArgumentOutOfRangeException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) :8
void ArgumentOutOfRangeException__ctor_6_fn(ArgumentOutOfRangeException* __this, uString* message, uString* paramName)
{
    __this->ctor_6(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) :13
void ArgumentOutOfRangeException__New6_fn(uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New6(paramName);
}

// public ArgumentOutOfRangeException New(string message, string paramName) :8
void ArgumentOutOfRangeException__New7_fn(uString* message, uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New7(message, paramName);
}

// public ArgumentOutOfRangeException(string paramName) [instance] :13
void ArgumentOutOfRangeException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[6/*"value out o...*/], paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) [instance] :8
void ArgumentOutOfRangeException::ctor_6(uString* message, uString* paramName)
{
    ctor_4(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) [static] :13
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New6(uString* paramName)
{
    ArgumentOutOfRangeException* obj2 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj2->ctor_5(paramName);
    return obj2;
}

// public ArgumentOutOfRangeException New(string message, string paramName) [static] :8
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New7(uString* message, uString* paramName)
{
    ArgumentOutOfRangeException* obj1 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj1->ctor_6(message, paramName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Array.uno
// ----------------------------------------------------------------

// public sealed class Array :9
// {
static void Array_build(uType* type)
{
    ::STRINGS[7] = uString::Const("sourceArray");
    ::STRINGS[8] = uString::Const("destinationArray");
    ::STRINGS[9] = uString::Const("Non-negative number required.");
    ::STRINGS[10] = uString::Const("sourceIndex");
    ::STRINGS[11] = uString::Const("destinationIndex");
    ::STRINGS[12] = uString::Const("length");
    ::STRINGS[13] = uString::Const("Destination array was not long enough. Check destinationIndex and length, and the array's lower bounds.");
    ::STRINGS[14] = uString::Const(", ");
    ::STRINGS[15] = uString::Const("Source array was not long enough. Check sourceIndex and length, and the array's lower bounds.");
    ::STRINGS[16] = uString::Const("array");
    ::STRINGS[17] = uString::Const("startIndex");
    ::STRINGS[18] = uString::Const("count");
    ::STRINGS[19] = uString::Const("elements");
    ::STRINGS[20] = uString::Const("index");
    ::STRINGS[21] = uString::Const("Index and length do not specify a valid range in elements.");
    ::STRINGS[22] = uString::Const("Comparer is null.");
    ::TYPES[3] = ::g::Uno::Generic_typeof();
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*Copy<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MakeMethod(5/*IndexOfUnchecked<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        type->MakeMethod(5/*IndexOfUnchecked<T>*/, type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        type->MakeMethod(5/*IndexOfUnchecked<T>*/, type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::TYPES[3/*Uno.Generic*/]->MakeMethod(0/*Equals<T>*/, type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        type->MakeMethod(9/*LastIndexOfUnchecked<T>*/, type->MethodTypes[6]->U(0), NULL));
    type->MethodTypes[7]->SetPrecalc(
        type->MakeMethod(9/*LastIndexOfUnchecked<T>*/, type->MethodTypes[7]->U(0), NULL));
    type->MethodTypes[8]->SetPrecalc(
        type->MakeMethod(9/*LastIndexOfUnchecked<T>*/, type->MethodTypes[8]->U(0), NULL));
    type->MethodTypes[9]->SetPrecalc(
        ::TYPES[3/*Uno.Generic*/]->MakeMethod(0/*Equals<T>*/, type->MethodTypes[9]->U(0), NULL));
    type->MethodTypes[10]->SetPrecalc(
        type->MakeMethod(14/*Swap<T>*/, type->MethodTypes[10]->U(0), NULL));
    type->MethodTypes[11]->SetPrecalc(
        type->MakeMethod(14/*Swap<T>*/, type->MethodTypes[11]->U(0), NULL));
    type->MethodTypes[12]->SetPrecalc(
        type->MakeMethod(10/*QuickSort<T>*/, type->MethodTypes[12]->U(0), NULL),
        type->MakeMethod(11/*ShellSort<T>*/, type->MethodTypes[12]->U(0), NULL));
    type->MethodTypes[13]->SetPrecalc(
        type->MakeMethod(12/*Sort<T>*/, type->MethodTypes[13]->U(0), NULL));
    type->Reflection.SetFunctions(11,
        new uFunction("Copy`1", type->MethodTypes[0], (void*)Array__Copy_fn, 0, true, uVoid_typeof(), 5, type->MethodTypes[0]->U(0)->Array(), ::g::Uno::Int_typeof(), type->MethodTypes[0]->U(0)->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Copy`1", type->MethodTypes[1], (void*)Array__Copy1_fn, 0, true, uVoid_typeof(), 3, type->MethodTypes[1]->U(0)->Array(), type->MethodTypes[1]->U(0)->Array(), ::g::Uno::Int_typeof()),
        new uFunction("IndexOf`1", type->MethodTypes[2], (void*)Array__IndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, type->MethodTypes[2]->U(0)->Array(), type->MethodTypes[2]->U(0)),
        new uFunction("IndexOf`1", type->MethodTypes[3], (void*)Array__IndexOf1_fn, 0, true, ::g::Uno::Int_typeof(), 3, type->MethodTypes[3]->U(0)->Array(), type->MethodTypes[3]->U(0), ::g::Uno::Int_typeof()),
        new uFunction("IndexOf`1", type->MethodTypes[4], (void*)Array__IndexOf2_fn, 0, true, ::g::Uno::Int_typeof(), 4, type->MethodTypes[4]->U(0)->Array(), type->MethodTypes[4]->U(0), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("LastIndexOf`1", type->MethodTypes[6], (void*)Array__LastIndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, type->MethodTypes[6]->U(0)->Array(), type->MethodTypes[6]->U(0)),
        new uFunction("LastIndexOf`1", type->MethodTypes[7], (void*)Array__LastIndexOf1_fn, 0, true, ::g::Uno::Int_typeof(), 3, type->MethodTypes[7]->U(0)->Array(), type->MethodTypes[7]->U(0), ::g::Uno::Int_typeof()),
        new uFunction("LastIndexOf`1", type->MethodTypes[8], (void*)Array__LastIndexOf2_fn, 0, true, ::g::Uno::Int_typeof(), 4, type->MethodTypes[8]->U(0)->Array(), type->MethodTypes[8]->U(0), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Array__New1_fn, 0, true, type, 0),
        new uFunction("Sort`1", type->MethodTypes[12], (void*)Array__Sort_fn, 0, true, uVoid_typeof(), 4, type->MethodTypes[12]->U(0)->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Comparison_typeof()->MakeType(type->MethodTypes[12]->U(0), NULL)),
        new uFunction("Sort`1", type->MethodTypes[13], (void*)Array__Sort1_fn, 0, true, uVoid_typeof(), 2, type->MethodTypes[13]->U(0)->Array(), ::g::Uno::Comparison_typeof()->MakeType(type->MethodTypes[13]->U(0), NULL)));
}

uType* Array_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 15;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Array", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->MethodTypes[2] = type->NewMethodType(1, 1,0);
    type->MethodTypes[3] = type->NewMethodType(1, 1,0);
    type->MethodTypes[4] = type->NewMethodType(1, 1,0);
    type->MethodTypes[5] = type->NewMethodType(1, 1,0);
    type->MethodTypes[6] = type->NewMethodType(1, 1,0);
    type->MethodTypes[7] = type->NewMethodType(1, 1,0);
    type->MethodTypes[8] = type->NewMethodType(1, 1,0);
    type->MethodTypes[9] = type->NewMethodType(1, 1,0);
    type->MethodTypes[10] = type->NewMethodType(1, 1,0);
    type->MethodTypes[11] = type->NewMethodType(1, 1,0);
    type->MethodTypes[12] = type->NewMethodType(1, 2,0);
    type->MethodTypes[13] = type->NewMethodType(1, 1,0);
    type->MethodTypes[14] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Array_build;
    type->fp_ctor_ = (void*)Array__New1_fn;
    return type;
}

// public generated Array() :9
void Array__ctor__fn(uArray* __this)
{
    Array::ctor_(__this);
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :18
void Array__Copy_fn(uType* __type, uArray* sourceArray, int32_t* sourceIndex, uArray* destinationArray, int32_t* destinationIndex, int32_t* length)
{
    Array::Copy(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) :12
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int32_t* length)
{
    Array::Copy1(__type, sourceArray, destinationArray, *length);
}

// public static int IndexOf<T>(T[] array, T value) :143
void Array__IndexOf_fn(uType* __type, uArray* array, void* value, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.IndexOfUnchecked<T>*/),
    };
    uStackFrame __("Uno.Array", "IndexOf`1(T[],T)");
    int32_t ret2;

    if (array == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"array"*/]));

    return *__retval = (Array__IndexOfUnchecked_fn(__types[0], array, value, uCRef<int32_t>(0), uCRef<int32_t>(uPtr(array)->Length()), &ret2), ret2), void();
}

// public static int IndexOf<T>(T[] array, T value, int startIndex) :151
void Array__IndexOf1_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.IndexOfUnchecked<T>*/),
    };
    uStackFrame __("Uno.Array", "IndexOf`1(T[],T,int)");
    int32_t startIndex_ = *startIndex;
    int32_t ret3;

    if (array == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"array"*/]));

    if ((startIndex_ < 0) || (startIndex_ > uPtr(array)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[17/*"startIndex"*/]));

    return *__retval = (Array__IndexOfUnchecked_fn(__types[0], array, value, uCRef<int32_t>(startIndex_), uCRef<int32_t>(uPtr(array)->Length() - startIndex_), &ret3), ret3), void();
}

// public static int IndexOf<T>(T[] array, T value, int startIndex, int count) :162
void Array__IndexOf2_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.IndexOfUnchecked<T>*/),
    };
    uStackFrame __("Uno.Array", "IndexOf`1(T[],T,int,int)");
    int32_t startIndex_ = *startIndex;
    int32_t count_ = *count;
    int32_t ret4;

    if (array == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"array"*/]));

    if ((startIndex_ < 0) || (startIndex_ > uPtr(array)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[17/*"startIndex"*/]));

    if ((count_ < 0) || (count_ > (uPtr(array)->Length() - startIndex_)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[18/*"count"*/]));

    return *__retval = (Array__IndexOfUnchecked_fn(__types[0], array, value, uCRef<int32_t>(startIndex_), uCRef<int32_t>(count_), &ret4), ret4), void();
}

// private static int IndexOfUnchecked<T>(T[] array, T value, int startIndex, int count) :176
void Array__IndexOfUnchecked_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Generic.Equals<T>*/),
    };
    uStackFrame __("Uno.Array", "IndexOfUnchecked`1(T[],T,int,int)");
    int32_t count_ = *count;
    bool ret5;
    int32_t startIndex_ = *startIndex;

    for (int32_t i = 0; i < count_; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(array)->TItem(startIndex_ + i), value, &ret5), ret5))
            return *__retval = startIndex_ + i, void();

    return *__retval = -1, void();
}

// public static int LastIndexOf<T>(T[] array, T value) :185
void Array__LastIndexOf_fn(uType* __type, uArray* array, void* value, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.LastIndexOfUnchecked<T>*/),
    };
    uStackFrame __("Uno.Array", "LastIndexOf`1(T[],T)");
    int32_t ret6;

    if (array == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"array"*/]));

    return *__retval = (Array__LastIndexOfUnchecked_fn(__types[0], array, value, uCRef<int32_t>(uPtr(array)->Length() - 1), uCRef<int32_t>(uPtr(array)->Length()), &ret6), ret6), void();
}

// public static int LastIndexOf<T>(T[] array, T value, int startIndex) :193
void Array__LastIndexOf1_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.LastIndexOfUnchecked<T>*/),
    };
    uStackFrame __("Uno.Array", "LastIndexOf`1(T[],T,int)");
    int32_t startIndex_ = *startIndex;
    int32_t ret7;

    if (array == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"array"*/]));

    if ((startIndex_ < 0) || (startIndex_ > uPtr(array)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[17/*"startIndex"*/]));

    return *__retval = (Array__LastIndexOfUnchecked_fn(__types[0], array, value, uCRef<int32_t>(startIndex_), uCRef<int32_t>(startIndex_ + 1), &ret7), ret7), void();
}

// public static int LastIndexOf<T>(T[] array, T value, int startIndex, int count) :204
void Array__LastIndexOf2_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.LastIndexOfUnchecked<T>*/),
    };
    uStackFrame __("Uno.Array", "LastIndexOf`1(T[],T,int,int)");
    int32_t startIndex_ = *startIndex;
    int32_t count_ = *count;
    int32_t ret8;

    if (array == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"array"*/]));

    if ((startIndex_ < 0) || (startIndex_ > uPtr(array)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[17/*"startIndex"*/]));

    if ((count_ < 0) || (count_ > (startIndex_ + 1)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[18/*"count"*/]));

    return *__retval = (Array__LastIndexOfUnchecked_fn(__types[0], array, value, uCRef<int32_t>(startIndex_), uCRef<int32_t>(count_), &ret8), ret8), void();
}

// private static int LastIndexOfUnchecked<T>(T[] array, T value, int startIndex, int count) :218
void Array__LastIndexOfUnchecked_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Generic.Equals<T>*/),
    };
    uStackFrame __("Uno.Array", "LastIndexOfUnchecked`1(T[],T,int,int)");
    int32_t count_ = *count;
    bool ret9;
    int32_t startIndex_ = *startIndex;

    for (int32_t i = 0; i < count_; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(array)->TItem(startIndex_ - i), value, &ret9), ret9))
            return *__retval = startIndex_ - i, void();

    return *__retval = -1, void();
}

// public generated Array New() :9
void Array__New1_fn(uArray** __retval)
{
    *__retval = Array::New1();
}

// private static void QuickSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :110
void Array__QuickSort_fn(uType* __type, uArray* data, uDelegate* comparison, int32_t* left, int32_t* right)
{
    Array::QuickSort(__type, data, comparison, *left, *right);
}

// private static void ShellSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :80
void Array__ShellSort_fn(uType* __type, uArray* data, uDelegate* comparison, int32_t* left, int32_t* right)
{
    Array::ShellSort(__type, data, comparison, *left, *right);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :54
void Array__Sort_fn(uType* __type, uArray* elements, int32_t* index, int32_t* length, uDelegate* comparison)
{
    Array::Sort(__type, elements, *index, *length, comparison);
}

// public static void Sort<T>(T[] elements, Uno.Comparison<T> comparison) :47
void Array__Sort1_fn(uType* __type, uArray* elements, uDelegate* comparison)
{
    Array::Sort1(__type, elements, comparison);
}

// private static void Swap<T>(T[] data, int a, int b) :136
void Array__Swap_fn(uType* __type, uArray* data, int32_t* a, int32_t* b)
{
    Array::Swap(__type, data, *a, *b);
}

// public generated Array() [instance] :9
void Array::ctor_(uArray* __this)
{
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :18
void Array::Copy(uType* __type, uArray* sourceArray, int32_t sourceIndex, uArray* destinationArray, int32_t destinationIndex, int32_t length)
{
    uStackFrame __("Uno.Array", "Copy`1(T[],int,T[],int,int)");

    if (sourceArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"sourceArray"*/]));

    if (destinationArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"destination...*/]));

    if (sourceIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[10/*"sourceIndex"*/]));

    if (destinationIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[11/*"destination...*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[12/*"length"*/]));

    if (uPtr(sourceArray)->Length() < (sourceIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[13/*"Destination...*/], uBox<int32_t>(::TYPES[8/*int*/], uPtr(sourceArray)->Length())), ::STRINGS[14/*", "*/]), uBox<int32_t>(::TYPES[8/*int*/], destinationIndex)), ::STRINGS[14/*", "*/]), uBox<int32_t>(::TYPES[8/*int*/], length))));

    if (uPtr(destinationArray)->Length() < (destinationIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[15/*"Source arra...*/]));

    for (int32_t i = 0; i < length; i++)
        uPtr(destinationArray)->TItem(destinationIndex + i) = uPtr(sourceArray)->TItem(sourceIndex + i);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) [static] :12
void Array::Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int32_t length)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Copy<T>*/),
    };
    uStackFrame __("Uno.Array", "Copy`1(T[],T[],int)");
    Array::Copy(__types[0], sourceArray, 0, destinationArray, 0, length);
}

// public generated Array New() [static] :9
uArray* Array::New1()
{
    uArray* obj1 = (uArray*)uNew(Array_typeof());
    Array::ctor_(obj1);
    return obj1;
}

// private static void QuickSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :110
void Array::QuickSort(uType* __type, uArray* data, uDelegate* comparison, int32_t left, int32_t right)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Swap<T>*/),
    };
    uStackFrame __("Uno.Array", "QuickSort`1(T[],Uno.Comparison<T>,int,int)");
    uT pivotValue(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int32_t ret10;

    if (left < right)
    {
        int32_t rightIndex = right - 1;
        int32_t pivotIndex = left;
        pivotValue = uPtr(data)->TItem(pivotIndex);
        Array::Swap(__types[0], data, pivotIndex, rightIndex);

        for (int32_t i = left; i < rightIndex; i++)
            if ((uPtr(comparison)->Invoke(&ret10, 2, (void*)uPtr(data)->TItem(i), (void*)pivotValue), ret10) < 0)
            {
                Array::Swap(__types[0], data, i, pivotIndex);
                pivotIndex++;
            }

        Array::Swap(__types[0], data, pivotIndex, rightIndex);
        Array::QuickSort(__type->Base->MakeMethod(10/*QuickSort<T>*/, __type->U(0), NULL), data, comparison, left, pivotIndex);
        Array::QuickSort(__type->Base->MakeMethod(10/*QuickSort<T>*/, __type->U(0), NULL), data, comparison, pivotIndex + 1, right);
    }
}

// private static void ShellSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :80
void Array::ShellSort(uType* __type, uArray* data, uDelegate* comparison, int32_t left, int32_t right)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Swap<T>*/),
    };
    uStackFrame __("Uno.Array", "ShellSort`1(T[],Uno.Comparison<T>,int,int)");
    uT temp(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int32_t ret11;
    float s = 2.8f;
    int32_t size = right - left;
    int32_t increment = size / 2;

    while (increment > 0)
    {
        for (int32_t i = left + increment; i < size; i++)
        {
            int32_t j = i;
            temp = uPtr(data)->TItem(i);

            while ((j >= increment) && ((uPtr(comparison)->Invoke(&ret11, 2, (void*)temp, (void*)data->TItem(j - increment)), ret11) < 0))
            {
                Array::Swap(__types[0], data, j, j - increment);
                j = j - increment;
            }

            data->TItem(j) = temp;
        }

        if (((float)increment < 2.8f) && (increment > 1))
            increment = 1;
        else
            increment = (int32_t)((float)increment / 2.8f);
    }
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :54
void Array::Sort(uType* __type, uArray* elements, int32_t index, int32_t length, uDelegate* comparison)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.QuickSort<T>*/),
        __type->Precalced(1/*Uno.Array.ShellSort<T>*/),
    };
    uStackFrame __("Uno.Array", "Sort`1(T[],int,int,Uno.Comparison<T>)");

    if (length == 0)
        return;

    if (elements == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[19/*"elements"*/]));

    if (index < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[20/*"index"*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[12/*"length"*/]));

    if (uPtr(elements)->Length() < (index + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[21/*"Index and l...*/]));

    if (::g::Uno::Delegate::op_Equality(comparison, NULL))
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[22/*"Comparer is...*/]));

    if (length > 280)
        Array::QuickSort(__types[0], elements, comparison, index, index + length);
    else if (length > 0)
        Array::ShellSort(__types[1], elements, comparison, index, index + length);
}

// public static void Sort<T>(T[] elements, Uno.Comparison<T> comparison) [static] :47
void Array::Sort1(uType* __type, uArray* elements, uDelegate* comparison)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Sort<T>*/),
    };
    uStackFrame __("Uno.Array", "Sort`1(T[],Uno.Comparison<T>)");

    if (elements != NULL)
        Array::Sort(__types[0], elements, 0, uPtr(elements)->Length(), comparison);
}

// private static void Swap<T>(T[] data, int a, int b) [static] :136
void Array::Swap(uType* __type, uArray* data, int32_t a, int32_t b)
{
    uStackFrame __("Uno.Array", "Swap`1(T[],int,int)");
    uT temp(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    temp = uPtr(data)->TItem(a);
    data->TItem(a) = data->TItem(b);
    data->TItem(b) = temp;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Attribute.uno
// --------------------------------------------------------------------

// public abstract class Attribute :6
// {
static void Attribute_build(uType* type)
{
}

uType* Attribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Attribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Attribute", options);
    type->fp_build_ = Attribute_build;
    return type;
}

// protected generated Attribute() :6
void Attribute__ctor__fn(Attribute* __this)
{
    __this->ctor_();
}

// protected generated Attribute() [instance] :6
void Attribute::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Bool.uno
// ---------------------------------------------------------------

// public intrinsic struct Bool :11
// {
static void Bool_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* Bool_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(bool);
    options.ValueSize = sizeof(bool);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Bool", options);
    type->fp_build_ = Bool_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Bool__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Bool__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Bool__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :14
void Bool__Equals_fn(bool* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :20
void Bool__GetHashCode_fn(bool* __this, uType* __type, int32_t* __retval)
{
    return *__retval = *__this ? 1 : 0, void();
}

// public override sealed string ToString() :31
void Bool__ToString_fn(bool* __this, uType* __type, uString** __retval)
{
    return *__retval = uString::Const(*__this ? "True" : "False"), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Buffer.uno
// -----------------------------------------------------------------

// public sealed class Buffer :8
// {
static void Buffer_build(uType* type)
{
    ::STRINGS[23] = uString::Const("data");
    ::STRINGS[24] = uString::Const("offset");
    ::STRINGS[25] = uString::Const("sizeInBytes");
    ::TYPES[5] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Buffer, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(Buffer, _sizeInBytes), 0,
        ::TYPES[5/*byte[]*/], offsetof(Buffer, _data), 0);
    type->Reflection.SetFunctions(15,
        new uFunction("GetByte", NULL, (void*)Buffer__GetByte_fn, 0, false, ::g::Uno::Byte_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetBytes", NULL, (void*)Buffer__GetBytes_fn, 0, false, ::TYPES[5/*byte[]*/], 0),
        new uFunction("get_Item", NULL, (void*)Buffer__get_Item_fn, 0, false, ::g::Uno::Byte_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Buffer__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte_typeof()),
        new uFunction(".ctor", NULL, (void*)Buffer__New1_fn, 0, true, type, 1, ::TYPES[5/*byte[]*/]),
        new uFunction(".ctor", NULL, (void*)Buffer__New4_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set2_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte4_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set4_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set5_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set6_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set8_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set18_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Short_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set23_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::UShort_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_SizeInBytes", NULL, (void*)Buffer__get_SizeInBytes_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Buffer", options);
    type->fp_build_ = Buffer_build;
    return type;
}

// public Buffer(byte[] data) :46
void Buffer__ctor__fn(Buffer* __this, uArray* data)
{
    __this->ctor_(data);
}

// internal Buffer(byte[] data, int offset, int sizeInBytes) :24
void Buffer__ctor_2_fn(Buffer* __this, uArray* data, int32_t* offset, int32_t* sizeInBytes)
{
    __this->ctor_2(data, *offset, *sizeInBytes);
}

// public Buffer(int sizeInBytes) :51
void Buffer__ctor_3_fn(Buffer* __this, int32_t* sizeInBytes)
{
    __this->ctor_3(*sizeInBytes);
}

// public byte GetByte(int offset) :139
void Buffer__GetByte_fn(Buffer* __this, int32_t* offset, uint8_t* __retval)
{
    *__retval = __this->GetByte(*offset);
}

// public byte[] GetBytes() :56
void Buffer__GetBytes_fn(Buffer* __this, uArray** __retval)
{
    *__retval = __this->GetBytes();
}

// public byte get_Item(int offset) :92
void Buffer__get_Item_fn(Buffer* __this, int32_t* offset, uint8_t* __retval)
{
    *__retval = __this->Item(*offset);
}

// public void set_Item(int offset, byte value) :93
void Buffer__set_Item_fn(Buffer* __this, int32_t* offset, uint8_t* value)
{
    __this->Item(*offset, *value);
}

// public Buffer New(byte[] data) :46
void Buffer__New1_fn(uArray* data, Buffer** __retval)
{
    *__retval = Buffer::New1(data);
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes) :24
void Buffer__New3_fn(uArray* data, int32_t* offset, int32_t* sizeInBytes, Buffer** __retval)
{
    *__retval = Buffer::New3(data, *offset, *sizeInBytes);
}

// public Buffer New(int sizeInBytes) :51
void Buffer__New4_fn(int32_t* sizeInBytes, Buffer** __retval)
{
    *__retval = Buffer::New4(*sizeInBytes);
}

// public void Set(int offset, byte value) :148
void Buffer__Set_fn(Buffer* __this, int32_t* offset, uint8_t* value)
{
    __this->Set(*offset, *value);
}

// public void Set(int offset, byte4 value) :174
void Buffer__Set2_fn(Buffer* __this, int32_t* offset, ::g::Uno::Byte4* value)
{
    __this->Set2(*offset, *value);
}

// public void Set(int offset, float value, [bool littleEndian]) :384
void Buffer__Set4_fn(Buffer* __this, int32_t* offset, float* value, bool* littleEndian)
{
    __this->Set4(*offset, *value, *littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) :398
void Buffer__Set5_fn(Buffer* __this, int32_t* offset, ::g::Uno::Float2* value, bool* littleEndian)
{
    __this->Set5(*offset, *value, *littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) :410
void Buffer__Set6_fn(Buffer* __this, int32_t* offset, ::g::Uno::Float3* value, bool* littleEndian)
{
    __this->Set6(*offset, *value, *littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) :423
void Buffer__Set8_fn(Buffer* __this, int32_t* offset, ::g::Uno::Float4* value, bool* littleEndian)
{
    __this->Set8(*offset, *value, *littleEndian);
}

// public void Set(int offset, short value, [bool littleEndian]) :191
void Buffer__Set18_fn(Buffer* __this, int32_t* offset, int16_t* value, bool* littleEndian)
{
    __this->Set18(*offset, *value, *littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) :234
void Buffer__Set23_fn(Buffer* __this, int32_t* offset, uint16_t* value, bool* littleEndian)
{
    __this->Set23(*offset, *value, *littleEndian);
}

// public int get_SizeInBytes() :68
void Buffer__get_SizeInBytes_fn(Buffer* __this, int32_t* __retval)
{
    *__retval = __this->SizeInBytes();
}

// public Buffer(byte[] data) [instance] :46
void Buffer::ctor_(uArray* data)
{
    uStackFrame __("Uno.Buffer", ".ctor(byte[])");
    ctor_2(data, 0, uPtr(data)->Length());
}

// internal Buffer(byte[] data, int offset, int sizeInBytes) [instance] :24
void Buffer::ctor_2(uArray* data, int32_t offset, int32_t sizeInBytes)
{
    uStackFrame __("Uno.Buffer", ".ctor(byte[],int,int)");

    if (data == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[23/*"data"*/]));

    if (offset < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[24/*"offset"*/]));

    if ((sizeInBytes < 0) || ((offset + sizeInBytes) > uPtr(data)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[25/*"sizeInBytes"*/]));

    _data = data;
    _offset = offset;
    _sizeInBytes = sizeInBytes;
}

// public Buffer(int sizeInBytes) [instance] :51
void Buffer::ctor_3(int32_t sizeInBytes)
{
    uStackFrame __("Uno.Buffer", ".ctor(int)");
    ctor_2(uArray::New(::TYPES[5/*byte[]*/], sizeInBytes), 0, sizeInBytes);
}

// public byte GetByte(int offset) [instance] :139
uint8_t Buffer::GetByte(int32_t offset)
{
    uStackFrame __("Uno.Buffer", "GetByte(int)");

    if ((offset < 0) || (_sizeInBytes < (offset + 1)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[24/*"offset"*/]));

    return uPtr(_data)->Item<uint8_t>(_offset + offset);
}

// public byte[] GetBytes() [instance] :56
uArray* Buffer::GetBytes()
{
    return _data;
}

// public byte get_Item(int offset) [instance] :92
uint8_t Buffer::Item(int32_t offset)
{
    uStackFrame __("Uno.Buffer", "get_Item(int)");
    return GetByte(offset);
}

// public void set_Item(int offset, byte value) [instance] :93
void Buffer::Item(int32_t offset, uint8_t value)
{
    uStackFrame __("Uno.Buffer", "set_Item(int,byte)");
    Set(offset, value);
}

// public void Set(int offset, byte value) [instance] :148
void Buffer::Set(int32_t offset, uint8_t value)
{
    uStackFrame __("Uno.Buffer", "Set(int,byte)");

    if ((offset < 0) || (_sizeInBytes < (offset + 1)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[24/*"offset"*/]));

    uPtr(_data)->Item<uint8_t>(_offset + offset) = value;
}

// public void Set(int offset, byte4 value) [instance] :174
void Buffer::Set2(int32_t offset, ::g::Uno::Byte4 value)
{
    uStackFrame __("Uno.Buffer", "Set(int,byte4)");
    Set(offset, value.X);
    Set(offset + 1, value.Y);
    Set(offset + 2, value.Z);
    Set(offset + 3, value.W);
}

// public void Set(int offset, float value, [bool littleEndian]) [instance] :384
void Buffer::Set4(int32_t offset, float value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float,[bool])");

    if ((offset < 0) || (_sizeInBytes < (offset + 4)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[24/*"offset"*/]));

    ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(_data, _offset + offset, value, littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) [instance] :398
void Buffer::Set5(int32_t offset, ::g::Uno::Float2 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float2,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) [instance] :410
void Buffer::Set6(int32_t offset, ::g::Uno::Float3 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float3,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) [instance] :423
void Buffer::Set8(int32_t offset, ::g::Uno::Float4 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float4,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
    Set4(offset + 12, value.W, littleEndian);
}

// public void Set(int offset, short value, [bool littleEndian]) [instance] :191
void Buffer::Set18(int32_t offset, int16_t value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,short,[bool])");

    if ((offset < 0) || (_sizeInBytes < (offset + 2)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[24/*"offset"*/]));

    ::g::Uno::Runtime::Implementation::BufferImpl::SetShort(_data, _offset + offset, value, littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) [instance] :234
void Buffer::Set23(int32_t offset, uint16_t value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,ushort,[bool])");

    if ((offset < 0) || (_sizeInBytes < (offset + 2)))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[24/*"offset"*/]));

    ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(_data, _offset + offset, value, littleEndian);
}

// public int get_SizeInBytes() [instance] :68
int32_t Buffer::SizeInBytes()
{
    return _sizeInBytes;
}

// public Buffer New(byte[] data) [static] :46
Buffer* Buffer::New1(uArray* data)
{
    Buffer* obj3 = (Buffer*)uNew(Buffer_typeof());
    obj3->ctor_(data);
    return obj3;
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes) [static] :24
Buffer* Buffer::New3(uArray* data, int32_t offset, int32_t sizeInBytes)
{
    Buffer* obj1 = (Buffer*)uNew(Buffer_typeof());
    obj1->ctor_2(data, offset, sizeInBytes);
    return obj1;
}

// public Buffer New(int sizeInBytes) [static] :51
Buffer* Buffer::New4(int32_t sizeInBytes)
{
    Buffer* obj4 = (Buffer*)uNew(Buffer_typeof());
    obj4->ctor_3(sizeInBytes);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Byte.uno
// ---------------------------------------------------------------

// public intrinsic struct Byte :12
// {
static void Byte_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* Byte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint8_t);
    options.ValueSize = sizeof(uint8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte", options);
    type->fp_build_ = Byte_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Byte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :18
void Byte__Equals_fn(uint8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint8_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :24
void Byte__GetHashCode_fn(uint8_t* __this, uType* __type, int32_t* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :36
void Byte__ToString_fn(uint8_t* __this, uType* __type, uString** __retval)
{
    char buf[4];
    int len = snprintf(buf, sizeof(buf), "%d", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Byte2.uno
// ----------------------------------------------------------------

// public intrinsic struct Byte2 :6
// {
static void Byte2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Byte_typeof();
    type->SetFields(0,
        ::TYPES[6/*byte*/], offsetof(Byte2, X), 0,
        ::TYPES[6/*byte*/], offsetof(Byte2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* Byte2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Byte2);
    options.ValueSize = sizeof(Byte2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte2", options);
    type->fp_build_ = Byte2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Byte2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :49
void Byte2__Equals_fn(Byte2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :50
void Byte2__GetHashCode_fn(Byte2* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :51
void Byte2__ToString_fn(Byte2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("byte2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Byte::ToString(__this->X, ::TYPES[6/*byte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->Y, ::TYPES[6/*byte*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Byte4.uno
// ----------------------------------------------------------------

// public intrinsic struct Byte4 :6
// {
static void Byte4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Byte_typeof();
    type->SetFields(0,
        ::TYPES[6/*byte*/], offsetof(Byte4, X), 0,
        ::TYPES[6/*byte*/], offsetof(Byte4, Y), 0,
        ::TYPES[6/*byte*/], offsetof(Byte4, Z), 0,
        ::TYPES[6/*byte*/], offsetof(Byte4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Byte4__New2_fn, 0, true, type, 4, ::TYPES[6/*byte*/], ::TYPES[6/*byte*/], ::TYPES[6/*byte*/], ::TYPES[6/*byte*/]));
}

uStructType* Byte4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Byte4);
    options.ValueSize = sizeof(Byte4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte4", options);
    type->fp_build_ = Byte4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Byte4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte4__ToString_fn;
    return type;
}

// public Byte4(byte x, byte y, byte z, byte w) :41
void Byte4__ctor_1_fn(Byte4* __this, uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public override sealed bool Equals(object o) :67
void Byte4__Equals_fn(Byte4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :68
void Byte4__GetHashCode_fn(Byte4* __this, uType* __type, int32_t* __retval)
{
    int32_t ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public Byte4 New(byte x, byte y, byte z, byte w) :41
void Byte4__New2_fn(uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w, Byte4* __retval)
{
    *__retval = Byte4__New2(*x, *y, *z, *w);
}

// public override sealed string ToString() :69
void Byte4__ToString_fn(Byte4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("byte4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Byte::ToString(__this->X, ::TYPES[6/*byte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->Y, ::TYPES[6/*byte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->Z, ::TYPES[6/*byte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->W, ::TYPES[6/*byte*/])), void();
}

// public Byte4(byte x, byte y, byte z, byte w) [instance] :41
void Byte4::ctor_1(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Byte4 New(byte x, byte y, byte z, byte w) [static] :41
Byte4 Byte4__New2(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    Byte4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Char.uno
// ---------------------------------------------------------------

// public intrinsic struct Char :11
// {
// static generated Char() :11
static void Char__cctor__fn(uType* __type)
{
    Char::l65_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 1302, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 
        129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 224, 
        225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 215, 248, 249, 250, 251, 252, 253, 254, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 257, 
        257, 259, 259, 261, 261, 263, 263, 265, 265, 267, 267, 269, 269, 271, 271, 273, 273, 275, 275, 277, 277, 279, 279, 281, 281, 283, 283, 285, 285, 287, 287, 289, 289, 291, 291, 293, 293, 295, 295, 297, 297, 299, 299, 301, 301, 303, 303, 105, 305, 307, 307, 309, 309, 311, 311, 312, 314, 314, 316, 316, 318, 318, 320, 320, 
        322, 322, 324, 324, 326, 326, 328, 328, 329, 331, 331, 333, 333, 335, 335, 337, 337, 339, 339, 341, 341, 343, 343, 345, 345, 347, 347, 349, 349, 351, 351, 353, 353, 355, 355, 357, 357, 359, 359, 361, 361, 363, 363, 365, 365, 367, 367, 369, 369, 371, 371, 373, 373, 375, 375, 255, 378, 378, 380, 380, 382, 382, 383, 384, 
        595, 387, 387, 389, 389, 596, 392, 392, 598, 599, 396, 396, 397, 477, 601, 603, 402, 402, 608, 611, 405, 617, 616, 409, 409, 410, 411, 623, 626, 414, 629, 417, 417, 419, 419, 421, 421, 640, 424, 424, 643, 426, 427, 429, 429, 648, 432, 432, 650, 651, 436, 436, 438, 438, 658, 441, 441, 442, 443, 445, 445, 446, 447, 448, 
        449, 450, 451, 454, 454, 454, 457, 457, 457, 460, 460, 460, 462, 462, 464, 464, 466, 466, 468, 468, 470, 470, 472, 472, 474, 474, 476, 476, 477, 479, 479, 481, 481, 483, 483, 485, 485, 487, 487, 489, 489, 491, 491, 493, 493, 495, 495, 496, 499, 499, 499, 501, 501, 405, 447, 505, 505, 507, 507, 509, 509, 511, 511, 513, 
        513, 515, 515, 517, 517, 519, 519, 521, 521, 523, 523, 525, 525, 527, 527, 529, 529, 531, 531, 533, 533, 535, 535, 537, 537, 539, 539, 541, 541, 543, 543, 414, 545, 547, 547, 549, 549, 551, 551, 553, 553, 555, 555, 557, 557, 559, 559, 561, 561, 563, 563, 564, 565, 566, 567, 568, 569, 11365, 572, 572, 410, 11366, 575, 576, 
        578, 578, 384, 649, 652, 583, 583, 585, 585, 587, 587, 589, 589, 591, 591, 592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 640, 
        641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 
        705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 
        769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 
        833, 834, 835, 836, 837, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 881, 881, 883, 883, 884, 885, 887, 887, 888, 889, 890, 891, 892, 893, 894, 895, 896, 
        897, 898, 899, 900, 901, 940, 903, 941, 942, 943, 907, 972, 909, 973, 974, 912, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 930, 963, 964, 965, 966, 967, 968, 969, 970, 971, 940, 941, 942, 943, 944, 945, 946, 947, 948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 
        961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 983, 976, 977, 978, 979, 980, 981, 982, 983, 985, 985, 987, 987, 989, 989, 991, 991, 993, 993, 995, 995, 997, 997, 999, 999, 1001, 1001, 1003, 1003, 1005, 1005, 1007, 1007, 1008, 1009, 1010, 1011, 952, 1013, 1014, 1016, 1016, 1010, 1019, 1019, 1020, 891, 892, 893, 1104, 
        1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 
        1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1121, 1121, 1123, 1123, 1125, 1125, 1127, 1127, 1129, 1129, 1131, 1131, 1133, 1133, 1135, 1135, 1137, 1137, 1139, 1139, 1141, 1141, 1143, 1143, 1145, 1145, 1147, 1147, 1149, 1149, 1151, 1151, 1153, 
        1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1163, 1163, 1165, 1165, 1167, 1167, 1169, 1169, 1171, 1171, 1173, 1173, 1175, 1175, 1177, 1177, 1179, 1179, 1181, 1181, 1183, 1183, 1185, 1185, 1187, 1187, 1189, 1189, 1191, 1191, 1193, 1193, 1195, 1195, 1197, 1197, 1199, 1199, 1201, 1201, 1203, 1203, 1205, 1205, 1207, 1207, 1209, 1209, 1211, 1211, 1213, 1213, 1215, 1215, 1231, 
        1218, 1218, 1220, 1220, 1222, 1222, 1224, 1224, 1226, 1226, 1228, 1228, 1230, 1230, 1231, 1233, 1233, 1235, 1235, 1237, 1237, 1239, 1239, 1241, 1241, 1243, 1243, 1245, 1245, 1247, 1247, 1249, 1249, 1251, 1251, 1253, 1253, 1255, 1255, 1257, 1257, 1259, 1259, 1261, 1261, 1263, 1263, 1265, 1265, 1267, 1267, 1269, 1269, 1271, 1271, 1273, 1273, 1275, 1275, 1277, 1277, 1279, 1279, 1281, 
        1281, 1283, 1283, 1285, 1285, 1287, 1287, 1289, 1289, 1291, 1291, 1293, 1293, 1295, 1295, 1297, 1297, 1299, 1299, 1301, 1301, 1303, 1303, 1305, 1305, 1307, 1307, 1309, 1309, 1311, 1311, 1313, 1313, 1315, 1315, 1317, 1317, 1319, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 
        1393, 1394, 1395, 1396, 1397, 1398, 1399, 1400, 1401, 1402, 1403, 1404, 1405, 1406, 1407, 1408, 1409, 1410, 1411, 1412, 1413, 1414);
    Char::l4256_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 46, 11520, 11521, 11522, 11523, 11524, 11525, 11526, 11527, 11528, 11529, 11530, 11531, 11532, 11533, 11534, 11535, 11536, 11537, 11538, 11539, 11540, 11541, 11542, 11543, 11544, 11545, 11546, 11547, 11548, 11549, 11550, 11551, 11552, 11553, 11554, 11555, 11556, 11557, 4294, 11559, 4296, 4297, 4298, 4299, 4300, 11565);
    Char::l7680_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 1744, 7681, 7681, 7683, 7683, 7685, 7685, 7687, 7687, 7689, 7689, 7691, 7691, 7693, 7693, 7695, 7695, 7697, 7697, 7699, 7699, 7701, 7701, 7703, 7703, 7705, 7705, 7707, 7707, 7709, 7709, 7711, 7711, 7713, 7713, 7715, 7715, 7717, 7717, 7719, 7719, 7721, 7721, 7723, 7723, 7725, 7725, 7727, 7727, 7729, 7729, 7731, 7731, 7733, 7733, 7735, 7735, 7737, 7737, 7739, 7739, 7741, 7741, 7743, 7743, 
        7745, 7745, 7747, 7747, 7749, 7749, 7751, 7751, 7753, 7753, 7755, 7755, 7757, 7757, 7759, 7759, 7761, 7761, 7763, 7763, 7765, 7765, 7767, 7767, 7769, 7769, 7771, 7771, 7773, 7773, 7775, 7775, 7777, 7777, 7779, 7779, 7781, 7781, 7783, 7783, 7785, 7785, 7787, 7787, 7789, 7789, 7791, 7791, 7793, 7793, 7795, 7795, 7797, 7797, 7799, 7799, 7801, 7801, 7803, 7803, 7805, 7805, 7807, 7807, 
        7809, 7809, 7811, 7811, 7813, 7813, 7815, 7815, 7817, 7817, 7819, 7819, 7821, 7821, 7823, 7823, 7825, 7825, 7827, 7827, 7829, 7829, 7830, 7831, 7832, 7833, 7834, 7835, 7836, 7837, 223, 7839, 7841, 7841, 7843, 7843, 7845, 7845, 7847, 7847, 7849, 7849, 7851, 7851, 7853, 7853, 7855, 7855, 7857, 7857, 7859, 7859, 7861, 7861, 7863, 7863, 7865, 7865, 7867, 7867, 7869, 7869, 7871, 7871, 
        7873, 7873, 7875, 7875, 7877, 7877, 7879, 7879, 7881, 7881, 7883, 7883, 7885, 7885, 7887, 7887, 7889, 7889, 7891, 7891, 7893, 7893, 7895, 7895, 7897, 7897, 7899, 7899, 7901, 7901, 7903, 7903, 7905, 7905, 7907, 7907, 7909, 7909, 7911, 7911, 7913, 7913, 7915, 7915, 7917, 7917, 7919, 7919, 7921, 7921, 7923, 7923, 7925, 7925, 7927, 7927, 7929, 7929, 7931, 7931, 7933, 7933, 7935, 7935, 
        7936, 7937, 7938, 7939, 7940, 7941, 7942, 7943, 7936, 7937, 7938, 7939, 7940, 7941, 7942, 7943, 7952, 7953, 7954, 7955, 7956, 7957, 7958, 7959, 7952, 7953, 7954, 7955, 7956, 7957, 7966, 7967, 7968, 7969, 7970, 7971, 7972, 7973, 7974, 7975, 7968, 7969, 7970, 7971, 7972, 7973, 7974, 7975, 7984, 7985, 7986, 7987, 7988, 7989, 7990, 7991, 7984, 7985, 7986, 7987, 7988, 7989, 7990, 7991, 
        8000, 8001, 8002, 8003, 8004, 8005, 8006, 8007, 8000, 8001, 8002, 8003, 8004, 8005, 8014, 8015, 8016, 8017, 8018, 8019, 8020, 8021, 8022, 8023, 8024, 8017, 8026, 8019, 8028, 8021, 8030, 8023, 8032, 8033, 8034, 8035, 8036, 8037, 8038, 8039, 8032, 8033, 8034, 8035, 8036, 8037, 8038, 8039, 8048, 8049, 8050, 8051, 8052, 8053, 8054, 8055, 8056, 8057, 8058, 8059, 8060, 8061, 8062, 8063, 
        8064, 8065, 8066, 8067, 8068, 8069, 8070, 8071, 8064, 8065, 8066, 8067, 8068, 8069, 8070, 8071, 8080, 8081, 8082, 8083, 8084, 8085, 8086, 8087, 8080, 8081, 8082, 8083, 8084, 8085, 8086, 8087, 8096, 8097, 8098, 8099, 8100, 8101, 8102, 8103, 8096, 8097, 8098, 8099, 8100, 8101, 8102, 8103, 8112, 8113, 8114, 8115, 8116, 8117, 8118, 8119, 8112, 8113, 8048, 8049, 8115, 8125, 8126, 8127, 
        8128, 8129, 8130, 8131, 8132, 8133, 8134, 8135, 8050, 8051, 8052, 8053, 8131, 8141, 8142, 8143, 8144, 8145, 8146, 8147, 8148, 8149, 8150, 8151, 8144, 8145, 8054, 8055, 8156, 8157, 8158, 8159, 8160, 8161, 8162, 8163, 8164, 8165, 8166, 8167, 8160, 8161, 8058, 8059, 8165, 8173, 8174, 8175, 8176, 8177, 8178, 8179, 8180, 8181, 8182, 8183, 8056, 8057, 8060, 8061, 8179, 8189, 8190, 8191, 
        8192, 8193, 8194, 8195, 8196, 8197, 8198, 8199, 8200, 8201, 8202, 8203, 8204, 8205, 8206, 8207, 8208, 8209, 8210, 8211, 8212, 8213, 8214, 8215, 8216, 8217, 8218, 8219, 8220, 8221, 8222, 8223, 8224, 8225, 8226, 8227, 8228, 8229, 8230, 8231, 8232, 8233, 8234, 8235, 8236, 8237, 8238, 8239, 8240, 8241, 8242, 8243, 8244, 8245, 8246, 8247, 8248, 8249, 8250, 8251, 8252, 8253, 8254, 8255, 
        8256, 8257, 8258, 8259, 8260, 8261, 8262, 8263, 8264, 8265, 8266, 8267, 8268, 8269, 8270, 8271, 8272, 8273, 8274, 8275, 8276, 8277, 8278, 8279, 8280, 8281, 8282, 8283, 8284, 8285, 8286, 8287, 8288, 8289, 8290, 8291, 8292, 8293, 8294, 8295, 8296, 8297, 8298, 8299, 8300, 8301, 8302, 8303, 8304, 8305, 8306, 8307, 8308, 8309, 8310, 8311, 8312, 8313, 8314, 8315, 8316, 8317, 8318, 8319, 
        8320, 8321, 8322, 8323, 8324, 8325, 8326, 8327, 8328, 8329, 8330, 8331, 8332, 8333, 8334, 8335, 8336, 8337, 8338, 8339, 8340, 8341, 8342, 8343, 8344, 8345, 8346, 8347, 8348, 8349, 8350, 8351, 8352, 8353, 8354, 8355, 8356, 8357, 8358, 8359, 8360, 8361, 8362, 8363, 8364, 8365, 8366, 8367, 8368, 8369, 8370, 8371, 8372, 8373, 8374, 8375, 8376, 8377, 8378, 8379, 8380, 8381, 8382, 8383, 
        8384, 8385, 8386, 8387, 8388, 8389, 8390, 8391, 8392, 8393, 8394, 8395, 8396, 8397, 8398, 8399, 8400, 8401, 8402, 8403, 8404, 8405, 8406, 8407, 8408, 8409, 8410, 8411, 8412, 8413, 8414, 8415, 8416, 8417, 8418, 8419, 8420, 8421, 8422, 8423, 8424, 8425, 8426, 8427, 8428, 8429, 8430, 8431, 8432, 8433, 8434, 8435, 8436, 8437, 8438, 8439, 8440, 8441, 8442, 8443, 8444, 8445, 8446, 8447, 
        8448, 8449, 8450, 8451, 8452, 8453, 8454, 8455, 8456, 8457, 8458, 8459, 8460, 8461, 8462, 8463, 8464, 8465, 8466, 8467, 8468, 8469, 8470, 8471, 8472, 8473, 8474, 8475, 8476, 8477, 8478, 8479, 8480, 8481, 8482, 8483, 8484, 8485, 969, 8487, 8488, 8489, 107, 229, 8492, 8493, 8494, 8495, 8496, 8497, 8526, 8499, 8500, 8501, 8502, 8503, 8504, 8505, 8506, 8507, 8508, 8509, 8510, 8511, 
        8512, 8513, 8514, 8515, 8516, 8517, 8518, 8519, 8520, 8521, 8522, 8523, 8524, 8525, 8526, 8527, 8528, 8529, 8530, 8531, 8532, 8533, 8534, 8535, 8536, 8537, 8538, 8539, 8540, 8541, 8542, 8543, 8560, 8561, 8562, 8563, 8564, 8565, 8566, 8567, 8568, 8569, 8570, 8571, 8572, 8573, 8574, 8575, 8560, 8561, 8562, 8563, 8564, 8565, 8566, 8567, 8568, 8569, 8570, 8571, 8572, 8573, 8574, 8575, 
        8576, 8577, 8578, 8580, 8580, 8581, 8582, 8583, 8584, 8585, 8586, 8587, 8588, 8589, 8590, 8591, 8592, 8593, 8594, 8595, 8596, 8597, 8598, 8599, 8600, 8601, 8602, 8603, 8604, 8605, 8606, 8607, 8608, 8609, 8610, 8611, 8612, 8613, 8614, 8615, 8616, 8617, 8618, 8619, 8620, 8621, 8622, 8623, 8624, 8625, 8626, 8627, 8628, 8629, 8630, 8631, 8632, 8633, 8634, 8635, 8636, 8637, 8638, 8639, 
        8640, 8641, 8642, 8643, 8644, 8645, 8646, 8647, 8648, 8649, 8650, 8651, 8652, 8653, 8654, 8655, 8656, 8657, 8658, 8659, 8660, 8661, 8662, 8663, 8664, 8665, 8666, 8667, 8668, 8669, 8670, 8671, 8672, 8673, 8674, 8675, 8676, 8677, 8678, 8679, 8680, 8681, 8682, 8683, 8684, 8685, 8686, 8687, 8688, 8689, 8690, 8691, 8692, 8693, 8694, 8695, 8696, 8697, 8698, 8699, 8700, 8701, 8702, 8703, 
        8704, 8705, 8706, 8707, 8708, 8709, 8710, 8711, 8712, 8713, 8714, 8715, 8716, 8717, 8718, 8719, 8720, 8721, 8722, 8723, 8724, 8725, 8726, 8727, 8728, 8729, 8730, 8731, 8732, 8733, 8734, 8735, 8736, 8737, 8738, 8739, 8740, 8741, 8742, 8743, 8744, 8745, 8746, 8747, 8748, 8749, 8750, 8751, 8752, 8753, 8754, 8755, 8756, 8757, 8758, 8759, 8760, 8761, 8762, 8763, 8764, 8765, 8766, 8767, 
        8768, 8769, 8770, 8771, 8772, 8773, 8774, 8775, 8776, 8777, 8778, 8779, 8780, 8781, 8782, 8783, 8784, 8785, 8786, 8787, 8788, 8789, 8790, 8791, 8792, 8793, 8794, 8795, 8796, 8797, 8798, 8799, 8800, 8801, 8802, 8803, 8804, 8805, 8806, 8807, 8808, 8809, 8810, 8811, 8812, 8813, 8814, 8815, 8816, 8817, 8818, 8819, 8820, 8821, 8822, 8823, 8824, 8825, 8826, 8827, 8828, 8829, 8830, 8831, 
        8832, 8833, 8834, 8835, 8836, 8837, 8838, 8839, 8840, 8841, 8842, 8843, 8844, 8845, 8846, 8847, 8848, 8849, 8850, 8851, 8852, 8853, 8854, 8855, 8856, 8857, 8858, 8859, 8860, 8861, 8862, 8863, 8864, 8865, 8866, 8867, 8868, 8869, 8870, 8871, 8872, 8873, 8874, 8875, 8876, 8877, 8878, 8879, 8880, 8881, 8882, 8883, 8884, 8885, 8886, 8887, 8888, 8889, 8890, 8891, 8892, 8893, 8894, 8895, 
        8896, 8897, 8898, 8899, 8900, 8901, 8902, 8903, 8904, 8905, 8906, 8907, 8908, 8909, 8910, 8911, 8912, 8913, 8914, 8915, 8916, 8917, 8918, 8919, 8920, 8921, 8922, 8923, 8924, 8925, 8926, 8927, 8928, 8929, 8930, 8931, 8932, 8933, 8934, 8935, 8936, 8937, 8938, 8939, 8940, 8941, 8942, 8943, 8944, 8945, 8946, 8947, 8948, 8949, 8950, 8951, 8952, 8953, 8954, 8955, 8956, 8957, 8958, 8959, 
        8960, 8961, 8962, 8963, 8964, 8965, 8966, 8967, 8968, 8969, 8970, 8971, 8972, 8973, 8974, 8975, 8976, 8977, 8978, 8979, 8980, 8981, 8982, 8983, 8984, 8985, 8986, 8987, 8988, 8989, 8990, 8991, 8992, 8993, 8994, 8995, 8996, 8997, 8998, 8999, 9000, 9001, 9002, 9003, 9004, 9005, 9006, 9007, 9008, 9009, 9010, 9011, 9012, 9013, 9014, 9015, 9016, 9017, 9018, 9019, 9020, 9021, 9022, 9023, 
        9024, 9025, 9026, 9027, 9028, 9029, 9030, 9031, 9032, 9033, 9034, 9035, 9036, 9037, 9038, 9039, 9040, 9041, 9042, 9043, 9044, 9045, 9046, 9047, 9048, 9049, 9050, 9051, 9052, 9053, 9054, 9055, 9056, 9057, 9058, 9059, 9060, 9061, 9062, 9063, 9064, 9065, 9066, 9067, 9068, 9069, 9070, 9071, 9072, 9073, 9074, 9075, 9076, 9077, 9078, 9079, 9080, 9081, 9082, 9083, 9084, 9085, 9086, 9087, 
        9088, 9089, 9090, 9091, 9092, 9093, 9094, 9095, 9096, 9097, 9098, 9099, 9100, 9101, 9102, 9103, 9104, 9105, 9106, 9107, 9108, 9109, 9110, 9111, 9112, 9113, 9114, 9115, 9116, 9117, 9118, 9119, 9120, 9121, 9122, 9123, 9124, 9125, 9126, 9127, 9128, 9129, 9130, 9131, 9132, 9133, 9134, 9135, 9136, 9137, 9138, 9139, 9140, 9141, 9142, 9143, 9144, 9145, 9146, 9147, 9148, 9149, 9150, 9151, 
        9152, 9153, 9154, 9155, 9156, 9157, 9158, 9159, 9160, 9161, 9162, 9163, 9164, 9165, 9166, 9167, 9168, 9169, 9170, 9171, 9172, 9173, 9174, 9175, 9176, 9177, 9178, 9179, 9180, 9181, 9182, 9183, 9184, 9185, 9186, 9187, 9188, 9189, 9190, 9191, 9192, 9193, 9194, 9195, 9196, 9197, 9198, 9199, 9200, 9201, 9202, 9203, 9204, 9205, 9206, 9207, 9208, 9209, 9210, 9211, 9212, 9213, 9214, 9215, 
        9216, 9217, 9218, 9219, 9220, 9221, 9222, 9223, 9224, 9225, 9226, 9227, 9228, 9229, 9230, 9231, 9232, 9233, 9234, 9235, 9236, 9237, 9238, 9239, 9240, 9241, 9242, 9243, 9244, 9245, 9246, 9247, 9248, 9249, 9250, 9251, 9252, 9253, 9254, 9255, 9256, 9257, 9258, 9259, 9260, 9261, 9262, 9263, 9264, 9265, 9266, 9267, 9268, 9269, 9270, 9271, 9272, 9273, 9274, 9275, 9276, 9277, 9278, 9279, 
        9280, 9281, 9282, 9283, 9284, 9285, 9286, 9287, 9288, 9289, 9290, 9291, 9292, 9293, 9294, 9295, 9296, 9297, 9298, 9299, 9300, 9301, 9302, 9303, 9304, 9305, 9306, 9307, 9308, 9309, 9310, 9311, 9312, 9313, 9314, 9315, 9316, 9317, 9318, 9319, 9320, 9321, 9322, 9323, 9324, 9325, 9326, 9327, 9328, 9329, 9330, 9331, 9332, 9333, 9334, 9335, 9336, 9337, 9338, 9339, 9340, 9341, 9342, 9343, 
        9344, 9345, 9346, 9347, 9348, 9349, 9350, 9351, 9352, 9353, 9354, 9355, 9356, 9357, 9358, 9359, 9360, 9361, 9362, 9363, 9364, 9365, 9366, 9367, 9368, 9369, 9370, 9371, 9372, 9373, 9374, 9375, 9376, 9377, 9378, 9379, 9380, 9381, 9382, 9383, 9384, 9385, 9386, 9387, 9388, 9389, 9390, 9391, 9392, 9393, 9394, 9395, 9396, 9397, 9424, 9425, 9426, 9427, 9428, 9429, 9430, 9431, 9432, 9433, 
        9434, 9435, 9436, 9437, 9438, 9439, 9440, 9441, 9442, 9443, 9444, 9445, 9446, 9447, 9448, 9449);
    Char::l11246_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 261, 11246, 11247, 11248, 11249, 11250, 11251, 11252, 11253, 11254, 11255, 11256, 11257, 11258, 11259, 11260, 11261, 11262, 11263, 11312, 11313, 11314, 11315, 11316, 11317, 11318, 11319, 11320, 11321, 11322, 11323, 11324, 11325, 11326, 11327, 11328, 11329, 11330, 11331, 11332, 11333, 11334, 11335, 11336, 11337, 11338, 11339, 11340, 11341, 11342, 11343, 11344, 11345, 11346, 11347, 11348, 11349, 11350, 11351, 11352, 11353, 11354, 11355, 11356, 11357, 
        11358, 11311, 11312, 11313, 11314, 11315, 11316, 11317, 11318, 11319, 11320, 11321, 11322, 11323, 11324, 11325, 11326, 11327, 11328, 11329, 11330, 11331, 11332, 11333, 11334, 11335, 11336, 11337, 11338, 11339, 11340, 11341, 11342, 11343, 11344, 11345, 11346, 11347, 11348, 11349, 11350, 11351, 11352, 11353, 11354, 11355, 11356, 11357, 11358, 11359, 11361, 11361, 619, 7549, 637, 11365, 11366, 11368, 11368, 11370, 11370, 11372, 11372, 593, 
        625, 592, 594, 11377, 11379, 11379, 11380, 11382, 11382, 11383, 11384, 11385, 11386, 11387, 11388, 11389, 575, 576, 11393, 11393, 11395, 11395, 11397, 11397, 11399, 11399, 11401, 11401, 11403, 11403, 11405, 11405, 11407, 11407, 11409, 11409, 11411, 11411, 11413, 11413, 11415, 11415, 11417, 11417, 11419, 11419, 11421, 11421, 11423, 11423, 11425, 11425, 11427, 11427, 11429, 11429, 11431, 11431, 11433, 11433, 11435, 11435, 11437, 11437, 
        11439, 11439, 11441, 11441, 11443, 11443, 11445, 11445, 11447, 11447, 11449, 11449, 11451, 11451, 11453, 11453, 11455, 11455, 11457, 11457, 11459, 11459, 11461, 11461, 11463, 11463, 11465, 11465, 11467, 11467, 11469, 11469, 11471, 11471, 11473, 11473, 11475, 11475, 11477, 11477, 11479, 11479, 11481, 11481, 11483, 11483, 11485, 11485, 11487, 11487, 11489, 11489, 11491, 11491, 11492, 11493, 11494, 11495, 11496, 11497, 11498, 11500, 11500, 11502, 
        11502, 11503, 11504, 11505, 11507);
    Char::l42560_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 363, 42561, 42561, 42563, 42563, 42565, 42565, 42567, 42567, 42569, 42569, 42571, 42571, 42573, 42573, 42575, 42575, 42577, 42577, 42579, 42579, 42581, 42581, 42583, 42583, 42585, 42585, 42587, 42587, 42589, 42589, 42591, 42591, 42593, 42593, 42595, 42595, 42597, 42597, 42599, 42599, 42601, 42601, 42603, 42603, 42605, 42605, 42606, 42607, 42608, 42609, 42610, 42611, 42612, 42613, 42614, 42615, 42616, 42617, 42618, 42619, 42620, 42621, 42622, 42623, 
        42625, 42625, 42627, 42627, 42629, 42629, 42631, 42631, 42633, 42633, 42635, 42635, 42637, 42637, 42639, 42639, 42641, 42641, 42643, 42643, 42645, 42645, 42647, 42647, 42648, 42649, 42650, 42651, 42652, 42653, 42654, 42655, 42656, 42657, 42658, 42659, 42660, 42661, 42662, 42663, 42664, 42665, 42666, 42667, 42668, 42669, 42670, 42671, 42672, 42673, 42674, 42675, 42676, 42677, 42678, 42679, 42680, 42681, 42682, 42683, 42684, 42685, 42686, 42687, 
        42688, 42689, 42690, 42691, 42692, 42693, 42694, 42695, 42696, 42697, 42698, 42699, 42700, 42701, 42702, 42703, 42704, 42705, 42706, 42707, 42708, 42709, 42710, 42711, 42712, 42713, 42714, 42715, 42716, 42717, 42718, 42719, 42720, 42721, 42722, 42723, 42724, 42725, 42726, 42727, 42728, 42729, 42730, 42731, 42732, 42733, 42734, 42735, 42736, 42737, 42738, 42739, 42740, 42741, 42742, 42743, 42744, 42745, 42746, 42747, 42748, 42749, 42750, 42751, 
        42752, 42753, 42754, 42755, 42756, 42757, 42758, 42759, 42760, 42761, 42762, 42763, 42764, 42765, 42766, 42767, 42768, 42769, 42770, 42771, 42772, 42773, 42774, 42775, 42776, 42777, 42778, 42779, 42780, 42781, 42782, 42783, 42784, 42785, 42787, 42787, 42789, 42789, 42791, 42791, 42793, 42793, 42795, 42795, 42797, 42797, 42799, 42799, 42800, 42801, 42803, 42803, 42805, 42805, 42807, 42807, 42809, 42809, 42811, 42811, 42813, 42813, 42815, 42815, 
        42817, 42817, 42819, 42819, 42821, 42821, 42823, 42823, 42825, 42825, 42827, 42827, 42829, 42829, 42831, 42831, 42833, 42833, 42835, 42835, 42837, 42837, 42839, 42839, 42841, 42841, 42843, 42843, 42845, 42845, 42847, 42847, 42849, 42849, 42851, 42851, 42853, 42853, 42855, 42855, 42857, 42857, 42859, 42859, 42861, 42861, 42863, 42863, 42864, 42865, 42866, 42867, 42868, 42869, 42870, 42871, 42872, 42874, 42874, 42876, 42876, 7545, 42879, 42879, 
        42881, 42881, 42883, 42883, 42885, 42885, 42887, 42887, 42888, 42889, 42890, 42892, 42892, 613, 42894, 42895, 42897, 42897, 42899, 42899, 42900, 42901, 42902, 42903, 42904, 42905, 42906, 42907, 42908, 42909, 42910, 42911, 42913, 42913, 42915, 42915, 42917, 42917, 42919, 42919, 42921, 42921, 614);
    Char::l65313_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 26, 65345, 65346, 65347, 65348, 65349, 65350, 65351, 65352, 65353, 65354, 65355, 65356, 65357, 65358, 65359, 65360, 65361, 65362, 65363, 65364, 65365, 65366, 65367, 65368, 65369, 65370);
    Char::u97_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 1318, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 
        161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 924, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 192, 
        193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 247, 216, 217, 218, 219, 220, 221, 222, 376, 256, 256, 258, 258, 260, 260, 262, 262, 264, 264, 266, 266, 268, 268, 270, 270, 272, 272, 274, 274, 276, 276, 278, 278, 280, 280, 282, 282, 284, 284, 286, 286, 288, 
        288, 290, 290, 292, 292, 294, 294, 296, 296, 298, 298, 300, 300, 302, 302, 304, 73, 306, 306, 308, 308, 310, 310, 312, 313, 313, 315, 315, 317, 317, 319, 319, 321, 321, 323, 323, 325, 325, 327, 327, 329, 330, 330, 332, 332, 334, 334, 336, 336, 338, 338, 340, 340, 342, 342, 344, 344, 346, 346, 348, 348, 350, 350, 352, 
        352, 354, 354, 356, 356, 358, 358, 360, 360, 362, 362, 364, 364, 366, 366, 368, 368, 370, 370, 372, 372, 374, 374, 376, 377, 377, 379, 379, 381, 381, 83, 579, 385, 386, 386, 388, 388, 390, 391, 391, 393, 394, 395, 395, 397, 398, 399, 400, 401, 401, 403, 404, 502, 406, 407, 408, 408, 573, 411, 412, 413, 544, 415, 416, 
        416, 418, 418, 420, 420, 422, 423, 423, 425, 426, 427, 428, 428, 430, 431, 431, 433, 434, 435, 435, 437, 437, 439, 440, 440, 442, 443, 444, 444, 446, 503, 448, 449, 450, 451, 452, 452, 452, 455, 455, 455, 458, 458, 458, 461, 461, 463, 463, 465, 465, 467, 467, 469, 469, 471, 471, 473, 473, 475, 475, 398, 478, 478, 480, 
        480, 482, 482, 484, 484, 486, 486, 488, 488, 490, 490, 492, 492, 494, 494, 496, 497, 497, 497, 500, 500, 502, 503, 504, 504, 506, 506, 508, 508, 510, 510, 512, 512, 514, 514, 516, 516, 518, 518, 520, 520, 522, 522, 524, 524, 526, 526, 528, 528, 530, 530, 532, 532, 534, 534, 536, 536, 538, 538, 540, 540, 542, 542, 544, 
        545, 546, 546, 548, 548, 550, 550, 552, 552, 554, 554, 556, 556, 558, 558, 560, 560, 562, 562, 564, 565, 566, 567, 568, 569, 570, 571, 571, 573, 574, 11390, 11391, 577, 577, 579, 580, 581, 582, 582, 584, 584, 586, 586, 588, 588, 590, 590, 11375, 11373, 11376, 385, 390, 597, 393, 394, 600, 399, 602, 400, 604, 605, 606, 607, 403, 
        609, 610, 404, 612, 42893, 42922, 615, 407, 406, 618, 11362, 620, 621, 622, 412, 624, 11374, 413, 627, 628, 415, 630, 631, 632, 633, 634, 635, 636, 11364, 638, 639, 422, 641, 642, 425, 644, 645, 646, 647, 430, 580, 433, 434, 581, 653, 654, 655, 656, 657, 439, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 
        673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 
        737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 
        801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 816, 817, 818, 819, 820, 821, 822, 823, 824, 825, 826, 827, 828, 829, 830, 831, 832, 833, 834, 835, 836, 921, 838, 839, 840, 841, 842, 843, 844, 845, 846, 847, 848, 849, 850, 851, 852, 853, 854, 855, 856, 857, 858, 859, 860, 861, 862, 863, 864, 
        865, 866, 867, 868, 869, 870, 871, 872, 873, 874, 875, 876, 877, 878, 879, 880, 880, 882, 882, 884, 885, 886, 886, 888, 889, 890, 1021, 1022, 1023, 894, 895, 896, 897, 898, 899, 900, 901, 902, 903, 904, 905, 906, 907, 908, 909, 910, 911, 912, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 
        929, 930, 931, 932, 933, 934, 935, 936, 937, 938, 939, 902, 904, 905, 906, 944, 913, 914, 915, 916, 917, 918, 919, 920, 921, 922, 923, 924, 925, 926, 927, 928, 929, 931, 931, 932, 933, 934, 935, 936, 937, 938, 939, 908, 910, 911, 975, 914, 920, 978, 979, 980, 934, 928, 975, 984, 984, 986, 986, 988, 988, 990, 990, 992, 
        992, 994, 994, 996, 996, 998, 998, 1000, 1000, 1002, 1002, 1004, 1004, 1006, 1006, 922, 929, 1017, 1011, 1012, 917, 1014, 1015, 1015, 1017, 1018, 1018, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 
        1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1120, 
        1120, 1122, 1122, 1124, 1124, 1126, 1126, 1128, 1128, 1130, 1130, 1132, 1132, 1134, 1134, 1136, 1136, 1138, 1138, 1140, 1140, 1142, 1142, 1144, 1144, 1146, 1146, 1148, 1148, 1150, 1150, 1152, 1152, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161, 1162, 1162, 1164, 1164, 1166, 1166, 1168, 1168, 1170, 1170, 1172, 1172, 1174, 1174, 1176, 1176, 1178, 1178, 1180, 1180, 1182, 1182, 1184, 
        1184, 1186, 1186, 1188, 1188, 1190, 1190, 1192, 1192, 1194, 1194, 1196, 1196, 1198, 1198, 1200, 1200, 1202, 1202, 1204, 1204, 1206, 1206, 1208, 1208, 1210, 1210, 1212, 1212, 1214, 1214, 1216, 1217, 1217, 1219, 1219, 1221, 1221, 1223, 1223, 1225, 1225, 1227, 1227, 1229, 1229, 1216, 1232, 1232, 1234, 1234, 1236, 1236, 1238, 1238, 1240, 1240, 1242, 1242, 1244, 1244, 1246, 1246, 1248, 
        1248, 1250, 1250, 1252, 1252, 1254, 1254, 1256, 1256, 1258, 1258, 1260, 1260, 1262, 1262, 1264, 1264, 1266, 1266, 1268, 1268, 1270, 1270, 1272, 1272, 1274, 1274, 1276, 1276, 1278, 1278, 1280, 1280, 1282, 1282, 1284, 1284, 1286, 1286, 1288, 1288, 1290, 1290, 1292, 1292, 1294, 1294, 1296, 1296, 1298, 1298, 1300, 1300, 1302, 1302, 1304, 1304, 1306, 1306, 1308, 1308, 1310, 1310, 1312, 
        1312, 1314, 1314, 1316, 1316, 1318, 1318, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 
        1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366);
    Char::u7545_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 1905, 42877, 7546, 7547, 7548, 11363, 7550, 7551, 7552, 7553, 7554, 7555, 7556, 7557, 7558, 7559, 7560, 7561, 7562, 7563, 7564, 7565, 7566, 7567, 7568, 7569, 7570, 7571, 7572, 7573, 7574, 7575, 7576, 7577, 7578, 7579, 7580, 7581, 7582, 7583, 7584, 7585, 7586, 7587, 7588, 7589, 7590, 7591, 7592, 7593, 7594, 7595, 7596, 7597, 7598, 7599, 7600, 7601, 7602, 7603, 7604, 7605, 7606, 7607, 7608, 
        7609, 7610, 7611, 7612, 7613, 7614, 7615, 7616, 7617, 7618, 7619, 7620, 7621, 7622, 7623, 7624, 7625, 7626, 7627, 7628, 7629, 7630, 7631, 7632, 7633, 7634, 7635, 7636, 7637, 7638, 7639, 7640, 7641, 7642, 7643, 7644, 7645, 7646, 7647, 7648, 7649, 7650, 7651, 7652, 7653, 7654, 7655, 7656, 7657, 7658, 7659, 7660, 7661, 7662, 7663, 7664, 7665, 7666, 7667, 7668, 7669, 7670, 7671, 7672, 
        7673, 7674, 7675, 7676, 7677, 7678, 7679, 7680, 7680, 7682, 7682, 7684, 7684, 7686, 7686, 7688, 7688, 7690, 7690, 7692, 7692, 7694, 7694, 7696, 7696, 7698, 7698, 7700, 7700, 7702, 7702, 7704, 7704, 7706, 7706, 7708, 7708, 7710, 7710, 7712, 7712, 7714, 7714, 7716, 7716, 7718, 7718, 7720, 7720, 7722, 7722, 7724, 7724, 7726, 7726, 7728, 7728, 7730, 7730, 7732, 7732, 7734, 7734, 7736, 
        7736, 7738, 7738, 7740, 7740, 7742, 7742, 7744, 7744, 7746, 7746, 7748, 7748, 7750, 7750, 7752, 7752, 7754, 7754, 7756, 7756, 7758, 7758, 7760, 7760, 7762, 7762, 7764, 7764, 7766, 7766, 7768, 7768, 7770, 7770, 7772, 7772, 7774, 7774, 7776, 7776, 7778, 7778, 7780, 7780, 7782, 7782, 7784, 7784, 7786, 7786, 7788, 7788, 7790, 7790, 7792, 7792, 7794, 7794, 7796, 7796, 7798, 7798, 7800, 
        7800, 7802, 7802, 7804, 7804, 7806, 7806, 7808, 7808, 7810, 7810, 7812, 7812, 7814, 7814, 7816, 7816, 7818, 7818, 7820, 7820, 7822, 7822, 7824, 7824, 7826, 7826, 7828, 7828, 7830, 7831, 7832, 7833, 7834, 7776, 7836, 7837, 7838, 7839, 7840, 7840, 7842, 7842, 7844, 7844, 7846, 7846, 7848, 7848, 7850, 7850, 7852, 7852, 7854, 7854, 7856, 7856, 7858, 7858, 7860, 7860, 7862, 7862, 7864, 
        7864, 7866, 7866, 7868, 7868, 7870, 7870, 7872, 7872, 7874, 7874, 7876, 7876, 7878, 7878, 7880, 7880, 7882, 7882, 7884, 7884, 7886, 7886, 7888, 7888, 7890, 7890, 7892, 7892, 7894, 7894, 7896, 7896, 7898, 7898, 7900, 7900, 7902, 7902, 7904, 7904, 7906, 7906, 7908, 7908, 7910, 7910, 7912, 7912, 7914, 7914, 7916, 7916, 7918, 7918, 7920, 7920, 7922, 7922, 7924, 7924, 7926, 7926, 7928, 
        7928, 7930, 7930, 7932, 7932, 7934, 7934, 7944, 7945, 7946, 7947, 7948, 7949, 7950, 7951, 7944, 7945, 7946, 7947, 7948, 7949, 7950, 7951, 7960, 7961, 7962, 7963, 7964, 7965, 7958, 7959, 7960, 7961, 7962, 7963, 7964, 7965, 7966, 7967, 7976, 7977, 7978, 7979, 7980, 7981, 7982, 7983, 7976, 7977, 7978, 7979, 7980, 7981, 7982, 7983, 7992, 7993, 7994, 7995, 7996, 7997, 7998, 7999, 7992, 
        7993, 7994, 7995, 7996, 7997, 7998, 7999, 8008, 8009, 8010, 8011, 8012, 8013, 8006, 8007, 8008, 8009, 8010, 8011, 8012, 8013, 8014, 8015, 8016, 8025, 8018, 8027, 8020, 8029, 8022, 8031, 8024, 8025, 8026, 8027, 8028, 8029, 8030, 8031, 8040, 8041, 8042, 8043, 8044, 8045, 8046, 8047, 8040, 8041, 8042, 8043, 8044, 8045, 8046, 8047, 8122, 8123, 8136, 8137, 8138, 8139, 8154, 8155, 8184, 
        8185, 8170, 8171, 8186, 8187, 8062, 8063, 8072, 8073, 8074, 8075, 8076, 8077, 8078, 8079, 8072, 8073, 8074, 8075, 8076, 8077, 8078, 8079, 8088, 8089, 8090, 8091, 8092, 8093, 8094, 8095, 8088, 8089, 8090, 8091, 8092, 8093, 8094, 8095, 8104, 8105, 8106, 8107, 8108, 8109, 8110, 8111, 8104, 8105, 8106, 8107, 8108, 8109, 8110, 8111, 8120, 8121, 8114, 8124, 8116, 8117, 8118, 8119, 8120, 
        8121, 8122, 8123, 8124, 8125, 921, 8127, 8128, 8129, 8130, 8140, 8132, 8133, 8134, 8135, 8136, 8137, 8138, 8139, 8140, 8141, 8142, 8143, 8152, 8153, 8146, 8147, 8148, 8149, 8150, 8151, 8152, 8153, 8154, 8155, 8156, 8157, 8158, 8159, 8168, 8169, 8162, 8163, 8164, 8172, 8166, 8167, 8168, 8169, 8170, 8171, 8172, 8173, 8174, 8175, 8176, 8177, 8178, 8188, 8180, 8181, 8182, 8183, 8184, 
        8185, 8186, 8187, 8188, 8189, 8190, 8191, 8192, 8193, 8194, 8195, 8196, 8197, 8198, 8199, 8200, 8201, 8202, 8203, 8204, 8205, 8206, 8207, 8208, 8209, 8210, 8211, 8212, 8213, 8214, 8215, 8216, 8217, 8218, 8219, 8220, 8221, 8222, 8223, 8224, 8225, 8226, 8227, 8228, 8229, 8230, 8231, 8232, 8233, 8234, 8235, 8236, 8237, 8238, 8239, 8240, 8241, 8242, 8243, 8244, 8245, 8246, 8247, 8248, 
        8249, 8250, 8251, 8252, 8253, 8254, 8255, 8256, 8257, 8258, 8259, 8260, 8261, 8262, 8263, 8264, 8265, 8266, 8267, 8268, 8269, 8270, 8271, 8272, 8273, 8274, 8275, 8276, 8277, 8278, 8279, 8280, 8281, 8282, 8283, 8284, 8285, 8286, 8287, 8288, 8289, 8290, 8291, 8292, 8293, 8294, 8295, 8296, 8297, 8298, 8299, 8300, 8301, 8302, 8303, 8304, 8305, 8306, 8307, 8308, 8309, 8310, 8311, 8312, 
        8313, 8314, 8315, 8316, 8317, 8318, 8319, 8320, 8321, 8322, 8323, 8324, 8325, 8326, 8327, 8328, 8329, 8330, 8331, 8332, 8333, 8334, 8335, 8336, 8337, 8338, 8339, 8340, 8341, 8342, 8343, 8344, 8345, 8346, 8347, 8348, 8349, 8350, 8351, 8352, 8353, 8354, 8355, 8356, 8357, 8358, 8359, 8360, 8361, 8362, 8363, 8364, 8365, 8366, 8367, 8368, 8369, 8370, 8371, 8372, 8373, 8374, 8375, 8376, 
        8377, 8378, 8379, 8380, 8381, 8382, 8383, 8384, 8385, 8386, 8387, 8388, 8389, 8390, 8391, 8392, 8393, 8394, 8395, 8396, 8397, 8398, 8399, 8400, 8401, 8402, 8403, 8404, 8405, 8406, 8407, 8408, 8409, 8410, 8411, 8412, 8413, 8414, 8415, 8416, 8417, 8418, 8419, 8420, 8421, 8422, 8423, 8424, 8425, 8426, 8427, 8428, 8429, 8430, 8431, 8432, 8433, 8434, 8435, 8436, 8437, 8438, 8439, 8440, 
        8441, 8442, 8443, 8444, 8445, 8446, 8447, 8448, 8449, 8450, 8451, 8452, 8453, 8454, 8455, 8456, 8457, 8458, 8459, 8460, 8461, 8462, 8463, 8464, 8465, 8466, 8467, 8468, 8469, 8470, 8471, 8472, 8473, 8474, 8475, 8476, 8477, 8478, 8479, 8480, 8481, 8482, 8483, 8484, 8485, 8486, 8487, 8488, 8489, 8490, 8491, 8492, 8493, 8494, 8495, 8496, 8497, 8498, 8499, 8500, 8501, 8502, 8503, 8504, 
        8505, 8506, 8507, 8508, 8509, 8510, 8511, 8512, 8513, 8514, 8515, 8516, 8517, 8518, 8519, 8520, 8521, 8522, 8523, 8524, 8525, 8498, 8527, 8528, 8529, 8530, 8531, 8532, 8533, 8534, 8535, 8536, 8537, 8538, 8539, 8540, 8541, 8542, 8543, 8544, 8545, 8546, 8547, 8548, 8549, 8550, 8551, 8552, 8553, 8554, 8555, 8556, 8557, 8558, 8559, 8544, 8545, 8546, 8547, 8548, 8549, 8550, 8551, 8552, 
        8553, 8554, 8555, 8556, 8557, 8558, 8559, 8576, 8577, 8578, 8579, 8579, 8581, 8582, 8583, 8584, 8585, 8586, 8587, 8588, 8589, 8590, 8591, 8592, 8593, 8594, 8595, 8596, 8597, 8598, 8599, 8600, 8601, 8602, 8603, 8604, 8605, 8606, 8607, 8608, 8609, 8610, 8611, 8612, 8613, 8614, 8615, 8616, 8617, 8618, 8619, 8620, 8621, 8622, 8623, 8624, 8625, 8626, 8627, 8628, 8629, 8630, 8631, 8632, 
        8633, 8634, 8635, 8636, 8637, 8638, 8639, 8640, 8641, 8642, 8643, 8644, 8645, 8646, 8647, 8648, 8649, 8650, 8651, 8652, 8653, 8654, 8655, 8656, 8657, 8658, 8659, 8660, 8661, 8662, 8663, 8664, 8665, 8666, 8667, 8668, 8669, 8670, 8671, 8672, 8673, 8674, 8675, 8676, 8677, 8678, 8679, 8680, 8681, 8682, 8683, 8684, 8685, 8686, 8687, 8688, 8689, 8690, 8691, 8692, 8693, 8694, 8695, 8696, 
        8697, 8698, 8699, 8700, 8701, 8702, 8703, 8704, 8705, 8706, 8707, 8708, 8709, 8710, 8711, 8712, 8713, 8714, 8715, 8716, 8717, 8718, 8719, 8720, 8721, 8722, 8723, 8724, 8725, 8726, 8727, 8728, 8729, 8730, 8731, 8732, 8733, 8734, 8735, 8736, 8737, 8738, 8739, 8740, 8741, 8742, 8743, 8744, 8745, 8746, 8747, 8748, 8749, 8750, 8751, 8752, 8753, 8754, 8755, 8756, 8757, 8758, 8759, 8760, 
        8761, 8762, 8763, 8764, 8765, 8766, 8767, 8768, 8769, 8770, 8771, 8772, 8773, 8774, 8775, 8776, 8777, 8778, 8779, 8780, 8781, 8782, 8783, 8784, 8785, 8786, 8787, 8788, 8789, 8790, 8791, 8792, 8793, 8794, 8795, 8796, 8797, 8798, 8799, 8800, 8801, 8802, 8803, 8804, 8805, 8806, 8807, 8808, 8809, 8810, 8811, 8812, 8813, 8814, 8815, 8816, 8817, 8818, 8819, 8820, 8821, 8822, 8823, 8824, 
        8825, 8826, 8827, 8828, 8829, 8830, 8831, 8832, 8833, 8834, 8835, 8836, 8837, 8838, 8839, 8840, 8841, 8842, 8843, 8844, 8845, 8846, 8847, 8848, 8849, 8850, 8851, 8852, 8853, 8854, 8855, 8856, 8857, 8858, 8859, 8860, 8861, 8862, 8863, 8864, 8865, 8866, 8867, 8868, 8869, 8870, 8871, 8872, 8873, 8874, 8875, 8876, 8877, 8878, 8879, 8880, 8881, 8882, 8883, 8884, 8885, 8886, 8887, 8888, 
        8889, 8890, 8891, 8892, 8893, 8894, 8895, 8896, 8897, 8898, 8899, 8900, 8901, 8902, 8903, 8904, 8905, 8906, 8907, 8908, 8909, 8910, 8911, 8912, 8913, 8914, 8915, 8916, 8917, 8918, 8919, 8920, 8921, 8922, 8923, 8924, 8925, 8926, 8927, 8928, 8929, 8930, 8931, 8932, 8933, 8934, 8935, 8936, 8937, 8938, 8939, 8940, 8941, 8942, 8943, 8944, 8945, 8946, 8947, 8948, 8949, 8950, 8951, 8952, 
        8953, 8954, 8955, 8956, 8957, 8958, 8959, 8960, 8961, 8962, 8963, 8964, 8965, 8966, 8967, 8968, 8969, 8970, 8971, 8972, 8973, 8974, 8975, 8976, 8977, 8978, 8979, 8980, 8981, 8982, 8983, 8984, 8985, 8986, 8987, 8988, 8989, 8990, 8991, 8992, 8993, 8994, 8995, 8996, 8997, 8998, 8999, 9000, 9001, 9002, 9003, 9004, 9005, 9006, 9007, 9008, 9009, 9010, 9011, 9012, 9013, 9014, 9015, 9016, 
        9017, 9018, 9019, 9020, 9021, 9022, 9023, 9024, 9025, 9026, 9027, 9028, 9029, 9030, 9031, 9032, 9033, 9034, 9035, 9036, 9037, 9038, 9039, 9040, 9041, 9042, 9043, 9044, 9045, 9046, 9047, 9048, 9049, 9050, 9051, 9052, 9053, 9054, 9055, 9056, 9057, 9058, 9059, 9060, 9061, 9062, 9063, 9064, 9065, 9066, 9067, 9068, 9069, 9070, 9071, 9072, 9073, 9074, 9075, 9076, 9077, 9078, 9079, 9080, 
        9081, 9082, 9083, 9084, 9085, 9086, 9087, 9088, 9089, 9090, 9091, 9092, 9093, 9094, 9095, 9096, 9097, 9098, 9099, 9100, 9101, 9102, 9103, 9104, 9105, 9106, 9107, 9108, 9109, 9110, 9111, 9112, 9113, 9114, 9115, 9116, 9117, 9118, 9119, 9120, 9121, 9122, 9123, 9124, 9125, 9126, 9127, 9128, 9129, 9130, 9131, 9132, 9133, 9134, 9135, 9136, 9137, 9138, 9139, 9140, 9141, 9142, 9143, 9144, 
        9145, 9146, 9147, 9148, 9149, 9150, 9151, 9152, 9153, 9154, 9155, 9156, 9157, 9158, 9159, 9160, 9161, 9162, 9163, 9164, 9165, 9166, 9167, 9168, 9169, 9170, 9171, 9172, 9173, 9174, 9175, 9176, 9177, 9178, 9179, 9180, 9181, 9182, 9183, 9184, 9185, 9186, 9187, 9188, 9189, 9190, 9191, 9192, 9193, 9194, 9195, 9196, 9197, 9198, 9199, 9200, 9201, 9202, 9203, 9204, 9205, 9206, 9207, 9208, 
        9209, 9210, 9211, 9212, 9213, 9214, 9215, 9216, 9217, 9218, 9219, 9220, 9221, 9222, 9223, 9224, 9225, 9226, 9227, 9228, 9229, 9230, 9231, 9232, 9233, 9234, 9235, 9236, 9237, 9238, 9239, 9240, 9241, 9242, 9243, 9244, 9245, 9246, 9247, 9248, 9249, 9250, 9251, 9252, 9253, 9254, 9255, 9256, 9257, 9258, 9259, 9260, 9261, 9262, 9263, 9264, 9265, 9266, 9267, 9268, 9269, 9270, 9271, 9272, 
        9273, 9274, 9275, 9276, 9277, 9278, 9279, 9280, 9281, 9282, 9283, 9284, 9285, 9286, 9287, 9288, 9289, 9290, 9291, 9292, 9293, 9294, 9295, 9296, 9297, 9298, 9299, 9300, 9301, 9302, 9303, 9304, 9305, 9306, 9307, 9308, 9309, 9310, 9311, 9312, 9313, 9314, 9315, 9316, 9317, 9318, 9319, 9320, 9321, 9322, 9323, 9324, 9325, 9326, 9327, 9328, 9329, 9330, 9331, 9332, 9333, 9334, 9335, 9336, 
        9337, 9338, 9339, 9340, 9341, 9342, 9343, 9344, 9345, 9346, 9347, 9348, 9349, 9350, 9351, 9352, 9353, 9354, 9355, 9356, 9357, 9358, 9359, 9360, 9361, 9362, 9363, 9364, 9365, 9366, 9367, 9368, 9369, 9370, 9371, 9372, 9373, 9374, 9375, 9376, 9377, 9378, 9379, 9380, 9381, 9382, 9383, 9384, 9385, 9386, 9387, 9388, 9389, 9390, 9391, 9392, 9393, 9394, 9395, 9396, 9397, 9398, 9399, 9400, 
        9401, 9402, 9403, 9404, 9405, 9406, 9407, 9408, 9409, 9410, 9411, 9412, 9413, 9414, 9415, 9416, 9417, 9418, 9419, 9420, 9421, 9422, 9423, 9398, 9399, 9400, 9401, 9402, 9403, 9404, 9405, 9406, 9407, 9408, 9409, 9410, 9411, 9412, 9413, 9414, 9415, 9416, 9417, 9418, 9419, 9420, 9421, 9422, 9423);
    Char::u11312_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 254, 11264, 11265, 11266, 11267, 11268, 11269, 11270, 11271, 11272, 11273, 11274, 11275, 11276, 11277, 11278, 11279, 11280, 11281, 11282, 11283, 11284, 11285, 11286, 11287, 11288, 11289, 11290, 11291, 11292, 11293, 11294, 11295, 11296, 11297, 11298, 11299, 11300, 11301, 11302, 11303, 11304, 11305, 11306, 11307, 11308, 11309, 11310, 11359, 11360, 11360, 11362, 11363, 11364, 570, 574, 11367, 11367, 11369, 11369, 11371, 11371, 11373, 11374, 11375, 
        11376, 11377, 11378, 11378, 11380, 11381, 11381, 11383, 11384, 11385, 11386, 11387, 11388, 11389, 11390, 11391, 11392, 11392, 11394, 11394, 11396, 11396, 11398, 11398, 11400, 11400, 11402, 11402, 11404, 11404, 11406, 11406, 11408, 11408, 11410, 11410, 11412, 11412, 11414, 11414, 11416, 11416, 11418, 11418, 11420, 11420, 11422, 11422, 11424, 11424, 11426, 11426, 11428, 11428, 11430, 11430, 11432, 11432, 11434, 11434, 11436, 11436, 11438, 11438, 
        11440, 11440, 11442, 11442, 11444, 11444, 11446, 11446, 11448, 11448, 11450, 11450, 11452, 11452, 11454, 11454, 11456, 11456, 11458, 11458, 11460, 11460, 11462, 11462, 11464, 11464, 11466, 11466, 11468, 11468, 11470, 11470, 11472, 11472, 11474, 11474, 11476, 11476, 11478, 11478, 11480, 11480, 11482, 11482, 11484, 11484, 11486, 11486, 11488, 11488, 11490, 11490, 11492, 11493, 11494, 11495, 11496, 11497, 11498, 11499, 11499, 11501, 11501, 11503, 
        11504, 11505, 11506, 11506, 11508, 11509, 11510, 11511, 11512, 11513, 11514, 11515, 11516, 11517, 11518, 11519, 4256, 4257, 4258, 4259, 4260, 4261, 4262, 4263, 4264, 4265, 4266, 4267, 4268, 4269, 4270, 4271, 4272, 4273, 4274, 4275, 4276, 4277, 4278, 4279, 4280, 4281, 4282, 4283, 4284, 4285, 4286, 4287, 4288, 4289, 4290, 4291, 4292, 4293, 11558, 4295, 11560, 11561, 11562, 11563, 11564, 4301);
    Char::u42561_ = uArray::Init<int32_t>(::TYPES[7/*int[]*/], 361, 42560, 42562, 42562, 42564, 42564, 42566, 42566, 42568, 42568, 42570, 42570, 42572, 42572, 42574, 42574, 42576, 42576, 42578, 42578, 42580, 42580, 42582, 42582, 42584, 42584, 42586, 42586, 42588, 42588, 42590, 42590, 42592, 42592, 42594, 42594, 42596, 42596, 42598, 42598, 42600, 42600, 42602, 42602, 42604, 42604, 42606, 42607, 42608, 42609, 42610, 42611, 42612, 42613, 42614, 42615, 42616, 42617, 42618, 42619, 42620, 42621, 42622, 42623, 42624, 
        42624, 42626, 42626, 42628, 42628, 42630, 42630, 42632, 42632, 42634, 42634, 42636, 42636, 42638, 42638, 42640, 42640, 42642, 42642, 42644, 42644, 42646, 42646, 42648, 42649, 42650, 42651, 42652, 42653, 42654, 42655, 42656, 42657, 42658, 42659, 42660, 42661, 42662, 42663, 42664, 42665, 42666, 42667, 42668, 42669, 42670, 42671, 42672, 42673, 42674, 42675, 42676, 42677, 42678, 42679, 42680, 42681, 42682, 42683, 42684, 42685, 42686, 42687, 42688, 
        42689, 42690, 42691, 42692, 42693, 42694, 42695, 42696, 42697, 42698, 42699, 42700, 42701, 42702, 42703, 42704, 42705, 42706, 42707, 42708, 42709, 42710, 42711, 42712, 42713, 42714, 42715, 42716, 42717, 42718, 42719, 42720, 42721, 42722, 42723, 42724, 42725, 42726, 42727, 42728, 42729, 42730, 42731, 42732, 42733, 42734, 42735, 42736, 42737, 42738, 42739, 42740, 42741, 42742, 42743, 42744, 42745, 42746, 42747, 42748, 42749, 42750, 42751, 42752, 
        42753, 42754, 42755, 42756, 42757, 42758, 42759, 42760, 42761, 42762, 42763, 42764, 42765, 42766, 42767, 42768, 42769, 42770, 42771, 42772, 42773, 42774, 42775, 42776, 42777, 42778, 42779, 42780, 42781, 42782, 42783, 42784, 42785, 42786, 42786, 42788, 42788, 42790, 42790, 42792, 42792, 42794, 42794, 42796, 42796, 42798, 42798, 42800, 42801, 42802, 42802, 42804, 42804, 42806, 42806, 42808, 42808, 42810, 42810, 42812, 42812, 42814, 42814, 42816, 
        42816, 42818, 42818, 42820, 42820, 42822, 42822, 42824, 42824, 42826, 42826, 42828, 42828, 42830, 42830, 42832, 42832, 42834, 42834, 42836, 42836, 42838, 42838, 42840, 42840, 42842, 42842, 42844, 42844, 42846, 42846, 42848, 42848, 42850, 42850, 42852, 42852, 42854, 42854, 42856, 42856, 42858, 42858, 42860, 42860, 42862, 42862, 42864, 42865, 42866, 42867, 42868, 42869, 42870, 42871, 42872, 42873, 42873, 42875, 42875, 42877, 42878, 42878, 42880, 
        42880, 42882, 42882, 42884, 42884, 42886, 42886, 42888, 42889, 42890, 42891, 42891, 42893, 42894, 42895, 42896, 42896, 42898, 42898, 42900, 42901, 42902, 42903, 42904, 42905, 42906, 42907, 42908, 42909, 42910, 42911, 42912, 42912, 42914, 42914, 42916, 42916, 42918, 42918, 42920, 42920);
}

static void Char_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[4] = uObject_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("IsDigit", NULL, (void*)Char__IsDigit_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsUpper", NULL, (void*)Char__IsUpper_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsWhiteSpace", NULL, (void*)Char__IsWhiteSpace_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("ToLower", NULL, (void*)Char__ToLower_fn, 0, true, type, 1, type),
        new uFunction("ToUpper", NULL, (void*)Char__ToUpper_fn, 0, true, type, 1, type));
}

uStructType* Char_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(char16_t);
    options.ValueSize = sizeof(char16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Char", options);
    type->fp_build_ = Char_build;
    type->fp_cctor_ = Char__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Char__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Char__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Char__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void Char__Equals_fn(char16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<char16_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :23
void Char__GetHashCode_fn(char16_t* __this, uType* __type, int32_t* __retval)
{
    return *__retval = (int)*__this, void();
}

// public static bool IsDigit(char c) :125
void Char__IsDigit_fn(char16_t* c, bool* __retval)
{
    *__retval = Char::IsDigit(*c);
}

// public static bool IsUpper(char c) :137
void Char__IsUpper_fn(char16_t* c, bool* __retval)
{
    *__retval = Char::IsUpper(*c);
}

// public static bool IsWhiteSpace(char c) :109
void Char__IsWhiteSpace_fn(char16_t* c, bool* __retval)
{
    *__retval = Char::IsWhiteSpace(*c);
}

// public static char ToLower(char c) :85
void Char__ToLower_fn(char16_t* c, char16_t* __retval)
{
    *__retval = Char::ToLower(*c);
}

// public override sealed string ToString() :34
void Char__ToString_fn(char16_t* __this, uType* __type, uString** __retval)
{
    uString* result = uString::New(1);
    result->_ptr[0] = *__this;
    return *__retval = result, void();
}

// public static char ToUpper(char c) :65
void Char__ToUpper_fn(char16_t* c, char16_t* __retval)
{
    *__retval = Char::ToUpper(*c);
}

uSStrong<uArray*> Char::l65_;
uSStrong<uArray*> Char::l4256_;
uSStrong<uArray*> Char::l7680_;
uSStrong<uArray*> Char::l11246_;
uSStrong<uArray*> Char::l42560_;
uSStrong<uArray*> Char::l65313_;
uSStrong<uArray*> Char::u97_;
uSStrong<uArray*> Char::u7545_;
uSStrong<uArray*> Char::u11312_;
uSStrong<uArray*> Char::u42561_;

// public static bool IsDigit(char c) [static] :125
bool Char::IsDigit(char16_t c)
{
    Char_typeof()->Init();
    return (c >= '0') && (c <= '9');
}

// public static bool IsUpper(char c) [static] :137
bool Char::IsUpper(char16_t c)
{
    Char_typeof()->Init();
    return ((c >= 'A') && (c <= 'Z')) || ((c >= 1024) && (c <= 1071));
}

// public static bool IsWhiteSpace(char c) [static] :109
bool Char::IsWhiteSpace(char16_t c)
{
    Char_typeof()->Init();

    switch (c)
    {
        case ' ':
        case 5760:
        case 8192:
        case 8193:
        case 8194:
        case 8195:
        case 8196:
        case 8197:
        case 8198:
        case 8199:
        case 8200:
        case 8201:
        case 8202:
        case 8239:
        case 8287:
        case 12288:
        case 8232:
        case 8233:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 133:
        case 160:
            return true;
        default:
            return false;
    }
}

// public static char ToLower(char c) [static] :85
char16_t Char::ToLower(char16_t c)
{
    uStackFrame __("char", "ToLower(char)");
    Char_typeof()->Init();

    if (((int32_t)c >= 65) && ((int32_t)c <= 1366))
        return (char16_t)uPtr(Char::l65_)->Item<int32_t>((int32_t)c - 65);

    if (((int32_t)c >= 4256) && ((int32_t)c <= 4301))
        return (char16_t)uPtr(Char::l4256_)->Item<int32_t>((int32_t)c - 4256);

    if (((int32_t)c >= 7680) && ((int32_t)c <= 9423))
        return (char16_t)uPtr(Char::l7680_)->Item<int32_t>((int32_t)c - 7680);

    if (((int32_t)c >= 11246) && ((int32_t)c <= 11506))
        return (char16_t)uPtr(Char::l11246_)->Item<int32_t>((int32_t)c - 11246);

    if (((int32_t)c >= 42560) && ((int32_t)c <= 42922))
        return (char16_t)uPtr(Char::l42560_)->Item<int32_t>((int32_t)c - 42560);

    if (((int32_t)c >= 65313) && ((int32_t)c <= 65338))
        return (char16_t)uPtr(Char::l65313_)->Item<int32_t>((int32_t)c - 65313);

    return c;
}

// public static char ToUpper(char c) [static] :65
char16_t Char::ToUpper(char16_t c)
{
    uStackFrame __("char", "ToUpper(char)");
    Char_typeof()->Init();

    if (((int32_t)c >= 97) && ((int32_t)c <= 1414))
        return (char16_t)uPtr(Char::u97_)->Item<int32_t>((int32_t)c - 97);

    if (((int32_t)c >= 7545) && ((int32_t)c <= 9449))
        return (char16_t)uPtr(Char::u7545_)->Item<int32_t>((int32_t)c - 7545);

    if (((int32_t)c >= 11312) && ((int32_t)c <= 11565))
        return (char16_t)uPtr(Char::u11312_)->Item<int32_t>((int32_t)c - 11312);

    if (((int32_t)c >= 42561) && ((int32_t)c <= 42921))
        return (char16_t)uPtr(Char::u42561_)->Item<int32_t>((int32_t)c - 42561);

    return c;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Color.uno
// ----------------------------------------------------------------

// public static class Color :9
// {
// static generated Color() :9
static void Color__cctor__fn(uType* __type)
{
    Color::ToYCbCrMat_ = ::g::Uno::Float3x3__New1(0.299f, -0.168736f, 0.5f, 0.587f, -0.331264f, -0.418688f, 0.114f, 0.5f, -0.081312f);
    Color::ToYCbCrMatInv_ = ::g::Uno::Float3x3__New1(1.0f, 1.0f, 1.0f, 0.0f, -0.344136f, 1.772f, 1.402f, -0.714136f, 0.0f);
}

static void Color_build(uType* type)
{
    ::STRINGS[26] = uString::Const("failed to parse hex-string");
    ::STRINGS[27] = uString::Const("Unrecognized format");
    type->SetFields(0,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&Color::ToYCbCrMat_, uFieldFlagsStatic,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&Color::ToYCbCrMatInv_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("ToYCbCrMat", 0),
        new uField("ToYCbCrMatInv", 1));
    type->Reflection.SetFunctions(3,
        new uFunction("FromRgba", NULL, (void*)Color__FromRgba_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::UInt_typeof()),
        new uFunction("Parse", NULL, (void*)Color__Parse_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Color__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Float4_typeof()->ByRef()));
}

uClassType* Color_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Color", options);
    type->fp_build_ = Color_build;
    type->fp_cctor_ = Color__cctor__fn;
    return type;
}

// private static float4 FromInt4(int4 rgba) :39
void Color__FromInt4_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromInt4(*rgba);
}

// public static float4 FromRgba(uint rgba) :44
void Color__FromRgba_fn(uint32_t* rgba, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromRgba(*rgba);
}

// public static float4 Parse(string str) :247
void Color__Parse_fn(uString* str, ::g::Uno::Float4* __retval)
{
    *__retval = Color::Parse(str);
}

// public static bool TryParse(string str, float4& color) :263
void Color__TryParse_fn(uString* str, ::g::Uno::Float4* color, bool* __retval)
{
    *__retval = Color::TryParse(str, color);
}

// private static bool TryParseHexByte(char ch1, char ch2, int& result) :159
void Color__TryParseHexByte_fn(char16_t* ch1, char16_t* ch2, int32_t* result, bool* __retval)
{
    *__retval = Color::TryParseHexByte(*ch1, *ch2, result);
}

// private static bool TryParseHexDigit(char ch, int& result) :124
void Color__TryParseHexDigit_fn(char16_t* ch, int32_t* result, bool* __retval)
{
    *__retval = Color::TryParseHexDigit(*ch, result);
}

// private static bool TryParseHexNibble(char ch, int& result) :146
void Color__TryParseHexNibble_fn(char16_t* ch, int32_t* result, bool* __retval)
{
    *__retval = Color::TryParseHexNibble(*ch, result);
}

// private static bool TryParseHexString(string hex, int4& result) :173
void Color__TryParseHexString_fn(uString* hex, ::g::Uno::Int4* result, bool* __retval)
{
    *__retval = Color::TryParseHexString(hex, result);
}

::g::Uno::Float3x3 Color::ToYCbCrMat_;
::g::Uno::Float3x3 Color::ToYCbCrMatInv_;

// private static float4 FromInt4(int4 rgba) [static] :39
::g::Uno::Float4 Color::FromInt4(::g::Uno::Int4 rgba)
{
    Color_typeof()->Init();
    return ::g::Uno::Float4__op_Division1(::g::Uno::Float4__op_Implicit2(rgba), 255.0f);
}

// public static float4 FromRgba(uint rgba) [static] :44
::g::Uno::Float4 Color::FromRgba(uint32_t rgba)
{
    Color_typeof()->Init();
    return ::g::Uno::Float4__New2((float)((rgba >> 24) & 255U) / 255.0f, (float)((rgba >> 16) & 255U) / 255.0f, (float)((rgba >> 8) & 255U) / 255.0f, (float)((rgba >> 0) & 255U) / 255.0f);
}

// public static float4 Parse(string str) [static] :247
::g::Uno::Float4 Color::Parse(uString* str)
{
    uStackFrame __("Uno.Color", "Parse(string)");
    Color_typeof()->Init();

    if ((uPtr(str)->Length() > 0) && (uPtr(str)->Item(0) == '#'))
    {
        uString* hex = ::g::Uno::String::Substring(uPtr(str), 1);
        ::g::Uno::Int4 result;

        if (!Color::TryParseHexString(hex, &result))
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[26/*"failed to p...*/]));

        return Color::FromInt4(result);
    }

    U_THROW(::g::Uno::FormatException::New4(::STRINGS[27/*"Unrecognize...*/]));
}

// public static bool TryParse(string str, float4& color) [static] :263
bool Color::TryParse(uString* str, ::g::Uno::Float4* color)
{
    uStackFrame __("Uno.Color", "TryParse(string,float4&)");
    Color_typeof()->Init();

    if ((uPtr(str)->Length() > 0) && (uPtr(str)->Item(0) == '#'))
    {
        uString* hex = ::g::Uno::String::Substring(uPtr(str), 1);
        ::g::Uno::Int4 result;

        if (!Color::TryParseHexString(hex, &result))
        {
            *color = uDefault< ::g::Uno::Float4>();
            return false;
        }

        *color = Color::FromInt4(result);
        return true;
    }

    *color = uDefault< ::g::Uno::Float4>();
    return false;
}

// private static bool TryParseHexByte(char ch1, char ch2, int& result) [static] :159
bool Color::TryParseHexByte(char16_t ch1, char16_t ch2, int32_t* result)
{
    Color_typeof()->Init();
    int32_t v1, v2 = 0;

    if (!Color::TryParseHexDigit(ch1, &v1) || !Color::TryParseHexDigit(ch2, &v2))
    {
        *result = 0;
        return false;
    }

    *result = (v1 << 4) | v2;
    return true;
}

// private static bool TryParseHexDigit(char ch, int& result) [static] :124
bool Color::TryParseHexDigit(char16_t ch, int32_t* result)
{
    Color_typeof()->Init();

    if ((ch >= '0') && (ch <= '9'))
    {
        *result = (int32_t)ch - 48;
        return true;
    }
    else if ((ch >= 'a') && (ch <= 'f'))
    {
        *result = 10 + ((int32_t)ch - 97);
        return true;
    }
    else if ((ch >= 'A') && (ch <= 'F'))
    {
        *result = 10 + ((int32_t)ch - 65);
        return true;
    }

    *result = 0;
    return false;
}

// private static bool TryParseHexNibble(char ch, int& result) [static] :146
bool Color::TryParseHexNibble(char16_t ch, int32_t* result)
{
    Color_typeof()->Init();
    int32_t v;

    if (!Color::TryParseHexDigit(ch, &v))
    {
        *result = 0;
        return false;
    }

    *result = (v << 4) | v;
    return true;
}

// private static bool TryParseHexString(string hex, int4& result) [static] :173
bool Color::TryParseHexString(uString* hex, ::g::Uno::Int4* result)
{
    uStackFrame __("Uno.Color", "TryParseHexString(string,int4&)");
    Color_typeof()->Init();

    if (uPtr(hex)->Length() == 3)
    {
        int32_t r, g = 0, b = 0;

        if ((!Color::TryParseHexNibble(uPtr(hex)->Item(0), &r) || !Color::TryParseHexNibble(uPtr(hex)->Item(1), &g)) || !Color::TryParseHexNibble(uPtr(hex)->Item(2), &b))
        {
            *result = uDefault< ::g::Uno::Int4>();
            return false;
        }

        *result = ::g::Uno::Int4__New2(r, g, b, 255);
        return true;
    }
    else if (uPtr(hex)->Length() == 4)
    {
        int32_t r1, g1 = 0, b1 = 0, a = 0;

        if (((!Color::TryParseHexNibble(uPtr(hex)->Item(0), &r1) || !Color::TryParseHexNibble(uPtr(hex)->Item(1), &g1)) || !Color::TryParseHexNibble(uPtr(hex)->Item(2), &b1)) || !Color::TryParseHexNibble(uPtr(hex)->Item(3), &a))
        {
            *result = uDefault< ::g::Uno::Int4>();
            return false;
        }

        *result = ::g::Uno::Int4__New2(r1, g1, b1, a);
        return true;
    }
    else if (uPtr(hex)->Length() == 6)
    {
        int32_t r2, g2 = 0, b2 = 0;

        if ((!Color::TryParseHexByte(uPtr(hex)->Item(0), uPtr(hex)->Item(1), &r2) || !Color::TryParseHexByte(uPtr(hex)->Item(2), uPtr(hex)->Item(3), &g2)) || !Color::TryParseHexByte(uPtr(hex)->Item(4), uPtr(hex)->Item(5), &b2))
        {
            *result = uDefault< ::g::Uno::Int4>();
            return false;
        }

        *result = ::g::Uno::Int4__New2(r2, g2, b2, 255);
        return true;
    }
    else if (uPtr(hex)->Length() == 8)
    {
        int32_t r3, g3 = 0, b3 = 0, a1 = 0;

        if (((!Color::TryParseHexByte(uPtr(hex)->Item(0), uPtr(hex)->Item(1), &r3) || !Color::TryParseHexByte(uPtr(hex)->Item(2), uPtr(hex)->Item(3), &g3)) || !Color::TryParseHexByte(uPtr(hex)->Item(4), uPtr(hex)->Item(5), &b3)) || !Color::TryParseHexByte(uPtr(hex)->Item(6), uPtr(hex)->Item(7), &a1))
        {
            *result = uDefault< ::g::Uno::Int4>();
            return false;
        }

        *result = ::g::Uno::Int4__New2(r3, g3, b3, a1);
        return true;
    }

    *result = uDefault< ::g::Uno::Int4>();
    return false;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Comparison.uno
// ---------------------------------------------------------------------

// public delegate int Comparison<T>(T a, T b) :6
uDelegateType* Comparison_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Comparison`1", 2, 1);
    type->SetSignature(::g::Uno::Int_typeof(),
        type->T(0),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/DateTime.uno
// -------------------------------------------------------------------

// public struct DateTime :13
// {
static void DateTime_build(uType* type)
{
    ::STRINGS[28] = uString::Const("/");
    ::STRINGS[29] = uString::Const(" ");
    ::STRINGS[30] = uString::Const(":");
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetDependencies(
        ::g::Uno::Time::DateTimeZone_typeof());
    type->SetFields(0,
        ::g::Uno::DateTimeKind_typeof(), offsetof(DateTime, _kind), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(DateTime, _time), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Kind", NULL, (void*)DateTime__get_Kind_fn, 0, false, ::g::Uno::DateTimeKind_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DateTime__New1_fn, 0, true, type, 2, ::g::Uno::Long_typeof(), ::g::Uno::DateTimeKind_typeof()),
        new uFunction("get_Ticks", NULL, (void*)DateTime__get_Ticks_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("ToUniversalTime", NULL, (void*)DateTime__ToUniversalTime_fn, 0, false, type, 0),
        new uFunction("get_UtcNow", NULL, (void*)DateTime__get_UtcNow_fn, 0, true, type, 0));
}

uStructType* DateTime_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.Alignment = alignof(DateTime);
    options.ValueSize = sizeof(DateTime);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.DateTime", options);
    type->fp_build_ = DateTime_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))DateTime__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))DateTime__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))DateTime__ToString_fn;
    return type;
}

// public DateTime(long ticks, Uno.DateTimeKind kind) :28
void DateTime__ctor__fn(DateTime* __this, int64_t* ticks, int32_t* kind)
{
    __this->ctor_(*ticks, *kind);
}

// internal DateTime(Uno.Time.ZonedDateTime time) :34
void DateTime__ctor_1_fn(DateTime* __this, ::g::Uno::Time::ZonedDateTime* time)
{
    __this->ctor_1(time);
}

// internal int get_Day() :74
void DateTime__get_Day_fn(DateTime* __this, int32_t* __retval)
{
    *__retval = __this->Day();
}

// private static Uno.Time.Instant get_DotNetTimeBase() :15
void DateTime__get_DotNetTimeBase_fn(::g::Uno::Time::Instant* __retval)
{
    *__retval = DateTime__DotNetTimeBase();
}

// private static Uno.Time.Duration get_DotNetTimeOffset() :19
void DateTime__get_DotNetTimeOffset_fn(::g::Uno::Time::Duration* __retval)
{
    *__retval = DateTime__DotNetTimeOffset();
}

// public override sealed bool Equals(object obj) :79
void DateTime__Equals_fn(DateTime* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.DateTime", "Equals(object)");
    return *__retval = uIs(obj, __type) && DateTime__op_Equality(*__this, uUnbox<DateTime>(__type, obj)), void();
}

// public override sealed int GetHashCode() :84
void DateTime__GetHashCode_fn(DateTime* __this, uType* __type, int32_t* __retval)
{
    uStackFrame __("Uno.DateTime", "GetHashCode()");
    int64_t t = __this->Ticks();
    return *__retval = (int32_t)(t >> 32) ^ (int32_t)t, void();
}

// internal int get_Hour() :75
void DateTime__get_Hour_fn(DateTime* __this, int32_t* __retval)
{
    *__retval = __this->Hour();
}

// private Uno.Time.ZonedDateTime InternalTimeOrDefault() :45
void DateTime__InternalTimeOrDefault_fn(DateTime* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->InternalTimeOrDefault();
}

// public Uno.DateTimeKind get_Kind() :68
void DateTime__get_Kind_fn(DateTime* __this, int32_t* __retval)
{
    *__retval = __this->Kind();
}

// internal int get_Minute() :76
void DateTime__get_Minute_fn(DateTime* __this, int32_t* __retval)
{
    *__retval = __this->Minute();
}

// internal int get_Month() :73
void DateTime__get_Month_fn(DateTime* __this, int32_t* __retval)
{
    *__retval = __this->Month();
}

// public DateTime New(long ticks, Uno.DateTimeKind kind) :28
void DateTime__New1_fn(int64_t* ticks, int32_t* kind, DateTime* __retval)
{
    *__retval = DateTime__New1(*ticks, *kind);
}

// internal DateTime New(Uno.Time.ZonedDateTime time) :34
void DateTime__New2_fn(::g::Uno::Time::ZonedDateTime* time, DateTime* __retval)
{
    *__retval = DateTime__New2(time);
}

// public static operator ==(Uno.DateTime x, Uno.DateTime y) :90
void DateTime__op_Equality_fn(DateTime* x, DateTime* y, bool* __retval)
{
    *__retval = DateTime__op_Equality(*x, *y);
}

// public static operator !=(Uno.DateTime x, Uno.DateTime y) :95
void DateTime__op_Inequality_fn(DateTime* x, DateTime* y, bool* __retval)
{
    *__retval = DateTime__op_Inequality(*x, *y);
}

// internal int get_Second() :77
void DateTime__get_Second_fn(DateTime* __this, int32_t* __retval)
{
    *__retval = __this->Second();
}

// public long get_Ticks() :70
void DateTime__get_Ticks_fn(DateTime* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public override sealed string ToString() :106
void DateTime__ToString_fn(DateTime* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.DateTime", "ToString()");

    switch (__this->_kind)
    {
        case 1:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::PadLeft1(uPtr(::g::Uno::Int::ToString(__this->Month(), ::TYPES[8/*int*/])), 2, '0'), ::STRINGS[28/*"/"*/]), ::g::Uno::String::PadLeft1(uPtr(::g::Uno::Int::ToString(__this->Day(), ::TYPES[8/*int*/])), 2, '0')), ::STRINGS[28/*"/"*/]), ::g::Uno::String::PadLeft1(uPtr(::g::Uno::Int::ToString(__this->Year(), ::TYPES[8/*int*/])), 4, '0')), ::STRINGS[29/*" "*/]), ::g::Uno::String::PadLeft1(uPtr(::g::Uno::Int::ToString(__this->Hour(), ::TYPES[8/*int*/])), 2, '0')), ::STRINGS[30/*":"*/]), ::g::Uno::String::PadLeft1(uPtr(::g::Uno::Int::ToString(__this->Minute(), ::TYPES[8/*int*/])), 2, '0')), ::STRINGS[30/*":"*/]), ::g::Uno::String::PadLeft1(uPtr(::g::Uno::Int::ToString(__this->Second(), ::TYPES[8/*int*/])), 2, '0')), void();
        default:
            U_THROW(::g::Uno::NotImplementedException::New4());
    }
}

// public Uno.DateTime ToUniversalTime() :100
void DateTime__ToUniversalTime_fn(DateTime* __this, DateTime* __retval)
{
    *__retval = __this->ToUniversalTime();
}

// public static Uno.DateTime get_UtcNow() :62
void DateTime__get_UtcNow_fn(DateTime* __retval)
{
    *__retval = DateTime__UtcNow();
}

// internal int get_Year() :72
void DateTime__get_Year_fn(DateTime* __this, int32_t* __retval)
{
    *__retval = __this->Year();
}

// public DateTime(long ticks, Uno.DateTimeKind kind) [instance] :28
void DateTime::ctor_(int64_t ticks, int32_t kind)
{
    uStackFrame __("Uno.DateTime", ".ctor(long,Uno.DateTimeKind)");
    _kind = kind;
    _time = ::g::Uno::Time::ZonedDateTime::New1(::g::Uno::Time::Instant__op_Subtraction(::g::Uno::Time::Instant__New1(ticks), DateTime__DotNetTimeOffset()), ::g::Uno::Time::DateTimeZone::Utc());
}

// internal DateTime(Uno.Time.ZonedDateTime time) [instance] :34
void DateTime::ctor_1(::g::Uno::Time::ZonedDateTime* time)
{
    uStackFrame __("Uno.DateTime", ".ctor(Uno.Time.ZonedDateTime)");
    _kind = 1;
    _time = uPtr(time)->WithZone(::g::Uno::Time::DateTimeZone::Utc());
}

// internal int get_Day() [instance] :74
int32_t DateTime::Day()
{
    uStackFrame __("Uno.DateTime", "get_Day()");
    return uPtr(InternalTimeOrDefault())->Day();
}

// internal int get_Hour() [instance] :75
int32_t DateTime::Hour()
{
    uStackFrame __("Uno.DateTime", "get_Hour()");
    return uPtr(InternalTimeOrDefault())->Hour();
}

// private Uno.Time.ZonedDateTime InternalTimeOrDefault() [instance] :45
::g::Uno::Time::ZonedDateTime* DateTime::InternalTimeOrDefault()
{
    uStackFrame __("Uno.DateTime", "InternalTimeOrDefault()");
    ::g::Uno::Time::ZonedDateTime* ind1;
    ind1 = _time;
    return (ind1 != NULL) ? ind1 : (::g::Uno::Time::ZonedDateTime*)::g::Uno::Time::ZonedDateTime::New1(DateTime__DotNetTimeBase(), ::g::Uno::Time::DateTimeZone::Utc());
}

// public Uno.DateTimeKind get_Kind() [instance] :68
int32_t DateTime::Kind()
{
    return _kind;
}

// internal int get_Minute() [instance] :76
int32_t DateTime::Minute()
{
    uStackFrame __("Uno.DateTime", "get_Minute()");
    return uPtr(InternalTimeOrDefault())->Minute();
}

// internal int get_Month() [instance] :73
int32_t DateTime::Month()
{
    uStackFrame __("Uno.DateTime", "get_Month()");
    return uPtr(InternalTimeOrDefault())->Month();
}

// internal int get_Second() [instance] :77
int32_t DateTime::Second()
{
    uStackFrame __("Uno.DateTime", "get_Second()");
    return uPtr(InternalTimeOrDefault())->Second();
}

// public long get_Ticks() [instance] :70
int64_t DateTime::Ticks()
{
    uStackFrame __("Uno.DateTime", "get_Ticks()");
    return ::g::Uno::Time::Instant__op_Addition(uPtr(InternalTimeOrDefault())->Instant(), DateTime__DotNetTimeOffset()).Ticks();
}

// public Uno.DateTime ToUniversalTime() [instance] :100
DateTime DateTime::ToUniversalTime()
{
    uStackFrame __("Uno.DateTime", "ToUniversalTime()");
    return DateTime__New1(Ticks(), Kind());
}

// internal int get_Year() [instance] :72
int32_t DateTime::Year()
{
    uStackFrame __("Uno.DateTime", "get_Year()");
    return uPtr(InternalTimeOrDefault())->Year();
}

// public DateTime New(long ticks, Uno.DateTimeKind kind) [static] :28
DateTime DateTime__New1(int64_t ticks, int32_t kind)
{
    DateTime obj2;
    obj2.ctor_(ticks, kind);
    return obj2;
}

// internal DateTime New(Uno.Time.ZonedDateTime time) [static] :34
DateTime DateTime__New2(::g::Uno::Time::ZonedDateTime* time)
{
    DateTime obj3;
    obj3.ctor_1(time);
    return obj3;
}

// public static operator ==(Uno.DateTime x, Uno.DateTime y) [static] :90
bool DateTime__op_Equality(DateTime x, DateTime y)
{
    uStackFrame __("Uno.DateTime", "==(Uno.DateTime,Uno.DateTime)");
    return x.Ticks() == y.Ticks();
}

// public static operator !=(Uno.DateTime x, Uno.DateTime y) [static] :95
bool DateTime__op_Inequality(DateTime x, DateTime y)
{
    uStackFrame __("Uno.DateTime", "!=(Uno.DateTime,Uno.DateTime)");
    return !DateTime__op_Equality(x, y);
}

// private static Uno.Time.Instant get_DotNetTimeBase() [static] :15
::g::Uno::Time::Instant DateTime__DotNetTimeBase()
{
    uStackFrame __("Uno.DateTime", "get_DotNetTimeBase()");
    return ::g::Uno::Time::Instant__FromUtc(1, 1, 1, 0, 0);
}

// private static Uno.Time.Duration get_DotNetTimeOffset() [static] :19
::g::Uno::Time::Duration DateTime__DotNetTimeOffset()
{
    uStackFrame __("Uno.DateTime", "get_DotNetTimeOffset()");
    ::g::Uno::Time::Instant UnixEpoch = ::g::Uno::Time::Instant__FromUtc(1970, 1, 1, 0, 0);
    return ::g::Uno::Time::Instant__op_Subtraction1(UnixEpoch, DateTime__DotNetTimeBase());
}

// public static Uno.DateTime get_UtcNow() [static] :62
DateTime DateTime__UtcNow()
{
    uStackFrame __("Uno.DateTime", "get_UtcNow()");
    return DateTime__New2(uPtr(::g::Uno::Time::ZonedDateTime::Now())->WithZone(::g::Uno::Time::DateTimeZone::Utc()));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/DateTime.uno
// -------------------------------------------------------------------

// public enum DateTimeKind :7
uEnumType* DateTimeKind_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.DateTimeKind", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Utc", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Delegate.uno
// -------------------------------------------------------------------

// public class Delegate :8
// {
static void Delegate_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("Combine", NULL, (void*)Delegate__Combine_fn, 0, true, type, 2, type, type),
        new uFunction("Remove", NULL, (void*)Delegate__Remove_fn, 0, true, type, 2, type, type));
}

uType* Delegate_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Delegate);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Delegate", options);
    type->fp_build_ = Delegate_build;
    type->fp_ctor_ = (void*)Delegate__New1_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Delegate__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Delegate__GetHashCode_fn;
    return type;
}

// private Delegate() :10
void Delegate__ctor__fn(uDelegate* __this)
{
    Delegate::ctor_(__this);
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) :14
void Delegate__Combine_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Combine(source, value);
}

// public override sealed bool Equals(object other) :174
void Delegate__Equals_fn(uDelegate* __this, uObject* other, bool* __retval)
{
    return *__retval = uIs(other, Delegate_typeof()) && Delegate::EqualsImpl(__this, uAs<uDelegate*>(other, Delegate_typeof())), void();
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) :144
void Delegate__EqualsImpl_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::EqualsImpl(left, right);
}

// public override sealed int GetHashCode() :179
void Delegate__GetHashCode_fn(uDelegate* __this, int32_t* __retval)
{
    return *__retval = 0, void();
}

// private Delegate New() :10
void Delegate__New1_fn(uDelegate** __retval)
{
    *__retval = Delegate::New1();
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) :164
void Delegate__op_Equality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Equality(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) :169
void Delegate__op_Inequality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Inequality(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) :60
void Delegate__Remove_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Remove(source, value);
}

// private Delegate() [instance] :10
void Delegate::ctor_(uDelegate* __this)
{
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) [static] :14
uDelegate* Delegate::Combine(uDelegate* source, uDelegate* value)
{
    if (!value)
        return source;
    if (!source)
        return value;
    if (source->__type != value->__type)
        U_THROW_ICE();
    
    uDelegate copy;
    uDelegate *prev = &copy;
    
    for (uDelegate* d = value; d != NULL; d = d->_prev)
        prev = prev->_prev = d->Copy();
    
    prev->_prev = source;
    return copy._prev;
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) [static] :144
bool Delegate::EqualsImpl(uDelegate* left, uDelegate* right)
{
    return left == right || (
            left != NULL && right != NULL &&
            left->__type == right->__type &&
            left->_func == right->_func &&
            left->_this == right->_this &&
            ::g::Uno::Object::Equals1(left->_prev, right->_prev)
        );
}

// private Delegate New() [static] :10
uDelegate* Delegate::New1()
{
    uDelegate* obj1 = (uDelegate*)uNew(Delegate_typeof());
    Delegate::ctor_(obj1);
    return obj1;
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) [static] :164
bool Delegate::op_Equality(uDelegate* left, uDelegate* right)
{
    return Delegate::EqualsImpl(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) [static] :169
bool Delegate::op_Inequality(uDelegate* left, uDelegate* right)
{
    return !Delegate::EqualsImpl(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) [static] :60
uDelegate* Delegate::Remove(uDelegate* source, uDelegate* value)
{
    if (source == NULL || value == NULL)
        return source;
    if (value->__type != source->__type)
        U_THROW_ICE();
    
    for (uDelegate *first = source; first != NULL; first = first->_prev)
    {
        bool match = true;
        uDelegate *last = first;
    
        for (uDelegate *d = value; d != NULL; d = d->_prev, last = last->_prev)
        {
            if (last == NULL ||
                d->_func != last->_func ||
                d->_this != last->_this)
            {
                match = false;
                break;
            }
        }
    
        if (match)
        {
            uDelegate temp;
            uDelegate *prev = &temp;
    
            for (uDelegate *e = source; e != first; e = e->_prev)
                prev = prev->_prev = e->Copy();
    
            prev->_prev = last;
            return temp._prev;
        }
    }
    
    return source;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Double.uno
// -----------------------------------------------------------------

// public intrinsic struct Double :11
// {
static void Double_build(uType* type)
{
    ::STRINGS[31] = uString::Const("str");
    ::TYPES[4] = uObject_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("IsInfinity", NULL, (void*)Double__IsInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsNegativeInfinity", NULL, (void*)Double__IsNegativeInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsPositiveInfinity", NULL, (void*)Double__IsPositiveInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Parse", NULL, (void*)Double__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Double__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Double_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(double);
    options.ValueSize = sizeof(double);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Double", options);
    type->fp_build_ = Double_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Double__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Double__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Double__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :20
void Double__Equals_fn(double* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :26
void Double__GetHashCode_fn(double* __this, uType* __type, int32_t* __retval)
{
    uint32_t data[2];
    memcpy(data, __this, sizeof(data));
    
    int hash = 27;
    hash = (13 * hash) + data[0];
    hash = (13 * hash) + data[1];
    return *__retval = hash, void();
}

// public static bool IsInfinity(double d) :198
void Double__IsInfinity_fn(double* d, bool* __retval)
{
    *__retval = Double::IsInfinity(*d);
}

// public static bool IsNegativeInfinity(double d) :188
void Double__IsNegativeInfinity_fn(double* d, bool* __retval)
{
    *__retval = Double::IsNegativeInfinity(*d);
}

// public static bool IsPositiveInfinity(double d) :193
void Double__IsPositiveInfinity_fn(double* d, bool* __retval)
{
    *__retval = Double::IsPositiveInfinity(*d);
}

// public static double Parse(string str) :84
void Double__Parse_fn(uString* str, double* __retval)
{
    *__retval = Double::Parse(str);
}

// public override sealed string ToString() :44
void Double__ToString_fn(double* __this, uType* __type, uString** __retval)
{
    char buf[64];
    int len = snprintf(buf, sizeof(buf), "%f", *__this);
    if (len < 0 && errno == ERANGE)
    {
        // Some snprintf implementations return *__retval = -1 and sets errno to
        // ERANGE instead of returning the desired length, so let's
        // reconstruct the value we want here.
        len = snprintf(NULL, 0, "%f", *__this), void();
        U_ASSERT(len > sizeof(buf));
    }
    
    char* ptr = buf;
    if (len > sizeof(buf))
    {
        // Stackalloc bigger buffer, and try again
        ptr = (char*)alloca(len + 1);
        len = snprintf(ptr, len + 1, "%f", *__this);
    }
    
    // Trim .0 ending
    while (len > 1 && ptr[len - 1] == '0')
        len--;
    if (len > 1 && ptr[len - 1] == '.')
        len--;
    
    U_ASSERT(len >= 0);
    return *__retval = uString::Ansi(ptr, len), void();
}

// public static bool TryParse(string str, double& result) :119
void Double__TryParse_fn(uString* str, double* result, bool* __retval)
{
    *__retval = Double::TryParse(str, result);
}

// public static bool IsInfinity(double d) [static] :198
bool Double::IsInfinity(double d)
{
    return Double::IsNegativeInfinity(d) || Double::IsPositiveInfinity(d);
}

// public static bool IsNegativeInfinity(double d) [static] :188
bool Double::IsNegativeInfinity(double d)
{
    return d == -DBL_INF;
}

// public static bool IsPositiveInfinity(double d) [static] :193
bool Double::IsPositiveInfinity(double d)
{
    return d == DBL_INF;
}

// public static double Parse(string str) [static] :84
double Double::Parse(uString* str)
{
    uStackFrame __("double", "Parse(string)");

    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    errno = 0;
    uCString cstr(str);
    const char* trimmed = cstr.Ptr;
    while (*trimmed && isspace(*trimmed))
        trimmed++;
    char* end;
    double retval = strtod(trimmed, &end);
    while (*end && isspace(*end))
        end++;
    
    if (errno == ERANGE)
        U_THROW(::g::Uno::OverflowException::New4(uString::Const("Value was either too large or too small for double")));
    
    if (!strlen(trimmed) || strlen(end))
        U_THROW(::g::Uno::FormatException::New4(uString::Const("Unable to convert string to double")));
    
    return retval;
}

// public static bool TryParse(string str, double& result) [static] :119
bool Double::TryParse(uString* str, double* result)
{
    if (::g::Uno::String::op_Equality(str, NULL))
    {
        *result = 0.0;
        return false;
    }

    errno = 0;
    uCString cstr(str);
    const char* trimmed = cstr.Ptr;
    while (*trimmed && isspace(*trimmed))
        trimmed++;
    char* end;
    *result = strtod(trimmed, &end);
    while (*end && isspace(*end))
        end++;
    
    if (errno == ERANGE || !strlen(trimmed) || strlen(end))
    {
        *result = 0;
        return false;
    }
    
    return true;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Enum.uno
// ---------------------------------------------------------------

// public static class Enum :6
// {
static void Enum_build(uType* type)
{
    ::STRINGS[32] = uString::Const("Unable to parse enum '");
    ::STRINGS[33] = uString::Const("'");
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Enum__Parse_fn, 0, true, uObject_typeof(), 2, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Parse", NULL, (void*)Enum__Parse1_fn, 0, true, uObject_typeof(), 3, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

uClassType* Enum_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Enum", options);
    type->fp_build_ = Enum_build;
    return type;
}

// public static object Parse(Uno.Type type, string str) :21
void Enum__Parse_fn(uType* type, uString* str, uObject** __retval)
{
    *__retval = Enum::Parse(type, str);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) :8
void Enum__Parse1_fn(uType* type, uString* str, bool* ignoreCase, uObject** __retval)
{
    *__retval = Enum::Parse1(type, str, *ignoreCase);
}

// public static object Parse(Uno.Type type, string str) [static] :21
uObject* Enum::Parse(uType* type, uString* str)
{
    uStackFrame __("Uno.Enum", "Parse(Uno.Type,string)");
    return Enum::Parse1(type, str, false);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) [static] :8
uObject* Enum::Parse1(uType* type, uString* str, bool ignoreCase)
{
    uStackFrame __("Uno.Enum", "Parse(Uno.Type,string,bool)");
    uPtr(type);
    int64_t result;
    if (uEnum::TryParse(type, str, ignoreCase, &result))
        return uBoxPtr(type, &result);
    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[32/*"Unable to p...*/], str), ::STRINGS[33/*"'"*/])));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Environment.uno
// ----------------------------------------------------------------------

// public static class Environment :8
// {
static void Environment_build(uType* type)
{
    ::STRINGS[3] = uString::Const("\n"
        "");
    type->Reflection.SetFunctions(1,
        new uFunction("get_NewLine", NULL, (void*)Environment__get_NewLine_fn, 0, true, ::g::Uno::String_typeof(), 0));
}

uClassType* Environment_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Environment", options);
    type->fp_build_ = Environment_build;
    return type;
}

// public static string get_NewLine() :12
void Environment__get_NewLine_fn(uString** __retval)
{
    *__retval = Environment::NewLine();
}

// public static string get_NewLine() [static] :12
uString* Environment::NewLine()
{
    return ::STRINGS[3/*"\n"*/];
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/EventArgs.uno
// --------------------------------------------------------------------

// public class EventArgs :6
// {
// static generated EventArgs() :6
static void EventArgs__cctor__fn(uType* __type)
{
    EventArgs::Empty_ = EventArgs::New1();
}

static void EventArgs_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&EventArgs::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Empty", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EventArgs__New1_fn, 0, true, type, 0));
}

uType* EventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.EventArgs", options);
    type->fp_build_ = EventArgs_build;
    type->fp_ctor_ = (void*)EventArgs__New1_fn;
    type->fp_cctor_ = EventArgs__cctor__fn;
    return type;
}

// public generated EventArgs() :6
void EventArgs__ctor__fn(EventArgs* __this)
{
    __this->ctor_();
}

// public generated EventArgs New() :6
void EventArgs__New1_fn(EventArgs** __retval)
{
    *__retval = EventArgs::New1();
}

uSStrong<EventArgs*> EventArgs::Empty_;

// public generated EventArgs() [instance] :6
void EventArgs::ctor_()
{
}

// public generated EventArgs New() [static] :6
EventArgs* EventArgs::New1()
{
    EventArgs* obj1 = (EventArgs*)uNew(EventArgs_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/EventHandler.uno
// -----------------------------------------------------------------------

// public delegate void EventHandler(object sender, Uno.EventArgs args) :6
uDelegateType* EventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::EventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/EventHandler.uno
// -----------------------------------------------------------------------

// public delegate void EventHandler<TEventArgs>(object sender, TEventArgs args) :9
uDelegateType* EventHandler1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/Exception.uno
// -------------------------------------------------------------------------------

// public class Exception :6
// {
static void Exception_build(uType* type)
{
    ::STRINGS[34] = uString::Const("");
    ::STRINGS[4] = uString::Const(": ");
    ::STRINGS[35] = uString::Const(" ---> ");
    ::STRINGS[36] = uString::Const("\n"
        "    --- End of inner exception stack trace ---");
    ::STRINGS[3] = uString::Const("\n"
        "");
    ::STRINGS[37] = uString::Const("Uno.Exception.StackTrace is not supported in this build configuration");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Exception, _message), 0,
        type, offsetof(Exception, _inner), 0,
        ::g::Uno::String_typeof(), offsetof(Exception, _trace), 0,
        ::g::Uno::IntPtr_typeof()->Array(), offsetof(Exception, NativeStackTrace), 0);
    type->Reflection.SetFields(1,
        new uField("NativeStackTrace", 3));
    type->Reflection.SetFunctions(6,
        new uFunction("get_InnerException", NULL, (void*)Exception__get_InnerException_fn, 0, false, type, 0),
        new uFunction("get_Message", NULL, NULL, offsetof(Exception_type, fp_get_Message), false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Exception__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Exception__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Exception__New3_fn, 0, true, type, 2, ::g::Uno::String_typeof(), type),
        new uFunction("get_StackTrace", NULL, (void*)Exception__get_StackTrace_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

Exception_type* Exception_typeof()
{
    static uSStrong<Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Exception);
    options.TypeSize = sizeof(Exception_type);
    type = (Exception_type*)uClassType::New("Uno.Exception", options);
    type->fp_build_ = Exception_build;
    type->fp_ctor_ = (void*)Exception__New1_fn;
    type->fp_get_Message = Exception__get_Message_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Exception__ToString_fn;
    return type;
}

// public Exception() :28
void Exception__ctor__fn(Exception* __this)
{
    __this->ctor_();
}

// public Exception(string message) :33
void Exception__ctor_1_fn(Exception* __this, uString* message)
{
    __this->ctor_1(message);
}

// public Exception(string message, Uno.Exception inner) :38
void Exception__ctor_2_fn(Exception* __this, uString* message, Exception* inner)
{
    __this->ctor_2(message, inner);
}

// public Uno.Exception get_InnerException() :17
void Exception__get_InnerException_fn(Exception* __this, Exception** __retval)
{
    *__retval = __this->InnerException();
}

// public virtual string get_Message() :11
void Exception__get_Message_fn(Exception* __this, uString** __retval)
{
    return *__retval = __this->_message, void();
}

// public Exception New() :28
void Exception__New1_fn(Exception** __retval)
{
    *__retval = Exception::New1();
}

// public Exception New(string message) :33
void Exception__New2_fn(uString* message, Exception** __retval)
{
    *__retval = Exception::New2(message);
}

// public Exception New(string message, Uno.Exception inner) :38
void Exception__New3_fn(uString* message, Exception* inner, Exception** __retval)
{
    *__retval = Exception::New3(message, inner);
}

// public string get_StackTrace() :25
void Exception__get_StackTrace_fn(Exception* __this, uString** __retval)
{
    *__retval = __this->StackTrace();
}

// public override string ToString() :50
void Exception__ToString_fn(Exception* __this, uString** __retval)
{
    uStackFrame __("Uno.Exception", "ToString()");
    uString* temp = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(::g::Uno::Object::GetType(__this), ::STRINGS[4/*": "*/]), __this->Message());

    if (__this->_inner != NULL)
        temp = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(temp, ::STRINGS[35/*" ---> "*/]), uPtr(__this->_inner)->ToString()), ::STRINGS[36/*"\n    --- E...*/]);

    if (::g::Uno::String::IsNullOrEmpty(__this->_trace))
        return *__retval = temp, void();

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(temp, ::STRINGS[3/*"\n"*/]), __this->_trace), void();
}

// public Exception() [instance] :28
void Exception::ctor_()
{
    ctor_1(::STRINGS[34/*""*/]);
}

// public Exception(string message) [instance] :33
void Exception::ctor_1(uString* message)
{
    ctor_2(message, NULL);
}

// public Exception(string message, Uno.Exception inner) [instance] :38
void Exception::ctor_2(uString* message, Exception* inner)
{
    _message = message;
    _inner = inner;
    _trace = uGetStackTrace();
    NativeStackTrace = uGetNativeStackTrace(0);
}

// public Uno.Exception get_InnerException() [instance] :17
Exception* Exception::InnerException()
{
    return _inner;
}

// public string get_StackTrace() [instance] :25
uString* Exception::StackTrace()
{
    uString* ind1;
    ind1 = _trace;
    return (ind1 != NULL) ? ind1 : ::STRINGS[37/*"Uno.Excepti...*/];
}

// public Exception New() [static] :28
Exception* Exception::New1()
{
    Exception* obj2 = (Exception*)uNew(Exception_typeof());
    obj2->ctor_();
    return obj2;
}

// public Exception New(string message) [static] :33
Exception* Exception::New2(uString* message)
{
    Exception* obj3 = (Exception*)uNew(Exception_typeof());
    obj3->ctor_1(message);
    return obj3;
}

// public Exception New(string message, Uno.Exception inner) [static] :38
Exception* Exception::New3(uString* message, Exception* inner)
{
    Exception* obj4 = (Exception*)uNew(Exception_typeof());
    obj4->ctor_2(message, inner);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/FakeTime.uno
// -------------------------------------------------------------------

// public sealed class FakeTime :4
// {
static void FakeTime_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FakeTime__New1_fn, 0, true, type, 0));
}

uType* FakeTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(FakeTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.FakeTime", options);
    type->fp_build_ = FakeTime_build;
    type->fp_ctor_ = (void*)FakeTime__New1_fn;
    return type;
}

// public generated FakeTime() :4
void FakeTime__ctor__fn(FakeTime* __this)
{
    __this->ctor_();
}

// public generated FakeTime New() :4
void FakeTime__New1_fn(FakeTime** __retval)
{
    *__retval = FakeTime::New1();
}

// public generated FakeTime() [instance] :4
void FakeTime::ctor_()
{
}

// public generated FakeTime New() [static] :4
FakeTime* FakeTime::New1()
{
    FakeTime* obj1 = (FakeTime*)uNew(FakeTime_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/FlagsAttribute.uno
// -------------------------------------------------------------------------

// public sealed class FlagsAttribute :7
// {
static void FlagsAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FlagsAttribute__New1_fn, 0, true, type, 0));
}

uType* FlagsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(FlagsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.FlagsAttribute", options);
    type->fp_build_ = FlagsAttribute_build;
    type->fp_ctor_ = (void*)FlagsAttribute__New1_fn;
    return type;
}

// public generated FlagsAttribute() :7
void FlagsAttribute__ctor_1_fn(FlagsAttribute* __this)
{
    __this->ctor_1();
}

// public generated FlagsAttribute New() :7
void FlagsAttribute__New1_fn(FlagsAttribute** __retval)
{
    *__retval = FlagsAttribute::New1();
}

// public generated FlagsAttribute() [instance] :7
void FlagsAttribute::ctor_1()
{
    ctor_();
}

// public generated FlagsAttribute New() [static] :7
FlagsAttribute* FlagsAttribute::New1()
{
    FlagsAttribute* obj1 = (FlagsAttribute*)uNew(FlagsAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Float.uno
// ----------------------------------------------------------------

// public intrinsic struct Float :11
// {
static void Float_build(uType* type)
{
    ::STRINGS[31] = uString::Const("str");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::Double_typeof();
    type->Reflection.SetFunctions(6,
        new uFunction("IsInfinity", NULL, (void*)Float__IsInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsNaN", NULL, (void*)Float__IsNaN_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsNegativeInfinity", NULL, (void*)Float__IsNegativeInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsPositiveInfinity", NULL, (void*)Float__IsPositiveInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Parse", NULL, (void*)Float__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Float__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Float_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(float);
    options.ValueSize = sizeof(float);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float", options);
    type->fp_build_ = Float_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Float__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :23
void Float__Equals_fn(float* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :29
void Float__GetHashCode_fn(float* __this, uType* __type, int32_t* __retval)
{
    union {
        float f;
        int i;
    } u;
    u.f = *__this;
    return *__retval = u.i, void();
}

// public static bool IsInfinity(float f) :174
void Float__IsInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsInfinity(*f);
}

// public static bool IsNaN(float f) :159
void Float__IsNaN_fn(float* f, bool* __retval)
{
    *__retval = Float::IsNaN(*f);
}

// public static bool IsNegativeInfinity(float f) :164
void Float__IsNegativeInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsNegativeInfinity(*f);
}

// public static bool IsPositiveInfinity(float f) :169
void Float__IsPositiveInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsPositiveInfinity(*f);
}

// public static float Parse(string str) :58
void Float__Parse_fn(uString* str, float* __retval)
{
    *__retval = Float::Parse(str);
}

// public override sealed string ToString() :46
void Float__ToString_fn(float* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float", "ToString()");
    return *__retval = ::g::Uno::Double::ToString((double)*__this, ::TYPES[9/*double*/]), void();
}

// public static bool TryParse(string str, float& result) :93
void Float__TryParse_fn(uString* str, float* result, bool* __retval)
{
    *__retval = Float::TryParse(str, result);
}

// public static bool IsInfinity(float f) [static] :174
bool Float::IsInfinity(float f)
{
    return Float::IsNegativeInfinity(f) || Float::IsPositiveInfinity(f);
}

// public static bool IsNaN(float f) [static] :159
bool Float::IsNaN(float f)
{
    return f != f;
}

// public static bool IsNegativeInfinity(float f) [static] :164
bool Float::IsNegativeInfinity(float f)
{
    return f == -FLT_INF;
}

// public static bool IsPositiveInfinity(float f) [static] :169
bool Float::IsPositiveInfinity(float f)
{
    return f == FLT_INF;
}

// public static float Parse(string str) [static] :58
float Float::Parse(uString* str)
{
    uStackFrame __("float", "Parse(string)");

    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    errno = 0;
    uCString cstr(str);
    const char* trimmed = cstr.Ptr;
    while (*trimmed && isspace(*trimmed))
        trimmed++;
    char* end;
    double retval = strtod(trimmed, &end);
    while (*end && isspace(*end))
        end++;
    
    if (errno == ERANGE || retval > 3.402823e+38f || retval < -3.402823e+38f)
        U_THROW(::g::Uno::OverflowException::New4(uString::Const("Value was either too large or too small for float")));
    
    if (!strlen(trimmed) || strlen(end))
        U_THROW(::g::Uno::FormatException::New4(uString::Const("Unable to convert string to float")));
    
    return (float)retval;
}

// public static bool TryParse(string str, float& result) [static] :93
bool Float::TryParse(uString* str, float* result)
{
    if (::g::Uno::String::op_Equality(str, NULL))
    {
        *result = 0.0f;
        return false;
    }

    errno = 0;
    uCString cstr(str);
    const char* trimmed = cstr.Ptr;
    while (*trimmed && isspace(*trimmed))
        trimmed++;
    char* end;
    double retval = strtod(trimmed, &end);
    while (*end && isspace(*end))
        end++;
    
    if (errno == ERANGE || !strlen(trimmed) || strlen(end) ||
            retval > 3.402823e+38f || retval < -3.402823e+38f)
    {
        *result = 0;
        return false;
    }
    
    *result = (float)retval;
    return true;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Float2.uno
// -----------------------------------------------------------------

// public intrinsic struct Float2 :7
// {
static void Float2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[10/*float*/], offsetof(Float2, X), 0,
        ::TYPES[10/*float*/], offsetof(Float2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Item", NULL, (void*)Float2__get_Item_fn, 0, false, ::TYPES[10/*float*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float2__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float2__New1_fn, 0, true, type, 1, ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float2__New2_fn, 0, true, type, 2, ::TYPES[10/*float*/], ::TYPES[10/*float*/]));
}

uStructType* Float2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Float2);
    options.ValueSize = sizeof(Float2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2", options);
    type->fp_build_ = Float2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Float2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2__ToString_fn;
    return type;
}

// public Float2(float xy) :28
void Float2__ctor__fn(Float2* __this, float* xy)
{
    __this->ctor_(*xy);
}

// public Float2(float x, float y) :29
void Float2__ctor_1_fn(Float2* __this, float* x, float* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :59
void Float2__Equals_fn(Float2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :60
void Float2__GetHashCode_fn(Float2* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public float get_Item(int index) :14
void Float2__get_Item_fn(Float2* __this, int32_t* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :20
void Float2__set_Item_fn(Float2* __this, int32_t* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float2 New(float xy) :28
void Float2__New1_fn(float* xy, Float2* __retval)
{
    *__retval = Float2__New1(*xy);
}

// public Float2 New(float x, float y) :29
void Float2__New2_fn(float* x, float* y, Float2* __retval)
{
    *__retval = Float2__New2(*x, *y);
}

// public static operator +(float a, float2 b) :43
void Float2__op_Addition_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition(*a, *b);
}

// public static operator +(float2 a, float b) :38
void Float2__op_Addition1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Addition1(*a, *b);
}

// public static operator +(float2 a, float2 b) :33
void Float2__op_Addition2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition2(*a, *b);
}

// public static operator /(float2 a, float b) :41
void Float2__op_Division1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Division1(*a, *b);
}

// public static operator /(float2 a, float2 b) :36
void Float2__op_Division2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Division2(*a, *b);
}

// public static operator ==(float2 a, float2 b) :48
void Float2__op_Equality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Equality(*a, *b);
}

// public static implicit operator float2(int2 a) :57
void Float2__op_Implicit2_fn(::g::Uno::Int2* a, Float2* __retval)
{
    *__retval = Float2__op_Implicit2(*a);
}

// public static operator !=(float2 a, float2 b) :49
void Float2__op_Inequality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Inequality(*a, *b);
}

// public static operator *(float a, float2 b) :45
void Float2__op_Multiply_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply(*a, *b);
}

// public static operator *(float2 a, float b) :40
void Float2__op_Multiply1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply1(*a, *b);
}

// public static operator *(float2 a, float2 b) :35
void Float2__op_Multiply2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply2(*a, *b);
}

// public static operator -(float2 a, float b) :39
void Float2__op_Subtraction1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction1(*a, *b);
}

// public static operator -(float2 a, float2 b) :34
void Float2__op_Subtraction2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction2(*a, *b);
}

// public static operator -(float2 a) :31
void Float2__op_UnaryNegation_fn(Float2* a, Float2* __retval)
{
    *__retval = Float2__op_UnaryNegation(*a);
}

// public override sealed string ToString() :61
void Float2__ToString_fn(Float2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[10/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[10/*float*/])), void();
}

// public Float2(float xy) [instance] :28
void Float2::ctor_(float xy)
{
    X = (Y = xy);
}

// public Float2(float x, float y) [instance] :29
void Float2::ctor_1(float x, float y)
{
    X = x;
    Y = y;
}

// public float get_Item(int index) [instance] :14
float Float2::Item(int32_t index)
{
    uStackFrame __("float2", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :20
void Float2::Item(int32_t index, float value)
{
    uStackFrame __("float2", "set_Item(int,float)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float2 New(float xy) [static] :28
Float2 Float2__New1(float xy)
{
    Float2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Float2 New(float x, float y) [static] :29
Float2 Float2__New2(float x, float y)
{
    Float2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(float a, float2 b) [static] :43
Float2 Float2__op_Addition(float a, Float2 b)
{
    return Float2__New2(a + b.X, a + b.Y);
}

// public static operator +(float2 a, float b) [static] :38
Float2 Float2__op_Addition1(Float2 a, float b)
{
    return Float2__New2(a.X + b, a.Y + b);
}

// public static operator +(float2 a, float2 b) [static] :33
Float2 Float2__op_Addition2(Float2 a, Float2 b)
{
    return Float2__New2(a.X + b.X, a.Y + b.Y);
}

// public static operator /(float2 a, float b) [static] :41
Float2 Float2__op_Division1(Float2 a, float b)
{
    return Float2__New2(a.X / b, a.Y / b);
}

// public static operator /(float2 a, float2 b) [static] :36
Float2 Float2__op_Division2(Float2 a, Float2 b)
{
    return Float2__New2(a.X / b.X, a.Y / b.Y);
}

// public static operator ==(float2 a, float2 b) [static] :48
bool Float2__op_Equality(Float2 a, Float2 b)
{
    return (a.X == b.X) && (a.Y == b.Y);
}

// public static implicit operator float2(int2 a) [static] :57
Float2 Float2__op_Implicit2(::g::Uno::Int2 a)
{
    return Float2__New2((float)a.X, (float)a.Y);
}

// public static operator !=(float2 a, float2 b) [static] :49
bool Float2__op_Inequality(Float2 a, Float2 b)
{
    return (a.X != b.X) || (a.Y != b.Y);
}

// public static operator *(float a, float2 b) [static] :45
Float2 Float2__op_Multiply(float a, Float2 b)
{
    return Float2__New2(a * b.X, a * b.Y);
}

// public static operator *(float2 a, float b) [static] :40
Float2 Float2__op_Multiply1(Float2 a, float b)
{
    return Float2__New2(a.X * b, a.Y * b);
}

// public static operator *(float2 a, float2 b) [static] :35
Float2 Float2__op_Multiply2(Float2 a, Float2 b)
{
    return Float2__New2(a.X * b.X, a.Y * b.Y);
}

// public static operator -(float2 a, float b) [static] :39
Float2 Float2__op_Subtraction1(Float2 a, float b)
{
    return Float2__New2(a.X - b, a.Y - b);
}

// public static operator -(float2 a, float2 b) [static] :34
Float2 Float2__op_Subtraction2(Float2 a, Float2 b)
{
    return Float2__New2(a.X - b.X, a.Y - b.Y);
}

// public static operator -(float2 a) [static] :31
Float2 Float2__op_UnaryNegation(Float2 a)
{
    return Float2__New2(-a.X, -a.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Float2x2.uno
// -------------------------------------------------------------------

// public intrinsic struct Float2x2 :7
// {
static void Float2x2_build(uType* type)
{
    ::STRINGS[38] = uString::Const(",");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[10/*float*/], offsetof(Float2x2, M11), 0,
        ::TYPES[10/*float*/], offsetof(Float2x2, M12), 0,
        ::TYPES[10/*float*/], offsetof(Float2x2, M21), 0,
        ::TYPES[10/*float*/], offsetof(Float2x2, M22), 0);
    type->Reflection.SetFields(4,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M21", 2),
        new uField("M22", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Float2x2__New1_fn, 0, true, type, 4, ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/]));
}

uStructType* Float2x2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Float2x2);
    options.ValueSize = sizeof(Float2x2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2x2", options);
    type->fp_build_ = Float2x2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2x2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Float2x2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2x2__ToString_fn;
    return type;
}

// public Float2x2(float m11, float m12, float m21, float m22) :35
void Float2x2__ctor__fn(Float2x2* __this, float* m11, float* m12, float* m21, float* m22)
{
    __this->ctor_(*m11, *m12, *m21, *m22);
}

// public override sealed bool Equals(object o) :99
void Float2x2__Equals_fn(Float2x2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :100
void Float2x2__GetHashCode_fn(Float2x2* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Float2x2 New(float m11, float m12, float m21, float m22) :35
void Float2x2__New1_fn(float* m11, float* m12, float* m21, float* m22, Float2x2* __retval)
{
    *__retval = Float2x2__New1(*m11, *m12, *m21, *m22);
}

// public override sealed string ToString() :101
void Float2x2__ToString_fn(Float2x2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float2x2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[10/*float*/]), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[10/*float*/])), void();
}

// public Float2x2(float m11, float m12, float m21, float m22) [instance] :35
void Float2x2::ctor_(float m11, float m12, float m21, float m22)
{
    M11 = m11;
    M12 = m12;
    M21 = m21;
    M22 = m22;
}

// public Float2x2 New(float m11, float m12, float m21, float m22) [static] :35
Float2x2 Float2x2__New1(float m11, float m12, float m21, float m22)
{
    Float2x2 obj1;
    obj1.ctor_(m11, m12, m21, m22);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Float3.uno
// -----------------------------------------------------------------

// public intrinsic struct Float3 :7
// {
static void Float3_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[10/*float*/], offsetof(Float3, X), 0,
        ::TYPES[10/*float*/], offsetof(Float3, Y), 0,
        ::TYPES[10/*float*/], offsetof(Float3, Z), 0);
    type->Reflection.SetFields(3,
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Float3__New1_fn, 0, true, type, 1, ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float3__New2_fn, 0, true, type, 3, ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float3__New4_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::TYPES[10/*float*/]));
}

uStructType* Float3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.Alignment = alignof(Float3);
    options.ValueSize = sizeof(Float3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3", options);
    type->fp_build_ = Float3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Float3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3__ToString_fn;
    return type;
}

// public Float3(float xyz) :30
void Float3__ctor__fn(Float3* __this, float* xyz)
{
    __this->ctor_(*xyz);
}

// public Float3(float x, float y, float z) :31
void Float3__ctor_1_fn(Float3* __this, float* x, float* y, float* z)
{
    __this->ctor_1(*x, *y, *z);
}

// public Float3(float2 xy, float z) :32
void Float3__ctor_3_fn(Float3* __this, ::g::Uno::Float2* xy, float* z)
{
    __this->ctor_3(*xy, *z);
}

// public override sealed bool Equals(object o) :57
void Float3__Equals_fn(Float3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :58
void Float3__GetHashCode_fn(Float3* __this, uType* __type, int32_t* __retval)
{
    int32_t ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret6), ret6), void();
}

// public Float3 New(float xyz) :30
void Float3__New1_fn(float* xyz, Float3* __retval)
{
    *__retval = Float3__New1(*xyz);
}

// public Float3 New(float x, float y, float z) :31
void Float3__New2_fn(float* x, float* y, float* z, Float3* __retval)
{
    *__retval = Float3__New2(*x, *y, *z);
}

// public Float3 New(float2 xy, float z) :32
void Float3__New4_fn(::g::Uno::Float2* xy, float* z, Float3* __retval)
{
    *__retval = Float3__New4(*xy, *z);
}

// public static operator +(float3 a, float3 b) :35
void Float3__op_Addition2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Addition2(*a, *b);
}

// public static operator /(float3 a, float b) :43
void Float3__op_Division1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Division1(*a, *b);
}

// public static operator /(float3 a, float3 b) :38
void Float3__op_Division2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Division2(*a, *b);
}

// public static operator ==(float3 a, float3 b) :50
void Float3__op_Equality_fn(Float3* a, Float3* b, bool* __retval)
{
    *__retval = Float3__op_Equality(*a, *b);
}

// public static operator !=(float3 a, float3 b) :51
void Float3__op_Inequality_fn(Float3* a, Float3* b, bool* __retval)
{
    *__retval = Float3__op_Inequality(*a, *b);
}

// public static operator *(float a, float3 b) :47
void Float3__op_Multiply_fn(float* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply(*a, *b);
}

// public static operator *(float3 a, float b) :42
void Float3__op_Multiply1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply1(*a, *b);
}

// public static operator *(float3 a, float3 b) :37
void Float3__op_Multiply2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply2(*a, *b);
}

// public static operator -(float3 a, float3 b) :36
void Float3__op_Subtraction2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Subtraction2(*a, *b);
}

// public static operator -(float3 a) :53
void Float3__op_UnaryNegation_fn(Float3* a, Float3* __retval)
{
    *__retval = Float3__op_UnaryNegation(*a);
}

// public override sealed string ToString() :59
void Float3__ToString_fn(Float3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[10/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[10/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[10/*float*/])), void();
}

// public Float3(float xyz) [instance] :30
void Float3::ctor_(float xyz)
{
    X = (Y = (Z = xyz));
}

// public Float3(float x, float y, float z) [instance] :31
void Float3::ctor_1(float x, float y, float z)
{
    X = x;
    Y = y;
    Z = z;
}

// public Float3(float2 xy, float z) [instance] :32
void Float3::ctor_3(::g::Uno::Float2 xy, float z)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
}

// public Float3 New(float xyz) [static] :30
Float3 Float3__New1(float xyz)
{
    Float3 obj1;
    obj1.ctor_(xyz);
    return obj1;
}

// public Float3 New(float x, float y, float z) [static] :31
Float3 Float3__New2(float x, float y, float z)
{
    Float3 obj2;
    obj2.ctor_1(x, y, z);
    return obj2;
}

// public Float3 New(float2 xy, float z) [static] :32
Float3 Float3__New4(::g::Uno::Float2 xy, float z)
{
    Float3 obj3;
    obj3.ctor_3(xy, z);
    return obj3;
}

// public static operator +(float3 a, float3 b) [static] :35
Float3 Float3__op_Addition2(Float3 a, Float3 b)
{
    return Float3__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z);
}

// public static operator /(float3 a, float b) [static] :43
Float3 Float3__op_Division1(Float3 a, float b)
{
    return Float3__New2(a.X / b, a.Y / b, a.Z / b);
}

// public static operator /(float3 a, float3 b) [static] :38
Float3 Float3__op_Division2(Float3 a, Float3 b)
{
    return Float3__New2(a.X / b.X, a.Y / b.Y, a.Z / b.Z);
}

// public static operator ==(float3 a, float3 b) [static] :50
bool Float3__op_Equality(Float3 a, Float3 b)
{
    return ((a.X == b.X) && (a.Y == b.Y)) && (a.Z == b.Z);
}

// public static operator !=(float3 a, float3 b) [static] :51
bool Float3__op_Inequality(Float3 a, Float3 b)
{
    return ((a.X != b.X) || (a.Y != b.Y)) || (a.Z != b.Z);
}

// public static operator *(float a, float3 b) [static] :47
Float3 Float3__op_Multiply(float a, Float3 b)
{
    return Float3__New2(a * b.X, a * b.Y, a * b.Z);
}

// public static operator *(float3 a, float b) [static] :42
Float3 Float3__op_Multiply1(Float3 a, float b)
{
    return Float3__New2(a.X * b, a.Y * b, a.Z * b);
}

// public static operator *(float3 a, float3 b) [static] :37
Float3 Float3__op_Multiply2(Float3 a, Float3 b)
{
    return Float3__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z);
}

// public static operator -(float3 a, float3 b) [static] :36
Float3 Float3__op_Subtraction2(Float3 a, Float3 b)
{
    return Float3__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
}

// public static operator -(float3 a) [static] :53
Float3 Float3__op_UnaryNegation(Float3 a)
{
    return Float3__op_Multiply1(a, -1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Float3x3.uno
// -------------------------------------------------------------------

// public intrinsic struct Float3x3 :7
// {
static void Float3x3_build(uType* type)
{
    ::STRINGS[38] = uString::Const(",");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M11), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M12), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M13), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M21), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M22), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M23), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M31), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M32), 0,
        ::TYPES[10/*float*/], offsetof(Float3x3, M33), 0);
    type->Reflection.SetFields(9,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M13", 2),
        new uField("M21", 3),
        new uField("M22", 4),
        new uField("M23", 5),
        new uField("M31", 6),
        new uField("M32", 7),
        new uField("M33", 8));
    type->Reflection.SetFunctions(2,
        new uFunction("get_Identity", NULL, (void*)Float3x3__get_Identity_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Float3x3__New1_fn, 0, true, type, 9, ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/]));
}

uStructType* Float3x3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.Alignment = alignof(Float3x3);
    options.ValueSize = sizeof(Float3x3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3x3", options);
    type->fp_build_ = Float3x3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3x3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Float3x3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3x3__ToString_fn;
    return type;
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :38
void Float3x3__ctor__fn(Float3x3* __this, float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33)
{
    __this->ctor_(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed bool Equals(object o) :125
void Float3x3__Equals_fn(Float3x3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :126
void Float3x3__GetHashCode_fn(Float3x3* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public static float3x3 get_Identity() :11
void Float3x3__get_Identity_fn(Float3x3* __retval)
{
    *__retval = Float3x3__Identity();
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :38
void Float3x3__New1_fn(float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33, Float3x3* __retval)
{
    *__retval = Float3x3__New1(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed string ToString() :128
void Float3x3__ToString_fn(Float3x3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float3x3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[10/*float*/]), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[10/*float*/])), ::g::Uno::Float::ToString(__this->M13, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[10/*float*/])), ::g::Uno::Float::ToString(__this->M23, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[10/*float*/])), ::g::Uno::Float::ToString(__this->M33, ::TYPES[10/*float*/])), void();
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [instance] :38
void Float3x3::ctor_(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M31 = m31;
    M32 = m32;
    M33 = m33;
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [static] :38
Float3x3 Float3x3__New1(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    Float3x3 obj1;
    obj1.ctor_(m11, m12, m13, m21, m22, m23, m31, m32, m33);
    return obj1;
}

// public static float3x3 get_Identity() [static] :11
Float3x3 Float3x3__Identity()
{
    return Float3x3__New1(1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Float4.uno
// -----------------------------------------------------------------

// public intrinsic struct Float4 :7
// {
static void Float4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[10/*float*/], offsetof(Float4, X), 0,
        ::TYPES[10/*float*/], offsetof(Float4, Y), 0,
        ::TYPES[10/*float*/], offsetof(Float4, Z), 0,
        ::TYPES[10/*float*/], offsetof(Float4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(9,
        new uFunction("get_Identity", NULL, (void*)Float4__get_Identity_fn, 0, true, type, 0),
        new uFunction("get_Item", NULL, (void*)Float4__get_Item_fn, 0, false, ::TYPES[10/*float*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New1_fn, 0, true, type, 1, ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New2_fn, 0, true, type, 4, ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New5_fn, 0, true, type, 2, ::TYPES[10/*float*/], ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4__New6_fn, 0, true, type, 3, ::g::Uno::Float2_typeof(), ::TYPES[10/*float*/], ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New7_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4__New8_fn, 0, true, type, 2, ::g::Uno::Float3_typeof(), ::TYPES[10/*float*/]));
}

uStructType* Float4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Float4);
    options.ValueSize = sizeof(Float4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4", options);
    type->fp_build_ = Float4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Float4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4__ToString_fn;
    return type;
}

// public Float4(float xyzw) :37
void Float4__ctor__fn(Float4* __this, float* xyzw)
{
    __this->ctor_(*xyzw);
}

// public Float4(float x, float y, float z, float w) :38
void Float4__ctor_1_fn(Float4* __this, float* x, float* y, float* z, float* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Float4(float x, float3 yzw) :44
void Float4__ctor_4_fn(Float4* __this, float* x, ::g::Uno::Float3* yzw)
{
    __this->ctor_4(*x, *yzw);
}

// public Float4(float2 xy, float z, float w) :39
void Float4__ctor_5_fn(Float4* __this, ::g::Uno::Float2* xy, float* z, float* w)
{
    __this->ctor_5(*xy, *z, *w);
}

// public Float4(float2 xy, float2 zw) :42
void Float4__ctor_6_fn(Float4* __this, ::g::Uno::Float2* xy, ::g::Uno::Float2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public Float4(float3 xyz, float w) :43
void Float4__ctor_7_fn(Float4* __this, ::g::Uno::Float3* xyz, float* w)
{
    __this->ctor_7(*xyz, *w);
}

// public override sealed bool Equals(object o) :71
void Float4__Equals_fn(Float4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :72
void Float4__GetHashCode_fn(Float4* __this, uType* __type, int32_t* __retval)
{
    int32_t ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret10), ret10), void();
}

// public static float4 get_Identity() :11
void Float4__get_Identity_fn(Float4* __retval)
{
    *__retval = Float4__Identity();
}

// public float get_Item(int index) :19
void Float4__get_Item_fn(Float4* __this, int32_t* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :27
void Float4__set_Item_fn(Float4* __this, int32_t* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float4 New(float xyzw) :37
void Float4__New1_fn(float* xyzw, Float4* __retval)
{
    *__retval = Float4__New1(*xyzw);
}

// public Float4 New(float x, float y, float z, float w) :38
void Float4__New2_fn(float* x, float* y, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New2(*x, *y, *z, *w);
}

// public Float4 New(float x, float3 yzw) :44
void Float4__New5_fn(float* x, ::g::Uno::Float3* yzw, Float4* __retval)
{
    *__retval = Float4__New5(*x, *yzw);
}

// public Float4 New(float2 xy, float z, float w) :39
void Float4__New6_fn(::g::Uno::Float2* xy, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New6(*xy, *z, *w);
}

// public Float4 New(float2 xy, float2 zw) :42
void Float4__New7_fn(::g::Uno::Float2* xy, ::g::Uno::Float2* zw, Float4* __retval)
{
    *__retval = Float4__New7(*xy, *zw);
}

// public Float4 New(float3 xyz, float w) :43
void Float4__New8_fn(::g::Uno::Float3* xyz, float* w, Float4* __retval)
{
    *__retval = Float4__New8(*xyz, *w);
}

// public static operator +(float a, float4 b) :57
void Float4__op_Addition_fn(float* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Addition(*a, *b);
}

// public static operator +(float4 a, float4 b) :47
void Float4__op_Addition2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Addition2(*a, *b);
}

// public static operator /(float4 a, float b) :55
void Float4__op_Division1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Division1(*a, *b);
}

// public static operator /(float4 a, float4 b) :50
void Float4__op_Division2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Division2(*a, *b);
}

// public static operator ==(float4 a, float4 b) :62
void Float4__op_Equality_fn(Float4* a, Float4* b, bool* __retval)
{
    *__retval = Float4__op_Equality(*a, *b);
}

// public static implicit operator float4(int4 a) :69
void Float4__op_Implicit2_fn(::g::Uno::Int4* a, Float4* __retval)
{
    *__retval = Float4__op_Implicit2(*a);
}

// public static operator !=(float4 a, float4 b) :63
void Float4__op_Inequality_fn(Float4* a, Float4* b, bool* __retval)
{
    *__retval = Float4__op_Inequality(*a, *b);
}

// public static operator *(float a, float4 b) :59
void Float4__op_Multiply_fn(float* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply(*a, *b);
}

// public static operator *(float4 a, float b) :54
void Float4__op_Multiply1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply1(*a, *b);
}

// public static operator *(float4 a, float4 b) :49
void Float4__op_Multiply2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply2(*a, *b);
}

// public static operator -(float4 a, float4 b) :48
void Float4__op_Subtraction2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Subtraction2(*a, *b);
}

// public override sealed string ToString() :73
void Float4__ToString_fn(Float4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[10/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[10/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[10/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->W, ::TYPES[10/*float*/])), void();
}

// public Float4(float xyzw) [instance] :37
void Float4::ctor_(float xyzw)
{
    X = (Y = (Z = (W = xyzw)));
}

// public Float4(float x, float y, float z, float w) [instance] :38
void Float4::ctor_1(float x, float y, float z, float w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Float4(float x, float3 yzw) [instance] :44
void Float4::ctor_4(float x, ::g::Uno::Float3 yzw)
{
    X = x;
    Y = yzw.X;
    Z = yzw.Y;
    W = yzw.Z;
}

// public Float4(float2 xy, float z, float w) [instance] :39
void Float4::ctor_5(::g::Uno::Float2 xy, float z, float w)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
    W = w;
}

// public Float4(float2 xy, float2 zw) [instance] :42
void Float4::ctor_6(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public Float4(float3 xyz, float w) [instance] :43
void Float4::ctor_7(::g::Uno::Float3 xyz, float w)
{
    X = xyz.X;
    Y = xyz.Y;
    Z = xyz.Z;
    W = w;
}

// public float get_Item(int index) [instance] :19
float Float4::Item(int32_t index)
{
    uStackFrame __("float4", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :27
void Float4::Item(int32_t index, float value)
{
    uStackFrame __("float4", "set_Item(int,float)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4 New(float xyzw) [static] :37
Float4 Float4__New1(float xyzw)
{
    Float4 obj1;
    obj1.ctor_(xyzw);
    return obj1;
}

// public Float4 New(float x, float y, float z, float w) [static] :38
Float4 Float4__New2(float x, float y, float z, float w)
{
    Float4 obj2;
    obj2.ctor_1(x, y, z, w);
    return obj2;
}

// public Float4 New(float x, float3 yzw) [static] :44
Float4 Float4__New5(float x, ::g::Uno::Float3 yzw)
{
    Float4 obj8;
    obj8.ctor_4(x, yzw);
    return obj8;
}

// public Float4 New(float2 xy, float z, float w) [static] :39
Float4 Float4__New6(::g::Uno::Float2 xy, float z, float w)
{
    Float4 obj3;
    obj3.ctor_5(xy, z, w);
    return obj3;
}

// public Float4 New(float2 xy, float2 zw) [static] :42
Float4 Float4__New7(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    Float4 obj6;
    obj6.ctor_6(xy, zw);
    return obj6;
}

// public Float4 New(float3 xyz, float w) [static] :43
Float4 Float4__New8(::g::Uno::Float3 xyz, float w)
{
    Float4 obj7;
    obj7.ctor_7(xyz, w);
    return obj7;
}

// public static operator +(float a, float4 b) [static] :57
Float4 Float4__op_Addition(float a, Float4 b)
{
    return Float4__New2(a + b.X, a + b.Y, a + b.Z, a + b.W);
}

// public static operator +(float4 a, float4 b) [static] :47
Float4 Float4__op_Addition2(Float4 a, Float4 b)
{
    return Float4__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z, a.W + b.W);
}

// public static operator /(float4 a, float b) [static] :55
Float4 Float4__op_Division1(Float4 a, float b)
{
    return Float4__New2(a.X / b, a.Y / b, a.Z / b, a.W / b);
}

// public static operator /(float4 a, float4 b) [static] :50
Float4 Float4__op_Division2(Float4 a, Float4 b)
{
    return Float4__New2(a.X / b.X, a.Y / b.Y, a.Z / b.Z, a.W / b.W);
}

// public static operator ==(float4 a, float4 b) [static] :62
bool Float4__op_Equality(Float4 a, Float4 b)
{
    return (((a.X == b.X) && (a.Y == b.Y)) && (a.Z == b.Z)) && (a.W == b.W);
}

// public static implicit operator float4(int4 a) [static] :69
Float4 Float4__op_Implicit2(::g::Uno::Int4 a)
{
    return Float4__New2((float)a.X, (float)a.Y, (float)a.Z, (float)a.W);
}

// public static operator !=(float4 a, float4 b) [static] :63
bool Float4__op_Inequality(Float4 a, Float4 b)
{
    return (((a.X != b.X) || (a.Y != b.Y)) || (a.Z != b.Z)) || (a.W != b.W);
}

// public static operator *(float a, float4 b) [static] :59
Float4 Float4__op_Multiply(float a, Float4 b)
{
    return Float4__New2(a * b.X, a * b.Y, a * b.Z, a * b.W);
}

// public static operator *(float4 a, float b) [static] :54
Float4 Float4__op_Multiply1(Float4 a, float b)
{
    return Float4__New2(a.X * b, a.Y * b, a.Z * b, a.W * b);
}

// public static operator *(float4 a, float4 b) [static] :49
Float4 Float4__op_Multiply2(Float4 a, Float4 b)
{
    return Float4__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z, a.W * b.W);
}

// public static operator -(float4 a, float4 b) [static] :48
Float4 Float4__op_Subtraction2(Float4 a, Float4 b)
{
    return Float4__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z, a.W - b.W);
}

// public static float4 get_Identity() [static] :11
Float4 Float4__Identity()
{
    return Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Float4x4.uno
// -------------------------------------------------------------------

// public intrinsic struct Float4x4 :8
// {
static void Float4x4_build(uType* type)
{
    ::STRINGS[38] = uString::Const(",");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[11] = ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<float4x4>*/, type, NULL);
    ::TYPES[10] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M11), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M12), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M13), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M14), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M21), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M22), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M23), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M24), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M31), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M32), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M33), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M34), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M41), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M42), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M43), 0,
        ::TYPES[10/*float*/], offsetof(Float4x4, M44), 0);
    type->Reflection.SetFields(16,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M13", 2),
        new uField("M14", 3),
        new uField("M21", 4),
        new uField("M22", 5),
        new uField("M23", 6),
        new uField("M24", 7),
        new uField("M31", 8),
        new uField("M32", 9),
        new uField("M33", 10),
        new uField("M34", 11),
        new uField("M41", 12),
        new uField("M42", 13),
        new uField("M43", 14),
        new uField("M44", 15));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Identity", NULL, (void*)Float4x4__get_Identity_fn, 0, true, type, 0),
        new uFunction("get_Item", NULL, (void*)Float4x4__get_Item_fn, 0, false, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float4x4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4x4__New1_fn, 0, true, type, 16, ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/]));
}

uStructType* Float4x4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.Alignment = alignof(Float4x4);
    options.ValueSize = sizeof(Float4x4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4x4", options);
    type->fp_build_ = Float4x4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4x4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Float4x4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4x4__ToString_fn;
    return type;
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :42
void Float4x4__ctor__fn(Float4x4* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    __this->ctor_(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public override sealed bool Equals(object o) :168
void Float4x4__Equals_fn(Float4x4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret4;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret4), ret4), void();
}

// public override sealed int GetHashCode() :169
void Float4x4__GetHashCode_fn(Float4x4* __this, uType* __type, int32_t* __retval)
{
    int32_t ret5;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret5), ret5), void();
}

// public static float4x4 get_Identity() :12
void Float4x4__get_Identity_fn(Float4x4* __retval)
{
    *__retval = Float4x4__Identity();
}

// public float4 get_Item(int index) :24
void Float4x4__get_Item_fn(Float4x4* __this, int32_t* index, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float4 value) :32
void Float4x4__set_Item_fn(Float4x4* __this, int32_t* index, ::g::Uno::Float4* value)
{
    __this->Item(*index, *value);
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :42
void Float4x4__New1_fn(float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44, Float4x4* __retval)
{
    *__retval = Float4x4__New1(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public static operator ==(float4x4 a, float4x4 b) :158
void Float4x4__op_Equality_fn(Float4x4* a, Float4x4* b, bool* __retval)
{
    *__retval = Float4x4__op_Equality(*a, *b);
}

// public override sealed string ToString() :171
void Float4x4__ToString_fn(Float4x4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float4x4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[10/*float*/]), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M13, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M14, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M23, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M24, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M33, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M34, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M41, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M42, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M43, ::TYPES[10/*float*/])), ::STRINGS[38/*","*/]), ::g::Uno::Float::ToString(__this->M44, ::TYPES[10/*float*/])), void();
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [instance] :42
void Float4x4::ctor_(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M14 = m14;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M24 = m24;
    M31 = m31;
    M32 = m32;
    M33 = m33;
    M34 = m34;
    M41 = m41;
    M42 = m42;
    M43 = m43;
    M44 = m44;
}

// public float4 get_Item(int index) [instance] :24
::g::Uno::Float4 Float4x4::Item(int32_t index)
{
    uStackFrame __("float4x4", "get_Item(int)");

    if (index == 0)
        return ::g::Uno::Float4__New2(M11, M12, M13, M14);
    else if (index == 1)
        return ::g::Uno::Float4__New2(M21, M22, M23, M24);
    else if (index == 2)
        return ::g::Uno::Float4__New2(M31, M32, M33, M34);
    else if (index == 3)
        return ::g::Uno::Float4__New2(M41, M42, M43, M44);
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float4 value) [instance] :32
void Float4x4::Item(int32_t index, ::g::Uno::Float4 value)
{
    uStackFrame __("float4x4", "set_Item(int,float4)");

    if (index == 0)
    {
        M11 = value.X;
        M12 = value.Y;
        M13 = value.Z;
        M14 = value.W;
    }
    else if (index == 1)
    {
        M21 = value.X;
        M22 = value.Y;
        M23 = value.Z;
        M24 = value.W;
    }
    else if (index == 2)
    {
        M31 = value.X;
        M32 = value.Y;
        M33 = value.Z;
        M34 = value.W;
    }
    else if (index == 3)
    {
        M41 = value.X;
        M42 = value.Y;
        M43 = value.Z;
        M44 = value.W;
    }
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :42
Float4x4 Float4x4__New1(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    Float4x4 obj1;
    obj1.ctor_(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    return obj1;
}

// public static operator ==(float4x4 a, float4x4 b) [static] :158
bool Float4x4__op_Equality(Float4x4 a, Float4x4 b)
{
    bool ret6;
    return (::g::Uno::Generic__Equals_fn(::TYPES[11/*Uno.Generic.Equals<float4x4>*/], uCRef(a), uCRef(b), &ret6), ret6);
}

// public static float4x4 get_Identity() [static] :12
Float4x4 Float4x4__Identity()
{
    return Float4x4__New1(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/FormatException.uno
// -------------------------------------------------------------------------------------

// public sealed class FormatException :6
// {
static void FormatException_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FormatException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* FormatException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FormatException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.FormatException", options);
    type->fp_build_ = FormatException_build;
    return type;
}

// public FormatException(string message) :8
void FormatException__ctor_3_fn(FormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public FormatException New(string message) :8
void FormatException__New4_fn(uString* message, FormatException** __retval)
{
    *__retval = FormatException::New4(message);
}

// public FormatException(string message) [instance] :8
void FormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public FormatException New(string message) [static] :8
FormatException* FormatException::New4(uString* message)
{
    FormatException* obj1 = (FormatException*)uNew(FormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<TResult>() :6
uDelegateType* Func_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T, TResult>(T arg) :9
uDelegateType* Func1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`2", 1, 2);
    type->SetSignature(type->T(1),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, TResult>(T1 arg1, T2 arg2) :12
uDelegateType* Func2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`3", 2, 3);
    type->SetSignature(type->T(2),
        type->T(0),
        type->T(1));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, TResult>(T1 arg1, T2 arg2, T3 arg3) :15
uDelegateType* Func3_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`4", 3, 4);
    type->SetSignature(type->T(3),
        type->T(0),
        type->T(1),
        type->T(2));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4) :18
uDelegateType* Func4_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`5", 4, 5);
    type->SetSignature(type->T(4),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) :21
uDelegateType* Func5_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`6", 5, 6);
    type->SetSignature(type->T(5),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) :24
uDelegateType* Func6_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`7", 6, 7);
    type->SetSignature(type->T(6),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) :27
uDelegateType* Func7_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`8", 7, 8);
    type->SetSignature(type->T(7),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) :30
uDelegateType* Func8_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`9", 8, 9);
    type->SetSignature(type->T(8),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) :33
uDelegateType* Func9_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`10", 9, 10);
    type->SetSignature(type->T(9),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) :36
uDelegateType* Func10_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`11", 10, 11);
    type->SetSignature(type->T(10),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) :39
uDelegateType* Func11_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`12", 11, 12);
    type->SetSignature(type->T(11),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12) :42
uDelegateType* Func12_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`13", 12, 13);
    type->SetSignature(type->T(12),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) :45
uDelegateType* Func13_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`14", 13, 14);
    type->SetSignature(type->T(13),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14) :48
uDelegateType* Func14_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`15", 14, 15);
    type->SetSignature(type->T(14),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15) :51
uDelegateType* Func15_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`16", 15, 16);
    type->SetSignature(type->T(15),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15, T16 arg16) :54
uDelegateType* Func16_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`17", 16, 17);
    type->SetSignature(type->T(16),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14),
        type->T(15));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/GC.uno
// -------------------------------------------------------------

// public static class GC :6
// {
static void GC_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("SuppressFinalize", NULL, (void*)GC__SuppressFinalize_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()));
}

uClassType* GC_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.GC", options);
    type->fp_build_ = GC_build;
    return type;
}

// public static void SuppressFinalize(object obj) :8
void GC__SuppressFinalize_fn(uObject* obj)
{
    GC::SuppressFinalize(obj);
}

// public static void SuppressFinalize(object obj) [static] :8
void GC::SuppressFinalize(uObject* obj)
{
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Generic.uno
// ------------------------------------------------------------------

// public static class Generic :7
// {
static void Generic_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Equals`1", type->MethodTypes[0], (void*)Generic__Equals_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(0)));
}

uClassType* Generic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Generic", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Generic_build;
    return type;
}

// public static bool Equals<T>(T left, T right) :9
void Generic__Equals_fn(uType* __type, void* left, void* right, bool* __retval)
{
    uType* type = __type->U(0);
    return *__retval = U_IS_OBJECT(type)
            ? (uObject*)left == (uObject*)right || (
                    (uObject*)left &&
                    (uObject*)right &&
                    ((uObject*)left)->Equals((uObject*)right))
            : memcmp(left, right, type->ValueSize) == 0, void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IDisposable.uno
// ----------------------------------------------------------------------

// public abstract interface IDisposable :6
// {
uInterfaceType* IDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.IDisposable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Dispose", NULL, NULL, offsetof(IDisposable, fp_Dispose), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/IndexOutOfRangeException.uno
// ----------------------------------------------------------------------------------------------

// public sealed class IndexOutOfRangeException :6
// {
static void IndexOutOfRangeException_build(uType* type)
{
    ::STRINGS[39] = uString::Const("Index out of range");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IndexOutOfRangeException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* IndexOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(IndexOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IndexOutOfRangeException", options);
    type->fp_build_ = IndexOutOfRangeException_build;
    type->fp_ctor_ = (void*)IndexOutOfRangeException__New4_fn;
    return type;
}

// public IndexOutOfRangeException() :8
void IndexOutOfRangeException__ctor_3_fn(IndexOutOfRangeException* __this)
{
    __this->ctor_3();
}

// public IndexOutOfRangeException New() :8
void IndexOutOfRangeException__New4_fn(IndexOutOfRangeException** __retval)
{
    *__retval = IndexOutOfRangeException::New4();
}

// public IndexOutOfRangeException() [instance] :8
void IndexOutOfRangeException::ctor_3()
{
    ctor_1(::STRINGS[39/*"Index out o...*/]);
}

// public IndexOutOfRangeException New() [static] :8
IndexOutOfRangeException* IndexOutOfRangeException::New4()
{
    IndexOutOfRangeException* obj1 = (IndexOutOfRangeException*)uNew(IndexOutOfRangeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Int.uno
// --------------------------------------------------------------

// public intrinsic struct Int :11
// {
static void Int_build(uType* type)
{
    ::STRINGS[31] = uString::Const("str");
    ::TYPES[4] = uObject_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Int__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Int__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Int_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int32_t);
    options.ValueSize = sizeof(int32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int", options);
    type->fp_build_ = Int_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Int__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void Int__Equals_fn(int32_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int32_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :23
void Int__GetHashCode_fn(int32_t* __this, uType* __type, int32_t* __retval)
{
    return *__retval = *__this, void();
}

// public static int Parse(string str) :52
void Int__Parse_fn(uString* str, int32_t* __retval)
{
    *__retval = Int::Parse(str);
}

// public override sealed string ToString() :35
void Int__ToString_fn(int32_t* __this, uType* __type, uString** __retval)
{
    char buf[12];
    int len = snprintf(buf, sizeof(buf), "%d", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}

// public static bool TryParse(string str, int& result) :88
void Int__TryParse_fn(uString* str, int32_t* result, bool* __retval)
{
    *__retval = Int::TryParse(str, result);
}

// public static int Parse(string str) [static] :52
int32_t Int::Parse(uString* str)
{
    uStackFrame __("int", "Parse(string)");

    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    errno = 0;
    uCString cstr(str);
    const char* trimmed = cstr.Ptr;
    while (*trimmed && isspace(*trimmed))
        trimmed++;
    char* end;
    long retval = strtol(trimmed, &end, 10);
    while (*end && isspace(*end))
        end++;
    
    if (errno == ERANGE || retval > INT_MAX || retval < INT_MIN)
        U_THROW(::g::Uno::OverflowException::New4(uString::Const("Value was either too large or too small for int")));
    
    if (!strlen(trimmed) || strlen(end))
        U_THROW(::g::Uno::FormatException::New4(uString::Const("Unable to convert string to int")));
    
    return (int)retval;
}

// public static bool TryParse(string str, int& result) [static] :88
bool Int::TryParse(uString* str, int32_t* result)
{
    if (::g::Uno::String::op_Equality(str, NULL))
    {
        *result = 0;
        return false;
    }

    errno = 0;
    uCString cstr(str);
    const char* trimmed = cstr.Ptr;
    while (*trimmed && isspace(*trimmed))
        trimmed++;
    char* end;
    long retval = strtol(trimmed, &end, 10);
    while (*end && isspace(*end))
        end++;
    
    if (errno == ERANGE || !strlen(trimmed) || strlen(end) ||
            retval > INT_MAX || retval < INT_MIN)
    {
        *result = 0;
        return false;
    }
    
    *result = (int)retval;
    return true;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Int2.uno
// ---------------------------------------------------------------

// public intrinsic struct Int2 :7
// {
static void Int2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Int2, X), 0,
        ::TYPES[8/*int*/], offsetof(Int2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Int2__New1_fn, 0, true, type, 1, ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int2__New2_fn, 0, true, type, 2, ::TYPES[8/*int*/], ::TYPES[8/*int*/]));
}

uStructType* Int2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Int2);
    options.ValueSize = sizeof(Int2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int2", options);
    type->fp_build_ = Int2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Int2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int2__ToString_fn;
    return type;
}

// public Int2(int xy) :28
void Int2__ctor__fn(Int2* __this, int32_t* xy)
{
    __this->ctor_(*xy);
}

// public Int2(int x, int y) :29
void Int2__ctor_1_fn(Int2* __this, int32_t* x, int32_t* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :52
void Int2__Equals_fn(Int2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :53
void Int2__GetHashCode_fn(Int2* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Int2 New(int xy) :28
void Int2__New1_fn(int32_t* xy, Int2* __retval)
{
    *__retval = Int2__New1(*xy);
}

// public Int2 New(int x, int y) :29
void Int2__New2_fn(int32_t* x, int32_t* y, Int2* __retval)
{
    *__retval = Int2__New2(*x, *y);
}

// public static operator +(int2 a, int2 b) :31
void Int2__op_Addition1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Addition1(*a, *b);
}

// public static operator /(int2 a, int2 b) :34
void Int2__op_Division1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Division1(*a, *b);
}

// public static explicit operator int2(float2 v) :50
void Int2__op_Explicit1_fn(::g::Uno::Float2* v, Int2* __retval)
{
    *__retval = Int2__op_Explicit1(*v);
}

// public static implicit operator int2(ushort2 v) :48
void Int2__op_Implicit4_fn(::g::Uno::UShort2* v, Int2* __retval)
{
    *__retval = Int2__op_Implicit4(*v);
}

// public static operator !=(int2 a, int2 b) :42
void Int2__op_Inequality_fn(Int2* a, Int2* b, bool* __retval)
{
    *__retval = Int2__op_Inequality(*a, *b);
}

// public static operator *(int2 a, int b) :38
void Int2__op_Multiply_fn(Int2* a, int32_t* b, Int2* __retval)
{
    *__retval = Int2__op_Multiply(*a, *b);
}

// public static operator *(int2 a, int2 b) :33
void Int2__op_Multiply1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Multiply1(*a, *b);
}

// public static operator -(int2 a, int2 b) :32
void Int2__op_Subtraction1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Subtraction1(*a, *b);
}

// public override sealed string ToString() :54
void Int2__ToString_fn(Int2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[8/*int*/])), void();
}

// public Int2(int xy) [instance] :28
void Int2::ctor_(int32_t xy)
{
    X = (Y = xy);
}

// public Int2(int x, int y) [instance] :29
void Int2::ctor_1(int32_t x, int32_t y)
{
    X = x;
    Y = y;
}

// public Int2 New(int xy) [static] :28
Int2 Int2__New1(int32_t xy)
{
    Int2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Int2 New(int x, int y) [static] :29
Int2 Int2__New2(int32_t x, int32_t y)
{
    Int2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(int2 a, int2 b) [static] :31
Int2 Int2__op_Addition1(Int2 a, Int2 b)
{
    return Int2__New2(a.X + b.X, a.Y + b.Y);
}

// public static operator /(int2 a, int2 b) [static] :34
Int2 Int2__op_Division1(Int2 a, Int2 b)
{
    return Int2__New2(a.X / b.X, a.Y / b.Y);
}

// public static explicit operator int2(float2 v) [static] :50
Int2 Int2__op_Explicit1(::g::Uno::Float2 v)
{
    return Int2__New2((int32_t)v.X, (int32_t)v.Y);
}

// public static implicit operator int2(ushort2 v) [static] :48
Int2 Int2__op_Implicit4(::g::Uno::UShort2 v)
{
    return Int2__New2((int32_t)v.X, (int32_t)v.Y);
}

// public static operator !=(int2 a, int2 b) [static] :42
bool Int2__op_Inequality(Int2 a, Int2 b)
{
    return (a.X != b.X) || (a.Y != b.Y);
}

// public static operator *(int2 a, int b) [static] :38
Int2 Int2__op_Multiply(Int2 a, int32_t b)
{
    return Int2__New2(a.X * b, a.Y * b);
}

// public static operator *(int2 a, int2 b) [static] :33
Int2 Int2__op_Multiply1(Int2 a, Int2 b)
{
    return Int2__New2(a.X * b.X, a.Y * b.Y);
}

// public static operator -(int2 a, int2 b) [static] :32
Int2 Int2__op_Subtraction1(Int2 a, Int2 b)
{
    return Int2__New2(a.X - b.X, a.Y - b.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Int3.uno
// ---------------------------------------------------------------

// public intrinsic struct Int3 :7
// {
static void Int3_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Int3, X), 0,
        ::TYPES[8/*int*/], offsetof(Int3, Y), 0,
        ::TYPES[8/*int*/], offsetof(Int3, Z), 0);
    type->Reflection.SetFields(3,
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Int3__New2_fn, 0, true, type, 3, ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/]));
}

uStructType* Int3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.Alignment = alignof(Int3);
    options.ValueSize = sizeof(Int3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int3", options);
    type->fp_build_ = Int3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Int3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int3__ToString_fn;
    return type;
}

// public Int3(int x, int y, int z) :30
void Int3__ctor_1_fn(Int3* __this, int32_t* x, int32_t* y, int32_t* z)
{
    __this->ctor_1(*x, *y, *z);
}

// public override sealed bool Equals(object o) :50
void Int3__Equals_fn(Int3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :51
void Int3__GetHashCode_fn(Int3* __this, uType* __type, int32_t* __retval)
{
    int32_t ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret6), ret6), void();
}

// public Int3 New(int x, int y, int z) :30
void Int3__New2_fn(int32_t* x, int32_t* y, int32_t* z, Int3* __retval)
{
    *__retval = Int3__New2(*x, *y, *z);
}

// public override sealed string ToString() :48
void Int3__ToString_fn(Int3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[8/*int*/])), void();
}

// public Int3(int x, int y, int z) [instance] :30
void Int3::ctor_1(int32_t x, int32_t y, int32_t z)
{
    X = x;
    Y = y;
    Z = z;
}

// public Int3 New(int x, int y, int z) [static] :30
Int3 Int3__New2(int32_t x, int32_t y, int32_t z)
{
    Int3 obj1;
    obj1.ctor_1(x, y, z);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Int4.uno
// ---------------------------------------------------------------

// public intrinsic struct Int4 :7
// {
static void Int4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Int4, X), 0,
        ::TYPES[8/*int*/], offsetof(Int4, Y), 0,
        ::TYPES[8/*int*/], offsetof(Int4, Z), 0,
        ::TYPES[8/*int*/], offsetof(Int4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Item", NULL, (void*)Int4__get_Item_fn, 0, false, ::TYPES[8/*int*/], 1, ::TYPES[8/*int*/]),
        new uFunction("set_Item", NULL, (void*)Int4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::TYPES[8/*int*/], ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int4__New2_fn, 0, true, type, 4, ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int4__New7_fn, 0, true, type, 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()));
}

uStructType* Int4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Int4);
    options.ValueSize = sizeof(Int4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int4", options);
    type->fp_build_ = Int4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Int4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int4__ToString_fn;
    return type;
}

// public Int4(int x, int y, int z, int w) :32
void Int4__ctor_1_fn(Int4* __this, int32_t* x, int32_t* y, int32_t* z, int32_t* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Int4(int2 xy, int2 zw) :36
void Int4__ctor_6_fn(Int4* __this, ::g::Uno::Int2* xy, ::g::Uno::Int2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public override sealed bool Equals(object o) :60
void Int4__Equals_fn(Int4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :61
void Int4__GetHashCode_fn(Int4* __this, uType* __type, int32_t* __retval)
{
    int32_t ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret10), ret10), void();
}

// public int get_Item(int index) :14
void Int4__get_Item_fn(Int4* __this, int32_t* index, int32_t* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, int value) :22
void Int4__set_Item_fn(Int4* __this, int32_t* index, int32_t* value)
{
    __this->Item(*index, *value);
}

// public Int4 New(int x, int y, int z, int w) :32
void Int4__New2_fn(int32_t* x, int32_t* y, int32_t* z, int32_t* w, Int4* __retval)
{
    *__retval = Int4__New2(*x, *y, *z, *w);
}

// public Int4 New(int2 xy, int2 zw) :36
void Int4__New7_fn(::g::Uno::Int2* xy, ::g::Uno::Int2* zw, Int4* __retval)
{
    *__retval = Int4__New7(*xy, *zw);
}

// public override sealed string ToString() :62
void Int4__ToString_fn(Int4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->W, ::TYPES[8/*int*/])), void();
}

// public Int4(int x, int y, int z, int w) [instance] :32
void Int4::ctor_1(int32_t x, int32_t y, int32_t z, int32_t w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Int4(int2 xy, int2 zw) [instance] :36
void Int4::ctor_6(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public int get_Item(int index) [instance] :14
int32_t Int4::Item(int32_t index)
{
    uStackFrame __("int4", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, int value) [instance] :22
void Int4::Item(int32_t index, int32_t value)
{
    uStackFrame __("int4", "set_Item(int,int)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Int4 New(int x, int y, int z, int w) [static] :32
Int4 Int4__New2(int32_t x, int32_t y, int32_t z, int32_t w)
{
    Int4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}

// public Int4 New(int2 xy, int2 zw) [static] :36
Int4 Int4__New7(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    Int4 obj5;
    obj5.ctor_6(xy, zw);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/IntPtr.uno
// -----------------------------------------------------------------

// public intrinsic struct IntPtr :11
// {
static void IntPtr_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* IntPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IntPtr", options);
    type->fp_build_ = IntPtr_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))IntPtr__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))IntPtr__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))IntPtr__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :73
void IntPtr__Equals_fn(void** __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :79
void IntPtr__GetHashCode_fn(void** __this, uType* __type, int32_t* __retval)
{
    if (sizeof(void*) > 4)
    {
        union
        {
            void *ptr;
            uint32_t data[2];
        } u;
        u.ptr = *__this;
        return *__retval = u.data[0] ^ u.data[1], void();
    }
    else
        return *__retval = (int)(intptr_t)*__this, void();
}

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) :32
void IntPtr__op_Equality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Equality(*left, *right);
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) :42
void IntPtr__op_Inequality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Inequality(*left, *right);
}

// public override sealed string ToString() :107
void IntPtr__ToString_fn(void** __this, uType* __type, uString** __retval)
{
    char buf[19];
    int len = snprintf(buf, sizeof(buf), "0x%" PRIxPTR, *(intptr_t*)__this);
    return *__retval = uString::Ansi(buf, len), void();
}

void* IntPtr::Zero_;

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) [static] :32
bool IntPtr::op_Equality(void* left, void* right)
{
    return left == right;
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) [static] :42
bool IntPtr::op_Inequality(void* left, void* right)
{
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/InvalidCastException.uno
// ------------------------------------------------------------------------------------------

// public sealed class InvalidCastException :6
// {
static void InvalidCastException_build(uType* type)
{
    ::STRINGS[40] = uString::Const("Invalid cast");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidCastException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidCastException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidCastException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidCastException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidCastException", options);
    type->fp_build_ = InvalidCastException_build;
    type->fp_ctor_ = (void*)InvalidCastException__New4_fn;
    return type;
}

// public InvalidCastException() :13
void InvalidCastException__ctor_3_fn(InvalidCastException* __this)
{
    __this->ctor_3();
}

// public InvalidCastException(string message) :8
void InvalidCastException__ctor_4_fn(InvalidCastException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidCastException New() :13
void InvalidCastException__New4_fn(InvalidCastException** __retval)
{
    *__retval = InvalidCastException::New4();
}

// public InvalidCastException New(string message) :8
void InvalidCastException__New5_fn(uString* message, InvalidCastException** __retval)
{
    *__retval = InvalidCastException::New5(message);
}

// public InvalidCastException() [instance] :13
void InvalidCastException::ctor_3()
{
    ctor_4(::STRINGS[40/*"Invalid cast"*/]);
}

// public InvalidCastException(string message) [instance] :8
void InvalidCastException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidCastException New() [static] :13
InvalidCastException* InvalidCastException::New4()
{
    InvalidCastException* obj2 = (InvalidCastException*)uNew(InvalidCastException_typeof());
    obj2->ctor_3();
    return obj2;
}

// public InvalidCastException New(string message) [static] :8
InvalidCastException* InvalidCastException::New5(uString* message)
{
    InvalidCastException* obj1 = (InvalidCastException*)uNew(InvalidCastException_typeof());
    obj1->ctor_4(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/InvalidOperationException.uno
// -----------------------------------------------------------------------------------------------

// public sealed class InvalidOperationException :6
// {
static void InvalidOperationException_build(uType* type)
{
    ::STRINGS[41] = uString::Const("Invalid operation");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidOperationException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidOperationException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidOperationException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidOperationException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidOperationException", options);
    type->fp_build_ = InvalidOperationException_build;
    type->fp_ctor_ = (void*)InvalidOperationException__New4_fn;
    return type;
}

// public InvalidOperationException() :8
void InvalidOperationException__ctor_3_fn(InvalidOperationException* __this)
{
    __this->ctor_3();
}

// public InvalidOperationException(string message) :13
void InvalidOperationException__ctor_4_fn(InvalidOperationException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidOperationException New() :8
void InvalidOperationException__New4_fn(InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New4();
}

// public InvalidOperationException New(string message) :13
void InvalidOperationException__New5_fn(uString* message, InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New5(message);
}

// public InvalidOperationException() [instance] :8
void InvalidOperationException::ctor_3()
{
    ctor_1(::STRINGS[41/*"Invalid ope...*/]);
}

// public InvalidOperationException(string message) [instance] :13
void InvalidOperationException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidOperationException New() [static] :8
InvalidOperationException* InvalidOperationException::New4()
{
    InvalidOperationException* obj1 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidOperationException New(string message) [static] :13
InvalidOperationException* InvalidOperationException::New5(uString* message)
{
    InvalidOperationException* obj2 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Tuple.uno
// ----------------------------------------------------------------

// internal abstract interface ITuple :6
// {
uInterfaceType* ITuple_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.ITuple", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Long.uno
// ---------------------------------------------------------------

// public intrinsic struct Long :11
// {
static void Long_build(uType* type)
{
    ::STRINGS[31] = uString::Const("str");
    ::TYPES[4] = uObject_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("Parse", NULL, (void*)Long__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uStructType* Long_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int64_t);
    options.ValueSize = sizeof(int64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Long", options);
    type->fp_build_ = Long_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Long__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Long__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Long__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void Long__Equals_fn(int64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int64_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :23
void Long__GetHashCode_fn(int64_t* __this, uType* __type, int32_t* __retval)
{
    int hash = 27;
    hash = (13 * hash) + (*__this & UINT32_MAX);
    hash = (13 * hash) + (*__this >> 32);
    return *__retval = hash, void();
}

// public static long Parse(string str) :54
void Long__Parse_fn(uString* str, int64_t* __retval)
{
    *__retval = Long::Parse(str);
}

// public override sealed string ToString() :38
void Long__ToString_fn(int64_t* __this, uType* __type, uString** __retval)
{
    char buf[21];
    int len = snprintf(buf, sizeof(buf), "%lld", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}

// public static long Parse(string str) [static] :54
int64_t Long::Parse(uString* str)
{
    uStackFrame __("long", "Parse(string)");

    if (::g::Uno::String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    errno = 0;
    uCString cstr(str);
    const char* trimmed = cstr.Ptr;
    while (*trimmed && isspace(*trimmed))
        trimmed++;
    char* end;
    long long retval = strtoll(trimmed, &end, 10);
    while (*end && isspace(*end))
        end++;
    
    if (errno == ERANGE)
        U_THROW(::g::Uno::OverflowException::New4(uString::Const("Value was either too large or too small for long")));
    
    if (!strlen(trimmed) || strlen(end))
        U_THROW(::g::Uno::FormatException::New4(uString::Const("Unable to convert string to long")));
    
    return (int64_t)retval;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Math.uno
// ---------------------------------------------------------------

// public static class Math :8
// {
// static generated Math() :8
static void Math__cctor__fn(uType* __type)
{
    Math::positivePowersOfTen_ = uArray::Init<double>(::TYPES[12/*double[]*/], 16, 1.0, 10.0, 100.0, 1000.0, 10000.0, 100000.0, 1000000.0, 10000000.0, 100000000.0, 1000000000.0, 10000000000.0, 100000000000.0, 1000000000000.0, 10000000000000.0, 100000000000000.0, 1e+15);
    Math::negativePowersOfTen_ = uArray::Init<double>(::TYPES[12/*double[]*/], 16, 1.0, 0.1, 0.01, 0.001, 0.0001, 1e-05, 1e-06, 1e-07, 1e-08, 1e-09, 1e-10, 1e-11, 1e-12, 1e-13, 1e-14, 1e-15);
}

static void Math_build(uType* type)
{
    ::STRINGS[42] = uString::Const("Negating the minimum value of a twos complement number is invalid.");
    ::STRINGS[43] = uString::Const("digits");
    ::TYPES[12] = ::g::Uno::Double_typeof()->Array();
    type->SetFields(0,
        ::TYPES[12/*double[]*/], (uintptr_t)&Math::positivePowersOfTen_, uFieldFlagsStatic,
        ::TYPES[12/*double[]*/], (uintptr_t)&Math::negativePowersOfTen_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(84,
        new uFunction("Abs", NULL, (void*)Math__Abs_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs5_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Acos", NULL, (void*)Math__Acos_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Acos", NULL, (void*)Math__Acos1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Asin", NULL, (void*)Math__Asin_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Atan", NULL, (void*)Math__Atan_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Atan2", NULL, (void*)Math__Atan21_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Atan2", NULL, (void*)Math__Atan22_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp_fn, 0, true, ::g::Uno::Double_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp1_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp2_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp3_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp4_fn, 0, true, ::g::Uno::Float3_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp6_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp8_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Cos", NULL, (void*)Math__Cos_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Cos", NULL, (void*)Math__Cos1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians3_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Exp", NULL, (void*)Math__Exp_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Exp", NULL, (void*)Math__Exp1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Exp2", NULL, (void*)Math__Exp21_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Exp2", NULL, (void*)Math__Exp22_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Fract", NULL, (void*)Math__Fract_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("IsPow2", NULL, (void*)Math__IsPow2_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp1_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp2_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp4_fn, 0, true, ::g::Uno::Float3_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp6_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float4_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Log", NULL, (void*)Math__Log_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Log", NULL, (void*)Math__Log1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Log10", NULL, (void*)Math__Log10_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Log2", NULL, (void*)Math__Log21_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Log2", NULL, (void*)Math__Log22_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max2_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max3_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max4_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max5_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max6_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max7_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max8_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max10_fn, 0, true, ::g::Uno::Int2_typeof(), 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min2_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min3_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min4_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min5_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min6_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min8_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Mod", NULL, (void*)Math__Mod_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Mod", NULL, (void*)Math__Mod1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("NextPow2", NULL, (void*)Math__NextPow2_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Pow", NULL, (void*)Math__Pow_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Pow", NULL, (void*)Math__Pow1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees3_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round1_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round4_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Saturate", NULL, (void*)Math__Saturate1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sign", NULL, (void*)Math__Sign_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sign", NULL, (void*)Math__Sign1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sin", NULL, (void*)Math__Sin_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sin", NULL, (void*)Math__Sin1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt4_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Tan", NULL, (void*)Math__Tan_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Tan", NULL, (void*)Math__Tan1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()));
}

uClassType* Math_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Math", options);
    type->fp_build_ = Math_build;
    type->fp_cctor_ = Math__cctor__fn;
    return type;
}

// public static double Abs(double x) :240
void Math__Abs_fn(double* x, double* __retval)
{
    *__retval = Math::Abs(*x);
}

// public static float Abs(float x) :241
void Math__Abs1_fn(float* x, float* __retval)
{
    *__retval = Math::Abs1(*x);
}

// public static float2 Abs(float2 a) :242
void Math__Abs2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Abs2(*a);
}

// public static int Abs(int x) :270
void Math__Abs5_fn(int32_t* x, int32_t* __retval)
{
    *__retval = Math::Abs5(*x);
}

// public static double Acos(double radians) :99
void Math__Acos_fn(double* radians, double* __retval)
{
    *__retval = Math::Acos(*radians);
}

// public static float Acos(float radians) :106
void Math__Acos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Acos1(*radians);
}

// public static double Asin(double radians) :82
void Math__Asin_fn(double* radians, double* __retval)
{
    *__retval = Math::Asin(*radians);
}

// public static double Atan(double radians) :116
void Math__Atan_fn(double* radians, double* __retval)
{
    *__retval = Math::Atan(*radians);
}

// public static double Atan2(double y, double x) :133
void Math__Atan21_fn(double* y, double* x, double* __retval)
{
    *__retval = Math::Atan21(*y, *x);
}

// public static float Atan2(float y, float x) :140
void Math__Atan22_fn(float* y, float* x, float* __retval)
{
    *__retval = Math::Atan22(*y, *x);
}

// public static double Ceil(double x) :324
void Math__Ceil_fn(double* x, double* __retval)
{
    *__retval = Math::Ceil(*x);
}

// public static float Ceil(float x) :331
void Math__Ceil1_fn(float* x, float* __retval)
{
    *__retval = Math::Ceil1(*x);
}

// public static float2 Ceil(float2 v) :337
void Math__Ceil2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Ceil2(*v);
}

// public static double Clamp(double x, double minimum, double maximum) :388
void Math__Clamp_fn(double* x, double* minimum, double* maximum, double* __retval)
{
    *__retval = Math::Clamp(*x, *minimum, *maximum);
}

// public static float Clamp(float x, float minimum, float maximum) :389
void Math__Clamp1_fn(float* x, float* minimum, float* maximum, float* __retval)
{
    *__retval = Math::Clamp1(*x, *minimum, *maximum);
}

// public static float2 Clamp(float2 x, float minimum, float maximum) :390
void Math__Clamp2_fn(::g::Uno::Float2* x, float* minimum, float* maximum, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Clamp2(*x, *minimum, *maximum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) :391
void Math__Clamp3_fn(::g::Uno::Float2* x, ::g::Uno::Float2* minimum, ::g::Uno::Float2* maximum, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Clamp3(*x, *minimum, *maximum);
}

// public static float3 Clamp(float3 x, float minimum, float maximum) :392
void Math__Clamp4_fn(::g::Uno::Float3* x, float* minimum, float* maximum, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Clamp4(*x, *minimum, *maximum);
}

// public static float4 Clamp(float4 x, float minimum, float maximum) :394
void Math__Clamp6_fn(::g::Uno::Float4* x, float* minimum, float* maximum, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Clamp6(*x, *minimum, *maximum);
}

// public static int Clamp(int x, int minimum, int maximum) :396
void Math__Clamp8_fn(int32_t* x, int32_t* minimum, int32_t* maximum, int32_t* __retval)
{
    *__retval = Math::Clamp8(*x, *minimum, *maximum);
}

// public static double Cos(double radians) :48
void Math__Cos_fn(double* radians, double* __retval)
{
    *__retval = Math::Cos(*radians);
}

// public static float Cos(float radians) :55
void Math__Cos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Cos1(*radians);
}

// public static double DegreesToRadians(double degrees) :19
void Math__DegreesToRadians_fn(double* degrees, double* __retval)
{
    *__retval = Math::DegreesToRadians(*degrees);
}

// public static float DegreesToRadians(float degrees) :20
void Math__DegreesToRadians1_fn(float* degrees, float* __retval)
{
    *__retval = Math::DegreesToRadians1(*degrees);
}

// public static float3 DegreesToRadians(float3 degrees) :22
void Math__DegreesToRadians3_fn(::g::Uno::Float3* degrees, ::g::Uno::Float3* __retval)
{
    *__retval = Math::DegreesToRadians3(*degrees);
}

// public static double Exp(double x) :170
void Math__Exp_fn(double* x, double* __retval)
{
    *__retval = Math::Exp(*x);
}

// public static float Exp(float x) :171
void Math__Exp1_fn(float* x, float* __retval)
{
    *__retval = Math::Exp1(*x);
}

// public static double Exp2(double x) :202
void Math__Exp21_fn(double* x, double* __retval)
{
    *__retval = Math::Exp21(*x);
}

// public static float Exp2(float x) :203
void Math__Exp22_fn(float* x, float* __retval)
{
    *__retval = Math::Exp22(*x);
}

// public static double Floor(double x) :307
void Math__Floor_fn(double* x, double* __retval)
{
    *__retval = Math::Floor(*x);
}

// public static float Floor(float x) :314
void Math__Floor1_fn(float* x, float* __retval)
{
    *__retval = Math::Floor1(*x);
}

// public static float2 Floor(float2 v) :320
void Math__Floor2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Floor2(*v);
}

// public static double Fract(double x) :341
void Math__Fract_fn(double* x, double* __retval)
{
    *__retval = Math::Fract(*x);
}

// public static bool IsPow2(int x) :568
void Math__IsPow2_fn(int32_t* x, bool* __retval)
{
    *__retval = Math::IsPow2(*x);
}

// public static float Lerp(float a, float b, float t) :405
void Math__Lerp1_fn(float* a, float* b, float* t, float* __retval)
{
    *__retval = Math::Lerp1(*a, *b, *t);
}

// public static float2 Lerp(float2 a, float2 b, float t) :406
void Math__Lerp2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Lerp2(*a, *b, *t);
}

// public static float3 Lerp(float3 a, float3 b, float t) :408
void Math__Lerp4_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, float* t, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Lerp4(*a, *b, *t);
}

// public static float4 Lerp(float4 a, float4 b, float t) :410
void Math__Lerp6_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Lerp6(*a, *b, *t);
}

// public static double Log(double x) :176
void Math__Log_fn(double* x, double* __retval)
{
    *__retval = Math::Log(*x);
}

// public static float Log(float x) :183
void Math__Log1_fn(float* x, float* __retval)
{
    *__retval = Math::Log1(*x);
}

// public static double Log10(double x) :193
void Math__Log10_fn(double* x, double* __retval)
{
    *__retval = Math::Log10(*x);
}

// public static double Log2(double x) :208
void Math__Log21_fn(double* x, double* __retval)
{
    *__retval = Math::Log21(*x);
}

// public static float Log2(float x) :209
void Math__Log22_fn(float* x, float* __retval)
{
    *__retval = Math::Log22(*x);
}

// public static double Max(double a, double b) :356
void Math__Max_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Max(*a, *b);
}

// public static float Max(float a, float b) :357
void Math__Max1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Max1(*a, *b);
}

// public static float2 Max(float2 a, float b) :358
void Math__Max2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max2(*a, *b);
}

// public static float2 Max(float2 a, float2 b) :359
void Math__Max3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max3(*a, *b);
}

// public static float3 Max(float3 a, float b) :360
void Math__Max4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Max4(*a, *b);
}

// public static float3 Max(float3 a, float3 b) :361
void Math__Max5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Max5(*a, *b);
}

// public static float4 Max(float4 a, float b) :362
void Math__Max6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Max6(*a, *b);
}

// public static float4 Max(float4 a, float4 b) :363
void Math__Max7_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Max7(*a, *b);
}

// public static int Max(int a, int b) :364
void Math__Max8_fn(int32_t* a, int32_t* b, int32_t* __retval)
{
    *__retval = Math::Max8(*a, *b);
}

// public static int2 Max(int2 a, int2 b) :366
void Math__Max10_fn(::g::Uno::Int2* a, ::g::Uno::Int2* b, ::g::Uno::Int2* __retval)
{
    *__retval = Math::Max10(*a, *b);
}

// public static double Min(double a, double b) :372
void Math__Min_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Min(*a, *b);
}

// public static float Min(float a, float b) :373
void Math__Min1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Min1(*a, *b);
}

// public static float2 Min(float2 a, float b) :374
void Math__Min2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Min2(*a, *b);
}

// public static float2 Min(float2 a, float2 b) :375
void Math__Min3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Min3(*a, *b);
}

// public static float3 Min(float3 a, float b) :376
void Math__Min4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Min4(*a, *b);
}

// public static float3 Min(float3 a, float3 b) :377
void Math__Min5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Min5(*a, *b);
}

// public static float4 Min(float4 a, float b) :378
void Math__Min6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Min6(*a, *b);
}

// public static int Min(int a, int b) :380
void Math__Min8_fn(int32_t* a, int32_t* b, int32_t* __retval)
{
    *__retval = Math::Min8(*a, *b);
}

// public static double Mod(double x, double y) :347
void Math__Mod_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Mod(*x, *y);
}

// public static float Mod(float x, float y) :348
void Math__Mod1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Mod1(*x, *y);
}

// public static int NextPow2(int x) :557
void Math__NextPow2_fn(int32_t* x, int32_t* __retval)
{
    *__retval = Math::NextPow2(*x);
}

// public static double Pow(double x, double y) :153
void Math__Pow_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Pow(*x, *y);
}

// public static float Pow(float x, float y) :160
void Math__Pow1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Pow1(*x, *y);
}

// public static double RadiansToDegrees(double radians) :25
void Math__RadiansToDegrees_fn(double* radians, double* __retval)
{
    *__retval = Math::RadiansToDegrees(*radians);
}

// public static float RadiansToDegrees(float radians) :26
void Math__RadiansToDegrees1_fn(float* radians, float* __retval)
{
    *__retval = Math::RadiansToDegrees1(*radians);
}

// public static float3 RadiansToDegrees(float3 radians) :28
void Math__RadiansToDegrees3_fn(::g::Uno::Float3* radians, ::g::Uno::Float3* __retval)
{
    *__retval = Math::RadiansToDegrees3(*radians);
}

// public static double Round(double x) :469
void Math__Round_fn(double* x, double* __retval)
{
    *__retval = Math::Round(*x);
}

// public static double Round(double d, int digits) :501
void Math__Round1_fn(double* d, int32_t* digits, double* __retval)
{
    *__retval = Math::Round1(*d, *digits);
}

// public static float Round(float x) :472
void Math__Round2_fn(float* x, float* __retval)
{
    *__retval = Math::Round2(*x);
}

// public static float2 Round(float2 x) :475
void Math__Round4_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Round4(*x);
}

// public static float Saturate(float x) :464
void Math__Saturate1_fn(float* x, float* __retval)
{
    *__retval = Math::Saturate1(*x);
}

// public static double Sign(double x) :297
void Math__Sign_fn(double* x, double* __retval)
{
    *__retval = Math::Sign(*x);
}

// public static float Sign(float x) :298
void Math__Sign1_fn(float* x, float* __retval)
{
    *__retval = Math::Sign1(*x);
}

// public static double Sin(double radians) :31
void Math__Sin_fn(double* radians, double* __retval)
{
    *__retval = Math::Sin(*radians);
}

// public static float Sin(float radians) :38
void Math__Sin1_fn(float* radians, float* __retval)
{
    *__retval = Math::Sin1(*radians);
}

// public static double Sqrt(double x) :214
void Math__Sqrt_fn(double* x, double* __retval)
{
    *__retval = Math::Sqrt(*x);
}

// public static float Sqrt(float x) :221
void Math__Sqrt1_fn(float* x, float* __retval)
{
    *__retval = Math::Sqrt1(*x);
}

// public static float2 Sqrt(float2 x) :227
void Math__Sqrt2_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Sqrt2(*x);
}

// public static float4 Sqrt(float4 x) :229
void Math__Sqrt4_fn(::g::Uno::Float4* x, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Sqrt4(*x);
}

// public static double Tan(double radians) :65
void Math__Tan_fn(double* radians, double* __retval)
{
    *__retval = Math::Tan(*radians);
}

// public static float Tan(float radians) :72
void Math__Tan1_fn(float* radians, float* __retval)
{
    *__retval = Math::Tan1(*radians);
}

uSStrong<uArray*> Math::positivePowersOfTen_;
uSStrong<uArray*> Math::negativePowersOfTen_;

// public static double Abs(double x) [static] :240
double Math::Abs(double x)
{
    Math_typeof()->Init();
    return (x >= 0.0) ? x : -x;
}

// public static float Abs(float x) [static] :241
float Math::Abs1(float x)
{
    Math_typeof()->Init();
    return (x >= 0.0f) ? x : -x;
}

// public static float2 Abs(float2 a) [static] :242
::g::Uno::Float2 Math::Abs2(::g::Uno::Float2 a)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Abs1(a.X), Math::Abs1(a.Y));
}

// public static int Abs(int x) [static] :270
int32_t Math::Abs5(int32_t x)
{
    uStackFrame __("Uno.Math", "Abs(int)");
    Math_typeof()->Init();

    if (x < 0)
    {
        if (x == (-2147483647 - 1))
            U_THROW(::g::Uno::OverflowException::New4(::STRINGS[42/*"Negating th...*/]));

        return -x;
    }
    else
        return x;
}

// public static double Acos(double radians) [static] :99
double Math::Acos(double radians)
{
    Math_typeof()->Init();
    return acos(radians);
}

// public static float Acos(float radians) [static] :106
float Math::Acos1(float radians)
{
    Math_typeof()->Init();
    return acosf(radians);
}

// public static double Asin(double radians) [static] :82
double Math::Asin(double radians)
{
    Math_typeof()->Init();
    return asin(radians);
}

// public static double Atan(double radians) [static] :116
double Math::Atan(double radians)
{
    Math_typeof()->Init();
    return atan(radians);
}

// public static double Atan2(double y, double x) [static] :133
double Math::Atan21(double y, double x)
{
    Math_typeof()->Init();
    return atan2(y, x);
}

// public static float Atan2(float y, float x) [static] :140
float Math::Atan22(float y, float x)
{
    Math_typeof()->Init();
    return atan2f(y, x);
}

// public static double Ceil(double x) [static] :324
double Math::Ceil(double x)
{
    Math_typeof()->Init();
    return ceil(x);
}

// public static float Ceil(float x) [static] :331
float Math::Ceil1(float x)
{
    Math_typeof()->Init();
    return ceilf(x);
}

// public static float2 Ceil(float2 v) [static] :337
::g::Uno::Float2 Math::Ceil2(::g::Uno::Float2 v)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Ceil1(v.X), Math::Ceil1(v.Y));
}

// public static double Clamp(double x, double minimum, double maximum) [static] :388
double Math::Clamp(double x, double minimum, double maximum)
{
    Math_typeof()->Init();
    return Math::Max(Math::Min(x, maximum), minimum);
}

// public static float Clamp(float x, float minimum, float maximum) [static] :389
float Math::Clamp1(float x, float minimum, float maximum)
{
    Math_typeof()->Init();
    return Math::Max1(Math::Min1(x, maximum), minimum);
}

// public static float2 Clamp(float2 x, float minimum, float maximum) [static] :390
::g::Uno::Float2 Math::Clamp2(::g::Uno::Float2 x, float minimum, float maximum)
{
    Math_typeof()->Init();
    return Math::Max2(Math::Min2(x, maximum), minimum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) [static] :391
::g::Uno::Float2 Math::Clamp3(::g::Uno::Float2 x, ::g::Uno::Float2 minimum, ::g::Uno::Float2 maximum)
{
    Math_typeof()->Init();
    return Math::Max3(Math::Min3(x, maximum), minimum);
}

// public static float3 Clamp(float3 x, float minimum, float maximum) [static] :392
::g::Uno::Float3 Math::Clamp4(::g::Uno::Float3 x, float minimum, float maximum)
{
    Math_typeof()->Init();
    return Math::Max4(Math::Min4(x, maximum), minimum);
}

// public static float4 Clamp(float4 x, float minimum, float maximum) [static] :394
::g::Uno::Float4 Math::Clamp6(::g::Uno::Float4 x, float minimum, float maximum)
{
    Math_typeof()->Init();
    return Math::Max6(Math::Min6(x, maximum), minimum);
}

// public static int Clamp(int x, int minimum, int maximum) [static] :396
int32_t Math::Clamp8(int32_t x, int32_t minimum, int32_t maximum)
{
    Math_typeof()->Init();
    return Math::Max8(Math::Min8(x, maximum), minimum);
}

// public static double Cos(double radians) [static] :48
double Math::Cos(double radians)
{
    Math_typeof()->Init();
    return cos(radians);
}

// public static float Cos(float radians) [static] :55
float Math::Cos1(float radians)
{
    Math_typeof()->Init();
    return cosf(radians);
}

// public static double DegreesToRadians(double degrees) [static] :19
double Math::DegreesToRadians(double degrees)
{
    Math_typeof()->Init();
    return degrees * 0.017453292519943295;
}

// public static float DegreesToRadians(float degrees) [static] :20
float Math::DegreesToRadians1(float degrees)
{
    Math_typeof()->Init();
    return degrees * 0.0174532924f;
}

// public static float3 DegreesToRadians(float3 degrees) [static] :22
::g::Uno::Float3 Math::DegreesToRadians3(::g::Uno::Float3 degrees)
{
    Math_typeof()->Init();
    return ::g::Uno::Float3__op_Multiply1(degrees, 0.0174532924f);
}

// public static double Exp(double x) [static] :170
double Math::Exp(double x)
{
    Math_typeof()->Init();
    return Math::Pow(2.7182818284590451, x);
}

// public static float Exp(float x) [static] :171
float Math::Exp1(float x)
{
    Math_typeof()->Init();
    return Math::Pow1(2.71828175f, x);
}

// public static double Exp2(double x) [static] :202
double Math::Exp21(double x)
{
    Math_typeof()->Init();
    return Math::Pow(2.0, x);
}

// public static float Exp2(float x) [static] :203
float Math::Exp22(float x)
{
    Math_typeof()->Init();
    return Math::Pow1(2.0f, x);
}

// public static double Floor(double x) [static] :307
double Math::Floor(double x)
{
    Math_typeof()->Init();
    return floor(x);
}

// public static float Floor(float x) [static] :314
float Math::Floor1(float x)
{
    Math_typeof()->Init();
    return floorf(x);
}

// public static float2 Floor(float2 v) [static] :320
::g::Uno::Float2 Math::Floor2(::g::Uno::Float2 v)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Floor1(v.X), Math::Floor1(v.Y));
}

// public static double Fract(double x) [static] :341
double Math::Fract(double x)
{
    Math_typeof()->Init();
    return x - Math::Floor(x);
}

// public static bool IsPow2(int x) [static] :568
bool Math::IsPow2(int32_t x)
{
    Math_typeof()->Init();
    return x == (x & -x);
}

// public static float Lerp(float a, float b, float t) [static] :405
float Math::Lerp1(float a, float b, float t)
{
    Math_typeof()->Init();
    return a + ((b - a) * t);
}

// public static float2 Lerp(float2 a, float2 b, float t) [static] :406
::g::Uno::Float2 Math::Lerp2(::g::Uno::Float2 a, ::g::Uno::Float2 b, float t)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__op_Addition2(a, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Subtraction2(b, a), t));
}

// public static float3 Lerp(float3 a, float3 b, float t) [static] :408
::g::Uno::Float3 Math::Lerp4(::g::Uno::Float3 a, ::g::Uno::Float3 b, float t)
{
    Math_typeof()->Init();
    return ::g::Uno::Float3__op_Addition2(a, ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Subtraction2(b, a), t));
}

// public static float4 Lerp(float4 a, float4 b, float t) [static] :410
::g::Uno::Float4 Math::Lerp6(::g::Uno::Float4 a, ::g::Uno::Float4 b, float t)
{
    Math_typeof()->Init();
    return ::g::Uno::Float4__op_Addition2(a, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Subtraction2(b, a), t));
}

// public static double Log(double x) [static] :176
double Math::Log(double x)
{
    Math_typeof()->Init();
    return log(x);
}

// public static float Log(float x) [static] :183
float Math::Log1(float x)
{
    Math_typeof()->Init();
    return logf(x);
}

// public static double Log10(double x) [static] :193
double Math::Log10(double x)
{
    Math_typeof()->Init();
    return log10(x);
}

// public static double Log2(double x) [static] :208
double Math::Log21(double x)
{
    Math_typeof()->Init();
    return Math::Log(x) / Math::Log(2.0);
}

// public static float Log2(float x) [static] :209
float Math::Log22(float x)
{
    Math_typeof()->Init();
    return Math::Log1(x) / Math::Log1(2.0f);
}

// public static double Max(double a, double b) [static] :356
double Math::Max(double a, double b)
{
    Math_typeof()->Init();
    return (a > b) ? a : b;
}

// public static float Max(float a, float b) [static] :357
float Math::Max1(float a, float b)
{
    Math_typeof()->Init();
    return (a > b) ? a : b;
}

// public static float2 Max(float2 a, float b) [static] :358
::g::Uno::Float2 Math::Max2(::g::Uno::Float2 a, float b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b));
}

// public static float2 Max(float2 a, float2 b) [static] :359
::g::Uno::Float2 Math::Max3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y));
}

// public static float3 Max(float3 a, float b) [static] :360
::g::Uno::Float3 Math::Max4(::g::Uno::Float3 a, float b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float3__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b), Math::Max1(a.Z, b));
}

// public static float3 Max(float3 a, float3 b) [static] :361
::g::Uno::Float3 Math::Max5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float3__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y), Math::Max1(a.Z, b.Z));
}

// public static float4 Max(float4 a, float b) [static] :362
::g::Uno::Float4 Math::Max6(::g::Uno::Float4 a, float b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float4__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b), Math::Max1(a.Z, b), Math::Max1(a.W, b));
}

// public static float4 Max(float4 a, float4 b) [static] :363
::g::Uno::Float4 Math::Max7(::g::Uno::Float4 a, ::g::Uno::Float4 b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float4__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y), Math::Max1(a.Z, b.Z), Math::Max1(a.W, b.W));
}

// public static int Max(int a, int b) [static] :364
int32_t Math::Max8(int32_t a, int32_t b)
{
    Math_typeof()->Init();
    return (a > b) ? a : b;
}

// public static int2 Max(int2 a, int2 b) [static] :366
::g::Uno::Int2 Math::Max10(::g::Uno::Int2 a, ::g::Uno::Int2 b)
{
    Math_typeof()->Init();
    return ::g::Uno::Int2__New2(Math::Max8(a.X, b.X), Math::Max8(a.Y, b.Y));
}

// public static double Min(double a, double b) [static] :372
double Math::Min(double a, double b)
{
    Math_typeof()->Init();
    return (a < b) ? a : b;
}

// public static float Min(float a, float b) [static] :373
float Math::Min1(float a, float b)
{
    Math_typeof()->Init();
    return (a < b) ? a : b;
}

// public static float2 Min(float2 a, float b) [static] :374
::g::Uno::Float2 Math::Min2(::g::Uno::Float2 a, float b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Min1(a.X, b), Math::Min1(a.Y, b));
}

// public static float2 Min(float2 a, float2 b) [static] :375
::g::Uno::Float2 Math::Min3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y));
}

// public static float3 Min(float3 a, float b) [static] :376
::g::Uno::Float3 Math::Min4(::g::Uno::Float3 a, float b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float3__New2(Math::Min1(a.X, b), Math::Min1(a.Y, b), Math::Min1(a.Z, b));
}

// public static float3 Min(float3 a, float3 b) [static] :377
::g::Uno::Float3 Math::Min5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float3__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y), Math::Min1(a.Z, b.Z));
}

// public static float4 Min(float4 a, float b) [static] :378
::g::Uno::Float4 Math::Min6(::g::Uno::Float4 a, float b)
{
    Math_typeof()->Init();
    return ::g::Uno::Float4__New2(Math::Min1(a.X, b), Math::Min1(a.Y, b), Math::Min1(a.Z, b), Math::Min1(a.W, b));
}

// public static int Min(int a, int b) [static] :380
int32_t Math::Min8(int32_t a, int32_t b)
{
    Math_typeof()->Init();
    return (a < b) ? a : b;
}

// public static double Mod(double x, double y) [static] :347
double Math::Mod(double x, double y)
{
    Math_typeof()->Init();
    return x - (y * Math::Floor(x / y));
}

// public static float Mod(float x, float y) [static] :348
float Math::Mod1(float x, float y)
{
    Math_typeof()->Init();
    return x - (y * Math::Floor1(x / y));
}

// public static int NextPow2(int x) [static] :557
int32_t Math::NextPow2(int32_t x)
{
    Math_typeof()->Init();
    int32_t y = x - 1;
    y = y | (y >> 1);
    y = y | (y >> 2);
    y = y | (y >> 4);
    y = y | (y >> 8);
    y = y | (y >> 16);
    return y + 1;
}

// public static double Pow(double x, double y) [static] :153
double Math::Pow(double x, double y)
{
    Math_typeof()->Init();
    return pow(x, y);
}

// public static float Pow(float x, float y) [static] :160
float Math::Pow1(float x, float y)
{
    Math_typeof()->Init();
    return powf(x, y);
}

// public static double RadiansToDegrees(double radians) [static] :25
double Math::RadiansToDegrees(double radians)
{
    Math_typeof()->Init();
    return radians * 57.295779513082323;
}

// public static float RadiansToDegrees(float radians) [static] :26
float Math::RadiansToDegrees1(float radians)
{
    Math_typeof()->Init();
    return radians * 57.2957764f;
}

// public static float3 RadiansToDegrees(float3 radians) [static] :28
::g::Uno::Float3 Math::RadiansToDegrees3(::g::Uno::Float3 radians)
{
    Math_typeof()->Init();
    return ::g::Uno::Float3__op_Multiply1(radians, 57.2957764f);
}

// public static double Round(double x) [static] :469
double Math::Round(double x)
{
    Math_typeof()->Init();
    return Math::Floor(x + 0.5);
}

// public static double Round(double d, int digits) [static] :501
double Math::Round1(double d, int32_t digits)
{
    uStackFrame __("Uno.Math", "Round(double,int)");
    Math_typeof()->Init();

    if ((digits < 0) || (digits > 15))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[43/*"digits"*/]));

    if (Math::Abs(d) < 1e+16)
        return Math::Round(d * uPtr(Math::positivePowersOfTen_)->Item<double>(digits)) * uPtr(Math::negativePowersOfTen_)->Item<double>(digits);
    else
        return d;
}

// public static float Round(float x) [static] :472
float Math::Round2(float x)
{
    Math_typeof()->Init();
    return Math::Floor1(x + 0.5f);
}

// public static float2 Round(float2 x) [static] :475
::g::Uno::Float2 Math::Round4(::g::Uno::Float2 x)
{
    Math_typeof()->Init();
    return Math::Floor2(::g::Uno::Float2__op_Addition1(x, 0.5f));
}

// public static float Saturate(float x) [static] :464
float Math::Saturate1(float x)
{
    Math_typeof()->Init();
    return Math::Clamp1(x, 0.0f, 1.0f);
}

// public static double Sign(double x) [static] :297
double Math::Sign(double x)
{
    Math_typeof()->Init();
    return (x < 0.0) ? -1.0 : (x > 0.0) ? 1.0 : 0.0;
}

// public static float Sign(float x) [static] :298
float Math::Sign1(float x)
{
    Math_typeof()->Init();
    return (x < 0.0f) ? -1.0f : (x > 0.0f) ? 1.0f : 0.0f;
}

// public static double Sin(double radians) [static] :31
double Math::Sin(double radians)
{
    Math_typeof()->Init();
    return sin(radians);
}

// public static float Sin(float radians) [static] :38
float Math::Sin1(float radians)
{
    Math_typeof()->Init();
    return sinf(radians);
}

// public static double Sqrt(double x) [static] :214
double Math::Sqrt(double x)
{
    Math_typeof()->Init();
    return sqrt(x);
}

// public static float Sqrt(float x) [static] :221
float Math::Sqrt1(float x)
{
    Math_typeof()->Init();
    return sqrtf(x);
}

// public static float2 Sqrt(float2 x) [static] :227
::g::Uno::Float2 Math::Sqrt2(::g::Uno::Float2 x)
{
    Math_typeof()->Init();
    return ::g::Uno::Float2__New2(Math::Sqrt1(x.X), Math::Sqrt1(x.Y));
}

// public static float4 Sqrt(float4 x) [static] :229
::g::Uno::Float4 Math::Sqrt4(::g::Uno::Float4 x)
{
    Math_typeof()->Init();
    return ::g::Uno::Float4__New2(Math::Sqrt1(x.X), Math::Sqrt1(x.Y), Math::Sqrt1(x.Z), Math::Sqrt1(x.W));
}

// public static double Tan(double radians) [static] :65
double Math::Tan(double radians)
{
    Math_typeof()->Init();
    return tan(radians);
}

// public static float Tan(float radians) [static] :72
float Math::Tan1(float radians)
{
    Math_typeof()->Init();
    return tanf(radians);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Matrix.uno
// -----------------------------------------------------------------

// public static class Matrix :8
// {
static void Matrix_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->Reflection.SetFunctions(16,
        new uFunction("Compose", NULL, (void*)Matrix__Compose_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Invert", NULL, (void*)Matrix__Invert2_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul4_fn, 0, true, ::g::Uno::Float3x3_typeof(), 2, ::g::Uno::Float3x3_typeof(), ::g::Uno::Float3x3_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul8_fn, 0, true, ::g::Uno::Float4x4_typeof(), 2, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul9_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul10_fn, 0, true, ::g::Uno::Float4x4_typeof(), 4, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("RotationAxis", NULL, (void*)Matrix__RotationAxis_fn, 0, true, ::g::Uno::Float4x4_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("RotationQuaternion", NULL, (void*)Matrix__RotationQuaternion_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("RotationZ", NULL, (void*)Matrix__RotationZ_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling1_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling2_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Shear", NULL, (void*)Matrix__Shear_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Translation", NULL, (void*)Matrix__Translation_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Translation", NULL, (void*)Matrix__Translation1_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("TryInvert", NULL, (void*)Matrix__TryInvert2_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()->ByRef()));
}

uClassType* Matrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Matrix", options);
    type->fp_build_ = Matrix_build;
    return type;
}

// public static float4x4 Compose(float3 scale, float4 rotationQuaternion, float3 translation) :546
void Matrix__Compose_fn(::g::Uno::Float3* scale, ::g::Uno::Float4* rotationQuaternion, ::g::Uno::Float3* translation, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Compose(*scale, *rotationQuaternion, *translation);
}

// public static float4x4 Invert(float4x4 value) :417
void Matrix__Invert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Invert2(*value);
}

// public static float3x3 Mul(float3x3 left, float3x3 right) :350
void Matrix__Mul4_fn(::g::Uno::Float3x3* left, ::g::Uno::Float3x3* right, ::g::Uno::Float3x3* __retval)
{
    *__retval = Matrix::Mul4(*left, *right);
}

// public static float4x4 Mul(float4x4 left, float4x4 right) :365
void Matrix__Mul8_fn(::g::Uno::Float4x4* left, ::g::Uno::Float4x4* right, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul8(*left, *right);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) :338
void Matrix__Mul9_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul9(*a, *b, *c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) :337
void Matrix__Mul10_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* d, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul10(*a, *b, *c, *d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) :214
void Matrix__RotationAxis_fn(::g::Uno::Float3* axisNormalized, float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationAxis(*axisNormalized, *angleRadians);
}

// public static float4x4 RotationQuaternion(float4 rotation) :260
void Matrix__RotationQuaternion_fn(::g::Uno::Float4* rotation, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationQuaternion(*rotation);
}

// public static float4x4 RotationZ(float angleRadians) :255
void Matrix__RotationZ_fn(float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationZ(*angleRadians);
}

// public static float4x4 Scaling(float scale) :196
void Matrix__Scaling_fn(float* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling(*scale);
}

// public static float4x4 Scaling(float x, float y, float z) :187
void Matrix__Scaling1_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling1(*x, *y, *z);
}

// public static float4x4 Scaling(float3 scale) :178
void Matrix__Scaling2_fn(::g::Uno::Float3* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling2(*scale);
}

// public static float4x4 Shear(float2 angle) :205
void Matrix__Shear_fn(::g::Uno::Float2* angle, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Shear(*angle);
}

// public static float4x4 Translation(float x, float y, float z) :319
void Matrix__Translation_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation(*x, *y, *z);
}

// public static float4x4 Translation(float3 offset) :310
void Matrix__Translation1_fn(::g::Uno::Float3* offset, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation1(*offset);
}

// public static bool TryInvert(float4x4 value, float4x4& result) :431
void Matrix__TryInvert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = Matrix::TryInvert2(*value, result);
}

// public static float4x4 Compose(float3 scale, float4 rotationQuaternion, float3 translation) [static] :546
::g::Uno::Float4x4 Matrix::Compose(::g::Uno::Float3 scale, ::g::Uno::Float4 rotationQuaternion, ::g::Uno::Float3 translation)
{
    return Matrix::Mul8(Matrix::Mul8(Matrix::Scaling2(scale), Matrix::RotationQuaternion(rotationQuaternion)), Matrix::Translation1(translation));
}

// public static float4x4 Invert(float4x4 value) [static] :417
::g::Uno::Float4x4 Matrix::Invert2(::g::Uno::Float4x4 value)
{
    ::g::Uno::Float4x4 result;

    if (!Matrix::TryInvert2(value, &result))
        return ::g::Uno::Float4x4__Identity();

    return result;
}

// public static float3x3 Mul(float3x3 left, float3x3 right) [static] :350
::g::Uno::Float3x3 Matrix::Mul4(::g::Uno::Float3x3 left, ::g::Uno::Float3x3 right)
{
    ::g::Uno::Float3x3 result;
    result.M11 = (((left.M11 * right.M11) + (left.M12 * right.M21)) + (left.M13 * right.M31));
    result.M12 = (((left.M11 * right.M12) + (left.M12 * right.M22)) + (left.M13 * right.M32));
    result.M13 = (((left.M11 * right.M13) + (left.M12 * right.M23)) + (left.M13 * right.M33));
    result.M21 = (((left.M21 * right.M11) + (left.M22 * right.M21)) + (left.M23 * right.M31));
    result.M22 = (((left.M21 * right.M12) + (left.M22 * right.M22)) + (left.M23 * right.M32));
    result.M23 = (((left.M21 * right.M13) + (left.M22 * right.M23)) + (left.M23 * right.M33));
    result.M31 = (((left.M31 * right.M11) + (left.M32 * right.M21)) + (left.M33 * right.M31));
    result.M32 = (((left.M31 * right.M12) + (left.M32 * right.M22)) + (left.M33 * right.M32));
    result.M33 = (((left.M31 * right.M13) + (left.M32 * right.M23)) + (left.M33 * right.M33));
    return result;
}

// public static float4x4 Mul(float4x4 left, float4x4 right) [static] :365
::g::Uno::Float4x4 Matrix::Mul8(::g::Uno::Float4x4 left, ::g::Uno::Float4x4 right)
{
    ::g::Uno::Float4x4 result;
    result.M11 = ((((left.M11 * right.M11) + (left.M12 * right.M21)) + (left.M13 * right.M31)) + (left.M14 * right.M41));
    result.M12 = ((((left.M11 * right.M12) + (left.M12 * right.M22)) + (left.M13 * right.M32)) + (left.M14 * right.M42));
    result.M13 = ((((left.M11 * right.M13) + (left.M12 * right.M23)) + (left.M13 * right.M33)) + (left.M14 * right.M43));
    result.M14 = ((((left.M11 * right.M14) + (left.M12 * right.M24)) + (left.M13 * right.M34)) + (left.M14 * right.M44));
    result.M21 = ((((left.M21 * right.M11) + (left.M22 * right.M21)) + (left.M23 * right.M31)) + (left.M24 * right.M41));
    result.M22 = ((((left.M21 * right.M12) + (left.M22 * right.M22)) + (left.M23 * right.M32)) + (left.M24 * right.M42));
    result.M23 = ((((left.M21 * right.M13) + (left.M22 * right.M23)) + (left.M23 * right.M33)) + (left.M24 * right.M43));
    result.M24 = ((((left.M21 * right.M14) + (left.M22 * right.M24)) + (left.M23 * right.M34)) + (left.M24 * right.M44));
    result.M31 = ((((left.M31 * right.M11) + (left.M32 * right.M21)) + (left.M33 * right.M31)) + (left.M34 * right.M41));
    result.M32 = ((((left.M31 * right.M12) + (left.M32 * right.M22)) + (left.M33 * right.M32)) + (left.M34 * right.M42));
    result.M33 = ((((left.M31 * right.M13) + (left.M32 * right.M23)) + (left.M33 * right.M33)) + (left.M34 * right.M43));
    result.M34 = ((((left.M31 * right.M14) + (left.M32 * right.M24)) + (left.M33 * right.M34)) + (left.M34 * right.M44));
    result.M41 = ((((left.M41 * right.M11) + (left.M42 * right.M21)) + (left.M43 * right.M31)) + (left.M44 * right.M41));
    result.M42 = ((((left.M41 * right.M12) + (left.M42 * right.M22)) + (left.M43 * right.M32)) + (left.M44 * right.M42));
    result.M43 = ((((left.M41 * right.M13) + (left.M42 * right.M23)) + (left.M43 * right.M33)) + (left.M44 * right.M43));
    result.M44 = ((((left.M41 * right.M14) + (left.M42 * right.M24)) + (left.M43 * right.M34)) + (left.M44 * right.M44));
    return result;
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) [static] :338
::g::Uno::Float4x4 Matrix::Mul9(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c)
{
    return Matrix::Mul8(Matrix::Mul8(a, b), c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) [static] :337
::g::Uno::Float4x4 Matrix::Mul10(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c, ::g::Uno::Float4x4 d)
{
    return Matrix::Mul8(Matrix::Mul9(a, b, c), d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) [static] :214
::g::Uno::Float4x4 Matrix::RotationAxis(::g::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::g::Uno::Vector::Normalize1(axisNormalized);
    float x = axisNormalized.X;
    float y = axisNormalized.Y;
    float z = axisNormalized.Z;
    float c = ::g::Uno::Math::Cos1(angleRadians);
    float s = ::g::Uno::Math::Sin1(angleRadians);
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float yz = y * z;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (xx + (c * (1.0f - xx)));
    result.M12 = ((xy - (c * xy)) + (s * z));
    result.M13 = ((xz - (c * xz)) - (s * y));
    result.M21 = ((xy - (c * xy)) - (s * z));
    result.M22 = (yy + (c * (1.0f - yy)));
    result.M23 = ((yz - (c * yz)) + (s * x));
    result.M31 = ((xz - (c * xz)) + (s * y));
    result.M32 = ((yz - (c * yz)) - (s * x));
    result.M33 = (zz + (c * (1.0f - zz)));
    return result;
}

// public static float4x4 RotationQuaternion(float4 rotation) [static] :260
::g::Uno::Float4x4 Matrix::RotationQuaternion(::g::Uno::Float4 rotation)
{
    float xx = rotation.X * rotation.X;
    float yy = rotation.Y * rotation.Y;
    float zz = rotation.Z * rotation.Z;
    float xy = rotation.X * rotation.Y;
    float zw = rotation.Z * rotation.W;
    float zx = rotation.Z * rotation.X;
    float yw = rotation.Y * rotation.W;
    float yz = rotation.Y * rotation.Z;
    float xw = rotation.X * rotation.W;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (1.0f - (2.0f * (yy + zz)));
    result.M12 = (2.0f * (xy + zw));
    result.M13 = (2.0f * (zx - yw));
    result.M21 = (2.0f * (xy - zw));
    result.M22 = (1.0f - (2.0f * (zz + xx)));
    result.M23 = (2.0f * (yz + xw));
    result.M31 = (2.0f * (zx + yw));
    result.M32 = (2.0f * (yz - xw));
    result.M33 = (1.0f - (2.0f * (yy + xx)));
    return result;
}

// public static float4x4 RotationZ(float angleRadians) [static] :255
::g::Uno::Float4x4 Matrix::RotationZ(float angleRadians)
{
    return Matrix::RotationAxis(::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), angleRadians);
}

// public static float4x4 Scaling(float scale) [static] :196
::g::Uno::Float4x4 Matrix::Scaling(float scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale;
    result.M22 = scale;
    result.M33 = scale;
    return result;
}

// public static float4x4 Scaling(float x, float y, float z) [static] :187
::g::Uno::Float4x4 Matrix::Scaling1(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = x;
    result.M22 = y;
    result.M33 = z;
    return result;
}

// public static float4x4 Scaling(float3 scale) [static] :178
::g::Uno::Float4x4 Matrix::Scaling2(::g::Uno::Float3 scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale.X;
    result.M22 = scale.Y;
    result.M33 = scale.Z;
    return result;
}

// public static float4x4 Shear(float2 angle) [static] :205
::g::Uno::Float4x4 Matrix::Shear(::g::Uno::Float2 angle)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M12 = ::g::Uno::Math::Tan1(angle.Y);
    result.M21 = ::g::Uno::Math::Tan1(angle.X);
    return result;
}

// public static float4x4 Translation(float x, float y, float z) [static] :319
::g::Uno::Float4x4 Matrix::Translation(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = x;
    result.M42 = y;
    result.M43 = z;
    return result;
}

// public static float4x4 Translation(float3 offset) [static] :310
::g::Uno::Float4x4 Matrix::Translation1(::g::Uno::Float3 offset)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = offset.X;
    result.M42 = offset.Y;
    result.M43 = offset.Z;
    return result;
}

// public static bool TryInvert(float4x4 value, float4x4& result) [static] :431
bool Matrix::TryInvert2(::g::Uno::Float4x4 value, ::g::Uno::Float4x4* result)
{
    float b0 = (value.M31 * value.M42) - (value.M32 * value.M41);
    float b1 = (value.M31 * value.M43) - (value.M33 * value.M41);
    float b2 = (value.M34 * value.M41) - (value.M31 * value.M44);
    float b3 = (value.M32 * value.M43) - (value.M33 * value.M42);
    float b4 = (value.M34 * value.M42) - (value.M32 * value.M44);
    float b5 = (value.M33 * value.M44) - (value.M34 * value.M43);
    float d11 = ((value.M22 * b5) + (value.M23 * b4)) + (value.M24 * b3);
    float d12 = ((value.M21 * b5) + (value.M23 * b2)) + (value.M24 * b1);
    float d13 = ((value.M21 * -b4) + (value.M22 * b2)) + (value.M24 * b0);
    float d14 = ((value.M21 * b3) + (value.M22 * -b1)) + (value.M23 * b0);
    float det = (((value.M11 * d11) - (value.M12 * d12)) + (value.M13 * d13)) - (value.M14 * d14);
    float detInv = 1.0f / det;
    float a0 = (value.M11 * value.M22) - (value.M12 * value.M21);
    float a1 = (value.M11 * value.M23) - (value.M13 * value.M21);
    float a2 = (value.M14 * value.M21) - (value.M11 * value.M24);
    float a3 = (value.M12 * value.M23) - (value.M13 * value.M22);
    float a4 = (value.M14 * value.M22) - (value.M12 * value.M24);
    float a5 = (value.M13 * value.M24) - (value.M14 * value.M23);
    float d21 = ((value.M12 * b5) + (value.M13 * b4)) + (value.M14 * b3);
    float d22 = ((value.M11 * b5) + (value.M13 * b2)) + (value.M14 * b1);
    float d23 = ((value.M11 * -b4) + (value.M12 * b2)) + (value.M14 * b0);
    float d24 = ((value.M11 * b3) + (value.M12 * -b1)) + (value.M13 * b0);
    float d31 = ((value.M42 * a5) + (value.M43 * a4)) + (value.M44 * a3);
    float d32 = ((value.M41 * a5) + (value.M43 * a2)) + (value.M44 * a1);
    float d33 = ((value.M41 * -a4) + (value.M42 * a2)) + (value.M44 * a0);
    float d34 = ((value.M41 * a3) + (value.M42 * -a1)) + (value.M43 * a0);
    float d41 = ((value.M32 * a5) + (value.M33 * a4)) + (value.M34 * a3);
    float d42 = ((value.M31 * a5) + (value.M33 * a2)) + (value.M34 * a1);
    float d43 = ((value.M31 * -a4) + (value.M32 * a2)) + (value.M34 * a0);
    float d44 = ((value.M31 * a3) + (value.M32 * -a1)) + (value.M33 * a0);
    (*result).M11 = (d11 * detInv);
    (*result).M12 = (-d21 * detInv);
    (*result).M13 = (d31 * detInv);
    (*result).M14 = (-d41 * detInv);
    (*result).M21 = (-d12 * detInv);
    (*result).M22 = (d22 * detInv);
    (*result).M23 = (-d32 * detInv);
    (*result).M24 = (d42 * detInv);
    (*result).M31 = (d13 * detInv);
    (*result).M32 = (-d23 * detInv);
    (*result).M33 = (d33 * detInv);
    (*result).M34 = (-d43 * detInv);
    (*result).M41 = (-d14 * detInv);
    (*result).M42 = (d24 * detInv);
    (*result).M43 = (-d34 * detInv);
    (*result).M44 = (d44 * detInv);
    return ::g::Uno::Math::Abs1(det) > 1e-05f;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/NotImplementedException.uno
// ---------------------------------------------------------------------------------------------

// public sealed class NotImplementedException :6
// {
static void NotImplementedException_build(uType* type)
{
    ::STRINGS[44] = uString::Const("Not implemented");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NotImplementedException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* NotImplementedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NotImplementedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotImplementedException", options);
    type->fp_build_ = NotImplementedException_build;
    type->fp_ctor_ = (void*)NotImplementedException__New4_fn;
    return type;
}

// public NotImplementedException() :8
void NotImplementedException__ctor_3_fn(NotImplementedException* __this)
{
    __this->ctor_3();
}

// public NotImplementedException New() :8
void NotImplementedException__New4_fn(NotImplementedException** __retval)
{
    *__retval = NotImplementedException::New4();
}

// public NotImplementedException() [instance] :8
void NotImplementedException::ctor_3()
{
    ctor_1(::STRINGS[44/*"Not impleme...*/]);
}

// public NotImplementedException New() [static] :8
NotImplementedException* NotImplementedException::New4()
{
    NotImplementedException* obj1 = (NotImplementedException*)uNew(NotImplementedException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/NotSupportedException.uno
// -------------------------------------------------------------------------------------------

// public sealed class NotSupportedException :6
// {
static void NotSupportedException_build(uType* type)
{
    ::STRINGS[45] = uString::Const("Method not supported");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NotSupportedException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)NotSupportedException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* NotSupportedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NotSupportedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotSupportedException", options);
    type->fp_build_ = NotSupportedException_build;
    type->fp_ctor_ = (void*)NotSupportedException__New4_fn;
    return type;
}

// public NotSupportedException() :8
void NotSupportedException__ctor_3_fn(NotSupportedException* __this)
{
    __this->ctor_3();
}

// public NotSupportedException(string message) :13
void NotSupportedException__ctor_4_fn(NotSupportedException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public NotSupportedException New() :8
void NotSupportedException__New4_fn(NotSupportedException** __retval)
{
    *__retval = NotSupportedException::New4();
}

// public NotSupportedException New(string message) :13
void NotSupportedException__New5_fn(uString* message, NotSupportedException** __retval)
{
    *__retval = NotSupportedException::New5(message);
}

// public NotSupportedException() [instance] :8
void NotSupportedException::ctor_3()
{
    ctor_1(::STRINGS[45/*"Method not ...*/]);
}

// public NotSupportedException(string message) [instance] :13
void NotSupportedException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public NotSupportedException New() [static] :8
NotSupportedException* NotSupportedException::New4()
{
    NotSupportedException* obj1 = (NotSupportedException*)uNew(NotSupportedException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public NotSupportedException New(string message) [static] :13
NotSupportedException* NotSupportedException::New5(uString* message)
{
    NotSupportedException* obj2 = (NotSupportedException*)uNew(NotSupportedException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/NullReferenceException.uno
// --------------------------------------------------------------------------------------------

// public sealed class NullReferenceException :6
// {
static void NullReferenceException_build(uType* type)
{
    ::STRINGS[46] = uString::Const("Object reference was null");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NullReferenceException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* NullReferenceException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NullReferenceException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NullReferenceException", options);
    type->fp_build_ = NullReferenceException_build;
    type->fp_ctor_ = (void*)NullReferenceException__New4_fn;
    return type;
}

// public NullReferenceException() :8
void NullReferenceException__ctor_3_fn(NullReferenceException* __this)
{
    __this->ctor_3();
}

// public NullReferenceException New() :8
void NullReferenceException__New4_fn(NullReferenceException** __retval)
{
    *__retval = NullReferenceException::New4();
}

// public NullReferenceException() [instance] :8
void NullReferenceException::ctor_3()
{
    ctor_1(::STRINGS[46/*"Object refe...*/]);
}

// public NullReferenceException New() [static] :8
NullReferenceException* NullReferenceException::New4()
{
    NullReferenceException* obj1 = (NullReferenceException*)uNew(NullReferenceException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Object.uno
// -----------------------------------------------------------------

// public intrinsic class Object :11
// {
// public virtual bool Equals(object o) :67
void Object__Equals_fn(uObject* __this, uObject* o, bool* __retval)
{
    switch (__this->__type->Type)
    {
    case uTypeTypeEnum:
    case uTypeTypeStruct:
        return *__retval = __this == o || (
                o != NULL && (
                    o->__type == __this->__type || (
                        o->__type->Type == uTypeTypeEnum &&
                        o->__type->Base == __this->__type
                    )
                ) &&
                memcmp((const uint8_t*)__this + sizeof(uObject), (const uint8_t*)o + sizeof(uObject), __this->__type->ValueSize) == 0
            ), void();
    default:
        return *__retval = __this == o, void();
    }
}

// public static bool Equals(object left, object right) :109
void Object__Equals1_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::Equals1(left, right);
}

// public virtual int GetHashCode() :31
void Object__GetHashCode_fn(uObject* __this, int32_t* __retval)
{
    if (U_IS_OBJECT(__this->__type))
    {
        if (sizeof(void*) > 4)
        {
            union
            {
                void *ptr;
                uint32_t data[2];
            } u;
            u.ptr = __this;
            return *__retval = u.data[0] ^ u.data[1], void();
        }
        else
            return *__retval = (int)(intptr_t)__this, void();
    }
    
    const uint8_t* data = (const uint8_t*)__this + sizeof(uObject);
    size_t size = __this->__type->ValueSize;
    int hash = 5381;
    
    for (size_t i = 0; i < size; i++)
        hash = ((hash << 5) + hash) ^ data[i];
    
    return *__retval = hash, void();
}

// public Uno.Type GetType() :18
void Object__GetType_fn(uObject* __this, uType** __retval)
{
    *__retval = Object::GetType(__this);
}

// public Object New() :13
void Object__New_fn(uObject** __retval)
{
    *__retval = Object::New();
}

// public static bool ReferenceEquals(object left, object right) :121
void Object__ReferenceEquals_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::ReferenceEquals(left, right);
}

// public virtual string ToString() :95
void Object__ToString_fn(uObject* __this, uString** __retval)
{
    return *__retval = __this->__type->Type == uTypeTypeEnum
        ? uEnum::GetString(__this->__type, (uint8_t*)__this + sizeof(uObject))
        : uString::Const(__this->__type->FullName), void();
}

// public Uno.Type GetType() [instance] :18
uType* Object::GetType(uObject* __this)
{
    return __this->__type;
}

// public static bool Equals(object left, object right) [static] :109
bool Object::Equals1(uObject* left, uObject* right)
{
    uStackFrame __("object", "Equals(object,object)");

    if (left == right)
        return true;

    if ((left == NULL) || (right == NULL))
        return false;

    return Object::Equals(uPtr(left), right);
}

// public Object New() [static] :13
uObject* Object::New()
{
    uObject* obj1 = (uObject*)uNew(uObject_typeof());
    return obj1;
}

// public static bool ReferenceEquals(object left, object right) [static] :121
bool Object::ReferenceEquals(uObject* left, uObject* right)
{
    return left == right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/ObjectDisposedException.uno
// ---------------------------------------------------------------------------------------------

// public sealed class ObjectDisposedException :6
// {
static void ObjectDisposedException_build(uType* type)
{
    ::STRINGS[47] = uString::Const("Attempt to access disposed object: ");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ObjectDisposedException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ObjectDisposedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ObjectDisposedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ObjectDisposedException", options);
    type->fp_build_ = ObjectDisposedException_build;
    return type;
}

// public ObjectDisposedException(string objectName) :8
void ObjectDisposedException__ctor_3_fn(ObjectDisposedException* __this, uString* objectName)
{
    __this->ctor_3(objectName);
}

// public ObjectDisposedException New(string objectName) :8
void ObjectDisposedException__New4_fn(uString* objectName, ObjectDisposedException** __retval)
{
    *__retval = ObjectDisposedException::New4(objectName);
}

// public ObjectDisposedException(string objectName) [instance] :8
void ObjectDisposedException::ctor_3(uString* objectName)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[47/*"Attempt to ...*/], objectName));
}

// public ObjectDisposedException New(string objectName) [static] :8
ObjectDisposedException* ObjectDisposedException::New4(uString* objectName)
{
    ObjectDisposedException* obj1 = (ObjectDisposedException*)uNew(ObjectDisposedException_typeof());
    obj1->ctor_3(objectName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/ObsoleteAttribute.uno
// ----------------------------------------------------------------------------

// public sealed class ObsoleteAttribute :9
// {
static void ObsoleteAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(ObsoleteAttribute, _IsError), 0,
        ::g::Uno::String_typeof(), offsetof(ObsoleteAttribute, _Message), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsError", NULL, (void*)ObsoleteAttribute__get_IsError_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Message", NULL, (void*)ObsoleteAttribute__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

uType* ObsoleteAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObsoleteAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.ObsoleteAttribute", options);
    type->fp_build_ = ObsoleteAttribute_build;
    type->fp_ctor_ = (void*)ObsoleteAttribute__New1_fn;
    return type;
}

// private ObsoleteAttribute() :11
void ObsoleteAttribute__ctor_1_fn(ObsoleteAttribute* __this)
{
    __this->ctor_1();
}

// private ObsoleteAttribute(string message) :13
void ObsoleteAttribute__ctor_2_fn(ObsoleteAttribute* __this, uString* message)
{
    __this->ctor_2(message);
}

// private ObsoleteAttribute(string message, bool isError) :18
void ObsoleteAttribute__ctor_3_fn(ObsoleteAttribute* __this, uString* message, bool* isError)
{
    __this->ctor_3(message, *isError);
}

// public generated bool get_IsError() :25
void ObsoleteAttribute__get_IsError_fn(ObsoleteAttribute* __this, bool* __retval)
{
    *__retval = __this->IsError();
}

// private generated void set_IsError(bool value) :25
void ObsoleteAttribute__set_IsError_fn(ObsoleteAttribute* __this, bool* value)
{
    __this->IsError(*value);
}

// public generated string get_Message() :24
void ObsoleteAttribute__get_Message_fn(ObsoleteAttribute* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// private generated void set_Message(string value) :24
void ObsoleteAttribute__set_Message_fn(ObsoleteAttribute* __this, uString* value)
{
    __this->Message(value);
}

// private ObsoleteAttribute New() :11
void ObsoleteAttribute__New1_fn(ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New1();
}

// private ObsoleteAttribute New(string message) :13
void ObsoleteAttribute__New2_fn(uString* message, ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New2(message);
}

// private ObsoleteAttribute New(string message, bool isError) :18
void ObsoleteAttribute__New3_fn(uString* message, bool* isError, ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New3(message, *isError);
}

// private ObsoleteAttribute() [instance] :11
void ObsoleteAttribute::ctor_1()
{
    ctor_();
}

// private ObsoleteAttribute(string message) [instance] :13
void ObsoleteAttribute::ctor_2(uString* message)
{
    ctor_();
    Message(message);
}

// private ObsoleteAttribute(string message, bool isError) [instance] :18
void ObsoleteAttribute::ctor_3(uString* message, bool isError)
{
    ctor_();
    Message(message);
    IsError(isError);
}

// public generated bool get_IsError() [instance] :25
bool ObsoleteAttribute::IsError()
{
    return _IsError;
}

// private generated void set_IsError(bool value) [instance] :25
void ObsoleteAttribute::IsError(bool value)
{
    _IsError = value;
}

// public generated string get_Message() [instance] :24
uString* ObsoleteAttribute::Message()
{
    return _Message;
}

// private generated void set_Message(string value) [instance] :24
void ObsoleteAttribute::Message(uString* value)
{
    _Message = value;
}

// private ObsoleteAttribute New() [static] :11
ObsoleteAttribute* ObsoleteAttribute::New1()
{
    ObsoleteAttribute* obj1 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}

// private ObsoleteAttribute New(string message) [static] :13
ObsoleteAttribute* ObsoleteAttribute::New2(uString* message)
{
    ObsoleteAttribute* obj2 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj2->ctor_2(message);
    return obj2;
}

// private ObsoleteAttribute New(string message, bool isError) [static] :18
ObsoleteAttribute* ObsoleteAttribute::New3(uString* message, bool isError)
{
    ObsoleteAttribute* obj3 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj3->ctor_3(message, isError);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/OverflowException.uno
// ---------------------------------------------------------------------------------------

// public sealed class OverflowException :6
// {
static void OverflowException_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OverflowException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* OverflowException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OverflowException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.OverflowException", options);
    type->fp_build_ = OverflowException_build;
    return type;
}

// public OverflowException(string message) :8
void OverflowException__ctor_3_fn(OverflowException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public OverflowException New(string message) :8
void OverflowException__New4_fn(uString* message, OverflowException** __retval)
{
    *__retval = OverflowException::New4(message);
}

// public OverflowException(string message) [instance] :8
void OverflowException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public OverflowException New(string message) [static] :8
OverflowException* OverflowException::New4(uString* message)
{
    OverflowException* obj1 = (OverflowException*)uNew(OverflowException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Predicate.uno
// --------------------------------------------------------------------

// public delegate bool Predicate<T>(T arg) :6
uDelegateType* Predicate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Predicate`1", 1, 1);
    type->SetSignature(::g::Uno::Bool_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Quaternion.uno
// ---------------------------------------------------------------------

// public static class Quaternion :7
// {
static void Quaternion_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->Reflection.SetFunctions(2,
        new uFunction("FromEulerAngle", NULL, (void*)Quaternion__FromEulerAngle_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("FromEulerAngle", NULL, (void*)Quaternion__FromEulerAngle1_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float3_typeof()));
}

uClassType* Quaternion_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Quaternion", options);
    type->fp_build_ = Quaternion_build;
    return type;
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) :139
void Quaternion__FromEulerAngle_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle(*pitch, *yaw, *roll);
}

// public static float4 FromEulerAngle(float3 v) :134
void Quaternion__FromEulerAngle1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle1(*v);
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) [static] :139
::g::Uno::Float4 Quaternion::FromEulerAngle(float pitch, float yaw, float roll)
{
    float tmp = pitch;
    pitch = yaw;
    yaw = tmp;
    float rollOver2 = roll * 0.5f;
    float sinRollOver2 = ::g::Uno::Math::Sin1(rollOver2);
    float cosRollOver2 = ::g::Uno::Math::Cos1(rollOver2);
    float yawOver2 = yaw * 0.5f;
    float sinYawOver2 = ::g::Uno::Math::Sin1(yawOver2);
    float cosYawOver2 = ::g::Uno::Math::Cos1(yawOver2);
    float pitchOver2 = pitch * 0.5f;
    float sinPitchOver2 = ::g::Uno::Math::Sin1(pitchOver2);
    float cosPitchOver2 = ::g::Uno::Math::Cos1(pitchOver2);
    ::g::Uno::Float4 result;
    result.W = (((cosPitchOver2 * cosYawOver2) * cosRollOver2) + ((sinPitchOver2 * sinYawOver2) * sinRollOver2));
    result.X = (((cosPitchOver2 * sinYawOver2) * cosRollOver2) + ((sinPitchOver2 * cosYawOver2) * sinRollOver2));
    result.Y = (((sinPitchOver2 * cosYawOver2) * cosRollOver2) - ((cosPitchOver2 * sinYawOver2) * sinRollOver2));
    result.Z = (((cosPitchOver2 * cosYawOver2) * sinRollOver2) - ((sinPitchOver2 * sinYawOver2) * cosRollOver2));
    return result;
}

// public static float4 FromEulerAngle(float3 v) [static] :134
::g::Uno::Float4 Quaternion::FromEulerAngle1(::g::Uno::Float3 v)
{
    return Quaternion::FromEulerAngle(v.X, v.Y, v.Z);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Rect.uno
// ---------------------------------------------------------------

// public struct Rect :6
// {
static void Rect_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[10] = ::g::Uno::Float_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[10/*float*/], offsetof(Rect, Left), 0,
        ::TYPES[10/*float*/], offsetof(Rect, Top), 0,
        ::TYPES[10/*float*/], offsetof(Rect, Right), 0,
        ::TYPES[10/*float*/], offsetof(Rect, Bottom), 0);
    type->Reflection.SetFields(4,
        new uField("Bottom", 3),
        new uField("Left", 0),
        new uField("Right", 2),
        new uField("Top", 1));
    type->Reflection.SetFunctions(28,
        new uFunction("ContainingPoints", NULL, (void*)Rect__ContainingPoints_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("ContainingPoints", NULL, (void*)Rect__ContainingPoints1_fn, 0, true, type, 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_Height", NULL, (void*)Rect__get_Height_fn, 0, false, ::TYPES[10/*float*/], 0),
        new uFunction("set_Height", NULL, (void*)Rect__set_Height_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*float*/]),
        new uFunction("Inflate", NULL, (void*)Rect__Inflate_fn, 0, true, type, 2, type, ::TYPES[10/*float*/]),
        new uFunction("Inflate", NULL, (void*)Rect__Inflate1_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("Intersect", NULL, (void*)Rect__Intersect_fn, 0, true, type, 2, type, type),
        new uFunction("Intersects", NULL, (void*)Rect__Intersects_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_LeftBottom", NULL, (void*)Rect__get_LeftBottom_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_LeftTop", NULL, (void*)Rect__get_LeftTop_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Maximum", NULL, (void*)Rect__get_Maximum_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)Rect__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Minimum", NULL, (void*)Rect__get_Minimum_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)Rect__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Rect__New1_fn, 0, true, type, 4, ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/], ::TYPES[10/*float*/]),
        new uFunction(".ctor", NULL, (void*)Rect__New2_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_Position", NULL, (void*)Rect__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Rect__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RightBottom", NULL, (void*)Rect__get_RightBottom_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_RightTop", NULL, (void*)Rect__get_RightTop_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("Scale", NULL, (void*)Rect__Scale_fn, 0, true, type, 2, type, ::TYPES[10/*float*/]),
        new uFunction("Scale", NULL, (void*)Rect__Scale1_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("get_Size", NULL, (void*)Rect__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)Rect__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Transform", NULL, (void*)Rect__Transform_fn, 0, true, type, 2, type, ::g::Uno::Float4x4_typeof()),
        new uFunction("Translate", NULL, (void*)Rect__Translate_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("get_Width", NULL, (void*)Rect__get_Width_fn, 0, false, ::TYPES[10/*float*/], 0),
        new uFunction("set_Width", NULL, (void*)Rect__set_Width_fn, 0, false, uVoid_typeof(), 1, ::TYPES[10/*float*/]));
}

uStructType* Rect_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.Alignment = alignof(Rect);
    options.ValueSize = sizeof(Rect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Rect", options);
    type->fp_build_ = Rect_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Rect__ToString_fn;
    return type;
}

// public Rect(float left, float top, float right, float bottom) :10
void Rect__ctor__fn(Rect* __this, float* left, float* top, float* right, float* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Rect(float2 pos, float2 size) :18
void Rect__ctor_1_fn(Rect* __this, ::g::Uno::Float2* pos, ::g::Uno::Float2* size)
{
    __this->ctor_1(*pos, *size);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) :226
void Rect__ContainingPoints_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, Rect* __retval)
{
    *__retval = Rect__ContainingPoints(*point0, *point1);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) :242
void Rect__ContainingPoints1_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, ::g::Uno::Float2* point2, ::g::Uno::Float2* point3, Rect* __retval)
{
    *__retval = Rect__ContainingPoints1(*point0, *point1, *point2, *point3);
}

// public float get_Height() :97
void Rect__get_Height_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :98
void Rect__set_Height_fn(Rect* __this, float* value)
{
    __this->Height(*value);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) :201
void Rect__Inflate_fn(Rect* r, float* size, Rect* __retval)
{
    *__retval = Rect__Inflate(*r, *size);
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) :192
void Rect__Inflate1_fn(Rect* r, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__Inflate1(*r, *size);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) :150
void Rect__Intersect_fn(Rect* a, Rect* b, Rect* __retval)
{
    *__retval = Rect__Intersect(*a, *b);
}

// public bool Intersects(Uno.Rect r) :126
void Rect__Intersects_fn(Rect* __this, Rect* r, bool* __retval)
{
    *__retval = __this->Intersects(*r);
}

// public float2 get_LeftBottom() :69
void Rect__get_LeftBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftBottom();
}

// public float2 get_LeftTop() :59
void Rect__get_LeftTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftTop();
}

// public float2 get_Maximum() :48
void Rect__get_Maximum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float2 value) :49
void Rect__set_Maximum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Maximum(*value);
}

// public float2 get_Minimum() :42
void Rect__get_Minimum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float2 value) :43
void Rect__set_Minimum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Minimum(*value);
}

// public Rect New(float left, float top, float right, float bottom) :10
void Rect__New1_fn(float* left, float* top, float* right, float* bottom, Rect* __retval)
{
    *__retval = Rect__New1(*left, *top, *right, *bottom);
}

// public Rect New(float2 pos, float2 size) :18
void Rect__New2_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__New2(*pos, *size);
}

// public static implicit operator Uno.Rect(Uno.Recti r) :136
void Rect__op_Implicit1_fn(::g::Uno::Recti* r, Rect* __retval)
{
    *__retval = Rect__op_Implicit1(*r);
}

// public float2 get_Position() :79
void Rect__get_Position_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :80
void Rect__set_Position_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RightBottom() :74
void Rect__get_RightBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightBottom();
}

// public float2 get_RightTop() :64
void Rect__get_RightTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightTop();
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) :187
void Rect__Scale_fn(Rect* r, float* scale, Rect* __retval)
{
    *__retval = Rect__Scale(*r, *scale);
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) :178
void Rect__Scale1_fn(Rect* r, ::g::Uno::Float2* scale, Rect* __retval)
{
    *__retval = Rect__Scale1(*r, *scale);
}

// public float2 get_Size() :103
void Rect__get_Size_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :104
void Rect__set_Size_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :131
void Rect__ToString_fn(Rect* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Rect", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->Left, ::TYPES[10/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Top, ::TYPES[10/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Right, ::TYPES[10/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Bottom, ::TYPES[10/*float*/])), void();
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) :160
void Rect__Transform_fn(Rect* r, ::g::Uno::Float4x4* matrix, Rect* __retval)
{
    *__retval = Rect__Transform(*r, *matrix);
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) :169
void Rect__Translate_fn(Rect* r, ::g::Uno::Float2* offset, Rect* __retval)
{
    *__retval = Rect__Translate(*r, *offset);
}

// public float get_Width() :91
void Rect__get_Width_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :92
void Rect__set_Width_fn(Rect* __this, float* value)
{
    __this->Width(*value);
}

// public Rect(float left, float top, float right, float bottom) [instance] :10
void Rect::ctor_(float left, float top, float right, float bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Rect(float2 pos, float2 size) [instance] :18
void Rect::ctor_1(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (::g::Uno::Float::IsInfinity(size.X) ? size.X : Left + size.X);
    Bottom = (::g::Uno::Float::IsInfinity(size.Y) ? size.Y : Top + size.Y);
}

// public float get_Height() [instance] :97
float Rect::Height()
{
    return ::g::Uno::Float::IsInfinity(Bottom) ? Bottom : Bottom - Top;
}

// public void set_Height(float value) [instance] :98
void Rect::Height(float value)
{
    Bottom = (::g::Uno::Float::IsInfinity(value) ? value : Top + value);
}

// public bool Intersects(Uno.Rect r) [instance] :126
bool Rect::Intersects(Rect r)
{
    return !((((r.Left > Right) || (r.Right < Left)) || (r.Top > Bottom)) || (r.Bottom < Top));
}

// public float2 get_LeftBottom() [instance] :69
::g::Uno::Float2 Rect::LeftBottom()
{
    return ::g::Uno::Float2__New2(Left, Bottom);
}

// public float2 get_LeftTop() [instance] :59
::g::Uno::Float2 Rect::LeftTop()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public float2 get_Maximum() [instance] :48
::g::Uno::Float2 Rect::Maximum()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public void set_Maximum(float2 value) [instance] :49
void Rect::Maximum(::g::Uno::Float2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public float2 get_Minimum() [instance] :42
::g::Uno::Float2 Rect::Minimum()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public void set_Minimum(float2 value) [instance] :43
void Rect::Minimum(::g::Uno::Float2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public float2 get_Position() [instance] :79
::g::Uno::Float2 Rect::Position()
{
    return Minimum();
}

// public void set_Position(float2 value) [instance] :80
void Rect::Position(::g::Uno::Float2 value)
{
    ::g::Uno::Float2 sz = Size();
    Left = value.X;
    Top = value.Y;
    Size(sz);
}

// public float2 get_RightBottom() [instance] :74
::g::Uno::Float2 Rect::RightBottom()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public float2 get_RightTop() [instance] :64
::g::Uno::Float2 Rect::RightTop()
{
    return ::g::Uno::Float2__New2(Right, Top);
}

// public float2 get_Size() [instance] :103
::g::Uno::Float2 Rect::Size()
{
    return ::g::Uno::Float2__New2(Width(), Height());
}

// public void set_Size(float2 value) [instance] :104
void Rect::Size(::g::Uno::Float2 value)
{
    Width(value.X);
    Height(value.Y);
}

// public float get_Width() [instance] :91
float Rect::Width()
{
    return ::g::Uno::Float::IsInfinity(Right) ? Right : Right - Left;
}

// public void set_Width(float value) [instance] :92
void Rect::Width(float value)
{
    Right = (::g::Uno::Float::IsInfinity(value) ? value : Left + value);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) [static] :226
Rect Rect__ContainingPoints(::g::Uno::Float2 point0, ::g::Uno::Float2 point1)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) [static] :242
Rect Rect__ContainingPoints1(::g::Uno::Float2 point0, ::g::Uno::Float2 point1, ::g::Uno::Float2 point2, ::g::Uno::Float2 point3)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    minX = ::g::Uno::Math::Min1(minX, point2.X);
    maxX = ::g::Uno::Math::Max1(maxX, point2.X);
    minY = ::g::Uno::Math::Min1(minY, point2.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point2.Y);
    minX = ::g::Uno::Math::Min1(minX, point3.X);
    maxX = ::g::Uno::Math::Max1(maxX, point3.X);
    minY = ::g::Uno::Math::Min1(minY, point3.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point3.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) [static] :201
Rect Rect__Inflate(Rect r, float size)
{
    return Rect__Inflate1(r, ::g::Uno::Float2__New2(size, size));
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) [static] :192
Rect Rect__Inflate1(Rect r, ::g::Uno::Float2 size)
{
    return Rect__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) [static] :150
Rect Rect__Intersect(Rect a, Rect b)
{
    return Rect__New1(::g::Uno::Math::Max1(a.Left, b.Left), ::g::Uno::Math::Max1(a.Top, b.Top), ::g::Uno::Math::Min1(a.Right, b.Right), ::g::Uno::Math::Min1(a.Bottom, b.Bottom));
}

// public Rect New(float left, float top, float right, float bottom) [static] :10
Rect Rect__New1(float left, float top, float right, float bottom)
{
    Rect obj1;
    obj1.ctor_(left, top, right, bottom);
    return obj1;
}

// public Rect New(float2 pos, float2 size) [static] :18
Rect Rect__New2(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Rect obj2;
    obj2.ctor_1(pos, size);
    return obj2;
}

// public static implicit operator Uno.Rect(Uno.Recti r) [static] :136
Rect Rect__op_Implicit1(::g::Uno::Recti r)
{
    return Rect__New1((float)r.Left, (float)r.Top, (float)r.Right, (float)r.Bottom);
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) [static] :187
Rect Rect__Scale(Rect r, float scale)
{
    return Rect__Scale1(r, ::g::Uno::Float2__New2(scale, scale));
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) [static] :178
Rect Rect__Scale1(Rect r, ::g::Uno::Float2 scale)
{
    return Rect__New1(r.Left * scale.X, r.Top * scale.Y, r.Right * scale.X, r.Bottom * scale.Y);
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) [static] :160
Rect Rect__Transform(Rect r, ::g::Uno::Float4x4 matrix)
{
    return Rect__ContainingPoints1(::g::Uno::Vector::TransformCoordinate(r.LeftTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightBottom(), matrix), ::g::Uno::Vector::TransformCoordinate(r.LeftBottom(), matrix));
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) [static] :169
Rect Rect__Translate(Rect r, ::g::Uno::Float2 offset)
{
    return Rect__New1(r.Left + offset.X, r.Top + offset.Y, r.Right + offset.X, r.Bottom + offset.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Rect.uno
// ---------------------------------------------------------------

// public struct Recti :269
// {
static void Recti_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Recti, Left), 0,
        ::TYPES[8/*int*/], offsetof(Recti, Top), 0,
        ::TYPES[8/*int*/], offsetof(Recti, Right), 0,
        ::TYPES[8/*int*/], offsetof(Recti, Bottom), 0);
    type->Reflection.SetFields(4,
        new uField("Bottom", 3),
        new uField("Left", 0),
        new uField("Right", 2),
        new uField("Top", 1));
    type->Reflection.SetFunctions(16,
        new uFunction("get_Area", NULL, (void*)Recti__get_Area_fn, 0, false, ::TYPES[8/*int*/], 0),
        new uFunction("Contains", NULL, (void*)Recti__Contains1_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)Recti__Equals2_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type, type),
        new uFunction("Inflate", NULL, (void*)Recti__Inflate_fn, 0, true, type, 2, type, ::TYPES[8/*int*/]),
        new uFunction("Inflate", NULL, (void*)Recti__Inflate1_fn, 0, true, type, 2, type, ::g::Uno::Int2_typeof()),
        new uFunction("Intersect", NULL, (void*)Recti__Intersect_fn, 0, true, type, 2, type, type),
        new uFunction("get_Maximum", NULL, (void*)Recti__get_Maximum_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)Recti__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Minimum", NULL, (void*)Recti__get_Minimum_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)Recti__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction(".ctor", NULL, (void*)Recti__New1_fn, 0, true, type, 4, ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Recti__New2_fn, 0, true, type, 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()),
        new uFunction("get_Position", NULL, (void*)Recti__get_Position_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Recti__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Size", NULL, (void*)Recti__get_Size_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)Recti__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()));
}

uStructType* Recti_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.Alignment = alignof(Recti);
    options.ValueSize = sizeof(Recti);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Recti", options);
    type->fp_build_ = Recti_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Recti__ToString_fn;
    return type;
}

// public Recti(int left, int top, int right, int bottom) :273
void Recti__ctor__fn(Recti* __this, int32_t* left, int32_t* top, int32_t* right, int32_t* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Recti(int2 pos, int2 size) :281
void Recti__ctor_1_fn(Recti* __this, ::g::Uno::Int2* pos, ::g::Uno::Int2* size)
{
    __this->ctor_1(*pos, *size);
}

// public int get_Area() :348
void Recti__get_Area_fn(Recti* __this, int32_t* __retval)
{
    *__retval = __this->Area();
}

// public bool Contains(Uno.Recti r) :351
void Recti__Contains1_fn(Recti* __this, Recti* r, bool* __retval)
{
    *__retval = __this->Contains1(*r);
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) :289
void Recti__Equals2_fn(Recti* rect1, Recti* rect2, bool* __retval)
{
    *__retval = Recti__Equals2(*rect1, *rect2);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) :428
void Recti__Inflate_fn(Recti* r, int32_t* size, Recti* __retval)
{
    *__retval = Recti__Inflate(*r, *size);
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) :419
void Recti__Inflate1_fn(Recti* r, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__Inflate1(*r, *size);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) :385
void Recti__Intersect_fn(Recti* a, Recti* b, Recti* __retval)
{
    *__retval = Recti__Intersect(*a, *b);
}

// public int2 get_Maximum() :305
void Recti__get_Maximum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(int2 value) :306
void Recti__set_Maximum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Maximum(*value);
}

// public int2 get_Minimum() :299
void Recti__get_Minimum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(int2 value) :300
void Recti__set_Minimum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Minimum(*value);
}

// public Recti New(int left, int top, int right, int bottom) :273
void Recti__New1_fn(int32_t* left, int32_t* top, int32_t* right, int32_t* bottom, Recti* __retval)
{
    *__retval = Recti__New1(*left, *top, *right, *bottom);
}

// public Recti New(int2 pos, int2 size) :281
void Recti__New2_fn(::g::Uno::Int2* pos, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__New2(*pos, *size);
}

// public int2 get_Position() :336
void Recti__get_Position_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(int2 value) :337
void Recti__set_Position_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Position(*value);
}

// public int2 get_Size() :342
void Recti__get_Size_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(int2 value) :343
void Recti__set_Size_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :366
void Recti__ToString_fn(Recti* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Recti", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->Left, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Top, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Right, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Bottom, ::TYPES[8/*int*/])), void();
}

// public Recti(int left, int top, int right, int bottom) [instance] :273
void Recti::ctor_(int32_t left, int32_t top, int32_t right, int32_t bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Recti(int2 pos, int2 size) [instance] :281
void Recti::ctor_1(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (Left + size.X);
    Bottom = (Top + size.Y);
}

// public int get_Area() [instance] :348
int32_t Recti::Area()
{
    return (Right - Left) * (Bottom - Top);
}

// public bool Contains(Uno.Recti r) [instance] :351
bool Recti::Contains1(Recti r)
{
    return (((Left <= r.Left) && (Right >= r.Right)) && (Top <= r.Top)) && (Bottom >= r.Bottom);
}

// public int2 get_Maximum() [instance] :305
::g::Uno::Int2 Recti::Maximum()
{
    return ::g::Uno::Int2__New2(Right, Bottom);
}

// public void set_Maximum(int2 value) [instance] :306
void Recti::Maximum(::g::Uno::Int2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public int2 get_Minimum() [instance] :299
::g::Uno::Int2 Recti::Minimum()
{
    return ::g::Uno::Int2__New2(Left, Top);
}

// public void set_Minimum(int2 value) [instance] :300
void Recti::Minimum(::g::Uno::Int2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public int2 get_Position() [instance] :336
::g::Uno::Int2 Recti::Position()
{
    return Minimum();
}

// public void set_Position(int2 value) [instance] :337
void Recti::Position(::g::Uno::Int2 value)
{
    ::g::Uno::Int2 dp = ::g::Uno::Int2__op_Subtraction1(value, Position());
    Left = value.X;
    Right = (Right + dp.X);
    Top = value.Y;
    Bottom = (Bottom + dp.Y);
}

// public int2 get_Size() [instance] :342
::g::Uno::Int2 Recti::Size()
{
    return ::g::Uno::Int2__New2(Right - Left, Bottom - Top);
}

// public void set_Size(int2 value) [instance] :343
void Recti::Size(::g::Uno::Int2 value)
{
    Right = (Left + value.X);
    Bottom = (Top + value.Y);
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) [static] :289
bool Recti__Equals2(Recti rect1, Recti rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) [static] :428
Recti Recti__Inflate(Recti r, int32_t size)
{
    return Recti__Inflate1(r, ::g::Uno::Int2__New2(size, size));
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) [static] :419
Recti Recti__Inflate1(Recti r, ::g::Uno::Int2 size)
{
    return Recti__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) [static] :385
Recti Recti__Intersect(Recti a, Recti b)
{
    return Recti__New1(::g::Uno::Math::Max8(a.Left, b.Left), ::g::Uno::Math::Max8(a.Top, b.Top), ::g::Uno::Math::Min8(a.Right, b.Right), ::g::Uno::Math::Min8(a.Bottom, b.Bottom));
}

// public Recti New(int left, int top, int right, int bottom) [static] :273
Recti Recti__New1(int32_t left, int32_t top, int32_t right, int32_t bottom)
{
    Recti obj4;
    obj4.ctor_(left, top, right, bottom);
    return obj4;
}

// public Recti New(int2 pos, int2 size) [static] :281
Recti Recti__New2(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Recti obj5;
    obj5.ctor_1(pos, size);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/SByte.uno
// ----------------------------------------------------------------

// public intrinsic struct SByte :11
// {
static void SByte_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* SByte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int8_t);
    options.ValueSize = sizeof(int8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte", options);
    type->fp_build_ = SByte_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))SByte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :18
void SByte__Equals_fn(int8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int8_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :24
void SByte__GetHashCode_fn(int8_t* __this, uType* __type, int32_t* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :36
void SByte__ToString_fn(int8_t* __this, uType* __type, uString** __retval)
{
    char buf[5];
    int len = snprintf(buf, sizeof(buf), "%d", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/SByte2.uno
// -----------------------------------------------------------------

// public intrinsic struct SByte2 :7
// {
static void SByte2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::SByte_typeof();
    type->SetFields(0,
        ::TYPES[13/*sbyte*/], offsetof(SByte2, X), 0,
        ::TYPES[13/*sbyte*/], offsetof(SByte2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* SByte2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(SByte2);
    options.ValueSize = sizeof(SByte2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte2", options);
    type->fp_build_ = SByte2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))SByte2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :50
void SByte2__Equals_fn(SByte2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :51
void SByte2__GetHashCode_fn(SByte2* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :52
void SByte2__ToString_fn(SByte2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("sbyte2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::SByte::ToString(__this->X, ::TYPES[13/*sbyte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->Y, ::TYPES[13/*sbyte*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/SByte4.uno
// -----------------------------------------------------------------

// public intrinsic struct SByte4 :7
// {
static void SByte4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[13] = ::g::Uno::SByte_typeof();
    type->SetFields(0,
        ::TYPES[13/*sbyte*/], offsetof(SByte4, X), 0,
        ::TYPES[13/*sbyte*/], offsetof(SByte4, Y), 0,
        ::TYPES[13/*sbyte*/], offsetof(SByte4, Z), 0,
        ::TYPES[13/*sbyte*/], offsetof(SByte4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* SByte4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(SByte4);
    options.ValueSize = sizeof(SByte4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte4", options);
    type->fp_build_ = SByte4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))SByte4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :58
void SByte4__Equals_fn(SByte4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :59
void SByte4__GetHashCode_fn(SByte4* __this, uType* __type, int32_t* __retval)
{
    int32_t ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :60
void SByte4__ToString_fn(SByte4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("sbyte4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::SByte::ToString(__this->X, ::TYPES[13/*sbyte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->Y, ::TYPES[13/*sbyte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->Z, ::TYPES[13/*sbyte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->W, ::TYPES[13/*sbyte*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Short.uno
// ----------------------------------------------------------------

// public intrinsic struct Short :11
// {
static void Short_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* Short_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int16_t);
    options.ValueSize = sizeof(int16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short", options);
    type->fp_build_ = Short_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Short__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void Short__Equals_fn(int16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int16_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :23
void Short__GetHashCode_fn(int16_t* __this, uType* __type, int32_t* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :35
void Short__ToString_fn(int16_t* __this, uType* __type, uString** __retval)
{
    char buf[7];
    int len = snprintf(buf, sizeof(buf), "%d", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Short2.uno
// -----------------------------------------------------------------

// public intrinsic struct Short2 :7
// {
static void Short2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Short_typeof();
    type->SetFields(0,
        ::TYPES[14/*short*/], offsetof(Short2, X), 0,
        ::TYPES[14/*short*/], offsetof(Short2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* Short2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Short2);
    options.ValueSize = sizeof(Short2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short2", options);
    type->fp_build_ = Short2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Short2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :49
void Short2__Equals_fn(Short2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :50
void Short2__GetHashCode_fn(Short2* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :51
void Short2__ToString_fn(Short2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("short2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Short::ToString(__this->X, ::TYPES[14/*short*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->Y, ::TYPES[14/*short*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Short4.uno
// -----------------------------------------------------------------

// public intrinsic struct Short4 :7
// {
static void Short4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Short_typeof();
    type->SetFields(0,
        ::TYPES[14/*short*/], offsetof(Short4, X), 0,
        ::TYPES[14/*short*/], offsetof(Short4, Y), 0,
        ::TYPES[14/*short*/], offsetof(Short4, Z), 0,
        ::TYPES[14/*short*/], offsetof(Short4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* Short4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Short4);
    options.ValueSize = sizeof(Short4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short4", options);
    type->fp_build_ = Short4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Short4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :58
void Short4__Equals_fn(Short4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :59
void Short4__GetHashCode_fn(Short4* __this, uType* __type, int32_t* __retval)
{
    int32_t ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :60
void Short4__ToString_fn(Short4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("short4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Short::ToString(__this->X, ::TYPES[14/*short*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->Y, ::TYPES[14/*short*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->Z, ::TYPES[14/*short*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->W, ::TYPES[14/*short*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/String.uno
// -----------------------------------------------------------------

// public intrinsic sealed class String :12
// {
// static generated String() :12
static void String__cctor__fn(uType* __type)
{
    String::Empty_ = ::STRINGS[34/*""*/];
}

static void String_build(uType* type)
{
    ::STRINGS[34] = uString::Const("");
    ::STRINGS[48] = uString::Const("value");
    ::STRINGS[17] = uString::Const("startIndex");
    ::STRINGS[31] = uString::Const("str");
    ::STRINGS[49] = uString::Const("pos");
    ::STRINGS[50] = uString::Const("anyOf");
    ::STRINGS[51] = uString::Const("oldValue");
    ::STRINGS[12] = uString::Const("length");
    ::TYPES[15] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[16] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Array_typeof()->MakeMethod(2/*IndexOf<char>*/, ::g::Uno::Char_typeof(), NULL);
    ::TYPES[18] = type->Array();
    ::TYPES[19] = ::TYPES[15/*char[]*/]->Array();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        type, (uintptr_t)&String::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Empty", 0));
    type->Reflection.SetFunctions(30,
        new uFunction("Compare", NULL, (void*)String__Compare_fn, 0, true, ::g::Uno::Int_typeof(), 2, type, type),
        new uFunction("Concat", NULL, (void*)String__Concat_fn, 0, true, type, 2, uObject_typeof(), uObject_typeof()),
        new uFunction("Concat", NULL, (void*)String__Concat1_fn, 0, true, type, 2, type, type),
        new uFunction("Contains", NULL, (void*)String__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("EndsWith", NULL, (void*)String__EndsWith_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)String__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)String__Equals3_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type, type),
        new uFunction("Format", NULL, (void*)String__Format_fn, 0, true, type, 2, type, uObject_typeof()->Array()),
        new uFunction("IndexOf", NULL, (void*)String__IndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("IndexOf", NULL, (void*)String__IndexOf1_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Char_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("IndexOf", NULL, (void*)String__IndexOf3_fn, 0, false, ::g::Uno::Int_typeof(), 2, type, ::g::Uno::Int_typeof()),
        new uFunction("Insert", NULL, (void*)String__Insert_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), type),
        new uFunction("IsNullOrEmpty", NULL, (void*)String__IsNullOrEmpty_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Join", NULL, (void*)String__Join_fn, 0, true, type, 2, type, ::TYPES[18/*string[]*/]),
        new uFunction("LastIndexOf", NULL, (void*)String__LastIndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("LastIndexOfAny", NULL, (void*)String__LastIndexOfAny_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::TYPES[15/*char[]*/]),
        new uFunction("PadLeft", NULL, (void*)String__PadLeft1_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("Replace", NULL, (void*)String__Replace_fn, 0, false, type, 2, ::g::Uno::Char_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("Replace", NULL, (void*)String__Replace1_fn, 0, false, type, 2, type, type),
        new uFunction("Split", NULL, (void*)String__Split_fn, 0, false, ::TYPES[18/*string[]*/], 1, ::TYPES[15/*char[]*/]),
        new uFunction("StartsWith", NULL, (void*)String__StartsWith_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Substring", NULL, (void*)String__Substring_fn, 0, false, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Substring", NULL, (void*)String__Substring1_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ToCharArray", NULL, (void*)String__ToCharArray_fn, 0, false, ::TYPES[15/*char[]*/], 0),
        new uFunction("ToCharArray", NULL, (void*)String__ToCharArray1_fn, 0, false, ::TYPES[15/*char[]*/], 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ToLower", NULL, (void*)String__ToLower_fn, 0, false, type, 0),
        new uFunction("ToUpper", NULL, (void*)String__ToUpper_fn, 0, false, type, 0),
        new uFunction("Trim", NULL, (void*)String__Trim_fn, 0, false, type, 0),
        new uFunction("Trim", NULL, (void*)String__Trim1_fn, 0, false, type, 1, ::TYPES[15/*char[]*/]),
        new uFunction("TrimEnd", NULL, (void*)String__TrimEnd_fn, 0, false, type, 1, ::TYPES[15/*char[]*/]));
}

uType* String_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.String", options);
    type->fp_build_ = String_build;
    type->fp_cctor_ = String__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))String__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))String__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))String__ToString_fn;
    return type;
}

// public static int Compare(string a, string b) :776
void String__Compare_fn(uString* a, uString* b, int32_t* __retval)
{
    *__retval = String::Compare(a, b);
}

// public static string Concat(object a, object b) :225
void String__Concat_fn(uObject* a, uObject* b, uString** __retval)
{
    *__retval = String::Concat(a, b);
}

// public static string Concat(string a, string b) :182
void String__Concat1_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::Concat1(a, b);
}

// public bool Contains(string str) :800
void String__Contains_fn(uString* __this, uString* str, bool* __retval)
{
    *__retval = String::Contains(__this, str);
}

// public bool EndsWith(string value) :448
void String__EndsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::EndsWith(__this, value);
}

// public override sealed bool Equals(object other) :132
void String__Equals_fn(uString* __this, uObject* other, bool* __retval)
{
    if (other != NULL && __this->__type == other->__type)
    {
        uString* str = (uString*)other;
        return *__retval = __this->_length == str->_length && !memcmp(__this->_ptr, str->_ptr, sizeof(char16_t) * __this->_length), void();
    }
    
    return *__retval = false, void();
}

// public bool Equals(string other) :148
void String__Equals2_fn(uString* __this, uString* other, bool* __retval)
{
    *__retval = String::Equals2(__this, other);
}

// public static bool Equals(string left, string right) :153
void String__Equals3_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::Equals3(left, right);
}

// public static string Format(string str, object[] objs) :789
void String__Format_fn(uString* str, uArray* objs, uString** __retval)
{
    *__retval = String::Format(str, objs);
}

// public override sealed int GetHashCode() :33
void String__GetHashCode_fn(uString* __this, int32_t* __retval)
{
    int32_t hash = 5381;

    for (int32_t i = 0; i < __this->Length(); i++)
        hash = ((hash << 5) + hash) ^ (int32_t)__this->Item(i);

    return *__retval = hash, void();
}

// public int IndexOf(char c) :276
void String__IndexOf_fn(uString* __this, char16_t* c, int32_t* __retval)
{
    *__retval = String::IndexOf(__this, *c);
}

// public int IndexOf(char c, int startIndex) :281
void String__IndexOf1_fn(uString* __this, char16_t* c, int32_t* startIndex, int32_t* __retval)
{
    *__retval = String::IndexOf1(__this, *c, *startIndex);
}

// public int IndexOf(string str, [int startIndex]) :747
void String__IndexOf3_fn(uString* __this, uString* str, int32_t* startIndex, int32_t* __retval)
{
    *__retval = String::IndexOf3(__this, str, *startIndex);
}

// private int IndexOfFirstNotInSet(char[] charSet) :686
void String__IndexOfFirstNotInSet_fn(uString* __this, uArray* charSet, int32_t* __retval)
{
    *__retval = String::IndexOfFirstNotInSet(__this, charSet);
}

// private int IndexOfFirstNotWhiteSpace() :708
void String__IndexOfFirstNotWhiteSpace_fn(uString* __this, int32_t* __retval)
{
    *__retval = String::IndexOfFirstNotWhiteSpace(__this);
}

// private int IndexOfLastNotInSet(char[] charSet) :694
void String__IndexOfLastNotInSet_fn(uString* __this, uArray* charSet, int32_t* __retval)
{
    *__retval = String::IndexOfLastNotInSet(__this, charSet);
}

// private int IndexOfLastNotWhiteSpace() :716
void String__IndexOfLastNotWhiteSpace_fn(uString* __this, int32_t* __retval)
{
    *__retval = String::IndexOfLastNotWhiteSpace(__this);
}

// private int IndexOfUnchecked(char c, int startIndex, int count) :300
void String__IndexOfUnchecked_fn(uString* __this, char16_t* c, int32_t* startIndex, int32_t* count, int32_t* __retval)
{
    *__retval = String::IndexOfUnchecked(__this, *c, *startIndex, *count);
}

// public string Insert(int pos, string str) :724
void String__Insert_fn(uString* __this, int32_t* pos, uString* str, uString** __retval)
{
    *__retval = String::Insert(__this, *pos, str);
}

// private bool InSet(char c, char[] charSet) :702
void String__InSet_fn(uString* __this, char16_t* c, uArray* charSet, bool* __retval)
{
    *__retval = String::InSet(__this, *c, charSet);
}

// public static bool IsNullOrEmpty(string s) :548
void String__IsNullOrEmpty_fn(uString* s, bool* __retval)
{
    *__retval = String::IsNullOrEmpty(s);
}

// public static string Join(string separator, string[] value) :533
void String__Join_fn(uString* separator, uArray* value, uString** __retval)
{
    *__retval = String::Join(separator, value);
}

// public int LastIndexOf(char c) :353
void String__LastIndexOf_fn(uString* __this, char16_t* c, int32_t* __retval)
{
    *__retval = String::LastIndexOf(__this, *c);
}

// public int LastIndexOfAny(char[] anyOf) :392
void String__LastIndexOfAny_fn(uString* __this, uArray* anyOf, int32_t* __retval)
{
    *__retval = String::LastIndexOfAny(__this, anyOf);
}

// private int LastIndexOfAnyUnchecked(char[] anyOf, int startIndex, int count) :425
void String__LastIndexOfAnyUnchecked_fn(uString* __this, uArray* anyOf, int32_t* startIndex, int32_t* count, int32_t* __retval)
{
    *__retval = String::LastIndexOfAnyUnchecked(__this, anyOf, *startIndex, *count);
}

// private int LastIndexOfUnchecked(char c, int startIndex, int count) :383
void String__LastIndexOfUnchecked_fn(uString* __this, char16_t* c, int32_t* startIndex, int32_t* count, int32_t* __retval)
{
    *__retval = String::LastIndexOfUnchecked(__this, *c, *startIndex, *count);
}

// private bool MatchesAt(string str, int pos) :768
void String__MatchesAt_fn(uString* __this, uString* str, int32_t* pos, bool* __retval)
{
    *__retval = String::MatchesAt(__this, str, *pos);
}

// public static operator +(object a, string b) :240
void String__op_Addition_fn(uObject* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition(a, b);
}

// public static operator +(string a, object b) :235
void String__op_Addition1_fn(uString* a, uObject* b, uString** __retval)
{
    *__retval = String::op_Addition1(a, b);
}

// public static operator +(string a, string b) :230
void String__op_Addition2_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition2(a, b);
}

// public static operator ==(string left, string right) :172
void String__op_Equality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Equality(left, right);
}

// public static operator !=(string left, string right) :177
void String__op_Inequality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Inequality(left, right);
}

// public string PadLeft(int totalLength, char paddingSymbol) :570
void String__PadLeft1_fn(uString* __this, int32_t* totalLength, char16_t* paddingSymbol, uString** __retval)
{
    *__retval = String::PadLeft1(__this, *totalLength, *paddingSymbol);
}

// public string Replace(char oldChar, char newChar) :48
void String__Replace_fn(uString* __this, char16_t* oldChar, char16_t* newChar, uString** __retval)
{
    *__retval = String::Replace(__this, *oldChar, *newChar);
}

// public string Replace(string oldValue, string newValue) :59
void String__Replace1_fn(uString* __this, uString* oldValue, uString* newValue, uString** __retval)
{
    *__retval = String::Replace1(__this, oldValue, newValue);
}

// public string[] Split(char[] splitChars) :478
void String__Split_fn(uString* __this, uArray* splitChars, uArray** __retval)
{
    *__retval = String::Split(__this, splitChars);
}

// public bool StartsWith(string value) :434
void String__StartsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::StartsWith(__this, value);
}

// private char[] SubCharArray(int start, int len) :88
void String__SubCharArray_fn(uString* __this, int32_t* start, int32_t* len, uArray** __retval)
{
    *__retval = String::SubCharArray(__this, *start, *len);
}

// public string Substring(int start) :271
void String__Substring_fn(uString* __this, int32_t* start, uString** __retval)
{
    *__retval = String::Substring(__this, *start);
}

// public string Substring(int startIndex, int length) :245
void String__Substring1_fn(uString* __this, int32_t* startIndex, int32_t* length, uString** __retval)
{
    *__retval = String::Substring1(__this, *startIndex, *length);
}

// public char[] ToCharArray() :473
void String__ToCharArray_fn(uString* __this, uArray** __retval)
{
    *__retval = String::ToCharArray(__this);
}

// public char[] ToCharArray(int start, int length) :463
void String__ToCharArray1_fn(uString* __this, int32_t* start, int32_t* length, uArray** __retval)
{
    *__retval = String::ToCharArray1(__this, *start, *length);
}

// public string ToLower() :98
void String__ToLower_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToLower(__this);
}

// public override sealed string ToString() :43
void String__ToString_fn(uString* __this, uString** __retval)
{
    return *__retval = __this, void();
}

// public string ToUpper() :115
void String__ToUpper_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToUpper(__this);
}

// public string Trim() :610
void String__Trim_fn(uString* __this, uString** __retval)
{
    *__retval = String::Trim(__this);
}

// public string Trim(char[] trimChars) :624
void String__Trim1_fn(uString* __this, uArray* trimChars, uString** __retval)
{
    *__retval = String::Trim1(__this, trimChars);
}

// public string TrimEnd(char[] trimChars) :665
void String__TrimEnd_fn(uString* __this, uArray* trimChars, uString** __retval)
{
    *__retval = String::TrimEnd(__this, trimChars);
}

// private string TrimEndWhiteSpace() :677
void String__TrimEndWhiteSpace_fn(uString* __this, uString** __retval)
{
    *__retval = String::TrimEndWhiteSpace(__this);
}

uSStrong<uString*> String::Empty_;

// public bool Contains(string str) [instance] :800
bool String::Contains(uString* __this, uString* str)
{
    uStackFrame __("string", "Contains(string)");
    return String::IndexOf3(__this, str, 0) >= 0;
}

// public bool EndsWith(string value) [instance] :448
bool String::EndsWith(uString* __this, uString* value)
{
    uStackFrame __("string", "EndsWith(string)");

    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[48/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    int32_t index = __this->Length() - uPtr(value)->Length();

    for (int32_t i = 0; i < value->Length(); i++)
        if (__this->Item(index++) != uPtr(value)->Item(i))
            return false;

    return true;
}

// public bool Equals(string other) [instance] :148
bool String::Equals2(uString* __this, uString* other)
{
    uStackFrame __("string", "Equals(string)");
    return String::Equals3(__this, other);
}

// public int IndexOf(char c) [instance] :276
int32_t String::IndexOf(uString* __this, char16_t c)
{
    return String::IndexOfUnchecked(__this, c, 0, __this->Length());
}

// public int IndexOf(char c, int startIndex) [instance] :281
int32_t String::IndexOf1(uString* __this, char16_t c, int32_t startIndex)
{
    uStackFrame __("string", "IndexOf(char,int)");

    if ((startIndex < 0) || (startIndex > __this->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[17/*"startIndex"*/]));

    return String::IndexOfUnchecked(__this, c, startIndex, __this->Length() - startIndex);
}

// public int IndexOf(string str, [int startIndex]) [instance] :747
int32_t String::IndexOf3(uString* __this, uString* str, int32_t startIndex)
{
    uStackFrame __("string", "IndexOf(string,[int])");

    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    if (String::op_Equality(str, String::Empty_))
        return 0;

    if (startIndex > __this->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[17/*"startIndex"*/]));

    for (int32_t hay = startIndex; hay < __this->Length(); hay++)
    {
        if (uPtr(str)->Length() > (__this->Length() - hay))
            return -1;

        if (String::MatchesAt(__this, str, hay))
            return hay;
    }

    return -1;
}

// private int IndexOfFirstNotInSet(char[] charSet) [instance] :686
int32_t String::IndexOfFirstNotInSet(uString* __this, uArray* charSet)
{
    uStackFrame __("string", "IndexOfFirstNotInSet(char[])");

    for (int32_t i = 0; i < __this->Length(); i++)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfFirstNotWhiteSpace() [instance] :708
int32_t String::IndexOfFirstNotWhiteSpace(uString* __this)
{
    for (int32_t i = 0; i < __this->Length(); i++)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// private int IndexOfLastNotInSet(char[] charSet) [instance] :694
int32_t String::IndexOfLastNotInSet(uString* __this, uArray* charSet)
{
    uStackFrame __("string", "IndexOfLastNotInSet(char[])");

    for (int32_t i = __this->Length() - 1; i >= 0; i--)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfLastNotWhiteSpace() [instance] :716
int32_t String::IndexOfLastNotWhiteSpace(uString* __this)
{
    for (int32_t i = __this->Length() - 1; i >= 0; i--)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// private int IndexOfUnchecked(char c, int startIndex, int count) [instance] :300
int32_t String::IndexOfUnchecked(uString* __this, char16_t c, int32_t startIndex, int32_t count)
{
    int32_t length = startIndex + count;

    for (int32_t i = startIndex; i < length; i++)
        if (__this->Item(i) == c)
            return i;

    return -1;
}

// public string Insert(int pos, string str) [instance] :724
uString* String::Insert(uString* __this, int32_t pos, uString* str)
{
    uStackFrame __("string", "Insert(int,string)");

    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[31/*"str"*/]));

    if ((pos < 0) || (pos > __this->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[49/*"pos"*/]));

    if (uPtr(str)->Length() == 0)
        return __this;

    if (__this->Length() == 0)
        return str;

    uArray* s = uArray::New(::TYPES[15/*char[]*/], __this->Length() + uPtr(str)->Length());

    for (int32_t i = 0; i < pos; i++)
        uPtr(s)->Item<char16_t>(i) = __this->Item(i);

    for (int32_t i1 = 0; i1 < str->Length(); i1++)
        uPtr(s)->Item<char16_t>(i1 + pos) = uPtr(str)->Item(i1);

    for (int32_t i2 = pos; i2 < __this->Length(); i2++)
        uPtr(s)->Item<char16_t>(i2 + uPtr(str)->Length()) = __this->Item(i2);

    return uString::CharArray(s);
}

// private bool InSet(char c, char[] charSet) [instance] :702
bool String::InSet(uString* __this, char16_t c, uArray* charSet)
{
    uStackFrame __("string", "InSet(char,char[])");

    for (int32_t i = 0; i < uPtr(charSet)->Length(); i++)
        if (uPtr(charSet)->Item<char16_t>(i) == c)
            return true;

    return false;
}

// public int LastIndexOf(char c) [instance] :353
int32_t String::LastIndexOf(uString* __this, char16_t c)
{
    return String::LastIndexOfUnchecked(__this, c, __this->Length() - 1, __this->Length());
}

// public int LastIndexOfAny(char[] anyOf) [instance] :392
int32_t String::LastIndexOfAny(uString* __this, uArray* anyOf)
{
    uStackFrame __("string", "LastIndexOfAny(char[])");

    if (anyOf == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[50/*"anyOf"*/]));

    return String::LastIndexOfAnyUnchecked(__this, anyOf, __this->Length() - 1, __this->Length());
}

// private int LastIndexOfAnyUnchecked(char[] anyOf, int startIndex, int count) [instance] :425
int32_t String::LastIndexOfAnyUnchecked(uString* __this, uArray* anyOf, int32_t startIndex, int32_t count)
{
    uStackFrame __("string", "LastIndexOfAnyUnchecked(char[],int,int)");
    int32_t ret6;

    for (int32_t i = 0; i < count; ++i)
        if ((::g::Uno::Array__IndexOf_fn(::TYPES[17/*Uno.Array.IndexOf<char>*/], anyOf, uCRef<char16_t>(__this->Item(startIndex - i)), &ret6), ret6) >= 0)
            return startIndex - i;

    return -1;
}

// private int LastIndexOfUnchecked(char c, int startIndex, int count) [instance] :383
int32_t String::LastIndexOfUnchecked(uString* __this, char16_t c, int32_t startIndex, int32_t count)
{
    for (int32_t i = 0; i < count; ++i)
        if (__this->Item(startIndex - i) == c)
            return startIndex - i;

    return -1;
}

// private bool MatchesAt(string str, int pos) [instance] :768
bool String::MatchesAt(uString* __this, uString* str, int32_t pos)
{
    uStackFrame __("string", "MatchesAt(string,int)");

    for (int32_t i = 0; i < uPtr(str)->Length(); i++)
        if (((pos + i) == __this->Length()) || (__this->Item(pos + i) != uPtr(str)->Item(i)))
            return false;

    return true;
}

// public string PadLeft(int totalLength, char paddingSymbol) [instance] :570
uString* String::PadLeft1(uString* __this, int32_t totalLength, char16_t paddingSymbol)
{
    uStackFrame __("string", "PadLeft(int,char)");
    int32_t padLength = totalLength - __this->Length();

    if (padLength <= 0)
        return __this;

    uArray* result = uArray::New(::TYPES[15/*char[]*/], totalLength);
    int32_t index;

    for (index = 0; index < padLength; index++)
        uPtr(result)->Item<char16_t>(index) = paddingSymbol;

    for (int32_t i = 0; i < __this->Length(); i++)
        uPtr(result)->Item<char16_t>(index++) = __this->Item(i);

    return uString::CharArray(result);
}

// public string Replace(char oldChar, char newChar) [instance] :48
uString* String::Replace(uString* __this, char16_t oldChar, char16_t newChar)
{
    uStackFrame __("string", "Replace(char,char)");
    uArray* s = uArray::New(::TYPES[15/*char[]*/], __this->Length());

    for (int32_t i = 0; i < __this->Length(); i++)
    {
        uPtr(s)->Item<char16_t>(i) = __this->Item(i);

        if (s->Item<char16_t>(i) == oldChar)
            uPtr(s)->Item<char16_t>(i) = newChar;
    }

    return uString::CharArray(s);
}

// public string Replace(string oldValue, string newValue) [instance] :59
uString* String::Replace1(uString* __this, uString* oldValue, uString* newValue)
{
    uStackFrame __("string", "Replace(string,string)");

    if (String::op_Equality(oldValue, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[51/*"oldValue"*/]));

    if (String::op_Equality(oldValue, String::Empty_))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[34/*""*/], ::STRINGS[51/*"oldValue"*/]));

    int32_t index = String::IndexOf3(__this, oldValue, 0);

    if (index == -1)
        return __this;

    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    int32_t pos = 0;

    while (index != -1)
    {
        uPtr(sb)->Append1(String::SubCharArray(__this, pos, index - pos));
        sb->Append2(newValue);
        pos = index + uPtr(oldValue)->Length();
        index = String::IndexOf3(__this, oldValue, pos);
    }

    sb->Append1(String::SubCharArray(__this, pos, __this->Length() - pos));
    return sb->ToString();
}

// public string[] Split(char[] splitChars) [instance] :478
uArray* String::Split(uString* __this, uArray* splitChars)
{
    uStackFrame __("string", "Split(char[])");

    if ((splitChars == NULL) || (uPtr(splitChars)->Length() == 0))
        splitChars = uArray::Init<int32_t>(::TYPES[15/*char[]*/], 4, ' ', 9, 10, 13);

    int32_t splitCount = 0;
    int32_t charCount = 0;

    for (int32_t i = 0; i < __this->Length(); i++)

        for (int32_t k = 0; k < uPtr(splitChars)->Length(); k++)
            if (__this->Item(i) == uPtr(splitChars)->Item<char16_t>(k))
                splitCount++;

    uArray* r = uArray::New(::TYPES[18/*string[]*/], splitCount + 1);
    uArray* ch = uArray::New(::TYPES[19/*char[][]*/], splitCount + 1);
    splitCount = 0;
    int32_t start = 0;

    for (int32_t i1 = 0; i1 < __this->Length(); i1++)
    {
        bool found = false;

        for (int32_t k1 = 0; k1 < uPtr(splitChars)->Length(); k1++)
            if (__this->Item(i1) == uPtr(splitChars)->Item<char16_t>(k1))
            {
                uPtr(ch)->Strong<uArray*>(splitCount) = uArray::New(::TYPES[15/*char[]*/], charCount);

                for (int32_t n = 0; n < charCount; n++)
                    uPtr(uPtr(ch)->Strong<uArray*>(splitCount))->Item<char16_t>(n) = __this->Item(start + n);

                start = i1 + 1;
                splitCount++;
                charCount = 0;
                found = true;
                break;
            }

        if (!found)
            charCount++;
    }

    ch->Strong<uArray*>(splitCount) = uArray::New(::TYPES[15/*char[]*/], charCount);

    for (int32_t n1 = 0; n1 < charCount; n1++)
        uPtr(uPtr(ch)->Strong<uArray*>(splitCount))->Item<char16_t>(n1) = __this->Item(start + n1);

    for (int32_t i2 = 0; i2 < ch->Length(); i2++)
        uPtr(r)->Strong<uString*>(i2) = uString::CharArray(uPtr(ch)->Strong<uArray*>(i2));

    return r;
}

// public bool StartsWith(string value) [instance] :434
bool String::StartsWith(uString* __this, uString* value)
{
    uStackFrame __("string", "StartsWith(string)");

    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[48/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    for (int32_t i = 0; i < uPtr(value)->Length(); i++)
        if (__this->Item(i) != uPtr(value)->Item(i))
            return false;

    return true;
}

// private char[] SubCharArray(int start, int len) [instance] :88
uArray* String::SubCharArray(uString* __this, int32_t start, int32_t len)
{
    uStackFrame __("string", "SubCharArray(int,int)");
    uArray* chars = uArray::New(::TYPES[15/*char[]*/], len);

    for (int32_t i = 0; i < len; i++)
        uPtr(chars)->Item<char16_t>(i) = __this->Item(start + i);

    return chars;
}

// public string Substring(int start) [instance] :271
uString* String::Substring(uString* __this, int32_t start)
{
    uStackFrame __("string", "Substring(int)");
    return String::Substring1(__this, start, __this->Length() - start);
}

// public string Substring(int startIndex, int length) [instance] :245
uString* String::Substring1(uString* __this, int32_t startIndex, int32_t length)
{
    uStackFrame __("string", "Substring(int,int)");

    if ((startIndex > __this->Length()) || (startIndex < 0))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[17/*"startIndex"*/]));

    if ((startIndex > (__this->Length() - length)) || (length < 0))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[12/*"length"*/]));

    if ((startIndex == __this->Length()) && (length == 0))
        return String::Empty_;

    uArray* s = uArray::New(::TYPES[15/*char[]*/], length);

    for (int32_t i = 0; i < length; i++)
        uPtr(s)->Item<char16_t>(i) = __this->Item(startIndex + i);

    return uString::CharArray(s);
}

// public char[] ToCharArray() [instance] :473
uArray* String::ToCharArray(uString* __this)
{
    uStackFrame __("string", "ToCharArray()");
    return String::ToCharArray1(__this, 0, __this->Length());
}

// public char[] ToCharArray(int start, int length) [instance] :463
uArray* String::ToCharArray1(uString* __this, int32_t start, int32_t length)
{
    uStackFrame __("string", "ToCharArray(int,int)");
    uArray* result = uArray::New(::TYPES[15/*char[]*/], length);

    for (int32_t i = 0; i < length; i++)
        uPtr(result)->Item<char16_t>(i) = __this->Item(start + i);

    return result;
}

// public string ToLower() [instance] :98
uString* String::ToLower(uString* __this)
{
    uStackFrame __("string", "ToLower()");
    uArray* chars = uArray::New(::TYPES[15/*char[]*/], __this->Length());

    for (int32_t i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<char16_t>(i) = ::g::Uno::Char::ToLower(__this->Item(i));

    return uString::CharArray(chars);
}

// public string ToUpper() [instance] :115
uString* String::ToUpper(uString* __this)
{
    uStackFrame __("string", "ToUpper()");
    uArray* chars = uArray::New(::TYPES[15/*char[]*/], __this->Length());

    for (int32_t i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<char16_t>(i) = ::g::Uno::Char::ToUpper(__this->Item(i));

    return uString::CharArray(chars);
}

// public string Trim() [instance] :610
uString* String::Trim(uString* __this)
{
    uStackFrame __("string", "Trim()");

    if (String::op_Equality(__this, String::Empty_))
        return String::Empty_;

    int32_t first = String::IndexOfFirstNotWhiteSpace(__this);

    if (first == -1)
        return String::Empty_;

    int32_t last = String::IndexOfLastNotWhiteSpace(__this);
    int32_t length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public string Trim(char[] trimChars) [instance] :624
uString* String::Trim1(uString* __this, uArray* trimChars)
{
    uStackFrame __("string", "Trim(char[])");

    if (String::op_Equality(__this, String::Empty_))
        return String::Empty_;

    int32_t first = String::IndexOfFirstNotInSet(__this, trimChars);

    if (first == -1)
        return String::Empty_;

    int32_t last = String::IndexOfLastNotInSet(__this, trimChars);
    int32_t length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public string TrimEnd(char[] trimChars) [instance] :665
uString* String::TrimEnd(uString* __this, uArray* trimChars)
{
    uStackFrame __("string", "TrimEnd(char[])");

    if (String::op_Equality(__this, String::Empty_))
        return String::Empty_;

    if (uPtr(trimChars)->Length() == 0)
        return String::TrimEndWhiteSpace(__this);

    int32_t last = String::IndexOfLastNotInSet(__this, trimChars);
    return String::Substring1(__this, 0, last + 1);
}

// private string TrimEndWhiteSpace() [instance] :677
uString* String::TrimEndWhiteSpace(uString* __this)
{
    uStackFrame __("string", "TrimEndWhiteSpace()");

    if (String::op_Equality(__this, String::Empty_))
        return String::Empty_;

    int32_t last = String::IndexOfLastNotWhiteSpace(__this);
    return String::Substring1(__this, 0, last + 1);
}

// public static int Compare(string a, string b) [static] :776
int32_t String::Compare(uString* a, uString* b)
{
    uStackFrame __("string", "Compare(string,string)");
    String_typeof()->Init();

    for (int32_t i = 0; i < ::g::Uno::Math::Min8(uPtr(a)->Length(), uPtr(b)->Length()); i++)
    {
        if (uPtr(a)->Item(i) < uPtr(b)->Item(i))
            return -1;

        if (uPtr(b)->Item(i) < uPtr(a)->Item(i))
            return 1;
    }

    if (uPtr(a)->Length() < uPtr(b)->Length())
        return -1;

    if (uPtr(b)->Length() < uPtr(a)->Length())
        return 1;

    return 0;
}

// public static string Concat(object a, object b) [static] :225
uString* String::Concat(uObject* a, uObject* b)
{
    uStackFrame __("string", "Concat(object,object)");
    String_typeof()->Init();
    return String::Concat1((a == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(a)), (b == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(b)));
}

// public static string Concat(string a, string b) [static] :182
uString* String::Concat1(uString* a, uString* b)
{
    uStackFrame __("string", "Concat(string,string)");
    String_typeof()->Init();

    if (::g::Uno::Object::ReferenceEquals(a, NULL) && ::g::Uno::Object::ReferenceEquals(b, NULL))
        return String::Empty_;

    if (::g::Uno::Object::ReferenceEquals(a, NULL))
        return b;

    if (::g::Uno::Object::ReferenceEquals(b, NULL))
        return a;

    uArray* s = uArray::New(::TYPES[15/*char[]*/], uPtr(a)->Length() + uPtr(b)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(s)->Item<char16_t>(i) = uPtr(a)->Item(i);

    for (int32_t i1 = 0; i1 < b->Length(); i1++)
        uPtr(s)->Item<char16_t>(uPtr(a)->Length() + i1) = uPtr(b)->Item(i1);

    return uString::CharArray(s);
}

// public static bool Equals(string left, string right) [static] :153
bool String::Equals3(uString* left, uString* right)
{
    uStackFrame __("string", "Equals(string,string)");
    String_typeof()->Init();

    if (::g::Uno::Object::ReferenceEquals(left, right))
        return true;

    if (::g::Uno::Object::ReferenceEquals(left, NULL) || ::g::Uno::Object::ReferenceEquals(right, NULL))
        return false;

    if (uPtr(left)->Length() != uPtr(right)->Length())
        return false;

    for (int32_t i = 0; i < uPtr(left)->Length(); i++)
        if (uPtr(left)->Item(i) != uPtr(right)->Item(i))
            return false;

    return true;
}

// public static string Format(string str, object[] objs) [static] :789
uString* String::Format(uString* str, uArray* objs)
{
    uStackFrame __("string", "Format(string,object[])");
    String_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > ret4;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    ::g::Uno::Collections::List* tokens = ::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer::TokenizeFormatString(str);
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(tokens), &ret4), ret4);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[16/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]))
                {
                    ::g::Uno::Runtime::Implementation::Internal::FormatStringToken* token = enum1.Current(::TYPES[16/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
                    uPtr(builder)->Append2(uPtr(token)->ToString1(objs));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[16/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[16/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    return builder->ToString();
}

// public static bool IsNullOrEmpty(string s) [static] :548
bool String::IsNullOrEmpty(uString* s)
{
    String_typeof()->Init();
    return String::op_Equality(s, NULL) || String::op_Equality(s, String::Empty_);
}

// public static string Join(string separator, string[] value) [static] :533
uString* String::Join(uString* separator, uArray* value)
{
    uStackFrame __("string", "Join(string,string[])");
    String_typeof()->Init();
    uString* result = ::STRINGS[34/*""*/];

    for (int32_t i = 0; i < uPtr(value)->Length(); i++)
    {
        if (i > 0)
            result = String::op_Addition2(result, separator);

        result = String::op_Addition2(result, uPtr(value)->Strong<uString*>(i));
    }

    return result;
}

// public static operator +(object a, string b) [static] :240
uString* String::op_Addition(uObject* a, uString* b)
{
    uStackFrame __("string", "+(object,string)");
    String_typeof()->Init();
    return String::Concat(a, b);
}

// public static operator +(string a, object b) [static] :235
uString* String::op_Addition1(uString* a, uObject* b)
{
    uStackFrame __("string", "+(string,object)");
    String_typeof()->Init();
    return String::Concat(a, b);
}

// public static operator +(string a, string b) [static] :230
uString* String::op_Addition2(uString* a, uString* b)
{
    uStackFrame __("string", "+(string,string)");
    String_typeof()->Init();
    return String::Concat1(a, b);
}

// public static operator ==(string left, string right) [static] :172
bool String::op_Equality(uString* left, uString* right)
{
    uStackFrame __("string", "==(string,string)");
    String_typeof()->Init();
    return String::Equals3(left, right);
}

// public static operator !=(string left, string right) [static] :177
bool String::op_Inequality(uString* left, uString* right)
{
    uStackFrame __("string", "!=(string,string)");
    String_typeof()->Init();
    return !String::Equals3(left, right);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Tuple.uno
// ----------------------------------------------------------------

// public static class Tuple :12
// {
static void Tuple_build(uType* type)
{
    ::TYPES[20] = ::g::Uno::Tuple2_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[20/*Uno.Tuple`2*/]->MakeType(type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1), NULL));
    type->Reflection.SetFunctions(1,
        new uFunction("Create`2", type->MethodTypes[0], (void*)Tuple__Create1_fn, 0, true, ::TYPES[20/*Uno.Tuple`2*/]->MakeType(type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1), NULL), 2, type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1)));
}

uClassType* Tuple_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Tuple", options);
    type->MethodTypes[0] = type->NewMethodType(2, 1,0);
    type->fp_build_ = Tuple_build;
    return type;
}

// public static Uno.Tuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2) :15
void Tuple__Create1_fn(uType* __type, void* item1, void* item2, ::g::Uno::Tuple2** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Tuple<T1, T2>*/),
    };
    ::g::Uno::Tuple2* ret2;
    return *__retval = (::g::Uno::Tuple2__New1_fn(__types[0], item1, item2, &ret2), ret2), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Tuple.uno
// ----------------------------------------------------------------

// public sealed class Tuple<T1, T2> :63
// {
static void Tuple2_build(uType* type)
{
    ::STRINGS[52] = uString::Const("(");
    ::STRINGS[53] = uString::Const(")");
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[21] = ::g::Uno::ITuple_typeof();
    type->SetInterfaces(
        ::TYPES[21/*Uno.ITuple*/], offsetof(Tuple2_type, interface0));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Item1", NULL, (void*)Tuple2__get_Item1_fn, 0, false, type->T(0), 0),
        new uFunction("get_Item2", NULL, (void*)Tuple2__get_Item2_fn, 0, false, type->T(1), 0),
        new uFunction(".ctor", type, (void*)Tuple2__New1_fn, 0, true, type, 2, type->T(0), type->T(1)));
}

Tuple2_type* Tuple2_typeof()
{
    static uSStrong<Tuple2_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Tuple2);
    options.TypeSize = sizeof(Tuple2_type);
    type = (Tuple2_type*)uClassType::New("Uno.Tuple`2", options);
    type->fp_build_ = Tuple2_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Tuple2__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Tuple2__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Tuple2__ToString_fn;
    type->interface0.fp_AppendItems = (void(*)(uObject*, ::g::Uno::Text::StringBuilder*))Tuple2__UnoITupleAppendItems_fn;
    return type;
}

// public Tuple(T1 item1, T2 item2) :68
void Tuple2__ctor__fn(Tuple2* __this, void* item1, void* item2)
{
    Tuple2__set_Item1_fn(__this, item1);
    Tuple2__set_Item2_fn(__this, item2);
}

// public override sealed bool Equals(object other) :74
void Tuple2__Equals_fn(Tuple2* __this, uObject* other, bool* __retval)
{
    uStackFrame __("Uno.Tuple`2", "Equals(object)");
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    uT ret5(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    Tuple2* tother = uAs<Tuple2*>(other, __this->__type);
    return *__retval = (tother != NULL) ? ::g::Uno::Object::Equals(uBoxPtr(__this->__type->T(0), uPtr((Tuple2__get_Item1_fn(__this, &ret2), ret2)), U_ALLOCA(__this->__type->T(0)->ObjectSize)), uBoxPtr(__this->__type->T(0), (Tuple2__get_Item1_fn(uPtr(tother), &ret3), ret3))) && ::g::Uno::Object::Equals(uBoxPtr(__this->__type->T(1), uPtr((Tuple2__get_Item2_fn(__this, &ret4), ret4)), U_ALLOCA(__this->__type->T(1)->ObjectSize)), uBoxPtr(__this->__type->T(1), (Tuple2__get_Item2_fn(uPtr(tother), &ret5), ret5))) : false, void();
}

// public override sealed int GetHashCode() :82
void Tuple2__GetHashCode_fn(Tuple2* __this, int32_t* __retval)
{
    uStackFrame __("Uno.Tuple`2", "GetHashCode()");
    uT ret6(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret7(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    return *__retval = ::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr((Tuple2__get_Item1_fn(__this, &ret6), ret6)), U_ALLOCA(__this->__type->T(0)->ObjectSize))) ^ ::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(1), uPtr((Tuple2__get_Item2_fn(__this, &ret7), ret7)), U_ALLOCA(__this->__type->T(1)->ObjectSize))), void();
}

// public generated T1 get_Item1() :65
void Tuple2__get_Item1_fn(Tuple2* __this, uTRef __retval)
{
    return __retval.Store(__this->_Item1()), void();
}

// private generated void set_Item1(T1 value) :65
void Tuple2__set_Item1_fn(Tuple2* __this, void* value)
{
    __this->_Item1() = value;
}

// public generated T2 get_Item2() :66
void Tuple2__get_Item2_fn(Tuple2* __this, uTRef __retval)
{
    return __retval.Store(__this->_Item2()), void();
}

// private generated void set_Item2(T2 value) :66
void Tuple2__set_Item2_fn(Tuple2* __this, void* value)
{
    __this->_Item2() = value;
}

// public Tuple New(T1 item1, T2 item2) :68
void Tuple2__New1_fn(uType* __type, void* item1, void* item2, Tuple2** __retval)
{
    Tuple2* obj1 = (Tuple2*)uNew(__type);
    Tuple2__ctor__fn(obj1, item1, item2);
    return *__retval = obj1, void();
}

// public override sealed string ToString() :87
void Tuple2__ToString_fn(Tuple2* __this, uString** __retval)
{
    uStackFrame __("Uno.Tuple`2", "ToString()");
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::STRINGS[52/*"("*/]);
    ::g::Uno::ITuple::AppendItems(uInterface((uObject*)__this, ::TYPES[21/*Uno.ITuple*/]), sb);
    sb->Append2(::STRINGS[53/*")"*/]);
    return *__retval = sb->ToString(), void();
}

// private void Uno.ITuple.AppendItems(Uno.Text.StringBuilder sb) :96
void Tuple2__UnoITupleAppendItems_fn(Tuple2* __this, ::g::Uno::Text::StringBuilder* sb)
{
    uStackFrame __("Uno.Tuple`2", "Uno.ITuple.AppendItems(Uno.Text.StringBuilder)");
    uT ret8(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret9(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    uPtr(sb)->Append2(::g::Uno::Object::ToString(uBoxPtr(__this->__type->T(0), uPtr((Tuple2__get_Item1_fn(__this, &ret8), ret8)), U_ALLOCA(__this->__type->T(0)->ObjectSize))));
    sb->Append2(::STRINGS[14/*", "*/]);
    sb->Append2(::g::Uno::Object::ToString(uBoxPtr(__this->__type->T(1), uPtr((Tuple2__get_Item2_fn(__this, &ret9), ret9)), U_ALLOCA(__this->__type->T(1)->ObjectSize))));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Type.uno
// ---------------------------------------------------------------

// public sealed class Type :23
// {
// static generated Type() :23
static void Type__cctor__fn(uType* __type)
{
    Type::EmptyTypes_ = uArray::New(::TYPES[22/*Uno.Type[]*/], 0);
}

static void Type_build(uType* type)
{
    ::STRINGS[54] = uString::Const("typeName");
    ::STRINGS[55] = uString::Const("typeArguments");
    ::TYPES[22] = type->Array();
    type->SetFields(0,
        ::TYPES[22/*Uno.Type[]*/], (uintptr_t)&Type::EmptyTypes_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("EmptyTypes", 0));
    type->Reflection.SetFunctions(24,
        new uFunction("get_BaseType", NULL, (void*)Type__get_BaseType_fn, 0, false, type, 0),
        new uFunction("get_ContainsGenericParameters", NULL, (void*)Type__get_ContainsGenericParameters_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_FullName", NULL, (void*)Type__get_FullName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_GenericParameterPosition", NULL, (void*)Type__get_GenericParameterPosition_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetElementType", NULL, (void*)Type__GetElementType_fn, 0, false, type, 0),
        new uFunction("GetGenericArguments", NULL, (void*)Type__GetGenericArguments_fn, 0, false, ::TYPES[22/*Uno.Type[]*/], 0),
        new uFunction("GetGenericTypeDefinition", NULL, (void*)Type__GetGenericTypeDefinition_fn, 0, false, type, 0),
        new uFunction("GetInterfaces", NULL, (void*)Type__GetInterfaces_fn, 0, false, ::TYPES[22/*Uno.Type[]*/], 0),
        new uFunction("GetType", NULL, (void*)Type__GetType1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("GetType", NULL, (void*)Type__GetType2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_HasElementType", NULL, (void*)Type__get_HasElementType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsArray", NULL, (void*)Type__get_IsArray_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsByRef", NULL, (void*)Type__get_IsByRef_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsClass", NULL, (void*)Type__get_IsClass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsEnum", NULL, (void*)Type__get_IsEnum_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericParameter", NULL, (void*)Type__get_IsGenericParameter_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericType", NULL, (void*)Type__get_IsGenericType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericTypeDefinition", NULL, (void*)Type__get_IsGenericTypeDefinition_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsInterface", NULL, (void*)Type__get_IsInterface_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsSubclassOf", NULL, (void*)Type__IsSubclassOf_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_IsValueType", NULL, (void*)Type__get_IsValueType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("MakeArrayType", NULL, (void*)Type__MakeArrayType_fn, 0, false, type, 0),
        new uFunction("MakeByRefType", NULL, (void*)Type__MakeByRefType_fn, 0, false, type, 0),
        new uFunction("MakeGenericType", NULL, (void*)Type__MakeGenericType_fn, 0, false, type, 1, ::TYPES[22/*Uno.Type[]*/]));
}

uType* Type_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Type);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Type", options);
    type->fp_build_ = Type_build;
    type->fp_ctor_ = (void*)Type__New1_fn;
    type->fp_cctor_ = Type__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Type__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Type__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Type__ToString_fn;
    return type;
}

// internal Type() :27
void Type__ctor__fn(uType* __this)
{
    Type::ctor_(__this);
}

// public Uno.Type get_BaseType() :60
void Type__get_BaseType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::BaseType(__this);
}

// public bool get_ContainsGenericParameters() :71
void Type__get_ContainsGenericParameters_fn(uType* __this, bool* __retval)
{
    *__retval = Type::ContainsGenericParameters(__this);
}

// public override sealed bool Equals(object obj) :41
void Type__Equals_fn(uType* __this, uObject* obj, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Uno::Object__Equals_fn(__this, obj, &ret2), ret2), void();
}

// public string get_FullName() :82
void Type__get_FullName_fn(uType* __this, uString** __retval)
{
    *__retval = Type::FullName(__this);
}

// public int get_GenericParameterPosition() :93
void Type__get_GenericParameterPosition_fn(uType* __this, int32_t* __retval)
{
    *__retval = Type::GenericParameterPosition(__this);
}

// public Uno.Type GetElementType() :212
void Type__GetElementType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::GetElementType(__this);
}

// public Uno.Type[] GetGenericArguments() :222
void Type__GetGenericArguments_fn(uType* __this, uArray** __retval)
{
    *__retval = Type::GetGenericArguments(__this);
}

// public Uno.Type GetGenericTypeDefinition() :235
void Type__GetGenericTypeDefinition_fn(uType* __this, uType** __retval)
{
    *__retval = Type::GetGenericTypeDefinition(__this);
}

// public override sealed int GetHashCode() :46
void Type__GetHashCode_fn(uType* __this, int32_t* __retval)
{
    int32_t ret3;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret3), ret3), void();
}

// public Uno.Type[] GetInterfaces() :243
void Type__GetInterfaces_fn(uType* __this, uArray** __retval)
{
    *__retval = Type::GetInterfaces(__this);
}

// public static extern Uno.Type GetType(string typeName) :257
void Type__GetType1_fn(uString* typeName, uType** __retval)
{
    *__retval = Type::GetType1(typeName);
}

// public static extern Uno.Type GetType(string typeName, bool throwOnError) :266
void Type__GetType2_fn(uString* typeName, bool* throwOnError, uType** __retval)
{
    *__retval = Type::GetType2(typeName, *throwOnError);
}

// public bool get_HasElementType() :104
void Type__get_HasElementType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::HasElementType(__this);
}

// public bool get_IsArray() :115
void Type__get_IsArray_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsArray(__this);
}

// public bool get_IsByRef() :126
void Type__get_IsByRef_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsByRef(__this);
}

// public bool get_IsClass() :137
void Type__get_IsClass_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsClass(__this);
}

// public bool get_IsEnum() :148
void Type__get_IsEnum_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsEnum(__this);
}

// public bool get_IsGenericParameter() :159
void Type__get_IsGenericParameter_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericParameter(__this);
}

// public bool get_IsGenericType() :170
void Type__get_IsGenericType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericType(__this);
}

// public bool get_IsGenericTypeDefinition() :181
void Type__get_IsGenericTypeDefinition_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericTypeDefinition(__this);
}

// public bool get_IsInterface() :192
void Type__get_IsInterface_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsInterface(__this);
}

// public bool IsSubclassOf(Uno.Type c) :279
void Type__IsSubclassOf_fn(uType* __this, uType* c, bool* __retval)
{
    *__retval = Type::IsSubclassOf(__this, c);
}

// public bool get_IsValueType() :203
void Type__get_IsValueType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsValueType(__this);
}

// public Uno.Type MakeArrayType() :287
void Type__MakeArrayType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::MakeArrayType(__this);
}

// public Uno.Type MakeByRefType() :295
void Type__MakeByRefType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::MakeByRefType(__this);
}

// public Uno.Type MakeGenericType(Uno.Type[] typeArguments) :303
void Type__MakeGenericType_fn(uType* __this, uArray* typeArguments, uType** __retval)
{
    *__retval = Type::MakeGenericType(__this, typeArguments);
}

// internal Type New() :27
void Type__New1_fn(uType** __retval)
{
    *__retval = Type::New1();
}

// public static operator ==(Uno.Type a, Uno.Type b) :31
void Type__op_Equality_fn(uType* a, uType* b, bool* __retval)
{
    *__retval = Type::op_Equality(a, b);
}

// public static operator !=(Uno.Type a, Uno.Type b) :36
void Type__op_Inequality_fn(uType* a, uType* b, bool* __retval)
{
    *__retval = Type::op_Inequality(a, b);
}

// public override sealed string ToString() :51
void Type__ToString_fn(uType* __this, uString** __retval)
{
    return *__retval = Type::FullName(__this), void();
}

uSStrong<uArray*> Type::EmptyTypes_;

// internal Type() [instance] :27
void Type::ctor_(uType* __this)
{
}

// public Uno.Type get_BaseType() [instance] :60
uType* Type::BaseType(uType* __this)
{
    return __this->Base;
}

// public bool get_ContainsGenericParameters() [instance] :71
bool Type::ContainsGenericParameters(uType* __this)
{
    return !__this->IsClosed();
}

// public string get_FullName() [instance] :82
uString* Type::FullName(uType* __this)
{
    return uString::Utf8(__this->FullName);
}

// public int get_GenericParameterPosition() [instance] :93
int32_t Type::GenericParameterPosition(uType* __this)
{
    return __this->Type == uTypeTypeGeneric ? (int)((uGenericType*)__this)->GenericIndex : -1;
}

// public Uno.Type GetElementType() [instance] :212
uType* Type::GetElementType(uType* __this)
{
    return Type::IsArray(__this) ? ((uArrayType*)__this)->ElementType : Type::IsByRef(__this) ? ((uByRefType*)__this)->ValueType : NULL;
}

// public Uno.Type[] GetGenericArguments() [instance] :222
uArray* Type::GetGenericArguments(uType* __this)
{
    uStackFrame __("Uno.Type", "GetGenericArguments()");
    uArray* array = uArray::New(::TYPES[22/*Uno.Type[]*/], (int32_t) __this->GenericCount);

    for (int32_t i = 0; i < array->Length(); i++)
        uPtr(array)->Strong<uType*>(i) = __this->Generics[i];

    return array;
}

// public Uno.Type GetGenericTypeDefinition() [instance] :235
uType* Type::GetGenericTypeDefinition(uType* __this)
{
    return __this->Definition;
}

// public Uno.Type[] GetInterfaces() [instance] :243
uArray* Type::GetInterfaces(uType* __this)
{
    uStackFrame __("Uno.Type", "GetInterfaces()");
    uArray* array = uArray::New(::TYPES[22/*Uno.Type[]*/], (int32_t) __this->InterfaceCount);

    for (int32_t i = 0; i < array->Length(); i++)
        uPtr(array)->Strong<uType*>(i) = __this->Interfaces[i].Type;

    return array;
}

// public bool get_HasElementType() [instance] :104
bool Type::HasElementType(uType* __this)
{
    return __this->Type == uTypeTypeArray || __this->Type == uTypeTypeByRef;
}

// public bool get_IsArray() [instance] :115
bool Type::IsArray(uType* __this)
{
    return __this->Type == uTypeTypeArray;
}

// public bool get_IsByRef() [instance] :126
bool Type::IsByRef(uType* __this)
{
    return __this->Type == uTypeTypeByRef;
}

// public bool get_IsClass() [instance] :137
bool Type::IsClass(uType* __this)
{
    return __this->Type != uTypeTypeInterface && U_IS_OBJECT(__this);
}

// public bool get_IsEnum() [instance] :148
bool Type::IsEnum(uType* __this)
{
    return __this->Type == uTypeTypeEnum;
}

// public bool get_IsGenericParameter() [instance] :159
bool Type::IsGenericParameter(uType* __this)
{
    return __this->Type == uTypeTypeGeneric;
}

// public bool get_IsGenericType() [instance] :170
bool Type::IsGenericType(uType* __this)
{
    return __this->GenericCount > 0;
}

// public bool get_IsGenericTypeDefinition() [instance] :181
bool Type::IsGenericTypeDefinition(uType* __this)
{
    return __this->GenericCount > 0 && __this->Definition == __this;
}

// public bool get_IsInterface() [instance] :192
bool Type::IsInterface(uType* __this)
{
    return __this->Type == uTypeTypeInterface;
}

// public bool IsSubclassOf(Uno.Type c) [instance] :279
bool Type::IsSubclassOf(uType* __this, uType* c)
{
    return __this->Is(c);
}

// public bool get_IsValueType() [instance] :203
bool Type::IsValueType(uType* __this)
{
    return U_IS_VALUE(__this);
}

// public Uno.Type MakeArrayType() [instance] :287
uType* Type::MakeArrayType(uType* __this)
{
    return __this->Array();
}

// public Uno.Type MakeByRefType() [instance] :295
uType* Type::MakeByRefType(uType* __this)
{
    return __this->ByRef();
}

// public Uno.Type MakeGenericType(Uno.Type[] typeArguments) [instance] :303
uType* Type::MakeGenericType(uType* __this, uArray* typeArguments)
{
    uStackFrame __("Uno.Type", "MakeGenericType(Uno.Type[])");

    if (typeArguments == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[55/*"typeArguments"*/]));

    return __this->MakeGeneric((size_t)typeArguments->Length(), (uType**)typeArguments->Ptr());
}

// public static extern Uno.Type GetType(string typeName) [static] :257
uType* Type::GetType1(uString* typeName)
{
    Type_typeof()->Init();
    return uReflection::GetType(typeName);
}

// public static extern Uno.Type GetType(string typeName, bool throwOnError) [static] :266
uType* Type::GetType2(uString* typeName, bool throwOnError)
{
    uStackFrame __("Uno.Type", "GetType(string,bool)");
    Type_typeof()->Init();
    uType* type = uReflection::GetType(typeName);

    if (throwOnError && Type::op_Equality(type, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[54/*"typeName"*/]));

    return type;
}

// internal Type New() [static] :27
uType* Type::New1()
{
    uType* obj1 = (uType*)uNew(Type_typeof());
    Type::ctor_(obj1);
    return obj1;
}

// public static operator ==(Uno.Type a, Uno.Type b) [static] :31
bool Type::op_Equality(uType* a, uType* b)
{
    Type_typeof()->Init();
    return ::g::Uno::Object::ReferenceEquals(a, b);
}

// public static operator !=(Uno.Type a, Uno.Type b) [static] :36
bool Type::op_Inequality(uType* a, uType* b)
{
    Type_typeof()->Init();
    return !::g::Uno::Object::ReferenceEquals(a, b);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Exceptions/TypeInitializationException.uno
// -------------------------------------------------------------------------------------------------

// public sealed class TypeInitializationException :6
// {
static void TypeInitializationException_build(uType* type)
{
    ::STRINGS[56] = uString::Const("The type initializer for '{0}' threw an exception.");
    ::TYPES[0] = uObject_typeof()->Array();
    type->SetFields(4,
        ::g::Uno::String_typeof(), offsetof(TypeInitializationException, _typeName), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TypeInitializationException__New4_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Exception_typeof()));
}

::g::Uno::Exception_type* TypeInitializationException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TypeInitializationException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.TypeInitializationException", options);
    type->fp_build_ = TypeInitializationException_build;
    return type;
}

// public TypeInitializationException(string fullTypeName, Uno.Exception innerException) :8
void TypeInitializationException__ctor_3_fn(TypeInitializationException* __this, uString* fullTypeName, ::g::Uno::Exception* innerException)
{
    __this->ctor_3(fullTypeName, innerException);
}

// public TypeInitializationException New(string fullTypeName, Uno.Exception innerException) :8
void TypeInitializationException__New4_fn(uString* fullTypeName, ::g::Uno::Exception* innerException, TypeInitializationException** __retval)
{
    *__retval = TypeInitializationException::New4(fullTypeName, innerException);
}

// public TypeInitializationException(string fullTypeName, Uno.Exception innerException) [instance] :8
void TypeInitializationException::ctor_3(uString* fullTypeName, ::g::Uno::Exception* innerException)
{
    ctor_2(::g::Uno::String::Format(::STRINGS[56/*"The type in...*/], uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, fullTypeName)), innerException);
    _typeName = fullTypeName;
}

// public TypeInitializationException New(string fullTypeName, Uno.Exception innerException) [static] :8
TypeInitializationException* TypeInitializationException::New4(uString* fullTypeName, ::g::Uno::Exception* innerException)
{
    TypeInitializationException* obj1 = (TypeInitializationException*)uNew(TypeInitializationException_typeof());
    obj1->ctor_3(fullTypeName, innerException);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/UInt.uno
// ---------------------------------------------------------------

// public intrinsic struct UInt :10
// {
static void UInt_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* UInt_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UInt", options);
    type->fp_build_ = UInt_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UInt__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))UInt__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UInt__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :16
void UInt__Equals_fn(uint32_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint32_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :22
void UInt__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :34
void UInt__ToString_fn(uint32_t* __this, uType* __type, uString** __retval)
{
    char buf[11];
    int len = snprintf(buf, sizeof(buf), "%u", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/ULong.uno
// ----------------------------------------------------------------

// public intrinsic struct ULong :10
// {
static void ULong_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* ULong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint64_t);
    options.ValueSize = sizeof(uint64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.ULong", options);
    type->fp_build_ = ULong_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ULong__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))ULong__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))ULong__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :16
void ULong__Equals_fn(uint64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint64_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :22
void ULong__GetHashCode_fn(uint64_t* __this, uType* __type, int32_t* __retval)
{
    int hash = 27;
    hash = (13 * hash) + (*__this & UINT32_MAX);
    hash = (13 * hash) + (*__this >> 32);
    return *__retval = hash, void();
}

// public override sealed string ToString() :37
void ULong__ToString_fn(uint64_t* __this, uType* __type, uString** __retval)
{
    char buf[21];
    int len = snprintf(buf, sizeof(buf), "%llu", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/UShort.uno
// -----------------------------------------------------------------

// public intrinsic struct UShort :10
// {
static void UShort_build(uType* type)
{
    ::TYPES[4] = uObject_typeof();
}

uStructType* UShort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint16_t);
    options.ValueSize = sizeof(uint16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort", options);
    type->fp_build_ = UShort_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))UShort__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :16
void UShort__Equals_fn(uint16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint16_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :22
void UShort__GetHashCode_fn(uint16_t* __this, uType* __type, int32_t* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :34
void UShort__ToString_fn(uint16_t* __this, uType* __type, uString** __retval)
{
    char buf[6];
    int len = snprintf(buf, sizeof(buf), "%u", *__this);
    return *__retval = uString::Ansi(buf, len), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/UShort2.uno
// ------------------------------------------------------------------

// public intrinsic struct UShort2 :6
// {
static void UShort2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[23] = ::g::Uno::UShort_typeof();
    type->SetFields(0,
        ::TYPES[23/*ushort*/], offsetof(UShort2, X), 0,
        ::TYPES[23/*ushort*/], offsetof(UShort2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UShort2__New2_fn, 0, true, type, 2, ::TYPES[23/*ushort*/], ::TYPES[23/*ushort*/]));
}

uStructType* UShort2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(UShort2);
    options.ValueSize = sizeof(UShort2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort2", options);
    type->fp_build_ = UShort2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))UShort2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort2__ToString_fn;
    return type;
}

// public UShort2(ushort x, ushort y) :27
void UShort2__ctor_1_fn(UShort2* __this, uint16_t* x, uint16_t* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :48
void UShort2__Equals_fn(UShort2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :49
void UShort2__GetHashCode_fn(UShort2* __this, uType* __type, int32_t* __retval)
{
    int32_t ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public UShort2 New(ushort x, ushort y) :27
void UShort2__New2_fn(uint16_t* x, uint16_t* y, UShort2* __retval)
{
    *__retval = UShort2__New2(*x, *y);
}

// public override sealed string ToString() :50
void UShort2__ToString_fn(UShort2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("ushort2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::UShort::ToString(__this->X, ::TYPES[23/*ushort*/]), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->Y, ::TYPES[23/*ushort*/])), void();
}

// public UShort2(ushort x, ushort y) [instance] :27
void UShort2::ctor_1(uint16_t x, uint16_t y)
{
    X = x;
    Y = y;
}

// public UShort2 New(ushort x, ushort y) [static] :27
UShort2 UShort2__New2(uint16_t x, uint16_t y)
{
    UShort2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/UShort4.uno
// ------------------------------------------------------------------

// public intrinsic struct UShort4 :6
// {
static void UShort4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[4] = uObject_typeof();
    ::TYPES[23] = ::g::Uno::UShort_typeof();
    type->SetFields(0,
        ::TYPES[23/*ushort*/], offsetof(UShort4, X), 0,
        ::TYPES[23/*ushort*/], offsetof(UShort4, Y), 0,
        ::TYPES[23/*ushort*/], offsetof(UShort4, Z), 0,
        ::TYPES[23/*ushort*/], offsetof(UShort4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* UShort4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(UShort4);
    options.ValueSize = sizeof(UShort4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort4", options);
    type->fp_build_ = UShort4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))UShort4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :57
void UShort4__Equals_fn(UShort4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :58
void UShort4__GetHashCode_fn(UShort4* __this, uType* __type, int32_t* __retval)
{
    int32_t ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :59
void UShort4__ToString_fn(UShort4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("ushort4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::UShort::ToString(__this->X, ::TYPES[23/*ushort*/]), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->Y, ::TYPES[23/*ushort*/])), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->Z, ::TYPES[23/*ushort*/])), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->W, ::TYPES[23/*ushort*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Vector.uno
// -----------------------------------------------------------------

// public static class Vector :8
// {
static void Vector_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->Reflection.SetFunctions(17,
        new uFunction("Distance", NULL, (void*)Vector__Distance_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Dot", NULL, (void*)Vector__Dot_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize1_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize2_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform1_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform4_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform5_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformCoordinate", NULL, (void*)Vector__TransformCoordinate_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformCoordinate", NULL, (void*)Vector__TransformCoordinate1_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformNormal", NULL, (void*)Vector__TransformNormal1_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()));
}

uClassType* Vector_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Vector", options);
    type->fp_build_ = Vector_build;
    return type;
}

// public static float Distance(float2 p0, float2 p1) :18
void Vector__Distance_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, float* __retval)
{
    *__retval = Vector::Distance(*p0, *p1);
}

// public static float Dot(float2 a, float2 b) :26
void Vector__Dot_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = Vector::Dot(*a, *b);
}

// public static float Length(float2 v) :14
void Vector__Length_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::Length(*v);
}

// public static float Length(float3 v) :15
void Vector__Length1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::Length1(*v);
}

// public static float Length(float4 v) :16
void Vector__Length2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::Length2(*v);
}

// public static float LengthSquared(float2 v) :10
void Vector__LengthSquared_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::LengthSquared(*v);
}

// public static float LengthSquared(float3 v) :11
void Vector__LengthSquared1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::LengthSquared1(*v);
}

// public static float LengthSquared(float4 v) :12
void Vector__LengthSquared2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::LengthSquared2(*v);
}

// public static float2 Normalize(float2 v) :22
void Vector__Normalize_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::Normalize(*v);
}

// public static float3 Normalize(float3 v) :23
void Vector__Normalize1_fn(::g::Uno::Float3* v, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::Normalize1(*v);
}

// public static float4 Normalize(float4 v) :24
void Vector__Normalize2_fn(::g::Uno::Float4* v, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Normalize2(*v);
}

// public static float4 Transform(float2 vector, float4x4 matrix) :152
void Vector__Transform1_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform1(*vector, *matrix);
}

// public static float4 Transform(float3 vector, float4x4 matrix) :161
void Vector__Transform4_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform4(*vector, *matrix);
}

// public static float4 Transform(float4 vector, float4x4 matrix) :143
void Vector__Transform5_fn(::g::Uno::Float4* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform5(*vector, *matrix);
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) :196
void Vector__TransformCoordinate_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::TransformCoordinate(*vector, *matrix);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) :180
void Vector__TransformCoordinate1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::TransformCoordinate1(*vector, *matrix);
}

// public static float3 TransformNormal(float3 vector, float4x4 matrix) :187
void Vector__TransformNormal1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::TransformNormal1(*vector, *matrix);
}

// public static float Distance(float2 p0, float2 p1) [static] :18
float Vector::Distance(::g::Uno::Float2 p0, ::g::Uno::Float2 p1)
{
    return Vector::Length(::g::Uno::Float2__op_Subtraction2(p1, p0));
}

// public static float Dot(float2 a, float2 b) [static] :26
float Vector::Dot(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return (a.X * b.X) + (a.Y * b.Y);
}

// public static float Length(float2 v) [static] :14
float Vector::Length(::g::Uno::Float2 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared(v));
}

// public static float Length(float3 v) [static] :15
float Vector::Length1(::g::Uno::Float3 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared1(v));
}

// public static float Length(float4 v) [static] :16
float Vector::Length2(::g::Uno::Float4 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared2(v));
}

// public static float LengthSquared(float2 v) [static] :10
float Vector::LengthSquared(::g::Uno::Float2 v)
{
    return (v.X * v.X) + (v.Y * v.Y);
}

// public static float LengthSquared(float3 v) [static] :11
float Vector::LengthSquared1(::g::Uno::Float3 v)
{
    return ((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z);
}

// public static float LengthSquared(float4 v) [static] :12
float Vector::LengthSquared2(::g::Uno::Float4 v)
{
    return (((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z)) + (v.W * v.W);
}

// public static float2 Normalize(float2 v) [static] :22
::g::Uno::Float2 Vector::Normalize(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__op_Division1(v, Vector::Length(v));
}

// public static float3 Normalize(float3 v) [static] :23
::g::Uno::Float3 Vector::Normalize1(::g::Uno::Float3 v)
{
    return ::g::Uno::Float3__op_Division1(v, Vector::Length1(v));
}

// public static float4 Normalize(float4 v) [static] :24
::g::Uno::Float4 Vector::Normalize2(::g::Uno::Float4 v)
{
    return ::g::Uno::Float4__op_Division1(v, Vector::Length2(v));
}

// public static float4 Transform(float2 vector, float4x4 matrix) [static] :152
::g::Uno::Float4 Vector::Transform1(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2(((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + matrix.M41, ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + matrix.M42, ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + matrix.M43, ((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + matrix.M44);
}

// public static float4 Transform(float3 vector, float4x4 matrix) [static] :161
::g::Uno::Float4 Vector::Transform4(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2((((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + matrix.M41, (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + matrix.M42, (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + matrix.M43, (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + matrix.M44);
}

// public static float4 Transform(float4 vector, float4x4 matrix) [static] :143
::g::Uno::Float4 Vector::Transform5(::g::Uno::Float4 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2((((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + (vector.W * matrix.M41), (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + (vector.W * matrix.M42), (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + (vector.W * matrix.M43), (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + (vector.W * matrix.M44));
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) [static] :196
::g::Uno::Float2 Vector::TransformCoordinate(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform1(vector, matrix);
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2(tmp.X, tmp.Y), tmp.W);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) [static] :180
::g::Uno::Float3 Vector::TransformCoordinate1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform4(vector, matrix);
    return ::g::Uno::Float3__op_Division1(::g::Uno::Float3__New2(tmp.X, tmp.Y, tmp.Z), tmp.W);
}

// public static float3 TransformNormal(float3 vector, float4x4 matrix) [static] :187
::g::Uno::Float3 Vector::TransformNormal1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float3__New2(((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31), ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32), ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/WeakReference.uno
// ------------------------------------------------------------------------

// public sealed class WeakReference<T> :6
// {
static void WeakReference_build(uType* type)
{
    type->SetFields(0,
        type->T(0), offsetof(WeakReference, _target), uFieldFlagsWeak);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)WeakReference__New1_fn, 0, true, type, 1, type->T(0)),
        new uFunction("TryGetTarget", NULL, (void*)WeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
}

uType* WeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(WeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.WeakReference`1", options);
    type->fp_build_ = WeakReference_build;
    return type;
}

// public WeakReference(T target) :12
void WeakReference__ctor__fn(WeakReference* __this, uObject* target)
{
    __this->ctor_(target);
}

// public WeakReference New(T target) :12
void WeakReference__New1_fn(uType* __type, uObject* target, WeakReference** __retval)
{
    *__retval = WeakReference::New1(__type, target);
}

// public bool TryGetTarget(T& target) :22
void WeakReference__TryGetTarget_fn(WeakReference* __this, uObject** target, bool* __retval)
{
    *__retval = __this->TryGetTarget(target);
}

// public WeakReference(T target) [instance] :12
void WeakReference::ctor_(uObject* target)
{
    _target = target;
}

// public bool TryGetTarget(T& target) [instance] :22
bool WeakReference::TryGetTarget(uObject** target)
{
    uObject* result = _target;
    *target = result;
    return result != NULL;
}

// public WeakReference New(T target) [static] :12
WeakReference* WeakReference::New1(uType* __type, uObject* target)
{
    WeakReference* obj1 = (WeakReference*)uNew(__type);
    obj1->ctor_(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/WeakReferenceAttribute.uno
// ---------------------------------------------------------------------------------

// public sealed class WeakReferenceAttribute :6
// {
static void WeakReferenceAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WeakReferenceAttribute__New1_fn, 0, true, type, 0));
}

uType* WeakReferenceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(WeakReferenceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.WeakReferenceAttribute", options);
    type->fp_build_ = WeakReferenceAttribute_build;
    type->fp_ctor_ = (void*)WeakReferenceAttribute__New1_fn;
    return type;
}

// public generated WeakReferenceAttribute() :6
void WeakReferenceAttribute__ctor_1_fn(WeakReferenceAttribute* __this)
{
    __this->ctor_1();
}

// public generated WeakReferenceAttribute New() :6
void WeakReferenceAttribute__New1_fn(WeakReferenceAttribute** __retval)
{
    *__retval = WeakReferenceAttribute::New1();
}

// public generated WeakReferenceAttribute() [instance] :6
void WeakReferenceAttribute::ctor_1()
{
    ctor_();
}

// public generated WeakReferenceAttribute New() [static] :6
WeakReferenceAttribute* WeakReferenceAttribute::New1()
{
    WeakReferenceAttribute* obj1 = (WeakReferenceAttribute*)uNew(WeakReferenceAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}} // ::g::Uno
