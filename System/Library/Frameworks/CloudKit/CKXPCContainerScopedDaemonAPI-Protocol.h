//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSObject-Protocol.h>

@class CKAcceptSharesOperationInfo, CKCheckSupportedDeviceCapabilitiesOperationInfo, CKCodeFunctionInvokeOperationInfo, CKDeclineSharesOperationInfo, CKDiscoverUserIdentitiesOperationInfo, CKEventMetricInfo, CKFetchDatabaseChangesOperationInfo, CKFetchRecordZoneChangesOperationInfo, CKFetchRecordZonesOperationInfo, CKFetchRecordsOperationInfo, CKFetchShareMetadataOperationInfo, CKFetchShareParticipantsOperationInfo, CKFetchSubscriptionsOperationInfo, CKFetchWebAuthTokenOperationInfo, CKMapShareURLsToInstalledBundleIDsOperationInfo, CKModifyRecordZonesOperationInfo, CKModifyRecordsOperationInfo, CKModifySubscriptionsOperationInfo, CKMovePhotosOperationInfo, CKQueryOperationInfo, CKShareAccessRequestOperationInfo, NSArray, NSFileHandle, NSString;

@protocol CKXPCContainerScopedDaemonAPI <NSObject>
- (void)suggestedMergeableDeltaSizeWithCompletionHandler:(void (^)(long long))arg1;
- (void)displayInfoOnAccountWithCompletionHandler:(void (^)(NSPersonNameComponents *, NSString *, NSString *, NSError *))arg1;
- (void)networkTransferEndpointWithCompletionHandler:(void (^)(NSObject<OS_xpc_object> *, NSError *))arg1;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchLongLivedOperationsWithIDs:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)performCheckSupportedDeviceCapabilitiesOperation:(CKCheckSupportedDeviceCapabilitiesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performMovePhotosOperation:(CKMovePhotosOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchWebAuthTokenOperation:(CKFetchWebAuthTokenOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performMapShareURLsToInstalledBundleIDsOperation:(CKMapShareURLsToInstalledBundleIDsOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchShareMetadataOperation:(CKFetchShareMetadataOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performShareAccessRequestOperation:(CKShareAccessRequestOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performDeclineSharesOperation:(CKDeclineSharesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performAcceptSharesOperation:(CKAcceptSharesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchDatabaseChangesOperation:(CKFetchDatabaseChangesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchRecordZonesOperation:(CKFetchRecordZonesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performModifyRecordZonesOperation:(CKModifyRecordZonesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchSubscriptionsOperation:(CKFetchSubscriptionsOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performModifySubscriptionsOperation:(CKModifySubscriptionsOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performQueryOperation:(CKQueryOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchRecordZoneChangesOperation:(CKFetchRecordZoneChangesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchRecordChangesOperation:(CKFetchRecordZoneChangesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performModifyRecordsOperation:(CKModifyRecordsOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchRecordsOperation:(CKFetchRecordsOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performFetchShareParticipantsOperation:(CKFetchShareParticipantsOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performDiscoverUserIdentitiesOperation:(CKDiscoverUserIdentitiesOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)importantUserIDsWithCompletionHandler:(void (^)(NSString *, NSString *, NSError *))arg1;
- (void)submitClientEventMetric:(CKEventMetricInfo *)arg1 completeWhenQueued:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)dumpDaemonStatusReportToFileHandle:(NSFileHandle *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)performCodeFunctionInvokeOperation:(CKCodeFunctionInvokeOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)performCodeOperation:(CKCodeFunctionInvokeOperationInfo *)arg1 withBlock:(void (^)(NSError *))arg2;
- (void)cancelOperationWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)reloadAccountWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)accountInfoWithCompletionHandler:(void (^)(CKAccountInfo *, NSError *))arg1;
- (void)accountAccessAuthorizationWithCompletionHandler:(void (^)(long long, NSError *))arg1;
@end

