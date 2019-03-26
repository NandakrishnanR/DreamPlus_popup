// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.9.0/PageControl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Node.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct CommonNavigationPages;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__ControlPageData;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}
namespace g{namespace Fuse{namespace Navigation{struct DynamicLinearNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class PageControl :80
// {
struct PageControl_type : ::g::Fuse::Controls::NavigationControl_type
{
    ::g::Fuse::Navigation::ISeekableNavigation interface23;
    ::g::Fuse::Navigation::IRouterOutlet interface24;
};

PageControl_type* PageControl_typeof();
void PageControl__ctor_8_fn(PageControl* __this);
void PageControl__get_ActiveIndex_fn(PageControl* __this, int32_t* __retval);
void PageControl__set_ActiveIndex_fn(PageControl* __this, int32_t* value);
void PageControl__get_AllowedSwipeDirections_fn(PageControl* __this, int32_t* __retval);
void PageControl__set_AllowedSwipeDirections_fn(PageControl* __this, int32_t* value);
void PageControl__get_CollapseInactive_fn(PageControl* __this, bool* __retval);
void PageControl__CreateTriggers_fn(PageControl* __this, ::g::Fuse::Elements::Element* c, ::g::Fuse::Controls::NavigationControl__ControlPageData* pd);
void PageControl__get_DisableInactive_fn(PageControl* __this, bool* __retval);
void PageControl__FuseNavigationIRouterOutletCancelPrepare_fn(PageControl* __this);
void PageControl__FuseNavigationIRouterOutletCompareCurrent_fn(PageControl* __this, ::g::Fuse::Navigation::RouterPage* routerPage, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void PageControl__FuseNavigationIRouterOutletGetCurrent_fn(PageControl* __this, ::g::Fuse::Visual** pageVisual, ::g::Fuse::Navigation::RouterPage** __retval);
void PageControl__FuseNavigationIRouterOutletGoto_fn(PageControl* __this, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t* gotoMode, int32_t* operation, uString* operationStyle, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void PageControl__FuseNavigationIRouterOutletPartialPrepareGoto_fn(PageControl* __this, double* progress);
void PageControl__FuseNavigationIRouterOutletget_Type_fn(PageControl* __this, int32_t* __retval);
void PageControl__FuseNavigationISeekableNavigationBeginSeek_fn(PageControl* __this);
void PageControl__FuseNavigationISeekableNavigationEndSeek_fn(PageControl* __this, ::g::Fuse::Navigation::EndSeekArgs* args);
void PageControl__FuseNavigationISeekableNavigationSeek_fn(PageControl* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args);
void PageControl__FuseNavigationISeekableNavigationget_SeekRange_fn(PageControl* __this, ::g::Uno::Float2* __retval);
void PageControl__gotoPage_fn(PageControl* pc, uArray* args);
void PageControl__get_InactiveState_fn(PageControl* __this, int32_t* __retval);
void PageControl__set_InactiveState_fn(PageControl* __this, int32_t* value);
void PageControl__get_Interaction_fn(PageControl* __this, int32_t* __retval);
void PageControl__set_Interaction_fn(PageControl* __this, int32_t* value);
void PageControl__get_IsHorizontal_fn(PageControl* __this, bool* __retval);
void PageControl__get_Motion_fn(PageControl* __this, ::g::Fuse::Motion::MotionConfig** __retval);
void PageControl__set_Motion_fn(PageControl* __this, ::g::Fuse::Motion::MotionConfig* value);
void PageControl__get_Navigation1_fn(PageControl* __this, ::g::Fuse::Navigation::DynamicLinearNavigation** __retval);
void PageControl__New4_fn(PageControl** __retval);
void PageControl__OnRooted_fn(PageControl* __this);
void PageControl__OnUnrooted_fn(PageControl* __this);
void PageControl__get_Orientation_fn(PageControl* __this, int32_t* __retval);
void PageControl__set_Orientation_fn(PageControl* __this, int32_t* value);
void PageControl__get_Pages_fn(PageControl* __this, uObject** __retval);
void PageControl__set_Pages_fn(PageControl* __this, uObject* value);
void PageControl__SetActiveIndex_fn(PageControl* __this, int32_t* value, uObject* origin);
void PageControl__UnoUXIPropertyListenerOnPropertyChanged_fn(PageControl* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property);
void PageControl__UpdateInteraction_fn(PageControl* __this);
void PageControl__UpdateProgress_fn(PageControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState* state, ::g::Fuse::Controls::NavigationControl__ControlPageData* pd);

struct PageControl : ::g::Fuse::Controls::NavigationControl
{
    int32_t _inactive;
    uStrong< ::g::Fuse::Navigation::SwipeNavigate*> _swipe;
    int32_t _swipeAllow;
    int32_t _interaction;
    int32_t _orient;
    static ::g::Uno::UX::Selector ActiveIndexName_;
    static ::g::Uno::UX::Selector& ActiveIndexName() { return PageControl_typeof()->Init(), ActiveIndexName_; }
    uStrong< ::g::Fuse::Controls::CommonNavigationPages*> _pages;

    void ctor_8();
    int32_t ActiveIndex();
    void ActiveIndex(int32_t value);
    int32_t AllowedSwipeDirections();
    void AllowedSwipeDirections(int32_t value);
    bool CollapseInactive();
    bool DisableInactive();
    int32_t InactiveState();
    void InactiveState(int32_t value);
    int32_t Interaction();
    void Interaction(int32_t value);
    bool IsHorizontal();
    ::g::Fuse::Motion::MotionConfig* Motion();
    void Motion(::g::Fuse::Motion::MotionConfig* value);
    ::g::Fuse::Navigation::DynamicLinearNavigation* Navigation1();
    int32_t Orientation();
    void Orientation(int32_t value);
    uObject* Pages();
    void Pages(uObject* value);
    void SetActiveIndex(int32_t value, uObject* origin);
    static void gotoPage(PageControl* pc, uArray* args);
    static PageControl* New4();
};
// }

}}} // ::g::Fuse::Controls
