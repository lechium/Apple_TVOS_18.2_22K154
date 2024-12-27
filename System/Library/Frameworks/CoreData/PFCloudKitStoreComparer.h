//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFCloudKitArchivingUtilities, PFCloudKitStoreComparisonCache;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreComparer : NSObject
{
    _Bool _onlyCompareSharedZones;	// 8 = 0x8
    PFCloudKitStoreComparisonCache *_cache;	// 16 = 0x10
    PFCloudKitArchivingUtilities *_archivingUtilities;	// 24 = 0x18
}

+ (id)trimExcessiveValuesForLog:(id)arg1;	// IMP=0x00000000002a7bdb
@property(nonatomic) _Bool onlyCompareSharedZones; // @synthesize onlyCompareSharedZones=_onlyCompareSharedZones;
@property(readonly, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities; // @synthesize archivingUtilities=_archivingUtilities;
@property(readonly, nonatomic) PFCloudKitStoreComparisonCache *cache; // @synthesize cache=_cache;
- (_Bool)ensureContentsOfRecordStorageMatchForStorage:(id)arg1 andOtherStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a7819
- (_Bool)ensureRecordMetadataMatchesForRecordID:(id)arg1 inStore:(id)arg2 andOtherStore:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002a73bf
- (_Bool)ensureMirroredRelationshipsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a69f3
- (_Bool)ensureMoveReceiptsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a57b0
- (_Bool)compareCloudKitMetadataOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a564d
- (_Bool)ensureStoresAgreeOnCloudKitTables:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a4e9d
- (id)getRecordIDsForRelationship:(id)arg1 onObject:(id)arg2;	// IMP=0x00000000002a491e
- (_Bool)compareRelationshipsOfRecordID:(id)arg1 withStoreObject:(id)arg2 andOtherObject:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002a3d7f
- (_Bool)validateValue:(id)arg1 againstOtherValue:(id)arg2 forIgnoredAttribute:(id)arg3;	// IMP=0x00000000002a3d5e
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2 forAttribute:(id)arg3;	// IMP=0x00000000002a3689
- (_Bool)compareAttributesOnObject:(id)arg1 toObject:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a2dd2
- (_Bool)compareObjectsInStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a20c0
- (_Bool)compareDatabaseScopeAndIdentityInStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a1c80
- (_Bool)compareContentOfStore:(id)arg1 toStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a1552
- (id)getObjectMatchingRecordID:(id)arg1 fromStore:(id)arg2 withManagedObjectContext:(id)arg3;	// IMP=0x00000000002a1190
- (_Bool)ensureContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a0d67
- (_Bool)ensureContentsMatch:(id *)arg1;	// IMP=0x00000000002a0d10
- (void)dealloc;	// IMP=0x00000000002a0cc6
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;	// IMP=0x00000000002a0c42

@end

