// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.OptionalSimpleAlignment.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.CircleLayout.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.ColumnLayout.h>
#include <Fuse.Layouts.ColumnLayoutSizing.h>
#include <Fuse.Layouts.DefaultLayout.h>
#include <Fuse.Layouts.DefinitionBase.CreationType.h>
#include <Fuse.Layouts.DefinitionBase.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.FlowDirection.h>
#include <Fuse.Layouts.GridChildOrder.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.Layouts.h>
#include <Fuse.Layouts.Metric.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Layouts.Row.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Layouts.StackLayoutMode.h>
#include <Fuse.Layouts.WrapLayout.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[7];
static uType* TYPES[48];

namespace g{
namespace Fuse{
namespace Layouts{

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/CircleLayout.uno
// ---------------------------------------------------------------------------------

// public sealed class CircleLayout :32
// {
static void CircleLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _radius), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _itemSpacing), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _startAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _endAngle), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EndAngleDegrees", NULL, (void*)CircleLayout__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)CircleLayout__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemSpacingDegrees", NULL, (void*)CircleLayout__get_ItemSpacingDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacingDegrees", NULL, (void*)CircleLayout__set_ItemSpacingDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)CircleLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Radius", NULL, (void*)CircleLayout__get_Radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Radius", NULL, (void*)CircleLayout__set_Radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)CircleLayout__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)CircleLayout__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Layouts::Layout_type* CircleLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CircleLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.CircleLayout", options);
    type->fp_build_ = CircleLayout_build;
    type->fp_ctor_ = (void*)CircleLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))CircleLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))CircleLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated CircleLayout() :32
void CircleLayout__ctor_2_fn(CircleLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :112
void CircleLayout__ArrangePaddingBox_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize1(padding_);
    int32_t c = 0;

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            continue;

        c++;
    }

    float angleRange = __this->_endAngle - __this->_startAngle;
    float step = angleRange / (float)c;
    float arcSize = (step - __this->_itemSpacing) / 2.0f;
    float fitRadius = (__this->Radius() * ::g::Uno::Math::Sin1(arcSize)) / (::g::Uno::Math::Sin1(arcSize) + 1.0f);
    ::g::Uno::Float2 elementRadius = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division1(nlp.Size(), 2.0f), __this->Radius() - fitRadius);
    ::g::Uno::Float2 elementSize = ::g::Uno::Float2__op_Multiply1(nlp.Size(), fitRadius);
    float angle = __this->_startAngle;
    nlp.SetSize(elementSize, true, true);

    for (::g::Fuse::Visual* e1 = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e1 != NULL; e1 = (::g::Fuse::Visual*)uPtr(e1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!__this->AffectsLayout(e1))
            continue;

        float x = (::g::Uno::Math::Cos1(angle) * elementRadius.X) + (lp_.Size().X / 2.0f);
        float y = (::g::Uno::Math::Sin1(angle) * elementRadius.Y) + (lp_.Size().Y / 2.0f);
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(x, y)), ::g::Uno::Float2__op_Division1(elementSize, 2.0f));
        uPtr(e1)->ArrangeMarginBox(p, nlp);
        angle = angle + step;
    }
}

// public float get_EndAngleDegrees() :92
void CircleLayout__get_EndAngleDegrees_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :93
void CircleLayout__set_EndAngleDegrees_fn(CircleLayout* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :100
void CircleLayout__GetContentSize_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_ItemSpacingDegrees() :55
void CircleLayout__get_ItemSpacingDegrees_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacingDegrees();
}

// public void set_ItemSpacingDegrees(float value) :56
void CircleLayout__set_ItemSpacingDegrees_fn(CircleLayout* __this, float* value)
{
    __this->ItemSpacingDegrees(*value);
}

// public generated CircleLayout New() :32
void CircleLayout__New2_fn(CircleLayout** __retval)
{
    *__retval = CircleLayout::New2();
}

// public float get_Radius() :39
void CircleLayout__get_Radius_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :40
void CircleLayout__set_Radius_fn(CircleLayout* __this, float* value)
{
    __this->Radius(*value);
}

// public float get_StartAngleDegrees() :74
void CircleLayout__get_StartAngleDegrees_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :75
void CircleLayout__set_StartAngleDegrees_fn(CircleLayout* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// public generated CircleLayout() [instance] :32
void CircleLayout::ctor_2()
{
    _radius = 1.0f;
    _itemSpacing = 0.0f;
    _startAngle = 0.0f;
    _endAngle = 6.28318548f;
    ctor_1();
}

// public float get_EndAngleDegrees() [instance] :92
float CircleLayout::EndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :93
void CircleLayout::EndAngleDegrees(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_EndAngleDegrees(float)");
    _endAngle = ::g::Uno::Math::DegreesToRadians1(value);
    InvalidateLayout();
}

// public float get_ItemSpacingDegrees() [instance] :55
float CircleLayout::ItemSpacingDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_itemSpacing);
}

// public void set_ItemSpacingDegrees(float value) [instance] :56
void CircleLayout::ItemSpacingDegrees(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_ItemSpacingDegrees(float)");
    _itemSpacing = ::g::Uno::Math::DegreesToRadians1(value);
    InvalidateLayout();
}

// public float get_Radius() [instance] :39
float CircleLayout::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance] :40
void CircleLayout::Radius(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_Radius(float)");
    _radius = value;
    InvalidateLayout();
}

// public float get_StartAngleDegrees() [instance] :74
float CircleLayout::StartAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :75
void CircleLayout::StartAngleDegrees(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_StartAngleDegrees(float)");
    _startAngle = ::g::Uno::Math::DegreesToRadians1(value);
    InvalidateLayout();
}

// public generated CircleLayout New() [static] :32
CircleLayout* CircleLayout::New2()
{
    CircleLayout* obj1 = (CircleLayout*)uNew(CircleLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public sealed class Column :213
// {
static void Column_build(uType* type)
{
    type->SetFields(9);
    type->Reflection.SetFunctions(6,
        new uFunction(".ctor", NULL, (void*)Column__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Column__New3_fn, 0, true, type, 2, ::g::Uno::Float_typeof(), ::g::Fuse::Layouts::Metric_typeof()),
        new uFunction("get_Width", NULL, (void*)Column__get_Width_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Column__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_WidthMetric", NULL, (void*)Column__get_WidthMetric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_WidthMetric", NULL, (void*)Column__set_WidthMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()));
}

uType* Column_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Column);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Column", options);
    type->fp_build_ = Column_build;
    type->fp_ctor_ = (void*)Column__New2_fn;
    return type;
}

// public Column() :215
void Column__ctor_4_fn(Column* __this)
{
    __this->ctor_4();
}

// public Column(float width, Fuse.Layouts.Metric metric) :217
void Column__ctor_5_fn(Column* __this, float* width, int32_t* metric)
{
    __this->ctor_5(*width, *metric);
}

// private Column(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) :220
void Column__ctor_6_fn(Column* __this, Column* copy, int32_t* creation)
{
    __this->ctor_6(copy, *creation);
}

// public Column New() :215
void Column__New2_fn(Column** __retval)
{
    *__retval = Column::New2();
}

// public Column New(float width, Fuse.Layouts.Metric metric) :217
void Column__New3_fn(float* width, int32_t* metric, Column** __retval)
{
    *__retval = Column::New3(*width, *metric);
}

// private Column New(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) :220
void Column__New4_fn(Column* copy, int32_t* creation, Column** __retval)
{
    *__retval = Column::New4(copy, *creation);
}

// public float get_Width() :231
void Column__get_Width_fn(Column* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :232
void Column__set_Width_fn(Column* __this, float* value)
{
    __this->Width(*value);
}

// public Fuse.Layouts.Metric get_WidthMetric() :225
void Column__get_WidthMetric_fn(Column* __this, int32_t* __retval)
{
    *__retval = __this->WidthMetric();
}

// public void set_WidthMetric(Fuse.Layouts.Metric value) :226
void Column__set_WidthMetric_fn(Column* __this, int32_t* value)
{
    __this->WidthMetric(*value);
}

// public Column() [instance] :215
void Column::ctor_4()
{
    ctor_1();
}

// public Column(float width, Fuse.Layouts.Metric metric) [instance] :217
void Column::ctor_5(float width, int32_t metric)
{
    ctor_2(width, metric);
}

// private Column(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :220
void Column::ctor_6(Column* copy, int32_t creation)
{
    ctor_3(copy, creation);
}

// public float get_Width() [instance] :231
float Column::Width()
{
    return Extent();
}

// public void set_Width(float value) [instance] :232
void Column::Width(float value)
{
    Extent(value);
}

// public Fuse.Layouts.Metric get_WidthMetric() [instance] :225
int32_t Column::WidthMetric()
{
    return Metric();
}

// public void set_WidthMetric(Fuse.Layouts.Metric value) [instance] :226
void Column::WidthMetric(int32_t value)
{
    Metric(value);
}

// public Column New() [static] :215
Column* Column::New2()
{
    Column* obj1 = (Column*)uNew(Column_typeof());
    obj1->ctor_4();
    return obj1;
}

// public Column New(float width, Fuse.Layouts.Metric metric) [static] :217
Column* Column::New3(float width, int32_t metric)
{
    Column* obj2 = (Column*)uNew(Column_typeof());
    obj2->ctor_5(width, metric);
    return obj2;
}

// private Column New(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) [static] :220
Column* Column::New4(Column* copy, int32_t creation)
{
    Column* obj3 = (Column*)uNew(Column_typeof());
    obj3->ctor_6(copy, creation);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/ColumnLayout.uno
// ---------------------------------------------------------------------------------

// public sealed class ColumnLayout :28
// {
static void ColumnLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Float_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(ColumnLayout, _orientation), 0,
        ::g::Uno::Bool_typeof(), offsetof(ColumnLayout, _hasColumnCount), 0,
        ::g::Uno::Int_typeof(), offsetof(ColumnLayout, _columnCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(ColumnLayout, _hasColumnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _columnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _columnSpacing), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _itemSpacing), 0,
        ::g::Fuse::Layouts::ColumnLayoutSizing_typeof(), offsetof(ColumnLayout, _sizing), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_ColumnCount", NULL, (void*)ColumnLayout__get_ColumnCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ColumnCount", NULL, (void*)ColumnLayout__set_ColumnCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ColumnSize", NULL, (void*)ColumnLayout__get_ColumnSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ColumnSize", NULL, (void*)ColumnLayout__set_ColumnSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ColumnSpacing", NULL, (void*)ColumnLayout__get_ColumnSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ColumnSpacing", NULL, (void*)ColumnLayout__set_ColumnSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemSpacing", NULL, (void*)ColumnLayout__get_ItemSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacing", NULL, (void*)ColumnLayout__set_ItemSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ColumnLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)ColumnLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)ColumnLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()),
        new uFunction("get_Sizing", NULL, (void*)ColumnLayout__get_Sizing_fn, 0, false, ::g::Fuse::Layouts::ColumnLayoutSizing_typeof(), 0),
        new uFunction("set_Sizing", NULL, (void*)ColumnLayout__set_Sizing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::ColumnLayoutSizing_typeof()));
}

::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ColumnLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.ColumnLayout", options);
    type->fp_build_ = ColumnLayout_build;
    type->fp_ctor_ = (void*)ColumnLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))ColumnLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ColumnLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated ColumnLayout() :28
void ColumnLayout__ctor_2_fn(ColumnLayout* __this)
{
    __this->ctor_2();
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, [bool doArrange], [float4 padding]) :231
void ColumnLayout__Arrange_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(container, *lp, *doArrange, *padding);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :226
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    __this->Arrange(container, lp_, true, padding_);
}

// public int get_ColumnCount() :76
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int32_t* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :77
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int32_t* value)
{
    __this->ColumnCount(*value);
}

// public float get_ColumnSize() :112
void ColumnLayout__get_ColumnSize_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSize();
}

// public void set_ColumnSize(float value) :113
void ColumnLayout__set_ColumnSize_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSize(*value);
}

// public float get_ColumnSpacing() :131
void ColumnLayout__get_ColumnSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSpacing();
}

// public void set_ColumnSpacing(float value) :132
void ColumnLayout__set_ColumnSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSpacing(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :221
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "GetContentSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Arrange(container, lp_, false, ::g::Uno::Float4__New1(0.0f)), void();
}

// public float get_ItemSpacing() :149
void ColumnLayout__get_ItemSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :150
void ColumnLayout__set_ItemSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// private int LeastAt(float[] c) :196
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int32_t* __retval)
{
    *__retval = __this->LeastAt(c);
}

// private float Max(float[] c) :213
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval)
{
    *__retval = __this->Max(c);
}

// public generated ColumnLayout New() :28
void ColumnLayout__New2_fn(ColumnLayout** __retval)
{
    *__retval = ColumnLayout::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :47
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :48
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing() :185
void ColumnLayout__get_Sizing_fn(ColumnLayout* __this, int32_t* __retval)
{
    *__retval = __this->Sizing();
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value) :186
void ColumnLayout__set_Sizing_fn(ColumnLayout* __this, int32_t* value)
{
    __this->Sizing(*value);
}

// public generated ColumnLayout() [instance] :28
void ColumnLayout::ctor_2()
{
    _orientation = 1;
    _columnCount = 2;
    _columnSpacing = 0.0f;
    _itemSpacing = 0.0f;
    ctor_1();
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, [bool doArrange], [float4 padding]) [instance] :231
::g::Uno::Float2 ColumnLayout::Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "Arrange(Fuse.Visual,Fuse.LayoutParams,[bool],[float4])");
    bool vert = Orientation() == 1;
    int32_t columnCount = ::g::Uno::Math::Max8(1, ColumnCount());
    float columnSize = ColumnSize();
    float columnSpace = columnSize + ColumnSpacing();
    bool useColumnSize = _hasColumnSize;
    ::g::Uno::Float2 avail = lp.GetAvailableSize();
    avail = ::g::Uno::Float2__op_Subtraction2(avail, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding.X, padding.Y), ::g::Uno::Float2__New2(padding.Z, padding.W)));

    if (!useColumnSize && ((vert && !lp.HasX()) || (!vert && !lp.HasY())))
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (::g::Fuse::Visual* v = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != NULL; v = (::g::Fuse::Visual*)uPtr(v)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        {
            if (!AffectsLayout(v))
                continue;

            ::g::Uno::Float2 c = uPtr(v)->GetMarginSize(::g::Fuse::LayoutParams__CreateEmpty());
            mx = ::g::Uno::Math::Max3(mx, c);
        }

        columnSize = vert ? mx.X : mx.Y;
        columnSpace = columnSize + ColumnSpacing();
        useColumnSize = true;
    }

    if (useColumnSize)
    {
        if (!_hasColumnCount)
        {
            if (vert)
                columnCount = (int32_t)::g::Uno::Math::Floor1((avail.X + ColumnSpacing()) / columnSpace);
            else
                columnCount = (int32_t)::g::Uno::Math::Floor1((avail.Y + ColumnSpacing()) / columnSpace);

            columnCount = ::g::Uno::Math::Max8(1, columnCount);
        }

        if (Sizing() == 1)
        {
            columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
            columnSize = columnSpace - ColumnSpacing();
        }
    }
    else
    {
        columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
        columnSize = columnSpace - ColumnSpacing();
    }

    uArray* at = uArray::New(::TYPES[2/*float[]*/], columnCount);

    for (::g::Fuse::Visual* v1 = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v1 != NULL; v1 = (::g::Fuse::Visual*)uPtr(v1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        ::g::Uno::Float2 avs = ::g::Uno::Float2__New2(vert ? columnSize : 0.0f, vert ? 0.0f : columnSize);
        int32_t col = LeastAt(at);
        ::g::Uno::Float2 nsz;

        if (uPtr(at)->Item<float>(col) > 0.0f)
            uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + ItemSpacing();

        if (doArrange)
        {
            if (ArrangeMarginBoxSpecial(v1, padding, lp))
                continue;

            ::g::Uno::Float2 pos = vert ? ::g::Uno::Float2__New2(padding.X + ((float)col * columnSpace), padding.Y + uPtr(at)->Item<float>(col)) : ::g::Uno::Float2__New2(padding.X + uPtr(at)->Item<float>(col), padding.Y + ((float)col * columnSpace));
            nsz = uPtr(v1)->ArrangeMarginBox(pos, ::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        }
        else if (AffectsLayout(v1))
            nsz = uPtr(v1)->GetMarginSize(::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        else
            continue;

        uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + (vert ? nsz.Y : nsz.X);
    }

    if (doArrange)
    {
        if (!_hasColumnSize)
            _columnSize = columnSize;

        if (!_hasColumnCount)
            _columnCount = columnCount;
    }

    float size = ((float)columnCount * columnSpace) - ColumnSpacing();
    ::g::Uno::Float2 q = vert ? ::g::Uno::Float2__New2(size, Max(at)) : ::g::Uno::Float2__New2(Max(at), size);
    return q;
}

// public int get_ColumnCount() [instance] :76
int32_t ColumnLayout::ColumnCount()
{
    return _columnCount;
}

// public void set_ColumnCount(int value) [instance] :77
void ColumnLayout::ColumnCount(int32_t value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ColumnCount(int)");

    if (!_hasColumnCount || (_columnCount != value))
    {
        _columnCount = value;
        _hasColumnCount = true;
        InvalidateLayout();
    }
}

// public float get_ColumnSize() [instance] :112
float ColumnLayout::ColumnSize()
{
    return _columnSize;
}

// public void set_ColumnSize(float value) [instance] :113
void ColumnLayout::ColumnSize(float value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ColumnSize(float)");

    if (!_hasColumnSize || (_columnSize != value))
    {
        _hasColumnSize = true;
        _columnSize = value;
        InvalidateLayout();
    }
}

// public float get_ColumnSpacing() [instance] :131
float ColumnLayout::ColumnSpacing()
{
    return _columnSpacing;
}

// public void set_ColumnSpacing(float value) [instance] :132
void ColumnLayout::ColumnSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ColumnSpacing(float)");

    if (_columnSpacing != value)
    {
        _columnSpacing = value;
        InvalidateLayout();
    }
}

// public float get_ItemSpacing() [instance] :149
float ColumnLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance] :150
void ColumnLayout::ItemSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ItemSpacing(float)");

    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// private int LeastAt(float[] c) [instance] :196
