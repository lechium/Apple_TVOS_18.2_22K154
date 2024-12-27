//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/IMDaemonListenerAVProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerAccountsProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerAnyProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerChatCountsProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerChatDatabaseProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerChatMessageHistoryProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerChatProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerCloudSyncProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerCollaborationProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerFileProviderProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerFileTransfersProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerKeyTransparencyProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerNotificationsProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerServiceProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerSetupProtocol-Protocol.h>
#import <IMCore/IMDaemonListenerSyncedSettingsProtocol-Protocol.h>
#import <IMCore/NSObject-Protocol.h>

@protocol IMDaemonListenerProtocol <NSObject, IMDaemonListenerAccountsProtocol, IMDaemonListenerAnyProtocol, IMDaemonListenerAVProtocol, IMDaemonListenerChatCountsProtocol, IMDaemonListenerChatDatabaseProtocol, IMDaemonListenerChatMessageHistoryProtocol, IMDaemonListenerChatProtocol, IMDaemonListenerCloudSyncProtocol, IMDaemonListenerFileProviderProtocol, IMDaemonListenerFileTransfersProtocol, IMDaemonListenerNotificationsProtocol, IMDaemonListenerServiceProtocol, IMDaemonListenerSyncedSettingsProtocol, IMDaemonListenerSetupProtocol, IMDaemonListenerCollaborationProtocol, IMDaemonListenerKeyTransparencyProtocol>
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)pendingACRequestComplete;
- (void)pendingVCRequestComplete;
@end

