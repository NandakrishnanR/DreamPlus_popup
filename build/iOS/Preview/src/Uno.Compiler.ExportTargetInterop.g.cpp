// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.DontExportAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.DotNetOverrideAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.OptionalAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.StaticAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ExportTargetInterop/DontCopyStructAttribute.uno
// ---------------------------------------------------------------------------------------------------------------

// public sealed class DontCopyStructAttribute :4
// {
static void DontCopyStructAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontCopyStructAttribute__New1_fn, 0, true, type, 0));
}

uType* DontCopyStructAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DontCopyStructAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute", options);
    type->fp_build_ = DontCopyStructAttribute_build;
    type->fp_ctor_ = (void*)DontCopyStructAttribute__New1_fn;
    return type;
}

// public generated DontCopyStructAttribute() :4
void DontCopyStructAttribute__ctor_1_fn(DontCopyStructAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontCopyStructAttribute New() :4
void DontCopyStructAttribute__New1_fn(DontCopyStructAttribute** __retval)
{
    *__retval = DontCopyStructAttribute::New1();
}

// public generated DontCopyStructAttribute() [instance] :4
void DontCopyStructAttribute::ctor_1()
{
    ctor_();
}

// public generated DontCopyStructAttribute New() [static] :4
DontCopyStructAttribute* DontCopyStructAttribute::New1()
{
    DontCopyStructAttribute* obj1 = (DontCopyStructAttribute*)uNew(DontCopyStructAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ExportTargetInterop/DontExportAttribute.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class DontExportAttribute :4
// {
static void DontExportAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontExportAttribute__New1_fn, 0, true, type, 0));
}

uType* DontExportAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DontExportAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontExportAttribute", options);
    type->fp_build_ = DontExportAttribute_build;
    type->fp_ctor_ = (void*)DontExportAttribute__New1_fn;
    return type;
}

// public generated DontExportAttribute() :4
void DontExportAttribute__ctor_1_fn(DontExportAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontExportAttribute New() :4
void DontExportAttribute__New1_fn(DontExportAttribute** __retval)
{
    *__retval = DontExportAttribute::New1();
}

// public generated DontExportAttribute() [instance] :4
void DontExportAttribute::ctor_1()
{
    ctor_();
}

// public generated DontExportAttribute New() [static] :4
DontExportAttribute* DontExportAttribute::New1()
{
    DontExportAttribute* obj1 = (DontExportAttribute*)uNew(DontExportAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ExportTargetInterop/DotNetTypeAttribute.uno
// -----------------------------------------------------------------------------------------------------------

// public sealed class DotNetOverrideAttribute :13
// {
static void DotNetOverrideAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DotNetOverrideAttribute__New1_fn, 0, true, type, 0));
}

uType* DotNetOverrideAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DotNetOverrideAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DotNetOverrideAttribute", options);
    type->fp_build_ = DotNetOverrideAttribute_build;
    type->fp_ctor_ = (void*)DotNetOverrideAttribute__New1_fn;
    return type;
}

// public generated DotNetOverrideAttribute() :13
void DotNetOverrideAttribute__ctor_1_fn(DotNetOverrideAttribute* __this)
{
    __this->ctor_1();
}

// public generated DotNetOverrideAttribute New() :13
void DotNetOverrideAttribute__New1_fn(DotNetOverrideAttribute** __retval)
{
    *__retval = DotNetOverrideAttribute::New1();
}

// public generated DotNetOverrideAttribute() [instance] :13
void DotNetOverrideAttribute::ctor_1()
{
    ctor_();
}

// public generated DotNetOverrideAttribute New() [static] :13
DotNetOverrideAttribute* DotNetOverrideAttribute::New1()
{
    DotNetOverrideAttribute* obj1 = (DotNetOverrideAttribute*)uNew(DotNetOverrideAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ExportTargetInterop/OptionalAttribute.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class OptionalAttribute :4
// {
static void OptionalAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OptionalAttribute__New1_fn, 0, true, type, 0));
}

uType* OptionalAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(OptionalAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.OptionalAttribute", options);
    type->fp_build_ = OptionalAttribute_build;
    type->fp_ctor_ = (void*)OptionalAttribute__New1_fn;
    return type;
}

