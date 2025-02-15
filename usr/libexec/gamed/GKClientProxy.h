//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, GKEntitlements, GKEventTuple, GKGameInternal, GKInviteSession, GKMatchResponse, GKPeerDiscovery, GKThreadsafeDictionary, GKViceroyNearbyDiscovery, LSApplicationRecord, MISSING_TYPE, NSDate, NSDictionary, NSLocale, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSXPCConnection, _GKStateMachine;
@protocol GKUIViewService, OS_dispatch_queue, OS_dispatch_source;

@interface GKClientProxy : NSObject
{
    _Bool _installed;	// 8 = 0x8
    _Bool _supportsMultipleActivePlayers;	// 9 = 0x9
    _Bool _isOcelot;	// 10 = 0xa
    _Bool _isGameCenterEnabledClient;	// 11 = 0xb
    _Bool _isAppUnlistedAndDisallowed;	// 12 = 0xc
    unsigned char _achievementsRateLimitedCurrentState;	// 13 = 0xd
    unsigned char _scoresRateLimitedCurrentState;	// 14 = 0xe
    _Bool _initialized;	// 15 = 0xf
    _Bool _supportsNearbyAdvertising;	// 16 = 0x10
    int _pid;	// 20 = 0x14
    unsigned int _applicationState;	// 24 = 0x18
    unsigned int _previousApplicationState;	// 28 = 0x1c
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    GKEntitlements *_entitlements;	// 56 = 0x38
    NSNumber *_adamID;	// 64 = 0x40
    LSApplicationRecord *_applicationRecord;	// 72 = 0x48
    NSNumber *_sandboxExtensionToken;	// 80 = 0x50
    NSNumber *_externalVersion;	// 88 = 0x58
    NSString *_bundleIdentifier;	// 96 = 0x60
    NSString *_originalBundleIdentifier;	// 104 = 0x68
    NSString *_bundleVersion;	// 112 = 0x70
    NSString *_bundleShortVersion;	// 120 = 0x78
    long long _environment;	// 128 = 0x80
    NSString *_persistentAnchorIdentifier;	// 136 = 0x88
    NSDate *_achievementsRateLimitingStartDate;	// 144 = 0x90
    long long _achievementsRateLimitingCurrentNumberOfRequests;	// 152 = 0x98
    NSDate *_scoresRateLimitingStartDate;	// 160 = 0xa0
    long long _scoresRateLimitingCurrentNumberOfRequests;	// 168 = 0xa8
    NSMutableDictionary *_alreadyCoalescingNetworkRequests;	// 176 = 0xb0
    NSString *_language;	// 184 = 0xb8
    GKClientProxy<GKUIViewService> *_viewService;	// 192 = 0xc0
    GKGameInternal *_currentGame;	// 200 = 0xc8
    GKViceroyNearbyDiscovery *_nearbyDiscovery;	// 208 = 0xd0
    GKPeerDiscovery *_peerDiscovery;	// 216 = 0xd8
    GKEventTuple *_launchEvent;	// 224 = 0xe0
    GKInviteSession *_inviteSession;	// 232 = 0xe8
    GKMatchResponse *_currentMatchResponse;	// 240 = 0xf0
    NSMapTable *_extensionProxies;	// 248 = 0xf8
    _GKStateMachine *_appInitStateMachine;	// 256 = 0x100
    GKThreadsafeDictionary *_appSessions;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;	// 272 = 0x110
    GKDatabaseConnection *_delayedRequestsDBConnection;	// 280 = 0x118
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 288 = 0x120
    NSMutableArray *_pendingDataTypesForRefresh;	// 296 = 0x128
    NSDictionary *_preferencesFromBag;	// 304 = 0x130
    NSObject<OS_dispatch_source> *_checkMatchStatusTimer;	// 312 = 0x138
    NSObject<OS_dispatch_queue> *_checkMatchStatusQueue;	// 320 = 0x140
    NSString *_parentBundleIdentifier;	// 328 = 0x148
}

