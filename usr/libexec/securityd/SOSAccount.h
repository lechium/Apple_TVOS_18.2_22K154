//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKKSNearFutureScheduler, CKKSPBFileStorage, CKKeyParameter, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults, OctagonStateMachine, SOSAccountTrustClassic, SOSCKCircleStorage, SOSKVSCircleStorageTransport, SOSMessageKVS;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SOSAccount : NSObject
{
    _Bool _isListeningForSync;	// 8 = 0x8
    _Bool _circle_rings_retirements_need_attention;	// 9 = 0x9
    _Bool _engine_peer_state_needs_repair;	// 10 = 0xa
    _Bool _key_interests_need_updating;	// 11 = 0xb
    _Bool _need_backup_peers_created_after_backup_key_set;	// 12 = 0xc
    _Bool _accountKeyIsTrusted;	// 13 = 0xd
    _Bool _notifyCircleChangeOnExit;	// 14 = 0xe
    _Bool _notifyViewChangeOnExit;	// 15 = 0xf
    _Bool _notifyBackupOnExit;	// 16 = 0x10
    _Bool _accountIsChanging;	// 17 = 0x11
    _Bool _sosTestmode;	// 18 = 0x12
    _Bool _consolidateKeyInterest;	// 19 = 0x13
    _Bool _accountInScriptBypassMode;	// 20 = 0x14
    _Bool _sosCompatibilityMode;	// 21 = 0x15
    _Bool _forceSyncForRecoveryRing;	// 22 = 0x16
    int _lock_notification_token;	// 24 = 0x18
    struct __SecKey *_accountKey;	// 32 = 0x20
    struct __SecKey *_accountPrivateKey;	// 40 = 0x28
    struct __SecKey *_previousAccountKey;	// 48 = 0x30
    struct __SecKey *_peerPublicKey;	// 56 = 0x38
    NSDictionary *_gestalt;	// 64 = 0x40
    NSData *_backup_key;	// 72 = 0x48
    NSString *_deviceID;	// 80 = 0x50
    SOSAccountTrustClassic *_trust;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_user_private_timer;	// 104 = 0x68
    struct SOSDataSourceFactory *_factory;	// 112 = 0x70
    NSData *__password_tmp;	// 120 = 0x78
    CKKeyParameter *_key_transport;	// 128 = 0x80
    SOSKVSCircleStorageTransport *_circle_transport;	// 136 = 0x88
    SOSMessageKVS *_kvs_message_transport;	// 144 = 0x90
    SOSCKCircleStorage *_ck_storage;	// 152 = 0x98
    NSMutableArray *_change_blocks;	// 160 = 0xa0
    NSMutableDictionary *_waitForInitialSync_blocks;	// 168 = 0xa8
    NSData *_accountKeyDerivationParameters;	// 176 = 0xb0
    CDUnknownBlockType _saveBlock;	// 184 = 0xb8
    NSUserDefaults *_settings;	// 192 = 0xc0
    struct __SecKey *_octagonSigningFullKeyRef;	// 200 = 0xc8
    struct __SecKey *_octagonEncryptionFullKeyRef;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_stateMachineQueue;	// 216 = 0xd8
    OctagonStateMachine *_stateMachine;	// 224 = 0xe0
    CKKSPBFileStorage *_accountConfiguration;	// 232 = 0xe8
    CKKSNearFutureScheduler *_performBackups;	// 240 = 0xf0
    CKKSNearFutureScheduler *_performRingUpdates;	// 248 = 0xf8
}

