//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSArray, NSMutableSet, NSString;

@interface CLBackgroundInertialOdometryService : CLIntersiloService
{
    struct unique_ptr<CLMotionNotifier::Dispatcher, std::default_delete<CLMotionNotifier::Dispatcher>> _backgroundBatchDispatcher;	// 8 = 0x8
    float _trajectorySampleInterval;	// 16 = 0x10
    struct unique_ptr<CLInertialOdometryNotifier::GeomagneticModelClient, std::default_delete<CLInertialOdometryNotifier::GeomagneticModelClient>> _geomagneticModelClient;	// 24 = 0x18
    _Bool _isStatic;	// 32 = 0x20
    float _rotationArbitraryToTrueNorth;	// 36 = 0x24
    NSMutableSet *_activeClients;	// 40 = 0x28
    NSArray *_attitude;	// 48 = 0x30
}

+ (id)getSilo;	// IMP=0x0020000000372504
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003724eb
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000037248e
+ (_Bool)isAvailable;	// IMP=0x00100000003722fb
- (id).cxx_construct;	// IMP=0x0020000000373c4a
- (void).cxx_destruct;	// IMP=0x0010000000373c05
@property(retain, nonatomic) NSArray *attitude; // @synthesize attitude=_attitude;
@property(retain, nonatomic) NSMutableSet *activeClients; // @synthesize activeClients=_activeClients;
- (id)sessionForClient:(byref id)arg1;	// IMP=0x0010000000373a88
- (void)toggleUpdates;	// IMP=0x0010000000373823
- (void)onBackgroundBatchData:(const struct BackgroundInertialOdometryBatch *)arg1;	// IMP=0x0010000000372fed
- (void)stopBackgroundInertialOdometryUpdatesForClient:(byref id)arg1;	// IMP=0x0010000000372dd8
- (void)startBackgroundInertialOdometryUpdatesForClient:(byref id)arg1 withIdentifier:(id)arg2 usingReferenceFrame:(unsigned long long)arg3;	// IMP=0x0010000000372a0b
- (void)isAvailableWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000003729dc
- (void)endService;	// IMP=0x0010000000372963
- (void)beginService;	// IMP=0x00100000003725eb
- (void)dealloc;	// IMP=0x001000000037259d
- (id)init;	// IMP=0x0010000000372560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

