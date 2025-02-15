//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDClientManager, CSDConversationManager, NSString;
@protocol OS_dispatch_queue, TUFeatureFlags;

@interface CSDConversationManagerXPCServer : NSObject
{
    int _clientsShouldConnectToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDConversationManager *_conversationManager;	// 24 = 0x18
    CSDClientManager *_clientManager;	// 32 = 0x20
    id <TUFeatureFlags> _featureFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000186ef4
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(readonly, nonatomic) CSDClientManager *clientManager; // @synthesize clientManager=_clientManager;
@property(readonly, nonatomic) CSDConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)conversationManager:(id)arg1 screenSharingAvailableChanged:(_Bool)arg2;	// IMP=0x0010000000186df5
- (void)conversationManager:(id)arg1 sharePlayAvailableChanged:(_Bool)arg2;	// IMP=0x0010000000186d30
- (void)conversationManager:(id)arg1 conversationScreenSharingChanged:(id)arg2 forParticipant:(id)arg3;	// IMP=0x0010000000186c32
- (void)conversationManager:(id)arg1 trackedPendingMember:(id)arg2 forConversationLink:(id)arg3;	// IMP=0x0010000000186b06
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;	// IMP=0x0010000000186b00
- (void)conversationManager:(id)arg1 conversation:(id)arg2 appLaunchState:(unsigned long long)arg3 forActivitySession:(id)arg4;	// IMP=0x00100000001869e4
- (void)conversationManager:(id)arg1 conversation:(id)arg2 receivedActivitySessionEvent:(id)arg3;	// IMP=0x00100000001868b8
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 addedNotice:(id)arg4;	// IMP=0x0010000000186756
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participantDidStopReacting:(id)arg3;	// IMP=0x00100000001865e0
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 didReact:(id)arg4;	// IMP=0x001000000018642c
- (void)notifyClientsOfMediaPrioritiesChangedForConversation:(id)arg1;	// IMP=0x00100000001862e6
- (void)conversationManager:(id)arg1 conversation:(id)arg2 mediaPrioritiesDidChangeForParticipant:(id)arg3;	// IMP=0x00100000001862d1
- (void)notifyClientsOfConversationsByGroupUUIDUpdate;	// IMP=0x0010000000186178
- (void)conversationManager:(id)arg1 removedConversationWithUUID:(id)arg2;	// IMP=0x0010000000186166
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x0010000000186154
- (void)conversationManager:(id)arg1 activatedConversationLinksChanged:(id)arg2;	// IMP=0x001000000018602a
- (void)conversationManager:(id)arg1 updateIncomingPendingConversationsByGroupUUID:(id)arg2;	// IMP=0x0010000000185f00
- (void)conversationManager:(id)arg1 conversationUpdateMessagesGroupPhoto:(id)arg2;	// IMP=0x0010000000185dd6
- (void)conversationManager:(id)arg1 conversation:(id)arg2 buzzedMember:(id)arg3;	// IMP=0x0010000000185c7e
- (void)conversationManager:(id)arg1 conversation:(id)arg2 addedMembersLocally:(id)arg3;	// IMP=0x0010000000185b26
- (oneway void)setSharePlayHandedOff:(_Bool)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x0010000000185a8a
- (oneway void)prepareConversationWithUUID:(id)arg1 withHandoffContext:(id)arg2;	// IMP=0x00100000001859d3
- (oneway void)setScreenEnabled:(_Bool)arg1 withScreenShareAttributes:(id)arg2 forConversationWithUUID:(id)arg3;	// IMP=0x001000000018591b
- (oneway void)cancelOrDenyScreenShareRequest:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000185890
- (oneway void)requestParticipantToShareScreen:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x00100000001857d9
- (oneway void)updateMessagesGroupPhotoOnConversationWithUUID:(id)arg1;	// IMP=0x0010000000185741
- (oneway void)updateMessagesGroupName:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000018568a
- (oneway void)getMessagesGroupDetailsForConversationUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001851a9
- (oneway void)setSupportsMessagesGroupProviding:(_Bool)arg1;	// IMP=0x0010000000185133
- (oneway void)registerMessagesGroupUUIDForConversationUUID:(id)arg1;	// IMP=0x00100000001850ca
- (oneway void)updateLocalParticipantToAVLessWithPresentationMode:(unsigned long long)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000185053
- (oneway void)setLocalParticipantAudioVideoMode:(unsigned long long)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000184fdc
- (void)unregisterClient:(id)arg1;	// IMP=0x0010000000184ed3
- (void)registerClient:(id)arg1;	// IMP=0x0010000000184dca
- (oneway void)setGridDisplayMode:(unsigned long long)arg1 forConversationWithUUID:(id)arg2;	// IMP=0x0010000000184d2c
- (oneway void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;	// IMP=0x0010000000184c75
- (oneway void)setIgnoreLetMeInRequests:(_Bool)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000184bd9
- (oneway void)rejectPendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000184b22
- (oneway void)approvePendingMember:(id)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000184a6b
- (oneway void)linkSyncStateIncludeLinks:(_Bool)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001849cf
- (oneway void)scheduleConversationLinkCheckInInitial:(_Bool)arg1;	// IMP=0x001000000018494e
- (oneway void)setLinkName:(id)arg1 forConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000018487f
- (oneway void)activateLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001847c8
- (oneway void)getInactiveLinkWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000184730
- (oneway void)checkLinkValidity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000184679
- (oneway void)renewLink:(id)arg1 expirationDate:(id)arg2 reason:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001845dc
- (oneway void)invalidateLink:(id)arg1 deleteReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000184522
- (oneway void)fetchUpcomingNoticeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000018448a
- (oneway void)getScreenSharingAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001843ec
- (oneway void)getSharePlayAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000018434e
- (oneway void)refreshActiveConversations;	// IMP=0x00100000001842da
- (oneway void)removeConversationNoticeWithUUID:(id)arg1;	// IMP=0x0010000000184242
- (oneway void)activateConversationNoticeWithActionURL:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000018418b
- (oneway void)addInvitedMemberHandles:(id)arg1 toConversationLink:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001840bc
- (oneway void)generateLinkWithInvitedMemberHandles:(id)arg1 linkLifetimeScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000184002
- (oneway void)generateLinkForConversationUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000183f4b
- (oneway void)getActiveLinksWithCreatedOnly:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000183eaf
- (oneway void)getLatestRemoteScreenShareAttributesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000183e17
- (oneway void)addScreenSharingType:(unsigned long long)arg1 forConversationUUID:(id)arg2;	// IMP=0x0010000000183d79
- (oneway void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversationWithUUID:(id)arg2;	// IMP=0x0010000000183cdd
- (oneway void)kickMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x0010000000183c26
- (oneway void)buzzMember:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x0010000000183b6f
- (oneway void)leaveConversationWithUUID:(id)arg1;	// IMP=0x0010000000183ad7
- (oneway void)joinConversationWithRequest:(id)arg1;	// IMP=0x0010000000183a3f
- (oneway void)launchApplicationForActivitySessionUUID:(id)arg1 authorizedExternally:(_Bool)arg2 forceBackground:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000183875
- (oneway void)setAutoSharePlayEnabled:(_Bool)arg1;	// IMP=0x00100000001837f4
- (oneway void)setActivityAuthorization:(_Bool)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0010000000183758
- (oneway void)presentDismissalAlertForActivitySessionWithUUID:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000001836a1
- (oneway void)setUsingAirplay:(_Bool)arg1 onActivitySession:(id)arg2 onConversationWithUUID:(id)arg3;	// IMP=0x0010000000183524
- (oneway void)endActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000018346d
- (oneway void)leaveActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x00100000001833b6
- (oneway void)createActivitySession:(id)arg1 onConversationWithUUID:(id)arg2;	// IMP=0x001000000018313f
- (oneway void)addRemoteMembers:(id)arg1 otherInvitedHandles:(id)arg2 toConversationWithUUID:(id)arg3;	// IMP=0x0010000000183070
- (oneway void)activatedConversationLinks:(CDUnknownBlockType)arg1;	// IMP=0x0010000000182f5d
- (oneway void)activityAuthorizedBundleIdentifierState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000182eae
- (oneway void)pseudonymsByCallUUID:(CDUnknownBlockType)arg1;	// IMP=0x0010000000182dff
- (oneway void)incomingPendingConversationsByGroupUUID:(CDUnknownBlockType)arg1;	// IMP=0x0010000000182d50
- (oneway void)conversationsByGroupUUID:(CDUnknownBlockType)arg1;	// IMP=0x0010000000182c7a
- (id)_filter:(id)arg1 withClient:(id)arg2;	// IMP=0x0010000000182c64
- (id);	// IMP=0x0010000000182b95
- (_Bool)_shouldSend:(id)arg1;	// IMP=0x0010000000182a94
- (void)notifyClientsToConnectIfNecessary;	// IMP=0x00100000001829c5
- (void)invalidate;	// IMP=0x0010000000182913
- (void)dealloc;	// IMP=0x00100000001828da
- (id)initWithConversationManager:(id)arg1 featureFlags:(id)arg2;	// IMP=0x00100000001821eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