+ (id)urlForSOSAccountSettings;	// IMP=0x00200000001ef769
+ (unsigned int)ghostBustGetRampSettings;	// IMP=0x00100000001ef761
+ (id)accountFromData:(id)arg1 factory:(struct SOSDataSourceFactory *)arg2 error:(id *)arg3;	// IMP=0x00100000001fe890
+ (id)accountFromDER:(const char **)arg1 end:(const char *)arg2 factory:(struct SOSDataSourceFactory *)arg3 error:(id *)arg4;	// IMP=0x00100000001fd8d5
+ (void)performOnQuietAccountQueue:(CDUnknownBlockType)arg1;	// IMP=0x00100000002020fb
- (void).cxx_destruct;	// IMP=0x00200000001eb70c
@property _Bool forceSyncForRecoveryRing; // @synthesize forceSyncForRecoveryRing=_forceSyncForRecoveryRing;
@property(retain) CKKSNearFutureScheduler *performRingUpdates; // @synthesize performRingUpdates=_performRingUpdates;
@property(retain) CKKSNearFutureScheduler *performBackups; // @synthesize performBackups=_performBackups;
@property(retain) CKKSPBFileStorage *accountConfiguration; // @synthesize accountConfiguration=_accountConfiguration;
@property(retain) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) NSObject<OS_dispatch_queue> *stateMachineQueue; // @synthesize stateMachineQueue=_stateMachineQueue;
@property(nonatomic) _Bool sosCompatibilityMode; // @synthesize sosCompatibilityMode=_sosCompatibilityMode;
@property(nonatomic) _Bool accountInScriptBypassMode; // @synthesize accountInScriptBypassMode=_accountInScriptBypassMode;
@property(nonatomic) _Bool consolidateKeyInterest; // @synthesize consolidateKeyInterest=_consolidateKeyInterest;
@property(nonatomic) _Bool sosTestmode; // @synthesize sosTestmode=_sosTestmode;
@property(nonatomic) _Bool accountIsChanging; // @synthesize accountIsChanging=_accountIsChanging;
@property(nonatomic) struct __SecKey *octagonEncryptionFullKeyRef; // @synthesize octagonEncryptionFullKeyRef=_octagonEncryptionFullKeyRef;
@property(nonatomic) struct __SecKey *octagonSigningFullKeyRef; // @synthesize octagonSigningFullKeyRef=_octagonSigningFullKeyRef;
@property(retain, nonatomic) NSUserDefaults *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool notifyBackupOnExit; // @synthesize notifyBackupOnExit=_notifyBackupOnExit;
@property(nonatomic) _Bool notifyViewChangeOnExit; // @synthesize notifyViewChangeOnExit=_notifyViewChangeOnExit;
@property(nonatomic) _Bool notifyCircleChangeOnExit; // @synthesize notifyCircleChangeOnExit=_notifyCircleChangeOnExit;
@property(copy) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(nonatomic) _Bool accountKeyIsTrusted; // @synthesize accountKeyIsTrusted=_accountKeyIsTrusted;
@property(retain, nonatomic) NSData *accountKeyDerivationParameters; // @synthesize accountKeyDerivationParameters=_accountKeyDerivationParameters;
- (id);	// IMP=0x00100000001eb50e
@property(retain, nonatomic) NSMutableDictionary *waitForInitialSync_blocks; // @synthesize waitForInitialSync_blocks=_waitForInitialSync_blocks;
@property(retain, nonatomic) NSMutableArray *change_blocks; // @synthesize change_blocks=_change_blocks;
@property(nonatomic) _Bool need_backup_peers_created_after_backup_key_set; // @synthesize need_backup_peers_created_after_backup_key_set=_need_backup_peers_created_after_backup_key_set;
@property(nonatomic) _Bool key_interests_need_updating; // @synthesize key_interests_need_updating=_key_interests_need_updating;
@property(nonatomic) _Bool engine_peer_state_needs_repair; // @synthesize engine_peer_state_needs_repair=_engine_peer_state_needs_repair;
@property(nonatomic) _Bool circle_rings_retirements_need_attention; // @synthesize circle_rings_retirements_need_attention=_circle_rings_retirements_need_attention;
@property(retain, nonatomic) SOSCKCircleStorage *ck_storage; // @synthesize ck_storage=_ck_storage;
@property(retain, nonatomic) SOSMessageKVS *kvs_message_transport; // @synthesize kvs_message_transport=_kvs_message_transport;
@property(retain, nonatomic) SOSKVSCircleStorageTransport *circle_transport; // @synthesize circle_transport=_circle_transport;
@property(retain, nonatomic) CKKeyParameter *key_transport; // @synthesize key_transport=_key_transport;
@property(nonatomic) int lock_notification_token; // @synthesize lock_notification_token=_lock_notification_token;
@property(nonatomic) _Bool isListeningForSync; // @synthesize isListeningForSync=_isListeningForSync;
@property(retain, nonatomic) NSData *_password_tmp; // @synthesize _password_tmp=__password_tmp;
@property(nonatomic) struct SOSDataSourceFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *user_private_timer; // @synthesize user_private_timer=_user_private_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SOSAccountTrustClassic *trust; // @synthesize trust=_trust;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSData *backup_key; // @synthesize backup_key=_backup_key;
@property(retain, nonatomic) NSDictionary *gestalt; // @synthesize gestalt=_gestalt;
@property(nonatomic) struct __SecKey *peerPublicKey; // @synthesize peerPublicKey=_peerPublicKey;
@property(nonatomic) struct __SecKey *previousAccountKey; // @synthesize previousAccountKey=_previousAccountKey;
@property(nonatomic) struct __SecKey *accountPrivateKey; // @synthesize accountPrivateKey=_accountPrivateKey;
- (struct __SecKey *)accountKey;	// IMP=0x00100000001eb2e6
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x00100000001eb097
- (id)performRingUpdate;	// IMP=0x00100000001eafbb
- (id)performBackup;	// IMP=0x00100000001eaedf
- (void)triggerRingUpdate;	// IMP=0x00100000001eae05
- (void)triggerRingUpdateNow:(CDUnknownBlockType)arg1;	// IMP=0x00100000001eab20
- (void)triggerBackupForPeers:(id)arg1;	// IMP=0x00100000001ea9d1
- (void)addRingUpdateFlag;	// IMP=0x00100000001ea94e
- (void)addBackupFlag;	// IMP=0x00100000001ea8cb
- (void)setupStateMachine;	// IMP=0x00100000001ea3c2
- (void)_onQueueRecordRetiredPeersInCircle;	// IMP=0x00100000001ea24a
- (void)keyStatusFor:(int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ea1d0
- (int)getPublicKeyStatusForKey:(int)arg1 error:(id *)arg2;	// IMP=0x00100000001e9cd6
- (void)setPublicKeyStatus:(int)arg1 forKey:(int)arg2;	// IMP=0x00100000001e9c5b
- (_Bool)_onQueueEnsureInBackupRings:(struct __CFString *)arg1;	// IMP=0x00100000001e998a
- (_Bool)isInCircle:(struct __CFError **)arg1;	// IMP=0x00100000001e9949
- (int)getCircleStatus:(struct __CFError **)arg1;	// IMP=0x00100000001e98a7
- (void)flattenToSaveBlock;	// IMP=0x00100000001e97ea
- (_Bool)sosEvaluateIfNeeded;	// IMP=0x00100000001e9391
- (id)SOSMonitorModeSOSIsActiveDescription;	// IMP=0x00100000001e9366
- (_Bool)SOSMonitorModeSOSIsActive;	// IMP=0x00100000001e930b
- (void)SOSMonitorModeSOSIsActiveWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e92c1
- (void)SOSMonitorModeEnableSOS;	// IMP=0x00100000001e9211
- (void)SOSMonitorModeDisableSOS;	// IMP=0x00100000001e9164
- (void)sosEnableValidityCheck;	// IMP=0x00100000001e9050
- (void)removeV0Peers:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e8fc2
- (void)setWatchdogParmeters:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e8e4c
- (void)getWatchdogParameters:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e8cd2
- (void)rpcTriggerRingUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e8c8a
- (void)rpcTriggerBackup:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e8b95
- (void)rpcTriggerSync:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e899f
- (void)importInitialSyncCredentials:(id)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e88fa
- (void)initialSyncCredentials:(unsigned int)arg1 altDSID:(id)arg2 flowID:(id)arg3 deviceSessionID:(id)arg4 canSendMetrics:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e82cc
- (void)joinCircleWithBlob:(id)arg1 altDSID:(id)arg2 flowID:(id)arg3 deviceSessionID:(id)arg4 canSendMetrics:(_Bool)arg5 version:(int)arg6 complete:(CDUnknownBlockType)arg7;	// IMP=0x00100000001e7d80
- (void)circleJoiningBlob:(id)arg1 flowID:(id)arg2 deviceSessionID:(id)arg3 canSendMetrics:(_Bool)arg4 applicant:(id)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e7a50
- (void)iCloudIdentityStatus_internal:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e7a3e
- (void)accountStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e7a2c
- (void)iCloudIdentityStatus:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e7a1a
- (_Bool)ghostBustCheckDate;	// IMP=0x00100000001e7a12
- (void)ghostBustInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e7a00
- (void)ghostBustTriggerTimed:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e79ee
- (void)ghostBustPeriodic:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e79dc
- (void)ghostBust:(unsigned int)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e79ca
- (void)ghostBustSchedule;	// IMP=0x00100000001e79c4
- (void)ghostBustFollowup;	// IMP=0x00100000001e79be
- (id)ghostBustGetDate;	// IMP=0x00100000001e79b6
- (void)circleHash:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e78d2
- (void)myPeerInfo:(id)arg1 flowID:(id)arg2 deviceSessionID:(id)arg3 canSendMetrics:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00100000001e768f
- (void)stashAccountCredential:(id)arg1 altDSID:(id)arg2 flowID:(id)arg3 deviceSessionID:(id)arg4 canSendMetrics:(_Bool)arg5 complete:(CDUnknownBlockType)arg6;	// IMP=0x00100000001e749b
- (void)validatedStashedAccountCredential:(id)arg1 flowID:(id)arg2 deviceSessionID:(id)arg3 canSendMetrics:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;	// IMP=0x00100000001e72e0
- (_Bool)syncWaitAndFlush:(id)arg1 flowID:(id)arg2 deviceSessionID:(id)arg3 canSendMetrics:(_Bool)arg4 error:(struct __CFError **)arg5;	// IMP=0x00100000001e6e28
- (void)assertStashedAccountCredential:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e6d70
- (void)stashedCredentialPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e6cb8
- (void)rateLimitingPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e6c45
- (void)setBypass:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e6b8e
- (void)kvsPerformanceCounters:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e6aea
- (void)userPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e6a32
- (_Bool)getAccountInBypassMode;	// IMP=0x00100000001e6a20
- (void)setAccountInBypassMode:(_Bool)arg1;	// IMP=0x00100000001e6a0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e6749
- (void)startStateMachine;	// IMP=0x00100000001e670c
- (id)initWithGestalt:(struct __CFDictionary *)arg1 factory:(struct SOSDataSourceFactory *)arg2;	// IMP=0x00100000001e6431
- (void)ensureOctagonPeerKeys;	// IMP=0x00100000001e6380
- (_Bool)ensureFactoryCircles;	// IMP=0x00100000001e6020
@property(readonly, nonatomic) NSString *peerID;
@property(readonly, nonatomic) struct __OpaqueSOSFullPeerInfo *fullPeerInfo;
@property(readonly, nonatomic) struct __OpaqueSOSPeerInfo *peerInfo;
@property(readonly, nonatomic) _Bool hasPeerInfo;
- (void)setAccountKey:(struct __SecKey *)arg1;	// IMP=0x00100000001e5e47
- (void)dealloc;	// IMP=0x00100000001e5cdf
- (id)encodedData:(id *)arg1;	// IMP=0x00100000001fd7a1
- (void)performTransaction:(_Bool)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201fe1
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000201fca
- (void)performTransaction_Locked:(_Bool)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0010000000201f38
- (void)performTransaction_Locked:(CDUnknownBlockType)arg1;	// IMP=0x0010000000201f21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

