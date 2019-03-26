// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.9.0/Let.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IObject.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Reactive.LetBase.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct LetType;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class LetType<T> :348
// {
::g::Fuse::Reactive::LetBase_type* LetType_typeof();
void LetType__ctor_4_fn(LetType* __this);
void LetType__SetValue_fn(LetType* __this, void* value, uObject* origin);
void LetType__get_Value_fn(LetType* __this, uTRef __retval);
void LetType__set_Value_fn(LetType* __this, void* value);

struct LetType : ::g::Fuse::Reactive::LetBase
{
    void ctor_4();
    template<class T>
    void SetValue(T value, uObject* origin) { LetType__SetValue_fn(this, uConstrain(__type->GetBase(LetType_typeof())->T(0), value), origin); }
    template<class T>
    T Value() { T __retval; return LetType__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { LetType__set_Value_fn(this, uConstrain(__type->GetBase(LetType_typeof())->T(0), value)); }
};
// }

}}} // ::g::Fuse::Reactive
