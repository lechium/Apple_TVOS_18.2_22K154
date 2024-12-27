//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol IMDaemonListenerAVProtocol, IMDaemonListenerAccountsProtocol, IMDaemonListenerAnyProtocol, IMDaemonListenerChatCountsProtocol, IMDaemonListenerChatDatabaseProtocol, IMDaemonListenerChatProtocol, IMDaemonListenerCloudSyncProtocol, IMDaemonListenerCollaborationProtocol, IMDaemonListenerFileProviderProtocol, IMDaemonListenerFileTransfersProtocol, IMDaemonListenerKeyTransparencyProtocol, IMDaemonListenerSyncedSettingsProtocol;

@interface IMDClientConnectionManager : NSObject
{
    MISSING_TYPE *connectionListeners;	// 8 = 0x8
    MISSING_TYPE *broadcastingQueue;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000025fbe0
- (id)init;	// IMP=0x000000000025fb80
@property(nonatomic, readonly) id <IMDaemonListenerCollaborationProtocol> broadcasterForCollaborationListeners;
- (id)broadcasterForCollaborationListenersSupportingService:(id)arg1;	// IMP=0x0000000000263680
@property(nonatomic, readonly) id <IMDaemonListenerSyncedSettingsProtocol> broadcasterForSyncedSettingsListeners;
@property(nonatomic, readonly) id <IMDaemonListenerAVProtocol> broadcasterForACConferenceListeners;
@property(nonatomic, readonly) id <IMDaemonListenerAVProtocol> broadcasterForAVConferenceListeners;
- (id)broadcasterForVCConferenceListenersSupportingService:(id)arg1;	// IMP=0x0000000000262d90
- (id)broadcasterForACConferenceListenersSupportingService:(id)arg1;	// IMP=0x0000000000262b30
- (id)broadcasterForAVConferenceListenersSupportingService:(id)arg1;	// IMP=0x00000000002628d0
- (id)broadcasterForNotificationListenersSupportingService:(id)arg1;	// IMP=0x0000000000262670
@property(nonatomic, readonly) id <IMDaemonListenerFileProviderProtocol> broadcasterForFileProviderListeners;
@property(nonatomic, readonly) id <IMDaemonListenerChatCountsProtocol> broadcasterForChatCountsListeners;
@property(nonatomic, readonly) id <IMDaemonListenerChatDatabaseProtocol> broadcasterForChatDatabaseListeners;
- (id)broadcasterForChatListenersUsingBlackholeRegistry:(_Bool)arg1;	// IMP=0x0000000000261cd0
- (id)broadcasterForBlackholeChatListenersSupportingService:(id)arg1;	// IMP=0x00000000002619a0
@property(nonatomic, readonly) id <IMDaemonListenerChatProtocol> broadcasterForBlackholeChatListeners;
- (id)broadcasterForSentMessageListenersSupportingService:(id)arg1;	// IMP=0x0000000000261510
- (id)broadcasterForChatListenersSupportingService:(id)arg1;	// IMP=0x00000000002612b0
@property(nonatomic, readonly) id <IMDaemonListenerChatProtocol> broadcasterForChatListeners;
@property(nonatomic, readonly) id <IMDaemonListenerKeyTransparencyProtocol> broadcasterForKeyTransparencyListeners;
- (id)broadcasterForListenersSupportingService:(id)arg1;	// IMP=0x0000000000260da0
@property(nonatomic, readonly) id <IMDaemonListenerFileTransfersProtocol> broadcasterForFileTransferListeners;
@property(nonatomic, readonly) id <IMDaemonListenerCloudSyncProtocol> broadcasterForCloudSyncListeners;
@property(nonatomic, readonly) id <IMDaemonListenerAccountsProtocol> broadcasterForAccountListeners;
@property(nonatomic, readonly) id <IMDaemonListenerAnyProtocol> broadcasterForAllListeners;

@end

