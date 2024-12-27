//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MNNavigationSessionManager, MNStartNavigationDetails;

__attribute__((visibility("hidden")))
@interface MNNavigationStateGuidance
{
    MNNavigationSessionManager *_navigationSessionManager;	// 8 = 0x8
    MNStartNavigationDetails *_startDetails;	// 16 = 0x10
}

+ (id)guidanceStateForStartDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3;	// IMP=0x00600000000c3ccc
- (void).cxx_destruct;	// IMP=0x00000000000c4a8b
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000c4a6e
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000c4a51
- (void)setSimulationPosition:(double)arg1;	// IMP=0x00000000000c4a34
- (void)setSimulationSpeedMultiplier:(double)arg1;	// IMP=0x00000000000c4a17
- (void)setSimulationSpeedOverride:(double)arg1;	// IMP=0x00000000000c49fa
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000c49dd
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000c49c0
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000c49a3
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000c4986
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000c4969
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000c494c
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000c492f
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000c4912
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000c48f5
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000c48d8
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000c48bb
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000c489e
- (void)setIsDisplayingNavigationTray:(_Bool)arg1;	// IMP=0x00000000000c4881
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000c4864
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c480c
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c47c3
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c477a
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)arg1;	// IMP=0x00000000000c475d
- (void)switchToDestinationRoute;	// IMP=0x00000000000c4740
- (void)changeTransportType:(int)arg1 route:(id)arg2;	// IMP=0x00000000000c4723
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000c4706
- (void)forceReroute;	// IMP=0x00000000000c46e9
- (void)resumeOriginalDestination;	// IMP=0x00000000000c46cc
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000c46af
- (void)advanceToNextLeg;	// IMP=0x00000000000c4692
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c4675
- (void)insertWaypoint:(id)arg1;	// IMP=0x00000000000c4658
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x00000000000c463b
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000c4583
- (void)postEnterState;	// IMP=0x00000000000c4524
- (void)preEnterState;	// IMP=0x00000000000c43d6
- (void)leaveState;	// IMP=0x00000000000c4375
- (void)enterState;	// IMP=0x00000000000c42b1
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 startDetails:(id)arg3;	// IMP=0x00000000000c4209
- (id)simulationLocationProvider;	// IMP=0x00000000000c41ec
- (id)traceManager;	// IMP=0x00000000000c41cf
- (_Bool)shouldClearStoredRoutes;	// IMP=0x00000000000c41c7
- (id)clParameters;	// IMP=0x00000000000c3fe5
- (unsigned long long)desiredLocationProviderType;	// IMP=0x00000000000c3f42
- (_Bool)requiresHighMemoryThreshold;	// IMP=0x00000000000c3f3a
- (id)currentDestination;	// IMP=0x00000000000c3edf

@end

