//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, MNNavigationProxyUpdater, MNNavigationSession, MNNavigationTraceManager, MNRouteManager, MNSessionUpdateManager, MNSimulationLocationProvider, NSMutableDictionary, NSString;
@protocol MNNavigationSessionManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationSessionManager : NSObject
{
    id <MNNavigationSessionManagerDelegate> _delegate;	// 8 = 0x8
    MNSessionUpdateManager *_updateManager;	// 16 = 0x10
    MNNavigationSession *_navigationSession;	// 24 = 0x18
    MNRouteManager *_routeManager;	// 32 = 0x20
    MNNavigationProxyUpdater *_proxyUpdater;	// 40 = 0x28
    MNNavigationTraceManager *_traceManager;	// 48 = 0x30
    MNSimulationLocationProvider *_simulationLocationProvider;	// 56 = 0x38
    NSMutableDictionary *_trafficIncidentAlertCallbacks;	// 64 = 0x40
    GEOApplicationAuditToken *_auditToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001212ec
@property(readonly, nonatomic) MNSimulationLocationProvider *simulationLocationProvider; // @synthesize simulationLocationProvider=_simulationLocationProvider;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
@property(readonly, nonatomic) MNSessionUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic) __weak id <MNNavigationSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigationTraceManagerDidFailToRecordTrace:(id)arg1;	// IMP=0x0000000000121283
- (void)navigationTraceManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x0000000000121227
- (void)userOptionsEngine:(id)arg1 didChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x000000000012120b
- (void)navigationSession:(id)arg1 didSendNavigationServiceCallback:(id)arg2;	// IMP=0x00000000001211af
- (void)navigationSession:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x0000000000121153
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x0000000000121110
- (void)navigationSession:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x00000000001210b4
- (void)navigationSession:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000121058
- (void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x0000000000120ffc
- (void)navigationSession:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x0000000000120ff6
- (void)navigationSession:(id)arg1 didDismissTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000120e3c
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000120de0
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000120d84
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000120ccf
- (void)navigationSession:(id)arg1 didUpdateVehicleParkingInfo:(id)arg2;	// IMP=0x0000000000120c41
- (void)navigationSession:(id)arg1 didUpdateBackgroundWalkingRoute:(id)arg2;	// IMP=0x0000000000120bb3
- (void)navigationSession:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000120b57
- (void)navigationSession:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000120afb
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0000000000120ab8
- (void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0000000000120a5c
- (void)navigationSession:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0000000000120a00
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x00000000001209a4
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x0000000000120948
- (void)navigationSession:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x0000000000120905
- (void)navigationSession:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x00000000001208a9
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x000000000012084d
- (void)navigationSessionEndGuidanceUpdate:(id)arg1;	// IMP=0x0000000000120817
- (void)navigationSessionBeginGuidanceUpdate:(id)arg1;	// IMP=0x00000000001207e1
- (void)navigationSessionHideSecondaryStep:(id)arg1;	// IMP=0x00000000001207ab
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x00000000001206fc
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x00000000001206b7
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x00000000001205ee
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x000000000012059f
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x0000000000120543
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x00000000001204d0
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x0000000000120474
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x0000000000120418
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 rerouteReason:(unsigned long long)arg4;	// IMP=0x0000000000120388
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x00000000001202b2
- (void)navigationSessionDidCancelReroute:(id)arg1;	// IMP=0x000000000012027c
- (void)navigationSessionWillReroute:(id)arg1;	// IMP=0x0000000000120246
- (void)navigationSession:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x00000000001201fc
- (void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x00000000001201aa
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x000000000012014e
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x000000000012005e
- (void)navigationSession:(id)arg1 didReachETAUpdatePosition:(id)arg2;	// IMP=0x0000000000120045
- (void)navigationSession:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x0000000000120000
- (void)navigationSessionWillResumeFromPause:(id)arg1;	// IMP=0x000000000011ffca
- (void)navigationSessionWillPause:(id)arg1;	// IMP=0x000000000011ff94
- (void)navigationSessionDidArrive:(id)arg1;	// IMP=0x000000000011ff5e
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;	// IMP=0x000000000011ff28
- (void)navigationSession:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x000000000011fea1
- (void)navigationSession:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000011fe40
- (void)navigationSession:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x000000000011fddf
- (void)navigationSession:(id)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;	// IMP=0x000000000011fd9a
- (void)navigationSessionDidFinishLocationUpdate:(id)arg1;	// IMP=0x000000000011fd64
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x000000000011fd08
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x000000000011fc79
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x000000000011fb4a
- (void)navigationSession:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;	// IMP=0x000000000011fb05
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x000000000011fac2
@property(readonly, nonatomic) int state;
@property(readonly, nonatomic) unsigned long long targetLegIndex;
- (id)recentLocationHistoryForUpdateManager:(id)arg1;	// IMP=0x000000000011fa80
- (id)userLocationForUpdateManager:(id)arg1;	// IMP=0x000000000011fa6a
- (id)routeInfoForUpdateManager:(id)arg1 reason:(unsigned long long)arg2;	// IMP=0x000000000011fa54
- (_Bool)wantsETAUpdates;	// IMP=0x000000000011fa3e
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2;	// IMP=0x000000000011fa28
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;	// IMP=0x000000000011fa12
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;	// IMP=0x000000000011f9a8
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x000000000011f94c
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x000000000011f8f0
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;	// IMP=0x000000000011f886
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;	// IMP=0x000000000011f6a4
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x000000000011f68e
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x000000000011f678
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x000000000011f63a
- (id)_traceManager;	// IMP=0x000000000011f5eb
- (id)_proxyUpdater;	// IMP=0x000000000011f5b0
- (id)_routeManager;	// IMP=0x000000000011f550
- (void)setSimulationPosition:(double)arg1;	// IMP=0x000000000011f53a
- (void)setSimulationSpeedMultiplier:(double)arg1;	// IMP=0x000000000011f524
- (void)setSimulationSpeedOverride:(double)arg1;	// IMP=0x000000000011f50e
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x000000000011f44c
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x000000000011f1ed
- (void)setTracePosition:(double)arg1;	// IMP=0x000000000011f186
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x000000000011f133
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x000000000011f0d7
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000011ef01
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x000000000011eebc
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x000000000011ee74
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x000000000011ee5e
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x000000000011eca3
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x000000000011ec15
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x000000000011ebd7
- (void)setIsDisplayingNavigationTray:(_Bool)arg1;	// IMP=0x000000000011ebc1
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x000000000011ebab
- (void)stopCurrentGuidancePrompt;	// IMP=0x000000000011eb95
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;	// IMP=0x000000000011ea47
- (_Bool)repeatCurrentTrafficAlert;	// IMP=0x000000000011e903
- (_Bool)repeatCurrentGuidance;	// IMP=0x000000000011e7bf
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)arg1;	// IMP=0x000000000011e7a9
- (void)switchToDestinationRoute;	// IMP=0x000000000011e793
- (void)changeTransportType:(int)arg1 route:(id)arg2;	// IMP=0x000000000011e62f
- (void)switchToRoute:(id)arg1;	// IMP=0x000000000011e4cf
- (void)forceReroute;	// IMP=0x000000000011e38b
- (void)resumeOriginalDestination;	// IMP=0x000000000011e247
- (void)updateDestination:(id)arg1;	// IMP=0x000000000011e0e7
- (void)advanceToNextLeg;	// IMP=0x000000000011dfa3
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011de55
- (void)insertWaypoint:(id)arg1;	// IMP=0x000000000011dcf5
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x000000000011db95
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x000000000011da22
- (void)updateWithInitialLocation:(id)arg1;	// IMP=0x000000000011da0c
- (void)startNavigationWithDetails:(id)arg1;	// IMP=0x000000000011d5a1
- (void)updateForStartNavigation:(id)arg1;	// IMP=0x000000000011d072
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x000000000011cd79
- (void)dealloc;	// IMP=0x000000000011ccea
- (id)initWithAuditToken:(id)arg1;	// IMP=0x000000000011cc0d
- (id)init;	// IMP=0x000000000011cbe3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

