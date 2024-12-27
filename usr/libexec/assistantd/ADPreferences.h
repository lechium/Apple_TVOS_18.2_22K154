//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADPreferences : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _needToPostLanguageNotification;	// 16 = 0x10
    _Bool _needToPostOutputLanguageNotification;	// 17 = 0x11
    NSMutableDictionary *_redirects;	// 24 = 0x18
    NSMutableDictionary *_keychainCache;	// 32 = 0x20
    AFInstanceContext *_instanceContext;	// 40 = 0x28
}

+ (id)sharedPreferences;	// IMP=0x002000000027cc64
- (void).cxx_destruct;	// IMP=0x002000000027c7e8
- (void)dumpAssistantStateChunk:(CDUnknownBlockType)arg1;	// IMP=0x001000000027c75a
- (unsigned long long)siriAnalyticsIdentifiersConsistencyTimerIntervalMillisec;	// IMP=0x001000000027c6ea
- (unsigned long long)siriAnalyticsIdentifiersConsistencyTimerStartDelayMillisec;	// IMP=0x001000000027c67a
- (_Bool)isSiriNetworkActivated;	// IMP=0x001000000027c659
- (void)setShouldDisableServerFallbackDomain:(_Bool)arg1;	// IMP=0x001000000027c606
- (void)setShouldDisableServerFallbackNL:(_Bool)arg1;	// IMP=0x001000000027c5b3
- (void)setIsSiriFullUODSupported:(_Bool)arg1;	// IMP=0x001000000027c560
- (_Bool)isSiriFullUODSupported;	// IMP=0x001000000027c53f
- (void);	// IMP=0x001000000027c4ec
- (void)setIsMediaEntitySyncDisabledSyncConfig:(_Bool)arg1;	// IMP=0x001000000027c499
- (void)setHasATVOrHomePodInHome:(_Bool)arg1;	// IMP=0x001000000027c446
- (void)setHasPairedWatches:(_Bool)arg1;	// IMP=0x001000000027c3f3
- (void)setHomeAutomationServerFlowBypassed:(_Bool)arg1;	// IMP=0x001000000027c3a0
- (_Bool)homeAutomationServerFlowBypassed;	// IMP=0x001000000027c346
- (id)syncMetadata;	// IMP=0x001000000027c327
- (void)setSyncMetadata:(id)arg1;	// IMP=0x001000000027c302
- (void)setHasSetVoiceTriggerDefault:(_Bool)arg1;	// IMP=0x001000000027c27a
- (_Bool)hasSetVoiceTriggerDefault;	// IMP=0x001000000027c22e
- (id)bootMuxSyncStatus;	// IMP=0x001000000027c20f
- (void)setBootMuxSyncStatus:(id)arg1;	// IMP=0x001000000027c1ea
- (id)experimentsUAFEmitted;	// IMP=0x001000000027c1cb
- (void)setExperimentsUAFEmitted:(id)arg1;	// IMP=0x001000000027c1a6
- (id)lastDeviceExperimentCheckDate;	// IMP=0x001000000027c187
- (void)setLastDeviceExperimentCheckDate:(id)arg1;	// IMP=0x001000000027c162
- (id)lastServerExperimentCheckDate;	// IMP=0x001000000027c143
- (void)setLastServerExperimentCheckDate:(id)arg1;	// IMP=0x001000000027c11e
- (id)useDeviceAuthenticationVersion;	// IMP=0x001000000027c0ff
- (double)myriadDeviceVTEndTimeDistanceThreshold;	// IMP=0x001000000027c0a8
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)arg1;	// IMP=0x001000000027c052
- (void)setMultiUserSetUpCompleteTimes:(id)arg1;	// IMP=0x001000000027c02d
- (id)multiUserSetupCompleteTimes;	// IMP=0x001000000027c00e
- (void)setMultiUserSetUpStartTimes:(id)arg1;	// IMP=0x001000000027bfe9
- (id)multiUserSetupStartTimes;	// IMP=0x001000000027bfca
- (id)singleUserCompanionACEHost;	// IMP=0x001000000027bfab
- (void)setSingleUserCompanionACEHost:(id)arg1;	// IMP=0x001000000027bf80
- (id)singleUserMeCard;	// IMP=0x001000000027bf61
- (void)setSingleUserMeCard:(id)arg1;	// IMP=0x001000000027bf36
- (id)_keychainCache;	// IMP=0x001000000027bef2
- (void)_cacheAndSetKeychainString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000027be0d
- (id)_keychainStringForKey:(id)arg1;	// IMP=0x001000000027bd82
- (id)_cachedKeychainStringForKey:(id)arg1;	// IMP=0x001000000027bc1e
- (_Bool)dictationLanguageDetectorEnabled;	// IMP=0x001000000027bc14
- (_Bool)isSearchDataSharingStatusForced;	// IMP=0x001000000027bc06
- (long long)searchQueriesDataSharingStatus;	// IMP=0x001000000027bbf8
- (void)setSearchQueriesDataSharingStatus:(long long)arg1;	// IMP=0x001000000027bbe7
- (void)setAllowExplicitContent:(_Bool)arg1;	// IMP=0x001000000027bb91
- (_Bool)allowExplicitContent;	// IMP=0x001000000027bb46
- (void)setServerAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold:(id)arg1;	// IMP=0x001000000027bb21
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;	// IMP=0x001000000027babd
- (void)setServerMediaPlaybackVolumeThresholdForAudioSessionActivationDelay:(id)arg1;	// IMP=0x001000000027ba98
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;	// IMP=0x001000000027ba34
- (void)setServerAudioSessionActivationDelay:(id)arg1;	// IMP=0x001000000027ba0f
- (id)serverAudioSessionActivationDelay;	// IMP=0x001000000027b9ab
- (id)overrideAudioSessionActiveDelay;	// IMP=0x001000000027b955
- (_Bool)getAudioSessionActiveDelay:(double *)arg1;	// IMP=0x001000000027b8c5
- (_Bool)getMinimumOutputVolume:(float *)arg1;	// IMP=0x001000000027b836
- (_Bool)getMaximumOutputVolume:(float *)arg1;	// IMP=0x001000000027b7a7
- (void)setLastKnownAnalyticsStoreState:(unsigned long long)arg1;	// IMP=0x001000000027b754
- (unsigned long long)lastKnownAnalyticsStoreState;	// IMP=0x001000000027b6e4
- (_Bool)proxyConnectionDisabled;	// IMP=0x001000000027b694
- (_Bool)metricsSenderDisabled;	// IMP=0x001000000027b63a
- (void)setExperimentState:(id)arg1 forConfigurationIdentifier:(id)arg2;	// IMP=0x001000000027b5d2
- (id)getExperimentStateForConfigurationIdentifier:(id)arg1;	// IMP=0x001000000027b584
- (void)setExperimentIdentifier:(id)arg1 forConfigurationIdentifier:(id)arg2;	// IMP=0x001000000027b51c
- (id)experimentIdentifierForConfigurationIdentifier:(id)arg1;	// IMP=0x001000000027b4ce
- (void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1;	// IMP=0x001000000027b4be
- (_Bool)siriDataSharingHomePodSetupDeviceIsValid;	// IMP=0x001000000027b4b0
- (void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000027b32e
- (long long)siriDataSharingOptInStatus;	// IMP=0x001000000027b320
- (void)setLastCompanionRemoteDataFetchDate:(id)arg1;	// IMP=0x001000000027b2fb
- (id)lastCompanionRemoteDataFetchDate;	// IMP=0x001000000027b297
- (void)setCompanionIdentifier:(id)arg1;	// IMP=0x001000000027b1d0
- (id)companionIdentifier;	// IMP=0x001000000027b117
- (void)setSharedUserIdentifier:(id)arg1 loggingSharedUserIdentifier:(id)arg2;	// IMP=0x001000000027b013
- (id)loggingSharedUserIdentifier;	// IMP=0x001000000027af5a
- (id)sharedUserIdentifier;	// IMP=0x001000000027aea1
- (id)multiUserHomeUUIDsForDeletion;	// IMP=0x001000000027ae3d
- (void)removeMultiUserHomeUUID:(id)arg1;	// IMP=0x001000000027ad3a
- (void)setMultiUserHomeUUIDsForDeletion:(id)arg1;	// IMP=0x001000000027abd2
- (void)setIsMultiUserSyncerMeDevice:(_Bool)arg1;	// IMP=0x001000000027ab7f
- (_Bool)isMultiUserSyncerMeDevice;	// IMP=0x001000000027ab5e
- (void)setMultiUserSyncerBackupIdentifiersAnchor:(id)arg1;	// IMP=0x001000000027ab39
- (id)multiUserSyncerBackupIdentifiersAnchor;	// IMP=0x001000000027ab1a
- (void)setMultiUserSyncerIdentifiersAnchor:(id)arg1;	// IMP=0x001000000027aaf5
- (id)multiUserSyncerIdentifiersAnchor;	// IMP=0x001000000027aad6
- (void)setMultiUserSyncerSADAnchor:(id)arg1;	// IMP=0x001000000027aab1
- (id)multiUserSyncerSADAnchor;	// IMP=0x001000000027aa92
- (void)setMultiUserIsOnboardingDevice:(_Bool)arg1;	// IMP=0x001000000027a9ae
- (_Bool)multiUserIsOnboardingDevice;	// IMP=0x001000000027a98d
- (void)setMultiUserSharedUsers:(id)arg1;	// IMP=0x001000000027a968
- (id)multiUserSharedUsers;	// IMP=0x001000000027a904
- (void)setDeviceOwner:(id)arg1;	// IMP=0x001000000027a8df
- (id)deviceOwner;	// IMP=0x001000000027a87b
- (void)setMultiUserPrimaryUser:(id)arg1;	// IMP=0x001000000027a856
- (id)multiUserPrimaryUser;	// IMP=0x001000000027a7f2
- (void)setHasSetupMultiUserSharedRecordZoneSubscription:(_Bool)arg1;	// IMP=0x001000000027a79f
- (_Bool)hasSetUpMultiUserSharedRecordZoneSubscription;	// IMP=0x001000000027a74f
- (void)setMultiUserSharedDataServerChangeToken:(id)arg1;	// IMP=0x001000000027a72a
- (id)multiUserSharedDataServerChangeToken;	// IMP=0x001000000027a6c6
- (void)setDeviceWasRedirectedToProduction:(_Bool)arg1;	// IMP=0x001000000027a605
- (_Bool)deviceWasRedirectedToProduction;	// IMP=0x001000000027a5b5
- (void)setMultiUserVoiceIdentification:(_Bool)arg1;	// IMP=0x001000000027a44d
- (_Bool)multiUserVoiceIdentification;	// IMP=0x001000000027a401
- (void)setLastMetricsUploadFailureReportedOnDate:(id)arg1;	// IMP=0x001000000027a3dc
- (id)lastMetricsUploadFailureReportedOnDate;	// IMP=0x001000000027a3bd
- (void)setLastMetricsUploadDate:(id)arg1;	// IMP=0x001000000027a398
- (id)lastMetricsUploadDate;	// IMP=0x001000000027a379
- (void)setLastSyncVerificationDate:(id)arg1;	// IMP=0x001000000027a354
- (id)lastSyncVerificationDate;	// IMP=0x001000000027a335
- (void)setLastKnownProxyStreamId:(id)arg1;	// IMP=0x001000000027a310
- (id)lastKnownProxyStreamId;	// IMP=0x001000000027a2ac
- (void)setRedirect:(id)arg1 forServerURLString:(id)arg2;	// IMP=0x001000000027a179
- (id)redirectForServerURLString:(id)arg1;	// IMP=0x001000000027a07a
- (id)productTypePrefix;	// IMP=0x001000000027a016
- (id)serverOverride;	// IMP=0x0010000000279fac
- (_Bool)ignoreLocationWiFiStatus;	// IMP=0x0010000000279f52
- (void)setCountryCode:(id)arg1;	// IMP=0x0010000000279f45
- (id)countryCode;	// IMP=0x0010000000279f3b
- (void)setIsUsingDefaultLanguageSettings:(_Bool)arg1;	// IMP=0x0010000000279ebf
- (_Bool)isUsingDefaultLanguageSettings;	// IMP=0x0010000000279e9e
- (void)setOutputVoice:(id)arg1;	// IMP=0x0010000000279dda
- (id)outputVoiceWithFallback:(_Bool)arg1;	// IMP=0x0010000000279d76
- (id)outputVoice;	// IMP=0x0010000000279d5f
- (void)setLanguageCode:(id)arg1;	// IMP=0x0010000000279c8e
- (id)languageCodeWithFallback:(_Bool)arg1;	// IMP=0x0010000000279c2a
- (id)languageCode;	// IMP=0x0010000000279c13
- (double)serverTimeoutInterval;	// IMP=0x0010000000279baf
- (_Bool)statisticsRecordingEnabled;	// IMP=0x0010000000279b8e
- (void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x0010000000279b69
- (id)accountIdentifiers;	// IMP=0x0010000000279b0d
- (id)activeAccountIdentifier;	// IMP=0x0010000000279aee
- (void)setAccountInfo:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000002799c5
- (id)accountInfoForIdentifier:(id)arg1;	// IMP=0x0010000000279942
- (void)synchronize;	// IMP=0x00100000002798f0
- (id)init;	// IMP=0x00100000002798dc
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x0010000000279805

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

