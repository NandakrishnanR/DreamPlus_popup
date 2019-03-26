// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ImportServices.FilenameAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ImportServices{

// /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Compiler/ImportServices/FilenameAttribute.uno
// ----------------------------------------------------------------------------------------------------

// public sealed class FilenameAttribute :5
// {
static void FilenameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FilenameAttribute__New1_fn, 0, true, type, 0));
}

uType* FilenameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(FilenameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ImportServices.FilenameAttribute", options);
    type->fp_build_ = FilenameAttribute_build;
    type->fp_ctor_ = (void*)FilenameAttribute__New1_fn;
    return type;
}

// public generated FilenameAttribute() :5
void FilenameAttribute__ctor_1_fn(FilenameAttribute* __this)
{
    __this->ctor_1();
}

// public generated FilenameAttribute New() :5
void FilenameAttribute__New1_fn(FilenameAttribute** __retval)
{
    *__retval = FilenameAttribute::New1();
}

// public generated FilenameAttribute() [instance] :5
void FilenameAttribute::ctor_1()
{
    ctor_();
}

// public generated FilenameAttribute New() [static] :5
FilenameAttribute* FilenameAttribute::New1()
{
    FilenameAttribute* obj1 = (FilenameAttribute*)uNew(FilenameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ImportServices
