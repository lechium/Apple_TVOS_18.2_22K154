//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDSessionController, IDSRealTimeEncryptionIdentity, IMDispatchTimer, NSMutableDictionary, NSString, _TtC17identityservicesd29IDSGroupEncryptionController2;
@protocol IDSGlobalLinkP2PKeyNegotiatorProvider, OS_dispatch_queue;

@interface IDSGroupEncryptionController2Shim : NSObject
{
    _TtC17identityservicesd29IDSGroupEncryptionController2 *_internal;	// 8 = 0x8
    id _sessionController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_realtimeEncryptionQueue;	// 24 = 0x18
    _Bool _isInternal;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 36 = 0x24
    _Bool _shouldSendMKMOverQR;	// 40 = 0x28
    NSMutableDictionary *_accountIDs;	// 48 = 0x30
    NSMutableDictionary *_fromURIs;	// 56 = 0x38
    NSMutableDictionary *_prekeyAckCountForGroup;	// 64 = 0x40
    NSMutableDictionary *_lastKnownGroupIDToPushTokens;	// 72 = 0x48
    NSMutableDictionary *_lastKnownAccountIDToPushTokens;	// 80 = 0x50
    IMDispatchTimer *_endpointUpdateTimer;	// 88 = 0x58
    id <IDSGlobalLinkP2PKeyNegotiatorProvider> _p2pNegotiatorProvider;	// 96 = 0x60
    _Bool _isTestRunning;	// 104 = 0x68
    _Bool _fakeMKMWrapping;	// 105 = 0x69
}

