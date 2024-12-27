//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, NSMutableArray, NSMutableSet, NSString, WPAirPlaySolo;

@interface CLATVAirplayMonitor : CLIntersiloService
{
    _Bool _power;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    WPAirPlaySolo *_airplaySolo;	// 24 = 0x18
    CLTimer *_scanDeliveryDelayTimer;	// 32 = 0x20
    NSMutableArray *_bufferedDevices;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x00200000005b222b
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b2212
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005b21b5
@property(retain, nonatomic) NSMutableArray *bufferedDevices; // @synthesize bufferedDevices=_bufferedDevices;
@property(retain, nonatomic) CLTimer *scanDeliveryDelayTimer; // @synthesize scanDeliveryDelayTimer=_scanDeliveryDelayTimer;
@property(nonatomic) _Bool power; // @synthesize power=_power;
@property(retain, nonatomic) WPAirPlaySolo *airplaySolo; // @synthesize airplaySolo=_airplaySolo;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;	// IMP=0x00100000005b3753
- (void)airPlaySoloStoppedScanning:(id)arg1;	// IMP=0x00100000005b35ca
- (void)airPlaySoloStartedScanning:(id)arg1;	// IMP=0x00100000005b3441
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;	// IMP=0x00100000005b2d34
- (void)airPlaySoloDidUpdateState:(id)arg1;	// IMP=0x00100000005b2cfa
- (void)sendBufferedScanNotifications;	// IMP=0x00100000005b2c00
- (void)stopScan;	// IMP=0x00100000005b2bcd
- (void)startScan;	// IMP=0x00100000005b2873
- (void)withClients:(CDUnknownBlockType)arg1;	// IMP=0x00100000005b2756
- (id)init;	// IMP=0x00100000005b2719
- (void)getPowerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000005b26f1
- (void)stopMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x00100000005b2676
- (void)startMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x00100000005b262c
- (void)removeClient:(byref id)arg1;	// IMP=0x00100000005b25d5
- (void)addClient:(byref id)arg1;	// IMP=0x00100000005b257e
- (void)dealloc;	// IMP=0x00100000005b2540
- (void)releaseData;	// IMP=0x00100000005b24d6
- (void)endService;	// IMP=0x00100000005b249b
- (void)beginServiceWithAirPlaySolo:(id)arg1;	// IMP=0x00100000005b22d9
- (void)beginService;	// IMP=0x00100000005b2287

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

