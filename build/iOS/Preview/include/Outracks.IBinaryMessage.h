// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/BinaryMessage.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{

// public abstract interface IBinaryMessage :8
// {
uInterfaceType* IBinaryMessage_typeof();

struct IBinaryMessage
{
    void(*fp_get_Type)(uObject*, uString**);
    void(*fp_WriteDataTo)(uObject*, ::g::System::IO::BinaryWriter*);
    static uString* Type(const uInterface& __this) { uString* __retval; return __this.VTable<IBinaryMessage>()->fp_get_Type(__this, &__retval), __retval; }
    static void WriteDataTo(const uInterface& __this, ::g::System::IO::BinaryWriter* writer) { __this.VTable<IBinaryMessage>()->fp_WriteDataTo(__this, writer); }
};
// }

}} // ::g::Outracks
