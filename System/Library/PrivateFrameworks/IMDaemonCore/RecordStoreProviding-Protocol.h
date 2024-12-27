//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, CKRecordID, NSDictionary, NSError, NSString;

@protocol RecordStoreProviding
- (void)legacyImport:(CKRecord *)arg1;
- (void)recordUpdateFailedWithID:(CKRecordID *)arg1 localGUID:(NSString *)arg2 error:(NSError *)arg3;
- (void)recordUpdateSucceededWithRecord:(CKRecord *)arg1;
- (NSDictionary *)batchOfRecordsToWriteWithFilter:(unsigned long long)arg1 limit:(long long)arg2 error:(id *)arg3;
- (void)resetFetchState;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)resetLocalSyncStateIfAppropriate;
@end