int32_t ColumnLayout::LeastAt(uArray* c)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "LeastAt(float[])");
    float sz = uPtr(c)->Item<float>(0);
    int32_t i = 0;

    for (int32_t j = 1; j < c->Length(); j++)
        if (uPtr(c)->Item<float>(j) < sz)
        {
            sz = uPtr(c)->Item<float>(j);
            i = j;
        }

    return i;
}

// private float Max(float[] c) [instance] :213
float ColumnLayout::Max(uArray* c)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "Max(float[])");
    float mx = uPtr(c)->Item<float>(0);

    for (int32_t j = 1; j < c->Length(); j++)
        mx = ::g::Uno::Math::Max1(mx, uPtr(c)->Item<float>(j));

    return mx;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :47
int32_t ColumnLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :48
void ColumnLayout::Orientation(int32_t value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_Orientation(Fuse.Layouts.Orientation)");

    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing() [instance] :185
int32_t ColumnLayout::Sizing()
{
    return _sizing;
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value) [instance] :186
void ColumnLayout::Sizing(int32_t value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_Sizing(Fuse.Layouts.ColumnLayoutSizing)");

    if (_sizing != value)
    {
        _sizing = value;
        InvalidateLayout();
    }
}

// public generated ColumnLayout New() [static] :28
ColumnLayout* ColumnLayout::New2()
{
    ColumnLayout* obj1 = (ColumnLayout*)uNew(ColumnLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/ColumnLayout.uno
// ---------------------------------------------------------------------------------

// public enum ColumnLayoutSizing :8
uEnumType* ColumnLayoutSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.ColumnLayoutSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Fixed", 0LL,
        "Fill", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// internal enum DefinitionBase.CreationType :57
uEnumType* DefinitionBase__CreationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.DefinitionBase.CreationType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Explicit", 0LL,
        "Parsed", 1LL,
        "Count", 2LL,
        "Implied", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/DefaultLayout.uno
// ----------------------------------------------------------------------------------

// public sealed class DefaultLayout :12
// {
static void DefaultLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DefaultLayout__New2_fn, 0, true, type, 0));
}

::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DefaultLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DefaultLayout", options);
    type->fp_build_ = DefaultLayout_build;
    type->fp_ctor_ = (void*)DefaultLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DefaultLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DefaultLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int32_t*))DefaultLayout__IsMarginBoxDependent_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated DefaultLayout() :12
void DefaultLayout__ctor_2_fn(DefaultLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :52
void DefaultLayout__ArrangePaddingBox_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.DefaultLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams av = lp_.CloneAndDerive();
    av.RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W)));

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        if (!__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            uPtr(e)->ArrangeMarginBox(::g::Uno::Float2__New2(padding_.X, padding_.Y), av);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :14
void DefaultLayout__GetContentSize_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.DefaultLayout", "GetContentSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 size = __this->GetElementsSize(container, lp_);
    return *__retval = size, void();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) :40
void DefaultLayout__GetElementsSize_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(container, *lp);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :65
void DefaultLayout__IsMarginBoxDependent_fn(DefaultLayout* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    return *__retval = 2, void();
}

// public generated DefaultLayout New() :12
void DefaultLayout__New2_fn(DefaultLayout** __retval)
{
    *__retval = DefaultLayout::New2();
}

// public generated DefaultLayout() [instance] :12
void DefaultLayout::ctor_2()
{
    ctor_1();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) [instance] :40
::g::Uno::Float2 DefaultLayout::GetElementsSize(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.DefaultLayout", "GetElementsSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Uno::Float2 ds = ::g::Uno::Float2__New1(0.0f);

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(e))
            continue;

        ds = ::g::Uno::Math::Max3(ds, uPtr(e)->GetMarginSize(lp));
    }

    return ds;
}

// public generated DefaultLayout New() [static] :12
DefaultLayout* DefaultLayout::New2()
{
    DefaultLayout* obj1 = (DefaultLayout*)uNew(DefaultLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public abstract class DefinitionBase :21
// {
static void DefinitionBase_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->MethodTypes[2]->SetPrecalc(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL),
        type->MakeMethod(1/*Parse<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::g::Uno::Collections::IList_typeof()->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->SetFields(2,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, _actualOffset), 0,
        DefinitionBase__CreationType_typeof(), offsetof(DefinitionBase, Creation), 0,
        ::g::Fuse::Layouts::Metric_typeof(), offsetof(DefinitionBase, _metric), 0,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, _extent), 0,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, ActualExtent), 0,
        ::g::Uno::Bool_typeof(), offsetof(DefinitionBase, HasActualExtent), 0,
        ::g::Uno::Action_typeof(), offsetof(DefinitionBase, Changed1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ActualOffset", NULL, (void*)DefinitionBase__get_ActualOffset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("get_Extent", NULL, (void*)DefinitionBase__get_Extent_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Extent", NULL, (void*)DefinitionBase__set_Extent_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Metric", NULL, (void*)DefinitionBase__get_Metric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_Metric", NULL, (void*)DefinitionBase__set_Metric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()));
}

uType* DefinitionBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 9;
    options.MethodTypeCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DefinitionBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.DefinitionBase", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 0,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->MethodTypes[3] = type->NewMethodType(1, 2,0);
    type->fp_build_ = DefinitionBase_build;
    return type;
}

// protected DefinitionBase() :26
void DefinitionBase__ctor_1_fn(DefinitionBase* __this)
{
    __this->ctor_1();
}

// protected DefinitionBase(float extent, Fuse.Layouts.Metric metric) :28
void DefinitionBase__ctor_2_fn(DefinitionBase* __this, float* extent, int32_t* metric)
{
    __this->ctor_2(*extent, *metric);
}

// internal DefinitionBase(Fuse.Layouts.DefinitionBase copy, Fuse.Layouts.DefinitionBase.CreationType creation) :34
void DefinitionBase__ctor_3_fn(DefinitionBase* __this, DefinitionBase* copy, int32_t* creation)
{
    __this->ctor_3(copy, *creation);
}

// public float get_ActualOffset() :50
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->ActualOffset();
}

// internal void set_ActualOffset(float value) :51
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value)
{
    __this->ActualOffset(*value);
}

// internal generated void add_Changed(Uno.Action value) :23
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// internal generated void remove_Changed(Uno.Action value) :23
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation) :39
void DefinitionBase__Copy_fn(DefinitionBase* __this, uType* __type, DefinitionBase* copy, int32_t* creation)
{
    __this->Copy(__type, copy, *creation);
}

// public float get_Extent() :97
void DefinitionBase__get_Extent_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->Extent();
}

// public void set_Extent(float value) :98
void DefinitionBase__set_Extent_fn(DefinitionBase* __this, float* value)
{
    __this->Extent(*value);
}

// internal bool get_IsImplied() :77
void DefinitionBase__get_IsImplied_fn(DefinitionBase* __this, bool* __retval)
{
    *__retval = __this->IsImplied();
}

// public Fuse.Layouts.Metric get_Metric() :83
void DefinitionBase__get_Metric_fn(DefinitionBase* __this, int32_t* __retval)
{
    *__retval = __this->Metric();
}

// public void set_Metric(Fuse.Layouts.Metric value) :84
void DefinitionBase__set_Metric_fn(DefinitionBase* __this, int32_t* value)
{
    __this->Metric(*value);
}

// protected internal void OnChanged() :24
void DefinitionBase__OnChanged_fn(DefinitionBase* __this)
{
    __this->OnChanged();
}

// protected internal static T Parse<T>(string data) :121
void DefinitionBase__Parse_fn(uType* __type, uString* data, DefinitionBase** __retval)
{
    *__retval = DefinitionBase::Parse(__type, data);
}

// protected internal static void Parse<T>(string data, Uno.Collections.IList<T> output) :111
void DefinitionBase__Parse1_fn(uType* __type, uString* data, uObject* output)
{
    DefinitionBase::Parse1(__type, data, output);
}

// internal string Serialize() :163
void DefinitionBase__Serialize_fn(DefinitionBase* __this, uString** __retval)
{
    *__retval = __this->Serialize();
}

// internal static string Serialize<T>(Uno.Collections.IList<T> columns) :174
void DefinitionBase__Serialize1_fn(uType* __type, uObject* columns, uString** __retval)
{
    *__retval = DefinitionBase::Serialize1(__type, columns);
}

// internal bool get_UsesDefault() :73
void DefinitionBase__get_UsesDefault_fn(DefinitionBase* __this, bool* __retval)
{
    *__retval = __this->UsesDefault();
}

// protected DefinitionBase() [instance] :26
void DefinitionBase::ctor_1()
{
    _metric = 1;
    _extent = 1.0f;
    ctor_();
}

// protected DefinitionBase(float extent, Fuse.Layouts.Metric metric) [instance] :28
void DefinitionBase::ctor_2(float extent, int32_t metric)
{
    _metric = 1;
    _extent = 1.0f;
    ctor_();
    _extent = extent;
    _metric = metric;
}

// internal DefinitionBase(Fuse.Layouts.DefinitionBase copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :34
void DefinitionBase::ctor_3(DefinitionBase* copy, int32_t creation)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", ".ctor(Fuse.Layouts.DefinitionBase,Fuse.Layouts.DefinitionBase.CreationType)");
    _metric = 1;
    _extent = 1.0f;
    ctor_();
    Copy(DefinitionBase_typeof()->MakeMethod(0/*Copy<Fuse.Layouts.DefinitionBase>*/, DefinitionBase_typeof(), NULL), copy, creation);
}

// public float get_ActualOffset() [instance] :50
float DefinitionBase::ActualOffset()
{
    return _actualOffset;
}

// internal void set_ActualOffset(float value) [instance] :51
void DefinitionBase::ActualOffset(float value)
{
    _actualOffset = value;
}

// internal generated void add_Changed(Uno.Action value) [instance] :23
void DefinitionBase::add_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "add_Changed(Uno.Action)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[8/*Uno.Action*/]);
}

// internal generated void remove_Changed(Uno.Action value) [instance] :23
void DefinitionBase::remove_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "remove_Changed(Uno.Action)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[8/*Uno.Action*/]);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :39
void DefinitionBase::Copy(uType* __type, DefinitionBase* copy, int32_t creation)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Copy`1(T,Fuse.Layouts.DefinitionBase.CreationType)");
    Metric(uPtr(copy)->Metric());
    Extent(copy->Extent());
    Creation = creation;
}

// public float get_Extent() [instance] :97
float DefinitionBase::Extent()
{
    return _extent;
}

// public void set_Extent(float value) [instance] :98
void DefinitionBase::Extent(float value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "set_Extent(float)");

    if (_extent != value)
    {
        _extent = ::g::Uno::Math::Max1(0.0f, value);
        OnChanged();
    }
}

// internal bool get_IsImplied() [instance] :77
bool DefinitionBase::IsImplied()
{
    return Creation == 3;
}

// public Fuse.Layouts.Metric get_Metric() [instance] :83
int32_t DefinitionBase::Metric()
{
    return _metric;
}

// public void set_Metric(Fuse.Layouts.Metric value) [instance] :84
void DefinitionBase::Metric(int32_t value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "set_Metric(Fuse.Layouts.Metric)");

    if (_metric != value)
    {
        _metric = value;
        OnChanged();
    }
}

// protected internal void OnChanged() [instance] :24
void DefinitionBase::OnChanged()
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "OnChanged()");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid();
}

// internal string Serialize() [instance] :163
uString* DefinitionBase::Serialize()
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Serialize()");

    switch (Metric())
    {
        case 2:
            return uString::Const("auto");
        case 1:
            return ::g::Uno::String::op_Addition(uBox(::g::Uno::Float_typeof(), Extent()), uString::Const("*"));
        case 3:
            return uString::Const("default");
        default:
            return ::g::Uno::Float::ToString(Extent(), ::g::Uno::Float_typeof());
    }
}

// internal bool get_UsesDefault() [instance] :73
bool DefinitionBase::UsesDefault()
{
    return (Creation == 2) || (Creation == 3);
}

// protected internal static T Parse<T>(string data) [static] :121
DefinitionBase* DefinitionBase::Parse(uType* __type, uString* data)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Parse`1(string)");

    try
    {
        {
            uString* t = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(data))));
            DefinitionBase* n = (DefinitionBase*)__type->U(0)->New();
            n->Creation = 1;

            if ((uPtr(t)->Length() > 0) && (uPtr(t)->Item(uPtr(t)->Length() - 1) == '*'))
            {
                uString* k = ::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(uPtr(t), 0, uPtr(t)->Length() - 1)));
                uPtr(n)->Extent(::g::Uno::Float::Parse(k));
                n->Metric(1);
            }
            else if (::g::Uno::String::op_Equality(t, uString::Const("auto")))
            {
                uPtr(n)->Extent(1.0f);
                n->Metric(2);
            }
            else if (::g::Uno::String::op_Equality(t, uString::Const("default")))
            {
                uPtr(n)->Extent(1.0f);
                n->Metric(3);
            }
            else
            {
                uPtr(n)->Extent(::g::Uno::Float::Parse(t));
                n->Metric(0);
            }

            return n;
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        DefinitionBase* n1 = (DefinitionBase*)__type->U(0)->New();
        n1->Extent(0.0f);
        n1->Metric(0);
        n1->Creation = 1;
        return n1;
    }
}

