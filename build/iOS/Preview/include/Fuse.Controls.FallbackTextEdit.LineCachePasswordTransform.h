// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.9.0/TextControls/FallbackTextEdit/LineCacheTransform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FallbackTextEdit.LineCacheTransform.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCachePasswordTransform;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class LineCachePasswordTransform :14
// {
struct LineCachePasswordTransform_type : uType
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform interface0;
};

LineCachePasswordTransform_type* LineCachePasswordTransform_typeof();
void LineCachePasswordTransform__ctor__fn(LineCachePasswordTransform* __this);
void LineCachePasswordTransform__New1_fn(LineCachePasswordTransform** __retval);
void LineCachePasswordTransform__SetReveal_fn(LineCachePasswordTransform* __this, int32_t* r, bool* __retval);
void LineCachePasswordTransform__Transform_fn(LineCachePasswordTransform* __this, uString* text, uString** __retval);

struct LineCachePasswordTransform : uObject
{
    int32_t _reveal;

    void ctor_();
    bool SetReveal(int32_t r);
    uString* Transform(uString* text);
    static LineCachePasswordTransform* New1();
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
