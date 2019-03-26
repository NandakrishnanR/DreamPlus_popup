// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.9.0/EdgeNavigator.ScriptClass.uno.
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
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__ControlPageData;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct TappedArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct EdgeNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class EdgeNavigator :8
// {
struct EdgeNavigator_type : ::g::Fuse::Controls::NavigationControl_type
{
    ::g::Fuse::Navigation::IRouterOutlet interface23;
};

EdgeNavigator_type* EdgeNavigator_typeof();
void EdgeNavigator__ctor_8_fn(EdgeNavigator* __this);
void EdgeNavigator__CreateTriggers_fn(EdgeNavigator* __this, ::g::Fuse::Elements::Element* elm, ::g::Fuse::Controls::NavigationControl__ControlPageData* pd);
void EdgeNavigator__dismiss_fn(EdgeNavigator* e);
void EdgeNavigator__Dismiss_fn(EdgeNavigator* __this);
void EdgeNavigator__FuseNavigationIRouterOutletCancelPrepare_fn(EdgeNavigator* __this);
void EdgeNavigator__FuseNavigationIRouterOutletCompareCurrent_fn(EdgeNavigator* __this, ::g::Fuse::Navigation::RouterPage* routerPage, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void EdgeNavigator__FuseNavigationIRouterOutletGetCurrent_fn(EdgeNavigator* __this, ::g::Fuse::Visual** pageVisual, ::g::Fuse::Navigation::RouterPage** __retval);
void EdgeNavigator__FuseNavigationIRouterOutletGoto_fn(EdgeNavigator* __this, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t* gotoMode, int32_t* operation, uString* operationStyle, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void EdgeNavigator__FuseNavigationIRouterOutletPartialPrepareGoto_fn(EdgeNavigator* __this, double* progress);
void EdgeNavigator__FuseNavigationIRouterOutletget_Type_fn(EdgeNavigator* __this, int32_t* __retval);
void EdgeNavigator__GotoEdge_fn(EdgeNavigator* __this, int32_t* edge);
void EdgeNavigator__get_Navigation1_fn(EdgeNavigator* __this, ::g::Fuse::Navigation::VisualNavigation** __retval);
void EdgeNavigator__New4_fn(EdgeNavigator** __retval);
void EdgeNavigator__OnRooted_fn(EdgeNavigator* __this);
void EdgeNavigator__OnTapped_fn(EdgeNavigator* __this, uObject* s, ::g::Fuse::Gestures::TappedArgs* args);
void EdgeNavigator__OnUnrooted_fn(EdgeNavigator* __this);
void EdgeNavigator__open_fn(EdgeNavigator* e, uArray* args);
void EdgeNavigator__get_Pages_fn(EdgeNavigator* __this, uObject** __retval);
void EdgeNavigator__set_Pages_fn(EdgeNavigator* __this, uObject* value);
void EdgeNavigator__SetupEdge_fn(EdgeNavigator* __this, ::g::Fuse::Controls::NavigationControl__ControlPageData* pd, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2* rel, int32_t* align);

struct EdgeNavigator : ::g::Fuse::Controls::NavigationControl
{
    uStrong< ::g::Fuse::Navigation::EdgeNavigation*> _edgeNavigation;
    static uSStrong< ::g::Fuse::PropertyHandle*> _controlPageDataProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _controlPageDataProperty() { return EdgeNavigator_typeof()->Init(), _controlPageDataProperty_; }
    uStrong< ::g::Fuse::Controls::CommonNavigationPages*> _pages;

    void ctor_8();
    void Dismiss();
    void GotoEdge(int32_t edge);
    ::g::Fuse::Navigation::VisualNavigation* Navigation1();
    void OnTapped(uObject* s, ::g::Fuse::Gestures::TappedArgs* args);
    uObject* Pages();
    void Pages(uObject* value);
    void SetupEdge(::g::Fuse::Controls::NavigationControl__ControlPageData* pd, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2 rel, int32_t align);
    static void dismiss(EdgeNavigator* e);
    static EdgeNavigator* New4();
    static void open(EdgeNavigator* e, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
