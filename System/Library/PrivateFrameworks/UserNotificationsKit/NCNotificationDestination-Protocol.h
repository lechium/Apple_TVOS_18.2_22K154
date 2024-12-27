//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NSObject-Protocol.h>

@class BSServiceConnectionEndpoint, NCNotificationRequest, NCNotificationSectionSettings, NCNotificationSystemSettings, NSString;
@protocol NCNotificationDestinationDelegate;

@protocol NCNotificationDestination <NSObject>
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate;
- (void)withdrawNotificationRequest:(NCNotificationRequest *)arg1;
- (void)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (void)postNotificationRequest:(NCNotificationRequest *)arg1;
- (_Bool)canReceiveNotificationRequest:(NCNotificationRequest *)arg1;

@optional
- (void)notificationsLoadedForSectionIdentifier:(NSString *)arg1;
- (void)updateNotificationSystemSettings:(NCNotificationSystemSettings *)arg1 previousSystemSettings:(NCNotificationSystemSettings *)arg2;
- (void)updateNotificationSectionSettings:(NCNotificationSectionSettings *)arg1 previousSectionSettings:(NCNotificationSectionSettings *)arg2;
- (_Bool)interceptsQueueRequest:(NCNotificationRequest *)arg1;
@end

