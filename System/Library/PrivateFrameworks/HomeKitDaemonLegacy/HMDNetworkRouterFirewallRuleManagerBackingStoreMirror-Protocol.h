//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class CKRecordID, CKRecordZoneID, HMBProcessingOptions, NAFuture, NSDictionary, NSNumber, NSObject, NSSet, NSString;
@protocol OS_xpc_object;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreMirror <NSObject>
@property(readonly, nonatomic) NAFuture *shutdownFuture;
@property(readonly, nonatomic) NAFuture *startupFuture;
- (_Bool)removeOverridesForZoneName:(NSString *)arg1 recordName:(NSString *)arg2 options:(HMBProcessingOptions *)arg3 error:(id *)arg4;
- (_Bool)removeAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (_Bool)removeOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (_Bool)addOverrides:(NSDictionary *)arg1 replace:(_Bool)arg2 options:(HMBProcessingOptions *)arg3 error:(id *)arg4;
- (NSDictionary *)fetchOverridesForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (NSDictionary *)fetchAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (NSDictionary *)fetchOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (_Bool)removeAllLocalRulesWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (NSDictionary *)fetchAllDataForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (NSDictionary *)fetchAllDataWithOptions:(HMBProcessingOptions *)arg1 error:(id *)arg2;
- (NSDictionary *)fetchAllDataForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id *)arg3;
- (void)fetchCloudRecordsForZoneID:(CKRecordZoneID *)arg1 recordID:(CKRecordID *)arg2 options:(HMBProcessingOptions *)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
- (void)fetchCloudRecordIDsForZoneID:(CKRecordZoneID *)arg1 options:(HMBProcessingOptions *)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)fetchCloudChangesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 ignoreLastSynchronizedRecords:(_Bool)arg3 xpcActivity:(NSObject<OS_xpc_object> *)arg4 completion:(void (^)(_Bool, NSSet *, NSError *))arg5;
- (NSNumber *)cloudFetchNeededForRecordIDs:(NSSet *)arg1 error:(id *)arg2;
@end

