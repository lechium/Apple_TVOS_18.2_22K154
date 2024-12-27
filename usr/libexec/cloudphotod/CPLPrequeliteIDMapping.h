//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, NSString;

@interface CPLPrequeliteIDMapping
{
    NSMutableDictionary *_localToCloudScopedIdentifiersCache;	// 8 = 0x8
    NSMutableDictionary *_cloudToLocalScopedIdentifiersCache;	// 16 = 0x10
    NSMutableSet *_nonFinalLocalScopedIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001a4c7e
- (void)transactionDidFinish;	// IMP=0x00100000001a4c3d
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000001a4b28
- (id)scopeIndexColumnName;	// IMP=0x00100000001a4b1b
- (id)status;	// IMP=0x00100000001a49c2
- (_Bool)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001a4830
- (_Bool)removeMappingForLocalScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001a45c8
- (_Bool)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001a42c9
- (_Bool)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001a40d5
- (_Bool)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001a3e6e
- (_Bool)hasPendingIdentifiers;	// IMP=0x00100000001a3d9a
- (_Bool)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id *)arg2;	// IMP=0x00100000001a3bfd
- (_Bool)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001a3951
- (_Bool)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3 direction:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00100000001a32aa
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x00100000001a2f9a
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(_Bool *)arg2;	// IMP=0x00100000001a2c8f
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001a2a44
- (_Bool)initializeStorage;	// IMP=0x00100000001a2964
- (void)_cacheLocalScopedIdentifier:(id)arg1 cloudScopedIdentifier:(id)arg2 isFinal:(_Bool)arg3;	// IMP=0x00100000001a28a6
- (void)_clearScopedIdentifiersCache;	// IMP=0x00100000001a284c
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000001a27ab

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

