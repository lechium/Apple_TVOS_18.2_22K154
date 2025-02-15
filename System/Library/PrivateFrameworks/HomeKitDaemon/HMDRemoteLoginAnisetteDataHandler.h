//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class AKAnisetteProvisioningController, HMDAppleMediaAccessory, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginAnisetteDataHandler : HMFObject
{
    HMDAppleMediaAccessory *_accessory;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMFMessageDispatcher *_msgDispatcher;	// 32 = 0x20
    AKAnisetteProvisioningController *_provisioningController;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x001000000098abe8
- (void).cxx_destruct;	// IMP=0x000000000098a724
@property(readonly, nonatomic) AKAnisetteProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) __weak HMDAppleMediaAccessory *accessory; // @synthesize accessory=_accessory;
- (id)logIdentifier;	// IMP=0x000000000098a64f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleLegacyAnisetteDataRequestMessage:(id)arg1;	// IMP=0x000000000098a432
- (void)_handleFetchAnisetteDataRequestMessage:(id)arg1;	// IMP=0x000000000098a269
- (void)_handleEraseAnisetteDataRequestMessage:(id)arg1;	// IMP=0x000000000098a0a0
- (void)_handleSyncAnisetteDataRequestMessage:(id)arg1;	// IMP=0x0000000000989ea7
- (void)_handleProvisionAnisetteDataRequestMessage:(id)arg1;	// IMP=0x0000000000989cde
- (void)registerForMessages;	// IMP=0x0000000000989896
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000989835
- (id)initWithUUID:(id)arg1 accessory:(id)arg2;	// IMP=0x0000000000989772

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

