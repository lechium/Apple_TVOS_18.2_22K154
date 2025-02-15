//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNStartNavigationDetails, MNStartNavigationReconnectionDetails, MNUserOptions, NSArray, NSHashTable, NSMutableArray, NSString, NSXPCConnection, geo_isolater;
@protocol MNNavigationServiceClientInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceRemoteProxy : NSObject
{
    _Bool _applicationActive;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    MNUserOptions *_userOptions;	// 24 = 0x18
    geo_isolater *_clientsLock;	// 32 = 0x20
    NSHashTable *_clients;	// 40 = 0x28
    MNStartNavigationDetails *_startNavigationDetails;	// 48 = 0x30
    geo_isolater *_interruptionDatesLock;	// 56 = 0x38
    NSMutableArray *_interruptionDates;	// 64 = 0x40
    MNStartNavigationReconnectionDetails *_reconnectionDetails;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_serialQueue;	// 80 = 0x50
    long long _sandboxHandle;	// 88 = 0x58
    id <MNNavigationServiceClientInterface> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000d0769
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)navigationServiceProxy:(id)arg1 didSendNavigationServiceCallback:(id)arg2;	// IMP=0x00000000000d0681
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;	// IMP=0x00000000000d05a2
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000000cff0e
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000000cfd14
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000cfc36
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000cfb58
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf9d2
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf8f4
- (void)setSimulationPosition:(double)arg1;	// IMP=0x00000000000cf852
- (void)setSimulationSpeedMultiplier:(double)arg1;	// IMP=0x00000000000cf7b0
- (void)setSimulationSpeedOverride:(double)arg1;	// IMP=0x00000000000cf70e
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000cf630
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000cf552
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000cf4b0
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000cf40e
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000cf36f
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000cf27b
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000cf1db
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000cf13b
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000cf08f
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000cefe6
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000cef46
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000ceea7
- (void)setIsDisplayingNavigationTray:(_Bool)arg1;	// IMP=0x00000000000cee08
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x00000000000ced69
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x00000000000ceccb
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000cec3f
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cead8
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ce995
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ce852
- (void)setVoiceGuidanceLevelOverride:(unsigned long long)arg1;	// IMP=0x00000000000ce7b2
- (void)changeUserOptions:(id)arg1;	// IMP=0x00000000000ce6c3
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x00000000000ce623
- (void)switchToDestinationRoute;	// IMP=0x00000000000ce597
- (void)changeTransportType:(int)arg1 route:(id)arg2;	// IMP=0x00000000000ce4a4
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000ce3c6
- (void)forceReroute;	// IMP=0x00000000000ce33a
- (void)resumeOriginalDestination;	// IMP=0x00000000000ce2ae
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000ce1d0
- (void)advanceToNextLeg;	// IMP=0x00000000000ce144
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ce0a4
- (void)insertWaypoint:(id)arg1;	// IMP=0x00000000000cdfc6
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x00000000000cdee8
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000cdd0c
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cdc3e
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000cdaf1
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000cda01
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000cd834
- (void)_releaseSandboxExtension;	// IMP=0x00000000000cd742
- (void)_consumeSandboxExtension:(char *)arg1;	// IMP=0x00000000000cd629
- (id)_remoteObjectProxy;	// IMP=0x00000000000cd3de
- (void)_startNavigationWithDetails:(id)arg1;	// IMP=0x00000000000cd217
- (void)_closeConnection;	// IMP=0x00000000000cd07a
- (_Bool)_shouldReconnectWithInterruptionOnDate:(id)arg1;	// IMP=0x00000000000ccede
- (void)_restoreIdleConnection;	// IMP=0x00000000000ccdb5
- (void)_restoreNavigationSession;	// IMP=0x00000000000cc8b2
- (void)_handleDisconnect;	// IMP=0x00000000000cc43d
- (void)_handleInvalidation;	// IMP=0x00000000000cc2b8
- (void)_handleInterruption;	// IMP=0x00000000000cc160
- (_Bool)_hasNavigationServiceEntitlement;	// IMP=0x00000000000cbf39
- (void)_setExpectedClassesForClientInterface:(id)arg1;	// IMP=0x00000000000cbaa8
- (void)_openConnection;	// IMP=0x00000000000cb2ad
- (void)_updateConnection;	// IMP=0x00000000000cb197
@property(readonly, nonatomic) unsigned long long clientCount;
@property(readonly, nonatomic) unsigned long long interruptionCount;
@property(readonly, nonatomic) NSArray *interruptionDates;
- (_Bool)isOpenForClient:(id)arg1;	// IMP=0x00000000000cad75
- (void)closeForClient:(id)arg1;	// IMP=0x00000000000cacba
- (void)openForClient:(id)arg1;	// IMP=0x00000000000caad8
- (void)dealloc;	// IMP=0x00000000000caa9a
- (id)init;	// IMP=0x00000000000ca9d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

