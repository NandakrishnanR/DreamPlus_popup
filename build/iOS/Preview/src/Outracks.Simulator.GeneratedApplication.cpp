// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Client.ITypeMap.h>
#include <Outracks.Simulator.Client.NativeReflection.h>
#include <Outracks.Simulator.Client.SimpleTypeMap.h>
#include <Outracks.Simulator.GeneratedApplication.h>
#include <Outracks.Simulator.Runtime.Bundle.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Int.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.String.h>
static uString* STRINGS[5];
static uType* TYPES[2];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class GeneratedApplication :11
// {
static void GeneratedApplication_build(uType* type)
{
    ::STRINGS[0] = uString::Const("127.0.0.1");
    ::STRINGS[1] = uString::Const("169.254.146.176");
    ::STRINGS[2] = uString::Const("10.1.52.190");
    ::STRINGS[3] = uString::Const("/Users/jaeyounchae/Documents/fuse/DreamPlus_popup/DreamPlus-popup.unoproj");
    ::STRINGS[4] = uString::Const("DreamPlus-popup");
    ::TYPES[0] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Net::IPAddress_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Outracks::Simulator::Client::Application_type, interface0),
        ::g::Fuse::IRootVisualProvider_typeof(), offsetof(::g::Outracks::Simulator::Client::Application_type, interface1),
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Client::Application_type, interface2));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeneratedApplication__New3_fn, 0, true, type, 0));
}

::g::Outracks::Simulator::Client::Application_type* GeneratedApplication_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Application_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GeneratedApplication);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Application_type);
    type = (::g::Outracks::Simulator::Client::Application_type*)uClassType::New("Outracks.Simulator.GeneratedApplication", options);
    type->fp_build_ = GeneratedApplication_build;
    type->fp_ctor_ = (void*)GeneratedApplication__New3_fn;
    type->interface2.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerPressed_fn;
    type->interface2.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerMoved_fn;
    type->interface2.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerReleased_fn;
    type->interface2.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))::g::Outracks::Simulator::Client::Application__OnPointerWheelMoved_fn;
    type->interface1.fp_get_Root = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::AppBase__FuseIRootVisualProviderget_Root_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public GeneratedApplication() :13
void GeneratedApplication__ctor_5_fn(GeneratedApplication* __this)
{
    __this->ctor_5();
}

// public GeneratedApplication New() :13
void GeneratedApplication__New3_fn(GeneratedApplication** __retval)
{
    *__retval = GeneratedApplication::New3();
}

// public GeneratedApplication() [instance] :13
void GeneratedApplication::ctor_5()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", ".ctor()");
    ctor_4(uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[0/*Uno.Net.IPEndPoint[]*/], 3, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[0/*"127.0.0.1"*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[1/*"169.254.146...*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[2/*"10.1.52.190"*/]), 12124)), ::STRINGS[3/*"/Users/jaey...*/], uArray::Init<uString*>(::TYPES[1/*string[]*/], 0));
    ::g::Outracks::Simulator::Runtime::Bundle::Initialize(::STRINGS[4/*"DreamPlus-p...*/]);
    Reflection((uObject*)::g::Outracks::Simulator::Client::NativeReflection::New1((uObject*)::g::Outracks::Simulator::Client::SimpleTypeMap::New1()));
}

// public GeneratedApplication New() [static] :13
GeneratedApplication* GeneratedApplication::New3()
{
    GeneratedApplication* obj1 = (GeneratedApplication*)uNew(GeneratedApplication_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
