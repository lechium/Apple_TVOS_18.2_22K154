//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, APSNoOpPowerAssertion, APSOutgoingMessageQueue, APSOutgoingQueue, APSProxyClient, APSPushHistory, APSTTLCollection, APSTokenStore, APSTopicHasher, APSTopicManager, APSWakeMetricTracker, CUTPowerAssertion, CUTWeakReference, MISSING_TYPE, NSArray, NSCountedSet, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, PCPersistentTimer;
@protocol APSClientIdentityProvider, APSDebugOverrides, APSFilterVersionStateMachine, APSProtocolConnection, APSProtocolConnectionEstablisher, APSSystemTokenStorage, APSUser, APSUserAppIDManager, APSUserCourierDelegate;

@interface APSUserCourier : NSObject
{
    id <APSUserCourierDelegate> _delegate;	// 8 = 0x8
    APSEnvironment *_environment;	// 16 = 0x10
    CUTPowerAssertion *_delayedKeepAlivePowerAssertion;	// 24 = 0x18
    NSMutableDictionary *_connectionPortNamesToConnections;	// 32 = 0x20
    APSTopicManager *_topicManager;	// 40 = 0x28
    PCPersistentTimer *_pendingMessageReconnectTimer;	// 48 = 0x30
    PCPersistentTimer *_delayedReconnectTimer;	// 56 = 0x38
    PCPersistentTimer *_delayedSuspendKeepAliveTimer;	// 64 = 0x40
    NSNumber *_serverExpectedKeepAliveInterval;	// 72 = 0x48
    NSData *_lastReceivedPayloadHash;	// 80 = 0x50
    NSString *_lastReceivedTopic;	// 88 = 0x58
    double _lastReceivedTopicTime;	// 96 = 0x60
    NSNumber *_lastReceivedTimestamp;	// 104 = 0x68
    NSDate *_startedOpeningStream;	// 112 = 0x70
    NSDate *_keepAliveSent;	// 120 = 0x78
    NSDate *_timeSinceLastKeepAlive;	// 128 = 0x80
    double _lastKeepAliveFailureTime;	// 136 = 0x88
    APSWakeMetricTracker *_wakeMetricTracker;	// 144 = 0x90
    NSCountedSet *_inhibitedTopics;	// 152 = 0x98
    NSTimer *_resetInterfacePreferenceTimer;	// 160 = 0xa0
    unsigned long long _forceKeepAliveProxyInterfaceFailureCount;	// 168 = 0xa8
    unsigned long long _obtainKeepAliveProxyFailureCount;	// 176 = 0xb0
    unsigned long long _findKeepAliveProxyInterfaceFailureCount;	// 184 = 0xb8
    _Bool _firstPushSinceWake;	// 192 = 0xc0
    _Bool _preparingForSleep;	// 193 = 0xc1
    _Bool _lastHasConnectionsWithListeningTopics;	// 194 = 0xc2
    _Bool _disconnectingStream;	// 195 = 0xc3
    long long _usersPotentiallyWithMessages;	// 200 = 0xc8
    double _lastUserConnectTime;	// 208 = 0xd0
    long long _successfulConnectionCount;	// 216 = 0xd8
    APSNoOpPowerAssertion *_waitForStoredMessagesToArrivePowerAssertion;	// 224 = 0xe0
    NSString *_lastReceivedTopicToCauseWake;	// 232 = 0xe8
    double _lastReceivedTopicToCauseWakeTime;	// 240 = 0xf0
    NSCountedSet *_topicsToCauseWake;	// 248 = 0xf8
    NSCountedSet *_offendingTopics;	// 256 = 0x100
    double _startedDarkWake;	// 264 = 0x108
    NSString *_redirectHost;	// 272 = 0x110
    NSMutableDictionary *_proxyClients;	// 280 = 0x118
    APSProxyClient *_proxyClientWithOutstandingPresence;	// 288 = 0x120
    APSPushHistory *_pushHistory;	// 296 = 0x128
    APSTokenStore *_tokenStore;	// 304 = 0x130
    APSTopicHasher *_topicHasher;	// 312 = 0x138
    NSData *_cachedPublicToken;	// 320 = 0x140
    _Bool _shouldUseInternet;	// 328 = 0x148
    _Bool _shouldRun;	// 329 = 0x149
    _Bool _enabled;	// 330 = 0x14a
    _Bool _enableCriticalReliability;	// 331 = 0x14b
    _Bool _trackActivityPresence;	// 332 = 0x14c
    unsigned long long _activityPresenceSalt;	// 336 = 0x150
    NSDate *_lastActivityPresenceSaltRoll;	// 344 = 0x158
    _Bool _isConnectedToService;	// 352 = 0x160
    NSDate *_lastConnectionAttempt;	// 360 = 0x168
    double _lastClientRequestedKeepaliveTime;	// 368 = 0x170
    double _lastLateCriticalOutgoingMessageAcknowledgmentReconnectTime;	// 376 = 0x178
    NSString *_latestGeoRegion;	// 384 = 0x180
    NSDate *_lastPresence;	// 392 = 0x188
    NSData *_certificate;	// 400 = 0x190
    NSData *_nonce;	// 408 = 0x198
    NSData *_signature;	// 416 = 0x1a0
    APSOutgoingMessageQueue *_outgoingMessageQueue;	// 424 = 0x1a8
    APSOutgoingQueue *_tokenRequestQueue;	// 432 = 0x1b0
    double _slowReceiveThreshold;	// 440 = 0x1b8
    NSMutableSet *_activeTaskServers;	// 448 = 0x1c0
    unsigned long long _nextTaskMessageId;	// 456 = 0x1c8
    CUTWeakReference *_weakSelf;	// 464 = 0x1d0
    APSTTLCollection *_tracingEnabledAcksCollection;	// 472 = 0x1d8
    double _delayedSuspendKeepAliveInterval;	// 480 = 0x1e0
    _Bool _pendingPostSuspensionWWANFlush;	// 488 = 0x1e8
    _Bool _hasFilterChanged;	// 489 = 0x1e9
    _Bool _locallyDisabledFilterOptimization;	// 490 = 0x1ea
    _Bool _serverDisabledFilterOptimization;	// 491 = 0x1eb
    unsigned int _disconnectReason;	// 492 = 0x1ec
    NSArray *_certificates;	// 496 = 0x1f0
    NSMutableArray *_connectionServers;	// 504 = 0x1f8
    NSString *_ifname;	// 512 = 0x200
    NSNumber *_currentMessageID;	// 520 = 0x208
    NSMutableArray *_subscriptionRequests;	// 528 = 0x210
    id <APSClientIdentityProvider> _clientIdentityProvider;	// 536 = 0x218
    id <APSSystemTokenStorage> _systemTokenStorage;	// 544 = 0x220
    id <APSFilterVersionStateMachine> _filterVersionStateMachine;	// 552 = 0x228
    id <APSDebugOverrides> _debugOverrides;	// 560 = 0x230
    NSMutableDictionary *_protocolConnectionByIdentifier;	// 568 = 0x238
    id <APSUser> _courierUser;	// 576 = 0x240
    id <APSUserAppIDManager> _userAppIDManager;	// 584 = 0x248
    NSMutableDictionary *_stateByConnectionIdentifier;	// 592 = 0x250
    MISSING_TYPE *_protocolConnectionEstablisher;	// 600 = 0x258
}