// protected internal static void Parse<T>(string data, Uno.Collections.IList<T> output) [static] :111
void DefinitionBase::Parse1(uType* __type, uString* data, uObject* output)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Parse<T>*/),
    };
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Parse`1(string,Uno.Collections.IList<T>)");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(output), __types[0]));

    if (::g::Uno::String::op_Equality(data, NULL))
        return;

    uArray* s = ::g::Uno::String::Split(uPtr(data), uArray::Init<int32_t>(::g::Uno::Char_typeof()->Array(), 1, ','));

    for (int32_t i = 0; i < uPtr(s)->Length(); i++)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(output), __types[0]), (DefinitionBase*)DefinitionBase::Parse(__types[1], uPtr(s)->Strong<uString*>(i)));
}

// internal static string Serialize<T>(Uno.Collections.IList<T> columns) [static] :174
uString* DefinitionBase::Serialize1(uType* __type, uObject* columns)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Serialize`1(Uno.Collections.IList<T>)");
    DefinitionBase* ret1;
    uString* s = uString::Const("");

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(columns), __types[0])); i++)
    {
        if (i > 0)
            s = ::g::Uno::String::op_Addition2(s, uString::Const(", "));

        s = ::g::Uno::String::op_Addition2(s, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(columns), __types[1]), uCRef<int32_t>(i), &ret1), ret1))->Serialize());
    }

    return s;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/DockLayout.uno
// -------------------------------------------------------------------------------

// public enum Dock :12
uEnumType* Dock_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Dock", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "Fill", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/DockLayout.uno
// -------------------------------------------------------------------------------

// public sealed class DockLayout :17
// {
// static generated DockLayout() :17
static void DockLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    DockLayout::_dockProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void DockLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&DockLayout::_dockProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetDock", NULL, (void*)DockLayout__GetDock_fn, 0, true, ::g::Fuse::Layouts::Dock_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction(".ctor", NULL, (void*)DockLayout__New2_fn, 0, true, type, 0),
        new uFunction("ResetDock", NULL, (void*)DockLayout__ResetDock_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("SetDock", NULL, (void*)DockLayout__SetDock_fn, 0, true, uVoid_typeof(), 2, ::TYPES[4/*Fuse.Visual*/], ::g::Fuse::Layouts::Dock_typeof()));
}

::g::Fuse::Layouts::Layout_type* DockLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DockLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DockLayout", options);
    type->fp_build_ = DockLayout_build;
    type->fp_ctor_ = (void*)DockLayout__New2_fn;
    type->fp_cctor_ = DockLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DockLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DockLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated DockLayout() :17
void DockLayout__ctor_2_fn(DockLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :109
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 availablePosition = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 availableSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        int32_t d = DockLayout::GetDock(c);
        bool horz = (d == 0) || (d == 1);
        nlp.SetSize(availableSize, !horz, horz);
        ::g::Uno::Float2 desiredSize = (d != 4) ? uPtr(c)->GetMarginSize(nlp) : ::g::Uno::Float2__New1(0.0f);

        switch (d)
        {
            case 0:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.X = (availablePosition.X + desiredSize.X);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 1:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2((availablePosition.X + availableSize.X) - desiredSize.X, availablePosition.Y), nlp);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 2:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.Y = (availablePosition.Y + desiredSize.Y);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 3:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2(availablePosition.X, (availablePosition.Y + availableSize.Y) - desiredSize.Y), nlp);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 4:
                break;
        }

        availableSize = ::g::Uno::Math::Max3(availableSize, ::g::Uno::Float2__New1(0.0f));
    }

    nlp.SetSize(availableSize, true, true);

    for (::g::Fuse::Visual* c1 = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c1 != NULL; c1 = (::g::Fuse::Visual*)uPtr(c1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!__this->AffectsLayout(c1))
            continue;

        if (DockLayout::GetDock(c1) != 4)
            continue;

        uPtr(c1)->ArrangeMarginBox(availablePosition, nlp);
    }
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :44
void DockLayout__GetContentSize_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "GetContentSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());
    return *__retval = __this->MeasureSubtree(container, (::g::Fuse::Node*)uPtr(container)->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]), nlp), void();
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm) :28
void DockLayout__GetDock_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = DockLayout::GetDock(elm);
}

// private float2 MeasureSubtree(Fuse.Visual container, Fuse.Node child, Fuse.LayoutParams lp) :52
void DockLayout__MeasureSubtree_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::Node* child, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureSubtree(container, child, *lp);
}

// public generated DockLayout New() :17
void DockLayout__New2_fn(DockLayout** __retval)
{
    *__retval = DockLayout::New2();
}

// public static void ResetDock(Fuse.Visual elm) :38
void DockLayout__ResetDock_fn(::g::Fuse::Visual* elm)
{
    DockLayout::ResetDock(elm);
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock) :22
void DockLayout__SetDock_fn(::g::Fuse::Visual* elm, int32_t* dock)
{
    DockLayout::SetDock(elm, *dock);
}

uSStrong< ::g::Fuse::PropertyHandle*> DockLayout::_dockProperty_;

// public generated DockLayout() [instance] :17
void DockLayout::ctor_2()
{
    ctor_1();
}

// private float2 MeasureSubtree(Fuse.Visual container, Fuse.Node child, Fuse.LayoutParams lp) [instance] :52
::g::Uno::Float2 DockLayout::MeasureSubtree(::g::Fuse::Visual* container, ::g::Fuse::Node* child, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "MeasureSubtree(Fuse.Visual,Fuse.Node,Fuse.LayoutParams)");
    ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>(child, ::TYPES[4/*Fuse.Visual*/]);

    if (child == NULL)
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        {
            if (!AffectsLayout(c))
                continue;

            if (DockLayout::GetDock(c) == 4)
            {
                ::g::Uno::Float2 sz = uPtr(c)->GetMarginSize(lp);
                mx = ::g::Uno::Math::Max3(sz, mx);
            }
        }

        return mx;
    }

    if (c == NULL)
        return MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);

    switch (DockLayout::GetDock(c))
    {
        case 0:
        case 1:
        {
            ::g::Fuse::LayoutParams nlp = lp.Clone();
            nlp.RetainXY(false, nlp.HasY());
            ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(nlp);
            lp.RemoveSize(::g::Uno::Float2__New2(cds.X, 0.0f));
            ::g::Uno::Float2 subtree = MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
            return ::g::Uno::Float2__New2(cds.X + subtree.X, ::g::Uno::Math::Max1(cds.Y, subtree.Y));
        }
        case 2:
        case 3:
        {
            ::g::Fuse::LayoutParams nlp1 = lp.Clone();
            nlp1.RetainXY(nlp1.HasX(), false);
            ::g::Uno::Float2 cds1 = uPtr(c)->GetMarginSize(nlp1);
            lp.RemoveSize(::g::Uno::Float2__New2(0.0f, cds1.Y));
            ::g::Uno::Float2 subtree1 = MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
            return ::g::Uno::Float2__New2(::g::Uno::Math::Max1(cds1.X, subtree1.X), cds1.Y + subtree1.Y);
        }
        case 4:
            return MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm) [static] :28
int32_t DockLayout::GetDock(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "GetDock(Fuse.Visual)");
    DockLayout_typeof()->Init();
    uObject* val;

    if (uPtr(uPtr(elm)->Properties())->TryGet(DockLayout::_dockProperty_, &val))
        return uUnbox<int32_t>(::g::Fuse::Layouts::Dock_typeof(), val);

    return 4;
}

// public generated DockLayout New() [static] :17
DockLayout* DockLayout::New2()
{
    DockLayout* obj1 = (DockLayout*)uNew(DockLayout_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static void ResetDock(Fuse.Visual elm) [static] :38
void DockLayout::ResetDock(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "ResetDock(Fuse.Visual)");
    DockLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(DockLayout::_dockProperty_);
    elm->InvalidateLayout(2);
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock) [static] :22
void DockLayout::SetDock(::g::Fuse::Visual* elm, int32_t dock)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "SetDock(Fuse.Visual,Fuse.Layouts.Dock)");
    DockLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(DockLayout::_dockProperty_, uBox<int32_t>(::g::Fuse::Layouts::Dock_typeof(), dock));
    elm->InvalidateLayout(2);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/WrapLayout.uno
// -------------------------------------------------------------------------------

// public enum FlowDirection :12
uEnumType* FlowDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.FlowDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LeftToRight", 0LL,
        "RightToLeft", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public enum GridChildOrder :263
uEnumType* GridChildOrder_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.GridChildOrder", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RowMajor", 0LL,
        "ColumnMajor", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public sealed class GridLayout :269
// {
// static generated GridLayout() :269
static void GridLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    ::g::Fuse::Layouts::Row* collection2;
    ::g::Fuse::Layouts::Column* collection1;
    GridLayout::_staticDefaultRow_ = (collection2 = ::g::Fuse::Layouts::Row::New2(), uPtr(collection2)->Metric(3), 3, uPtr(collection2)->Extent(1.0f), 1.0f, collection2);
    GridLayout::_staticDefaultColumn_ = (collection1 = ::g::Fuse::Layouts::Column::New2(), uPtr(collection1)->Metric(3), 3, uPtr(collection1)->Extent(1.0f), 1.0f, collection1);
    GridLayout::_rowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualRowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_rowSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualColumnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void GridLayout_build(uType* type)
{
    ::STRINGS[0] = uString::Const("A grid is using incompatible layout parameters which may result in incorrect layout. A grid using `Default` row or column sizing must have only one row or column, or have a known size. Add a `DefaultRow` or `DefaultColumn` to get the desired sizing.");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno");
    ::STRINGS[2] = uString::Const("CheckMeasureSettings");
    ::STRINGS[3] = uString::Const("RowCount and ColumnCount must be >= 1");
    ::STRINGS[4] = uString::Const("ModifyCount");
    ::TYPES[6] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[9] = type->MakeMethod(8/*UserCount<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[10] = type->MakeMethod(8/*UserCount<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[12] = type->MakeMethod(7/*TrimPad<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[13] = type->MakeMethod(7/*TrimPad<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[16] = type->MakeMethod(4/*HasDefaultMetric<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[17] = type->MakeMethod(4/*HasDefaultMetric<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[18] = type->MakeMethod(1/*CalcInitialExtents<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[19] = type->MakeMethod(1/*CalcInitialExtents<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[20] = type->MakeMethod(3/*GetTotalProportion<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[21] = type->MakeMethod(3/*GetTotalProportion<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[22] = type->MakeMethod(0/*CalcFill<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[23] = type->MakeMethod(0/*CalcFill<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[24] = type->MakeMethod(2/*CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[25] = type->MakeMethod(2/*CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[26] = ::g::Fuse::Layouts::DefinitionBase_typeof();
    ::TYPES[27] = ::g::Uno::Collections::IListExtensions_typeof();
    ::TYPES[28] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[30] = ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[31] = type->MakeMethod(5/*ModifyCount<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[32] = ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(3/*Serialize<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[33] = ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(2/*Parse<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[34] = ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(1/*Parse<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[35] = type->MakeMethod(6/*ModifyDefault<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[36] = ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(1/*Parse<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[37] = type->MakeMethod(6/*ModifyDefault<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[38] = ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[39] = type->MakeMethod(5/*ModifyCount<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[40] = ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(3/*Serialize<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[41] = ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(2/*Parse<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Layouts::Layout_typeof(),
        ::g::Uno::Math_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL),
        ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[5]->U(0), NULL),
        ::TYPES[27/*Uno.Collections.IListExtensions*/]->MakeMethod(1/*RemoveLast<T>*/, type->MethodTypes[5]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[6]->U(0), NULL));
    type->MethodTypes[7]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL),
        ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[7]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL));
    type->MethodTypes[8]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL),
        ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Layouts::GridChildOrder_typeof(), offsetof(GridLayout, _childOrder), 0,
        ::g::Fuse::Layouts::Row_typeof(), offsetof(GridLayout, _defaultRow), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(GridLayout, _defaultColumn), 0,
        ::g::Uno::Float_typeof(), offsetof(GridLayout, _cellSpacing), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(GridLayout, _contentAlignment), 0,
        ::TYPES[6/*Uno.Collections.RootableList<Fuse.Layouts.Row>*/], offsetof(GridLayout, _rows), 0,
        ::TYPES[7/*Uno.Collections.RootableList<Fuse.Layouts.Column>*/], offsetof(GridLayout, _columns), 0,
        ::g::Uno::Bool_typeof(), offsetof(GridLayout, _checkMeasureWarning), 0,
        ::g::Fuse::Layouts::Row_typeof(), (uintptr_t)&GridLayout::_staticDefaultRow_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Column_typeof(), (uintptr_t)&GridLayout::_staticDefaultColumn_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_rowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_actualRowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_rowSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_columnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_actualColumnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_columnSpanProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(33,
        new uFunction("get_CellSpacing", NULL, (void*)GridLayout__get_CellSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_CellSpacing", NULL, (void*)GridLayout__set_CellSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ChildOrder", NULL, (void*)GridLayout__get_ChildOrder_fn, 0, false, ::g::Fuse::Layouts::GridChildOrder_typeof(), 0),
        new uFunction("set_ChildOrder", NULL, (void*)GridLayout__set_ChildOrder_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::GridChildOrder_typeof()),
        new uFunction("get_ColumnCount", NULL, (void*)GridLayout__get_ColumnCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ColumnCount", NULL, (void*)GridLayout__set_ColumnCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ColumnList", NULL, (void*)GridLayout__get_ColumnList_fn, 0, false, ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL), 0),
        new uFunction("get_Columns", NULL, (void*)GridLayout__get_Columns_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Columns", NULL, (void*)GridLayout__set_Columns_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ContentAlignment", NULL, (void*)GridLayout__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)GridLayout__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_DefaultColumn", NULL, (void*)GridLayout__get_DefaultColumn_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultColumn", NULL, (void*)GridLayout__set_DefaultColumn_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_DefaultRow", NULL, (void*)GridLayout__get_DefaultRow_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultRow", NULL, (void*)GridLayout__set_DefaultRow_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetColumn", NULL, (void*)GridLayout__GetColumn_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetColumnSpan", NULL, (void*)GridLayout__GetColumnSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetRow", NULL, (void*)GridLayout__GetRow_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetRowSpan", NULL, (void*)GridLayout__GetRowSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction(".ctor", NULL, (void*)GridLayout__New2_fn, 0, true, type, 0),
        new uFunction("ResetColumn", NULL, (void*)GridLayout__ResetColumn_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("ResetColumnSpan", NULL, (void*)GridLayout__ResetColumnSpan_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("ResetRow", NULL, (void*)GridLayout__ResetRow_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("ResetRowSpan", NULL, (void*)GridLayout__ResetRowSpan_fn, 0, true, uVoid_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_RowCount", NULL, (void*)GridLayout__get_RowCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_RowCount", NULL, (void*)GridLayout__set_RowCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_RowList", NULL, (void*)GridLayout__get_RowList_fn, 0, false, ::TYPES[15/*Uno.Collections.IList`1*/]->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL), 0),
        new uFunction("get_Rows", NULL, (void*)GridLayout__get_Rows_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Rows", NULL, (void*)GridLayout__set_Rows_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetColumn", NULL, (void*)GridLayout__SetColumn_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetColumnSpan", NULL, (void*)GridLayout__SetColumnSpan_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetRow", NULL, (void*)GridLayout__SetRow_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("SetRowSpan", NULL, (void*)GridLayout__SetRowSpan_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::Int_typeof()));
}

::g::Fuse::Layouts::Layout_type* GridLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(GridLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.GridLayout", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->MethodTypes[3] = type->NewMethodType(1, 2,0);
    type->MethodTypes[4] = type->NewMethodType(1, 2,0);
    type->MethodTypes[5] = type->NewMethodType(1, 4,0);
    type->MethodTypes[6] = type->NewMethodType(1, 1,0);
    type->MethodTypes[7] = type->NewMethodType(1, 3,0);
    type->MethodTypes[8] = type->NewMethodType(1, 2,0);
    type->fp_build_ = GridLayout_build;
    type->fp_ctor_ = (void*)GridLayout__New2_fn;
    type->fp_cctor_ = GridLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))GridLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))GridLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int32_t*))GridLayout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnUnrooted_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated GridLayout() :269
void GridLayout__ctor_2_fn(GridLayout* __this)
{
    __this->ctor_2();
}

