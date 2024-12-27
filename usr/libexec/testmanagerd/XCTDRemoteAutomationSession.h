//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTXConnection, DTXProxyChannel, MISSING_TYPE, NSError, NSString, XCTCapabilities, XCTDSignpostListener;
@protocol OS_dispatch_queue, XCTDAutomationModeInterface, XCTDAutomationServicesProviding, XCTDDiagnosticsProviding, XCTDProcessManagementServicesProviding, XCTDRemoteAutomationSessionDelegate, XCTDRemoteRunnerConnectionBrokering, XCTDScreenRecordingProviding, XCTDScreenshotProviding, XCTDTargetBootstrapSessionProviding;

@interface XCTDRemoteAutomationSession : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _hasEnabledAutomationMode;	// 9 = 0x9
    id <XCTDRemoteAutomationSessionDelegate> _delegate;	// 16 = 0x10
    id <XCTDAutomationModeInterface> _automationModeInterface;	// 24 = 0x18
    id <XCTDScreenshotProviding> _screenshotProvider;	// 32 = 0x20
    id <XCTDScreenRecordingProviding> _screenRecordingProvider;	// 40 = 0x28
    id <XCTDDiagnosticsProviding> _diagnosticsProvider;	// 48 = 0x30
    id <XCTDProcessManagementServicesProviding> _processManagementServices;	// 56 = 0x38
    id <XCTDAutomationServicesProviding> _automationServices;	// 64 = 0x40
    id <XCTDTargetBootstrapSessionProviding> _targetBootstrapSessionProvider;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    DTXProxyChannel *_proxyChannel;	// 88 = 0x58
    DTXConnection *_dtxConnection;	// 96 = 0x60
    unsigned long long _clientProtocolVersion;	// 104 = 0x68
    NSError *_automationServicesError;	// 112 = 0x70
    XCTCapabilities *_remoteInterfaceCapabilities;	// 120 = 0x78
    XCTDSignpostListener *_signpostListener;	// 128 = 0x80
    id <XCTDRemoteRunnerConnectionBrokering> _remoteRunnerConnectionBroker;	// 136 = 0x88
}

