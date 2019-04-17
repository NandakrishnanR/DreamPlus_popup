// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/push.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DreamPluspopup_FuseControlsTextControl_Value_Property.h>
#include <_root.push.h>
#include <_root.push.Template.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
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
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class push.Template :6
// {
// static Template() :17
static void push__Template__cctor__fn(uType* __type)
{
    push__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void push__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Yearclick");
    ::STRINGS[2] = uString::Const("Page/push.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetFields(2,
        ::g::push_typeof(), offsetof(push__Template, __parent1), uFieldFlagsWeak,
        ::g::push_typeof(), offsetof(push__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(push__Template, __self_Value_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push__Template, temp_eb13), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)push__Template__New2_fn, 0, true, type, 2, ::g::push_typeof(), ::g::push_typeof()));
}

::g::Uno::UX::Template_type* push__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(push__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("push.Template", options);
    type->fp_build_ = push__Template_build;
    type->fp_cctor_ = push__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))push__Template__New1_fn;
    return type;
}

// public Template(push parent, push parentInstance) :10
void push__Template__ctor_1_fn(push__Template* __this, ::g::push* parent, ::g::push* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :20
void push__Template__New1_fn(push__Template* __this, uObject** __retval)
{
    uStackFrame __("push.Template", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->__self_Value_inst1 = ::g::DreamPluspopup_FuseControlsTextControl_Value_Property::New1(__self1, push__Template::__selector0_);
    ::g::Fuse::Reactive::DataFunction* temp = ::g::Fuse::Reactive::DataFunction::New1();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"Yearclick"*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    __this->temp_eb13 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    __self1->FontSize(25.0f);
    __self1->Color(::g::Fuse::Drawing::Colors::Purple());
    __self1->Alignment(0);
    __self1->X(::g::Uno::UX::Size__New1(40.0f, 1));
    __self1->Y(::g::Uno::UX::Size__New1(100.0f, 1));
    __self1->SourceLineNumber(38);
    __self1->SourceFileName(::STRINGS[2/*"Page/push.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb13)));
    temp->SourceLineNumber(38);
    temp->SourceFileName(::STRINGS[2/*"Page/push.ux"*/]);
    temp1->SourceLineNumber(38);
    temp1->SourceFileName(::STRINGS[2/*"Page/push.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb13);
    return *__retval = __self1, void();
}

// public Template New(push parent, push parentInstance) :10
void push__Template__New2_fn(::g::push* parent, ::g::push* parentInstance, push__Template** __retval)
{
    *__retval = push__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector push__Template::__selector0_;

// public Template(push parent, push parentInstance) [instance] :10
void push__Template::ctor_1(::g::push* parent, ::g::push* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(push parent, push parentInstance) [static] :10
push__Template* push__Template::New2(::g::push* parent, ::g::push* parentInstance)
{
    push__Template* obj1 = (push__Template*)uNew(push__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
