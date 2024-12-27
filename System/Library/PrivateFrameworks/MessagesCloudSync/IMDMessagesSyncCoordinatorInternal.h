//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDMessagesSyncCoordinatorInternal : NSObject
{
}

+ (long long)currentTelemetrySyncVersion;	// IMP=0x0080000000054c90
+ (void)fetchSyncStoreCountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000054bd0
+ (id)readServerCountsFromDefaults;	// IMP=0x0080000000054860
+ (id)initiateSyncFor:(id)arg1 delegate:(id)arg2 forceRunNow:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0080000000054280
+ (_Bool)startUserInitiatedSyncWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000053c50
+ (_Bool)scheduleTelemetrySyncWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000539b0
+ (_Bool)scheduleAttachmentAssetDownloadSyncWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000053940
+ (_Bool)scheduleBackupSyncWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000053870
+ (_Bool)schedulePeriodicSyncWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000536a0
+ (_Bool)scheduleBackfillSyncWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000052dd0
+ (_Bool)startInitialSyncWithDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000052800
+ (void)registerWithNotifier:(id)arg1;	// IMP=0x00800000000522a0
+ (void)registerWithPreReqsVerifier:(id)arg1;	// IMP=0x0080000000052180
+ (void)registerWithBackupController:(id)arg1;	// IMP=0x0080000000052110
+ (void)registerWithSyncStateManager:(id)arg1;	// IMP=0x00800000000520d0
+ (void)registerWithSyncTokenStore:(id)arg1;	// IMP=0x0080000000052090
+ (void)registerWithErrorAnalyzer:(id)arg1;	// IMP=0x0080000000052050
+ (void)registerWithStore:(id)arg1 asType:(long long)arg2;	// IMP=0x0080000000051fc0
+ (_Bool)configureWith:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000051f50
+ (void)clearLocalCountsWhenSafe;	// IMP=0x0080000000051f20
+ (void)clearSyncStoreWhenSafeWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x0080000000051a50
+ (_Bool)isSyncing;	// IMP=0x0080000000051510
- (void).cxx_destruct;	// IMP=0x0000000000054d50
- (id)init;	// IMP=0x0000000000054cf0

@end

