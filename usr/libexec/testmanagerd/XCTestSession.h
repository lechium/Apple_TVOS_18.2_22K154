//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSUUID, NSXPCConnection, RCPEventStreamRecorder, XCTCapabilities, XCTDInternalTelemetryLogger, XCTDSignpostListener, XCTScreenshotRequest;
@protocol OS_dispatch_queue, OS_os_transaction, XCAXManager, XCTDAutomationModeInterface, XCTDAutomationServicesProviding, XCTDDiagnosticsProviding, XCTDProcessManagementServicesProviding, XCTDScreenRecordingProviding, XCTDScreenshotProviding, XCTDTargetBootstrapSessionProviding, XCTestSessionDelegate;

@interface XCTestSession : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _hasTestingEntitlement;	// 9 = 0x9
    _Bool _hasInternalClientEntitlement;	// 10 = 0xa
    _Bool _recapIsRunning;	// 11 = 0xb
    NSXPCConnection *_connection;	// 16 = 0x10
    id <XCTDAutomationModeInterface> _automationModeInterface;	// 24 = 0x18
    id <XCTDScreenshotProviding> _screenshotProvider;	// 32 = 0x20
    id <XCTDScreenRecordingProviding> _screenRecordingProvider;	// 40 = 0x28
    id <XCTDDiagnosticsProviding> _diagnosticsProvider;	// 48 = 0x30
    id <XCTDProcessManagementServicesProviding> _processManagementServices;	// 56 = 0x38
    id <XCTDAutomationServicesProviding> _automationServices;	// 64 = 0x40
    id <XCTDTargetBootstrapSessionProviding> _targetBootstrapSessionProvider;	// 72 = 0x48
    id <XCTestSessionDelegate> _delegate;	// 80 = 0x50
    CDUnknownBlockType _disconnectionHandler;	// 88 = 0x58
    XCTCapabilities *_remoteInterfaceCapabilities;	// 96 = 0x60
    NSString *_clientBundleID;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_os_transaction> *_osTransaction;	// 120 = 0x78
    XCTDSignpostListener *_signpostListener;	// 128 = 0x80
    CDUnknownBlockType _automationServicesFactory;	// 136 = 0x88
    NSError *_automationServicesError;	// 144 = 0x90
    XCTDInternalTelemetryLogger *_internalTelemetryLogger;	// 152 = 0x98
    RCPEventStreamRecorder *_recapEventRecorder;	// 160 = 0xa0
    NSUUID *_currentScreenRecordingUUID;	// 168 = 0xa8
}

