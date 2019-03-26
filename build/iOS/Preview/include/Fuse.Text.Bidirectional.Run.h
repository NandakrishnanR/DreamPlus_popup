// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.9.0/Bidirectional.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{

// public struct Run :6
// {
uStructType* Run_typeof();
void Run__ctor__fn(Run* __this, ::g::Fuse::Text::Substring* str, int32_t* level);
void Run__get_Direction_fn(Run* __this, int32_t* __retval);
void Run__get_IsLeftToRight_fn(Run* __this, bool* __retval);
void Run__get_IsRightToLeft_fn(Run* __this, bool* __retval);
void Run__get_LogicalEnd_fn(Run* __this, int32_t* __retval);
void Run__get_LogicalStart_fn(Run* __this, int32_t* __retval);
void Run__New1_fn(::g::Fuse::Text::Substring* str, int32_t* level, Run* __retval);
void Run__get_VisualLeft_fn(Run* __this, int32_t* __retval);
void Run__get_VisualRight_fn(Run* __this, int32_t* __retval);

struct Run
{
    uStrong< ::g::Fuse::Text::Substring*> String;
    int32_t Level;

    void ctor_(::g::Fuse::Text::Substring* str, int32_t level);
    int32_t Direction();
    bool IsLeftToRight();
    bool IsRightToLeft();
    int32_t LogicalEnd();
    int32_t LogicalStart();
    int32_t VisualLeft();
    int32_t VisualRight();
};

Run Run__New1(::g::Fuse::Text::Substring* str, int32_t level);
// }

}}}} // ::g::Fuse::Text::Bidirectional
