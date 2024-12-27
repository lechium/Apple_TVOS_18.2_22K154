//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKOperationMetrics, CKRecord, CKRecordID, CKServerChangeToken, NSData, NSError;

@protocol CKFetchRecordChangesOperationCallbacks <CKOperationCallbacks>
- (void)handleOperationDidCompleteWithServerChangeToken:(CKServerChangeToken *)arg1 clientChangeTokenData:(NSData *)arg2 recordChangesStatus:(long long)arg3 metrics:(CKOperationMetrics *)arg4 error:(NSError *)arg5;
- (void)handleChangeSetCompletionWithServerChangeToken:(CKServerChangeToken *)arg1 clientChangeTokenData:(NSData *)arg2 recordChangesStatus:(long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)handleDeleteForRecordID:(CKRecordID *)arg1;
- (void)handleChangeForRecordID:(CKRecordID *)arg1 record:(CKRecord *)arg2 error:(NSError *)arg3;
@end