// private bool AddListener(Fuse.Layouts.DefinitionBase item) :697
void GridLayout__AddListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->AddListener(item);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :1043
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Layouts::Column* ret4;
    ::g::Fuse::Layouts::Column* ret5;
    ::g::Fuse::Layouts::Row* ret6;
    ::g::Fuse::Layouts::Row* ret7;
    ::g::Uno::Float2 remainSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Uno::Float2 measured = __this->Measure(container, ::g::Fuse::LayoutParams__Create(remainSize));
    ::g::Uno::Float2 off = ::g::Uno::Float2__New1(0.0f);
    int32_t eca = __this->EffectiveContentAlignment();

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(eca))
    {
        case 0:
        {
            off.X = padding_.X;
            break;
        }
        case 1:
        {
            off.X = (((remainSize.X / 2.0f) - (measured.X / 2.0f)) + padding_.X);
            break;
        }
        case 2:
        {
            off.X = ((lp_.X() - measured.X) - padding_.Z);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(eca))
    {
        case 0:
        {
            off.Y = padding_.Y;
            break;
        }
        case 1:
        {
            off.Y = (((remainSize.Y / 2.0f) - (measured.Y / 2.0f)) + padding_.Y);
            break;
        }
        case 2:
        {
            off.Y = ((lp_.Y() - measured.Y) - padding_.W);
            break;
        }
    }

    float effectiveCellSpacing = __this->EffectiveCellSpacing();
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();

    for (::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); child != NULL; child = (::g::Fuse::Visual*)uPtr(child)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(child, padding_, lp_))
            continue;

        int32_t column = __this->GetActualColumn(child);
        int32_t row = __this->GetActualRow(child);
        int32_t rowSpan = GridLayout::GetRowSpan(child);
        int32_t columnSpan = GridLayout::GetColumnSpan(child);
        float x = 0.0f;
        float y = 0.0f;
        float w = remainSize.X;
        float h = remainSize.Y;

        if ((column >= 0) && (column < uPtr(__this->_columns)->Count()))
        {
            ::g::Fuse::Layouts::Column* c = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_columns), uCRef<int32_t>(column), &ret4), ret4);
            x = uPtr(c)->ActualOffset();
            w = c->ActualExtent;

            for (int32_t s = column + 1; s < ::g::Uno::Math::Min8(uPtr(__this->_columns)->Count(), column + columnSpan); ++s)
                w = w + (uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_columns), uCRef<int32_t>(s), &ret5), ret5))->ActualExtent + effectiveCellSpacing);
        }

        if ((row >= 0) && (row < uPtr(__this->_rows)->Count()))
        {
            ::g::Fuse::Layouts::Row* r = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_rows), uCRef<int32_t>(row), &ret6), ret6);
            y = uPtr(r)->ActualOffset();
            h = r->ActualExtent;

            for (int32_t s1 = row + 1; s1 < ::g::Uno::Math::Min8(uPtr(__this->_rows)->Count(), row + rowSpan); ++s1)
                h = h + (uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_rows), uCRef<int32_t>(s1), &ret7), ret7))->ActualExtent + effectiveCellSpacing);
        }

        nlp.SetSize(::g::Uno::Float2__New2(w, h), true, true);
        uPtr(child)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(off, ::g::Uno::Float2__New2(x, y)), nlp);
    }
}

// private void CalcActualPositions(Fuse.Visual container) :513
void GridLayout__CalcActualPositions_fn(GridLayout* __this, ::g::Fuse::Visual* container)
{
    __this->CalcActualPositions(container);
}

// private void CalcAuto(Fuse.Visual container, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight) :871
void GridLayout__CalcAuto_fn(GridLayout* __this, ::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool* secondPass, bool* hasFirstHorzSize, bool* hasFirstVertSize, bool* expandWidth, bool* expandHeight)
{
    __this->CalcAuto(container, availableWidth, availableHeight, *secondPass, *hasFirstHorzSize, *hasFirstVertSize, *expandWidth, *expandHeight);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand) :762
void GridLayout__CalcFill_fn(GridLayout* __this, uType* __type, uObject* list, float* available, float* proportion, bool* expand)
{
    __this->CalcFill(__type, list, *available, *proportion, *expand);
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto) :782
void GridLayout__CalcInitialExtents_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* used, bool* hasAuto)
{
    __this->CalcInitialExtents(__type, list, *expand, used, hasAuto);
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing) :805
void GridLayout__CalcTotalExtentAndOffset_fn(GridLayout* __this, uType* __type, uObject* list, float* effectiveCellSpacing, float* __retval)
{
    *__retval = __this->CalcTotalExtentAndOffset(__type, list, *effectiveCellSpacing);
}

// public float get_CellSpacing() :421
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->CellSpacing();
}

// public void set_CellSpacing(float value) :422
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value)
{
    __this->CellSpacing(*value);
}

// private void Changed() :680
void GridLayout__Changed_fn(GridLayout* __this)
{
    __this->Changed();
}

// private void CheckMeasureSettings(bool hasX, bool hasY) :1003
void GridLayout__CheckMeasureSettings_fn(GridLayout* __this, bool* hasX, bool* hasY)
{
    __this->CheckMeasureSettings(*hasX, *hasY);
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder() :287
void GridLayout__get_ChildOrder_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->ChildOrder();
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value) :288
void GridLayout__set_ChildOrder_fn(GridLayout* __this, int32_t* value)
{
    __this->ChildOrder(*value);
}

// public int get_ColumnCount() :400
void GridLayout__get_ColumnCount_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :401
void GridLayout__set_ColumnCount_fn(GridLayout* __this, int32_t* value)
{
    __this->ColumnCount(*value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() :374
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->ColumnList();
}

// public string get_Columns() :378
void GridLayout__get_Columns_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->Columns();
}

// public void set_Columns(string value) :379
void GridLayout__set_Columns_fn(GridLayout* __this, uString* value)
{
    __this->Columns(value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :435
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :436
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int32_t* value)
{
    __this->ContentAlignment(*value);
}

// public string get_DefaultColumn() :390
void GridLayout__get_DefaultColumn_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->DefaultColumn();
}

// public void set_DefaultColumn(string value) :391
void GridLayout__set_DefaultColumn_fn(GridLayout* __this, uString* value)
{
    __this->DefaultColumn(value);
}

// public string get_DefaultRow() :302
void GridLayout__get_DefaultRow_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->DefaultRow();
}

// public void set_DefaultRow(string value) :303
void GridLayout__set_DefaultRow_fn(GridLayout* __this, uString* value)
{
    __this->DefaultRow(value);
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r) :685
void GridLayout__DefinitionAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionAdded(r);
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r) :691
void GridLayout__DefinitionRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionRemoved(r);
}

// private float get_EffectiveCellSpacing() :736
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveCellSpacing();
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() :1029
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand) :743
void GridLayout__EffectiveMetric_fn(GridLayout* __this, int32_t* src, bool* expand, int32_t* __retval)
{
    *__retval = __this->EffectiveMetric(*src, *expand);
}

// private int GetActualColumn(Fuse.Visual elm) :640
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = __this->GetActualColumn(elm);
}

// private int GetActualRow(Fuse.Visual elm) :466
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = __this->GetActualRow(elm);
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY) :821
void GridLayout__GetAutoSize_fn(GridLayout* __this, ::g::Fuse::Visual* child, int32_t* x0, int32_t* y0, bool* expandX, bool* expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAutoSize(child, *x0, *y0, *expandX, *expandY, knowX, knowY, autoX, autoY);
}

// public static int GetColumn(Fuse.Visual elm) :506
void GridLayout__GetColumn_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetColumn(elm);
}

// private Fuse.Layouts.Column GetColumnData(int column) :404
void GridLayout__GetColumnData_fn(GridLayout* __this, int32_t* column, ::g::Fuse::Layouts::Column** __retval)
{
    *__retval = __this->GetColumnData(*column);
}

// public static int GetColumnSpan(Fuse.Visual elm) :661
void GridLayout__GetColumnSpan_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetColumnSpan(elm);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :729
void GridLayout__GetContentSize_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetContentSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Measure(container, lp_), void();
}

// public static int GetRow(Fuse.Visual elm) :459
void GridLayout__GetRow_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetRow(elm);
}

// private Fuse.Layouts.Row GetRowData(int row) :411
void GridLayout__GetRowData_fn(GridLayout* __this, int32_t* row, ::g::Fuse::Layouts::Row** __retval)
{
    *__retval = __this->GetRowData(*row);
}

// public static int GetRowSpan(Fuse.Visual elm) :487
void GridLayout__GetRowSpan_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetRowSpan(elm);
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand) :750
void GridLayout__GetTotalProportion_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* __retval)
{
    *__retval = __this->GetTotalProportion(__type, list, *expand);
}

// private bool HasDefaultMetric<T>(Uno.Collections.IList<T> list) :1018
void GridLayout__HasDefaultMetric_fn(GridLayout* __this, uType* __type, uObject* list, bool* __retval)
{
    *__retval = __this->HasDefaultMetric(__type, list);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :1122
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "IsMarginBoxDependent(Fuse.Visual)");
    ::g::Fuse::Layouts::Column* c = __this->GetColumnData(__this->GetActualColumn(child));
    ::g::Fuse::Layouts::Row* r = __this->GetRowData(__this->GetActualRow(child));

    if ((c == NULL) || (r == NULL))
        return *__retval = 0, void();

    return *__retval = ((__this->EffectiveMetric(uPtr(c)->Metric(), false) != 2) && (__this->EffectiveMetric(uPtr(r)->Metric(), false) != 2)) ? 0 : 4, void();
}

// private float2 Measure(Fuse.Visual container, Fuse.LayoutParams lp) :928
void GridLayout__Measure_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(container, *lp);
}

// private void ModifyCount<T>(Uno.Collections.IList<T> list, int count, T primordial) :340
void GridLayout__ModifyCount_fn(GridLayout* __this, uType* __type, uObject* list, int32_t* count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->ModifyCount(__type, list, *count, primordial);
}

// private void ModifyDefault<T>(Uno.Collections.RootableList<T> list, T primordial) :310
void GridLayout__ModifyDefault_fn(GridLayout* __this, uType* __type, ::g::Uno::Collections::RootableList* list, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->ModifyDefault(__type, list, primordial);
}

// public generated GridLayout New() :269
void GridLayout__New2_fn(GridLayout** __retval)
{
    *__retval = GridLayout::New2();
}

// protected override sealed void OnRooted() :715
void GridLayout__OnRooted_fn(GridLayout* __this)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "OnRooted()");
    ::g::Fuse::Layouts::Layout__OnRooted_fn(__this);
    uPtr(__this->_rows)->RootSubscribe(uDelegate::New(::TYPES[28/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionAdded_fn, __this), uDelegate::New(::TYPES[28/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionRemoved_fn, __this));
    uPtr(__this->_columns)->RootSubscribe(uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionAdded_fn, __this), uDelegate::New(::TYPES[29/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionRemoved_fn, __this));
}

// protected override sealed void OnUnrooted() :722
void GridLayout__OnUnrooted_fn(GridLayout* __this)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "OnUnrooted()");
    ::g::Fuse::Layouts::Layout__OnUnrooted_fn(__this);
    uPtr(__this->_columns)->RootUnsubscribe();
    uPtr(__this->_rows)->RootUnsubscribe();
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item) :705
void GridLayout__RemoveListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->RemoveListener(item);
}

// public static void ResetColumn(Fuse.Visual elm) :649
void GridLayout__ResetColumn_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetColumn(elm);
}

// public static void ResetColumnSpan(Fuse.Visual elm) :671
void GridLayout__ResetColumnSpan_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetColumnSpan(elm);
}

// public static void ResetRow(Fuse.Visual elm) :475
void GridLayout__ResetRow_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetRow(elm);
}

// public static void ResetRowSpan(Fuse.Visual elm) :494
void GridLayout__ResetRowSpan_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetRowSpan(elm);
}

// public int get_RowCount() :326
void GridLayout__get_RowCount_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->RowCount();
}

// public void set_RowCount(int value) :327
void GridLayout__set_RowCount_fn(GridLayout* __this, int32_t* value)
{
    __this->RowCount(*value);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() :272
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->RowList();
}

// public string get_Rows() :276
void GridLayout__get_Rows_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->Rows();
}

// public void set_Rows(string value) :277
void GridLayout__set_Rows_fn(GridLayout* __this, uString* value)
{
    __this->Rows(value);
}

// public static void SetColumn(Fuse.Visual elm, int col) :500
void GridLayout__SetColumn_fn(::g::Fuse::Visual* elm, int32_t* col)
{
    GridLayout::SetColumn(elm, *col);
}

// public static void SetColumnSpan(Fuse.Visual elm, int span) :655
void GridLayout__SetColumnSpan_fn(::g::Fuse::Visual* elm, int32_t* span)
{
    GridLayout::SetColumnSpan(elm, *span);
}

// public static void SetRow(Fuse.Visual elm, int row) :453
void GridLayout__SetRow_fn(::g::Fuse::Visual* elm, int32_t* row)
{
    GridLayout::SetRow(elm, *row);
}

// public static void SetRowSpan(Fuse.Visual elm, int span) :481
void GridLayout__SetRowSpan_fn(::g::Fuse::Visual* elm, int32_t* span)
{
    GridLayout::SetRowSpan(elm, *span);
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial) :622
void GridLayout__TrimPad_fn(GridLayout* __this, uType* __type, uObject* list, int32_t* count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->TrimPad(__type, list, *count, primordial);
}

// private int UserCount<T>(Uno.Collections.IList<T> list) :331
void GridLayout__UserCount_fn(GridLayout* __this, uType* __type, uObject* list, int32_t* __retval)
{
    *__retval = __this->UserCount(__type, list);
}

uSStrong< ::g::Fuse::Layouts::Row*> GridLayout::_staticDefaultRow_;
uSStrong< ::g::Fuse::Layouts::Column*> GridLayout::_staticDefaultColumn_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualRowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowSpanProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualColumnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnSpanProperty_;

// public generated GridLayout() [instance] :269
void GridLayout::ctor_2()
{
    _defaultRow = GridLayout::_staticDefaultRow_;
    _defaultColumn = GridLayout::_staticDefaultColumn_;
    _cellSpacing = 0.0f;
    _rows = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[6/*Uno.Collections.RootableList<Fuse.Layouts.Row>*/]));
    _columns = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[7/*Uno.Collections.RootableList<Fuse.Layouts.Column>*/]));
    ctor_1();
}

