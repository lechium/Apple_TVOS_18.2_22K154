//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKRecordZoneID, CKServerChangeToken, NSError;

@protocol CKFetchDatabaseChangesOperationCallbacks <CKOperationCallbacks>
- (void)handleChangeSetCompletionWithServerChangeToken:(CKServerChangeToken *)arg1 databaseChangesStatus:(long long)arg2 error:(NSError *)arg3 reply:(void (^)(NSError *))arg4;
- (void)handleEncryptedDataResetForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handlePurgeForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handleDeleteForRecordZoneID:(CKRecordZoneID *)arg1;
- (void)handleChangeForRecordZoneID:(CKRecordZoneID *)arg1;
@end

