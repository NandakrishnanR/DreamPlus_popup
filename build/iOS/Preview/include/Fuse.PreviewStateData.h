// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.9.0/PreviewState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PreviewStateData;}}
namespace g{namespace Fuse{struct PreviewStateData__Entry;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{

// internal sealed class PreviewStateData :64
// {
uType* PreviewStateData_typeof();
void PreviewStateData__ctor__fn(PreviewStateData* __this);
void PreviewStateData__Consume_fn(PreviewStateData* __this, uString* key, uObject** __retval);
void PreviewStateData__Has_fn(PreviewStateData* __this, uString* key, bool* __retval);
void PreviewStateData__New1_fn(PreviewStateData** __retval);
void PreviewStateData__Set_fn(PreviewStateData* __this, uString* key, uObject* data);

struct PreviewStateData : uObject
{
    bool Consumed;
    uStrong< ::g::Uno::Collections::Dictionary*> _data;

    void ctor_();
    uObject* Consume(uString* key);
    bool Has(uString* key);
    void Set(uString* key, uObject* data);
    static PreviewStateData* New1();
};
// }

}} // ::g::Fuse
