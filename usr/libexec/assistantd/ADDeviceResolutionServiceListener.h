//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceCircleManager, AFInstanceContext, MISSING_TYPE, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADDeviceResolutionServiceListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    ADDeviceCircleManager *_deviceCircleManager;	// 16 = 0x10
    AFInstanceContext *_instanceContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x00200000002e9e01
- (void)getDeviceContextAndProximityMapIncludingAllReachableDevice:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e9d34
- (_Bool)_peerIsPairedPhone:(id)arg1;	// IMP=0x00100000002e9ce6
- (_Bool)_peerIsPairedWatch:(id)arg1;	// IMP=0x00100000002e9c98
- (void)meDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e9b8a
- (void)_pairedCompanionDeviceFromSharedDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e9a2a
- (void)pairedCompanionDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e98e2
- (id)_devicesMatchingDescriptions:(id)arg1 capabilitiesTuples:(id)arg2 proximityMap:(id)arg3;	// IMP=0x00100000002e9444
- (void)getDevicesMatchingCapabilityDescriptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e9246
- (void)getSourceDeviceForContextWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002e9191
- (void)getAllReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002e90fe
- (void)getContextAndProximitySnapshotForCurrentRequestForDeviceUnits:(id)arg1 serviceContexts:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e8f00
- (void)logCrossDeviceCommandFailed:(id)arg1 action:(id)arg2 reason:(id)arg3;	// IMP=0x00100000002e8d96
- (void)_logAFAnalyticsCrossDeviceCommandHandledEventWithResult:(int)arg1 halActionResult:(int)arg2 contextProximityPairs:(id)arg3;	// IMP=0x00100000002e8b63
- (_Bool)_shouldLogAFAnalyticsCrossDeviceEvent:(id)arg1;	// IMP=0x00100000002e8b39
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 actionResult:(id)arg3 homeKitTarget:(id)arg4 contextProximityPairs:(id)arg5;	// IMP=0x00100000002e8926
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 homeKitTarget:(id)arg3 contextProximityPairs:(id)arg4;	// IMP=0x00100000002e88fa
- (void)logCrossDeviceCommandEnded:(id)arg1 action:(id)arg2 contextProximityPairs:(id)arg3;	// IMP=0x00100000002e88cd
- (void)logCrossDeviceCommandStarted:(id)arg1 action:(id)arg2;	// IMP=0x00100000002e879c
- (void)logCrossDeviceRequestLink:(id)arg1 halId:(id)arg2;	// IMP=0x00100000002e85ea
- (void)logCrossDeviceRequestLink:(id)arg1 halRequestId:(id)arg2;	// IMP=0x00100000002e85d8
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000002e8387
- (void)setupListener;	// IMP=0x00100000002e833c
- (id)initWithInstanceContext:(id)arg1 deviceCircleManager:(id)arg2;	// IMP=0x00100000002e815b
- (int)_halDevicePowerStateFromSystemStateSnapshot:(id)arg1;	// IMP=0x001000000032b320
- (int)_halDeviceFamilyFromInterfaceIdiom:(id)arg1;	// IMP=0x001000000032b22a
- (int)_halMediaPlayerStateFromPlaybackState:(long long)arg1;	// IMP=0x001000000032b20f
- (int)_halDeviceProximityFromProximity:(long long)arg1;	// IMP=0x001000000032b1c4
- (double)_generalizeTimeIntervalsForPrivacy:(double)arg1;	// IMP=0x001000000032b1a1
- (id)_halDeviceFromContext:(id)arg1 proximity:(long long)arg2;	// IMP=0x001000000032a824
- (id)_crossDeviceCommandExecutionEndedEvent:(int)arg1 actionResult:(int)arg2 halId:(id)arg3 contextProximityPairs:(id)arg4 homeKitTarget:(int)arg5;	// IMP=0x001000000032a5a7
- (id)_crossDeviceCommandExecutionFailedEvent:(int)arg1 action:(int)arg2 halId:(id)arg3;	// IMP=0x001000000032a431
- (id)_crossDeviceCommandExecutionStartedEvent:(int)arg1 halId:(id)arg2;	// IMP=0x001000000032a2d9
- (int)_halHomeKitTargetFromTarget:(id)arg1;	// IMP=0x001000000032a2b2
- (int)_halActionFromAction:(id)arg1;	// IMP=0x001000000032a28b
- (int)_halActionResultFromActionResult:(id)arg1;	// IMP=0x001000000032a264
- (id)_resultStringFromHALAction:(int)arg1 actionResult:(int)arg2;	// IMP=0x001000000032a0f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

