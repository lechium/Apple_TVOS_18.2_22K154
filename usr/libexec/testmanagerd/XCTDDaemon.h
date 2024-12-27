//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, XCTestManagerIDEServer;
@protocol OS_dispatch_queue, OS_dispatch_source, XCTDDiagnosticsProviding, XCTDRemoteRunnerConnectionBrokering;

@interface XCTDDaemon : NSObject
{
    XCTestManagerIDEServer *_ideServer;	// 8 = 0x8
    NSXPCListener *_testBundleConnectionListener;	// 16 = 0x10
    NSXPCListener *_testTargetBootstrapConnectionListener;	// 24 = 0x18
    NSMutableDictionary *_sessionsByIdentifier;	// 32 = 0x20
    NSMutableArray *_unidentifiedSessions;	// 40 = 0x28
    NSMutableArray *_controlSessions;	// 48 = 0x30
    NSMutableArray *_testSessions;	// 56 = 0x38
    NSMutableSet *_remoteAutomationSessions;	// 64 = 0x40
    NSMutableDictionary *_pendingTestConnectionRequests;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSMutableDictionary *_pendingTargetPIDs;	// 88 = 0x58
    NSMutableDictionary *_targetSessionRequestsByPID;	// 96 = 0x60
    NSMutableDictionary *_targetSessionsByPID;	// 104 = 0x68
    NSMutableDictionary *_observationBlocksForTransportHandoff;	// 112 = 0x70
    NSMutableDictionary *_connectionTransferResultsByPID;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_userSignalSource;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_sigtermSource;	// 136 = 0x88
    id <XCTDDiagnosticsProviding> _diagnosticsProvider;	// 144 = 0x90
    id <XCTDRemoteRunnerConnectionBrokering> _remoteRunnerConnectionBroker;	// 152 = 0x98
}

