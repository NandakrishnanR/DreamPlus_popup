#include <Uno/Uno.h>
#include "AppDelegatePushNotify.h"
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.PushNotifications.iOSImpl.h>

@implementation uContext (PushNotify)

- (void)application:(UIApplication *)application initializePushNotifications:(NSDictionary *)launchOptions {
	if (launchOptions[UIApplicationLaunchOptionsRemoteNotificationKey]) {
		[self application:application dispatchPushNotification:launchOptions[UIApplicationLaunchOptionsRemoteNotificationKey] fromBar:YES];
	}
//#if (!#(Project.iOS.PushNotifications.RegisterOnLaunch:IsSet)) || #(Project.iOS.PushNotifications.RegisterOnLaunch:Or(0))
//	#{Fuse.PushNotifications.iOSImpl.RegisterForPushNotifications():Call()};
//#endif
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
	uAutoReleasePool pool;
	const unsigned* tokenBytes = (unsigned*)[deviceToken bytes];
	NSString* hexToken = [NSString stringWithFormat:@"%08x%08x%08x%08x%08x%08x%08x%08x",
						  ntohl(tokenBytes[0]), ntohl(tokenBytes[1]), ntohl(tokenBytes[2]),
						  ntohl(tokenBytes[3]), ntohl(tokenBytes[4]), ntohl(tokenBytes[5]),
						  ntohl(tokenBytes[6]), ntohl(tokenBytes[7])];
	uString* token = uPlatform::iOS::ToUno(hexToken);
	::g::Fuse::PushNotifications::iOSImpl::OnNotificationRegistrationSucceeded(token);
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error {
	uAutoReleasePool pool;
	uString* errorReason = uPlatform::iOS::ToUno(error.localizedDescription);
	::g::Fuse::PushNotifications::iOSImpl::OnNotificationRegistrationFailed(errorReason);
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo {
	uAutoReleasePool pool;
	int32_t state = ::g::Fuse::Platform::Lifecycle::State();
	bool fromNotifBar = application.applicationState != UIApplicationStateActive;
	[self application:application dispatchPushNotification:userInfo fromBar:fromNotifBar];
}

- (void)application:(UIApplication *)application dispatchPushNotification:(NSDictionary *)userInfo fromBar:(BOOL)fromBar {
	uAutoReleasePool pool;
	NSError* err = NULL;
	NSData* jsonData = [NSJSONSerialization dataWithJSONObject:userInfo options:0 error:&err];
	if (jsonData)
	{
		NSString* nsJsonPayload = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
		uString* jsonPayload = uPlatform::iOS::ToUno(nsJsonPayload);
		::g::Fuse::PushNotifications::iOSImpl::OnReceivedNotification(jsonPayload, fromBar);
	}
}

@end