+ (id)sharedInstance;	// IMP=0x002000000048b6fe
- (void).cxx_destruct;	// IMP=0x0020000000494ba1
@property(nonatomic) _Bool fakeMKMWrapping; // @synthesize fakeMKMWrapping=_fakeMKMWrapping;
@property(nonatomic) _Bool isTestRunning; // @synthesize isTestRunning=_isTestRunning;
@property(readonly, nonatomic) _TtC17identityservicesd29IDSGroupEncryptionController2 *internal; // @synthesize internal=_internal;
- (void)_sendingKeysToMembers:(id)arg1;	// IMP=0x0010000000494b6d
- (id)getLightweightStatusDictForGroup:(id)arg1;	// IMP=0x0010000000494934
- (id)getMembersForGroup:(id)arg1;	// IMP=0x00100000004948b6
- (id)getParticipantsForGroup:(id)arg1;	// IMP=0x0010000000494838
- (id)getParticipantPushTokensForGroup:(id)arg1 ofType:(long long)arg2;	// IMP=0x00100000004947a6
- (id)getParticipantPushTokensForGroup:(id)arg1;	// IMP=0x0010000000494728
- (id)stablekeyMaterialCacheToGroup:(id)arg1;	// IMP=0x0010000000494720
- (id)keyMaterialCacheToGroup:(id)arg1;	// IMP=0x0010000000494718
- (id)p2pNegotiatorProvider;	// IMP=0x001000000049470a
- (void)cleanUpSessionForID:(id)arg1 groupID:(id)arg2;	// IMP=0x0010000000494691
- (void)ensureSessionForID:(id)arg1 groupID:(id)arg2;	// IMP=0x001000000049461b
- (void)account:(id)arg1 didUpdateRegisteredDevices:(id)arg2;	// IMP=0x0010000000493f18
- (void)didUpdateParticipants:(id)arg1 ofType:(long long)arg2 forGroup:(id)arg3 sessionID:(id)arg4;	// IMP=0x0010000000493e96
- (_Bool)_isValidPushToken:(id)arg1;	// IMP=0x0010000000493e4b
- (void)_updateRelevantEncryptedDataBlobForSession:(id)arg1;	// IMP=0x0010000000493d75
- (void)didUpdateMembers:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 lightweightStatusDict:(id)arg4 hasChangedStandardMembers:(_Bool)arg5 newlyAddedMembers:(id)arg6;	// IMP=0x0010000000493b46
- (void)setMembers:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3 lightweightStatusDict:(id)arg4;	// IMP=0x0010000000493105
- (void)updateLightweightMemberTypes:(id)arg1 members:(id)arg2 triggeredLocally:(_Bool)arg3 forGroup:(id)arg4 sessionID:(id)arg5;	// IMP=0x0010000000492b2d
- (void)didReceiveEndpointsUpdate:(id)arg1 forGroup:(id)arg2 sessionID:(id)arg3;	// IMP=0x0010000000492390
- (void)rollNewKeysAfterResettingPrekeysForGroups:(id)arg1 withReason:(long long)arg2;	// IMP=0x0010000000491bc6
- (void)updateServerDesiredKeyMaterialsForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x0010000000491b85
- (id)_compactKeyMaterialMessage:(id)arg1 isOutgoing:(_Bool)arg2 groupID:(id)arg3;	// IMP=0x00100000004914f1
- (id)_generateMKMBlobForQRFromMessage:(id)arg1 account:(id)arg2 destination:(id)arg3 fromURI:(id)arg4;	// IMP=0x0010000000490dea
- (void)processedQRMKMPayloadFromData:(id)arg1 forGroupID:(id)arg2 account:(id)arg3 remoteURI:(id)arg4 localURI:(id)arg5 tokens:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0010000000490344
- (void)sendPreKeyRequestMessage:(id)arg1 toDestination:(id)arg2 forGroup:(id)arg3 sessionID:(id)arg4;	// IMP=0x0010000000490189
- (void)sendPreKeyMessage:(id)arg1 toDestination:(id)arg2 forGroup:(id)arg3 sessionID:(id)arg4;	// IMP=0x001000000048ffd4
- (void)sendPublicKeyToDestination:(id)arg1 group:(id)arg2 sessionID:(id)arg3;	// IMP=0x001000000048ffbc
- (void)sendPublicKeyToGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000048ffaa
- (void)_sendMessage:(id)arg1 toDestination:(id)arg2 forGroup:(id)arg3 sessionID:(id)arg4 command:(long long)arg5 timeout:(double)arg6 shouldExpire:(_Bool)arg7 useQR:(_Bool)arg8 completion:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x001000000048eeaf
- (void)sendKeyMaterialMessage:(id)arg1 toDestination:(id)arg2 forGroup:(id)arg3 sessionID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000048ed58
- (id)stableKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000048ec65
- (unsigned long long)participantIDForPushToken:(id)arg1 inGroup:(id)arg2;	// IMP=0x001000000048ebc9
- (struct __SecKey *)previousFullIdentityKey;	// IMP=0x001000000048ebb3
- (struct __SecKey *)fullIdentityKey;	// IMP=0x001000000048eb9d
- (void)unsubscribeEndpointsForGroup:(id)arg1;	// IMP=0x001000000048ea68
- (void)resetKeysForGroup:(id)arg1 shouldRemoveCurrentParticipants:(_Bool)arg2;	// IMP=0x001000000048e8e4
- (void)removeActiveParticipant:(id)arg1 forGroup:(id)arg2;	// IMP=0x001000000048e832
- (void)removeLocalActiveParticipantForGroup:(id)arg1;	// IMP=0x001000000048e7c7
- (id)activeParticipantsForGroup:(id)arg1;	// IMP=0x001000000048e703
- (void)resetDevicePrekey;	// IMP=0x001000000048e63b
- (_Bool)_shouldEnforceRemoteTimeout;	// IMP=0x001000000048e4f9
- (double)_multiwayFTMessageSendTimeout;	// IMP=0x001000000048e3ad
- (void)resetKeyMaterialLocalSentStatus:(id)arg1;	// IMP=0x001000000048e39b
- (void)resetMKMLocalSentStatus:(id)arg1;	// IMP=0x001000000048e35a
- (id)stableKeyMaterialForGroup:(id)arg1;	// IMP=0x001000000048e306
- (id)masterKeyMaterialForGroup:(id)arg1;	// IMP=0x001000000048e2fe
- (void)receivedGroupStableKeyMaterial:(id)arg1 fromPushToken:(id)arg2 sessionID:(id)arg3 groupID:(id)arg4;	// IMP=0x001000000048e2f8
- (void)noteReceivedGroupMasterKeyMaterials:(id)arg1 URIs:(id)arg2 sessionID:(id)arg3;	// IMP=0x001000000048e2f2
- (id)receivedAndSetKeyMaterial:(id)arg1 stableKeyMaterial:(id)arg2 forDevice:(id)arg3 fromURI:(id)arg4 groupID:(id)arg5 sessionID:(id)arg6 fromSender:(_Bool)arg7 error:(id *)arg8 forMKM:(_Bool)arg9 forSKM:(_Bool)arg10;	// IMP=0x001000000048e0df
- (void)processIncomingKeyMaterialsRecoveryRequest:(id)arg1 fromDevice:(id)arg2 fromURI:(id)arg3 groupID:(id)arg4 sessionID:(id)arg5 serverDate:(id)arg6 requireMKM:(_Bool)arg7 requireSKM:(_Bool)arg8;	// IMP=0x001000000048d62c
- (void)sendKeyMaterialRequestMessage:(id)arg1 toDestination:(id)arg2 forGroup:(id)arg3 sessionID:(id)arg4;	// IMP=0x001000000048d568
- (void)sendKeyMaterialsRecoveryRequestToParticipants:(id)arg1 groupID:(id)arg2 sessionID:(id)arg3 requireMKM:(_Bool)arg4 requireSKM:(_Bool)arg5;	// IMP=0x001000000048d2bc
- (void)sendKeyMaterialsRecoveryRequestToGroup:(id)arg1 requireMKM:(_Bool)arg2 requireSKM:(_Bool)arg3;	// IMP=0x001000000048d009
- (unsigned long long)localParticipantIDForGroupID:(id)arg1;	// IMP=0x001000000048cfc1
- (long long)setLocalParticipantID:(unsigned long long)arg1 forGroupID:(id)arg2 sessionID:(id)arg3;	// IMP=0x001000000048cee1
- (id)publicKeys;	// IMP=0x001000000048ce23
- (id)realTimeEncryptionPublicKeyForDevice:(id)arg1;	// IMP=0x001000000048ce0d
- (_Bool)setRealTimeEncryptionPublicKey:(id)arg1 forDevice:(id)arg2 fromURI:(id)arg3 groupID:(id)arg4 sessionID:(id)arg5 serverDate:(id)arg6 wrapMode:(long long)arg7;	// IMP=0x001000000048cddb
- (unsigned long long)encryptionSequenceNumberForGroupID:(id)arg1;	// IMP=0x001000000048ccd8
- (void)storeEncryptionSequenceNumber:(unsigned long long)arg1 groupID:(id)arg2;	// IMP=0x001000000048cb5d
- (void)resetKeyMaterialCacheTimerIfNeeded:(id)arg1;	// IMP=0x001000000048cb1c
- (void)resetMKMCacheAfterTimeoutForGroup:(id)arg1 interval:(unsigned long long)arg2;	// IMP=0x001000000048caed
- (void)createStableKeyMaterialAndSendToFrameworkForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000048cad2
- (void)reportPrekeyAckStatus:(id)arg1;	// IMP=0x001000000048c9d0
- (void)processIncomingPrekeyAckForGroup:(id)arg1;	// IMP=0x001000000048c86c
@property(readonly, nonatomic) IDSRealTimeEncryptionIdentity *previousIdentityForDevice;
@property(readonly, nonatomic) IDSRealTimeEncryptionIdentity *identityForDevice;
- (id)realTimeEncryptionPublicKeyData;	// IMP=0x001000000048c82a
- (long long)realTimeEncryptionPublicKeyWrappingMode;	// IMP=0x001000000048c814
- (id)createRealTimeEncryptionFullIdentityForDevice:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000048c6e5
- (void)requestPendingKeyMaterialsForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000048c6df
- (void)reliablyRequestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000048c69e
- (void)requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2;	// IMP=0x001000000048c65d
- (void)requestKeyMaterialForGroup:(id)arg1 sessionID:(id)arg2 toSpecificMembers:(id)arg3 requireMKM:(_Bool)arg4 requireSKM:(_Bool)arg5;	// IMP=0x001000000048c61c
- (void)removeAccountForGroup:(id)arg1;	// IMP=0x001000000048c333
- (void)setAccount:(id)arg1 fromURI:(id)arg2 forGroup:(id)arg3;	// IMP=0x001000000048bde5
- (_Bool)_isUsingAccount:(id)arg1;	// IMP=0x001000000048bc99
- (id)localPushToken;	// IMP=0x001000000048bc83
- (id)remotePushTokensForGroup:(id)arg1;	// IMP=0x001000000048bc05
- (CDUnknownBlockType)addPreKeyChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000048bbf2
- (struct __SecKey *)publicKeyForPushToken:(id)arg1;	// IMP=0x001000000048bbaa
- (struct __SecKey *)previousLocalPrivatePreKey;	// IMP=0x001000000048bb66
- (struct __SecKey *)previousLocalPublicPreKey;	// IMP=0x001000000048bb22
- (struct __SecKey *);	// IMP=0x001000000048bade
- (struct __SecKey *)localPublicPreKey;	// IMP=0x001000000048ba9a
- (id)_localDevicePushToken;	// IMP=0x001000000048ba0f
@property(readonly, nonatomic) IDSDSessionController *sessionController; // @synthesize sessionController=_sessionController;
- (id)init;	// IMP=0x001000000048b753

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

