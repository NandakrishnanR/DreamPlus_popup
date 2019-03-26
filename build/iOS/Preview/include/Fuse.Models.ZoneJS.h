// This file was generated based on /usr/local/share/uno/Packages/Fuse.Models/1.9.0/ZoneJS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Models{struct ZoneJS;}}}
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}

namespace g{
namespace Fuse{
namespace Models{

// internal sealed class ZoneJS :7
// {
struct ZoneJS_type : uType
{
    ::g::Fuse::Scripting::IModuleProvider interface0;
};

ZoneJS_type* ZoneJS_typeof();
void ZoneJS__ctor__fn(ZoneJS* __this);
void ZoneJS__FuseScriptingIModuleProviderGetModule_fn(ZoneJS* __this, ::g::Fuse::Scripting::Module** __retval);
void ZoneJS__Initialize_fn();
void ZoneJS__LoadModule_fn(::g::Fuse::Scripting::Module** __retval);
void ZoneJS__New1_fn(ZoneJS** __retval);

struct ZoneJS : uObject
{
    static uSStrong<ZoneJS*> _instance_;
    static uSStrong<ZoneJS*>& _instance() { return _instance_; }
    uStrong< ::g::Fuse::Scripting::Module*> _module;

    void ctor_();
    static void Initialize();
    static ::g::Fuse::Scripting::Module* LoadModule();
    static ZoneJS* New1();
};
// }

}}} // ::g::Fuse::Models
