//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CopresenceCore/CPConversationMediaControllerXPCHost-Protocol.h>

@class CPAuthorizationRequestOverrides, NSDictionary, NSSet, NSString, NSUUID, TUConversationActivity, TUConversationActivityCreateSessionRequest, TUConversationMember;

@protocol CPConversationManagerXPCHost <CPConversationMediaControllerXPCHost>
- (void)fetchEndpointWith:(NSString *)arg1 activitySessionUUID:(NSUUID *)arg2 activity:(TUConversationActivity *)arg3 completion:(void (^)(NSXPCListenerEndpoint *))arg4;
- (void)unregisterIdentifierForCustomEndpoint:(NSString *)arg1;
- (void)registerIdentifierForCustomEndpoint:(NSString *)arg1;
- (void)includeMetricsReport:(NSDictionary *)arg1 onConversationWithUUID:(NSUUID *)arg2;
- (void)requestNearbyConversationsWithReply:(void (^)(NSDictionary *))arg1;
- (void)kickMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (void)setDownlinkMuted:(_Bool)arg1 forRemoteParticipantsInConversationWithUUID:(NSUUID *)arg2;
- (void)buzzMember:(TUConversationMember *)arg1 conversationUUID:(NSUUID *)arg2;
- (void)createActivitySessionWith:(TUConversationActivityCreateSessionRequest *)arg1 onConversationWithUUID:(NSUUID *)arg2 completion:(void (^)(_Bool))arg3;
- (void)setActivityAuthorization:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)prepareForGroupActivityWithOverrides:(CPAuthorizationRequestOverrides *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)addRemoteMembers:(NSSet *)arg1 toConversationWithUUID:(NSUUID *)arg2;
- (void)requestConversationContainersByGroupUUIDWithReply:(void (^)(NSDictionary *))arg1;
@end

