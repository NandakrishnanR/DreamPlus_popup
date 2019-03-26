// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Source/Uno/Runtime/Implementation/Internal/Unsafe.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Runtime.Implementation.Internal.Unsafe.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class Unsafe :7
// {
static void Unsafe_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Quit", NULL, (void*)Unsafe__Quit_fn, 0, true, uVoid_typeof(), 0));
}

uClassType* Unsafe_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.Internal.Unsafe", options);
    type->fp_build_ = Unsafe_build;
    return type;
}

// public static extern void Quit() :28
void Unsafe__Quit_fn()
{
    Unsafe::Quit();
}

// public static extern void Quit() [static] :28
void Unsafe::Quit()
{
    @autoreleasepool
    {
        exit(0);
    }
    
}
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
