//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteRemappedRecords
{
}

- (id)remappedRecordEnumeratorInScope:(id)arg1;	// IMP=0x00200000001c85b6
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000001c84aa
- (_Bool)isRecordWithScopedIdentifierRemapped:(id)arg1;	// IMP=0x00100000001c8381
- (id)scopedIdentifiersRemappedToScopedIdentifier:(id)arg1;	// IMP=0x00100000001c8126
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;	// IMP=0x00100000001c7fb6
- (_Bool)removeRemappedRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c7d78
- (_Bool)addRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001c7b94
- (_Bool)fixStorageAfterAnyVersionChange;	// IMP=0x00100000001c79eb
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001c78a9
- (_Bool)initializeStorage;	// IMP=0x00100000001c77f0

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

