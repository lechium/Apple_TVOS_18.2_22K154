//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDService;
@protocol IMDaemonListenerAVProtocol, IMDaemonListenerAccountsProtocol, IMDaemonListenerAnyProtocol, IMDaemonListenerChatCountsProtocol, IMDaemonListenerChatDatabaseProtocol, IMDaemonListenerChatProtocol, IMDaemonListenerCloudSyncProtocol, IMDaemonListenerCollaborationProtocol, IMDaemonListenerFileProviderProtocol, IMDaemonListenerFileTransfersProtocol, IMDaemonListenerKeyTransparencyProtocol, IMDaemonListenerNotificationsProtocol, IMDaemonListenerServiceProtocol, IMDaemonListenerSyncedSettingsProtocol;

@protocol IMDBroadcasterProviding <NSObject>
@property(readonly, nonatomic) id <IMDaemonListenerCollaborationProtocol> broadcasterForCollaborationListeners;
@property(readonly, nonatomic) id <IMDaemonListenerSyncedSettingsProtocol> broadcasterForSyncedSettingsListeners;
@property(readonly, nonatomic) id <IMDaemonListenerAVProtocol> broadcasterForACConferenceListeners;
@property(readonly, nonatomic) id <IMDaemonListenerAVProtocol> broadcasterForAVConferenceListeners;
@property(readonly, nonatomic) id <IMDaemonListenerFileProviderProtocol> broadcasterForFileProviderListeners;
@property(readonly, nonatomic) id <IMDaemonListenerChatCountsProtocol> broadcasterForChatCountsListeners;
@property(readonly, nonatomic) id <IMDaemonListenerChatDatabaseProtocol> broadcasterForChatDatabaseListeners;
@property(readonly, nonatomic) id <IMDaemonListenerChatProtocol> broadcasterForBlackholeChatListeners;
@property(readonly, nonatomic) id <IMDaemonListenerChatProtocol> broadcasterForChatListeners;
@property(readonly, nonatomic) id <IMDaemonListenerKeyTransparencyProtocol> broadcasterForKeyTransparencyListeners;
@property(readonly, nonatomic) id <IMDaemonListenerFileTransfersProtocol> broadcasterForFileTransferListeners;
@property(readonly, nonatomic) id <IMDaemonListenerCloudSyncProtocol> broadcasterForCloudSyncListeners;
@property(readonly, nonatomic) id <IMDaemonListenerAccountsProtocol> broadcasterForAccountListeners;
@property(readonly, nonatomic) id <IMDaemonListenerAnyProtocol> broadcasterForAllListeners;
- (id <IMDaemonListenerCollaborationProtocol>)broadcasterForCollaborationListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerAVProtocol>)broadcasterForVCConferenceListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerAVProtocol>)broadcasterForACConferenceListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerAVProtocol>)broadcasterForAVConferenceListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerNotificationsProtocol>)broadcasterForNotificationListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerChatProtocol>)broadcasterForChatListenersUsingBlackholeRegistry:(_Bool)arg1;
- (id <IMDaemonListenerChatProtocol>)broadcasterForBlackholeChatListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerChatProtocol>)broadcasterForSentMessageListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerChatProtocol>)broadcasterForChatListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerServiceProtocol>)broadcasterForListenersSupportingService:(IMDService *)arg1;
@end

