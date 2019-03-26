// This file was generated based on /usr/local/share/uno/Packages/Fuse.Models/1.9.0/ModelJavaScript.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Models{struct ModelJavaScript__ModelData;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Models{

// private sealed class ModelJavaScript.ModelData :15
// {
uType* ModelJavaScript__ModelData_typeof();
void ModelJavaScript__ModelData__ctor__fn(ModelJavaScript__ModelData* __this);
void ModelJavaScript__ModelData__New1_fn(ModelJavaScript__ModelData** __retval);

struct ModelJavaScript__ModelData : uObject
{
    uStrong<uString*> ModulePath;
    uStrong< ::g::Uno::UX::NameTable*> NameTable;
    uStrong<uObject*> Arguments;
    bool HasArguments;

    void ctor_();
    static ModelJavaScript__ModelData* New1();
};
// }

}}} // ::g::Fuse::Models
