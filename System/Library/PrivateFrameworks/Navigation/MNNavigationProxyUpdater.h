//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEONavigationProxy, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationProxyUpdater : NSObject
{
    GEONavigationProxy *_navigationProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000124c14
- (void)navigationSession:(id)arg1 didSendNavigationServiceCallback:(id)arg2;	// IMP=0x0000000000124bbc
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0000000000124ba4
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x0000000000124b8b
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x0000000000124b73
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x0000000000124b5a
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x0000000000124b3b
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x0000000000124b1c
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 rerouteReason:(unsigned long long)arg4;	// IMP=0x0000000000124acc
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x0000000000124870
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x0000000000124790
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00000000001242f6
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x000000000012404a
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000012402e
- (void)navigationSession:(id)arg1 didUpdateStepNameInfo:(id)arg2;	// IMP=0x0000000000124015
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0000000000123ffc
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x0000000000123e2c
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x0000000000123e14
- (void)navigationSession:(id)arg1 didStartWithRoute:(id)arg2 navigationType:(long long)arg3 isResumingMultipointRoute:(_Bool)arg4 isReconnecting:(_Bool)arg5;	// IMP=0x0000000000123c3a
- (int)_geoNavigationTypeForNavigationType:(long long)arg1;	// IMP=0x0000000000123c1f
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x0000000000123c09
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x0000000000123bf3
- (void)updateClusteredSectionSelectedRideForNavigationSession:(id)arg1;	// IMP=0x0000000000123b77
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x0000000000123b61
- (void)navigationSessionStopped:(id)arg1;	// IMP=0x0000000000123ac0
- (void)enteredRoutePreviewWithTransportType:(int)arg1;	// IMP=0x0000000000123a9d
- (id)init;	// IMP=0x0000000000123a00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

