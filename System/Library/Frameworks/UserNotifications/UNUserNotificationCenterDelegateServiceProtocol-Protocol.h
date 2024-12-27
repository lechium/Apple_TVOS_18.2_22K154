//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotifications/NSObject-Protocol.h>

@class NSString, UNNotificationResponse, UNNotificationSettings;

@protocol UNUserNotificationCenterDelegateServiceProtocol <NSObject>
- (void)didOpenApplicationForResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didChangeSettings:(UNNotificationSettings *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(_Bool))arg3;
@end