// public generated OptionalAttribute() :4
void OptionalAttribute__ctor_1_fn(OptionalAttribute* __this)
{
    __this->ctor_1();
}

// public generated OptionalAttribute New() :4
void OptionalAttribute__New1_fn(OptionalAttribute** __retval)
{
    *__retval = OptionalAttribute::New1();
}

// public generated OptionalAttribute() [instance] :4
void OptionalAttribute::ctor_1()
{
    ctor_();
}

// public generated OptionalAttribute New() [static] :4
OptionalAttribute* OptionalAttribute::New1()
{
    OptionalAttribute* obj1 = (OptionalAttribute*)uNew(OptionalAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ExportTargetInterop/StaticAttribute.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class StaticAttribute :4
// {
static void StaticAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StaticAttribute__New1_fn, 0, true, type, 0));
}

uType* StaticAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(StaticAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.StaticAttribute", options);
    type->fp_build_ = StaticAttribute_build;
    type->fp_ctor_ = (void*)StaticAttribute__New1_fn;
    return type;
}

// public generated StaticAttribute() :4
void StaticAttribute__ctor_1_fn(StaticAttribute* __this)
{
    __this->ctor_1();
}

// public generated StaticAttribute New() :4
void StaticAttribute__New1_fn(StaticAttribute** __retval)
{
    *__retval = StaticAttribute::New1();
}

// public generated StaticAttribute() [instance] :4
void StaticAttribute::ctor_1()
{
    ctor_();
}

// public generated StaticAttribute New() [static] :4
StaticAttribute* StaticAttribute::New1()
{
    StaticAttribute* obj1 = (StaticAttribute*)uNew(StaticAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ExportTargetInterop/TargetSpecificImplementationAttribute.uno
// -----------------------------------------------------------------------------------------------------------------------------

// public sealed class TargetSpecificImplementationAttribute :5
// {
static void TargetSpecificImplementationAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificImplementationAttribute__New1_fn, 0, true, type, 0));
}

uType* TargetSpecificImplementationAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TargetSpecificImplementationAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute", options);
    type->fp_build_ = TargetSpecificImplementationAttribute_build;
    type->fp_ctor_ = (void*)TargetSpecificImplementationAttribute__New1_fn;
    return type;
}

// public generated TargetSpecificImplementationAttribute() :5
void TargetSpecificImplementationAttribute__ctor_1_fn(TargetSpecificImplementationAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificImplementationAttribute New() :5
void TargetSpecificImplementationAttribute__New1_fn(TargetSpecificImplementationAttribute** __retval)
{
    *__retval = TargetSpecificImplementationAttribute::New1();
}

// public generated TargetSpecificImplementationAttribute() [instance] :5
void TargetSpecificImplementationAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificImplementationAttribute New() [static] :5
TargetSpecificImplementationAttribute* TargetSpecificImplementationAttribute::New1()
{
    TargetSpecificImplementationAttribute* obj1 = (TargetSpecificImplementationAttribute*)uNew(TargetSpecificImplementationAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ExportTargetInterop/TargetSpecificTypeAttribute.uno
// -------------------------------------------------------------------------------------------------------------------

// public sealed class TargetSpecificTypeAttribute :5
// {
static void TargetSpecificTypeAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificTypeAttribute__New1_fn, 0, true, type, 0));
}

uType* TargetSpecificTypeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TargetSpecificTypeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute", options);
    type->fp_build_ = TargetSpecificTypeAttribute_build;
    type->fp_ctor_ = (void*)TargetSpecificTypeAttribute__New1_fn;
    return type;
}

// public generated TargetSpecificTypeAttribute() :5
void TargetSpecificTypeAttribute__ctor_1_fn(TargetSpecificTypeAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificTypeAttribute New() :5
void TargetSpecificTypeAttribute__New1_fn(TargetSpecificTypeAttribute** __retval)
{
    *__retval = TargetSpecificTypeAttribute::New1();
}

// public generated TargetSpecificTypeAttribute() [instance] :5
void TargetSpecificTypeAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificTypeAttribute New() [static] :5
TargetSpecificTypeAttribute* TargetSpecificTypeAttribute::New1()
{
    TargetSpecificTypeAttribute* obj1 = (TargetSpecificTypeAttribute*)uNew(TargetSpecificTypeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
