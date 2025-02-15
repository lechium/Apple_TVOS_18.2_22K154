//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MNNavigationServiceClientInterface;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceLocalProxy : NSObject
{
    id <MNNavigationServiceClientInterface> _delegate;	// 8 = 0x8
    unsigned long long _navigationServiceState;	// 16 = 0x10
    CDUnknownBlockType _navigationServiceActiveBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000034ce4
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)navigationSessionManager:(id)arg1 didSendNavigationServiceCallback:(id)arg2;	// IMP=0x0000000000034c61
- (void)navigationSessionManager:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x0000000000034c05
- (void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x0000000000034ba9
- (void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x0000000000034b4d
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;	// IMP=0x0000000000034af1
- (void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x0000000000034aae
- (void)navigationSessionManager:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x0000000000034a52
- (void)navigationSessionManager:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000349f6
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x000000000003499a
- (void)navigationSessionManager:(id)arg1 didDismissTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000003493e
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000348e2
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000034886
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;	// IMP=0x000000000003482a
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000347ce
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x0000000000034772
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x000000000003472f
- (void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x00000000000346d3
- (void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0000000000034677
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x000000000003461b
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00000000000345bf
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x000000000003457c
- (void)navigationSessionManager:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x0000000000034520
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00000000000344c4
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;	// IMP=0x000000000003448e
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;	// IMP=0x0000000000034458
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;	// IMP=0x0000000000034422
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x0000000000034373
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x000000000003432e
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x0000000000034265
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x0000000000034216
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;	// IMP=0x00000000000341ba
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;	// IMP=0x0000000000034147
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000340eb
- (void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x000000000003408f
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x0000000000034030
- (void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;	// IMP=0x0000000000033fd4
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;	// IMP=0x0000000000033f9e
- (void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 location:(id)arg3 withAlternateRoutes:(id)arg4 rerouteReason:(unsigned long long)arg5;	// IMP=0x0000000000033ef6
- (void)navigationSessionManagerWillReroute:(id)arg1;	// IMP=0x0000000000033ec0
- (void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;	// IMP=0x0000000000033e5f
- (void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x0000000000033e15
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;	// IMP=0x0000000000033dc3
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;	// IMP=0x0000000000033d67
- (void)navigationSessionManager:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x0000000000033d22
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;	// IMP=0x0000000000033cec
- (void)navigationSessionManagerWillPause:(id)arg1;	// IMP=0x0000000000033cb6
- (void)navigationSessionManagerDidArrive:(id)arg1;	// IMP=0x0000000000033c80
- (void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;	// IMP=0x0000000000033c4a
- (void)navigationSessionManager:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x0000000000033bda
- (void)navigationSessionManager:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000033b79
- (void)navigationSessionManager:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0000000000033b18
- (void)navigationSessionManager:(id)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;	// IMP=0x0000000000033ad3
- (void)navigationSessionManagerDidFinishLocationUpdate:(id)arg1;	// IMP=0x0000000000033a9d
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x0000000000033a41
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00000000000339f7
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;	// IMP=0x00000000000339b4
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000033743
- (void)navigationSessionManager:(id)arg1 shouldEndWithReason:(unsigned long long)arg2;	// IMP=0x000000000003372e
- (unsigned long long)_serviceStateForStateType:(unsigned long long)arg1;	// IMP=0x000000000003370d
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000000335bd
- (void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000003346d
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000333a4
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000332db
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x00000000000331ae
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033128
- (void)setSimulationPosition:(double)arg1;	// IMP=0x000000000003308e
- (void)setSimulationSpeedMultiplier:(double)arg1;	// IMP=0x0000000000032ff4
- (void)setSimulationSpeedOverride:(double)arg1;	// IMP=0x0000000000032f5a
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x0000000000032e91
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x0000000000032dc8
- (void)setTracePosition:(double)arg1;	// IMP=0x0000000000032d2e
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x0000000000032c94
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x0000000000032bfd
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x0000000000032b24
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x0000000000032a8c
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000329f4
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x0000000000032950
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000328b0
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x0000000000032818
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x0000000000032781
- (void)setIsDisplayingNavigationTray:(_Bool)arg1;	// IMP=0x00000000000326ea
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x0000000000032654
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x00000000000325bf
- (void)stopCurrentGuidancePrompt;	// IMP=0x000000000003256a
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032490
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000323c7
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000322fe
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)arg1;	// IMP=0x0000000000032266
- (void)changeUserOptions:(id)arg1;	// IMP=0x0000000000032165
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x00000000000320cd
- (void)switchToDestinationRoute;	// IMP=0x0000000000032078
- (void)changeTransportType:(int)arg1 route:(id)arg2;	// IMP=0x0000000000031fa0
- (void)switchToRoute:(id)arg1;	// IMP=0x0000000000031ed7
- (void)forceReroute;	// IMP=0x0000000000031e82
- (void)resumeOriginalDestination;	// IMP=0x0000000000031e2d
- (void)updateDestination:(id)arg1;	// IMP=0x0000000000031d64
- (void)advanceToNextLeg;	// IMP=0x0000000000031d0f
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000031c77
- (void)insertWaypoint:(id)arg1;	// IMP=0x0000000000031bae
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x0000000000031ae5
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x000000000003196b
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000317b1
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x0000000000031685
- (void)reset;	// IMP=0x0000000000031568
- (void)start;	// IMP=0x0000000000031460
- (void)dealloc;	// IMP=0x00000000000313b3
- (id)init;	// IMP=0x000000000003135d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

