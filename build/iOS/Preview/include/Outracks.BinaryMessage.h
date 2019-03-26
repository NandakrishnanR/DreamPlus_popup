// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/BinaryMessage.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{struct BinaryMessage;}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{

// public static class BinaryMessage :15
// {
uClassType* BinaryMessage_typeof();
void BinaryMessage__Compose_fn(uString* type, uDelegate* write, uObject** __retval);
void BinaryMessage__ReadFrom_fn(::g::System::IO::BinaryReader* reader, uObject** __retval);
void BinaryMessage__SubArray_fn(uType* __type, uArray* data, int32_t* index, int32_t* length, uArray** __retval);
void BinaryMessage__TryParse_fn(uType* __type, uObject* message, uString* type, uDelegate* action, uTRef __retval);
void BinaryMessage__WriteTo_fn(uObject* message, ::g::System::IO::BinaryWriter* writer);

struct BinaryMessage : uObject
{
    static uObject* Compose(uString* type, uDelegate* write);
    static uObject* ReadFrom(::g::System::IO::BinaryReader* reader);
    static uArray* SubArray(uType* __type, uArray* data, int32_t index, int32_t length);
    template<class T>
    static ::g::Outracks::Optional1<T> TryParse(uType* __type, uObject* message, uString* type, uDelegate* action);
    static void WriteTo(uObject* message, ::g::System::IO::BinaryWriter* writer);
};

}} // ::g::Outracks

#include <Outracks.Optional1-1.h>
#include <Uno.Object.h>

namespace g{
namespace Outracks{

template<class T>
::g::Outracks::Optional1<T> BinaryMessage::TryParse(uType* __type, uObject* message, uString* type, uDelegate* action) { ::g::Outracks::Optional1<T> __retval; return BinaryMessage__TryParse_fn(__type, message, type, action, &__retval), __retval; }
// }

}} // ::g::Outracks