+ (id)dataContainerRelativePathForURL:(id)arg1;	// IMP=0x0020000000038b3e
+ (id)userName;	// IMP=0x0010000000038af5
+ (id)dataContainerURLPrefix;	// IMP=0x00100000000389c5
+ (id)attachmentsDirectory;	// IMP=0x0010000000038962
+ (void)setDataContainerRootURL:(id)arg1;	// IMP=0x001000000003894e
+ (id)dataContainerRootURL;	// IMP=0x001000000003893d
+ (_Bool)hasAppleInternalSecurityPolicies;	// IMP=0x001000000003892c
- (void).cxx_destruct;	// IMP=0x002000000003d208
@property(readonly) id <XCTDRemoteRunnerConnectionBrokering> remoteRunnerConnectionBroker; // @synthesize remoteRunnerConnectionBroker=_remoteRunnerConnectionBroker;
@property(readonly) id <XCTDDiagnosticsProviding> diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(retain) NSObject<OS_dispatch_source> *sigtermSource; // @synthesize sigtermSource=_sigtermSource;
@property(retain) NSObject<OS_dispatch_source> *userSignalSource; // @synthesize userSignalSource=_userSignalSource;
@property(retain) NSMutableDictionary *connectionTransferResultsByPID; // @synthesize connectionTransferResultsByPID=_connectionTransferResultsByPID;
@property(retain) NSMutableDictionary *observationBlocksForTransportHandoff; // @synthesize observationBlocksForTransportHandoff=_observationBlocksForTransportHandoff;
@property(retain) NSMutableDictionary *targetSessionsByPID; // @synthesize targetSessionsByPID=_targetSessionsByPID;
@property(retain) NSMutableDictionary *targetSessionRequestsByPID; // @synthesize targetSessionRequestsByPID=_targetSessionRequestsByPID;
@property(retain) NSMutableDictionary *pendingTargetPIDs; // @synthesize pendingTargetPIDs=_pendingTargetPIDs;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *pendingTestConnectionRequests; // @synthesize pendingTestConnectionRequests=_pendingTestConnectionRequests;
@property(retain) NSMutableSet *remoteAutomationSessions; // @synthesize remoteAutomationSessions=_remoteAutomationSessions;
@property(retain) NSMutableArray *testSessions; // @synthesize testSessions=_testSessions;
@property(retain) NSMutableArray *controlSessions; // @synthesize controlSessions=_controlSessions;
@property(retain) NSMutableArray *unidentifiedSessions; // @synthesize unidentifiedSessions=_unidentifiedSessions;
@property(retain) NSMutableDictionary *sessionsByIdentifier; // @synthesize sessionsByIdentifier=_sessionsByIdentifier;
@property(retain) NSXPCListener *testTargetBootstrapConnectionListener; // @synthesize testTargetBootstrapConnectionListener=_testTargetBootstrapConnectionListener;
@property(retain) NSXPCListener *testBundleConnectionListener; // @synthesize testBundleConnectionListener=_testBundleConnectionListener;
@property(retain) XCTestManagerIDEServer *ideServer; // @synthesize ideServer=_ideServer;
- (void)_queue_logStatus;	// IMP=0x001000000003ca7f
- (void)_queue_closeTestSession:(id)arg1;	// IMP=0x001000000003c910
- (void)closeTestSession:(id)arg1;	// IMP=0x001000000003c83a
- (void)closeIDESession:(id)arg1;	// IMP=0x001000000003c356
- (void)closeTargetBootstrapSession:(id)arg1;	// IMP=0x001000000003c0fc
- (void)_queue_fulfillTestConnectionRequest:(CDUnknownBlockType)arg1 usingIDESession:(id)arg2;	// IMP=0x001000000003bfb8
- (void)_queue_handleRequestForSessionWithIdentifier:(id)arg1;	// IMP=0x001000000003be5d
- (void)_queue_advertiseAvailabilityToTargetWithPID:(int)arg1;	// IMP=0x001000000003bbb5
- (void)_queue_processTargetSessionRequests;	// IMP=0x001000000003b762
- (void)_queue_requestTargetBootstrapSessionForPID:(int)arg1 timeout:(double)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b347
- (void)requestTargetBootstrapSessionForPID:(int)arg1 timeout:(double)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b25a
- (void)_queue_processPendingTransferObservationBlocks;	// IMP=0x001000000003aea1
- (void)setObserverForConnectionTransferToTargetWithPID:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003acde
- (void)connectionTransferToTargetWithPID:(int)arg1 completedWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000003aaca
- (void)requestSerializedTransportForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a8d3
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000003a560
- (void)addTargetBootstrapSession:(id)arg1;	// IMP=0x001000000003a23d
- (void)setIDESession:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0010000000039e0f
- (void)controlSession:(id)arg1 didAuthorizeProcessID:(int)arg2;	// IMP=0x0010000000039d87
- (void)addControlSession:(id)arg1;	// IMP=0x0010000000039b9a
- (void)remoteAutomationSessionDidClose:(id)arg1;	// IMP=0x0010000000039a0e
- (void)serverDidHandleDisconnectForSocket:(int)arg1;	// IMP=0x0010000000039a08
- (void)serverReceivedConnectionForServiceType:(unsigned long long)arg1 overSocket:(int)arg2 effectiveUserIdentifier:(unsigned int)arg3 clientPrivilege:(unsigned long long)arg4 disconnectionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003962c
- (void)reportSelfDiagnosisIssue:(id)arg1 description:(id)arg2;	// IMP=0x0010000000039555
- (void)setupSignalHandlers;	// IMP=0x0010000000039241
- (void)run;	// IMP=0x0010000000039058
- (void)startAcceptingTargetConnectionsFromListener:(id)arg1;	// IMP=0x0010000000038f3a
- (void)startAcceptingTestConnectionsFromListener:(id)arg1;	// IMP=0x0010000000038e1c
- (id)init;	// IMP=0x0010000000038c3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

