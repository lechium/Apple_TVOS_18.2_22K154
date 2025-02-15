//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentStore;

__attribute__((visibility("hidden")))
@interface PFCloudKitStoreComparisonCache : NSObject
{
    NSMutableDictionary *_storeUUIDToStoreCache;	// 8 = 0x8
    _Bool _checkCloudKitMetadata;	// 16 = 0x10
    NSPersistentStore *_store;	// 24 = 0x18
    NSPersistentStore *_otherStore;	// 32 = 0x20
    NSManagedObjectContext *_storeMoc;	// 40 = 0x28
    NSManagedObjectContext *_otherStoreMoc;	// 48 = 0x30
}

@property(readonly, nonatomic) _Bool checkCloudKitMetadata; // @synthesize checkCloudKitMetadata=_checkCloudKitMetadata;
@property(readonly, nonatomic) NSManagedObjectContext *otherStoreMoc; // @synthesize otherStoreMoc=_otherStoreMoc;
@property(readonly, nonatomic) NSManagedObjectContext *storeMoc; // @synthesize storeMoc=_storeMoc;
@property(readonly, nonatomic) NSPersistentStore *otherStore; // @synthesize otherStore=_otherStore;
@property(readonly, nonatomic) NSPersistentStore *store; // @synthesize store=_store;
- (void)_setCheckCloudKitMetadata:(_Bool)arg1;	// IMP=0x000000000010de7d
- (id)deriveIdentifierForNonCloudObjectID:(id)arg1;	// IMP=0x000000000010ddfb
- (id)metadataForRecordID:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000010dd9f
- (id)identifiersForStore:(id)arg1;	// IMP=0x000000000010dd4f
- (id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000010dcf5
- (id)mtmKeysForRecordZone:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000010dc8b
- (id)sharedZoneIDsForStore:(id)arg1;	// IMP=0x000000000010dc4a
- (long long)databaseScopeForStoreWithIdentifier:(id)arg1;	// IMP=0x000000000010dc17
- (id)identityRecordNameForStoreWithIdentifier:(id)arg1;	// IMP=0x000000000010dbf0
- (id)recordIDForObjectID:(id)arg1;	// IMP=0x000000000010db89
- (id)objectIDForRecordID:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000010db2f
- (id)recordIdsForStore:(id)arg1;	// IMP=0x000000000010dadf
- (id)metadataForObjectWithID:(id)arg1;	// IMP=0x000000000010da78
- (id)recordIDsRelatedToRecordID:(id)arg1 byRelationshipNamed:(id)arg2 inStore:(id)arg3;	// IMP=0x000000000010d9f9
- (id)mtmKeysForStore:(id)arg1;	// IMP=0x000000000010d9a9
- (id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 byRelationship:(id)arg3;	// IMP=0x000000000010d89f
- (_Bool)populate:(id *)arg1;	// IMP=0x000000000010bbfc
- (void)dealloc;	// IMP=0x000000000010bb95
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;	// IMP=0x000000000010b9d3

@end