+ (_Bool)supportsHIDEventRecording;	// IMP=0x0020000000031fe1
+ (_Bool)supportsPostingTelemetryData;	// IMP=0x0010000000031e27
+ (_Bool)isOperatingSystemSupportingDelayedAttachmentTransfer;	// IMP=0x001000000002ca1f
+ (id)capabilitiesBuilder;	// IMP=0x001000000002c552
- (void).cxx_destruct;	// IMP=0x0010000000032a92
@property(retain, nonatomic) NSUUID *currentScreenRecordingUUID; // @synthesize currentScreenRecordingUUID=_currentScreenRecordingUUID;
@property _Bool recapIsRunning; // @synthesize recapIsRunning=_recapIsRunning;
@property(retain) RCPEventStreamRecorder *recapEventRecorder; // @synthesize recapEventRecorder=_recapEventRecorder;
@property(readonly) XCTDInternalTelemetryLogger *internalTelemetryLogger; // @synthesize internalTelemetryLogger=_internalTelemetryLogger;
@property(retain) NSError *automationServicesError; // @synthesize automationServicesError=_automationServicesError;
@property(readonly) CDUnknownBlockType automationServicesFactory; // @synthesize automationServicesFactory=_automationServicesFactory;
@property(readonly) XCTDSignpostListener *signpostListener; // @synthesize signpostListener=_signpostListener;
@property(retain) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities; // @synthesize remoteInterfaceCapabilities=_remoteInterfaceCapabilities;
@property(readonly) _Bool hasInternalClientEntitlement; // @synthesize hasInternalClientEntitlement=_hasInternalClientEntitlement;
@property(readonly) _Bool hasTestingEntitlement; // @synthesize hasTestingEntitlement=_hasTestingEntitlement;
@property(copy) CDUnknownBlockType disconnectionHandler; // @synthesize disconnectionHandler=_disconnectionHandler;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property __weak id <XCTestSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <XCTDTargetBootstrapSessionProviding> targetBootstrapSessionProvider; // @synthesize targetBootstrapSessionProvider=_targetBootstrapSessionProvider;
@property(retain) id <XCTDAutomationServicesProviding> automationServices; // @synthesize automationServices=_automationServices;
@property(readonly) id <XCTDProcessManagementServicesProviding> processManagementServices; // @synthesize processManagementServices=_processManagementServices;
@property(readonly) id <XCTDDiagnosticsProviding> diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(readonly) id <XCTDScreenRecordingProviding> screenRecordingProvider; // @synthesize screenRecordingProvider=_screenRecordingProvider;
@property(readonly) id <XCTDScreenshotProviding> screenshotProvider; // @synthesize screenshotProvider=_screenshotProvider;
@property(readonly) id <XCTDAutomationModeInterface> automationModeInterface; // @synthesize automationModeInterface=_automationModeInterface;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_XCT_acquireUserPresenceAssertionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000003280d
- (void)_XCT_clearUserPresenceAssertionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000327fd
- (void)_XCT_stopScreenRecordingWithUUID:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003267b
- (void)_XCT_startScreenRecordingWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000324ac
- (void)_XCT_playBackHIDEventRecordingFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032331
- (void)_XCT_stopHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032218
- (void)_XCT_startHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031ffa
- (void)_XCT_postTelemetryData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031e38
- (void)_XCT_resetAuthorizationStatusForBundleIdentifier:(id)arg1 resourceIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000031ce3
- (void)_XCT_injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031bc0
- (void)_XCT_injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031a9d
- (void)_XCT_startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003197a
- (void)_XCT_startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031857
- (void)_XCT_requestSiriEnabledStatus:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031776
- (void)_XCT_getInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000316b1
- (void)_XCT_sendString:(id)arg1 maximumFrequency:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000315d8
- (void)_XCT_performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031488
- (void)_XCT_synthesizeEvent:(id)arg1 implicitConfirmationInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003131c
- (void)_XCT_synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000311cc
- (void)_XCT_requestPressureEventsSupported:(CDUnknownBlockType)arg1;	// IMP=0x0010000000031109
- (void)_XCT_hasHardwareButton:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003100a
- (void)_XCT_requestProcessSpecifierForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030e16
- (void)_XCT_requestBundleIDForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030c8f
- (void)_XCT_startMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x0010000000030be6
- (void)_XCT_startMonitoringApplicationWithBundleID:(id)arg1;	// IMP=0x0010000000030bd2
- (void)_XCT_openURL:(id)arg1 usingApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030ac5
- (void)_XCT_openDefaultApplicationForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000309db
- (void)_XCT_terminateApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000309c4
- (void)_XCT_terminateApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030878
- (void)_XCT_launchApplicationWithBundleID:(id)arg1 path:(id)arg2 arguments:(id)arg3 environment:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000306d6
- (void)_XCT_launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000306ac
- (void)applicationDidUpdateState:(id)arg1;	// IMP=0x00100000000302cf
- (void)_XCT_getDeviceOrientationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000003020f
- (void)_XCT_updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030153
- (void)_XCT_enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030095
- (void)_XCT_setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ffcd
- (void)_XCT_requestElementAtPoint:(struct CGPoint)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002feba
- (void)_XCT_fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002fd59
- (void)_XCT_fetchParameterizedAttributeForElement:(id)arg1 attributes:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002fc04
- (void)_XCT_setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002fad1
- (void)_XCT_fetchAttributes:(id)arg1 forElement:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f974
- (void)_XCT_runAccessibilityAuditForElement:(id)arg1 withConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f817
- (_Bool)ensureUITestingIsReadyWithError:(id *)arg1;	// IMP=0x001000000002f7fd
- (void)_XCT_fetchSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f41b
- (void)_XCT_requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f2c2
- (void)_XCT_snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f24e
- (void)_XCT_unregisterForAccessibilityNotification:(int)arg1 withRegistrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f16c
- (void)_XCT_registerForAccessibilityNotification:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002eb3a
- (void)_XCT_performAccessibilityAction:(int)arg1 onElement:(id)arg2 withValue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002ea46
- (void)_XCT_setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e980
- (void)_XCT_loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e85f
- (void)_XCT_unloadAccessibility:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e7eb
- (void)_XCT_fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002e777
- (_Bool)ensureUITestingIsReadyWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x001000000002e4f6
- (void)_XCT_setSimulatedLocation:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e38d
- (void)_XCT_getSimulatedLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e266
- (void)_XCT_clearSimulatedLocationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e15d
- (void)_XCT_getAppearanceModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e020
- (void)_XCT_updateAppearanceMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002dec1
- (void)_XCT_requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002de2f
- (void)_XCT_unregisterForSignpostsWithToken:(id)arg1;	// IMP=0x001000000002ddc6
- (void)_XCT_registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(double)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002dbb9
- (void)_XCT_requestTailspinWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d9c2
- (void)_XCT_requestSpindumpWithSpecification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d7cb
- (void)_XCT_requestScreenshotAttachment:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d71a
- (void)_XCT_requestScreenshot:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002d669
- (void)_XCT_requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 uti:(id)arg3 compressionQuality:(double)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000002d5f5
- (void)_XCT_requestScreenshotWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d581
- (void)_XCT_requestDTServiceHubConnectionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d43e
- (void)_XCT_requestUnsupportedBundleIdentifiersForAutomationSessions:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d240
- (void)_XCT_requestEndpointForTestTargetWithPID:(int)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cf82
- (void)_XCT_requestSerializedTransportWrapperForIDESessionWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002cdb6
- (void)_XCT_enableAutomationModeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002cbc4
- (void)_XCT_exchangeCapabilities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ca88
@property(readonly, nonatomic) id <XCAXManager> axManager;
- (id)gesturePerformer;	// IMP=0x001000000002c4b2
- (id)systemConfiguration;	// IMP=0x001000000002c462
- (id)remoteObjectProxy;	// IMP=0x001000000002c2b5
- (_Bool)isAuthorizedInternalClientWithProcessID:(int)arg1;	// IMP=0x001000000002c265
@property(readonly, nonatomic) _Bool allowsUITestControl;
@property(readonly) int processIdentifier;
- (void)takeAssertionForAndMonitorConnectionProcessWithIdleTimerAssertion:(_Bool)arg1;	// IMP=0x001000000002be7f
@property(readonly, copy) NSString *description;
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 automationModeInterface:(id)arg3 diagnosticsProvider:(id)arg4 screenshotProvider:(id)arg5 screenRecordingProvider:(id)arg6 processManagementServices:(id)arg7 targetBootstrapSessionProvider:(id)arg8 automationServicesFactory:(CDUnknownBlockType)arg9;	// IMP=0x001000000002b686
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 diagnosticsProvider:(id)arg3 processManagementServices:(id)arg4 targetBootstrapSessionProvider:(id)arg5;	// IMP=0x001000000002b4c3
- (id)initWithNSXPCConnection:(id)arg1 delegate:(id)arg2 diagnosticsProvider:(id)arg3 targetBootstrapSessionProvider:(id)arg4;	// IMP=0x001000000002b3fe
- (void)invalidate;	// IMP=0x001000000002ae4f
- (void)dealloc;	// IMP=0x001000000002ad23
- (void)_loadAccessibilityWithTimeout:(double)arg1 reply:(void (^)(_Bool, NSError *))arg2;	// IMP=0x001000000009a4e0
- (void)_XCT_resetAuthorizationStatusOfProtectedResourceWithIdentifier:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 auditToken:(CDStruct_6ad76789)arg3 completion:(void (^)(NSError *))arg4;	// IMP=0x001000000009b200
- (void)_XCT_requestScreenshotAttachment:(XCTScreenshotRequest *)arg1 completion:(void (^)(XCTAttachmentFutureMetadata *, NSError *))arg2;	// IMP=0x001000000009c430
- (void)_XCT_requestScreenshot:(XCTScreenshotRequest *)arg1 completion:(void (^)(XCTImage *, NSError *))arg2;	// IMP=0x001000000009bd60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

