// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/Pushalim.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DreamPluspopup_FuseControlsTextControl_Value_Property.h>
#include <_root.DreamPluspopup_FuseTriggersActionsSetstring_Value_Property.h>
#include <_root.Pushalim.h>
#include <_root.Pushalim.Template3.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataFunction.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[5];

namespace g{

// public partial sealed class Pushalim.Template3 :183
// {
// static Template3() :196
static void Pushalim__Template3__cctor__fn(uType* __type)
{
    Pushalim__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
    Pushalim__Template3::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Hourtext"*/]);
}

static void Pushalim__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Hourtext");
    ::STRINGS[2] = uString::Const("Hourselect");
    ::STRINGS[3] = uString::Const("Hourclick");
    ::STRINGS[4] = uString::Const("Page/Pushalim.ux");
    ::TYPES[0] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetFields(2,
        ::g::Pushalim_typeof(), offsetof(Pushalim__Template3, __parent1), uFieldFlagsWeak,
        ::g::Pushalim_typeof(), offsetof(Pushalim__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Pushalim__Template3, Hourvalue_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Pushalim__Template3, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Pushalim__Template3, __self_Value_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Pushalim__Template3, temp_eb7), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim__Template3::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Pushalim__Template3::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pushalim__Template3__New2_fn, 0, true, type, 2, ::g::Pushalim_typeof(), ::g::Pushalim_typeof()));
}

::g::Uno::UX::Template_type* Pushalim__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Pushalim__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Pushalim.Template3", options);
    type->fp_build_ = Pushalim__Template3_build;
    type->fp_cctor_ = Pushalim__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))Pushalim__Template3__New1_fn;
    return type;
}

// public Template3(Pushalim parent, Pushalim parentInstance) :187
void Pushalim__Template3__ctor_1_fn(Pushalim__Template3* __this, ::g::Pushalim* parent, ::g::Pushalim* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :199
void Pushalim__Template3__New1_fn(Pushalim__Template3* __this, uObject** __retval)
{
    uStackFrame __("Pushalim.Template3", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->Hourvalue_Value_inst = ::g::DreamPluspopup_FuseControlsTextControl_Value_Property::New1(uPtr(__this->__parent1)->Hourvalue, Pushalim__Template3::__selector0_);
    ::g::Fuse::Triggers::Actions::Set* temp = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[0/*Fuse.Triggers.Actions.Set<string>*/], __this->Hourvalue_Value_inst);
    __this->temp_Value_inst = ::g::DreamPluspopup_FuseTriggersActionsSetstring_Value_Property::New1(temp, Pushalim__Template3::__selector0_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"Hourselect"*/]);
    __this->__self_Value_inst1 = ::g::DreamPluspopup_FuseControlsTextControl_Value_Property::New1(__self1, Pushalim__Template3::__selector0_);
    ::g::Fuse::Reactive::DataFunction* temp2 = ::g::Fuse::Reactive::DataFunction::New1();
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"Hourclick"*/]);
    ::g::Fuse::Gestures::Clicked* temp4 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Value_inst, (uObject*)temp1, 3);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp2, 3);
    __this->temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    __self1->FontSize(25.0f);
    __self1->TextAlignment(1);
    __self1->Color(::g::Fuse::Drawing::Colors::Purple());
    __self1->Alignment(0);
    __self1->Name(Pushalim__Template3::__selector1_);
    __self1->SourceLineNumber(100);
    __self1->SourceFileName(::STRINGS[4/*"Page/Pushal...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb7)));
    temp4->SourceLineNumber(101);
    temp4->SourceFileName(::STRINGS[4/*"Page/Pushal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    temp->SourceLineNumber(103);
    temp->SourceFileName(::STRINGS[4/*"Page/Pushal...*/]);
    temp1->SourceLineNumber(103);
    temp1->SourceFileName(::STRINGS[4/*"Page/Pushal...*/]);
    temp2->SourceLineNumber(100);
    temp2->SourceFileName(::STRINGS[4/*"Page/Pushal...*/]);
    temp3->SourceLineNumber(100);
    temp3->SourceFileName(::STRINGS[4/*"Page/Pushal...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb7);
    return *__retval = __self1, void();
}

// public Template3 New(Pushalim parent, Pushalim parentInstance) :187
void Pushalim__Template3__New2_fn(::g::Pushalim* parent, ::g::Pushalim* parentInstance, Pushalim__Template3** __retval)
{
    *__retval = Pushalim__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector Pushalim__Template3::__selector0_;
::g::Uno::UX::Selector Pushalim__Template3::__selector1_;

// public Template3(Pushalim parent, Pushalim parentInstance) [instance] :187
void Pushalim__Template3::ctor_1(::g::Pushalim* parent, ::g::Pushalim* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(Pushalim parent, Pushalim parentInstance) [static] :187
Pushalim__Template3* Pushalim__Template3::New2(::g::Pushalim* parent, ::g::Pushalim* parentInstance)
{
    Pushalim__Template3* obj1 = (Pushalim__Template3*)uNew(Pushalim__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
