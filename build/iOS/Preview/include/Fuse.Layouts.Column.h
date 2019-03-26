// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Layouts/GridLayout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Column :213
// {
uType* Column_typeof();
void Column__ctor_4_fn(Column* __this);
void Column__ctor_5_fn(Column* __this, float* width, int32_t* metric);
void Column__ctor_6_fn(Column* __this, Column* copy, int32_t* creation);
void Column__New2_fn(Column** __retval);
void Column__New3_fn(float* width, int32_t* metric, Column** __retval);
void Column__New4_fn(Column* copy, int32_t* creation, Column** __retval);
void Column__get_Width_fn(Column* __this, float* __retval);
void Column__set_Width_fn(Column* __this, float* value);
void Column__get_WidthMetric_fn(Column* __this, int32_t* __retval);
void Column__set_WidthMetric_fn(Column* __this, int32_t* value);

struct Column : ::g::Fuse::Layouts::DefinitionBase
{
    void ctor_4();
    void ctor_5(float width, int32_t metric);
    void ctor_6(Column* copy, int32_t creation);
    float Width();
    void Width(float value);
    int32_t WidthMetric();
    void WidthMetric(int32_t value);
    static Column* New2();
    static Column* New3(float width, int32_t metric);
    static Column* New4(Column* copy, int32_t creation);
};
// }

}}} // ::g::Fuse::Layouts
