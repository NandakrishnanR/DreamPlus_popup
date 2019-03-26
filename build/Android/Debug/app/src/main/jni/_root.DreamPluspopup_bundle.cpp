// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/DreamPlus-popup.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DreamPluspopup_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class DreamPluspopup_bundle :0
// {
// static DreamPluspopup_bundle() :0
static void DreamPluspopup_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    DreamPluspopup_bundle::main86941a8b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"DreamPlus-p...*/]))->GetFile(::STRINGS[1/*"main-f977bf...*/]);
}

static void DreamPluspopup_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("DreamPlus-popup");
    ::STRINGS[1] = uString::Const("main-f977bfbc.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&DreamPluspopup_bundle::main86941a8b_, uFieldFlagsStatic);
}

uClassType* DreamPluspopup_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("DreamPluspopup_bundle", options);
    type->fp_build_ = DreamPluspopup_bundle_build;
    type->fp_cctor_ = DreamPluspopup_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> DreamPluspopup_bundle::main86941a8b_;
// }

} // ::g
