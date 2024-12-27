//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessory, HMDService, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterController : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDHAPAccessory *_accessory;	// 16 = 0x10
    HMDService *_routerService;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000a6dc32
- (void).cxx_destruct;	// IMP=0x0000000000a6bcb8
@property(nonatomic) __weak HMDService *routerService; // @synthesize routerService=_routerService;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)handleAccessoryConfiguredNotification:(id)arg1;	// IMP=0x0000000000a6bbe5
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000a6bb2d
- (void)_handleAccessoryConnected;	// IMP=0x0000000000a6b7a3
- (void)_handleCharacteristicsChangedPayload:(id)arg1;	// IMP=0x0000000000a6b4d5
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x0000000000a6b32f
- (void)_handleNetworkAccessViolationUpdate;	// IMP=0x0000000000a6b09e
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a6af29
- (void)_writeTLVWithValueInResponse:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a6ab33
- (void)_writeValueIfDifferent:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a6a78f
- (void)_writeClientConfigurationControlRequest:(id)arg1 operationName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a6a5b8
- (void)resetAccessViolationForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a6a44e
- (void)fetchAccessViolationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a6a37d
- (void)removeClientConfigurationWithClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a6a209
- (void)updateClientConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a6a0e0
- (void)readClientConfigurationWithClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a69f6c
- (void)addClientConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a69e43
- (void)getClientStatusWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a69d32
- (void)getClientStatusWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a69b2a
- (void)writeManagedNetworkEnable:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a69af0
@property(readonly) NSString *wiFiSSID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a697fb
- (void)configure;	// IMP=0x0000000000a695de
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000a6952a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

