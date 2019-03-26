// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.9.0/Grid.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Grid :59
// {
::g::Fuse::Controls::Panel_type* Grid_typeof();
void Grid__ctor_7_fn(Grid* __this);
void Grid__get_CellSpacing_fn(Grid* __this, float* __retval);
void Grid__set_CellSpacing_fn(Grid* __this, float* value);
void Grid__get_ChildOrder_fn(Grid* __this, int32_t* __retval);
void Grid__set_ChildOrder_fn(Grid* __this, int32_t* value);
void Grid__get_ColumnCount_fn(Grid* __this, int32_t* __retval);
void Grid__set_ColumnCount_fn(Grid* __this, int32_t* value);
void Grid__get_ColumnData_fn(Grid* __this, uString** __retval);
void Grid__set_ColumnData_fn(Grid* __this, uString* value);
void Grid__get_ColumnList_fn(Grid* __this, uObject** __retval);
void Grid__get_Columns_fn(Grid* __this, uString** __retval);
void Grid__set_Columns_fn(Grid* __this, uString* value);
void Grid__get_ContentAlignment_fn(Grid* __this, int32_t* __retval);
void Grid__set_ContentAlignment_fn(Grid* __this, int32_t* value);
void Grid__get_DefaultColumn_fn(Grid* __this, uString** __retval);
void Grid__set_DefaultColumn_fn(Grid* __this, uString* value);
void Grid__get_DefaultRow_fn(Grid* __this, uString** __retval);
void Grid__set_DefaultRow_fn(Grid* __this, uString* value);
void Grid__GetColumn_fn(::g::Fuse::Elements::Element* elm, int32_t* __retval);
void Grid__GetColumnSpan_fn(::g::Fuse::Elements::Element* elm, int32_t* __retval);
void Grid__GetRow_fn(::g::Fuse::Elements::Element* elm, int32_t* __retval);
void Grid__GetRowSpan_fn(::g::Fuse::Elements::Element* elm, int32_t* __retval);
void Grid__New4_fn(Grid** __retval);
void Grid__ResetColumn_fn(::g::Fuse::Elements::Element* elm);
void Grid__ResetColumnSpan_fn(::g::Fuse::Elements::Element* elm);
void Grid__ResetRow_fn(::g::Fuse::Elements::Element* elm);
void Grid__ResetRowSpan_fn(::g::Fuse::Elements::Element* elm);
void Grid__get_RowCount_fn(Grid* __this, int32_t* __retval);
void Grid__set_RowCount_fn(Grid* __this, int32_t* value);
void Grid__get_RowData_fn(Grid* __this, uString** __retval);
void Grid__set_RowData_fn(Grid* __this, uString* value);
void Grid__get_RowList_fn(Grid* __this, uObject** __retval);
void Grid__get_Rows_fn(Grid* __this, uString** __retval);
void Grid__set_Rows_fn(Grid* __this, uString* value);
void Grid__SetColumn_fn(::g::Fuse::Elements::Element* elm, int32_t* col);
void Grid__SetColumnSpan_fn(::g::Fuse::Elements::Element* elm, int32_t* span);
void Grid__SetRow_fn(::g::Fuse::Elements::Element* elm, int32_t* row);
void Grid__SetRowSpan_fn(::g::Fuse::Elements::Element* elm, int32_t* span);

struct Grid : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::GridLayout*> _gridLayout;

    void ctor_7();
    float CellSpacing();
    void CellSpacing(float value);
    int32_t ChildOrder();
    void ChildOrder(int32_t value);
    int32_t ColumnCount();
    void ColumnCount(int32_t value);
    uString* ColumnData();
    void ColumnData(uString* value);
    uObject* ColumnList();
    uString* Columns();
    void Columns(uString* value);
    int32_t ContentAlignment();
    void ContentAlignment(int32_t value);
    uString* DefaultColumn();
    void DefaultColumn(uString* value);
    uString* DefaultRow();
    void DefaultRow(uString* value);
    int32_t RowCount();
    void RowCount(int32_t value);
    uString* RowData();
    void RowData(uString* value);
    uObject* RowList();
    uString* Rows();
    void Rows(uString* value);
    static int32_t GetColumn(::g::Fuse::Elements::Element* elm);
    static int32_t GetColumnSpan(::g::Fuse::Elements::Element* elm);
    static int32_t GetRow(::g::Fuse::Elements::Element* elm);
    static int32_t GetRowSpan(::g::Fuse::Elements::Element* elm);
    static Grid* New4();
    static void ResetColumn(::g::Fuse::Elements::Element* elm);
    static void ResetColumnSpan(::g::Fuse::Elements::Element* elm);
    static void ResetRow(::g::Fuse::Elements::Element* elm);
    static void ResetRowSpan(::g::Fuse::Elements::Element* elm);
    static void SetColumn(::g::Fuse::Elements::Element* elm, int32_t col);
    static void SetColumnSpan(::g::Fuse::Elements::Element* elm, int32_t span);
    static void SetRow(::g::Fuse::Elements::Element* elm, int32_t row);
    static void SetRowSpan(::g::Fuse::Elements::Element* elm, int32_t span);
};
// }

}}} // ::g::Fuse::Controls
