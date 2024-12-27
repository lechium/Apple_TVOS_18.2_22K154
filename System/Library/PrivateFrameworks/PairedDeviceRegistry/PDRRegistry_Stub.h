//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PDRRegistry.h"

@class MISSING_TYPE, OS_dispatch_queue;

@interface PDRRegistry_Stub : PDRRegistry
{
    MISSING_TYPE *unfairLock;	// 8 = 0x8
    MISSING_TYPE *delegates;	// 16 = 0x10
    MISSING_TYPE *lastCompatibilityState;	// 24 = 0x18
    MISSING_TYPE *started_;	// 32 = 0x20
    MISSING_TYPE *status_;	// 40 = 0x28
    MISSING_TYPE *amSingleton;	// 48 = 0x30
}

+ (_Bool)supportsPairedDevice;	// IMP=0x006000000000c270
+ (id)sharedInstance;	// IMP=0x006000000000c240
- (void).cxx_destruct;	// IMP=0x000000000000c830
- (id)deviceForPairingID:(id)arg1;	// IMP=0x000000000000c790
- (id)deviceForBluetoothID:(id)arg1;	// IMP=0x000000000000c780
- (void)getSwitchEventsAfterIndex:(unsigned int)arg1 process:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c760
- (long long)switchIndex;	// IMP=0x000000000000c750
- (_Bool)removeDelegate:(id)arg1;	// IMP=0x000000000000c6f0
- (void)addDelegate:(id)arg1;	// IMP=0x000000000000c5f0
- (_Bool)isPaired;	// IMP=0x000000000000c440
- (id)pairingID;	// IMP=0x000000000000c430
- (id)pairingStorePath;	// IMP=0x000000000000c420
- (id)getActiveDevice;	// IMP=0x000000000000c410
- (id)getActivePairedDeviceExcludingAltAccount;	// IMP=0x000000000000c400
- (id)getActivePairedDeviceIncludingAltAccount;	// IMP=0x000000000000c3f0
- (id)getDevicesExcluding:(unsigned long long)arg1;	// IMP=0x000000000000c3c0
- (void)stop;	// IMP=0x000000000000c3a0
- (void)start;	// IMP=0x000000000000c280
- (long long)compatibilityState;	// IMP=0x000000000000c1e0
@property(nonatomic, retain) OS_dispatch_queue *callbackQueue;
@property(nonatomic, readonly) long long status;
@property(nonatomic, readonly) _Bool started;
- (id)init;	// IMP=0x000000000000c0b0
- (long long)maxTinkerPairedDeviceCount;	// IMP=0x000000000000cb20
- (long long)maxPairedDeviceCount;	// IMP=0x000000000000cb00
- (void)pairingClientSetAltAccountName:(id)arg1 altDSID:(id)arg2 forDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ca80
- (void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ca00
- (void)waitForPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c9d0
- (long long)migrationCountForPairingID:(id)arg1;	// IMP=0x000000000000c970
- (long long)lastSyncSwitchIndex;	// IMP=0x000000000000c950
- (void)setActivePairedDevice:(id)arg1 resultsCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c8c0
- (id)failsafeUnpairWithOptions:(id)arg1;	// IMP=0x000000000000c890
- (id)unpairWithDevice:(id)arg1 withOptions:(id)arg2;	// IMP=0x000000000000c870

@end

