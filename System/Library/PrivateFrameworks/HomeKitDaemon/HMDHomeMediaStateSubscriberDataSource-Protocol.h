//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeMediaStateSubscriber, HMDMediaProfile, NSArray, NSUUID;

@protocol HMDHomeMediaStateSubscriberDataSource
- (HMDMediaProfile *)mediaProfileForAppleMediaAccessoryUUID:(NSUUID *)arg1 mediaStateSubscriber:(HMDHomeMediaStateSubscriber *)arg2;
- (NSUUID *)currentAccessoryUUIDsForMediaStateSubscriber:(HMDHomeMediaStateSubscriber *)arg1;
- (NSArray *)appleMediaAccessoryUUIDsForMediaStateSubscriber:(HMDHomeMediaStateSubscriber *)arg1;
@end