// private bool AddListener(Fuse.Layouts.DefinitionBase item) [instance] :697
bool GridLayout::AddListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "AddListener(Fuse.Layouts.DefinitionBase)");

    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->add_Changed(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// private void CalcActualPositions(Fuse.Visual container) [instance] :513
void GridLayout::CalcActualPositions(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcActualPositions(Fuse.Visual)");
    int32_t ret8;
    int32_t ret9;
    bool rowMajor = ChildOrder() == 0;
    int32_t minorCount = ::g::Uno::Math::Max8(1, rowMajor ? UserCount(::TYPES[9/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Column>*/], ColumnList()) : UserCount(::TYPES[10/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Row>*/], RowList()));

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(e))
            continue;

        if (rowMajor)
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetColumn(e) + GridLayout::GetColumnSpan(e));
        else
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetRow(e) + GridLayout::GetRowSpan(e));
    }

    ::g::Uno::Collections::List* majorAvail = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[11/*Uno.Collections.List<int>*/], minorCount);

    for (int32_t c = 0; c < minorCount; c++)
        ::g::Uno::Collections::List__Add_fn(uPtr(majorAvail), uCRef<int32_t>(0));

    int32_t rowAt = 0;
    int32_t colAt = 0;
    int32_t maxRow = 0;
    int32_t maxCol = 0;

    for (::g::Fuse::Visual* elm = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); elm != NULL; elm = (::g::Fuse::Visual*)uPtr(elm)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(elm))
            continue;

        uObject* v;
        bool haveCol = false, haveRow = false;

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty_, &v))
        {
            colAt = uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
            haveCol = true;
        }

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty_, &v))
        {
            rowAt = uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
            haveRow = true;
        }

        if (haveRow && !haveCol)
            colAt = 0;

        if (haveCol && !haveRow)
            rowAt = 0;

        if (!haveRow && !haveCol)
        {
            if (rowMajor)

                while (rowAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int32_t>(colAt), &ret8), ret8))
                {
                    colAt++;

                    if (colAt >= minorCount)
                    {
                        rowAt++;
                        colAt = 0;
                    }
                }
            else

                while (colAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int32_t>(rowAt), &ret9), ret9))
                {
                    rowAt++;

                    if (rowAt >= minorCount)
                    {
                        colAt++;
                        rowAt = 0;
                    }
                }
        }

        uPtr(uPtr(elm)->Properties())->Set(GridLayout::_actualRowProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), rowAt));
        uPtr(elm->Properties())->Set(GridLayout::_actualColumnProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), colAt));
        int32_t xs = GridLayout::GetColumnSpan(elm);
        int32_t ys = GridLayout::GetRowSpan(elm);
        maxRow = ::g::Uno::Math::Max8(maxRow, rowAt + ys);
        maxCol = ::g::Uno::Math::Max8(maxCol, colAt + xs);

        if (rowMajor)

            for (int32_t c1 = colAt; c1 < ::g::Uno::Math::Min8(minorCount, colAt + xs); c1++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int32_t>(c1), uCRef<int32_t>(rowAt + ys));
        else

            for (int32_t c2 = rowAt; c2 < ::g::Uno::Math::Min8(minorCount, rowAt + ys); c2++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int32_t>(c2), uCRef<int32_t>(colAt + xs));
    }

    TrimPad(::TYPES[12/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Row>*/], (uObject*)_rows, maxRow, _defaultRow);
    TrimPad(::TYPES[13/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Column>*/], (uObject*)_columns, maxCol, _defaultColumn);
}

// private void CalcAuto(Fuse.Visual container, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight) [instance] :871
void GridLayout::CalcAuto(::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcAuto(Fuse.Visual,float&,float&,bool,bool,bool,bool,bool)");

    for (::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); child != NULL; child = (::g::Fuse::Visual*)uPtr(child)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(child))
            continue;

        int32_t x = GetActualColumn(child);
        int32_t y = GetActualRow(child);
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if (colData == NULL)
            continue;

        ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

        if (rowData == NULL)
            continue;

        bool sizeMatch = ((EffectiveMetric(uPtr(rowData)->Metric(), expandHeight) == 1) && !hasFirstVertSize) || ((EffectiveMetric(uPtr(colData)->Metric(), expandWidth) == 1) && !hasFirstHorzSize);

        if (sizeMatch != secondPass)
            continue;

        bool knowX = false;
        bool knowY = false;
        bool autoX = false;
        bool autoY = false;
        ::g::Uno::Float2 knowSize = GetAutoSize(child, x, y, expandWidth, expandHeight, &knowX, &knowY, &autoX, &autoY);

        if (!autoX && !autoY)
            continue;

        ::g::Fuse::LayoutParams clp = ::g::Fuse::LayoutParams__CreateXY(knowSize, knowX && !autoX, knowY && !autoY);
        ::g::Uno::Float2 cds = uPtr(child)->GetMarginSize(clp);

        if (autoX)
        {
            float w = ::g::Uno::Math::Max1(uPtr(colData)->ActualExtent, cds.X);
            *availableWidth = *availableWidth - (w - colData->ActualExtent);
            colData->ActualExtent = w;
            colData->HasActualExtent = true;
        }

        if (autoY)
        {
            float h = ::g::Uno::Math::Max1(uPtr(rowData)->ActualExtent, cds.Y);
            *availableHeight = *availableHeight - (h - rowData->ActualExtent);
            rowData->ActualExtent = h;
            rowData->HasActualExtent = true;
        }
    }

    *availableWidth = ::g::Uno::Math::Max1(*availableWidth, 0.0f);
    *availableHeight = ::g::Uno::Math::Max1(*availableHeight, 0.0f);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand) [instance] :762
void GridLayout::CalcFill(uType* __type, uObject* list, float available, float proportion, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcFill`1(Uno.Collections.IList<T>,float,float,bool)");
    ::g::Fuse::Layouts::DefinitionBase* ret10;
    float extraWidth = 0.0f;
    float colWidth = available / proportion;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret10), ret10);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) != 1)
            continue;

        float w = Snap((uPtr(c)->Extent() * colWidth) + extraWidth);
        extraWidth = extraWidth + ((c->Extent() * colWidth) - w);
        c->ActualExtent = w;
        c->HasActualExtent = true;
    }
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto) [instance] :782
void GridLayout::CalcInitialExtents(uType* __type, uObject* list, bool expand, float* used, bool* hasAuto)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcInitialExtents`1(Uno.Collections.IList<T>,bool,float&,bool&)");
    ::g::Fuse::Layouts::DefinitionBase* ret11;
    *hasAuto = false;
    *used = 0.0f;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret11), ret11);
        uPtr(c)->ActualExtent = 0.0f;
        c->HasActualExtent = false;

        if ((c != NULL) && (EffectiveMetric(c->Metric(), expand) == 0))
        {
            uPtr(c)->ActualExtent = uPtr(c)->Extent();
            c->HasActualExtent = true;
            *used = *used + c->Extent();
        }

        if (EffectiveMetric(c->Metric(), expand) == 2)
            *hasAuto = true;
    }
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing) [instance] :805
float GridLayout::CalcTotalExtentAndOffset(uType* __type, uObject* list, float effectiveCellSpacing)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcTotalExtentAndOffset`1(Uno.Collections.IList<T>,float)");
    ::g::Fuse::Layouts::DefinitionBase* ret12;
    float total = 0.0f;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        if (i > 0)
            total = total + effectiveCellSpacing;

        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret12), ret12);
        uPtr(c)->ActualOffset(total);
        total = total + c->ActualExtent;
    }

    return total;
}

// public float get_CellSpacing() [instance] :421
float GridLayout::CellSpacing()
{
    return _cellSpacing;
}

// public void set_CellSpacing(float value) [instance] :422
void GridLayout::CellSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_CellSpacing(float)");

    if (_cellSpacing != value)
    {
        _cellSpacing = value;
        Changed();
    }
}

// private void Changed() [instance] :680
void GridLayout::Changed()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "Changed()");
    InvalidateLayout();
}

// private void CheckMeasureSettings(bool hasX, bool hasY) [instance] :1003
void GridLayout::CheckMeasureSettings(bool hasX, bool hasY)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "CheckMeasureSettings(bool,bool)");
    bool bad = false;

    if ((HasDefaultMetric(::TYPES[16/*Fuse.Layouts.GridLayout.HasDefaultMetric<Fuse.Layouts.Row>*/], (uObject*)_rows) && !hasY) && (uPtr(_rows)->Count() > 1))
        bad = true;

    if ((HasDefaultMetric(::TYPES[17/*Fuse.Layouts.GridLayout.HasDefaultMetric<Fuse.Layouts.Column>*/], (uObject*)_columns) && !hasX) && (uPtr(_columns)->Count() > 1))
        bad = true;

    if (bad && !_checkMeasureWarning)
    {
        _checkMeasureWarning = true;
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"A grid is u...*/], this, ::STRINGS[1/*"/usr/local/...*/], 1014, ::STRINGS[2/*"CheckMeasur...*/], NULL);
    }
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder() [instance] :287
int32_t GridLayout::ChildOrder()
{
    return _childOrder;
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value) [instance] :288
void GridLayout::ChildOrder(int32_t value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_ChildOrder(Fuse.Layouts.GridChildOrder)");

    if (_childOrder != value)
    {
        _childOrder = value;
        Changed();
    }
}

// public int get_ColumnCount() [instance] :400
int32_t GridLayout::ColumnCount()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_ColumnCount()");
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(ColumnList()), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]));
}

// public void set_ColumnCount(int value) [instance] :401
void GridLayout::ColumnCount(int32_t value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_ColumnCount(int)");
    ModifyCount(::TYPES[31/*Fuse.Layouts.GridLayout.ModifyCount<Fuse.Layouts.Column>*/], (uObject*)_columns, value, _defaultColumn);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() [instance] :374
uObject* GridLayout::ColumnList()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_ColumnList()");
    return (uObject*)_columns;
}

// public string get_Columns() [instance] :378
uString* GridLayout::Columns()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_Columns()");
    return ::g::Fuse::Layouts::DefinitionBase::Serialize1(::TYPES[32/*Fuse.Layouts.DefinitionBase.Serialize<Fuse.Layouts.Column>*/], ColumnList());
}

// public void set_Columns(string value) [instance] :379
void GridLayout::Columns(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_Columns(string)");
    ::g::Fuse::Layouts::DefinitionBase::Parse1(::TYPES[33/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Column>*/], value, ColumnList());
    Changed();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :435
int32_t GridLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :436
void GridLayout::ContentAlignment(int32_t value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_ContentAlignment(Fuse.Elements.Alignment)");

    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        Changed();
    }
}

// public string get_DefaultColumn() [instance] :390
uString* GridLayout::DefaultColumn()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_DefaultColumn()");
    return uPtr(_defaultColumn)->Serialize();
}

// public void set_DefaultColumn(string value) [instance] :391
void GridLayout::DefaultColumn(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_DefaultColumn(string)");
    _defaultColumn = ((::g::Fuse::Layouts::Column*)::g::Fuse::Layouts::DefinitionBase::Parse(::TYPES[34/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Column>*/], value));
    ModifyDefault(::TYPES[35/*Fuse.Layouts.GridLayout.ModifyDefault<Fuse.Layouts.Column>*/], _columns, _defaultColumn);
}

// public string get_DefaultRow() [instance] :302
uString* GridLayout::DefaultRow()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_DefaultRow()");
    return uPtr(_defaultRow)->Serialize();
}

// public void set_DefaultRow(string value) [instance] :303
void GridLayout::DefaultRow(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_DefaultRow(string)");
    _defaultRow = ((::g::Fuse::Layouts::Row*)::g::Fuse::Layouts::DefinitionBase::Parse(::TYPES[36/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Row>*/], value));
    ModifyDefault(::TYPES[37/*Fuse.Layouts.GridLayout.ModifyDefault<Fuse.Layouts.Row>*/], _rows, _defaultRow);
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r) [instance] :685
void GridLayout::DefinitionAdded(::g::Fuse::Layouts::DefinitionBase* r)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "DefinitionAdded(Fuse.Layouts.DefinitionBase)");

    if (AddListener(r))
        Changed();
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r) [instance] :691
void GridLayout::DefinitionRemoved(::g::Fuse::Layouts::DefinitionBase* r)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "DefinitionRemoved(Fuse.Layouts.DefinitionBase)");

    if (RemoveListener(r))
        Changed();
}

// private float get_EffectiveCellSpacing() [instance] :736
float GridLayout::EffectiveCellSpacing()
{
    return SnapUp(CellSpacing());
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() [instance] :1029
int32_t GridLayout::EffectiveContentAlignment()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_EffectiveContentAlignment()");
    int32_t ca = ContentAlignment();

    if (ca == 0)
    {
        if (Container != NULL)
            ca = uPtr(Container)->Alignment();
        else
            ca = 5;
    }

    return ca;
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand) [instance] :743
int32_t GridLayout::EffectiveMetric(int32_t src, bool expand)
{
    if (src == 3)
        return expand ? 1 : 2;

    return src;
}

// private int GetActualColumn(Fuse.Visual elm) [instance] :640
int32_t GridLayout::GetActualColumn(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetActualColumn(Fuse.Visual)");
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualColumnProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private int GetActualRow(Fuse.Visual elm) [instance] :466
int32_t GridLayout::GetActualRow(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetActualRow(Fuse.Visual)");
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualRowProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY) [instance] :821
::g::Uno::Float2 GridLayout::GetAutoSize(::g::Fuse::Visual* child, int32_t x0, int32_t y0, bool expandX, bool expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetAutoSize(Fuse.Visual,int,int,bool,bool,bool&,bool&,bool&,bool&)");
    int32_t xs = GridLayout::GetColumnSpan(child);
    int32_t ys = GridLayout::GetRowSpan(child);
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);
    *knowX = true;
    *knowY = true;
    *autoX = xs == 1;
    *autoY = ys == 1;

    for (int32_t x = x0; x < (x0 + xs); x++)
    {
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if ((colData == NULL) || (EffectiveMetric(uPtr(colData)->Metric(), expandX) == 2))
            *knowX = false;
        else
        {
            *autoX = false;

            if (!uPtr(colData)->HasActualExtent)
                *knowX = false;
            else
                sz.X = (sz.X + uPtr(colData)->ActualExtent);
        }

        for (int32_t y = y0; y < (y0 + ys); y++)
        {
            ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

            if ((rowData == NULL) || (EffectiveMetric(uPtr(rowData)->Metric(), expandY) == 2))
                *knowY = false;
            else
            {
                *autoY = false;

                if (!uPtr(rowData)->HasActualExtent)
                    *knowY = false;
                else
                    sz.Y = (sz.Y + uPtr(rowData)->ActualExtent);
            }
        }
    }

    return sz;
}

// private Fuse.Layouts.Column GetColumnData(int column) [instance] :404
::g::Fuse::Layouts::Column* GridLayout::GetColumnData(int32_t column)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetColumnData(int)");
    ::g::Fuse::Layouts::Column* ret13;

    if ((column >= 0) && (column < uPtr(_columns)->Count()))
        return (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_columns), uCRef<int32_t>(column), &ret13), ret13);

    return NULL;
}

// private Fuse.Layouts.Row GetRowData(int row) [instance] :411
::g::Fuse::Layouts::Row* GridLayout::GetRowData(int32_t row)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetRowData(int)");
    ::g::Fuse::Layouts::Row* ret14;

    if ((row >= 0) && (row < uPtr(_rows)->Count()))
        return (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_rows), uCRef<int32_t>(row), &ret14), ret14);

    return NULL;
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand) [instance] :750
float GridLayout::GetTotalProportion(uType* __type, uObject* list, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "GetTotalProportion`1(Uno.Collections.IList<T>,bool)");
    ::g::Fuse::Layouts::DefinitionBase* ret15;
    float total = 0.0f;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret15), ret15);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) == 1)
            total = total + uPtr(c)->Extent();
    }

    return total;
}

// private bool HasDefaultMetric<T>(Uno.Collections.IList<T> list) [instance] :1018
bool GridLayout::HasDefaultMetric(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "HasDefaultMetric`1(Uno.Collections.IList<T>)");
    ::g::Fuse::Layouts::DefinitionBase* ret16;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret16), ret16))->Metric() == 3)
            return true;

    return false;
}