- (void).cxx_destruct;	// IMP=0x002000000003e785
@property(retain, nonatomic) id <APSProtocolConnectionEstablisher> protocolConnectionEstablisher; // @synthesize protocolConnectionEstablisher=_protocolConnectionEstablisher;
@property(retain, nonatomic) NSMutableDictionary *stateByConnectionIdentifier; // @synthesize stateByConnectionIdentifier=_stateByConnectionIdentifier;
@property(retain, nonatomic) id <APSUserAppIDManager> userAppIDManager; // @synthesize userAppIDManager=_userAppIDManager;
@property(retain, nonatomic) id <APSUser> courierUser; // @synthesize courierUser=_courierUser;
@property(retain, nonatomic) NSMutableDictionary *protocolConnectionByIdentifier; // @synthesize protocolConnectionByIdentifier=_protocolConnectionByIdentifier;
@property(retain, nonatomic) id <APSDebugOverrides> debugOverrides; // @synthesize debugOverrides=_debugOverrides;
@property(retain, nonatomic) id <APSFilterVersionStateMachine> filterVersionStateMachine; // @synthesize filterVersionStateMachine=_filterVersionStateMachine;
@property(retain, nonatomic) id <APSSystemTokenStorage> systemTokenStorage; // @synthesize systemTokenStorage=_systemTokenStorage;
@property(retain, nonatomic) id <APSClientIdentityProvider> clientIdentityProvider; // @synthesize clientIdentityProvider=_clientIdentityProvider;
@property(nonatomic) _Bool serverDisabledFilterOptimization; // @synthesize serverDisabledFilterOptimization=_serverDisabledFilterOptimization;
@property(nonatomic) _Bool locallyDisabledFilterOptimization; // @synthesize locallyDisabledFilterOptimization=_locallyDisabledFilterOptimization;
@property(nonatomic) _Bool hasFilterChanged; // @synthesize hasFilterChanged=_hasFilterChanged;
@property(nonatomic) unsigned int disconnectReason; // @synthesize disconnectReason=_disconnectReason;
@property(retain, nonatomic) NSMutableArray *subscriptionRequests; // @synthesize subscriptionRequests=_subscriptionRequests;
@property(retain, nonatomic) NSNumber *currentMessageID; // @synthesize currentMessageID=_currentMessageID;
@property(readonly, copy, nonatomic) NSString *latestGeoRegion; // @synthesize latestGeoRegion=_latestGeoRegion;
@property(readonly, copy, nonatomic) NSString *ifname; // @synthesize ifname=_ifname;
@property(retain, nonatomic) NSMutableArray *connectionServers; // @synthesize connectionServers=_connectionServers;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSDate *lastPresence; // @synthesize lastPresence=_lastPresence;
@property(copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(readonly, retain, nonatomic) APSEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) _Bool isConnectedToService; // @synthesize isConnectedToService=_isConnectedToService;
@property(nonatomic) __weak id <APSUserCourierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reportAPSConnectivity;	// IMP=0x001000000003e4bb
- (void)_sendQueuedOutgoingMessages;	// IMP=0x001000000003e123
- (void)_sendOutgoingMessage:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x001000000003d89b
- (void)_sendActiveStateMessageWithSendAllBlueListMessages:(_Bool)arg1;	// IMP=0x001000000003d767
- (void)_finishDisconnectForInterface:(id)arg1;	// IMP=0x001000000003d449
- (void)_disconnectTokenWithReason:(unsigned int)arg1 onProtocolConnection:(id)arg2;	// IMP=0x001000000003d0a5
- (void)_sendFilterMessageOnProtocolConnection:(id)arg1 withChange:(id)arg2;	// IMP=0x001000000003c385
- (void)_sendFilterMessageOnProtocolConnection:(id)arg1 withReason:(unsigned long long)arg2;	// IMP=0x001000000003c307
- (id)_ultraConstrainedTopicsFromTopicDictionary:(id)arg1;	// IMP=0x001000000003c089
- (id)_topicsByHashFromTopicStateDictionary:(id)arg1;	// IMP=0x001000000003be6a
- (void)_requestToSendFilterOnTopicManager:(id)arg1 change:(id)arg2;	// IMP=0x001000000003bd0b
- (void)_sendPresenceMessageOnProtocolConnection:(id)arg1 serverTime:(id)arg2;	// IMP=0x001000000003b571
- (void)_didFinishAssertingAllPresences:(id)arg1;	// IMP=0x001000000003b209
- (void)handleDisconnectForInterface:(id)arg1 connectionState:(long long)arg2 withReason:(unsigned int)arg3;	// IMP=0x001000000003a7d4
- (void)_handleOutgoingMessageAcknowledgment:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x001000000003a56d
- (id)_copyParsedPayload:(id)arg1;	// IMP=0x001000000003a266
- (void)_handleMessageMessage:(id)arg1 onProtocolConnection:(id)arg2 withGeneration:(unsigned long long)arg3 isWakingMessage:(_Bool)arg4 fromAgent:(_Bool)arg5;	// IMP=0x0010000000037fd6
- (_Bool)_wakeCausedByTopic:(id)arg1 interface:(id)arg2 priorityVal:(unsigned long long)arg3 inAllowlist:(_Bool)arg4;	// IMP=0x0010000000037f00
- (void)_notifyForIncomingMessage:(id)arg1 forConnection:(id)arg2;	// IMP=0x00100000000378ae
- (void)_notifyForIncomingMessage:(id)arg1;	// IMP=0x001000000003789a
- (void)_forceReconnectionsWithReason:(unsigned int)arg1;	// IMP=0x0010000000037763
- (void)_triggerAutoBugCaptureForInvalidPresence:(id)arg1;	// IMP=0x001000000003770e
- (void)_handleConnectedMessage:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x0010000000035e27
- (void)receivedConnectedResponseWithParameters:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x0010000000035aca
- (void)_handlePresenceOffline:(id)arg1;	// IMP=0x0010000000035940
- (void)connectionDidOpenonProtocolConnection:(id)arg1 secureHandshakeEnabled:(_Bool)arg2;	// IMP=0x001000000003592c
- (void)updateForReceivedConfig:(id)arg1;	// IMP=0x00100000000355dd
- (_Bool)expectsResponseForFilterMessageOnProtocolConnection:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000035348
- (_Bool)expectsResponseForFilterMessageOnProtocolConnection:(id)arg1;	// IMP=0x00100000000350ee
- (_Bool)hasOutOfDateFilterOnProtocolConnection:(id)arg1;	// IMP=0x001000000003503d
- (_Bool)shouldOnlySendFilterOnPreferredInterface;	// IMP=0x0010000000034e00
- (void)receivedFilterResponseWithParameters:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x00100000000344e7
- (void)protocolConnection:(id)arg1 receivedFilterUpdateWithParameters:(id)arg2;	// IMP=0x0010000000033e58
- (void)protocolConnection:(id)arg1 receivedPresenceTrackingRequestWithParameters:(id)arg2;	// IMP=0x0010000000033e3d
- (void)protocolConnection:(id)arg1 receivedTaskNotificationWithParameters:(id)arg2;	// IMP=0x0010000000033bc1
- (void)protocolConnection:(id)arg1 receivedTaskControlWithParameters:(id)arg2;	// IMP=0x0010000000033987
- (void)protocolConnection:(id)arg1 receivedNoStorageWithParameters:(id)arg2;	// IMP=0x0010000000033972
- (void)protocolConnection:(id)arg1 receivedPubSubChannelListWithParameters:(id)arg2;	// IMP=0x0010000000033958
- (void)protocolConnection:(id)arg1 receivedPubSubChannelUpdateWithParameters:(id)arg2;	// IMP=0x001000000003393d
- (void)protocolConnection:(id)arg1 receivedMessageWithParameters:(id)arg2 generation:(unsigned long long)arg3 isWaking:(_Bool)arg4;	// IMP=0x0010000000033912
- (void)protocolConnection:(id)arg1 receivedOfflinePresencekWithParameters:(id)arg2;	// IMP=0x00100000000338fd
- (_Bool)shouldHandleIncomingPush:(id)arg1 forProtocolConnection:(id)arg2;	// IMP=0x0010000000033421
- (void)outgoingDataAboutToSendForProtocolConnection:(id)arg1;	// IMP=0x0010000000032e78
- (void)efficientToUseChangedForProtocolConnection:(id)arg1;	// IMP=0x0010000000032e66
- (void)protocolConnection:(id)arg1 encounteredError:(id)arg2;	// IMP=0x0010000000032e60
- (void)failedToConnectOnProtocolConnection:(id)arg1;	// IMP=0x0010000000032e4e
- (void)didSuspendProtocolConnection:(id)arg1;	// IMP=0x0010000000032d72
- (void)didRecoverFromSuspensionOnProtocolConnection:(id)arg1;	// IMP=0x0010000000032d0e
- (void)protocolConnection:(id)arg1 didDisconnectWithConnectionState:(long long)arg2 reason:(unsigned int)arg3;	// IMP=0x0010000000032cfc
- (id)stateForProtocolConnection:(id)arg1;	// IMP=0x0010000000032c5b
- (void)beginTrackingProtocolConnection:(id)arg1;	// IMP=0x0010000000032993
- (void)enumerateConnectedProtocolConnectionsOfType:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000327bd
- (void)enumerateConnectedProtocolConnections:(CDUnknownBlockType)arg1;	// IMP=0x0010000000032614
- (void)enumerateAllProtocolConnections:(CDUnknownBlockType)arg1;	// IMP=0x00100000000324a0
- (id)connectedInterfaceForIdentifier:(id)arg1;	// IMP=0x0010000000032426
- (_Bool)hasConnectedInterfaceForIdentifier:(id)arg1;	// IMP=0x00100000000323a3
- (_Bool)hasConnectedInterfaceOfType:(long long)arg1;	// IMP=0x00100000000321f2
- (_Bool)hasProtocolConnectionInterfaceOfType:(long long)arg1;	// IMP=0x0010000000032082
@property(readonly, nonatomic) _Bool hasConnectedInterface;
- (long long)countOfConnectedInterface;	// IMP=0x0010000000031daf
@property(readonly, nonatomic) id <APSProtocolConnection> preferredProtocolConnection;
- (void)_tryConnectingOrDisconnectingTokens;	// IMP=0x0010000000031b42
- (void)_useInteractivePowerAssertionIfNeededForConnectionServer:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000031a0c
- (void)_clearTopicsForGuestUser;	// IMP=0x00100000000317d3
- (void)flush;	// IMP=0x00100000000313dc
- (void)logout;	// IMP=0x0010000000030e58
- (unsigned long long)getNextTaskMessageId;	// IMP=0x0010000000030e40
- (void)removeTaskServer:(id)arg1;	// IMP=0x0010000000030e27
- (void)addTaskServer:(id)arg1;	// IMP=0x0010000000030e0e
- (void)sendTaskControlMessageWithMetadata:(id)arg1 messageId:(unsigned long long)arg2;	// IMP=0x0010000000030d97
- (void)prepareForFullWake;	// IMP=0x0010000000030cba
- (void)prepareForDarkWake;	// IMP=0x0010000000030bdc
- (void)prepareForSleep;	// IMP=0x0010000000030aff
- (void)_handleNoStorageMessage:(id)arg1;	// IMP=0x0010000000030af9
- (void)clientIdentityDidBecomeUnavailable;	// IMP=0x00100000000309eb
- (void)clientIdentityDidBecomeAvailable;	// IMP=0x00100000000308be
- (_Bool)shouldForceShortTimeouts;	// IMP=0x0010000000030875
- (void)outgoingMessageQueue:(id)arg1 requestToSendLowPriorityMessages:(id)arg2;	// IMP=0x001000000003060e
- (void)outgoingMessageQueue:(id)arg1 requestCriticalMessageFlushWithPaddingLength:(unsigned long long)arg2;	// IMP=0x00100000000304ef
- (void)outgoingMessageQueueShortMessageTimeoutExceeded:(id)arg1;	// IMP=0x0010000000030409
- (void)outgoingMessageQueue:(id)arg1 lateAcknowledgmentForCriticalOutgoingMessage:(id)arg2;	// IMP=0x001000000003018e
- (id)getConnectionTypeFromProtocolConnection:(id)arg1;	// IMP=0x0010000000030128
- (void)topicManagerRequestToSendFilter:(id)arg1 change:(id)arg2;	// IMP=0x001000000002ffd6
- (void)rollTokensForAllBAAEnvironments;	// IMP=0x001000000002fef8
- (void)rollTokenAndReconnect;	// IMP=0x001000000002fe2e
- (_Bool)_processPotentialIdentityChanged;	// IMP=0x001000000002fd0b
- (void)_processShouldUseInternetChangeIfNecessary;	// IMP=0x001000000002f82c
- (void)_processShouldRunChangeIfNecessary;	// IMP=0x001000000002f705
- (void)_processStoredOutgoingMessages;	// IMP=0x001000000002f6ff
- (void)_processStoredIncomingMessages;	// IMP=0x001000000002f399
- (void)_handleLostPushTokens;	// IMP=0x001000000002f291
- (void)_recreateCacheDictionaries;	// IMP=0x001000000002f0d4
- (void)processIsPowerEfficientToSendChange;	// IMP=0x001000000002eee2
@property(readonly, nonatomic) _Bool isConnectedOnUltraConstrainedInterface;
- (void)_processInvalidIdentity;	// IMP=0x001000000002ed0d
- (void)systemDidUnlock;	// IMP=0x001000000002ebdd
- (void)systemDidLock;	// IMP=0x001000000002eab3
- (void)_deleteClientIdentityRequestingReplacement;	// IMP=0x001000000002e9cf
- (_Bool)_isIdentityAvailable;	// IMP=0x001000000002e9c7
- (void)getClientIdentityForcingRefresh:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e8d0
- (void)generateCertWithServerTime:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e5d1
- (void)_clearCachedSigNonceCert;	// IMP=0x001000000002e4f1
- (void)refreshCertNonceAndSignatureWithServerTime:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e098
- (void);	// IMP=0x001000000002ddbb
- (void)client:(id)arg1 messageTracingWithStatus:(int)arg2 topic:(id)arg3 tracingUUID:(id)arg4 token:(id)arg5;	// IMP=0x001000000002db5e
- (void)client:(id)arg1 requestTokenGenerateWithTopicHash:(id)arg2 baseToken:(id)arg3 appId:(id)arg4 expirationTTL:(id)arg5 vapidPublicKeyHash:(id)arg6 type:(id)arg7;	// IMP=0x001000000002d4a5
- (void)client:(id)arg1 requestSendOutgoingMessage:(id)arg2;	// IMP=0x001000000002cf21
- (void)client:(id)arg1 requestPushAckResponse:(id)arg2 messageId:(id)arg3 token:(id)arg4 connectionType:(id)arg5 generation:(id)arg6;	// IMP=0x001000000002cad9
- (void)clientBecameInactive:(id)arg1;	// IMP=0x001000000002c9f2
- (void)requestFilterForClient:(id)arg1;	// IMP=0x001000000002c59f
- (void)pushTokenBecameInvalidForClient:(id)arg1;	// IMP=0x001000000002c4c4
- (void)_sendClientFilter:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x001000000002bc85
- (_Bool)_processPendingProxyPresences;	// IMP=0x001000000002aade
- (void)_clearPendingProxyPresence;	// IMP=0x001000000002a7e7
- (void)incomingPresenceWithGuid:(id)arg1 token:(id)arg2 hwVersion:(id)arg3 swVersion:(id)arg4 swBuild:(id)arg5 certificate:(id)arg6 nonce:(id)arg7 signature:(id)arg8;	// IMP=0x001000000002a3b6
- (void)canUseProxyChanged;	// IMP=0x001000000002a309
- (unsigned long long)_countConnectedClients;	// IMP=0x001000000002a163
- (unsigned long long)_countActiveClients;	// IMP=0x0010000000029fbd
- (id)_findClientWithToken:(id)arg1;	// IMP=0x0010000000029d6d
- (id)_findConnectedClientWithToken:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x0010000000029a80
- (id)_findActiveClientWithToken:(id)arg1;	// IMP=0x0010000000029800
- (void)periodicSignalFired;	// IMP=0x0010000000029288
- (void)invalidateDeviceIdentity;	// IMP=0x00100000000291db
- (void)ttlCollection:(id)arg1 itemsDidExpire:(id)arg2 withStates:(id)arg3;	// IMP=0x00100000000290a7
- (void)connectionDidClientDisconnect:(id)arg1;	// IMP=0x0010000000028fa1
- (void)connection:(id)arg1 setKeepAliveConfiguration:(unsigned long long)arg2;	// IMP=0x0010000000028f55
- (void)connection:(id)arg1 didReceiveIncomingMessageReceiptWithTopic:(id)arg2 tracingUUID:(id)arg3;	// IMP=0x0010000000028d17
- (void)connection:(id)arg1 handleAckIncomingMessageWithGuid:(id)arg2 topic:(id)arg3 tracingUUID:(id)arg4;	// IMP=0x0010000000028a55
- (void)connection:(id)arg1 didReceiveFakeMessageToSend:(id)arg2;	// IMP=0x00100000000282cc
- (void)connection:(id)arg1 didReceiveCancellationForOutgoingMessageWithID:(unsigned long long)arg2;	// IMP=0x0010000000028206
- (void)connection:(id)arg1 didReceiveUnsubscribeToChannels:(id)arg2 forTopic:(id)arg3;	// IMP=0x0010000000028178
- (void)connection:(id)arg1 didReceiveSubscribeToChannels:(id)arg2 forTopic:(id)arg3;	// IMP=0x00100000000280ea
- (void)connection:(id)arg1 didReceiveOutgoingMessageToSend:(id)arg2;	// IMP=0x0010000000027bbe
- (void)connection:(id)arg1 subscribeToPreviouslyIgnoredTopics:(id)arg2;	// IMP=0x0010000000027ba9
- (void)_enqueueMessage:(id)arg1 forOriginator:(id)arg2;	// IMP=0x0010000000027857
- (void)connectionChangedTrackActivityPresence:(id)arg1;	// IMP=0x0010000000027781
- (void)connectionChangedCriticalReliability:(id)arg1;	// IMP=0x001000000002766f
- (_Bool)connectionDelegateHasConnectedUser:(id)arg1;	// IMP=0x0010000000027649
- (_Bool)connectionDelegateIsConnectedToService:(id)arg1;	// IMP=0x001000000002763d
- (void)__performIdleCheck;	// IMP=0x001000000002750b
- (void)_performIdleCheck;	// IMP=0x0010000000027496
- (void)connectionWasOpened:(id)arg1;	// IMP=0x001000000002738e
- (void)connectionWasClosed:(id)arg1;	// IMP=0x0010000000027118
- (void)__processStoredIncomingMessagesForConnection:(id)arg1;	// IMP=0x0010000000026ec4
- (void)_processStoredIncomingMessagesForConnection:(id)arg1;	// IMP=0x0010000000026e32
- (void)connectionTopicsChanged:(id)arg1;	// IMP=0x0010000000026da3
- (void)removeConnectionForConnectionPortName:(id)arg1;	// IMP=0x0010000000026d3e
- (id)connectionForConnectionPortName:(id)arg1;	// IMP=0x0010000000026d28
- (void)addConnection:(id)arg1;	// IMP=0x0010000000026b98
- (void)_logTopics;	// IMP=0x001000000002620a
- (void)__dumpLogsForInconsistencyIfNecessary;	// IMP=0x0010000000026204
- (void)_dumpLogsForInconsistencyIfNecessary;	// IMP=0x0010000000026195
- (void)_triggerAutoBugCaptureIfMessageIsRetried:(id)arg1;	// IMP=0x00100000000260c5
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x0010000000024feb
- (id)JSONDebugState;	// IMP=0x00100000000247c0
- (id)aps_prettyDescription;	// IMP=0x0010000000024278
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (id)verboseDescription;	// IMP=0x0010000000023c6c
- (void)logStateWithReason:(id)arg1;	// IMP=0x0010000000023b64
- (_Bool)willBeAbleToConnect;	// IMP=0x0010000000023b1a
- (_Bool)_requestKeepAliveProxy;	// IMP=0x0010000000023b12
- (_Bool)_isInteractivePushDuringSleepEnabledForConnectionServer:(id)arg1;	// IMP=0x0010000000023b0a
@property(readonly, retain, nonatomic) NSData *publicToken; // @dynamic publicToken;
- (_Bool)_hasListeningTopics;	// IMP=0x0010000000023965
- (_Bool)hasReasonToConnect;	// IMP=0x001000000002392c
- (_Bool)isConnectableRightNow;	// IMP=0x00100000000238f3
- (_Bool)isKeepAliveProxyConfigured;	// IMP=0x001000000002388a
- (_Bool)isInteractivePushDuringSleepEnabled;	// IMP=0x0010000000023708
- (_Bool)isIdle;	// IMP=0x0010000000023700
- (_Bool)wantsCriticalReliability;	// IMP=0x00100000000235c2
- (_Bool)hasEagerMessages;	// IMP=0x00100000000235a9
- (_Bool)_useShortKeepAliveInterval;	// IMP=0x00100000000235a1
- (_Bool)isCellularWatch;	// IMP=0x0010000000023599
@property(readonly, nonatomic) _Bool shouldUseInternet;
- (_Bool)shouldRun;	// IMP=0x00100000000234ff
- (void)setLargeMessageSize:(unsigned long long)arg1;	// IMP=0x001000000002311c
- (unsigned long long)largeMessageSize;	// IMP=0x00100000000230d8
- (void)setMessageSize:(unsigned long long)arg1;	// IMP=0x0010000000022e2f
@property(readonly, nonatomic) unsigned long long messageSize; // @dynamic messageSize;
- (void)setPublicToken:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x00100000000229b1
- (void)_adjustIsConnectedToService;	// IMP=0x0010000000022709
- (unsigned long long)overallCourierStatus;	// IMP=0x00100000000225eb
@property(readonly, nonatomic) _Bool hasIdentity;
- (id)_getCurrentTokens;	// IMP=0x0010000000022578
- (id)copyOperatorName;	// IMP=0x0010000000022521
- (id)topicManager;	// IMP=0x0010000000022513
- (id)_proxyManager;	// IMP=0x00100000000224d0
- (void)dealloc;	// IMP=0x0010000000022193
- (id)initWithEnvironment:(id)arg1 courierUser:(id)arg2 userPreferences:(id)arg3 clientIdentityProvider:(id)arg4 userAppIDManager:(id)arg5 systemTokenStorage:(id)arg6 filterVersionStateMachine:(id)arg7 debugOverrides:(id)arg8 delegate:(id)arg9 withConnectionEstablisher:(id)arg10 tokenStore:(id)arg11 tokenRequestQueue:(id)arg12;	// IMP=0x0010000000021608
- (id)initWithEnvironment:(id)arg1 courierUser:(id)arg2 userPreferences:(id)arg3 clientIdentityProvider:(id)arg4 userAppIDManager:(id)arg5 systemTokenStorage:(id)arg6 delegate:(id)arg7 withConnectionEstablisher:(id)arg8;	// IMP=0x001000000002134f
- (void)_handlePresenceTrackingResponse:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x001000000003f7ab
- (void)_generateSalt;	// IMP=0x001000000003f6db
- (void)attemptToRollSalt;	// IMP=0x001000000003f2a7
- (_Bool)protocolConnectionHasSentActivityTrackingSalt:(id)arg1;	// IMP=0x001000000003f1e1
- (void)markProtocolConnectionDisconnectedForActivityTracking:(id)arg1;	// IMP=0x001000000003f0e8
- (void)sendPresenceTrackingRequestOnProtocolConnection:(id)arg1;	// IMP=0x001000000003eeaa
- (void)recalculateTrackActivityPresence;	// IMP=0x001000000003ea6d
- (void)_handleAppTokenGenerateResponse:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x0010000000042f96
- (id)urlPrefix;	// IMP=0x0010000000042e61
- (id)connection:(id)arg1 createURLTokenForToken:(id)arg2;	// IMP=0x0010000000042d9f
- (void)connection:(id)arg1 didInvalidateTokenForInfo:(id)arg2;	// IMP=0x0010000000042997
- (void)connection:(id)arg1 didRequestCurrentTokenForInfo:(id)arg2;	// IMP=0x001000000004267a
- (void)connection:(id)arg1 didRequestTokenForInfo:(id)arg2;	// IMP=0x0010000000040fef
- (void)saveToken:(id)arg1 forInfo:(id)arg2 connection:(id)arg3;	// IMP=0x0010000000040e80
- (void)performAppTokenCleanup;	// IMP=0x0010000000040698
- (void)_registerAppTokenCleanup;	// IMP=0x0010000000040300
- (void)_cancelRequest:(id)arg1;	// IMP=0x00100000000bec22
- (void)_handlePubSubChannelListRequestonProtocolConnection:(id)arg1;	// IMP=0x00100000000bebb7
- (void)_requestClientPubSubChannelList:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x00100000000beb65
- (void)_sendProxyChannelList:(id)arg1 onConnectionType:(long long)arg2;	// IMP=0x00100000000be930
- (id)updateChannelForIncomingMessageWithData:(id)arg1 forTopic:(id)arg2;	// IMP=0x00100000000be676
- (_Bool)shouldDropPubSubMessageWithData:(id)arg1 forTopic:(id)arg2;	// IMP=0x00100000000be3d7
- (int)_protoUpdateFailureToReadableFailure:(int)arg1;	// IMP=0x00100000000be3cb
- (void)_handleChannelUpdateCommand:(id)arg1;	// IMP=0x00100000000bdacc
- (void)_handleSubscriptionUpdateCommand:(id)arg1 token:(id)arg2 protocolConnection:(id)arg3;	// IMP=0x00100000000bd6d8
- (void)_handlePubSubUpdateMessage:(id)arg1 onProtocolConnection:(id)arg2;	// IMP=0x00100000000bd439
- (id)_getNextMessageID;	// IMP=0x00100000000bd35f
- (void)subscribeToPreviouslyIgnoredTopics:(id)arg1;	// IMP=0x00100000000bd125
- (void)_resetCheckpointForIgnoredTopics:(id)arg1;	// IMP=0x00100000000bcd4c
- (void)handleIgnoredTopics:(id)arg1;	// IMP=0x00100000000bcaff
- (void)sendFailuresToClient:(id)arg1 pushTopic:(id)arg2;	// IMP=0x00100000000bc796
- (int)_protoSubscriptionFailureToReadableFailure:(int)arg1;	// IMP=0x00100000000bc78a
- (_Bool)_isResponseForProxyDevice:(id)arg1;	// IMP=0x00100000000bc51a
- (void)_handlePubSubSubscriptionResponse:(id)arg1 fromAgent:(_Bool)arg2 onProtocolConnection:(id)arg3;	// IMP=0x00100000000bb471
- (void)_removePendingRequestsForProtocolConnection:(id)arg1;	// IMP=0x00100000000bb242
- (void)_writePubSubMessagetoConnection:(id)arg1 messageID:(unsigned int)arg2 token:(id)arg3 connectionType:(long long)arg4;	// IMP=0x00100000000badbd
- (void)_sendPubsubConnectMessageOnProtocolConnection:(id)arg1 token:(id)arg2;	// IMP=0x00100000000baab0
- (id)allRegisteredChannelsForTopic:(id)arg1;	// IMP=0x00100000000ba997
- (void)_retryRequestAfterDelay:(id)arg1 withDelay:(double)arg2;	// IMP=0x00100000000ba41a
- (void)_retryRequestAfterDelay:(id)arg1;	// IMP=0x00100000000ba30e
- (void)_handlePubSubRequest:(id)arg1 unsubscriptionChannels:(id)arg2 token:(id)arg3;	// IMP=0x00100000000b9c27
- (void)unsubscribeFromChannels:(id)arg1 forTopic:(id)arg2 token:(id)arg3;	// IMP=0x00100000000b969f
- (void)subscribeToChannels:(id)arg1 forTopic:(id)arg2 token:(id)arg3;	// IMP=0x00100000000b9055

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

