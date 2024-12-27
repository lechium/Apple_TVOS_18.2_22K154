//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFAudioPlaybackRequest, AFBluetoothDeviceInfo, AFCompanionDeviceInfo, AFDeleteSiriHistoryContext, AFMyriadAdvertisementContext, AFRequestInfo, AFSpeechRecognition, AFVoiceInfo, MISSING_TYPE, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL, NSUUID, SAConfidenceScores, SCDAAdvertisementContext, SCDAFParticipation;

@protocol AFSettingsService <NSObject>
- (oneway void)getODDDeviceProperties:(void (^)(ODDSiriSchemaODDSiriClientEvent *, NSError *))arg1;
- (oneway void)isVoiceProfileAvailableForiCloudAltDSID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)getSiriRMVStateForiCloudAltDSID:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (oneway void)setSiriRMVState:(_Bool)arg1 foriCloudAltDSID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fileARadarWithReason:(NSString *)arg1 room:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)createRadarForCrashWithReason:(NSString *)arg1 process:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)clearMuxSyncStatusWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)syncStatusWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)readSyncTokenForAssistantId:(NSString *)arg1 aceHost:(NSString *)arg2 completion:(void (^)(NSString *))arg3;
- (oneway void)fetchSyncTokenFromCompanionAssistantId:(NSString *)arg1 forAceHost:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (oneway void)downloadMuxUserDataWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)getCurrentActiveLanguageCodesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)getAssistantIsEnabledForDeviceWithSiriInfo:(NSDictionary *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (oneway void)getAssetStatusForLanguage:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *))arg2;
- (oneway void)areSiriSAEAssetsAvailable:(void (^)(_Bool))arg1;
- (oneway void)areSiriUODAssetsAvailable:(void (^)(_Bool, NSError *))arg1;
- (void)postMUXTestResultSelectedWithRcId:(NSString *)arg1 voiceIdConfidenceScores:(SAConfidenceScores *)arg2;
- (void)postMUXTestResultCandidateWithRcId:(NSString *)arg1 sharedUserIdToSpeechRecognitionDict:(NSDictionary *)arg2 voiceIdConfidenceScores:(SAConfidenceScores *)arg3;
- (oneway void)postTestResultSelectedWithRcId:(NSString *)arg1;
- (oneway void)postTestResultCandidateWithRcId:(NSString *)arg1 recognitionSausage:(AFSpeechRecognition *)arg2;
- (oneway void)setVoiceTriggerEnabled:(_Bool)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)isVoiceTriggerEnabled:(void (^)(_Bool, NSError *))arg1;
- (oneway void)setAllowJustSiriHomeKitSetting:(_Bool)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)isJustSiriEnabledInTheHome:(void (^)(_Bool))arg1;
- (void)availableLanguagesInTheHome:(void (^)(NSArray *))arg1;
- (oneway void)setRecognizeMyVoiceEnabled:(_Bool)arg1;
- (oneway void)getCurrentAccessoryInfoWithCompletion:(void (^)(AFHomeAccessoryInfo *))arg1;
- (oneway void)triggerABCForType:(NSString *)arg1 subType:(NSString *)arg2 context:(NSDictionary *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (oneway void)publishFeedbackArbitrationParticipation:(SCDAFParticipation *)arg1;
- (oneway void)getSidekickBoostsFileWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getTrialEnables:(NSArray *)arg1 doubleFactors:(NSArray *)arg2 withCompletion:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg3;
- (oneway void)getAccessoryInfoForAccessoryWithUUID:(NSUUID *)arg1 completionHandler:(void (^)(_Bool, NSString *, NSError *))arg2;
- (oneway void)getSpeakerCapabilityForAccessoryWithUUID:(NSUUID *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)pushSCDAAdvertisementContext:(SCDAAdvertisementContext *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)pushMyriadAdvertisementContext:(AFMyriadAdvertisementContext *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)getRecordedAudioDirectoryPathsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)trimRecordedAudioWithIdentifier:(NSString *)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(void (^)(NSURL *, NSError *))arg5;
- (oneway void)accessRecordedAudioWithIdentifier:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (oneway void)siriDesignModeIsEnabled:(void (^)(_Bool))arg1;
- (oneway void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(void (^)(void))arg2;
- (oneway void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;
- (oneway void)isSearchDataSharingStatusForced:(void (^)(_Bool))arg1;
- (oneway void)getSearchQueriesDataSharingStatus:(void (^)(long long))arg1;
- (oneway void)setSearchQueriesDataSharingStatus:(long long)arg1 completion:(void (^)(void))arg2;
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(void (^)(void))arg2;
- (oneway void)deleteSiriHistoryWithContext:(AFDeleteSiriHistoryContext *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)sendSampledAudioToServerWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)setIsHomePodInHH2Mode:(_Bool)arg1 completion:(void (^)(void))arg2;
- (oneway void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1 completion:(void (^)(void))arg2;
- (oneway void)shouldSuppressSiriDataSharingOptInAlertWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(void (^)(void))arg2;
- (oneway void)getSiriDataSharingOptInStatusWithCompletion:(void (^)(long long))arg1;
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (oneway void)handleCommand:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getAudioSessionCoordinationSnapshotWithCompletion:(void (^)(AFAudioSessionCoordinationSnapshot *))arg1;
- (oneway void)getCurrentNWActivityIDWithCompletion:(void (^)(NSUUID *))arg1;
- (oneway void)clearOpportuneSpeakingEdgeDetectorSignalOverride;
- (oneway void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;
- (oneway void)clearShowAppsBehindSiriInCarPlayEnabled;
- (oneway void)setShowAppsBehindSiriInCarPlayEnabled:(_Bool)arg1;
- (oneway void)getShowAppsBehindSiriInCarPlayEnabledWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)clearMessageWithoutConfirmationHeadphonesEnabled;
- (oneway void)setMessageWithoutConfirmationHeadphonesEnabled:(_Bool)arg1;
- (oneway void)getMessageWithoutConfirmationHeadphonesEnabledWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)clearMessageWithoutConfirmationInCarPlayEnabled;
- (oneway void)setMessageWithoutConfirmationInCarPlayEnabled:(_Bool)arg1;
- (oneway void)getMessageWithoutConfirmationInCarPlayEnabledWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)clearMessageWithoutConfirmationEnabled;
- (oneway void)setMessageWithoutConfirmationEnabled:(_Bool)arg1;
- (oneway void)getMessageWithoutConfirmationEnabledWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setAnnounceNotificationsOnBuiltInSpeakerEnabled:(_Bool)arg1;
- (oneway void)updateAnnounceNotificationsOnHearingAidSupportedStatus;
- (oneway void)setAnnounceNotificationsOnHearingAidsSupported:(_Bool)arg1;
- (oneway void)setAnnounceNotificationsOnHearingAidsEnabled:(_Bool)arg1;
- (oneway void)clearAnnounceNotificationsInCarPlayType;
- (oneway void)setAnnounceNotificationsInCarPlayType:(long long)arg1;
- (oneway void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(void (^)(long long))arg1;
- (oneway void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
- (oneway void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;
- (oneway void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)fetchCurrentlyRoutedHeadphonesCBUUIDWithCompletion:(void (^)(NSString *))arg1;
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(NSDate *)arg1 forApp:(NSString *)arg2 platform:(long long)arg3;
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(NSString *)arg1 platform:(long long)arg2 completion:(void (^)(NSDate *))arg3;
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(NSDate *)arg1 platform:(long long)arg2;
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(void (^)(NSDate *))arg2;
- (oneway void)setSpokenNotificationProxCardSeen:(_Bool)arg1;
- (oneway void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;
- (oneway void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setSpokenNotificationShouldAnnounceAllNotifications:(_Bool)arg1;
- (oneway void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)setSpokenNotificationIsAlwaysOpportune:(_Bool)arg1;
- (oneway void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(void (^)(_Bool))arg1;
- (oneway void)clearSpokenNotificationTemporarilyDisabledStatus;
- (oneway void)setNanoAlwaysShowRecognizedSpeech:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoSiriResponseShouldAlwaysPrint:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoMessageWithoutConfirmationEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoLanguage:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoOutputVoice:(AFVoiceInfo *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoTTSSpeakerVolume:(NSNumber *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoUseDeviceSpeakerForTTS:(NSNumber *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoDictationAutoPunctuationEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)fetchMultiUserVoiceIdentificationSetting:(void (^)(_Bool))arg1;
- (oneway void)getSharedUserID:(void (^)(NSString *, NSString *, NSError *))arg1;
- (oneway void)updateMultiUserWithSharedUserId:(NSString *)arg1 companionInfo:(AFCompanionDeviceInfo *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getHomeUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (oneway void)updateVoiceIdScoreToUser:(NSString *)arg1 score:(NSString *)arg2 reset:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)showMultiUserSharedUserIDsCompletion:(void (^)(NSString *, NSArray *))arg1;
- (oneway void)showPrimaryUserSharedUserIDWithCompletion:(void (^)(NSString *))arg1;
- (oneway void)resetProfileNames:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)showHomeProfileNamesWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)showLocalProfileNamesWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getMultiUserCompanionInfo:(void (^)(NSDictionary *))arg1;
- (oneway void)showMultiUserCompanionInfo:(void (^)(NSDictionary *))arg1;
- (oneway void)showMultiUsers:(void (^)(NSArray *))arg1;
- (oneway void)removeMultiUserUserWithSharedUserId:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)removeMultiUserUser:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)addMultiUserUser:(NSString *)arg1 sharedId:(NSString *)arg2 loggableSharedId:(NSString *)arg3 iCloudAltDSID:(NSString *)arg4 enrollmentName:(NSString *)arg5 isPrimary:(_Bool)arg6 completion:(void (^)(NSError *))arg7;
- (oneway void)multiUserCompanionDeviceIdentifiers:(void (^)(NSArray *))arg1;
- (oneway void)getPersonalMultiUserDeviceIdentifiers:(void (^)(NSArray *))arg1;
- (oneway void)postJSDiscoveryNotificationForBTDeviceWithInfo:(AFBluetoothDeviceInfo *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (oneway void)stopObservingBluetoothInEarDetectionStateForObserverID:(unsigned long long)arg1;
- (oneway void)startObservingBluetoothInEarDetectionStateForBTAddress:(NSString *)arg1 forObserverID:(unsigned long long)arg2;
- (oneway void)getInEarDetectionStateForBTAddress:(NSString *)arg1 withCompletion:(void (^)(AFBluetoothHeadphoneInEarDetectionState *))arg2;
- (oneway void)stopObservingBluetoothWirelessSplitterSession;
- (oneway void)startObservingBluetoothWirelessSplitterSession;
- (oneway void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(void (^)(AFBluetoothWirelessSplitterSessionInfo *))arg1;
- (oneway void)getPairedBluetoothDeviceInfoArrayWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getBluetoothDeviceInfoWithUID:(NSUUID *)arg1 completion:(void (^)(AFBluetoothDeviceInfo *))arg2;
- (oneway void)getBluetoothDeviceInfoWithAddress:(NSString *)arg1 completion:(void (^)(AFBluetoothDeviceInfo *))arg2;
- (oneway void)getHeadGesturesForCurrentlyRoutedDevice:(void (^)(AFBluetoothDeviceBooleanSettingResponse *))arg1;
- (oneway void)setHeadGesturesForCurrentlyRoutedDevice:(_Bool)arg1 withCompletion:(void (^)(AFBluetoothDeviceBooleanSettingResponse *))arg2;
- (oneway void)getPersonalVolumeForCurrentlyRoutedDevice:(void (^)(AFBluetoothDeviceBooleanSettingResponse *))arg1;
- (oneway void)setPersonalVolumeForCurrentlyRoutedDevice:(_Bool)arg1 withCompletion:(void (^)(AFBluetoothDeviceBooleanSettingResponse *))arg2;
- (oneway void)getConversationAwarenessForCurrentlyRoutedDevice:(void (^)(AFBluetoothDeviceBooleanSettingResponse *))arg1;
- (oneway void)setConversationAwarenessForCurrentlyRoutedDevice:(_Bool)arg1 withCompletion:(void (^)(AFBluetoothDeviceBooleanSettingResponse *))arg2;
- (oneway void)setSiriOutputVolume:(float)arg1 forAudioRoute:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getSiriOutputVolumeForAudioRoute:(NSString *)arg1 completion:(void (^)(float, NSError *))arg2;
- (oneway void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)resetExperimentForConfigurationIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getExperimentForConfigurationIdentifier:(NSString *)arg1 completion:(void (^)(AFExperiment *, NSError *))arg2;
- (oneway void)hasEverSetLanguageCodeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getProximityTuplesWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getCapabilitiesDataFromReachableDevicesWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)getManagedLocalAndRemotePeerInfoWithCompletion:(void (^)(AFPeerInfo *, NSArray *))arg1;
- (MISSING_TYPE *)setHardcodedBluetoothProximity: /* Error: Ran out of types for this method. */;
- (oneway void)getContextCollectorsInfoWithCompletion:(void (^)(NSArray *, _Bool))arg1;
- (oneway void)getOriginDeviceInfoForContextIdentifier:(NSUUID *)arg1 completion:(void (^)(AFPeerInfo *))arg2;
- (oneway void)getCurrentContextSnapshotWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getCrossDeviceContextWithCompletion:(void (^)(NSArray *))arg1;
- (oneway void)getSharedCompanionInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)configOverrides:(void (^)(NSDictionary *))arg1;
- (oneway void)setConfigOverrides:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (oneway void)getStereoPairState:(void (^)(_Bool, NSError *))arg1;
- (oneway void)getStereoPartnerLastMyriadWinDate:(void (^)(NSDate *, NSError *))arg1;
- (oneway void)getMeCard:(void (^)(SAPerson *, NSError *))arg1;
- (oneway void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchExperimentContextWithCompletion:(void (^)(AFExperimentContext *, NSError *))arg1;
- (oneway void)fetchExperimentConfigurationsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)sendMetricsToServerWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)resetAnalyticsStoreWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)purgeAnalyticsStoreWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getSupplementalLanguagesForProduct:(NSString *)arg1 forBuildVersion:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getSupplementalLanguageDictionaryForProduct:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getSupplementalLanguagesModificationDate:(void (^)(NSDate *, NSError *))arg1;
- (oneway void)getSupplementalLanguagesDictionary:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setSupplementalLanguages:(NSArray *)arg1 forProduct:(NSString *)arg2 forBuildVersion:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)setSupplementalLanguageDictionary:(NSDictionary *)arg1 forProduct:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)setEnableAssistantLogging:(_Bool)arg1;
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;
- (oneway void)stopAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 immediately:(_Bool)arg2;
- (oneway void)startAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 options:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)getPeerIdentifiers:(void (^)(NSArray *))arg1;
- (oneway void)startRemoteRequest:(AFRequestInfo *)arg1 onPeer:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)startUIMockServerRequestWithReplayFileURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)fetchSharedUserIdentifier:(void (^)(NSString *))arg1;
- (oneway void)dumpAssistantState:(void (^)(NSDictionary *))arg1;
- (oneway void)dismissUI;
- (oneway void)startMultiUserUIRequestWithText:(NSString *)arg1 expectedSpeakerSharedUserID:(NSString *)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (oneway void)startUIRequestWithSpeechAudioFileURL:(NSURL *)arg1;
- (oneway void)startUIRequestWithInfo:(AFRequestInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)startUIRequestWithText:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)setSpeechProfileExternalOfflineModelRootPath:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)setOfflineDictationProfileOverridePath:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)createOfflineSpeechProfileWithLanguage:(NSString *)arg1 modelOverridePath:(NSString *)arg2 JSONData:(NSData *)arg3 completion:(void (^)(NSData *, NSError *))arg4;
- (oneway void)getOfflineDictationStatusWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getOfflineAssistantStatusWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setLanguage:(NSString *)arg1 outputVoice:(AFVoiceInfo *)arg2 withCompletion:(void (^)(NSDictionary *, NSError *))arg3;
- (oneway void)setLanguage:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setOutputVoice:(AFVoiceInfo *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)getAvailableVoicesIncludingAssetInfo:(_Bool)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)_runServiceMaintenance;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)_fetchPeerData:(void (^)(void))arg1;
- (oneway void)_isInactiveDeviceSyncDisabled:(void (^)(_Bool))arg1;
- (oneway void)_isInactiveDeviceSyncDisabledByTrial:(void (^)(_Bool))arg1;
- (oneway void)_syncDataWithAnchorKeys:(NSArray *)arg1 forceReset:(_Bool)arg2 reason:(NSString *)arg3 reply:(void (^)(NSArray *))arg4;
- (oneway void)_clearSyncNeededForKey:(NSString *)arg1;
- (oneway void)_setSyncNeededForReason:(NSString *)arg1;
- (oneway void)barrierWithReply:(void (^)(void))arg1;
- (oneway void)_killDaemon;
- (oneway void)_resetSessionsAtNextRequestBoundary;
- (oneway void)_shutdownSessionIfIdle;
- (oneway void)suppressLowStorageNotificationForLanguage:(NSString *)arg1 suppress:(_Bool)arg2;
- (oneway void)setDictationAutoPunctuationEnabled:(_Bool)arg1;
- (oneway void)setDictationEnabled:(_Bool)arg1;
- (oneway void)setAssistantEnabled:(_Bool)arg1;
- (oneway void)fetchActiveAccount:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setActiveAccountIdentifier:(NSString *)arg1;
- (oneway void)deleteAccountWithIdentifier:(NSString *)arg1;
- (oneway void)saveAccountWithMessageDictionary:(NSDictionary *)arg1 setActive:(_Bool)arg2;
- (oneway void)retrieveAccountMessageDictionariesWithReply:(void (^)(NSArray *))arg1;
- (oneway void)fetchSupportedLanguagesWithReply:(void (^)(NSArray *, NSError *))arg1;
@end

