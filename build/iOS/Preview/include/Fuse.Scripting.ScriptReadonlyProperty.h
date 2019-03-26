// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.9.0/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMember.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptReadonlyProperty;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptReadonlyProperty :31
// {
uType* ScriptReadonlyProperty_typeof();
void ScriptReadonlyProperty__ctor_1_fn(ScriptReadonlyProperty* __this, uString* name, uObject* value);
void ScriptReadonlyProperty__New1_fn(uString* name, uObject* value, ScriptReadonlyProperty** __retval);

struct ScriptReadonlyProperty : ::g::Fuse::Scripting::ScriptMember
{
    uStrong<uObject*> Value;

    void ctor_1(uString* name, uObject* value);
    static ScriptReadonlyProperty* New1(uString* name, uObject* value);
};
// }

}}} // ::g::Fuse::Scripting