// private float2 Measure(Fuse.Visual container, Fuse.LayoutParams lp) [instance] :928
::g::Uno::Float2 GridLayout::Measure(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "Measure(Fuse.Visual,Fuse.LayoutParams)");
    float effectiveCellSpacing = EffectiveCellSpacing();
    CalcActualPositions(container);
    bool fillHorizontal = lp.HasX();
    bool fillVertical = lp.HasY();
    ::g::Uno::Float2 lpAvail = lp.GetAvailableSize();
    float availableWidth = lpAvail.X - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_columns)->Count() - 1));
    float availableHeight = lpAvail.Y - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_rows)->Count() - 1));
    bool expandWidth = fillHorizontal;
    bool expandHeight = fillVertical;
    bool hasAutoCol;
    float usedWidth;
    CalcInitialExtents(::TYPES[18/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth, &usedWidth, &hasAutoCol);
    bool hasAutoRow;
    float usedHeight;
    CalcInitialExtents(::TYPES[19/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight, &usedHeight, &hasAutoRow);
    availableWidth = ::g::Uno::Math::Max1(availableWidth - usedWidth, 0.0f);
    availableHeight = ::g::Uno::Math::Max1(availableHeight - usedHeight, 0.0f);
    float widthProportion = GetTotalProportion(::TYPES[20/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth);
    float heightProportion = GetTotalProportion(::TYPES[21/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight);
    bool hasFirstHorzSize = false;

    if (!hasAutoCol && fillHorizontal)
    {
        CalcFill(::TYPES[22/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);
        hasFirstHorzSize = true;
    }

    bool hasFirstVertSize = false;

    if (!hasAutoRow && fillVertical)
    {
        CalcFill(::TYPES[23/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);
        hasFirstVertSize = true;
    }

    CalcAuto(container, &availableWidth, &availableHeight, false, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);

    if (fillHorizontal && !hasFirstHorzSize)
        CalcFill(::TYPES[22/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);

    if (fillVertical && !hasFirstVertSize)
        CalcFill(::TYPES[23/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);

    CalcAuto(container, &availableWidth, &availableHeight, true, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);
    float totalWidth = CalcTotalExtentAndOffset(::TYPES[24/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/], (uObject*)_columns, effectiveCellSpacing);
    float totalHeight = CalcTotalExtentAndOffset(::TYPES[25/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/], (uObject*)_rows, effectiveCellSpacing);
    CheckMeasureSettings(lp.HasX(), lp.HasY());
    return ::g::Uno::Float2__New2(totalWidth, totalHeight);
}

// private void ModifyCount<T>(Uno.Collections.IList<T> list, int count, T primordial) [instance] :340
void GridLayout::ModifyCount(uType* __type, uObject* list, int32_t count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
        __type->Precalced(2/*Uno.Collections.IListExtensions.RemoveLast<T>*/),
        __type->Precalced(3/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "ModifyCount`1(Uno.Collections.IList<T>,int,T)");
    ::g::Fuse::Layouts::DefinitionBase* ret17;
    ::g::Fuse::Layouts::DefinitionBase* ret18;
    ::g::Fuse::Layouts::DefinitionBase* ret19;

    if (count == ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])))
        return;

    if (count < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[3/*"RowCount an...*/], this, ::STRINGS[1/*"/usr/local/...*/], 350, ::STRINGS[4/*"ModifyCount"*/], NULL);
        return;
    }

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) < count)
    {
        ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__type->U(0)->New();
        n->Copy(__types[1], primordial, 2);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(list), __types[0]), n);
    }

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) > count)
        ::g::Uno::Collections::IListExtensions__RemoveLast_fn(__types[2], list, &ret17);

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[3]), uCRef<int32_t>(i), &ret18), ret18))->IsImplied())
            uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[3]), uCRef<int32_t>(i), &ret19), ret19))->Creation = 2;

    Changed();
}

// private void ModifyDefault<T>(Uno.Collections.RootableList<T> list, T primordial) [instance] :310
void GridLayout::ModifyDefault(uType* __type, ::g::Uno::Collections::RootableList* list, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "ModifyDefault`1(Uno.Collections.RootableList<T>,T)");
    ::g::Fuse::Layouts::DefinitionBase* ret20;
    ::g::Fuse::Layouts::DefinitionBase* ret21;

    for (int32_t i = 0; i < uPtr(list)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(list), uCRef<int32_t>(i), &ret20), ret20))->UsesDefault())
        {
            ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__type->U(0)->New();
            n->Copy(__types[0], primordial, uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(list), uCRef<int32_t>(i), &ret21), ret21))->Creation);
            ::g::Uno::Collections::RootableList__ReplaceAt_fn(list, uCRef<int32_t>(i), n);
        }

    Changed();
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item) [instance] :705
bool GridLayout::RemoveListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "RemoveListener(Fuse.Layouts.DefinitionBase)");

    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->remove_Changed(uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// public int get_RowCount() [instance] :326
int32_t GridLayout::RowCount()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_RowCount()");
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(RowList()), ::TYPES[38/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]));
}

// public void set_RowCount(int value) [instance] :327
void GridLayout::RowCount(int32_t value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_RowCount(int)");
    ModifyCount(::TYPES[39/*Fuse.Layouts.GridLayout.ModifyCount<Fuse.Layouts.Row>*/], (uObject*)_rows, value, _defaultRow);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() [instance] :272
uObject* GridLayout::RowList()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_RowList()");
    return (uObject*)_rows;
}

// public string get_Rows() [instance] :276
uString* GridLayout::Rows()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_Rows()");
    return ::g::Fuse::Layouts::DefinitionBase::Serialize1(::TYPES[40/*Fuse.Layouts.DefinitionBase.Serialize<Fuse.Layouts.Row>*/], RowList());
}

// public void set_Rows(string value) [instance] :277
void GridLayout::Rows(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_Rows(string)");
    ::g::Fuse::Layouts::DefinitionBase::Parse1(::TYPES[41/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Row>*/], value, RowList());
    Changed();
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial) [instance] :622
void GridLayout::TrimPad(uType* __type, uObject* list, int32_t count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "TrimPad`1(Uno.Collections.IList<T>,int,T)");
    ::g::Fuse::Layouts::DefinitionBase* ret22;

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) < count)
    {
        ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__type->U(0)->New();
        n->Copy(__types[1], primordial, 3);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(list), __types[0]), n);
    }

    for (int32_t i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) - 1; i >= count; --i)
    {
        if (!uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[2]), uCRef<int32_t>(i), &ret22), ret22))->IsImplied())
            break;

        ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(list), __types[2]), i);
    }
}

// private int UserCount<T>(Uno.Collections.IList<T> list) [instance] :331
int32_t GridLayout::UserCount(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "UserCount`1(Uno.Collections.IList<T>)");
    ::g::Fuse::Layouts::DefinitionBase* ret23;
    int32_t c = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0]));

    while ((c > 0) && uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(list, __types[1]), uCRef<int32_t>(c - 1), &ret23), ret23))->IsImplied())
        c--;

    return c;
}

// public static int GetColumn(Fuse.Visual elm) [static] :506
int32_t GridLayout::GetColumn(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetColumn(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetColumnSpan(Fuse.Visual elm) [static] :661
int32_t GridLayout::GetColumnSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetColumnSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnSpanProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);

    return 1;
}

// public static int GetRow(Fuse.Visual elm) [static] :459
int32_t GridLayout::GetRow(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetRow(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetRowSpan(Fuse.Visual elm) [static] :487
int32_t GridLayout::GetRowSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetRowSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowSpanProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
    else
        return 1;
}

// public generated GridLayout New() [static] :269
GridLayout* GridLayout::New2()
{
    GridLayout* obj3 = (GridLayout*)uNew(GridLayout_typeof());
    obj3->ctor_2();
    return obj3;
}

// public static void ResetColumn(Fuse.Visual elm) [static] :649
void GridLayout::ResetColumn(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetColumn(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_columnProperty_);
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetColumnSpan(Fuse.Visual elm) [static] :671
void GridLayout::ResetColumnSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetColumnSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_columnSpanProperty_);
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetRow(Fuse.Visual elm) [static] :475
void GridLayout::ResetRow(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetRow(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_rowProperty_);
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetRowSpan(Fuse.Visual elm) [static] :494
void GridLayout::ResetRowSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetRowSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_rowSpanProperty_);
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetColumn(Fuse.Visual elm, int col) [static] :500
void GridLayout::SetColumn(::g::Fuse::Visual* elm, int32_t col)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetColumn(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_columnProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), col));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetColumnSpan(Fuse.Visual elm, int span) [static] :655
void GridLayout::SetColumnSpan(::g::Fuse::Visual* elm, int32_t span)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetColumnSpan(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_columnSpanProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), span));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetRow(Fuse.Visual elm, int row) [static] :453
void GridLayout::SetRow(::g::Fuse::Visual* elm, int32_t row)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetRow(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_rowProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), row));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetRowSpan(Fuse.Visual elm, int span) [static] :481
void GridLayout::SetRowSpan(::g::Fuse::Visual* elm, int32_t span)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetRowSpan(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_rowSpanProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), span));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/Layout.uno
// ---------------------------------------------------------------------------

// public abstract class Layout :11
// {
// static generated Layout() :11
static void Layout__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Layout::_fillPaddingProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Layout_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Only a single container is supported for Layout");
    ::STRINGS[6] = uString::Const("Removing an invalid container from Layout");
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[42] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[43] = ::g::Fuse::Controls::LayoutControl_typeof();
    ::TYPES[44] = ::g::Fuse::ISourceLocation_typeof();
    type->SetInterfaces(
        ::TYPES[44/*Fuse.ISourceLocation*/], offsetof(Layout_type, interface0));
    type->SetFields(2,
        ::TYPES[43/*Fuse.Controls.LayoutControl*/], offsetof(Layout, Container), 0,
        ::g::Uno::String_typeof(), offsetof(Layout, _SourceFileName), 0,
        ::g::Uno::Int_typeof(), offsetof(Layout, _SourceLineNumber), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Layout::_fillPaddingProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("GetFillPadding", NULL, (void*)Layout__GetFillPadding_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("ResetFillPadding", NULL, (void*)Layout__ResetFillPadding_fn, 0, true, uVoid_typeof(), 1, ::TYPES[4/*Fuse.Visual*/]),
        new uFunction("SetFillPadding", NULL, (void*)Layout__SetFillPadding_fn, 0, true, uVoid_typeof(), 2, ::TYPES[4/*Fuse.Visual*/], ::g::Uno::Bool_typeof()),
        new uFunction("get_SourceFileName", NULL, (void*)Layout__get_SourceFileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_SourceFileName", NULL, (void*)Layout__set_SourceFileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_SourceLineNumber", NULL, (void*)Layout__get_SourceLineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_SourceLineNumber", NULL, (void*)Layout__set_SourceLineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

Layout_type* Layout_typeof()
{
    static uSStrong<Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Layout);
    options.TypeSize = sizeof(Layout_type);
    type = (Layout_type*)uClassType::New("Fuse.Layouts.Layout", options);
    type->fp_build_ = Layout_build;
    type->fp_cctor_ = Layout__cctor__fn;
    type->fp_IsMarginBoxDependent = Layout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = Layout__OnRooted_fn;
    type->fp_OnUnrooted = Layout__OnUnrooted_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))Layout__get_SourceFileName_fn;
    return type;
}

// internal Layout() :16
void Layout__ctor_1_fn(Layout* __this)
{
    __this->ctor_1();
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align) :202
void Layout__AdjustAlignBox_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* sz, ::g::Uno::Float4* box, int32_t* align)
{
    Layout::AdjustAlignBox(node, *sz, *box, *align);
}

// protected bool AffectsLayout(Fuse.Node n) :77
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->AffectsLayout(n);
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp) :90
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* n, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp, bool* __retval)
{
    *__retval = __this->ArrangeMarginBoxSpecial(n, *padding, *lp);
}

// private Fuse.ISourceLocation Fuse.ISourceLocation.get_SourceNearest() :234
void Layout__FuseISourceLocationget_SourceNearest_fn(Layout* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Layouts.Layout", "Fuse.ISourceLocation.get_SourceNearest()");

    if (::g::Uno::String::op_Inequality(__this->SourceFileName(), NULL))
        return *__retval = (uObject*)__this, void();

    if (__this->Container != NULL)
        return *__retval = ::g::Fuse::ISourceLocation::SourceNearest(uInterface(uPtr((uObject*)__this->Container), ::TYPES[44/*Fuse.ISourceLocation*/])), void();

    return *__retval = NULL, void();
}

// public static bool GetFillPadding(Fuse.Visual n) :28
void Layout__GetFillPadding_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Layout::GetFillPadding(n);
}

// private static Fuse.Controls.LayoutControl GetLayoutControl(Fuse.Visual elm) :175
void Layout__GetLayoutControl_fn(::g::Fuse::Visual* elm, ::g::Fuse::Controls::LayoutControl** __retval)
{
    *__retval = Layout::GetLayoutControl(elm);
}

// protected static void InvalidateAncestorLayout(Fuse.Visual child) :124
void Layout__InvalidateAncestorLayout_fn(::g::Fuse::Visual* child)
{
    Layout::InvalidateAncestorLayout(child);
}

// protected void InvalidateLayout() :137
void Layout__InvalidateLayout_fn(Layout* __this)
{
    __this->InvalidateLayout();
}

// private static void InvalidateLayout(Fuse.Visual elm) :187
void Layout__InvalidateLayout1_fn(::g::Fuse::Visual* elm)
{
    Layout::InvalidateLayout1(elm);
}

// internal virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :131
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    return *__retval = 4, void();
}

// protected virtual void OnRooted() :55
void Layout__OnRooted_fn(Layout* __this)
{
}

// protected virtual void OnUnrooted() :67
void Layout__OnUnrooted_fn(Layout* __this)
{
}

// public static void ResetFillPadding(Fuse.Visual n) :39
void Layout__ResetFillPadding_fn(::g::Fuse::Visual* n)
{
    Layout::ResetFillPadding(n);
}

// internal void Rooted(Fuse.Controls.LayoutControl element) :47
void Layout__Rooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Rooted(element);
}

// public static void SetFillPadding(Fuse.Visual n, bool f) :21
void Layout__SetFillPadding_fn(::g::Fuse::Visual* n, bool* f)
{
    Layout::SetFillPadding(n, *f);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align) :215
void Layout__SimpleOff_fn(float* sz, ::g::Uno::Float2* range, int32_t* align, float* __retval)
{
    *__retval = Layout::SimpleOff(*sz, *range, *align);
}

// protected float Snap(float p) :170
void Layout__Snap_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 Snap(float2 p) :163
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap1(*p);
}

// protected bool get_SnapToPixels() :145
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// protected float SnapUp(float p) :158
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// protected float2 SnapUp(float2 p) :151
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp1(*p);
}

// public generated string get_SourceFileName() :230
void Layout__get_SourceFileName_fn(Layout* __this, uString** __retval)
{
    *__retval = __this->SourceFileName();
}

// public generated void set_SourceFileName(string value) :230
void Layout__set_SourceFileName_fn(Layout* __this, uString* value)
{
    __this->SourceFileName(value);
}

// public generated int get_SourceLineNumber() :227
void Layout__get_SourceLineNumber_fn(Layout* __this, int32_t* __retval)
{
    *__retval = __this->SourceLineNumber();
}

// public generated void set_SourceLineNumber(int value) :227
void Layout__set_SourceLineNumber_fn(Layout* __this, int32_t* value)
{
    __this->SourceLineNumber(*value);
}

// internal void Unrooted(Fuse.Controls.LayoutControl element) :59
void Layout__Unrooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Unrooted(element);
}

uSStrong< ::g::Fuse::PropertyHandle*> Layout::_fillPaddingProperty_;

// internal Layout() [instance] :16
void Layout::ctor_1()
{
    ctor_();
}

// protected bool AffectsLayout(Fuse.Node n) [instance] :77
bool Layout::AffectsLayout(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Layouts.Layout", "AffectsLayout(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);
    return (v != NULL) && ((uPtr(v)->LayoutRole() == 0) || (uPtr(v)->LayoutRole() == 1));
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp) [instance] :90
bool Layout::ArrangeMarginBoxSpecial(::g::Fuse::Node* n, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.Layout", "ArrangeMarginBoxSpecial(Fuse.Node,float4,Fuse.LayoutParams)");
    ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (e == NULL)
        return false;

    int32_t lr = uPtr(e)->LayoutRole();

    if (lr == 3)
    {
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(e, ::TYPES[42/*Fuse.Elements.Element*/]);

        if (e != NULL)
            uPtr(elm)->RequestLayout();

        return true;
    }

    if (lr == 2)
    {
        bool b = Layout::GetFillPadding(e);
        ::g::Uno::Float2 p = b ? ::g::Uno::Float2__New1(0.0f) : ::g::Uno::Float2__New2(padding.X, padding.Y);
        ::g::Uno::Float2 s = b ? lp.Size() : ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp.Size(), ::g::Uno::Float2__New2(padding.X, padding.Y)), ::g::Uno::Float2__New2(padding.Z, padding.W));
        ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
        nlp.SetSize(s, true, true);
        uPtr(e)->ArrangeMarginBox(p, nlp);
        return true;
    }

    return false;
}

// protected void InvalidateLayout() [instance] :137
void Layout::InvalidateLayout()
{
    uStackFrame __("Fuse.Layouts.Layout", "InvalidateLayout()");

    if (Container != NULL)
        uPtr(Container)->InvalidateLayout(2);
}

