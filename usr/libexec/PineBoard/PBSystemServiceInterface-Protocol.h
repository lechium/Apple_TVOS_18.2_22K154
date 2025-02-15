//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class INDateComponentsRange, NSArray, NSDictionary, NSNumber, NSString, NSXPCListenerEndpoint;
@protocol PBSystemServiceNowPlayingDelegate;

@protocol PBSystemServiceInterface <NSObject>
@property(readonly, nonatomic) _Bool hiliteModeActive;
- (void)listen;
- (void)getDisplayManagerServiceProxyWithReply:(void (^)(id <PBSDisplayManagerServiceInterface>))arg1;
- (void)getUserPresentationServiceProxyWithReply:(void (^)(id <PBSUserPresentationServiceInterface>))arg1;
- (void)getMediaRemoteServiceProxyWithReply:(void (^)(id <_PBSMediaRemoteServiceInternalInterface>))arg1;
- (void)getOSUpdateServiceProxyWithReply:(void (^)(id <PBSOSUpdateServiceInterface>))arg1;
- (void)getBulletinServiceProxyWithReply:(void (^)(id <PBSBulletinServiceInterface>))arg1;
- (void)getAppInfoServiceProxyWithReply:(void (^)(id <PBSAppInfoServiceInterface>))arg1;
- (void)endpointForProviderType:(NSString *)arg1 withIdentifier:(NSString *)arg2 responseBlock:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
- (void)registerServiceProviderEndpoint:(NSXPCListenerEndpoint *)arg1 forProviderType:(NSString *)arg2;
- (void)getStoreFrontCountryCodeWithReply:(void (^)(NSString *))arg1;
- (void)showVolumeHUDWithImageName:(NSString *)arg1 level:(NSNumber *)arg2;
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(NSNumber *)arg2;
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;
- (void)setWantsPlayPauseButtonEvents:(_Bool)arg1;
- (void)pairAppleRemote:(_Bool)arg1 withReply:(void (^)(_Bool))arg2;
- (void)fetchPairedAppleRemoteStateWithReply:(void (^)(_Bool))arg1;
- (void)fetchEnforceProvisioningOnSystemAppsEnabledWithReply:(void (^)(_Bool))arg1;
- (void)fetchApplicationIdentifiersByBundleIdentifierMappingWithReply:(void (^)(NSDictionary *))arg1;
- (void)fetchDisabledAdamIDsWithReply:(void (^)(NSArray *))arg1;
- (void)fetchProvisionAppIdentifiersWithReply:(void (^)(NSArray *))arg1;
- (void)stopSiriListening;
- (void)startSiriListening;
- (void)activateSiri;
- (void)presentAirDropPromptForDiagnosticFileWithOptions:(NSDictionary *)arg1;
- (void)handleShowHomeIntentWithFilters:(NSArray *)arg1 time:(INDateComponentsRange *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)takeScreenshotWithReply:(void (^)(NSData *))arg1;
- (void)setKioskAppBundleIdentifier:(NSString *)arg1;
- (void)kioskAppBundleIdentifierWithReply:(void (^)(NSString *))arg1;
- (void)setSystemAppearance:(long long)arg1;
- (void)systemAppearanceWithReply:(void (^)(long long))arg1;
- (void)sendMenuButtonEvent;
- (void)performScreenActionWithName:(NSString *)arg1 forItemIdentifier:(NSString *)arg2 parameters:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)setNextAssistantRecognitionStrings:(NSArray *)arg1;
- (void)setNextVoiceRecognitionAudioInputPaths:(NSArray *)arg1;
- (void)topActiveOrActivatingApplicationIdentifierWithReply:(void (^)(NSString *, int))arg1;
- (void)recentApplicationBundleIdentifiersWithReply:(void (^)(NSArray *))arg1;
- (void)sleepTimeoutWithReply:(void (^)(double))arg1;
- (void)setSleepTimeout:(double)arg1;
- (void)purgeTopShelfContentForApplicationIdentifiers:(NSArray *)arg1;
- (void)presentControlCenterSleepTimerPanelWithCompletion:(void (^)(_Bool))arg1;
- (void)presentControlCenterFaceTimePanelWithCompletion:(void (^)(_Bool))arg1;
- (void)presentControlCenterAVEffectsWithCompletion:(void (^)(_Bool))arg1;
- (void)presentControlCenterUserPickerWithCompletion:(void (^)(_Bool))arg1;
- (void)dismissSoftwareUpdateWindowWithCompletion:(void (^)(_Bool))arg1;
- (void)presentSoftwareUpdateWithOptions:(NSDictionary *)arg1 completion:(void (^)(_Bool))arg2;
- (void)dismissEventMaskingWindowWithCompletion:(void (^)(_Bool))arg1;
- (void)presentEventMaskingWindowWithCompletion:(void (^)(_Bool))arg1;
- (void)dismissThermalAlertWithCompletion:(void (^)(_Bool))arg1;
- (void)presentThermalAlertWithCompletion:(void (^)(_Bool))arg1;
- (void)presentNowPlayingWithOptions:(NSDictionary *)arg1 completion:(void (^)(_Bool))arg2;
- (void)fetchHintStatusWithCompletion:(void (^)(BSSettings *))arg1;
- (void)noteHintShown:(unsigned long long)arg1;
- (void)presentSystemRoutingUIWithOptions:(NSDictionary *)arg1 completion:(void (^)(_Bool))arg2;
- (void)launchCRDApp;
- (void)setAirPlayActive:(_Bool)arg1;
- (void)deactivateScreenSaver;
- (void)activateScreenSaverWithReply:(void (^)(_Bool))arg1;
- (void)activateScreenSaverWithPosterBundleID:(NSString *)arg1;
- (void)activateScreenSaverWalkThrough;
- (void)activateScreenSaver;
- (void)reboot;
- (void)relaunch;
- (void)fetchDeviceIsAsleepWithResult:(void (^)(_Bool, _Bool))arg1;
- (void)wakeSystemForReason:(NSString *)arg1 reply:(void (^)(_Bool))arg2;
- (void)wakeSystemForReason:(NSString *)arg1;
- (void)sleepSystemForReason:(NSString *)arg1;
- (void)launchKioskApp;
- (void)deactivateApplication;
- (void)registerNowPlayingDelegate:(id <PBSystemServiceNowPlayingDelegate>)arg1;
@end

