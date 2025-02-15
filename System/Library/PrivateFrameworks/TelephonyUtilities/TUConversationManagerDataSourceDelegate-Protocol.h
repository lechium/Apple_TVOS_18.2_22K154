//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSSet, NSUUID, TUConversation, TUConversationActivityEvent, TUConversationActivitySession, TUConversationLink, TUConversationMember, TUConversationNotice, TUConversationParticipant;
@protocol TUConversationManagerDataSource, TUScreenShareAttributes;

@protocol TUConversationManagerDataSourceDelegate <NSObject>
- (void)screenSharingAvailableChanged:(_Bool)arg1;
- (void)sharePlayAvailableChanged:(_Bool)arg1;
- (void)conversation:(TUConversation *)arg1 didChangeSceneAssociationForActivitySession:(TUConversationActivitySession *)arg2;
- (void)conversation:(TUConversation *)arg1 didChangeStateForActivitySession:(TUConversationActivitySession *)arg2;
- (void)remoteScreenShareEndedWithReason:(NSError *)arg1;
- (void)remoteScreenShareAttributesChanged:(id <TUScreenShareAttributes>)arg1 isLocallySharing:(_Bool)arg2;
- (void)conversation:(TUConversation *)arg1 screenSharingChangedForParticipant:(TUConversationParticipant *)arg2;
- (void)receivedTrackedPendingMember:(TUConversationMember *)arg1 forConversationLink:(TUConversationLink *)arg2;
- (void)conversationManagerDataSource:(id <TUConversationManagerDataSource>)arg1 conversation:(TUConversation *)arg2 appLaunchState:(unsigned long long)arg3 forActivitySession:(TUConversationActivitySession *)arg4;
- (void)conversationUpdatedMessagesGroupPhoto:(TUConversation *)arg1;
- (void)conversation:(TUConversation *)arg1 buzzedMember:(TUConversationMember *)arg2;
- (void)conversation:(TUConversation *)arg1 addedMembersLocally:(NSSet *)arg2;
- (void)conversation:(TUConversation *)arg1 participant:(TUConversationParticipant *)arg2 addedNotice:(TUConversationNotice *)arg3;
- (void)conversationManagerDataSource:(id <TUConversationManagerDataSource>)arg1 messagesGroupDetailsForMessagesGroupId:(NSUUID *)arg2 completionHandler:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)conversationManagerDataSource:(id <TUConversationManagerDataSource>)arg1 didChangeActivatedConversationLinks:(NSArray *)arg2;
- (void)activityAuthorizationsChangedForDataSource:(id <TUConversationManagerDataSource>)arg1 oldActivityAuthorizedBundleIdentifiers:(NSDictionary *)arg2;
- (void)serverDisconnectedForDataSource:(id <TUConversationManagerDataSource>)arg1 oldConversationsByGroupUUID:(NSDictionary *)arg2;
- (void)conversation:(TUConversation *)arg1 receivedActivitySessionEvent:(TUConversationActivityEvent *)arg2;
- (void)conversationsChangedForDataSource:(id <TUConversationManagerDataSource>)arg1 updatedIncomingPendingConversationsByGroupUUID:(NSDictionary *)arg2;
- (void)conversationsChangedForDataSource:(id <TUConversationManagerDataSource>)arg1 conversationsByGroupUUID:(NSDictionary *)arg2 oldConversationsByGroupUUID:(NSDictionary *)arg3;
@end