// internal void Rooted(Fuse.Controls.LayoutControl element) [instance] :47
void Layout::Rooted(::g::Fuse::Controls::LayoutControl* element)
{
    uStackFrame __("Fuse.Layouts.Layout", "Rooted(Fuse.Controls.LayoutControl)");

    if (Container != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Only a sing...*/]));

    Container = element;
    OnRooted();
}

// protected float Snap(float p) [instance] :170
float Layout::Snap(float p)
{
    uStackFrame __("Fuse.Layouts.Layout", "Snap(float)");
    return Snap1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 Snap(float2 p) [instance] :163
::g::Uno::Float2 Layout::Snap1(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Layouts.Layout", "Snap(float2)");

    if (SnapToPixels())
        return uPtr(Container)->InternSnap(p);

    return p;
}

// protected bool get_SnapToPixels() [instance] :145
bool Layout::SnapToPixels()
{
    uStackFrame __("Fuse.Layouts.Layout", "get_SnapToPixels()");
    return (Container != NULL) && uPtr(Container)->SnapToPixels();
}

// protected float SnapUp(float p) [instance] :158
float Layout::SnapUp(float p)
{
    uStackFrame __("Fuse.Layouts.Layout", "SnapUp(float)");
    return SnapUp1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 SnapUp(float2 p) [instance] :151
::g::Uno::Float2 Layout::SnapUp1(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Layouts.Layout", "SnapUp(float2)");

    if (SnapToPixels())
        return uPtr(Container)->InternSnapUp(p);

    return p;
}

// public generated string get_SourceFileName() [instance] :230
uString* Layout::SourceFileName()
{
    return _SourceFileName;
}

// public generated void set_SourceFileName(string value) [instance] :230
void Layout::SourceFileName(uString* value)
{
    _SourceFileName = value;
}

// public generated int get_SourceLineNumber() [instance] :227
int32_t Layout::SourceLineNumber()
{
    return _SourceLineNumber;
}

// public generated void set_SourceLineNumber(int value) [instance] :227
void Layout::SourceLineNumber(int32_t value)
{
    _SourceLineNumber = value;
}

// internal void Unrooted(Fuse.Controls.LayoutControl element) [instance] :59
void Layout::Unrooted(::g::Fuse::Controls::LayoutControl* element)
{
    uStackFrame __("Fuse.Layouts.Layout", "Unrooted(Fuse.Controls.LayoutControl)");

    if (element != Container)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"Removing an...*/]));

    OnUnrooted();
    Container = NULL;
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align) [static] :202
void Layout::AdjustAlignBox(::g::Fuse::Visual* node, ::g::Uno::Float2 sz, ::g::Uno::Float4 box, int32_t align)
{
    uStackFrame __("Fuse.Layouts.Layout", "AdjustAlignBox(Fuse.Visual,float2,float4,Fuse.Elements.Alignment)");
    Layout_typeof()->Init();
    ::g::Uno::Float2 pos = uPtr(node)->MarginBoxPosition();
    int32_t ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(align);

    if (ha != 0)
        pos.X = Layout::SimpleOff(sz.X, ::g::Uno::Float2__New2(box.X, box.Z), ha);

    int32_t va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(align);

    if (va != 0)
        pos.Y = Layout::SimpleOff(sz.Y, ::g::Uno::Float2__New2(box.Y, box.W), va);

    node->AdjustMarginBoxPosition(pos);
}

// public static bool GetFillPadding(Fuse.Visual n) [static] :28
bool Layout::GetFillPadding(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Layouts.Layout", "GetFillPadding(Fuse.Visual)");
    Layout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Layout::_fillPaddingProperty_, &v))
        return uUnbox<bool>(::g::Uno::Bool_typeof(), v);

    return (uPtr(n)->Layer() == 1) || (uPtr(n)->Layer() == 0);
}

// private static Fuse.Controls.LayoutControl GetLayoutControl(Fuse.Visual elm) [static] :175
::g::Fuse::Controls::LayoutControl* Layout::GetLayoutControl(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.Layout", "GetLayoutControl(Fuse.Visual)");
    Layout_typeof()->Init();

    while (elm != NULL)
    {
        if (uIs(elm, ::TYPES[43/*Fuse.Controls.LayoutControl*/]))
            return uAs< ::g::Fuse::Controls::LayoutControl*>(elm, ::TYPES[43/*Fuse.Controls.LayoutControl*/]);

        elm = uPtr(elm)->Parent();
    }

    return NULL;
}

// protected static void InvalidateAncestorLayout(Fuse.Visual child) [static] :124
void Layout::InvalidateAncestorLayout(::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.Layouts.Layout", "InvalidateAncestorLayout(Fuse.Visual)");
    Layout_typeof()->Init();

    if (uPtr(child)->Parent() != NULL)
        uPtr(uPtr(child)->Parent())->InvalidateLayout(2);
}

// private static void InvalidateLayout(Fuse.Visual elm) [static] :187
void Layout::InvalidateLayout1(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.Layout", "InvalidateLayout(Fuse.Visual)");
    Layout_typeof()->Init();
    ::g::Fuse::Controls::LayoutControl* p = Layout::GetLayoutControl(elm);

    if (p != NULL)
        uPtr(p)->InvalidateLayout(2);
}

// public static void ResetFillPadding(Fuse.Visual n) [static] :39
void Layout::ResetFillPadding(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Layouts.Layout", "ResetFillPadding(Fuse.Visual)");
    Layout_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(Layout::_fillPaddingProperty_);
    Layout::InvalidateLayout1(n);
}

// public static void SetFillPadding(Fuse.Visual n, bool f) [static] :21
void Layout::SetFillPadding(::g::Fuse::Visual* n, bool f)
{
    uStackFrame __("Fuse.Layouts.Layout", "SetFillPadding(Fuse.Visual,bool)");
    Layout_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Layout::_fillPaddingProperty_, uBox(::g::Uno::Bool_typeof(), f));
    Layout::InvalidateLayout1(n);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align) [static] :215
float Layout::SimpleOff(float sz, ::g::Uno::Float2 range, int32_t align)
{
    uStackFrame __("Fuse.Layouts.Layout", "SimpleOff(float,float2,Fuse.Elements.SimpleAlignment)");
    Layout_typeof()->Init();

    if (align == 1)
        return ((range.Item(1) + range.Item(0)) / 2.0f) - (sz / 2.0f);
    else if (align == 2)
        return range.Item(1) - sz;
    else
        return range.Item(0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/Layout.uno
// ---------------------------------------------------------------------------

// public static class Layouts :245
// {
// static generated Layouts() :245
static void Layouts__cctor__fn(uType* __type)
{
    Layouts::Default_ = ::g::Fuse::Layouts::DefaultLayout::New2();
}

static void Layouts_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Layouts::Layout_typeof(), (uintptr_t)&Layouts::Default_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Default", 0));
}

uClassType* Layouts_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Layouts.Layouts", options);
    type->fp_build_ = Layouts_build;
    type->fp_cctor_ = Layouts__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Layouts::Layout*> Layouts::Default_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public enum Metric :189
uEnumType* Metric_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Metric", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Absolute", 0LL,
        "Proportion", 1LL,
        "Auto", 2LL,
        "Default", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/StackLayout.uno
// --------------------------------------------------------------------------------

// public enum Orientation :12
uEnumType* Orientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Orientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Horizontal", 0LL,
        "Vertical", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno
// -------------------------------------------------------------------------------

// public sealed class Row :238
// {
static void Row_build(uType* type)
{
    type->SetFields(9);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Height", NULL, (void*)Row__get_Height_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Height", NULL, (void*)Row__set_Height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_HeightMetric", NULL, (void*)Row__get_HeightMetric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_HeightMetric", NULL, (void*)Row__set_HeightMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()),
        new uFunction(".ctor", NULL, (void*)Row__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Row__New3_fn, 0, true, type, 2, ::g::Uno::Float_typeof(), ::g::Fuse::Layouts::Metric_typeof()));
}

uType* Row_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(Row);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Row", options);
    type->fp_build_ = Row_build;
    type->fp_ctor_ = (void*)Row__New2_fn;
    return type;
}

// public Row() :240
void Row__ctor_4_fn(Row* __this)
{
    __this->ctor_4();
}

// public Row(float height, Fuse.Layouts.Metric metric) :242
void Row__ctor_5_fn(Row* __this, float* height, int32_t* metric)
{
    __this->ctor_5(*height, *metric);
}

// private Row(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) :245
void Row__ctor_6_fn(Row* __this, Row* copy, int32_t* creation)
{
    __this->ctor_6(copy, *creation);
}

// public float get_Height() :256
void Row__get_Height_fn(Row* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :257
void Row__set_Height_fn(Row* __this, float* value)
{
    __this->Height(*value);
}

// public Fuse.Layouts.Metric get_HeightMetric() :250
void Row__get_HeightMetric_fn(Row* __this, int32_t* __retval)
{
    *__retval = __this->HeightMetric();
}

// public void set_HeightMetric(Fuse.Layouts.Metric value) :251
void Row__set_HeightMetric_fn(Row* __this, int32_t* value)
{
    __this->HeightMetric(*value);
}

// public Row New() :240
void Row__New2_fn(Row** __retval)
{
    *__retval = Row::New2();
}

// public Row New(float height, Fuse.Layouts.Metric metric) :242
void Row__New3_fn(float* height, int32_t* metric, Row** __retval)
{
    *__retval = Row::New3(*height, *metric);
}

// private Row New(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) :245
void Row__New4_fn(Row* copy, int32_t* creation, Row** __retval)
{
    *__retval = Row::New4(copy, *creation);
}

// public Row() [instance] :240
void Row::ctor_4()
{
    ctor_1();
}

// public Row(float height, Fuse.Layouts.Metric metric) [instance] :242
void Row::ctor_5(float height, int32_t metric)
{
    ctor_2(height, metric);
}

// private Row(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :245
void Row::ctor_6(Row* copy, int32_t creation)
{
    uStackFrame __("Fuse.Layouts.Row", ".ctor(Fuse.Layouts.Row,Fuse.Layouts.DefinitionBase.CreationType)");
    ctor_3(copy, creation);
}

// public float get_Height() [instance] :256
float Row::Height()
{
    return Extent();
}

// public void set_Height(float value) [instance] :257
void Row::Height(float value)
{
    uStackFrame __("Fuse.Layouts.Row", "set_Height(float)");
    Extent(value);
}

// public Fuse.Layouts.Metric get_HeightMetric() [instance] :250
int32_t Row::HeightMetric()
{
    return Metric();
}

// public void set_HeightMetric(Fuse.Layouts.Metric value) [instance] :251
void Row::HeightMetric(int32_t value)
{
    uStackFrame __("Fuse.Layouts.Row", "set_HeightMetric(Fuse.Layouts.Metric)");
    Metric(value);
}

// public Row New() [static] :240
Row* Row::New2()
{
    Row* obj1 = (Row*)uNew(Row_typeof());
    obj1->ctor_4();
    return obj1;
}

// public Row New(float height, Fuse.Layouts.Metric metric) [static] :242
Row* Row::New3(float height, int32_t metric)
{
    Row* obj2 = (Row*)uNew(Row_typeof());
    obj2->ctor_5(height, metric);
    return obj2;
}

// private Row New(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) [static] :245
Row* Row::New4(Row* copy, int32_t creation)
{
    Row* obj3 = (Row*)uNew(Row_typeof());
    obj3->ctor_6(copy, creation);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/StackLayout.uno
// --------------------------------------------------------------------------------

// public sealed class StackLayout :24
// {
static void StackLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(StackLayout, _orientation), 0,
        ::g::Uno::Float_typeof(), offsetof(StackLayout, _itemSpacing), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(StackLayout, _contentAlignment), 0,
        ::g::Fuse::Layouts::StackLayoutMode_typeof(), offsetof(StackLayout, _mode), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_ContentAlignment", NULL, (void*)StackLayout__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)StackLayout__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_ItemSpacing", NULL, (void*)StackLayout__get_ItemSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacing", NULL, (void*)StackLayout__set_ItemSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Mode", NULL, (void*)StackLayout__get_Mode_fn, 0, false, ::g::Fuse::Layouts::StackLayoutMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)StackLayout__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::StackLayoutMode_typeof()),
        new uFunction(".ctor", NULL, (void*)StackLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)StackLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)StackLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()),
        new uFunction("ResetOrientation", NULL, (void*)StackLayout__ResetOrientation_fn, 0, false, uVoid_typeof(), 0));
}

::g::Fuse::Layouts::Layout_type* StackLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StackLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.StackLayout", options);
    type->fp_build_ = StackLayout_build;
    type->fp_ctor_ = (void*)StackLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))StackLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StackLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated StackLayout() :24
void StackLayout__ctor_2_fn(StackLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :185
void StackLayout__ArrangePaddingBox_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    float d = 0.0f;
    int32_t orientation = __this->Orientation();
    ::g::Uno::Float2 paddingOffset = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 pad = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize(pad);
    ::g::Uno::Float2 axis;

    if (orientation == 1)
    {
        nlp.RetainAxesXY(true, false);
        axis = ::g::Uno::Float2__New2(0.0f, 1.0f);
    }
    else
    {
        nlp.RetainAxesXY(false, true);
        axis = ::g::Uno::Float2__New2(1.0f, 0.0f);
    }

    float effectiveSpacing = __this->EffectiveItemSpacing();
    bool hasItem = false;

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        if (hasItem)
            d = d + effectiveSpacing;

        ::g::Uno::Float2 cds = uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(axis, d), paddingOffset), nlp);
        d = d + ::g::Uno::Vector::Dot(cds, axis);
        hasItem = true;
    }

    int32_t sa = __this->EffectiveContentAlignment();

    if (sa != 0)
    {
        float off;

        if (sa == 2)
            off = ::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) - d;
        else
            off = (::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) / 2.0f) - (d / 2.0f);

        for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != NULL; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            if (__this->AffectsLayout(e))
            {
                ::g::Uno::Float2 old = uPtr(e)->MarginBoxPosition();
                e->AdjustMarginBoxPosition(::g::Uno::Float2__op_Addition2(old, ::g::Uno::Float2__op_Multiply1(axis, off)));
            }
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() :64
void StackLayout__get_ContentAlignment_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :65
void StackLayout__set_ContentAlignment_fn(StackLayout* __this, int32_t* value)
{
    __this->ContentAlignment(*value);
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() :172
void StackLayout__get_EffectiveContentAlignment_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private float get_EffectiveItemSpacing() :129
void StackLayout__get_EffectiveItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveItemSpacing();
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :90
void StackLayout__GetContentSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "GetContentSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    int32_t orientation = __this->Orientation();
    bool vert = orientation == 1;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RetainAxesXY(vert, !vert);
    ::g::Uno::Float2 size = __this->GetElementsSize(container, nlp);

    if (__this->Mode() == 1)
    {
        bool recalc = false;

        if (orientation == 1)
        {
            if (!nlp.HasX())
            {
                nlp.SetX(size.X);
                recalc = true;
            }
        }
        else
        {
            if (!nlp.HasY())
            {
                nlp.SetY(size.Y);
                recalc = true;
            }
        }

        if (recalc)
            size = __this->GetElementsSize(container, nlp);
    }

    return *__retval = size, void();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) :136
void StackLayout__GetElementsSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(container, *lp);
}

// public float get_ItemSpacing() :50
void StackLayout__get_ItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :51
void StackLayout__set_ItemSpacing_fn(StackLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// public Fuse.Layouts.StackLayoutMode get_Mode() :78
void StackLayout__get_Mode_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) :79
void StackLayout__set_Mode_fn(StackLayout* __this, int32_t* value)
{
    __this->Mode(*value);
}

