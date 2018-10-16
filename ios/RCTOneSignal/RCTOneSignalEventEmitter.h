#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <React/RCTConvert.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTUtils.h>
#elif __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"
#import "RCTConvert.h"
#import "RCTEventDispatcher.h"
#import "RCTUtils.h"
#endif

typedef NS_ENUM(NSInteger, OSNotificationEventTypes) {
    NotificationReceived,
    NotificationOpened,
    SubscriptionChanged,
    PermissionChanged,
    EmailSubscriptionChanged
};

#define OSNotificationEventTypesArray @[@"OneSignal#received",@"OneSignal#opened",@"OneSignal#subscription",@"OneSignal#permission",@"OneSignal#emailSubscription"]

#define OSEventString(enum) [OSNotificationEventTypesArray objectAtIndex:enum]


@interface RCTOneSignalEventEmitter : RCTEventEmitter <RCTBridgeModule>

+ (void)sendEventWithName:(NSString *)name withBody:(NSDictionary *)body;
+ (BOOL)hasSetBridge;

@end
