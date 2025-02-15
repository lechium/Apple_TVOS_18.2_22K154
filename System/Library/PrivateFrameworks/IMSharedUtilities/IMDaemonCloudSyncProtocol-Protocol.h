//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IMDaemonCloudSyncProtocol <NSObject>
- (void)simulateCloudKitSyncWithSyncState:(NSDictionary *)arg1;
- (void)tryToAutoCollectLogsWithErrorString:(NSString *)arg1 sendLogsTo:(NSString *)arg2;
- (void)fetchCloudKitSyncStateDebuggingInfo:(NSDictionary *)arg1;
- (void)syncDeletesToCloudKit;
- (void)printCachedRampState;
- (void)fetchLatestRampState;
- (void)removePathFromiCloudBackups:(NSString *)arg1;
- (void)setiCloudBackupsDisabled:(_Bool)arg1;
- (void)toggleiCloudBackupsIfNeeded;
- (void)reportMetricToCK:(NSString *)arg1 withDict:(NSDictionary *)arg2;
- (void)writeCloudKitSyncCounts:(NSDictionary *)arg1;
- (void)fetchSyncStateStatistics;
- (void)updateAttachmentFileSizes;
- (void)metricAttachments:(long long)arg1;
- (void)purgeAttachments:(long long)arg1;
- (void)deleteSalt;
- (void)printCachedSalt;
- (void)fetchLatestSalt;
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)clearAnalyticDefaultsAndLocalSyncState;
- (void)uploadDailyAnalyticstoCloudKit;
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;
- (void)broadcastCloudKitState;
- (void)tryToDisableAllDevices;
- (void)performAdditionalStorageRequiredCheck;
- (void)currentStorageOnDeviceWithReply:(void (^)(unsigned long long))arg1;
- (void)setCloudKitEnabled:(_Bool)arg1;
- (void)sendRestoreFailuresLogDumps;
- (void)clearDataFromCloudKit;
- (void)clearLocalCloudKitSyncState;
- (void)deleteExitRecord;
- (void)fetchExitRecord;
- (void)writeExitRecord;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (void)cancelSync:(void (^)(_Bool, unsigned long long))arg1;
- (void)initiateSync:(NSString *)arg1 forceRunNow:(_Bool)arg2 reply:(void (^)(_Bool, NSDictionary *))arg3;
- (void)startUserInitiatedSync;
- (void)initiatePeriodicSync;
- (void)syncMessages;
- (void)deleteMessagesZone;
- (void)writeDirtyMessages;
- (void)downloadAttachmentAssets;
- (void)syncAttachments;
- (void)writeAttachments;
- (void)deleteAttachmentZone;
- (void)createAttachmentZone;
- (void)clearChatZoneSyncToken;
- (void)markAllChatsAsDirty;
- (void)syncChats;
- (void)writeDirtyChats;
- (void)deleteChatZone;
- (void)createChatZone;
@end