// public generated StackLayout New() :24
void StackLayout__New2_fn(StackLayout** __retval)
{
    *__retval = StackLayout::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :30
void StackLayout__get_Orientation_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :31
void StackLayout__set_Orientation_fn(StackLayout* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public void ResetOrientation() :41
void StackLayout__ResetOrientation_fn(StackLayout* __this)
{
    __this->ResetOrientation();
}

// public generated StackLayout() [instance] :24
void StackLayout::ctor_2()
{
    _orientation = 1;
    _itemSpacing = 0.0f;
    ctor_1();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :64
int32_t StackLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :65
void StackLayout::ContentAlignment(int32_t value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_ContentAlignment(Fuse.Elements.Alignment)");

    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        InvalidateLayout();
    }
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() [instance] :172
int32_t StackLayout::EffectiveContentAlignment()
{
    uStackFrame __("Fuse.Layouts.StackLayout", "get_EffectiveContentAlignment()");
    int32_t ca = ContentAlignment();

    if ((ca == 0) && (Container != NULL))
        ca = uPtr(Container)->Alignment();

    if (Orientation() == 1)
        return ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(ca);
    else
        return ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(ca);
}

// private float get_EffectiveItemSpacing() [instance] :129
float StackLayout::EffectiveItemSpacing()
{
    uStackFrame __("Fuse.Layouts.StackLayout", "get_EffectiveItemSpacing()");
    return SnapUp(ItemSpacing());
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) [instance] :136
::g::Uno::Float2 StackLayout::GetElementsSize(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "GetElementsSize(Fuse.Visual,Fuse.LayoutParams)");
    int32_t orientation = Orientation();
    ::g::Uno::Float2 desiredSize = ::g::Uno::Float2__New1(0.0f);
    float effectiveSpacing = EffectiveItemSpacing();
    bool firstItem = true;

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != NULL; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(c))
            continue;

        float spacing = effectiveSpacing;

        if (firstItem)
        {
            spacing = 0.0f;
            firstItem = false;
        }

        ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(lp);

        if (orientation == 0)
        {
            desiredSize.X = (desiredSize.X + (cds.X + spacing));
            desiredSize.Y = ::g::Uno::Math::Max1(desiredSize.Y, cds.Y);
        }
        else
        {
            desiredSize.X = ::g::Uno::Math::Max1(desiredSize.X, cds.X);
            desiredSize.Y = (desiredSize.Y + (cds.Y + spacing));
        }
    }

    return desiredSize;
}

// public float get_ItemSpacing() [instance] :50
float StackLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance] :51
void StackLayout::ItemSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_ItemSpacing(float)");

    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.StackLayoutMode get_Mode() [instance] :78
int32_t StackLayout::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) [instance] :79
void StackLayout::Mode(int32_t value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_Mode(Fuse.Layouts.StackLayoutMode)");

    if (_mode != value)
    {
        _mode = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :30
int32_t StackLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :31
void StackLayout::Orientation(int32_t value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_Orientation(Fuse.Layouts.Orientation)");

    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public void ResetOrientation() [instance] :41
void StackLayout::ResetOrientation()
{
    uStackFrame __("Fuse.Layouts.StackLayout", "ResetOrientation()");
    _orientation = 1;
    InvalidateLayout();
}

// public generated StackLayout New() [static] :24
StackLayout* StackLayout::New2()
{
    StackLayout* obj1 = (StackLayout*)uNew(StackLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/StackLayout.uno
// --------------------------------------------------------------------------------

// public enum StackLayoutMode :18
uEnumType* StackLayoutMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.StackLayoutMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Standard", 0LL,
        "TwoPass", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/WrapLayout.uno
// -------------------------------------------------------------------------------

// public sealed class WrapLayout :17
// {
static void WrapLayout_build(uType* type)
{
    ::TYPES[45] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[46] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[47] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[3] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(5,
        ::g::Uno::Bool_typeof(), offsetof(WrapLayout, _hasItemHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(WrapLayout, _itemHeight), 0,
        ::g::Uno::Bool_typeof(), offsetof(WrapLayout, _hasItemWidth), 0,
        ::g::Uno::Float_typeof(), offsetof(WrapLayout, _itemWidth), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(WrapLayout, _orientation), 0,
        ::g::Fuse::Layouts::FlowDirection_typeof(), offsetof(WrapLayout, _flowDirection), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(WrapLayout, _rowAlignment), 0,
        ::g::Uno::String_typeof(), offsetof(WrapLayout, _ID), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_FlowDirection", NULL, (void*)WrapLayout__get_FlowDirection_fn, 0, false, ::g::Fuse::Layouts::FlowDirection_typeof(), 0),
        new uFunction("set_FlowDirection", NULL, (void*)WrapLayout__set_FlowDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::FlowDirection_typeof()),
        new uFunction("get_ID", NULL, (void*)WrapLayout__get_ID_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_ID", NULL, (void*)WrapLayout__set_ID_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ItemHeight", NULL, (void*)WrapLayout__get_ItemHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemHeight", NULL, (void*)WrapLayout__set_ItemHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemWidth", NULL, (void*)WrapLayout__get_ItemWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemWidth", NULL, (void*)WrapLayout__set_ItemWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WrapLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)WrapLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)WrapLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()),
        new uFunction("get_RowAlignment", NULL, (void*)WrapLayout__get_RowAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_RowAlignment", NULL, (void*)WrapLayout__set_RowAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()));
}

::g::Fuse::Layouts::Layout_type* WrapLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WrapLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.WrapLayout", options);
    type->fp_build_ = WrapLayout_build;
    type->fp_ctor_ = (void*)WrapLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))WrapLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))WrapLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated WrapLayout() :17
void WrapLayout__ctor_2_fn(WrapLayout* __this)
{
    __this->ctor_2();
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, bool doArrange, [float4 padding]) :115
void WrapLayout__Arrange_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(container, *lp, *doArrange, *padding);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp) :107
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "ArrangePaddingBox(Fuse.Visual,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    __this->Arrange(container, lp_, true, padding_);
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() :73
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int32_t* __retval)
{
    *__retval = __this->FlowDirection();
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) :74
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int32_t* value)
{
    __this->FlowDirection(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp) :100
void WrapLayout__GetContentSize_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "GetContentSize(Fuse.Visual,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Arrange(container, lp_, false, ::g::Uno::Float4__New1(0.0f)), void();
}

// public generated string get_ID() :98
void WrapLayout__get_ID_fn(WrapLayout* __this, uString** __retval)
{
    *__retval = __this->ID();
}

// public generated void set_ID(string value) :98
void WrapLayout__set_ID_fn(WrapLayout* __this, uString* value)
{
    __this->ID(value);
}

// private bool get_IsVert() :67
void WrapLayout__get_IsVert_fn(WrapLayout* __this, bool* __retval)
{
    *__retval = __this->IsVert();
}

// public float get_ItemHeight() :23
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemHeight();
}

// public void set_ItemHeight(float value) :24
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value)
{
    __this->ItemHeight(*value);
}

// public float get_ItemWidth() :39
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemWidth();
}

// public void set_ItemWidth(float value) :40
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value)
{
    __this->ItemWidth(*value);
}

// public generated WrapLayout New() :17
void WrapLayout__New2_fn(WrapLayout** __retval)
{
    *__retval = WrapLayout::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :54
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :55
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public Fuse.Elements.Alignment get_RowAlignment() :87
void WrapLayout__get_RowAlignment_fn(WrapLayout* __this, int32_t* __retval)
{
    *__retval = __this->RowAlignment();
}

// public void set_RowAlignment(Fuse.Elements.Alignment value) :88
void WrapLayout__set_RowAlignment_fn(WrapLayout* __this, int32_t* value)
{
    __this->RowAlignment(*value);
}

// public generated WrapLayout() [instance] :17
void WrapLayout::ctor_2()
{
    ctor_1();
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, bool doArrange, [float4 padding]) [instance] :115
::g::Uno::Float2 WrapLayout::Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "Arrange(Fuse.Visual,Fuse.LayoutParams,bool,[float4])");
    ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
    nlp.RemoveSize1(padding);
    bool hasX, hasY;
    ::g::Uno::Float2 lpav = nlp.GetAvailableSize1(&hasX, &hasY);
    float majorAvail = IsVert() ? hasY ? lpav.Y : FLT_INF : hasX ? lpav.X : FLT_INF;
    float minorMaxSize = 0.0f;
    float minorUsed = 0.0f;
    float majorUsed = 0.0f;
    float majorMaxUsed = 0.0f;
    ::g::Fuse::LayoutParams clp = nlp.Clone();
    clp.RetainXY(false, false);
    clp.ConstrainMax(lpav, hasX, hasY);

    if (_hasItemWidth)
        clp.SetX(ItemWidth());

    if (_hasItemHeight)
        clp.SetY(ItemHeight());

    uArray* placements = uArray::New(::TYPES[45/*float4[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(container)->Children()), ::TYPES[46/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* minorSizes = uArray::New(::TYPES[2/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[46/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* elementOnRow = uArray::New(::TYPES[47/*int[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[46/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* majorRest = uArray::New(::TYPES[2/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[46/*Uno.Collections.ICollection<Fuse.Node>*/])));
    int32_t majorStart = 0;
    int32_t currentRow = 0;
    int32_t i = 0;

    for (::g::Fuse::Node* n = (::g::Fuse::Node*)container->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]); n != NULL; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), i++)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

        if (!AffectsLayout(e))
            continue;

        ::g::Uno::Float2 eSize = uPtr(e)->GetMarginSize(clp);
        eSize = ::g::Uno::Float2__New2(_hasItemWidth ? ItemWidth() : eSize.X, _hasItemHeight ? ItemHeight() : eSize.Y);
        float cmajorSize = IsVert() ? eSize.Y : eSize.X;
        float cminorSize = IsVert() ? eSize.X : eSize.Y;
        uPtr(placements)->Item< ::g::Uno::Float4>(i).Z = cmajorSize;
        placements->Item< ::g::Uno::Float4>(i).W = cminorSize;

        if (((majorUsed + cmajorSize) > majorAvail) && (majorUsed > 0.0f))
        {
            for (int32_t j = majorStart; j < i; ++j)
                uPtr(minorSizes)->Item<float>(j) = minorMaxSize;

            majorMaxUsed = ::g::Uno::Math::Max1(majorMaxUsed, majorUsed);
            minorUsed = minorUsed + minorMaxSize;
            minorMaxSize = 0.0f;
            majorUsed = 0.0f;
            majorStart = i;
            currentRow++;
        }

        placements->Item< ::g::Uno::Float4>(i).X = majorUsed;
        placements->Item< ::g::Uno::Float4>(i).Y = minorUsed;
        minorMaxSize = ::g::Uno::Math::Max1(minorMaxSize, cminorSize);
        majorUsed = majorUsed + cmajorSize;
        uPtr(elementOnRow)->Item<int32_t>(i) = currentRow;
        uPtr(majorRest)->Item<float>(currentRow) = majorAvail - majorUsed;
    }

    for (int32_t j1 = majorStart; j1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[46/*Uno.Collections.ICollection<Fuse.Node>*/])); ++j1)
        uPtr(minorSizes)->Item<float>(j1) = minorMaxSize;

    majorMaxUsed = ::g::Uno::Math::Max1(majorMaxUsed, majorUsed);
    minorUsed = minorUsed + minorMaxSize;

    if (doArrange)
    {
        int32_t saMin = IsVert() ? ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlignOptional(RowAlignment()) : ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlignOptional(RowAlignment());
        int32_t saMaj = IsVert() ? ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlignOptional(RowAlignment()) : ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlignOptional(RowAlignment());
        ::g::Fuse::LayoutParams elp = lp.CloneAndDerive();
        i = 0;

        for (::g::Fuse::Node* n1 = (::g::Fuse::Node*)uPtr(container)->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]); n1 != NULL; n1 = (::g::Fuse::Node*)uPtr(n1)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), i++)
        {
            ::g::Fuse::Visual* element = uAs< ::g::Fuse::Visual*>(n1, ::TYPES[4/*Fuse.Visual*/]);

            if (element == NULL)
                continue;

            if (ArrangeMarginBoxSpecial(element, padding, lp))
                continue;

            ::g::Uno::Float4 placement = uPtr(placements)->Item< ::g::Uno::Float4>(i);

            switch (saMin)
            {
                case 1:
                    break;
                case 3:
                {
                    placement.Y = (placement.Y + (uPtr(minorSizes)->Item<float>(i) - placement.W));
                    break;
                }
                case 2:
                {
                    placement.Y = (placement.Y + ((uPtr(minorSizes)->Item<float>(i) - placement.W) / 2.0f));
                    break;
                }
                case 0:
                {
                    placement.W = uPtr(minorSizes)->Item<float>(i);
                    break;
                }
            }

            switch (saMaj)
            {
                case 1:
                    break;
                case 3:
                {
                    placement.X = (placement.X + uPtr(majorRest)->Item<float>(uPtr(elementOnRow)->Item<int32_t>(i)));
                    break;
                }
                case 2:
                {
                    placement.X = (placement.X + (uPtr(majorRest)->Item<float>(uPtr(elementOnRow)->Item<int32_t>(i)) / 2.0f));
                    break;
                }
                case 0:
                    break;
            }

            if (IsVert())
                placement = ::g::Uno::Float4__New2(placement.Y, placement.X, placement.W, placement.Z);

            if (FlowDirection() == 1)
                placement = ::g::Uno::Float4__New5((nlp.X() - placement.X) - placement.Z, ::g::Uno::Float3__New2(placement.Y, placement.Z, placement.W));

            elp.SetSize(::g::Uno::Float2__New2(placement.Z, placement.W), true, true);
            uPtr(element)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding.X, padding.Y), ::g::Uno::Float2__New2(placement.X, placement.Y)), elp);
        }
    }

    ::g::Uno::Float2 sz = IsVert() ? ::g::Uno::Float2__New2(minorUsed, majorMaxUsed) : ::g::Uno::Float2__New2(majorMaxUsed, minorUsed);
    return sz;
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() [instance] :73
int32_t WrapLayout::FlowDirection()
{
    return _flowDirection;
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) [instance] :74
void WrapLayout::FlowDirection(int32_t value)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "set_FlowDirection(Fuse.Layouts.FlowDirection)");

    if (_flowDirection != value)
    {
        _flowDirection = value;
        InvalidateLayout();
    }
}

// public generated string get_ID() [instance] :98
uString* WrapLayout::ID()
{
    return _ID;
}

// public generated void set_ID(string value) [instance] :98
void WrapLayout::ID(uString* value)
{
    _ID = value;
}

// private bool get_IsVert() [instance] :67
bool WrapLayout::IsVert()
{
    return Orientation() == 1;
}

// public float get_ItemHeight() [instance] :23
float WrapLayout::ItemHeight()
{
    return _itemHeight;
}

// public void set_ItemHeight(float value) [instance] :24
void WrapLayout::ItemHeight(float value)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "set_ItemHeight(float)");

    if (!_hasItemHeight || (_itemHeight != value))
    {
        _itemHeight = value;
        _hasItemHeight = true;
        InvalidateLayout();
    }
}

// public float get_ItemWidth() [instance] :39
float WrapLayout::ItemWidth()
{
    return _itemWidth;
}

// public void set_ItemWidth(float value) [instance] :40
void WrapLayout::ItemWidth(float value)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "set_ItemWidth(float)");

    if (!_hasItemWidth || (_itemWidth != value))
    {
        _itemWidth = value;
        _hasItemWidth = true;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :54
int32_t WrapLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :55
void WrapLayout::Orientation(int32_t value)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "set_Orientation(Fuse.Layouts.Orientation)");

    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public Fuse.Elements.Alignment get_RowAlignment() [instance] :87
int32_t WrapLayout::RowAlignment()
{
    return _rowAlignment;
}

// public void set_RowAlignment(Fuse.Elements.Alignment value) [instance] :88
void WrapLayout::RowAlignment(int32_t value)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "set_RowAlignment(Fuse.Elements.Alignment)");

    if (_rowAlignment != value)
    {
        _rowAlignment = value;
        InvalidateLayout();
    }
}

// public generated WrapLayout New() [static] :17
WrapLayout* WrapLayout::New2()
{
    WrapLayout* obj1 = (WrapLayout*)uNew(WrapLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::Layouts
