//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudPushNotificationController, CloudUserNotificationController, ICDCloudBadgeService, ICDCloudServiceStatusMonitor, ICDEnhancedAudioKeyManager, ICDMediaUserStateCenterServer, ICDNetworkAvailabilityService, ICDPlaybackPositionService, ICDServerNotificationsManager, ICDServerOperationsManager, ICDelegateAccountStoreServiceListener, ICDelegationProviderService, NSMutableDictionary, NSOperationQueue, NSString, NSUserDefaults;
@protocol ICDAccountManaging, ICDBackgroundTaskManaging, ICDHandlerCoordinating, ICMediaUserStateCenterServerProtocol, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface ICDServer : NSObject
{
    _Bool _startupSequenceCompleted;	// 8 = 0x8
    _Bool _ignoreAccountChanges;	// 9 = 0x9
    _Bool _switchLibraryManagementPolicy;	// 10 = 0xa
    unsigned int _outputClusterType;	// 12 = 0xc
    ICDCloudBadgeService *_cloudBadgingService;	// 16 = 0x10
    ICDCloudServiceStatusMonitor *_cloudServiceStatusMonitor;	// 24 = 0x18
    long long _preferredVideoQuality;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_startupQueue;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_serverStartupGroup;	// 56 = 0x38
    NSOperationQueue *_internalOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_xpcListeners;	// 72 = 0x48
    ICDNetworkAvailabilityService *_networkAvailabilityService;	// 80 = 0x50
    ICDPlaybackPositionService *_playbackPositionService;	// 88 = 0x58
    ICDServerOperationsManager *_serverOperationsManager;	// 96 = 0x60
    ICDServerNotificationsManager *_serverNotificationsManager;	// 104 = 0x68
    id <ICDAccountManaging> _accountManager;	// 112 = 0x70
    id <ICDHandlerCoordinating> _handlerCoordinator;	// 120 = 0x78
    id <ICDBackgroundTaskManaging> _backgroundTaskManager;	// 128 = 0x80
    ICDelegateAccountStoreServiceListener *_delegateAccountStoreListener;	// 136 = 0x88
    ICDelegationProviderService *_delegationProviderService;	// 144 = 0x90
    CloudPushNotificationController *_pushNotificationController;	// 152 = 0x98
    NSUserDefaults *_mediaPlaybackDefaults;	// 160 = 0xa0
    CloudUserNotificationController *_userNotificationController;	// 168 = 0xa8
    ICDMediaUserStateCenterServer<ICMediaUserStateCenterServerProtocol> *_mediaUserStateCenterServer;	// 176 = 0xb0
    unsigned long long _stateHandle;	// 184 = 0xb8
    ICDEnhancedAudioKeyManager *_enhancedAudioKeyManager;	// 192 = 0xc0
    NSObject<OS_dispatch_source> *_sigtermSource;	// 200 = 0xc8
}

