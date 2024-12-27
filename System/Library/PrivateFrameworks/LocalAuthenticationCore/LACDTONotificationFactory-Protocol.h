//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@protocol LACDTOPendingPolicyEvaluation, LACUNNotification;

@protocol LACDTONotificationFactory <NSObject>
- (id <LACUNNotification>)securityDelayEndedNotificationForPendingEvaluation:(id <LACDTOPendingPolicyEvaluation>)arg1 after:(double)arg2 validity:(double)arg3;
- (id <LACUNNotification>)newSecurityDelayRequiredNotification;
@end

