//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLiteCacheTable.h>

@interface CKDRecordCacheTable : CKSQLiteCacheTable
{
}

+ (Class)entryClass;	// IMP=0x0010000000035b3e
+ (id)dbProperties;	// IMP=0x0010000000035b31
- (void)clearAssetAuthTokensForRecord:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x000000000003a3b1
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x000000000003a1b3
- (void)clearAllRecordsForZoneWithID:(id)arg1;	// IMP=0x000000000003a05f
- (void)clearAllRecordsInScope:(long long)arg1;	// IMP=0x0000000000039e99
- (void)clearAllRecords;	// IMP=0x0000000000039e24
- (void)deleteRecordWithID:(id)arg1 scope:(long long)arg2;	// IMP=0x0000000000039b0b
- (id)etagForRecordID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000039294
- (void)addRecord:(id)arg1 container:(id)arg2 knownUserKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000038566
- (unsigned long long)numberOfRecordsWithID:(id)arg1 container:(id)arg2;	// IMP=0x00000000000382fd
- (id)recordsWithIDs:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x0000000000037367
- (id)recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x00000000000371de
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;	// IMP=0x0000000000036e44
- (id)_recordWithID:(id)arg1 container:(id)arg2 requiredKeys:(id)arg3 scope:(long long)arg4;	// IMP=0x000000000003642e
- (id)fetchCacheEntryRecordData:(id)arg1;	// IMP=0x00000000000363a3
- (_Bool)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;	// IMP=0x0000000000035e5b
- (_Bool)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;	// IMP=0x0000000000035c88
- (id)_dsidForAccount:(id)arg1;	// IMP=0x0000000000035c1b
- (id)init;	// IMP=0x0000000000035b4f

@end

