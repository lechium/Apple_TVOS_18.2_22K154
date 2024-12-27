//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class CKRecord, CKRecordID, CKRecordZoneID, DNDSSyncEngine, NSArray, NSError, NSString;

@protocol DNDSSyncEngineDataSource <NSObject>
- (void)purgeRecordsForSyncEngine:(DNDSSyncEngine *)arg1;
- (NSArray *)recordIDsForSyncEngine:(DNDSSyncEngine *)arg1;
- (void)syncEngine:(DNDSSyncEngine *)arg1 zoneWithIDWasDeleted:(CKRecordZoneID *)arg2 removingRecordIDs:(NSArray *)arg3;
- (long long)syncEngine:(DNDSSyncEngine *)arg1 wantsRecord:(CKRecord *)arg2;
- (void)syncEngine:(DNDSSyncEngine *)arg1 recordWithIDWasDeleted:(CKRecordID *)arg2;
- (void)syncEngine:(DNDSSyncEngine *)arg1 didFetchRecord:(CKRecord *)arg2;
- (void)syncEngine:(DNDSSyncEngine *)arg1 failedToDeleteRecordWithID:(CKRecordID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(DNDSSyncEngine *)arg1 resolveConflictBetweenClientRecord:(CKRecord *)arg2 andServerRecord:(CKRecord *)arg3;
- (long long)syncEngine:(DNDSSyncEngine *)arg1 prepareRecordToSave:(inout CKRecord *)arg2;
- (NSString *)syncEngine:(DNDSSyncEngine *)arg1 recordTypeForRecordID:(CKRecordID *)arg2;
@end

