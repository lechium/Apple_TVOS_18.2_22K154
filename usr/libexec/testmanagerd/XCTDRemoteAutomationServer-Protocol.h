//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, NSArray, NSDictionary, NSNumber, NSString, NSURL, NSUUID, NSValue, XCAXAuditConfiguration, XCAccessibilityElement, XCDeviceEvent, XCSynthesizedEventRecord, XCTCapabilities, XCTScreenRecordingRequest, XCTScreenshotRequest, XCTSpindumpRequestSpecification, XCTTailspinRequest;

@protocol XCTDRemoteAutomationServer
- (id)_XCTD_acquireUserPresenceAssertion;
- (id)_XCTD_clearUserPresenceAssertion;
- (id)_XCTD_fastExit;
- (id)_XCTD_getFrontmostUsername;
- (id)_XCTD_getBootSessionUUID;
- (id)_XCTD_requestElementsPotentiallyInterruptingElement:(XCAccessibilityElement *)arg1 targetFrame:(NSValue *)arg2 applicationIsForeground:(NSNumber *)arg3;
- (id)_XCTD_performWhenMenuOpens:(XCAccessibilityElement *)arg1;
- (id)_XCTD_notifyWhenEventLoopIsIdleForApplicationWithPID:(NSNumber *)arg1;
- (id)_XCTD_unregisterForAXNotificationsForApplicationWithPID:(NSNumber *)arg1;
- (id)_XCTD_registerForAXNotificationsForApplicationWithPID:(NSNumber *)arg1 timeout:(NSNumber *)arg2;
- (id)_XCTD_removeObserver:(NSUUID *)arg1 forAXNotification:(NSString *)arg2;
- (id)_XCTD_registerForAXNotification:(NSString *)arg1;
- (id)_XCTD_resetAuthorizationStatusForResourceWithBundleIdentifier:(NSString *)arg1 resourceIdentifier:(NSString *)arg2;
- (id)_IDE_initiateRemoteRunnerSessionForPID:(NSNumber *)arg1;
- (id)_IDE_convertConnectionToSessionForRemoteRunnerWithPID:(NSNumber *)arg1;
- (id)_IDE_convertConnectionToRemoteAutomationSessionForApplicationWithPID:(NSNumber *)arg1;
- (id)_IDE_initiateRemoteAutomationSessionForApplicationWithPID:(NSNumber *)arg1;
- (id)_XCTD_requestUnsupportedBundleIdentifiersForAutomationSessions;
- (id)_XCTD_injectAssistantRecognitionStrings:(NSArray *)arg1;
- (id)_XCTD_startSiriUIRequestWithText:(NSString *)arg1;
- (id)_XCTD_requestSiriEnabledStatus;
- (id)_XCTD_requestTailspinWithRequest:(XCTTailspinRequest *)arg1;
- (id)_XCTD_requestSpindumpWithSpecification:(XCTSpindumpRequestSpecification *)arg1;
- (id)_XCTD_stopScreenRecordingWithUUID:(NSUUID *)arg1;
- (id)_XCTD_startScreenRecordingWithRequest:(XCTScreenRecordingRequest *)arg1;
- (id)_XCTD_requestScreenshotAttachment:(XCTScreenshotRequest *)arg1;
- (id)_XCTD_requestScreenshot:(XCTScreenshotRequest *)arg1;
- (id)_XCTD_requestBoundsForScreenWithIdentifier:(NSNumber *)arg1;
- (id)_XCTD_requestScaleForScreenWithIdentifier:(NSNumber *)arg1;
- (id)_XCTD_requestTraitsForScreenWithIdentifier:(NSNumber *)arg1;
- (id)_XCTD_requestScreenIdentifiers;
- (id)_XCTD_hasHardwareButton:(NSNumber *)arg1;
- (id)_XCTD_clearSimulatedLocation;
- (id)_XCTD_setSimulatedLocation:(CLLocation *)arg1;
- (id)_XCTD_getSimulatedLocation;
- (id)_XCTD_updateAppearanceMode:(NSNumber *)arg1;
- (id)_XCTD_getAppearanceMode;
- (id)_XCTD_requestPressureEventsSupported;
- (id)_XCTD_updateDeviceOrientation:(NSNumber *)arg1;
- (id)_XCTD_sendString:(NSString *)arg1 keysPerSecond:(NSNumber *)arg2;
- (id)_XCTD_performHandGesture:(NSNumber *)arg1;
- (id)_XCTD_performDeviceEvent:(XCDeviceEvent *)arg1;
- (id)_XCTD_synthesizeEvent:(XCSynthesizedEventRecord *)arg1 implicitConfirmationInterval:(NSNumber *)arg2;
- (void)_XCTD_unregisterForSignpostsWithToken:(NSUUID *)arg1;
- (id)_XCTD_registerForSignpostsFromSubsystem:(NSString *)arg1 category:(NSString *)arg2 intervalTimeout:(NSNumber *)arg3;
- (id)_XCTD_getInterfaceOrientation;
- (id)_XCTD_getDeviceOrientation;
- (id)_XCTD_enableFauxCollectionViewCells;
- (id)_XCTD_setLocalizableStringsDataGatheringEnabled:(NSNumber *)arg1;
- (id)_XCTD_unloadAccessibility;
- (id)_XCTD_loadAccessibilityWithTimeout:(NSNumber *)arg1;
- (id)_XCTD_requestElementAtPoint:(NSDictionary *)arg1;
- (id)_XCTD_fetchParameterizedAttribute:(NSString *)arg1 forElement:(XCAccessibilityElement *)arg2 parameter:(id)arg3;
- (id)_XCTD_setAttribute:(NSString *)arg1 value:(id)arg2 element:(XCAccessibilityElement *)arg3;
- (id)_XCTD_fetchAttributes:(NSArray *)arg1 forElement:(XCAccessibilityElement *)arg2;
- (id)_XCTD_runAccessibilityAuditForElement:(XCAccessibilityElement *)arg1 withConfiguration:(XCAXAuditConfiguration *)arg2;
- (id)_XCTD_fetchSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3;
- (id)_XCTD_requestSnapshotForElement:(XCAccessibilityElement *)arg1 attributes:(NSArray *)arg2 parameters:(NSDictionary *)arg3;
- (id)_XCTD_performAccessibilityAction:(NSNumber *)arg1 onElement:(XCAccessibilityElement *)arg2 withValue:(id)arg3;
- (id)_XCTD_unregisterForAccessibilityNotification:(NSNumber *)arg1 withRegistrationToken:(NSNumber *)arg2;
- (id)_XCTD_registerForAccessibilityNotification:(NSNumber *)arg1;
- (id)_XCTD_setAXTimeout:(NSNumber *)arg1;
- (id)_XCTD_bundleIdentifierForApplicationAtURL:(NSURL *)arg1;
- (id)_XCTD_URLForApplicationWithBundleIdentifier:(NSString *)arg1;
- (id)_XCTD_setFrontProcess:(NSNumber *)arg1;
- (id)_XCTD_openURL:(NSURL *)arg1 usingApplication:(NSString *)arg2;
- (id)_XCTD_openDefaultApplicationForURL:(NSURL *)arg1;
- (id)_XCTD_terminateApplicationWithBundleID:(NSString *)arg1 pid:(NSNumber *)arg2;
- (id)_XCTD_terminateApplicationWithBundleID:(NSString *)arg1;
- (id)_XCTD_launchRemoteRunnerWithBundleID:(NSString *)arg1 path:(NSString *)arg2 arguments:(NSArray *)arg3 environment:(NSDictionary *)arg4;
- (id)_XCTD_launchApplicationWithBundleID:(NSString *)arg1 path:(NSString *)arg2 arguments:(NSArray *)arg3 environment:(NSDictionary *)arg4;
- (id)_XCTD_launchApplicationWithBundleID:(NSString *)arg1 arguments:(NSArray *)arg2 environment:(NSDictionary *)arg3;
- (id)_XCTD_startMonitoringApplicationWithBundleID:(NSString *)arg1 path:(NSString *)arg2;
- (id)_XCTD_startMonitoringApplicationWithBundleID:(NSString *)arg1;
- (id)_XCTD_requestBackgroundAssertionForPID:(NSNumber *)arg1;
- (id)_XCTD_requestProcessSpecifierForPID:(NSNumber *)arg1;
- (id)_XCTD_requestBundleIDForPID:(NSNumber *)arg1;
- (id)_XCTD_enableAutomationMode;
- (id)_XCTD_exchangeCapabilities:(XCTCapabilities *)arg1;
- (id)_XCTD_beginSessionWithClientProtocolVersion:(NSNumber *)arg1;
@end