+ (id)syncQueue;	// IMP=0x000000000011a891
+ (_Bool)isFirstParty:(_Bool)arg1 sourceApp:(id)arg2 allowList:(id)arg3;	// IMP=0x00100000001194a8
+ (void)removeClient:(id)arg1;	// IMP=0x001000000011f2d9
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011f20b
+ (id)clientsToBeEnumerated;	// IMP=0x001000000011f006
+ (id)clientForMatchmakingRID:(id)arg1;	// IMP=0x001000000011ee2d
+ (id)clientForInviteSessionToken:(id)arg1;	// IMP=0x001000000011eab5
+ (void)checkGameCenterEnabledForegroundClients;	// IMP=0x001000000011eaaf
+ (id)nonGameCenterForegroundClient;	// IMP=0x001000000011e952
+ (id)foregroundClient;	// IMP=0x001000000011e81a
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x001000000011e800
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;	// IMP=0x001000000011d907
+ (_Bool)isExtensionBundleID:(id)arg1;	// IMP=0x001000000011d7b2
+ (id)clientForProcessIdentifier:(int)arg1;	// IMP=0x001000000011d714
+ (id)clientForBundleID:(id)arg1;	// IMP=0x001000000011d6f7
+ (id)gameCenterClient;	// IMP=0x001000000011d6d0
+ (id)_clientLookup;	// IMP=0x001000000011d669
+ (id)factoryQueue;	// IMP=0x001000000011d612
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;	// IMP=0x0010000000123bd8
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;	// IMP=0x0010000000123848
+ (void)authenticationDidChange;	// IMP=0x0010000000123319
+ (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0010000000129601
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x00100000001285d8
+ (void)closeDatabaseFromManagedObjectContextForMOC:(id)arg1;	// IMP=0x001000000012d543
+ (void)closeDatabaseFromManagedObjectContextForPlayerID:(id)arg1;	// IMP=0x001000000012d4f7
+ (id)createPersistentStoreCoordinator;	// IMP=0x001000000012d43f
+ (id)gameCenterCacheDatabaseURLForPlayerID:(id)arg1 language:(id)arg2 name:(id)arg3 fileManager:(id)arg4;	// IMP=0x001000000012d321
+ (id)newManagedObjectContextForPlayerID:(id)arg1 bundleID:(id)arg2 language:(id)arg3 environment:(long long)arg4;	// IMP=0x001000000012cf9b
+ (id)_newManagedObjectContextWithCacheURL:(id)arg1 environment:(long long)arg2 psc:(id)arg3 storeOptions:(id)arg4;	// IMP=0x001000000012c6de
+ (void)migrateInsecureDatabaseToSecureDatabaseURL:(id)arg1 usingPersistantStoreCoordinator:(id)arg2 fileManager:(id)arg3 options:(id)arg4 playerID:(id)arg5 bundleID:(id)arg6 language:(id)arg7 name:(id)arg8;	// IMP=0x001000000012c5a9
+ (id)cacheFileQueue;	// IMP=0x001000000012c552
+ (id)managedObjectModel;	// IMP=0x001000000012c3f9
+ (void)removeAllCaches;	// IMP=0x001000000012c38d
+ (void)removeAllCachesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000012be54
+ (void)removeCacheForPlayerID:(id)arg1;	// IMP=0x001000000012b8dc
+ (id)insecureDatabaseFileURLForBundleID:(id)arg1 language:(id)arg2 playerID:(id)arg3 name:(id)arg4;	// IMP=0x001000000012b843
+ (id)insecureDatabaseDirectoryURLForBundleID:(id)arg1 language:(id)arg2 playerID:(id)arg3;	// IMP=0x001000000012b732
+ (id)cacheDirectoryForBundleID:(id)arg1;	// IMP=0x001000000012b699
+ (id)_existingManagedObjectContextForPlayerID:(id)arg1;	// IMP=0x001000000012b22c
+ (id)contextKeyForPlayerID:(id)arg1;	// IMP=0x001000000012b214
+ (id)getParentBundleIDPrefixWithChildBundleID:(id)arg1 parentBundleID:(id)arg2;	// IMP=0x001000000017a092
- (void).cxx_destruct;	// IMP=0x002000000011d447
@property(readonly, nonatomic) _Bool supportsNearbyAdvertising; // @synthesize supportsNearbyAdvertising=_supportsNearbyAdvertising;
@property(retain, nonatomic) NSString *parentBundleIdentifier; // @synthesize parentBundleIdentifier=_parentBundleIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkMatchStatusQueue; // @synthesize checkMatchStatusQueue=_checkMatchStatusQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *checkMatchStatusTimer; // @synthesize checkMatchStatusTimer=_checkMatchStatusTimer;
@property(copy, nonatomic) NSDictionary *preferencesFromBag; // @synthesize preferencesFromBag=_preferencesFromBag;
@property(retain, nonatomic) NSMutableArray *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *appSessions; // @synthesize appSessions=_appSessions;
@property(retain) _GKStateMachine *appInitStateMachine; // @synthesize appInitStateMachine=_appInitStateMachine;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMapTable *extensionProxies; // @synthesize extensionProxies=_extensionProxies;
@property(retain) GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKPeerDiscovery *peerDiscovery; // @synthesize peerDiscovery=_peerDiscovery;
@property(retain, nonatomic) GKViceroyNearbyDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(nonatomic) __weak GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_viewService;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSMutableDictionary *alreadyCoalescingNetworkRequests; // @synthesize alreadyCoalescingNetworkRequests=_alreadyCoalescingNetworkRequests;
@property(nonatomic) unsigned char scoresRateLimitedCurrentState; // @synthesize scoresRateLimitedCurrentState=_scoresRateLimitedCurrentState;
@property(nonatomic) long long scoresRateLimitingCurrentNumberOfRequests; // @synthesize scoresRateLimitingCurrentNumberOfRequests=_scoresRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *scoresRateLimitingStartDate; // @synthesize scoresRateLimitingStartDate=_scoresRateLimitingStartDate;
@property(nonatomic) unsigned char achievementsRateLimitedCurrentState; // @synthesize achievementsRateLimitedCurrentState=_achievementsRateLimitedCurrentState;
@property(nonatomic) long long achievementsRateLimitingCurrentNumberOfRequests; // @synthesize achievementsRateLimitingCurrentNumberOfRequests=_achievementsRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *achievementsRateLimitingStartDate; // @synthesize achievementsRateLimitingStartDate=_achievementsRateLimitingStartDate;
@property _Bool isAppUnlistedAndDisallowed; // @synthesize isAppUnlistedAndDisallowed=_isAppUnlistedAndDisallowed;
@property _Bool isGameCenterEnabledClient; // @synthesize isGameCenterEnabledClient=_isGameCenterEnabledClient;
@property _Bool isOcelot; // @synthesize isOcelot=_isOcelot;
@property(copy, nonatomic) NSString *persistentAnchorIdentifier; // @synthesize persistentAnchorIdentifier=_persistentAnchorIdentifier;
@property(nonatomic) _Bool supportsMultipleActivePlayers; // @synthesize supportsMultipleActivePlayers=_supportsMultipleActivePlayers;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *originalBundleIdentifier; // @synthesize originalBundleIdentifier=_originalBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(readonly, nonatomic) LSApplicationRecord *applicationRecord; // @synthesize applicationRecord=_applicationRecord;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)receivedData:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x001000000011ce29
- (void)playerLost:(id)arg1 deviceID:(id)arg2;	// IMP=0x001000000011cd32
- (void)playerFound:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x001000000011cc17
- (oneway void)refreshPendingDataTypes;	// IMP=0x001000000011c9be
- (void)deleteInviteSession;	// IMP=0x001000000011c83b
- (id)fetchOrCreateInviteSession;	// IMP=0x001000000011c565
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000011be8f
- (void)cancelOutstandingCheckMatchStatus;	// IMP=0x001000000011be06
- (_Bool)processMatchResponse:(id)arg1;	// IMP=0x001000000011b05b
- (void)checkMatchStatus;	// IMP=0x001000000011ab24
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000011aabe
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000011a8e8
- (_Bool)clientHasAnyPrivateEntitlement;	// IMP=0x001000000011a741
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x001000000011a5a8
- (void)updatePreferencesFromBag:(id)arg1;	// IMP=0x001000000011a553
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000011a425
@property(readonly, nonatomic) NSString *protocolVersion;
- (_Bool)conformsToMultiUserRestrictions;	// IMP=0x001000000011a3be
- (_Bool)isExtension;	// IMP=0x001000000011a3b6
- (_Bool)isUIService;	// IMP=0x001000000011a3ae
- (_Bool)isGameCenter;	// IMP=0x001000000011a360
- (_Bool)isDevSigned;	// IMP=0x001000000011a2b8
- (long long)appSignatureType;	// IMP=0x001000000011a20e
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000119c94
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)credentialForPlayer:(id)arg1;	// IMP=0x0010000000119973
- (id)transportWithCredential:(id)arg1;	// IMP=0x00100000001198bf
- (void)dealloc;	// IMP=0x00100000001197cb
- (void)updateIfRecentlyInstalled;	// IMP=0x001000000011957e
@property(readonly, nonatomic) _Bool distributorIsFirstPartyApple;
- (MISSING_TYPE *)clearDiscoveryInfo;	// IMP=0x0010000000118ff9
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;	// IMP=0x001000000011842b
- (void)initializeInitializationStateMachine;	// IMP=0x00100000001182c2
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001231a0
- (oneway void)resetLoginCancelCount;	// IMP=0x00100000001230d0
- (oneway void)loadRemoteImageDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000123017
- (oneway void)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000122f05
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122e3a
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000122b56
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000121cfc
- (oneway void)getGamedFiredUpWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000121b4a
- (oneway void)getAuthenticatedPlayerCredential:(CDUnknownBlockType)arg1;	// IMP=0x001000000012167a
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000012121e
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000120eef
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000120b4f
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001206fc
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001202a7
- (oneway void)setTestGame:(id)arg1 protocolVersion:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000012020e
- (oneway void)messagesDidReceiveGameCenterURL:(id)arg1 senderHandle:(id)arg2 contactID:(id)arg3;	// IMP=0x001000000011f757
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f740
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3 credential:(id)arg4;	// IMP=0x001000000011f49d
- (void)didEnterForeground;	// IMP=0x00100000001240a3
- (void)updateAppInitState;	// IMP=0x0010000000123fb6
- (id)verifyAuthorized;	// IMP=0x00100000001236ef
- (id)appInitState;	// IMP=0x00100000001236d6
- (_Bool)setAppInitState:(id)arg1;	// IMP=0x00100000001236bd
- (void)stateDidChange;	// IMP=0x0010000000123642
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00100000001235c0
- (void)sendAuthenticationDidChangeNotificationWithAuthenticatingBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000123356
- (void)bgInitializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001280f8
- (void)initializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000127a5f
- (void)removeAppSessionForPlayer:(id)arg1;	// IMP=0x0010000000127a46
- (id)appSessionForPlayer:(id)arg1;	// IMP=0x00100000001279bf
- (void)addAppSession:(id)arg1 forCredential:(id)arg2;	// IMP=0x00100000001278a7
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000127206
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000126be9
- (id)appTerminateRequestWithBackgroundFlag:(_Bool)arg1;	// IMP=0x0010000000126aa9
- (oneway void)authenticatedPlayersDidChange:(id)arg1 authenticatingBundleID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000012650b
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x001000000012645f
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000125e9a
- (oneway void)getPreferenceForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000125e2a
- (oneway void)setPreferencesValues:(id)arg1;	// IMP=0x0010000000125cc9
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x001000000012596b
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;	// IMP=0x0010000000125913
- (oneway void)didReceiveData:(id)arg1 reliably:(_Bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;	// IMP=0x0010000000125871
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;	// IMP=0x0010000000125801
- (oneway void)didConnectToParticipantWithID:(id)arg1;	// IMP=0x0010000000125791
- (oneway void)relayPushNotification:(id)arg1;	// IMP=0x0010000000125659
- (oneway void)nearbyDataReceivedForPlayerID:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x00100000001255b5
- (oneway void)nearbyPlayerLostForPlayerID:(id)arg1 deviceID:(id)arg2;	// IMP=0x0010000000125523
- (oneway void)nearbyPlayerFoundForPlayerID:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x001000000012547f
- (oneway void)cancelGameInvite:(id)arg1;	// IMP=0x0010000000125347
- (oneway void)cancelInviteWithNotification:(id)arg1;	// IMP=0x001000000012520f
- (oneway void)updateInviteWithNotification:(id)arg1;	// IMP=0x00100000001250ce
- (oneway void)declineInviteWithNotification:(id)arg1;	// IMP=0x0010000000124f96
- (oneway void)acceptInviteWithNotification:(id)arg1;	// IMP=0x0010000000124e5e
- (oneway void)acceptMultiplayerGameInvite;	// IMP=0x0010000000124d8f
- (oneway void)fetchTurnBasedData;	// IMP=0x0010000000124d2b
- (oneway void)achievementSelected:(id)arg1;	// IMP=0x0010000000124cbb
- (oneway void)scoreSelected:(id)arg1;	// IMP=0x0010000000124c4b
- (oneway void)challengeCompleted:(id)arg1;	// IMP=0x0010000000124bdb
- (oneway void)challengeReceived:(id)arg1;	// IMP=0x0010000000124b6b
- (oneway void)completedChallengeSelected:(id)arg1;	// IMP=0x0010000000124afb
- (oneway void)receivedChallengeSelected:(id)arg1;	// IMP=0x0010000000124a8b
- (oneway void)friendRequestSelected:(id)arg1;	// IMP=0x00100000001249db
- (oneway void)respondedToNearbyInvite:(id)arg1;	// IMP=0x001000000012496b
- (oneway void)resetNetworkActivity;	// IMP=0x0010000000124927
- (oneway void)endNetworkActivity;	// IMP=0x00100000001248e3
- (oneway void)beginNetworkActivity;	// IMP=0x001000000012489f
- (oneway void)requestSandboxExtension:(CDUnknownBlockType)arg1;	// IMP=0x00100000001247d1
- (oneway void)presentBannerWithNotification:(id)arg1;	// IMP=0x0010000000124761
- (oneway void)metricsValuesChanged;	// IMP=0x001000000012471d
- (id)connectionProxyForUseCase:(id)arg1;	// IMP=0x00100000001245d6
- (void)performDelayedRequestsForCredential:(id)arg1;	// IMP=0x0010000000129ab3
- (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x00100000001299e4
- (id)removeGameWriterWithCredential:(id)arg1;	// IMP=0x001000000012956f
- (id)deletePlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x00100000001294dd
- (id)setPlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x001000000012944b
- (id)setPlayerStatusWriterWithCredential:(id)arg1;	// IMP=0x00100000001293b9
- (id)_delayedRequestWriterWithCacheWriterClass:(Class)arg1 cacheReaderClass:(Class)arg2 networkWriterClass:(Class)arg3 bagKey:(id)arg4 batchSubmissionInterval:(long long)arg5 credential:(id)arg6;	// IMP=0x0010000000129008
- (void)_removeDelayedRequestStore;	// IMP=0x0010000000128b86
- (void)_setupDelayedRequestsWriters;	// IMP=0x0010000000128959
- (id)requestsCacheForEnvironment:(long long)arg1;	// IMP=0x0010000000128735
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x00100000001286c7
- (id)transactionGroupIfCacheExistsForPlayerID:(id)arg1;	// IMP=0x001000000012b5b3
- (id)transactionGroupWithName:(id)arg1 forPlayerID:(id)arg2;	// IMP=0x001000000012b4d3
- (id)_managedObjectContextForPlayerID:(id)arg1;	// IMP=0x001000000012b2b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

