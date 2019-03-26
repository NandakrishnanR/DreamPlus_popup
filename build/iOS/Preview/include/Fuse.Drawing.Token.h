// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.9.0/LineParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Token;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Token :297
// {
uType* Token_typeof();
void Token__ctor__fn(Token* __this, int32_t* first, bool* hasAction);
void Token__New1_fn(int32_t* first, bool* hasAction, Token** __retval);

struct Token : uObject
{
    int32_t First;
    int32_t Last;
    uStrong<Token*> Next;
    bool HasAction;

    void ctor_(int32_t first, bool hasAction);
    static Token* New1(int32_t first, bool hasAction);
};
// }

}}} // ::g::Fuse::Drawing
