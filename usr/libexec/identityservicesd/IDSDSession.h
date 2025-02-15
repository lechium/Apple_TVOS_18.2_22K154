//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, IDSBaseSocketPairConnection, IDSClientChannel, IDSConnectionContext, IDSDAccountController, IDSDGroupStatusNotificationController, IDSDSessionInvitationManager, IDSDSessionMessenger, IDSDSessionSharedState, IDSGFTMetricsCollector, IDSGroupEncryptionKeyManager, IDSGroupSessionDataCryptor, IDSGroupStatusNotificationParameters, IDSMultiplexerGroupSessionTransport, IDSQuickRelayAllocator, IDSUTunController, MISSING_TYPE, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSNumber, NSSet, NSString, NSUUID, _TtC17identityservicesd33IDSGroupEncryptionControllerGroup, _TtC17identityservicesd40IDSGroupEncryptionControllerGroupSession, _TtC17identityservicesd45IDSGroupDefaultRootMaterialExchangeController;
@protocol IDSDSessionAvailabilityCheck, IDSXPCGroupSessionKeyValueDelivery, OS_dispatch_queue, _TtP17identityservicesd35IDSDSessionKeyValueDeliveryProtocol_;

@interface IDSDSession : NSObject
{
    _Bool _assertedRealTimeMode;	// 8 = 0x8
    id <IDSDSessionAvailabilityCheck> _availabilityCheck;	// 16 = 0x10
    NSDate *_awdStartTimestamp;	// 24 = 0x18
    NSString *_awdUniqueId;	// 32 = 0x20
    IDSBaseSocketPairConnection *_baseSocketPairConnection;	// 40 = 0x28
    _Bool _bypassUTun;	// 48 = 0x30
    NSMutableArray *_cachedClientData;	// 56 = 0x38
    long long _cachedNumberOfActiveParticipants;	// 64 = 0x40
    IDSClientChannel *_clientChannel;	// 72 = 0x48
    NSUUID *_clientChannelUUID;	// 80 = 0x50
    struct os_unfair_lock_s _clientChannelLock;	// 88 = 0x58
    unsigned long long _connectionClaimed;	// 96 = 0x60
    IDSConnectionContext *_connectionContext;	// 104 = 0x68
    unsigned int _currentGenerationCounter;	// 112 = 0x70
    NSDate *_genCounterUpdatedByResponseTime;	// 120 = 0x78
    _Bool _disallowCellularInterface;	// 128 = 0x80
    _Bool _disallowWifiInterface;	// 129 = 0x81
    _Bool _disableP2PLinks;	// 130 = 0x82
    _Bool _sessionIsNonUserParticipantInitiated;	// 131 = 0x83
    NSDate *_endDate;	// 136 = 0x88
    NSMutableDictionary *_extraConnections;	// 144 = 0x90
    NSMutableDictionary *_participantIDToAVCBlob;	// 152 = 0x98
    NSMutableDictionary *_participantIDToTypeToEncryptedIDSContextBlobs;	// 160 = 0xa0
    unsigned long long _extraConnectionCount;	// 168 = 0xa8
    unsigned int _groupSessionState;	// 176 = 0xb0
    IDSGroupStatusNotificationParameters *_groupStatusNotificationParams;	// 184 = 0xb8
    int _idsDataChannelClientPID;	// 192 = 0xc0
    unsigned long long _initialLinkType;	// 200 = 0xc8
    NSString *_instanceID;	// 208 = 0xd0
    double _inviteRecvTime;	// 216 = 0xd8
    _Bool _joinGroupSessionPending;	// 224 = 0xe0
    CDUnknownBlockType _joinNotificationDeliveryTimeoutBlock;	// 232 = 0xe8
    unsigned char _keyMaterial[60];	// 240 = 0xf0
    long long _linkProtocol;	// 304 = 0x130
    double _membershipChangeEventTime;	// 312 = 0x138
    double _newKeyEventTime;	// 320 = 0x140
    double _idsContextTimeStamp;	// 328 = 0x148
    NSObject<OS_dispatch_queue> *_networkSlicingReportingQueue;	// 336 = 0x150
    unsigned char _cellularSlicingFlags;	// 344 = 0x158
    NSDictionary *_cellularNetworkInfoSessionEvent;	// 352 = 0x160
    NSNumber *_cellularNetworkInterfaceBringupTime;	// 360 = 0x168
    CoreTelephonyClient *_ctClient;	// 368 = 0x170
    double _summaryReportBaseTime;	// 376 = 0x178
    double _joinSendStartTime;	// 384 = 0x180
    double _joinSendEndTime;	// 392 = 0x188
    double _joinRecvTime;	// 400 = 0x190
    double _joinStartTime;	// 408 = 0x198
    double _clientChannelConnectTime;	// 416 = 0x1a0
    double _firstMKMReceivedTime;	// 424 = 0x1a8
    double _firstMKMSentTime;	// 432 = 0x1b0
    double _firstPacketReceivedTime;	// 440 = 0x1b8
    struct *_packetBufferArray[8];	// 448 = 0x1c0
    unsigned long long _preferredAddressFamily;	// 512 = 0x200
    _Bool _preferCellularForCallSetup;	// 520 = 0x208
    NSNumber *_qrError;	// 528 = 0x210
    NSMutableArray *_qrEventsForRTCReports;	// 536 = 0x218
    NSNumber *_qrReason;	// 544 = 0x220
    unsigned int _reason;	// 552 = 0x228
    unsigned short _relayPort;	// 556 = 0x22c
    _Bool _sessionStartedCalled;	// 558 = 0x22e
    NSMutableData *_sessionInfoMetaData;	// 560 = 0x230
    _Bool _shouldAssertRealTimeMode;	// 568 = 0x238
    _Bool _sharedSessionHasJoined;	// 569 = 0x239
    _Bool _shouldConnectToQRServer;	// 570 = 0x23a
    NSData *_skeData;	// 576 = 0x240
    int _socketDescriptor;	// 584 = 0x248
    int _sliceActiveNotificationToken;	// 588 = 0x24c
    NSDate *_startDate;	// 592 = 0x250
    _Bool _supressClientNotifications;	// 600 = 0x258
    _Bool _verboseFunctionalLogging;	// 601 = 0x259
    _Bool _verbosePerformanceLogging;	// 602 = 0x25a
    _Bool _multiplexerEnabled;	// 603 = 0x25b
    IDSMultiplexerGroupSessionTransport *_multiplexerTransport;	// 608 = 0x260
    double _channelDataCachedTime;	// 616 = 0x268
    _Bool _startedAsUPlusOneSession;	// 624 = 0x270
    _Bool _switchedToUPlusMany;	// 625 = 0x271
    MISSING_TYPE *_supportUnauthenticatedUser;	// 626 = 0x272
    _Bool _isAutoDisconnectSupportedForGFTService;	// 627 = 0x273
    unsigned int _currentSessionStateCounter;	// 628 = 0x274
    unsigned int _connectedLinkCount;	// 632 = 0x278
    _Bool _isLightweightParticipant;	// 636 = 0x27c
    _Bool _isShortMKIEnabled;	// 637 = 0x27d
    _Bool _isTLEEnabled;	// 638 = 0x27e
    _Bool _hasReportedReceivedMKM;	// 639 = 0x27f
    _Bool _forceTCPFallbackOnWiFi;	// 640 = 0x280
    _Bool _forceTCPFallbackOnCell;	// 641 = 0x281
    _Bool _forceIPv6;	// 642 = 0x282
    _Bool _handOffOverQREnabled;	// 643 = 0x283
    _Bool _reinitTestCompleted;	// 644 = 0x284
    IDSGroupEncryptionKeyManager *_dataBlobEncryptionManager;	// 648 = 0x288
    IDSGroupSessionDataCryptor *_cryptorForBlobs;	// 656 = 0x290
    NSString *_serviceIdentifier;	// 664 = 0x298
    NSNumber *_callType;	// 672 = 0x2a0
    NSMutableDictionary *_typeToKeyIDToEncryptedData;	// 680 = 0x2a8
    NSMutableDictionary *_typeToParticipantIDToDecryptedDataBlob;	// 688 = 0x2b0
    NSMutableDictionary *_keyIDToParticipantID;	// 696 = 0x2b8
    NSMutableDictionary *_linkIDToLocalRemoteEndpointPair;	// 704 = 0x2c0
    _Bool _isServerMaterialExchangeEnabled;	// 712 = 0x2c8
    NSSet *_serverDesiredKeyMaterialsFromGroupEncryptionController;	// 720 = 0x2d0
    CDUnknownBlockType _serverDesiredKeyMaterialsSigner;	// 728 = 0x2d8
    NSData *_encryptedDataBlob;	// 736 = 0x2e0
    NSData *_encryptedMirageHandshakeBlob;	// 744 = 0x2e8
    _Bool _reportedMKMOverQRArrivalTime;	// 752 = 0x2f0
    double _MKMOverQRQUICTime;	// 760 = 0x2f8
    double _MKMOverPushTime;	// 768 = 0x300
    double _MKMOverQRTime;	// 776 = 0x308
    NSMutableDictionary *_pendingMaterialInfoByFromID;	// 784 = 0x310
    NSMutableDictionary *_participantIDToPushToken;	// 792 = 0x318
    NSMutableDictionary *_participantIDToURI;	// 800 = 0x320
    double _timeBase;	// 808 = 0x328
    NSMutableDictionary *_participantIDToRemoteParticipantContext;	// 816 = 0x330
    struct os_unfair_lock_s _lock;	// 824 = 0x338
    CDUnknownBlockType _reliableUnicastRegistrationCompletionBlock;	// 832 = 0x340
    _TtC17identityservicesd33IDSGroupEncryptionControllerGroup *_group;	// 840 = 0x348
    _TtC17identityservicesd40IDSGroupEncryptionControllerGroupSession *_groupSession;	// 848 = 0x350
    _TtC17identityservicesd45IDSGroupDefaultRootMaterialExchangeController *_exchangeController;	// 856 = 0x358
    id <_TtP17identityservicesd35IDSDSessionKeyValueDeliveryProtocol_> _keyValueDelivery;	// 864 = 0x360
    NSString *_clientID;	// 872 = 0x368
    IDSDSessionInvitationManager *_invitationManager;	// 880 = 0x370
    IDSDSessionMessenger *_messenger;	// 888 = 0x378
    IDSGFTMetricsCollector *_metricsCollector;	// 896 = 0x380
    IDSDSessionSharedState *_sharedState;	// 904 = 0x388
    IDSDGroupStatusNotificationController *_groupStatusNotificationController;	// 912 = 0x390
    NSSet *_serverDesiredMaterials;	// 920 = 0x398
    IDSDAccountController *_accountController;	// 928 = 0x3a0
    IDSUTunController *_utunController;	// 936 = 0x3a8
    IDSQuickRelayAllocator *_qrAllocator;	// 944 = 0x3b0
}

