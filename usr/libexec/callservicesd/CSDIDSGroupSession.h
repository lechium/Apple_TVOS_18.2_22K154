//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSMutableDictionary, NSSet, NSString;
@protocol CSDConversationServerBag, CSDIDSGroupSessionDelegate, CSDIDSGroupSessionProvider, TUFeatureFlags;

@interface CSDIDSGroupSession
{
    _Bool _isUnderlyingLinksConnected;	// 8 = 0x8
    _Bool _joined;	// 9 = 0x9
    unsigned short _localParticipantType;	// 10 = 0xa
    id <CSDIDSGroupSessionDelegate> _delegate;	// 16 = 0x10
    unsigned long long _localParticipantIdentifier;	// 24 = 0x18
    id <TUFeatureFlags> _featureFlags;	// 32 = 0x20
    id <CSDIDSGroupSessionProvider> _sessionProvider;	// 40 = 0x28
    unsigned long long _retryCount;	// 48 = 0x30
    unsigned long long _lightweightRetryCount;	// 56 = 0x38
    id <CSDConversationServerBag> _serverBag;	// 64 = 0x40
    NSMutableDictionary *_preferences;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001606cd
@property(readonly, nonatomic) NSMutableDictionary *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) id <CSDConversationServerBag> serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) unsigned long long lightweightRetryCount; // @synthesize lightweightRetryCount=_lightweightRetryCount;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) id <CSDIDSGroupSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) unsigned short localParticipantType; // @synthesize localParticipantType=_localParticipantType;
@property(nonatomic) unsigned long long localParticipantIdentifier; // @synthesize localParticipantIdentifier=_localParticipantIdentifier;
@property(nonatomic, getter=isJoined) _Bool joined; // @synthesize joined=_joined;
@property(nonatomic) __weak id <CSDIDSGroupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isUnderlyingLinksConnected; // @synthesize isUnderlyingLinksConnected=_isUnderlyingLinksConnected;
- (void)sessionProvider:(id)arg1 didReceiveUnderlyingLinksStatus:(_Bool)arg2;	// IMP=0x001000000016057c
- (MISSING_TYPE *)sessionProvider:didReceiveServerErrorCode: /* Error: Ran out of types for this method. */;	// IMP=0x001000000016052d
- (void)sessionProvider:(id)arg1 didReceiveData:(id)arg2 dataType:(unsigned short)arg3 forParticipant:(id)arg4;	// IMP=0x001000000016049e
- (void)sessionProvider:(id)arg1 didReceiveDataBlob:(id)arg2 forParticipant:(id)arg3;	// IMP=0x0010000000160410
- (void)sessionProviderDidReceiveKeyUpdate:(id)arg1;	// IMP=0x00100000001603c4
- (void)sessionProvider:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;	// IMP=0x0010000000160359
- (void)sessionProvider:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;	// IMP=0x00100000001602ee
- (void)sessionProvider:(id)arg1 didReceiveKickedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(_Bool)arg5;	// IMP=0x0010000000160260
- (void)sessionProvider:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x00100000001601f5
- (void)sessionProvider:(id)arg1 didReceiveLeftParticipantID:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00100000001600cf
- (void)sessionProvider:(id)arg1 didReceiveJoinedParticipantID:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x001000000015ffa9
- (void)sessionProvider:(id)arg1 didReceiveActiveLightweightParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x001000000015fa7d
- (void)sessionProvider:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x001000000015f551
- (void)sessionProviderDidTerminate:(id)arg1;	// IMP=0x001000000015f46c
- (void)sessionProvider:(id)arg1 didReceiveLocalParticipantType:(unsigned short)arg2 error:(id)arg3;	// IMP=0x001000000015f333
- (void)sessionProvider:(id)arg1 didLeaveGroupWithError:(id)arg2;	// IMP=0x001000000015f219
- (void)sessionProvider:(id)arg1 didJoinGroupWithParticipantIdentifiers:(id)arg2 localParticipantIdentifier:(unsigned long long)arg3 error:(id)arg4;	// IMP=0x001000000015ef60
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x001000000015ee34
- (unsigned long long)callTypeForJoinContext:(id)arg1;	// IMP=0x001000000015ee13
- (id)idsDestinationForActiveParticipant:(id)arg1;	// IMP=0x001000000015ed13
- (id)_updateParticipantDestinationIDForParticipant:(id)arg1 members:(id)arg2;	// IMP=0x001000000015e848
- (void)setScreening:(_Bool)arg1;	// IMP=0x001000000015e75d
- (void)setParticipantType:(unsigned short)arg1 forParticipant:(id)arg2 members:(id)arg3 isLocalParticipant:(_Bool)arg4;	// IMP=0x001000000015e5d9
- (void)addRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x001000000015e4c5
@property(readonly, nonatomic) NSSet *requiredLackOfCapabilities;
@property(readonly, nonatomic) NSSet *requiredCapabilities;
- (void)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000015e305
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x001000000015e1fe
- (void)addAliasesToConversationContainer:(id)arg1 withSalt:(id)arg2;	// IMP=0x001000000015e0ea
- (void)requestEncryptionKeyForParticipants:(id)arg1 topic:(id)arg2;	// IMP=0x001000000015dfd6
- (void)requestDataCryptorForTopic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015decd
- (void)allowMember:(id)arg1;	// IMP=0x001000000015dda1
- (void)kickMember:(id)arg1;	// IMP=0x001000000015dc75
- (void)reconnect;	// IMP=0x001000000015dbad
- (void)restart;	// IMP=0x001000000015dad6
- (void)registerPluginWithOptions:(id)arg1;	// IMP=0x001000000015d9ea
- (void)leaveGroupSessionWithContext:(id)arg1;	// IMP=0x001000000015d820
- (void)requestActiveParticipants;	// IMP=0x001000000015d758
- (void)updateLocalParticipantInfo:(id)arg1;	// IMP=0x001000000015d6c4
- (void)sendLocalParticipant:(id)arg1;	// IMP=0x001000000015d558
- (void)addMembers:(id)arg1 toExistingMembers:(id)arg2 participantDestinationIDs:(id)arg3 webDestinationIDs:(id)arg4 activeParticipants:(id)arg5 activitySessions:(id)arg6 link:(id)arg7 otherInvitedHandles:(id)arg8 report:(id)arg9 invitationPreferences:(id)arg10;	// IMP=0x001000000015c870
- (void)addMembers:(id)arg1 toExistingMembers:(id)arg2 activeParticipants:(id)arg3 activitySessions:(id)arg4 link:(id)arg5 otherInvitedHandles:(id)arg6 report:(id)arg7 invitationPreferences:(id)arg8 requiredCapabilities:(id)arg9 messagesGroupUUID:(id)arg10 messagesGroupName:(id)arg11 addingFromLetMeIn:(_Bool)arg12 triggeredLocally:(_Bool)arg13 highlightIdentifier:(id)arg14 stagedActivitySession:(id)arg15 avMode:(unsigned long long)arg16;	// IMP=0x001000000015aee8
- (void)removeMembers:(id)arg1 fromExistingMembers:(id)arg2 activeParticipants:(id)arg3 triggeredLocally:(_Bool)arg4;	// IMP=0x001000000015a901
- (void)joinUsingContext:(id)arg1 localParticipantAVCData:(id)arg2 members:(id)arg3 otherInvitedHandles:(id)arg4 participantDestinationIDs:(id)arg5 link:(id)arg6 report:(id)arg7 stagedActivitySession:(id)arg8 personaHandshakeBlob:(id)arg9 activitySession:(id)arg10;	// IMP=0x0010000000159837
@property(readonly, copy, nonatomic) NSArray *participantDestinationIDs;
@property(readonly, copy, nonatomic) NSString *idsDestination;
- (id)initWithGroupSessionProvider:(id)arg1;	// IMP=0x0010000000159733
- (id)initWithGroupSessionProvider:(id)arg1 featureFlags:(id)arg2;	// IMP=0x00100000001595a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

