//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLGnssProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000a64409
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a643f0
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a64393
+ (_Bool)isSupported;	// IMP=0x0010000000a6438b
- (void)removeRhythmicGnssClient:(int)arg1;	// IMP=0x0020000000a647f9
- (void)addRhythmicGnssClient:(int)arg1;	// IMP=0x0010000000a647d6
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x0010000000a647b3
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x0010000000a64790
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a6476d
- (_Bool)syncgetIonosphereParameters:(struct ThinShellIonosphereParameters *)arg1;	// IMP=0x0010000000a6455a
- (void)cacheEmergencyAWDStatistics:(struct CLDaemonLocation)arg1;	// IMP=0x0010000000a64537
- (_Bool)syncgetActiveGnssBands:(void *)arg1;	// IMP=0x0010000000a64514
- (_Bool)syncgetControlPlaneStatusReport:(struct CLGnssControlPlaneStatusReport *)arg1;	// IMP=0x0010000000a644f1
- (void)resetControlPlaneStatus;	// IMP=0x0010000000a644ce
- (void)endService;	// IMP=0x0010000000a644ab
- (void)beginService;	// IMP=0x0010000000a64488
- (id)init;	// IMP=0x0010000000a64465

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

