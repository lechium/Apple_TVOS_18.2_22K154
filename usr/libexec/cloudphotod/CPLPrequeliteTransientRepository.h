//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CPLPrequeliteTransientRepository
{
    NSSet *_ignoredIdentifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001ac565
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000001ac459
- (id)status;	// IMP=0x00100000001ac38b
- (unsigned long long)countOfStashedRecords;	// IMP=0x00100000001ac2db
@property(readonly, nonatomic) unsigned long long countOfUnmingledRecords;
- (_Bool)deleteAllRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ac009
- (_Bool)hasStashedChangesForScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001abf2c
- (_Bool)unstashRecordsForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2 hasMore:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00100000001abd3f
- (_Bool)stashChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001abaa0
- (_Bool)hasUnmingledOrStashedRecordsWithScopeFilter:(id)arg1;	// IMP=0x00100000001ab9a4
- (_Bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ab77a
- (_Bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ab63d
- (_Bool)hasOnlyMingledRecordsWithScopeIdentifier:(id)arg1;	// IMP=0x00100000001ab55b
- (_Bool)hasUnmingledNonStashedRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001ab481
- (_Bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x00100000001ab3a4
- (_Bool)markUnmingledChangeWithScopedIdentifierAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ab1b0
- (id)allUnmingledChangesWithScopeIdentifier:(id)arg1;	// IMP=0x00100000001ab152
- (id)allUnmingledChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x00100000001aae8a
- (id)allUnmingledDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x00100000001aae1f
- (id)allUnmingledNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x00100000001aadb4
- (id)allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x00100000001aad9b
- (id)_allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00100000001aab3a
- (id)unmingledChangeWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001aa8be
- (_Bool)popChangeBatchOfRemappedRecords:(id *)arg1 scope:(id)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000001aa537
- (id)nextBatchOfRemappedRecordsInScope:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x00100000001aa2a0
- (id)_recordWithTransientType:(int)arg1 scopedIdentifier:(id)arg2;	// IMP=0x00100000001aa10b
- (_Bool)hasStashedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001a9fbd
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001a9e75
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001a9cf6
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 class:(Class)arg3 maximumCount:(unsigned long long)arg4;	// IMP=0x00100000001a9ab2
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00100000001a989d
- (id)_enumeratorForRecordsWithScopeIndex:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x00100000001a96a8
- (_Bool)_markChangesWithScopedIdentifiersAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001a92d2
- (_Bool)appendBatch:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001a9158
- (_Bool)_appendChange:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000001a88de
- (_Bool)hasUnmingledChangesForScope:(id)arg1;	// IMP=0x00100000001a87fa
@property(readonly, nonatomic) _Bool hasUnmingledChanges;
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001a84f5
- (_Bool)initializeStorage;	// IMP=0x00100000001a83bb
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000001a8280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

