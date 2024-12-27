//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NCNotificationDestinationDelegate-Protocol.h>

@class NCNotificationRequest;
@protocol NCNotificationAlertDestination, NCNotificationDestination;

@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>
- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(_Bool (^)(NCNotificationRequest *))arg2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id <NCNotificationDestination>)arg1;

@optional
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didPresentNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2 suppressAlerts:(_Bool)arg3;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2;
@end