- (void).cxx_destruct;	// IMP=0x00200000000dd86c
@property(retain, nonatomic) IDSQuickRelayAllocator *qrAllocator; // @synthesize qrAllocator=_qrAllocator;
@property(retain, nonatomic) IDSUTunController *utunController; // @synthesize utunController=_utunController;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(readonly) NSSet *serverDesiredMaterials; // @synthesize serverDesiredMaterials=_serverDesiredMaterials;
@property(retain, nonatomic) IDSDGroupStatusNotificationController *groupStatusNotificationController; // @synthesize groupStatusNotificationController=_groupStatusNotificationController;
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(readonly, nonatomic) _Bool handOffOverQREnabled; // @synthesize handOffOverQREnabled=_handOffOverQREnabled;
@property(readonly, nonatomic) IDSGFTMetricsCollector *metricsCollector; // @synthesize metricsCollector=_metricsCollector;
@property(readonly, nonatomic) NSData *encryptedMirageHandshakeBlob; // @synthesize encryptedMirageHandshakeBlob=_encryptedMirageHandshakeBlob;
@property(readonly, nonatomic) NSData *encryptedDataBlob; // @synthesize encryptedDataBlob=_encryptedDataBlob;
@property(nonatomic) _Bool sharedSessionHasJoined; // @synthesize sharedSessionHasJoined=_sharedSessionHasJoined;
@property(nonatomic) _Bool shouldConnectToQRServer; // @synthesize shouldConnectToQRServer=_shouldConnectToQRServer;
@property(retain, nonatomic) NSNumber *qrReason; // @synthesize qrReason=_qrReason;
@property(retain, nonatomic) NSNumber *qrError; // @synthesize qrError=_qrError;
@property(retain, nonatomic) IDSDSessionMessenger *messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) IDSDSessionInvitationManager *invitationManager; // @synthesize invitationManager=_invitationManager;
@property(readonly, nonatomic) NSString *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, nonatomic) unsigned int groupSessionState; // @synthesize groupSessionState=_groupSessionState;
@property(readonly, nonatomic) _Bool disallowWifiInterface; // @synthesize disallowWifiInterface=_disallowWifiInterface;
@property(readonly, nonatomic) _Bool disallowCellularInterface; // @synthesize disallowCellularInterface=_disallowCellularInterface;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSArray *requiredLackOfCapabilities;
@property(readonly, nonatomic) NSArray *requiredCapabilities;
- (unsigned long long)connectionCountHint;	// IMP=0x00100000000dd596
- (_Bool)_useBTDatagramPipe;	// IMP=0x00100000000dd552
- (void)_setClientType:(long long)arg1;	// IMP=0x00000000000dd506
- (_Bool)isLightweightParticipant;	// IMP=0x00100000000dd4fa
- (_Bool)isScreenSharingSession;	// IMP=0x00100000000dd4b6
- (unsigned int)state;	// IMP=0x00100000000dd472
- (id)clientChannelUUID;	// IMP=0x00100000000dd464
- (id)fromURI;	// IMP=0x00100000000dd414
- (id)groupID;	// IMP=0x00100000000dd3c4
- (id)accountID;	// IMP=0x00100000000dd374
- (id)participantID;	// IMP=0x00100000000dd324
- (long long)clientType;	// IMP=0x00100000000dd2e0
- (_Bool)enableQuickRelay;	// IMP=0x00100000000dd29c
- (_Bool)isInitiator;	// IMP=0x00100000000dd258
- (id)uniqueID;	// IMP=0x00100000000dd208
- (id)destinationsLightweightStatus;	// IMP=0x00100000000dd1b8
@property(readonly, copy, nonatomic) NSSet *destinations;
- (void)setSeqRecvStart:(unsigned int)arg1;	// IMP=0x00100000000dd0e1
- (void)setSSRCRecv:(unsigned int)arg1;	// IMP=0x00100000000dd097
- (void)setRemoteUsePhoneContinuityLocalMessage:(id)arg1;	// IMP=0x00100000000dd02e
- (void)setRemoteUseCloudPairedControlChannel:(id)arg1;	// IMP=0x00100000000dcfc5
- (void)setQuickRelaySessionToken:(id)arg1;	// IMP=0x00100000000dcf5c
- (void)setInviteTimeout:(long long)arg1;	// IMP=0x00100000000dcf08
- (void)setRemoteBlob:(id)arg1;	// IMP=0x00100000000dce9f
- (void)receivedEndMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000dce14
- (void)receivedSessionMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000dcd89
- (void)receivedCancelMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000dccfe
- (void)receivedDeclineMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000dcc73
- (void)receivedAcceptMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000dcbe8
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x00100000000dca5c
- (void)declineInvitationWithData:(id)arg1 forceFromURI:(id)arg2 additionalMessageAttributes:(id)arg3;	// IMP=0x00100000000dc9bf
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x00100000000dc956
- (void)declineInvitation;	// IMP=0x00100000000dc919
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x00100000000dc8b0
- (void)acceptInvitation;	// IMP=0x00100000000dc873
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x00100000000dc829
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x00100000000dc7c0
- (void)cancelInvitation;	// IMP=0x00100000000dc783
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x00100000000dc70e
- (void)sendInvitationWithOptions:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x00100000000dc699
- (void)sendCancelInvitationMessage;	// IMP=0x00100000000dc655
- (void)invitationDeclined;	// IMP=0x00100000000dc60e
- (_Bool)isWithDefaultPairedDevice;	// IMP=0x00100000000dc52b
- (void)didSessionReinitiated;	// IMP=0x00100000000dc525
- (void)_receivedReinitiateBringupAckMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000dbc38
- (void)_receivedReinitiateBringupMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000db4a6
- (void)_receivedReinitiateTeardownAckMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000da7d4
- (void)_receivedReinitiateTeardownMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000d9b24
- (void)_receivedReinitiateRequestMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000d9348
- (void)receivedReinitiateMessage:(id)arg1 fromURI:(id)arg2;	// IMP=0x00100000000d8f46
- (void)_startReinitiateAsInitiator;	// IMP=0x00100000000d8928
- (void)reinitiate;	// IMP=0x00100000000d7c7b
- (void)registerMultiplexerTransport;	// IMP=0x00100000000d786b
- (void)getActiveParticipants:(id)arg1 pushTokenForParticipants:(id)arg2 isLightweightParticipant:(_Bool)arg3;	// IMP=0x00100000000d718a
- (id)_createGroupSessionActiveParticipantsFromParticipants:(id)arg1 pushTokenForParticipants:(id)arg2;	// IMP=0x00100000000d6d0a
- (void)_updateActiveLightweightParticipants:(id)arg1;	// IMP=0x00100000000d6824
- (void)_updateActiveParticipants:(id)arg1;	// IMP=0x00100000000d5f2b
- (void)processAllocationErrorStatus:(int)arg1 errorCode:(int)arg2;	// IMP=0x00100000000d5ce4
- (void)qrAllocatorDidReceiveAllocateResponse:(id)arg1;	// IMP=0x00100000000d579d
- (void)onURI2ParticipantIDMappingChange:(id)arg1 allocateResponse:(id)arg2;	// IMP=0x00100000000d53b4
- (void)onParticipantID2PushTokenMappingChange:(id)arg1;	// IMP=0x00100000000d4d17
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x00100000000d4aed
- (void)getParticipantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x00100000000d47b7
- (void)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x00100000000d4481
- (void)requestMaterialsForParticipantIDs:(id)arg1 materialType:(int)arg2;	// IMP=0x00100000000d405d
- (void)requestEncryptionKeyForParticipantIDs:(id)arg1;	// IMP=0x00100000000d3c37
- (void)hasOutdatedSKI:(id)arg1;	// IMP=0x00100000000d3ad7
- (void)sendAllocationRequest:(id)arg1;	// IMP=0x00100000000d34f4
- (void)recvMembershipChangeEventWithReason:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d3344
- (void)InvalidateStableKeyMaterialInFrameworkCache:(id)arg1;	// IMP=0x00100000000d3135
- (void)recvStableKeyMaterialForFrameworkCache:(id)arg1;	// IMP=0x00100000000d27c9
- (void)rejectedKeyRecoveryRequestFromURI:(id)arg1 reason:(unsigned int)arg2;	// IMP=0x00100000000d238e
- (_Bool)shouldReportToClient:(id)arg1 timeStamp:(double)arg2 type:(unsigned long long)arg3;	// IMP=0x00100000000d204a
- (void)_decryptReceivedDataBlobsUsingSKMs;	// IMP=0x00100000000d09e5
- (void)receiveAndDecryptEncryptedDataBlobs:(id)arg1;	// IMP=0x00100000000d01f2
- (void)_sendRemoteParticipantInfoEventToClient:(id)arg1 forParticipant:(id)arg2;	// IMP=0x00100000000cffa4
- (void)_sendClientDecryptedDatabBlobs:(id)arg1 type:(int)arg2 forParticipant:(id)arg3;	// IMP=0x00100000000cfa38
- (void)invalidateKeyMaterialByKeyIndexes:(id)arg1;	// IMP=0x00100000000cf9b9
- (void)didSendKeyMaterial:(id)arg1 duration:(double)arg2;	// IMP=0x00100000000cf935
- (void)recvKeyMaterial:(id)arg1;	// IMP=0x00100000000cf529
- (void)didCreateMKM:(id)arg1;	// IMP=0x00100000000cf4d6
- (void)updateServerDesiredKeyMaterials;	// IMP=0x00100000000cf228
- (id)serverDesiredKeyMaterials;	// IMP=0x00100000000cf1e0
- (void)requestKeyValueDeliveryDataForKey:(unsigned int)arg1 participantID:(unsigned long long)arg2;	// IMP=0x00100000000cef32
- (void)updateServerDesiredKeyValueDeliveryMaterialsNeeded;	// IMP=0x00100000000ced74
- (id)getDesiredMaterialSetForEncryptedData;	// IMP=0x00100000000cecf0
- (void)setServerDesiredKeyMaterials:(id)arg1 signer:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ceb10
- (void)sendKeyMaterialMessageDataOverQR:(id)arg1 toDestination:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ce6e1
- (void)sendKeyMaterialMessage:(id)arg1 toDestination:(id)arg2;	// IMP=0x00100000000cdbf4
- (void)leaveGroupSession:(id)arg1 options:(id)arg2;	// IMP=0x00100000000ccdbf
- (void)receiveJoinNotificationFromAParticipant;	// IMP=0x00100000000cc966
- (void)joinWithOptions:(id)arg1 messageContext:(id)arg2;	// IMP=0x00100000000ca047
- (void)joinWithOptions:(id)arg1;	// IMP=0x00100000000ca033
- (double)getIDSContextTimeStamp;	// IMP=0x00100000000ca025
- (id)_generateEncryptedAndSignedIDSContextBlobWithClientContextBlob:(id)arg1 timeStamp:(double)arg2;	// IMP=0x00100000000c9b5c
- (id)_generateEncryptedAndSignedIDSContextBlobWithClientContextBlob:(id)arg1;	// IMP=0x00100000000c9ab9
- (id)_checkIfPushMessageSizeGreaterThanMaxLimit:(id)arg1 maxLimit:(unsigned long long)arg2;	// IMP=0x00100000000c97a6
- (void)setGroupStreamInfo:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000c8e37
- (void)_sendConnectedLinkInfoToAVC;	// IMP=0x00100000000c8d5e
- (void)updateParticipantType:(unsigned short)arg1 members:(id)arg2 triggeredLocally:(_Bool)arg3 withContext:(id)arg4 lightweightStatusDict:(id)arg5;	// IMP=0x00100000000c8011
- (void)updateParticipantInfo:(id)arg1;	// IMP=0x00100000000c7dec
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000000c7a08
- (void)removeParticipantIDs:(id)arg1;	// IMP=0x00100000000c76d9
- (void)manageDesignatedMembers:(id)arg1 withType:(unsigned short)arg2;	// IMP=0x00100000000c736a
- (void)updateMembers:(id)arg1 withContext:(id)arg2 messagingCapabilities:(id)arg3 triggeredLocally:(_Bool)arg4 lightweightStatusDict:(id)arg5;	// IMP=0x00100000000c450c
- (_Bool)destinationsContainFromURI:(id)arg1;	// IMP=0x00100000000c40dd
- (void)link:(id)arg1 didReceiveSessionStats:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x00100000000c40d7
- (void)link:(id)arg1 didFinishConvergenceForRelaySessionID:(id)arg2;	// IMP=0x00100000000c3ee5
- (void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 status:(unsigned int)arg5;	// IMP=0x00100000000c3edf
- (void)_processParticipantInfo:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x00100000000c2f5a
- (void)_sendSessionInfoResponseErrorToClient:(unsigned int)arg1;	// IMP=0x00100000000c2ecd
- (void)terminateCallDueToIdleClientForLink:(id)arg1;	// IMP=0x00100000000c2ec7
- (void)link:(id)arg1 didReceiveDebugDataForClient:(id)arg2 dataType:(unsigned char)arg3;	// IMP=0x00100000000c2ec1
- (void)link:(id)arg1 didReceiveMembershipChangedInformation:(unsigned char)arg2;	// IMP=0x00100000000c2ebb
- (void)link:(id)arg1 didReceiveEncryptionInformation:(id)arg2;	// IMP=0x00100000000c2eb5
- (void)link:(id)arg1 didReceiveErrorIndicationWithCode:(unsigned int)arg2;	// IMP=0x00100000000c2c03
- (void)link:(id)arg1 didReceiveEncryptedDataBlobs:(id)arg2;	// IMP=0x00100000000c2a6e
- (void)didReceiveBlockedIndicationForLink:(id)arg1 reason:(unsigned int)arg2;	// IMP=0x00100000000c2a68
- (void)link:(id)arg1 didReceiveMappedParticipantsDict:(id)arg2 forLinkID:(BOOL)arg3;	// IMP=0x00100000000c26c0
- (void)_sendParticipantMappingUpdateToClient:(id)arg1 forLinkID:(BOOL)arg2 shouldReplace:(_Bool)arg3;	// IMP=0x00100000000c25b2
- (id)_breakDictionaryIntoMultipleChunks:(id)arg1 chunkSize:(int)arg2;	// IMP=0x00100000000c2281
- (id)_createOneWayParticipantDictionaryFromMappedParticipantsDict:(id)arg1;	// IMP=0x00100000000c2132
- (void)link:(id)arg1 didReceivePluginDisconnect:(id)arg2;	// IMP=0x00100000000c202c
- (void)link:(id)arg1 didReceiveRequestToPurgeRegistration:(id)arg2;	// IMP=0x00100000000c1e76
- (void)link:(id)arg1 didReceivePluginUnregistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x00100000000c1e70
- (void)link:(id)arg1 didReceivePluginRegistration:(unsigned long long)arg2 pluginName:(id)arg3;	// IMP=0x00100000000c1e6a
- (void)link:(id)arg1 didReceiveSessionStateCounter:(unsigned int)arg2;	// IMP=0x00100000000c1e64
- (void)link:(id)arg1 didReceiveParticipantUpdate:(id)arg2 status:(unsigned short)arg3;	// IMP=0x00100000000c1e5e
- (void)link:(id)arg1 didAddQREvent:(id)arg2;	// IMP=0x00100000000c1e58
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;	// IMP=0x00100000000c1e52
- (void)link:(id)arg1 didGetLinkProbingStatus:(id)arg2;	// IMP=0x00100000000c1e4c
- (void)link:(id)arg1 didSoMaskChange:(unsigned int)arg2;	// IMP=0x00100000000c1e46
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;	// IMP=0x00100000000c1e40
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;	// IMP=0x00100000000c1e3a
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00100000000c1e34
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00100000000c1e2e
- (void)link:(id)arg1 didReceiveChildConnections:(id)arg2 forLinkID:(BOOL)arg3;	// IMP=0x00100000000c1705
- (id)getLinkIDToLocalRemoteEndpointPairDictionary;	// IMP=0x00100000000c16a3
- (void)link:(id)arg1 didReceiveReliableUnicastServerMaterial:(id)arg2;	// IMP=0x00100000000c14ab
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4;	// IMP=0x00100000000c1290
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;	// IMP=0x00100000000bf5c7
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_90727270 *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00100000000bf5bf
- (void)link:(id)arg1 didReceiveReportEvent:(id)arg2;	// IMP=0x00100000000bf5b9
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000000bf316
- (void)link:(id)arg1 didReceiveMaterialInfo:(id)arg2 material:(id)arg3;	// IMP=0x00100000000ba518
- (void)materialInfoError:(id)arg1;	// IMP=0x00100000000ba4a4
- (_Bool)shouldVerifySignatureForMaterialType:(int)arg1;	// IMP=0x00100000000ba490
- (void)link:(id)arg1 didReceiveKeyMaterialMessageData:(id)arg2 fromParticipantIDs:(id)arg3 toParticipantID:(id)arg4;	// IMP=0x00100000000ba48a
- (void)link:(id)arg1 didReceiveSKEData:(id)arg2;	// IMP=0x00100000000ba484
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000000ba31a
- (void)_sendQREventToAVC:(id)arg1;	// IMP=0x00100000000b9f6b
- (void)addQREventForRTCReport:(id)arg1;	// IMP=0x00100000000b9c52
- (void)_setLinkProtocol:(id)arg1;	// IMP=0x00100000000b9833
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00100000000b91a9
- (void)connection:(id)arg1 receivedData:(id)arg2;	// IMP=0x00100000000b89ae
- (void)handleAVConferenceError:(id)arg1;	// IMP=0x00100000000b89a8
- (void)connectionDidStop:(id)arg1 error:(id)arg2;	// IMP=0x00100000000b8721
- (void)connection:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000b82a0
- (void)setForceTCPFallbackOnCellUsingReinitiate:(_Bool)arg1;	// IMP=0x00100000000b81de
- (void)setForceTCPFallbackOnWiFiUsingReinitiate:(_Bool)arg1;	// IMP=0x00100000000b811c
- (void)enableP2Plinks;	// IMP=0x00100000000b7f99
- (void)setQuickRelayUserTypeForSession:(unsigned short)arg1;	// IMP=0x00100000000b7e47
- (void)setRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x00100000000b657c
- (void)setPreferences:(id)arg1;	// IMP=0x00100000000b61ea
- (void)setMuted:(_Bool)arg1;	// IMP=0x00100000000b5e72
- (void)setAudioEnabled:(_Bool)arg1;	// IMP=0x00100000000b5afa
- (id)connectDuration;	// IMP=0x00100000000b59bf
- (id)sessionDuration;	// IMP=0x00100000000b5911
- (void)endSessionWithReason:(unsigned int)arg1;	// IMP=0x00100000000b5822
- (void)_notifyClientsSessionStopped;	// IMP=0x00100000000b5058
- (void)_cleanupSocketPairConnection;	// IMP=0x00100000000b5026
- (void);	// IMP=0x00100000000b4ff7
- (id)_acceptedDeviceToken;	// IMP=0x00100000000b4d35
- (id)_acceptedDeviceUniqueID;	// IMP=0x00100000000b490d
- (id)_socketOptionsForDevice:(id)arg1 uniqueID:(id)arg2 pushToken:(id)arg3 connectionSuffix:(id)arg4;	// IMP=0x00100000000b3d8a
- (void)_closeSocketToDevice:(id)arg1;	// IMP=0x00100000000b35fd
- (void)_resetPreferences:(id)arg1;	// IMP=0x00100000000b32f1
- (void)_endSession;	// IMP=0x00100000000b1b1d
- (void)endSessionWithData:(id)arg1;	// IMP=0x00100000000b1930
- (void)_sendSessionEndWithData:(id)arg1;	// IMP=0x00100000000b1410
- (void)endSession;	// IMP=0x00100000000b13aa
- (void)reconnectSession;	// IMP=0x00100000000b1232
- (void)_cleanupQuickRelaySession;	// IMP=0x00100000000b0fa5
- (void)cleanupSessionWithCleanStatus:(_Bool)arg1;	// IMP=0x00100000000afca8
- (void)startListeningOnClientSocket:(int)arg1 isRawSocket:(_Bool)arg2;	// IMP=0x00100000000af96a
- (void)runConnectivityCheckWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af848
- (void)networkingIsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x00100000000af82c
- (unsigned int)globalLinkErrorToSessionEndReason:(long long)arg1;	// IMP=0x00100000000af811
- (_Bool)shouldReportUPlusOneKey;	// IMP=0x00100000000af7f4
- (id)getAppID;	// IMP=0x00100000000af7a4
- (id)getFromService;	// IMP=0x00100000000af6c2
- (id)getCallerCert;	// IMP=0x00100000000af5fc
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x00100000000af474
- (void)setAcceptedRelaySession:(id)arg1;	// IMP=0x00100000000aef4b
- (void)_setInitialLinkType:(unsigned long long)arg1;	// IMP=0x00100000000aeafa
- (void)checkAndCallSessionStart;	// IMP=0x00100000000aea1a
- (void)_sessionStartWithSocketDescriptor:(int)arg1;	// IMP=0x00100000000ae4aa
- (_Bool)_shouldUseIPsecLink;	// IMP=0x00100000000ae44a
- (void)_broadcastSessionStartWithSocket:(int)arg1;	// IMP=0x00100000000ae216
- (void)startQRSession;	// IMP=0x00100000000ae1ff
- (void)openSocketToDevice:(id)arg1;	// IMP=0x00100000000ace31
- (_Bool)shouldAllocateForInvitee;	// IMP=0x00100000000acd7a
- (double)_serverSpecifiedJoinNotificationDeliveryTimeout;	// IMP=0x00100000000acccd
- (void)_noteJoinNotificationDidDeliverWithSuccess:(_Bool)arg1;	// IMP=0x00100000000ac780
- (void)_noteJoinNotificationWillSend;	// IMP=0x00100000000abcfc
- (void)connectQRServer:(id)arg1 withPreferredLocalInterface:(int)arg2;	// IMP=0x00100000000a6ebe
- (id)formAndEncryptDataBlob:(id)arg1 type:(int)arg2;	// IMP=0x00100000000a6bf3
- (id)getEncryptedMirageHandshakeBlob;	// IMP=0x00100000000a6bb6
- (id)getEncryptedDataBlob;	// IMP=0x00100000000a6b79
- (void)updateRelevantEncryptedDataBlob;	// IMP=0x00100000000a6954
- (void)_sendLinkSelectionPreference:(id)arg1 linkScore:(id)arg2 ipPreference:(id)arg3 uplinkNackDisabled:(id)arg4;	// IMP=0x00100000000a692f
- (void)didReceiveCurrentCellularSignalRaw:(int)arg1 signalStrength:(int)arg2 signalGrade:(int)arg3;	// IMP=0x00100000000a6929
- (id)_getNewLinkOptionsForActiveParticipantInfoRequest;	// IMP=0x00100000000a617a
- (void)_sendStreamSubscriptionRequest:(id)arg1;	// IMP=0x00100000000a5eba
- (id)_createStreamSubscriptionRequest:(id)arg1;	// IMP=0x00100000000a535a
- (void)_sendingOfflineActiveParticipantInfoRequest:(id)arg1;	// IMP=0x00100000000a4bed
- (void)unregisterPluginWithOptions:(id)arg1 messageContext:(id)arg2;	// IMP=0x00100000000a48b9
- (void)registerPluginWithOptions:(id)arg1 messageContext:(id)arg2;	// IMP=0x00100000000a4585
- (void)requestURIsForParticipantIDs:(id)arg1 withRequestID:(id)arg2;	// IMP=0x00100000000a4085
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x00100000000a2b08
- (void)_connectQRDirectlyToClientChannel:(id)arg1;	// IMP=0x00100000000a181b
- (id)_extractFieldBytesFromMetadata:(const void *)arg1 ofSize:(unsigned int)arg2 packetBuffer:(CDStruct_90727270 *)arg3;	// IMP=0x0010000000097299
- (void)_connectSocketDescriptor:(int)arg1 toClientChannel:(id)arg2;	// IMP=0x00100000000956c6
- (void)_checkAndRunClientChannelTests:(id)arg1;	// IMP=0x0010000000094e25
- (_Bool)_checkAndSendCachedDataForClient:(id)arg1;	// IMP=0x0010000000094941
- (void)writeToClientChannel:(id)arg1 packetBuffer:(CDStruct_90727270 *)arg2 metaData:(const char *)arg3 metadataSize:(unsigned int)arg4;	// IMP=0x00100000000935b4
- (void)_invalidateClientChannel:(id)arg1;	// IMP=0x0010000000093416
- (void)unregisterClientChannel;	// IMP=0x001000000009334d
- (void)registerClientChannel;	// IMP=0x00100000000927bf
- (void)setParticipantIDToURI:(id)arg1 participantID:(id)arg2;	// IMP=0x0010000000092727
- (id)_getURIFromParticipantIDNumber:(id)arg1;	// IMP=0x0010000000092545
- (id)_getPushTokenFromParticipantIDNumber:(id)arg1;	// IMP=0x0010000000092377
- (id)_getPushTokenFromParticipantID:(unsigned long long)arg1;	// IMP=0x0010000000092311
- (id)_getPushTokensFromParticipantIDArray:(id)arg1 useNullPlaceholder:(_Bool)arg2;	// IMP=0x00100000000920ad
- (id)getCellularNetworkInfo:(id)arg1;	// IMP=0x00100000000920a5
- (void)_buildCellularNetworkInfoSessionEvent:(CDStruct_1602fe53)arg1;	// IMP=0x001000000009209f
- (void)_lightweightParticipantSync:(unsigned char)arg1;	// IMP=0x0010000000091ec9
- (void)mapMKIFromMaterial:(id)arg1 token:(id)arg2;	// IMP=0x0010000000091e34
- (void)reportSendRatchetedMKMToAVCForParticipantID:(unsigned long long)arg1 mki:(id)arg2;	// IMP=0x0010000000091d5e
- (void)reportMKMReceivedOverQRFromToken:(id)arg1 material:(id)arg2;	// IMP=0x0010000000091c70
- (void)reportMKMReceivedOverPushViaCacheForParticipantID:(unsigned long long)arg1 material:(id)arg2;	// IMP=0x0010000000091b4b
- (void)reportMKMReceivedOverPushFromToken:(id)arg1 material:(id)arg2;	// IMP=0x0010000000091a5d
- (void)reportPreKeyReceivedOverPushFromToken:(id)arg1;	// IMP=0x0010000000091a19
- (void)reportJoinReceivedOverPushFromToken:(id)arg1;	// IMP=0x0010000000091a00
- (void)reportFirstMKMReceivedFromQR:(double)arg1;	// IMP=0x00100000000919f2
- (void)reportFirstMKMReceivedFromPush:(double)arg1;	// IMP=0x0010000000091513
- (void)_cleanupSessionConnection;	// IMP=0x0010000000091114
- (void)_reportRTC;	// IMP=0x0010000000090735
- (id)buildRTCSummaryReport;	// IMP=0x001000000009042a
- (id)rtcNormalizeTime:(double)arg1;	// IMP=0x00100000000903f1
- (_Bool)_shouldEnableCellularSlicingAfterDiceRoll;	// IMP=0x0010000000090259
- (unsigned long long)_getExperimentGroupThresholdForCellularSlicing;	// IMP=0x00100000000901bd
@property(readonly, nonatomic) _Bool sessionIsActive;
@property(readonly, copy) NSString *description;
@property(readonly) id <IDSXPCGroupSessionKeyValueDelivery> keyValueDelivery;
@property(readonly, nonatomic) char *keyMaterial;
- (void)dealloc;	// IMP=0x001000000008f6dd
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 availabilityCheck:(id)arg4 accountController:(id)arg5 utunController:(id)arg6;	// IMP=0x001000000008a5e5
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 availabilityCheck:(id)arg4;	// IMP=0x001000000008a4df
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;	// IMP=0x001000000008a440
- (void)_generateKeys:(id)arg1;	// IMP=0x0010000000089bbd
- (long long)_loggingFlags;	// IMP=0x0010000000089b6e
- (void)_selectDefaultMic;	// IMP=0x0010000000089b68
- (void)submitAWDMetricsForIDSSessionWithEndReason:(unsigned int)arg1;	// IMP=0x00100000002fdc35
- (void)submitAWDMetricsForIDSSessionCompleted;	// IMP=0x00100000002fd7f2
- (void)submitAWDMetricsForIDSSessionReinitiateConnected;	// IMP=0x00100000002fd707
- (void)submitAWDMetricsForIDSSessionReinitiateStarted;	// IMP=0x00100000002fd61c
- (void)submitAWDMetricsForIDSSessionReinitiateRequested;	// IMP=0x00100000002fd531
- (void)submitAWDMetricsForIDSSessionConnected;	// IMP=0x00100000002fd446
- (void)submitAWDMetricsForIDSSessionAcceptReceived;	// IMP=0x00100000002fd35b
- (void)submitAWDMetricsForIDSSessionAcceptSent;	// IMP=0x00100000002fd270
- (void)submitAWDMetricsForIDSSessionDeclineReceived;	// IMP=0x00100000002fd185
- (void)submitAWDMetricsForIDSSessionDeclineSent;	// IMP=0x00100000002fd09a
- (void)submitAWDMetricsForIDSSessionCancelReceived;	// IMP=0x00100000002fcfaf
- (void)submitAWDMetricsForIDSSessionCancelSentWithRemoteEndReason:(unsigned int)arg1 numberOfRecipients:(id)arg2;	// IMP=0x00100000002fce99
- (void)submitAWDMetricsForIDSSessionInvitationReceived;	// IMP=0x00100000002fcdae
- (void)submitAWDMetricsForIDSSessionInvitationSentWithNumberOfRecipients:(id)arg1;	// IMP=0x00100000002fcca9
- (void)submitAWDMetricsForIDSSessionStarted;	// IMP=0x00100000002fc9f7
- (_Bool)_shouldSubmitMetricsBasedOnDate:(id)arg1 isInitiator:(_Bool)arg2;	// IMP=0x00100000002fc8b1
- (_Bool)_shouldSubmitMetricsForThisSession;	// IMP=0x00100000002fc80d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

