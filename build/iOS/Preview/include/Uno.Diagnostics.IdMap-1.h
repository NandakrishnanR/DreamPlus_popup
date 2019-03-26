// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Diagnostics/IdMap.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Diagnostics{struct IdMap;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public sealed class IdMap<T> :6
// {
uType* IdMap_typeof();
void IdMap__ctor__fn(IdMap* __this, bool* twoWay);
void IdMap__New1_fn(uType* __type, bool* twoWay, IdMap** __retval);

struct IdMap : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _objectToInt;
    uStrong< ::g::Uno::Collections::List*> _intToObject;
    bool _twoWay;

    void ctor_(bool twoWay);
    static IdMap* New1(uType* __type, bool twoWay);
};
// }

}}} // ::g::Uno::Diagnostics
