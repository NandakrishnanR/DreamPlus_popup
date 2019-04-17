// This file was generated based on /Users/jaeyounchae/Documents/fuse/DreamPlus_popup/build/iOS/Preview/cache/ux15/push.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DreamPluspopup_FuseControlsTextControl_Value_Property.h>
#include <_root.push.h>
#include <_root.push.Template4.h>
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

// public partial sealed class push.Template4 :170
// {
// static Template4() :181
static void push__Template4__cctor__fn(uType* __type)
{
    push__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void push__Template4_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Hourclick");
    ::STRINGS[2] = uString::Const("Page/push.ux");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetFields(2,
        ::g::push_typeof(), offsetof(push__Template4, __parent1), uFieldFlagsWeak,
        ::g::push_typeof(), offsetof(push__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(push__Template4, __self_Value_inst1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(push__Template4, temp_eb21), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&push__Template4::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)push__Template4__New2_fn, 0, true, type, 2, ::g::push_typeof(), ::g::push_typeof()));
}

::g::Uno::UX::Template_type* push__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(push__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("push.Template4", options);
    type->fp_build_ = push__Template4_build;
    type->fp_cctor_ = push__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))push__Template4__New1_fn;
    return type;
}

// public Template4(push parent, push parentInstance) :174
void push__Template4__ctor_1_fn(push__Template4* __this, ::g::push* parent, ::g::push* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :184
void push__Template4__New1_fn(push__Template4* __this, uObject** __retval)
{
    uStackFrame __("push.Template4", "New()");
    ::g::Fuse::Controls::Text* __self1 = ::g::Fuse::Controls::Text::New3();
    __this->__self_Value_inst1 = ::g::DreamPluspopup_FuseControlsTextControl_Value_Property::New1(__self1, push__Template4::__selector0_);
    ::g::Fuse::Reactive::DataFunction* temp = ::g::Fuse::Reactive::DataFunction::New1();
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"Hourclick"*/]);
    ::g::Fuse::Reactive::DataBinding* temp2 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Value_inst1, (uObject*)temp, 3);
    __this->temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    __self1->FontSize(25.0f);
    __self1->Color(::g::Fuse::Drawing::Colors::Purple());
    __self1->Alignment(10);
    __self1->X(::g::Uno::UX::Size__New1(3.0f, 1));
    __self1->Y(::g::Uno::UX::Size__New1(30.0f, 1));
    __self1->SourceLineNumber(148);
    __self1->SourceFileName(::STRINGS[2/*"Page/push.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb21)));
    temp->SourceLineNumber(148);
    temp->SourceFileName(::STRINGS[2/*"Page/push.ux"*/]);
    temp1->SourceLineNumber(148);
    temp1->SourceFileName(::STRINGS[2/*"Page/push.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb21);
    return *__retval = __self1, void();
}

// public Template4 New(push parent, push parentInstance) :174
void push__Template4__New2_fn(::g::push* parent, ::g::push* parentInstance, push__Template4** __retval)
{
    *__retval = push__Template4::New2(parent, parentInstance);
}

::g::Uno::UX::Selector push__Template4::__selector0_;

// public Template4(push parent, push parentInstance) [instance] :174
void push__Template4::ctor_1(::g::push* parent, ::g::push* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(push parent, push parentInstance) [static] :174
push__Template4* push__Template4::New2(::g::push* parent, ::g::push* parentInstance)
{
    push__Template4* obj1 = (push__Template4*)uNew(push__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