+ (id)server;	// IMP=0x002000000006ab6b
- (void).cxx_destruct;	// IMP=0x00200000000640e4
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *sigtermSource; // @synthesize sigtermSource=_sigtermSource;
@property(readonly, nonatomic) ICDEnhancedAudioKeyManager *enhancedAudioKeyManager; // @synthesize enhancedAudioKeyManager=_enhancedAudioKeyManager;
@property(nonatomic) _Bool switchLibraryManagementPolicy; // @synthesize switchLibraryManagementPolicy=_switchLibraryManagementPolicy;
@property(readonly, nonatomic) unsigned int outputClusterType; // @synthesize outputClusterType=_outputClusterType;
@property(readonly, nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(readonly, nonatomic) ICDMediaUserStateCenterServer<ICMediaUserStateCenterServerProtocol> *mediaUserStateCenterServer; // @synthesize mediaUserStateCenterServer=_mediaUserStateCenterServer;
@property(readonly, nonatomic) CloudUserNotificationController *userNotificationController; // @synthesize userNotificationController=_userNotificationController;
@property(readonly, nonatomic) NSUserDefaults *mediaPlaybackDefaults; // @synthesize mediaPlaybackDefaults=_mediaPlaybackDefaults;
@property(readonly, nonatomic) CloudPushNotificationController *pushNotificationController; // @synthesize pushNotificationController=_pushNotificationController;
@property(readonly, nonatomic) ICDelegationProviderService *delegationProviderService; // @synthesize delegationProviderService=_delegationProviderService;
@property(readonly, nonatomic) ICDelegateAccountStoreServiceListener *delegateAccountStoreListener; // @synthesize delegateAccountStoreListener=_delegateAccountStoreListener;
@property(readonly, nonatomic) id <ICDBackgroundTaskManaging> backgroundTaskManager; // @synthesize backgroundTaskManager=_backgroundTaskManager;
@property(readonly, nonatomic) id <ICDHandlerCoordinating> handlerCoordinator; // @synthesize handlerCoordinator=_handlerCoordinator;
@property(readonly, nonatomic) id <ICDAccountManaging> accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) ICDServerNotificationsManager *serverNotificationsManager; // @synthesize serverNotificationsManager=_serverNotificationsManager;
@property(readonly, nonatomic) ICDServerOperationsManager *serverOperationsManager; // @synthesize serverOperationsManager=_serverOperationsManager;
@property(readonly, nonatomic) ICDPlaybackPositionService *playbackPositionService; // @synthesize playbackPositionService=_playbackPositionService;
@property(readonly, nonatomic) ICDNetworkAvailabilityService *networkAvailabilityService; // @synthesize networkAvailabilityService=_networkAvailabilityService;
@property(readonly, nonatomic) NSMutableDictionary *xpcListeners; // @synthesize xpcListeners=_xpcListeners;
@property(readonly, nonatomic) NSOperationQueue *internalOperationQueue; // @synthesize internalOperationQueue=_internalOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *serverStartupGroup; // @synthesize serverStartupGroup=_serverStartupGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
@property(nonatomic) _Bool ignoreAccountChanges; // @synthesize ignoreAccountChanges=_ignoreAccountChanges;
- (void)_updateAirPlaySettingsForConfiguration:(id)arg1;	// IMP=0x0010000000063cb7
- (void)_handleFamilyContentDeletionEvent:(id)arg1;	// IMP=0x001000000006389c
- (void)_precacheHomeProperties;	// IMP=0x0010000000063867
- (void)_updateMediaRemoteCommands:(_Bool)arg1;	// IMP=0x001000000006367a
- (void)_updateAccountServerCachedData;	// IMP=0x001000000006341c
- (void)_handleFlushPlayActivityEvents;	// IMP=0x00100000000633d6
- (void)_updateHTTPCookieStoreForContentRestrictions;	// IMP=0x001000000006338b
- (void)_updateEnhancedAudioAvailabilityIfNeeded;	// IMP=0x0010000000063261
- (void)_performPeriodicSubscriptionTasks;	// IMP=0x001000000006315a
- (void)_transitionAppleTVToParallelMultiUserLibraryManagementPolicy;	// IMP=0x0010000000062fb7
- (void)_retryLoadingCloudLibraryForSecondaryAccountsOnAppleTV;	// IMP=0x0010000000062ea3
- (void)_preprocessURLResolutionCacheDictionary:(id)arg1;	// IMP=0x001000000006275c
- (void)_writeURLResolutionCacheFileUsingBag:(id)arg1;	// IMP=0x00100000000620fb
- (void)_ensureURLResolutionCacheFileExists;	// IMP=0x0010000000061ecf
- (id)_urlResolutionCacheFilePath;	// IMP=0x0010000000061eae
- (void)_updateSocialFeaturesAvailabilityIfNeededUsingBag:(id)arg1;	// IMP=0x0010000000061c6c
- (void)_initializeSocialFeaturesAvailabilityIfNeeded;	// IMP=0x0010000000061b01
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)arg1;	// IMP=0x00100000000619b6
- (void)_handleApplicationRegistrationNotification:(id)arg1;	// IMP=0x0010000000061574
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;	// IMP=0x0010000000061400
- (void)_ensureMusicSubscriptionKeysAreAvailableForConfiguration:(id)arg1;	// IMP=0x00100000000611d3
- (void)_ensureSubscriptionInformationIsUpToDateForConfiguration:(id)arg1;	// IMP=0x001000000006109a
- (void)_updateAllowsExplicitContentSettingForConfiguration:(id)arg1 automatically:(_Bool)arg2;	// IMP=0x0010000000060970
- (void)_setupMPMediaLibraryFilteringForConfigurations:(id)arg1;	// IMP=0x001000000006096a
- (void)_migrateToLatestUserVersionForConfigurations:(id)arg1;	// IMP=0x00100000000606d7
- (void)_completeStartupSequenceIfNeeded;	// IMP=0x00100000000605d6
- (_Bool)_canCompleteStartupSequence;	// IMP=0x0010000000060483
@property(nonatomic, getter=isStartupSequenceCompleted) _Bool startupSequenceCompleted; // @synthesize startupSequenceCompleted=_startupSequenceCompleted;
@property(readonly, nonatomic) ICDCloudServiceStatusMonitor *cloudServiceStatusMonitor; // @synthesize cloudServiceStatusMonitor=_cloudServiceStatusMonitor;
@property(readonly, nonatomic) ICDCloudBadgeService *cloudBadgingService; // @synthesize cloudBadgingService=_cloudBadgingService;
- (void)_tearDownKVO;	// IMP=0x0010000000060293
- (void)_setupKVO;	// IMP=0x0010000000060267
- (void)_stopAncillaryServices;	// IMP=0x00100000000600d1
- (void)_startAncillaryServices;	// IMP=0x001000000005f81d
- (void)_initializeAncillaryServices;	// IMP=0x001000000005f7ac
- (void)_setupSigtermHandler;	// IMP=0x001000000005f666
- (void)_setupInternalQueues;	// IMP=0x001000000005f571
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000005f45e
- (void)notificationsManagerDidReceiveFamilyCircleChangedNotification:(id)arg1;	// IMP=0x001000000005f2c8
- (void)notificationsManagerDidRecieveICPlayActivityFlushInternalTestRequestNotification:(id)arg1;	// IMP=0x001000000005f1cf
- (void)notificationsManagerDidReceiveMusicSettingsChangedNotification:(id)arg1;	// IMP=0x001000000005f0d6
- (void)notificationsManagerDidReceivePhoneNumberChangedNotification:(id)arg1;	// IMP=0x001000000005ef85
- (void)notificationsManagerDidReceiveFirstUnlockNotification:(id)arg1;	// IMP=0x001000000005ee8c
- (void)notificationsManager:(id)arg1 didReceiveApplicationInstallationNotification:(id)arg2;	// IMP=0x001000000005ed74
- (void)notificationsManager:(id)arg1 didReceiveFamilyDeletionEventNotification:(id)arg2;	// IMP=0x001000000005ec0f
- (void)notificationsManager:(id)arg1 didReceiveAuthServiceTokenDidChangeNotification:(id)arg2;	// IMP=0x001000000005eb21
- (void)notificationsManager:(id)arg1 didReceiveSubscriptionStatusDidChangeNotification:(id)arg2;	// IMP=0x001000000005e985
- (void)notificationsManager:(id)arg1 didReceiveAllowsMusicVideosDidChangeNotification:(id)arg2;	// IMP=0x001000000005e88c
- (void)notificationsManager:(id)arg1 didReceiveAllowsExplicitContentDidChangeNotification:(id)arg2;	// IMP=0x001000000005e693
- (void)notificationsManager:(id)arg1 didReceiveHandlerCoordinatorFinishedInitializationNotification:(id)arg2;	// IMP=0x001000000005e4bd
- (void)notificationsManager:(id)arg1 didReceiveUserIdentityStoreDidChangeNotification:(id)arg2;	// IMP=0x001000000005e3f8
- (void)notificationsManager:(id)arg1 didReceiveActiveUserIdentityDidChangeNotification:(id)arg2;	// IMP=0x001000000005e322
- (void)notificationsManagerDidReceiveCloudAuthenticationDidChangeDarwinNotification:(id)arg1;	// IMP=0x001000000005e1dc
- (void)notificationsManagerDidReceiveCellularDataRestrictionDidChangeDarwinNotification:(id)arg1;	// IMP=0x001000000005df6a
- (void)notificationsManagerDidReceiveLibraryImportDidFinishDarwinNotification:(id)arg1;	// IMP=0x001000000005dd61
- (void)notificationsManagerDidReceiveBuddySetupDoneDarwinNotification:(id)arg1;	// IMP=0x001000000005dd5b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000005d7a1
- (long long)_ICCloudServerSupportedServiceForXPCListener:(id)arg1;	// IMP=0x001000000005d689
- (id)_setupXPCListenerForService:(long long)arg1;	// IMP=0x001000000005d579
- (void)notifyDeviceSetupFinishedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005d46d
- (void)getListenerEndpointForService:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005d257
- (id)handlerWithType:(long long)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005ccdd
- (void)scheduleBackgroundUpdateType:(long long)arg1 forConfiguration:(id)arg2;	// IMP=0x001000000005cc66
- (void)listCloudServerOperations;	// IMP=0x001000000005cc21
- (void)processPendingKeyInvalidations;	// IMP=0x001000000005cb7e
- (void)fetchEnhancedAudioOfflineKeys;	// IMP=0x001000000005cadb
- (void)refreshEnhancedAudioSharedKeys;	// IMP=0x001000000005ca38
- (id)daemonOptionsForConfiguration:(id)arg1;	// IMP=0x001000000005c586
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c51d
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c4b4
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x001000000005c463
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x001000000005c412
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000005c39d
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000005c328
- (void)stop;	// IMP=0x001000000005c176
- (void)start;	// IMP=0x001000000005c005
- (id)_stateDump;	// IMP=0x001000000005bfb5
- (void)dealloc;	// IMP=0x001000000005bef2
- (id)_init;	// IMP=0x001000000005bd21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