+ (_Bool)isOperatingSystemSupportingDelayedAttachmentTransfer;	// IMP=0x002000000001e631
+ (id)capabilitiesBuilder;	// IMP=0x001000000001e1b7
- (void).cxx_destruct;	// IMP=0x002000000002523c
@property(readonly) id <XCTDRemoteRunnerConnectionBrokering> remoteRunnerConnectionBroker; // @synthesize remoteRunnerConnectionBroker=_remoteRunnerConnectionBroker;
@property(readonly) XCTDSignpostListener *signpostListener; // @synthesize signpostListener=_signpostListener;
@property(retain) XCTCapabilities *remoteInterfaceCapabilities; // @synthesize remoteInterfaceCapabilities=_remoteInterfaceCapabilities;
@property(readonly) NSError *automationServicesError; // @synthesize automationServicesError=_automationServicesError;
@property unsigned long long clientProtocolVersion; // @synthesize clientProtocolVersion=_clientProtocolVersion;
@property(readonly) DTXConnection *dtxConnection; // @synthesize dtxConnection=_dtxConnection;
@property(retain) DTXProxyChannel *proxyChannel; // @synthesize proxyChannel=_proxyChannel;
@property _Bool hasEnabledAutomationMode; // @synthesize hasEnabledAutomationMode=_hasEnabledAutomationMode;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) id <XCTDTargetBootstrapSessionProviding> targetBootstrapSessionProvider; // @synthesize targetBootstrapSessionProvider=_targetBootstrapSessionProvider;
@property(readonly) id <XCTDAutomationServicesProviding> automationServices; // @synthesize automationServices=_automationServices;
@property(readonly) id <XCTDProcessManagementServicesProviding> processManagementServices; // @synthesize processManagementServices=_processManagementServices;
@property(readonly) id <XCTDDiagnosticsProviding> diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(readonly) id <XCTDScreenRecordingProviding> screenRecordingProvider; // @synthesize screenRecordingProvider=_screenRecordingProvider;
@property(readonly) id <XCTDScreenshotProviding> screenshotProvider; // @synthesize screenshotProvider=_screenshotProvider;
@property(readonly) id <XCTDAutomationModeInterface> automationModeInterface; // @synthesize automationModeInterface=_automationModeInterface;
@property __weak id <XCTDRemoteAutomationSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_XCTD_acquireUserPresenceAssertion;	// IMP=0x0010000000025067
- (id)_XCTD_clearUserPresenceAssertion;	// IMP=0x001000000002502b
- (void)didFinishWritingAttachmentMetadata:(id)arg1 remotePath:(id)arg2;	// IMP=0x0010000000024e2e
- (id)_IDE_initiateRemoteRunnerSessionForPID:(id)arg1;	// IMP=0x0010000000024c76
- (id)_IDE_convertConnectionToSessionForRemoteRunnerWithPID:(id)arg1;	// IMP=0x0010000000024b1f
- (id)_XCTD_hasHardwareButton:(id)arg1;	// IMP=0x0010000000024a6a
- (MISSING_TYPE *)_XCTD_fastExit;	// IMP=0x0010000000024a5c
- (id)_XCTD_getFrontmostUsername;	// IMP=0x00100000000249e0
- (id)_XCTD_getBootSessionUUID;	// IMP=0x0010000000024945
- (id)_sysctlForName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000247b3
- (id)_XCTD_requestElementsPotentiallyInterruptingElement:(id)arg1 targetFrame:(id)arg2 applicationIsForeground:(id)arg3;	// IMP=0x0010000000024737
- (id)_XCTD_performWhenMenuOpens:(id)arg1;	// IMP=0x00100000000246bb
- (id)_XCTD_notifyWhenEventLoopIsIdleForApplicationWithPID:(id)arg1;	// IMP=0x001000000002463f
- (id)_XCTD_performAccessibilityAction:(id)arg1 onElement:(id)arg2 value:(id)arg3;	// IMP=0x00100000000245c3
- (id)_XCTD_unregisterForAXNotificationsForApplicationWithPID:(id)arg1;	// IMP=0x0010000000024547
- (id)_XCTD_registerForAXNotificationsForApplicationWithPID:(id)arg1 timeout:(id)arg2;	// IMP=0x00100000000244cb
- (id)_XCTD_removeObserver:(id)arg1 forAXNotification:(id)arg2;	// IMP=0x001000000002444f
- (id)_XCTD_registerForAXNotification:(id)arg1;	// IMP=0x00100000000243d3
- (id)_XCTD_resetAuthorizationStatusForResourceWithBundleIdentifier:(id)arg1 resourceIdentifier:(id)arg2;	// IMP=0x00100000000243b8
- (id)_IDE_convertConnectionToRemoteAutomationSessionForApplicationWithPID:(id)arg1;	// IMP=0x0010000000023ee4
- (void)_transferConnectionToProcessWithPID:(int)arg1 endpoint:(id)arg2;	// IMP=0x00100000000236e9
- (id)_IDE_initiateRemoteAutomationSessionForApplicationWithPID:(id)arg1;	// IMP=0x0010000000023539
- (id)_XCTD_requestUnsupportedBundleIdentifiersForAutomationSessions;	// IMP=0x00100000000234d0
- (void)applicationDidUpdateState:(id)arg1;	// IMP=0x0010000000023193
- (id)_XCTD_injectAssistantRecognitionStrings:(id)arg1;	// IMP=0x0010000000023084
- (id)_XCTD_startSiriUIRequestWithText:(id)arg1;	// IMP=0x0010000000022f75
- (id)_XCTD_requestSiriEnabledStatus;	// IMP=0x0010000000022eae
- (id)_XCTD_requestTailspinWithRequest:(id)arg1;	// IMP=0x0010000000022d0d
- (id)_XCTD_requestSpindumpWithSpecification:(id)arg1;	// IMP=0x0010000000022b6c
- (id)_XCTD_stopScreenRecordingWithUUID:(id)arg1;	// IMP=0x0010000000022b5a
- (id)_XCTD_startScreenRecordingWithRequest:(id)arg1;	// IMP=0x0010000000022b48
- (id)_XCTD_requestScreenshotAttachment:(id)arg1;	// IMP=0x0010000000022b36
- (id)_XCTD_requestScreenshot:(id)arg1;	// IMP=0x0010000000022b24
- (id)_XCTD_requestBoundsForScreenWithIdentifier:(id)arg1;	// IMP=0x00100000000229e9
- (id)_XCTD_requestScaleForScreenWithIdentifier:(id)arg1;	// IMP=0x00100000000228a5
- (id)_XCTD_requestTraitsForScreenWithIdentifier:(id)arg1;	// IMP=0x001000000002270c
- (id)_displayWithIdentifier:(long long)arg1;	// IMP=0x00100000000225a3
- (id)_XCTD_requestScreenIdentifiers;	// IMP=0x001000000002239e
- (id)_XCTD_requestPressureEventsSupported;	// IMP=0x0010000000022322
- (id)_XCTD_clearSimulatedLocation;	// IMP=0x0010000000022233
- (id)_XCTD_setSimulatedLocation:(id)arg1;	// IMP=0x00100000000220dd
- (id)_XCTD_getSimulatedLocation;	// IMP=0x0010000000021fde
- (id)_XCTD_updateAppearanceMode:(id)arg1;	// IMP=0x0010000000021e3d
- (id)_XCTD_getAppearanceMode;	// IMP=0x0010000000021d27
- (id)_XCTD_updateDeviceOrientation:(id)arg1;	// IMP=0x0010000000021cab
- (id)_XCTD_sendString:(id)arg1 keysPerSecond:(id)arg2;	// IMP=0x0010000000021a86
- (id)_XCTD_performHandGesture:(id)arg1;	// IMP=0x0010000000021a0a
- (id)_XCTD_performDeviceEvent:(id)arg1;	// IMP=0x001000000002181a
- (id)_XCTD_synthesizeEvent:(id)arg1 implicitConfirmationInterval:(id)arg2;	// IMP=0x00100000000215f3
- (void)_XCTD_unregisterForSignpostsWithToken:(id)arg1;	// IMP=0x001000000002158a
- (id)_XCTD_registerForSignpostsFromSubsystem:(id)arg1 category:(id)arg2 intervalTimeout:(id)arg3;	// IMP=0x00100000000213a3
- (id)_XCTD_unloadAccessibility;	// IMP=0x00100000000212b2
- (id)_XCTD_loadAccessibilityWithTimeout:(id)arg1;	// IMP=0x0010000000021129
- (id)_XCTD_getInterfaceOrientation;	// IMP=0x00100000000210ad
- (id)_XCTD_getDeviceOrientation;	// IMP=0x0010000000021031
- (id)_XCTD_enableFauxCollectionViewCells;	// IMP=0x0010000000020fc6
- (id)_XCTD_setLocalizableStringsDataGatheringEnabled:(id)arg1;	// IMP=0x0010000000020f53
- (id)_XCTD_requestElementAtPoint:(id)arg1;	// IMP=0x0010000000020df0
- (id)_XCTD_fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3;	// IMP=0x0010000000020ca5
- (id)_XCTD_setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3;	// IMP=0x0010000000020b3b
- (id)_XCTD_fetchAttributes:(id)arg1 forElement:(id)arg2;	// IMP=0x0010000000020a2a
- (id)_XCTD_runAccessibilityAuditForElement:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x0010000000020919
- (id)_XCTD_fetchSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3;	// IMP=0x0010000000020410
- (id)_XCTD_requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3;	// IMP=0x001000000002024a
- (id)_XCTD_performAccessibilityAction:(id)arg1 onElement:(id)arg2 withValue:(id)arg3;	// IMP=0x0010000000020082
- (id)_XCTD_unregisterForAccessibilityNotification:(id)arg1 withRegistrationToken:(id)arg2;	// IMP=0x001000000001ff52
- (id)_XCTD_registerForAccessibilityNotification:(id)arg1;	// IMP=0x001000000001fa4d
- (id)_XCTD_setAXTimeout:(id)arg1;	// IMP=0x001000000001f8e4
- (id)_XCTD_bundleIdentifierForApplicationAtURL:(id)arg1;	// IMP=0x001000000001f868
- (id)_XCTD_URLForApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000001f7ec
- (id)_XCTD_setFrontProcess:(id)arg1;	// IMP=0x001000000001f770
- (id)_XCTD_openURL:(id)arg1 usingApplication:(id)arg2;	// IMP=0x001000000001f5d6
- (id)_XCTD_openDefaultApplicationForURL:(id)arg1;	// IMP=0x001000000001f465
- (id)_XCTD_terminateApplicationWithBundleID:(id)arg1 pid:(id)arg2;	// IMP=0x001000000001f2c9
- (id)_XCTD_terminateApplicationWithBundleID:(id)arg1;	// IMP=0x001000000001f2b0
- (id)_XCTD_launchRemoteRunnerWithBundleID:(id)arg1 path:(id)arg2 arguments:(id)arg3 environment:(id)arg4;	// IMP=0x001000000001f0d5
- (id)_XCTD_launchApplicationWithBundleID:(id)arg1 path:(id)arg2 arguments:(id)arg3 environment:(id)arg4;	// IMP=0x001000000001eef4
- (id)_XCTD_launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3;	// IMP=0x001000000001eeda
- (id)_XCTD_startMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x001000000001ee33
- (id)_XCTD_startMonitoringApplicationWithBundleID:(id)arg1;	// IMP=0x001000000001ee1f
- (id)_XCTD_requestBackgroundAssertionForPID:(id)arg1;	// IMP=0x001000000001ec39
- (id)_XCTD_requestBundleIDForPID:(id)arg1;	// IMP=0x001000000001eb35
- (id)_XCTD_requestProcessSpecifierForPID:(id)arg1;	// IMP=0x001000000001ea31
- (id)_XCTD_enableAutomationMode;	// IMP=0x001000000001e7d4
- (id)_XCTD_exchangeCapabilities:(id)arg1;	// IMP=0x001000000001e69a
- (id)_XCTD_beginSessionWithClientProtocolVersion:(id)arg1;	// IMP=0x001000000001e021
- (_Bool)allowsUITestControl;	// IMP=0x001000000001dfdd
- (id)remoteAutomationClient;	// IMP=0x001000000001de30
- (void)invalidate;	// IMP=0x001000000001db5e
- (id)initWithConnectedSocket:(int)arg1 diagnosticsProvider:(id)arg2 targetBootstrapSessionProvider:(id)arg3 remoteRunnerConnectionBroker:(id)arg4;	// IMP=0x001000000001d9a9
- (id)initWithConnectedSocket:(int)arg1 automationModeInterface:(id)arg2 diagnosticsProvider:(id)arg3 screenshotProvider:(id)arg4 screenRecordingProvider:(id)arg5 processManagementServices:(id)arg6 targetBootstrapSessionProvider:(id)arg7 remoteRunnerConnectionBroker:(id)arg8 automationServicesFactory:(CDUnknownBlockType)arg9 timeout:(double)arg10;	// IMP=0x001000000001cf0e
- (void)dealloc;	// IMP=0x001000000001ce5c
- (id)_XCT_resetAuthorizationStatusOfProtectedResourceWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000006ed00
- (id)_XCTD_requestStopScreenRecordingAttachmentWithUUID:(id)arg1;	// IMP=0x0010000000072070
- (id)_XCTD_requestStartScreenRecordingWithRequest:(id)arg1;	// IMP=0x0010000000070610
- (id)_XCTD_requestScreenshotAttachmentWithRequest:(id)arg1;	// IMP=0x00100000000745a0
- (id)_XCTD_requestScreenshotWithRequest:(id)arg1;	// IMP=0x00100000000736a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

