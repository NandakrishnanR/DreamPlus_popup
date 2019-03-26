#include <Uno/Uno.h>
#include "AppDelegateLocalNotify.h"
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.LocalNotifications.iOSImpl.h>

@implementation uContext (LocalNotify)

- (void)initializeLocalNotifications:(UIApplication *)application  {
	[application registerUserNotificationSettings:
	 [UIUserNotificationSettings settingsForTypes:
	  UIUserNotificationTypeAlert|
	  UIUserNotificationTypeBadge|
	  UIUserNotificationTypeSound
	  categories:nil]];
}

- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification
{
	uAutoReleasePool pool;
	NSError* err = NULL;
	NSMutableDictionary* userInfo;

	if (notification.userInfo)
		userInfo = [notification.userInfo mutableCopy];
	else
		userInfo = [NSMutableDictionary dictionary];

	if (notification.alertAction)
		[userInfo setObject:notification.alertAction forKey:@"title"];
	if (notification.alertBody)
		[userInfo setObject:notification.alertBody forKey:@"body"];

	NSData* jsonData = [NSJSONSerialization dataWithJSONObject:userInfo options:0 error:&err];
	if (jsonData)
	{
		NSString* nsJsonPayload = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
		uString* jsonPayload = uPlatform::iOS::ToUno(nsJsonPayload);
		::g::Fuse::LocalNotifications::iOSImpl::OnReceivedLocalNotification(jsonPayload);
	}
}

@end
