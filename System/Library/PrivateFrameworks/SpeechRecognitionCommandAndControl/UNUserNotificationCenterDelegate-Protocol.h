//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeechRecognitionCommandAndControl/NSObject-Protocol.h>

@class UNNotification, UNNotificationResponse, UNUserNotificationCenter;

@protocol UNUserNotificationCenterDelegate <NSObject>

@optional
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 openSettingsForNotification:(UNNotification *)arg2;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 didReceiveNotificationResponse:(UNNotificationResponse *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)userNotificationCenter:(UNUserNotificationCenter *)arg1 willPresentNotification:(UNNotification *)arg2 withCompletionHandler:(void (^)(unsigned long long))arg3;
@end

