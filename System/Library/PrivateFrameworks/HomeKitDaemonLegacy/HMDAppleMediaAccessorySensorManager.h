//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFPairingIdentity, HMSetupAccessoryDescription, NSMutableArray, NSString, NSUUID;
@protocol HMDAppleMediaAccessorySensorManagerDataSource, HMDAppleMediaAccessorySensorManagerDataStore, HMDHPSManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySensorManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isCurrentlyPairing;	// 12 = 0xc
    _Bool _hasAttemptedRecovery;	// 13 = 0xd
    _Bool _shouldUseDerivedSensorUUID;	// 14 = 0xe
    _Bool _hasPendingRetry;	// 15 = 0xf
    _Bool _shouldAttemptToSetServiceNames;	// 16 = 0x10
    NSUUID *_sensorAccessoryUUID;	// 24 = 0x18
    double _pairingStartTime;	// 32 = 0x20
    id <HMDHPSManager> _sensorClient;	// 40 = 0x28
    id <HMDAppleMediaAccessorySensorManagerDataSource> _dataSource;	// 48 = 0x30
    HMSetupAccessoryDescription *_setupDescription;	// 56 = 0x38
    id <HMDAppleMediaAccessorySensorManagerDataStore> _dataStore;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    unsigned long long _pairingRetryCount;	// 80 = 0x50
    NSMutableArray *_renamedServiceIDs;	// 88 = 0x58
    HMFPairingIdentity *_pairingIdentity;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000007f2d30
- (void).cxx_destruct;	// IMP=0x00000000007ec0fe
- (id)logIdentifier;	// IMP=0x00000000007ec059
- (void)managerIsReadyToBePaired;	// IMP=0x00000000007ebf70
- (void)fetchADKSensorStatusCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ebeaf
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000007ebdfa
- (void)handleAccessoryAdded:(id)arg1;	// IMP=0x00000000007ebbe6
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000007ebbdc
- (void)localAccessoryAddRequiresConsent:(id)arg1;	// IMP=0x00000000007eb88b
- (void)handleErrorCaseTestMessage:(id)arg1;	// IMP=0x00000000007eb406
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, copy) NSUUID *sensorAccessoryUUID;
- (void)_migrateToDataStoreIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007eb33f
- (void)configureWithDataSource:(id)arg1 hpsXPCClient:(id)arg2 dataStore:(id)arg3;	// IMP=0x00000000007eb23c
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x00000000007eb18d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

