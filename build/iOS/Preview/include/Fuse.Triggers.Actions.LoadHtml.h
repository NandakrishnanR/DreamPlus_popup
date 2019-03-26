// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.9.0/WebViewNavActions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions.WebViewNavAction.h>
namespace g{namespace Fuse{namespace Controls{struct HTML;}}}
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadHtml :94
// {
struct LoadHtml_type : ::g::Fuse::Triggers::Actions::WebViewNavAction_type
{
    ::g::Fuse::Controls::ISourceReceiver interface1;
};

LoadHtml_type* LoadHtml_typeof();
void LoadHtml__ctor_3_fn(LoadHtml* __this);
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value);
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview);
void LoadHtml__get_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML** __retval);
void LoadHtml__set_HTMLSource_fn(LoadHtml* __this, ::g::Fuse::Controls::HTML* value);
void LoadHtml__New2_fn(LoadHtml** __retval);
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value);

struct LoadHtml : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    uStrong< ::g::Fuse::Controls::HTML*> _html;
    uStrong<uString*> _BaseUrl;
    uStrong<uString*> _Source;

    void ctor_3();
    uString* BaseUrl();
    void BaseUrl(uString* value);
    ::g::Fuse::Controls::HTML* HTMLSource();
    void HTMLSource(::g::Fuse::Controls::HTML* value);
    uString* Source();
    void Source(uString* value);
    static LoadHtml* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
