//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDDevice, HMDHome, HMDMediaProfile, HMDResidentDevice, HMFMessageDispatcher, NSArray, NSObject, NSUUID;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;

@protocol HMDMediaActionRouterDataSource <NSObject>
@property(readonly) __weak HMDHome *home;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic, getter=isCompanionReachable) _Bool companionReachable;
@property(readonly, nonatomic) __weak HMDDevice *companionDevice;
@property(readonly, copy, nonatomic) NSArray *appleMediaAccessories;
@property(readonly, copy, nonatomic) NSArray *enabledResidents;
- (_Bool)isResidentReachable:(HMDResidentDevice *)arg1;
- (HMDMediaProfile *)mediaProfileWithUUID:(NSUUID *)arg1;
@end

