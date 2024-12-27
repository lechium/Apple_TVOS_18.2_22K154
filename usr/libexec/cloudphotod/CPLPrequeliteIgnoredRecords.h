//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteSynthesizedVariable, NSString;

@interface CPLPrequeliteIgnoredRecords
{
    CPLPrequeliteSynthesizedVariable *_isEmptyVar;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001bca77
- (void)writeTransactionDidFail;	// IMP=0x00100000001bca2e
- (id)status;	// IMP=0x00100000001bc838
- (id)recordsDesignation;	// IMP=0x00100000001bc82b
- (_Bool)popCloudScopedIdentifiersToCheck:(id *)arg1 otherScopeIndex:(long long)arg2 maxCount:(long long)arg3 deletedCount:(long long *)arg4 error:(id *)arg5;	// IMP=0x00100000001bc1f6
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00100000001bc0d2
- (_Bool)scopeIdentifier:(id)arg1 hasIgnoredRecordsBeforeDate:(id)arg2;	// IMP=0x00100000001bbfb7
- (_Bool)setIgnoredDate:(id)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001bbde5
- (id)ignoredRecordsBeforeDate:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00100000001bb8dc
- (_Bool)removeRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bb70b
- (_Bool)addIgnoredRecord:(id)arg1 ignoredDate:(id)arg2 otherScopeIndex:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000001bb46b
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001bb32e
- (id)ignoredRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00100000001bb05c
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000001ba69d
- (_Bool)initializeStorage;	// IMP=0x00100000001ba4b3
- (_Bool)_isEmpty;	// IMP=0x00100000001ba388
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000001ba2d8

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

