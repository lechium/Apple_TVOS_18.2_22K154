//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HHAEndpointMonitor, HHAHubMonitor, HHAMessageService, HHANode, NSString, NSUUID;
@protocol HHAAssignmentAlgorithm, HHATimer, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HHALeaderStrategy : NSObject
{
    _Bool _registeredForIdleNotifications;	// 8 = 0x8
    id <HHAAssignmentAlgorithm> _assignmentAlgorithm;	// 16 = 0x10
    HHANode *_node;	// 24 = 0x18
    id <HHATimer> _logTimer;	// 32 = 0x20
    HHAMessageService *_messageService;	// 40 = 0x28
    unsigned long long _timesEndpointsReassigned;	// 48 = 0x30
    id <HHATimer> _syncTimer;	// 56 = 0x38
    HHAEndpointMonitor *_endpointMonitor;	// 64 = 0x40
    HHAHubMonitor *_hubMonitor;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000aee3
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool registeredForIdleNotifications; // @synthesize registeredForIdleNotifications=_registeredForIdleNotifications;
@property(readonly, nonatomic) HHAHubMonitor *hubMonitor; // @synthesize hubMonitor=_hubMonitor;
@property(readonly, nonatomic) HHAEndpointMonitor *endpointMonitor; // @synthesize endpointMonitor=_endpointMonitor;
@property(readonly, nonatomic) id <HHATimer> syncTimer; // @synthesize syncTimer=_syncTimer;
@property(readonly, nonatomic) unsigned long long timesEndpointsReassigned; // @synthesize timesEndpointsReassigned=_timesEndpointsReassigned;
@property(readonly, nonatomic) __weak HHAMessageService *messageService; // @synthesize messageService=_messageService;
@property(readonly, nonatomic) id <HHATimer> logTimer; // @synthesize logTimer=_logTimer;
@property(readonly, nonatomic) __weak HHANode *node; // @synthesize node=_node;
@property(readonly, nonatomic) id <HHAAssignmentAlgorithm> assignmentAlgorithm; // @synthesize assignmentAlgorithm=_assignmentAlgorithm;
- (void)generateMetricsReport;	// IMP=0x000000000000a6c7
- (id)_generateEndpointScoreDictionary;	// IMP=0x000000000000a3ee
- (id)_generateAssignmentDictionary;	// IMP=0x000000000000a279
- (void)monitor:(id)arg1 didObserveHubsLost:(id)arg2;	// IMP=0x000000000000a1c2
- (void)monitor:(id)arg1 didObserveActiveHubUpdate:(id)arg2;	// IMP=0x0000000000009c9a
- (id)assignedHubById:(id)arg1;	// IMP=0x0000000000009c68
- (void)reportActivationOfEndpoint:(id)arg1 toHub:(id)arg2 withAttachLatency:(double)arg3;	// IMP=0x00000000000098bf
- (void)requestAssignmentOfEndpoint:(id)arg1;	// IMP=0x00000000000098ad
- (void)executeRevokeAssignmentOfEndpoint:(id)arg1 fromHub:(id)arg2;	// IMP=0x000000000000989b
- (void)executeAssignmentOfEndpoint:(id)arg1 toHub:(id)arg2;	// IMP=0x0000000000009889
- (void)reviewAssignmentForEndpoint:(id)arg1;	// IMP=0x00000000000097b8
- (void)monitor:(id)arg1 didUpdateEndpoint:(id)arg2;	// IMP=0x000000000000965d
- (void)monitor:(id)arg1 didRemoveEndpoint:(id)arg2;	// IMP=0x0000000000009589
- (void)_processSetIdleGracePeriodCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000093d4
- (void)_processSetHubConcernDebounceCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000907f
- (void)_processSetEndpointIdleStateCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008d61
- (void)_processDemandEndpointReassignmentCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008901
- (void)_processRequestReassignmentDebugCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008356
- (void)_processScoreEndpointsDebugCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000082f4
- (void)handleDebugCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007ce0
- (void)handleRequestForEndpointAssignmentDataWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007be7
- (void)handleIdleStatusReport:(id)arg1;	// IMP=0x0000000000007bd1
- (void)handleNodesChanged:(id)arg1;	// IMP=0x0000000000007bbb
- (void)handleAttributeUpdate:(id)arg1;	// IMP=0x0000000000007ac5
- (void)handleAssignmentFailureForEndpoint:(id)arg1 toHub:(id)arg2;	// IMP=0x0000000000007905
- (void)invalidate;	// IMP=0x000000000000788a
- (void)startStrategy;	// IMP=0x000000000000762a
@property(readonly, nonatomic) NSString *meshRole;
- (id)initWithNode:(id)arg1 messageService:(id)arg2 queue:(id)arg3 timerFactory:(id)arg4;	// IMP=0x000000000000742f
- (id)initWithNode:(id)arg1 messageService:(id)arg2 queue:(id)arg3 timerFactory:(id)arg4 endpointMonitorFactory:(id)arg5 hubMonitorFactory:(id)arg6 assignmentAlgorithmFactory:(id)arg7;	// IMP=0x0000000000006f5c
- (void)_handlePingFromHub:(id)arg1;	// IMP=0x0000000000006e6d
- (void)_registerForIdleNotifications:(_Bool)arg1;	// IMP=0x0000000000006d72
- (void)_reviewSingleAssignment:(id)arg1;	// IMP=0x0000000000006b2e
- (void)_reviewAllAssignments;	// IMP=0x0000000000006901
- (id)_maybePerformAssignments:(id)arg1;	// IMP=0x0000000000006491
- (void)_synchronizeEndpointAssignments;	// IMP=0x00000000000061a1
- (void)_revokeEndpointAssignment:(id)arg1 fromHub:(id)arg2;	// IMP=0x0000000000005ef1
- (void)_assignEndpoint:(id)arg1 toHub:(id)arg2;	// IMP=0x0000000000005bb9
- (_Bool)_hubIsSelf:(id)arg1;	// IMP=0x0000000000005b12
@property(readonly, nonatomic) NSUUID *leaderId;
- (void)_handleSyncTimerFired;	// IMP=0x0000000000005abd
- (void)_handleLogTimerFired;	// IMP=0x00000000000056c4
- (void)_fromMeshDebugCommandMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000179eb
- (void)_fromMeshListAssignmentsMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000178e4
- (void)_fromMeshHandleIdleReportMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017839
- (void)_fromMeshHandleAssignmentFailureMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001773f
- (void)_fromMeshHandleAttributeUpdateMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017674
- (void)_fromMeshHandlePingMsg:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017580
- (void)unregisterForMessagesFromService:(id)arg1;	// IMP=0x00000000000174f8
- (void)registerForMessagesWithService:(id)arg1;	// IMP=0x0000000000016f74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

