//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CUBLEAdvertiser, HAPBTLECentralManager, HMDAccessoryQueues, HMDHAPAccessory, HMFTimer, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDBTLEAdvertiser : HMFObject
{
    CUBLEAdvertiser *_leAdvertiser;	// 8 = 0x8
    HMFTimer *_advertisementTimer;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
    HAPBTLECentralManager *_centralManager;	// 32 = 0x20
    HMDAccessoryQueues *_powerOnQueues;	// 40 = 0x28
    double _advertisementTimeInterval;	// 48 = 0x30
    double _reachabilityTimeInterval;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
}

+ (id)initializeAdvertiser;	// IMP=0x00100000003a3f7d
+ (id)sharedAdvertiser;	// IMP=0x00100000003a3f1a
- (void).cxx_destruct;	// IMP=0x00000000003a3702
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) double reachabilityTimeInterval; // @synthesize reachabilityTimeInterval=_reachabilityTimeInterval;
@property(nonatomic) double advertisementTimeInterval; // @synthesize advertisementTimeInterval=_advertisementTimeInterval;
@property(retain, nonatomic) HMDAccessoryQueues *powerOnQueues; // @synthesize powerOnQueues=_powerOnQueues;
@property(retain, nonatomic) HAPBTLECentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) HMFTimer *advertisementTimer; // @synthesize advertisementTimer=_advertisementTimer;
@property(retain, nonatomic) CUBLEAdvertiser *leAdvertiser; // @synthesize leAdvertiser=_leAdvertiser;
@property(readonly, getter=isReady) _Bool isReady;
- (_Bool)isAdvertisingForAccessory:(id)arg1;	// IMP=0x00000000003a3409
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000003a3186
- (void)_advertisementTimeout;	// IMP=0x00000000003a2e06
- (void)powerOn:(id)arg1;	// IMP=0x00000000003a2d4e
- (void)_startAdvertising;	// IMP=0x00000000003a2995
- (void)cancelOn:(id)arg1;	// IMP=0x00000000003a28dd
- (void)_cancelOn:(id)arg1;	// IMP=0x00000000003a260c
- (void)_completePendingPowerOnRequest:(id)arg1;	// IMP=0x00000000003a253e
- (void)stopAdvertisement:(id)arg1;	// IMP=0x00000000003a2486
- (void)_stopAdvertisement:(id)arg1;	// IMP=0x00000000003a23e7
- (void)_clearAdvertiser;	// IMP=0x00000000003a235a
- (void)didUpdateBTLEState:(long long)arg1;	// IMP=0x00000000003a22de
- (void)_flushQueues;	// IMP=0x00000000003a229a
- (void)_flushQueue:(id)arg1;	// IMP=0x00000000003a21a4
- (id)init;	// IMP=0x00000000003a1f46

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

