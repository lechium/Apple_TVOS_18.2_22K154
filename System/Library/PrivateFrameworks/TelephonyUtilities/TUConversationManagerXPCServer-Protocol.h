//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/TUConversationMediaControllerXPCServer-Protocol.h>
#import <TelephonyUtilities/TUConversationMessagesGroupProviderXPCServer-Protocol.h>

@class NSDate, NSSet, NSString, NSURL, NSUUID, TUConversationActivity, TUConversationActivitySession, TUConversationHandoffContext, TUConversationLink, TUConversationMember, TUConversationParticipant, TUJoinConversationRequest, TUScreenShareAttributes, TUScreenSharingRequest;
@protocol TUConversationManagerXPCClient;

@protocol TUConversationManagerXPCServer <TUConversationMediaControllerXPCServer, TUConversationMessagesGroupProviderXPCServer>
- (void)unregisterClient:(id <TUConversationManagerXPCClient>)arg1;
- (void)registerClient:(id <TUConversationManagerXPCClient>)arg1;
- (oneway void)registerMessagesGroupUUIDForConversationUUID:(NSUUID *)arg1;
- (oneway void)updateLocalParticipantToAVLessWithPresentationMode:(unsigned long long)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)setLocalParticipantAudioVideoMode:(unsigned long long)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)fetchUpcomingNoticeWithCompletionHandler:(void (^)(TUConversationNotice *, NSError *))arg1;
- (oneway void)removeConversationNoticeWithUUID:(NSUUID *)arg1;
- (oneway void)activateConversationNoticeWithActionURL:(NSURL *)arg1 bundleIdentifier:(id)arg2;
- (oneway void)setScreenEnabled:(_Bool)arg1 withScreenShareAttributes:(TUScreenShareAttributes *)arg2 forConversationWithUUID:(NSUUID *)arg3;
- (oneway void)cancelOrDenyScreenShareRequest:(TUScreenSharingRequest *)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)requestParticipantToShareScreen:(TUConversationParticipant *)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)addScreenSharingType:(unsigned long long)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)setIgnoreLetMeInRequests:(_Bool)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)rejectPendingMember:(TUConversationMember *)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)approvePendingMember:(TUConversationMember *)arg1 forConversationUUID:(NSUUID *)arg2;
- (oneway void)linkSyncStateIncludeLinks:(_Bool)arg1 WithCompletion:(void (^)(NSString *))arg2;
- (oneway void)scheduleConversationLinkCheckInInitial:(_Bool)arg1;
- (oneway void)setLinkName:(NSString *)arg1 forConversationLink:(TUConversationLink *)arg2 completionHandler:(void (^)(TUConversationLink *, NSError *))arg3;
- (oneway void)activateLink:(TUConversationLink *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)getInactiveLinkWithCompletionHandler:(void (^)(TUConversationLink *, NSError *))arg1;
- (oneway void)checkLinkValidity:(TUConversationLink *)arg1 completionHandler:(void (^)(_Bool, NSDate *, NSError *))arg2;
- (oneway void)renewLink:(TUConversationLink *)arg1 expirationDate:(NSDate *)arg2 reason:(unsigned long long)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (oneway void)invalidateLink:(TUConversationLink *)arg1 deleteReason:(long long)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (oneway void)addInvitedMemberHandles:(NSSet *)arg1 toConversationLink:(TUConversationLink *)arg2 completionHandler:(void (^)(TUConversationLink *, NSError *))arg3;
- (oneway void)generateLinkWithInvitedMemberHandles:(NSSet *)arg1 linkLifetimeScope:(long long)arg2 completionHandler:(void (^)(TUConversationLink *, NSError *))arg3;
- (oneway void)generateLinkForConversationUUID:(NSUUID *)arg1 completionHandler:(void (^)(TUConversationLink *, NSError *))arg2;
- (oneway void)getActiveLinksWithCreatedOnly:(_Bool)arg1 completionHandler:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)getLatestRemoteScreenShareAttributesWithCompletionHandler:(void (^)(id <TUScreenShareAttributes>))arg1;
- (oneway void)getScreenSharingAvailableWithCompletionHandler:(void (^)(_Bool))arg1;
- (oneway void)getSharePlayAvailableWithCompletionHandler:(void (^)(_Bool))arg1;
- (oneway void)refreshActiveConversations;
- (oneway void)updateMessagesGroupPhotoOnConversationWithUUID:(NSUUID *)arg1;
- (oneway void)setGridDisplayMode:(unsigned long long)arg1 forConversationWithUUID:(NSUUID *)arg2;
- (oneway void)updateMessagesGroupName:(NSString *)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (oneway void)kickMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (oneway void)buzzMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (oneway void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversationWithUUID:(NSUUID *)arg2;
- (oneway void)setUsingAirplay:(_Bool)arg1 onActivitySession:(TUConversationActivitySession *)arg2 onConversationWithUUID:(NSUUID *)arg3;
- (oneway void)launchApplicationForActivitySessionUUID:(NSUUID *)arg1 authorizedExternally:(_Bool)arg2 forceBackground:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (oneway void)leaveConversationWithUUID:(NSUUID *)arg1;
- (oneway void)joinConversationWithRequest:(TUJoinConversationRequest *)arg1;
- (oneway void)setAutoSharePlayEnabled:(_Bool)arg1;
- (oneway void)setActivityAuthorization:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (oneway void)createActivitySession:(TUConversationActivity *)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (oneway void)presentDismissalAlertForActivitySessionWithUUID:(NSUUID *)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (oneway void)endActivitySession:(TUConversationActivitySession *)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (oneway void)leaveActivitySession:(TUConversationActivitySession *)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (oneway void)setSharePlayHandedOff:(_Bool)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (oneway void)prepareConversationWithUUID:(NSUUID *)arg1 withHandoffContext:(TUConversationHandoffContext *)arg2;
- (oneway void)addRemoteMembers:(NSSet *)arg1 otherInvitedHandles:(NSSet *)arg2 toConversationWithUUID:(NSUUID *)arg3;
- (oneway void)activatedConversationLinks:(void (^)(NSArray *))arg1;
- (oneway void)activityAuthorizedBundleIdentifierState:(void (^)(NSDictionary *))arg1;
- (oneway void)pseudonymsByCallUUID:(void (^)(NSDictionary *))arg1;
- (oneway void)incomingPendingConversationsByGroupUUID:(void (^)(NSDictionary *))arg1;
- (oneway void)conversationsByGroupUUID:(void (^)(NSDictionary *))arg1;
@end

