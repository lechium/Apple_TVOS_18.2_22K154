//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLPrequeliteTable, NSString;

@interface CPLPrequeliteStorage : CPLPlatformObject
{
    CPLPrequeliteTable *_nameTable;	// 8 = 0x8
    CPLPrequeliteTable *_mainTable;	// 16 = 0x10
    CPLPrequeliteTable *_tempTable;	// 24 = 0x18
    _Bool _initializingStorage;	// 32 = 0x20
    _Bool _initializeSuperWasCalled;	// 33 = 0x21
    _Bool _superWasCalled;	// 34 = 0x22
    _Bool _shouldUpgradeSchema;	// 35 = 0x23
}

- (void).cxx_destruct;	// IMP=0x0020000000184523
@property(readonly, nonatomic) _Bool shouldUpgradeSchema; // @synthesize shouldUpgradeSchema=_shouldUpgradeSchema;
- (_Bool)recreateMainTableWithCopyInstructions:(id)arg1 oldFields:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000183bb9
- (_Bool)isCloudScopeIndexValid:(long long)arg1;	// IMP=0x0010000000183b47
- (_Bool)isLocalScopeIndexValid:(long long)arg1;	// IMP=0x0010000000183ad5
- (id)scopeIdentifierForCloudScopeIndex:(long long)arg1;	// IMP=0x0010000000183a76
- (id)scopedIdentifierForCloudIdentifier:(id)arg1 scopeIndex:(long long)arg2;	// IMP=0x00100000001839ae
- (id)scopedIdentifierForLocalIdentifier:(id)arg1 scopeIndex:(long long)arg2;	// IMP=0x00100000001838e6
- (id)filterForExcludedScopeIdentifiers:(id)arg1;	// IMP=0x001000000018386c
- (id)filterForIncludedScopeIdentifiers:(id)arg1;	// IMP=0x00100000001837f2
- (long long)stableScopeIndexForScopeIdentifier:(id)arg1;	// IMP=0x0010000000183784
- (long long)cloudScopeIndexForScopeIdentifier:(id)arg1;	// IMP=0x0010000000183716
- (long long)localScopeIndexForScopeIdentifier:(id)arg1;	// IMP=0x00100000001836a8
- (long long)scopeIndexForCloudScopedIdentifier:(id)arg1;	// IMP=0x0010000000183605
- (long long)scopeIndexForLocalScopedIdentifier:(id)arg1;	// IMP=0x0010000000183562
- (id)_scopes;	// IMP=0x00100000001834e8
- (_Bool)_checkSuperWasCalled;	// IMP=0x00100000001834d4
- (id)statusPerScopeIndexWithGroupProperty:(id)arg1 valueDescription:(CDUnknownBlockType)arg2;	// IMP=0x001000000018322e
- (id)statusPerScopeIndex;	// IMP=0x001000000018321c
- (id)_statusPerScopeIndex;	// IMP=0x0010000000182ff1
- (id)additionalStatusForScopeWithIndex:(long long)arg1 baseRecordCount:(long long)arg2;	// IMP=0x0010000000182fe9
- (id)scopeIndexColumnName;	// IMP=0x0010000000182fdc
- (id)statusDictionary;	// IMP=0x0010000000182e16
- (id)status;	// IMP=0x0010000000182c8d
- (id)recordsDesignation;	// IMP=0x0010000000182c80
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)transactionDidFinish;	// IMP=0x0010000000182a7d
- (void)writeTransactionDidSucceed;	// IMP=0x0010000000182a6c
- (void)writeTransactionDidFail;	// IMP=0x0010000000182a5b
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0010000000182a48
- (_Bool)openWithError:(id *)arg1;	// IMP=0x0010000000182a35
- (_Bool)resetValueForVariable:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000182970
- (id)valueForVariable:(id)arg1;	// IMP=0x001000000018289a
- (_Bool)setValue:(id)arg1 forVariable:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001827b7
- (_Bool)createVariable:(id)arg1 defaultValue:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001823d1
- (id)variableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;	// IMP=0x0010000000182307
- (id)variableWithName:(id)arg1 type:(id)arg2;	// IMP=0x00100000001822f0
- (_Bool)dropIndexWithName:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018211a
- (_Bool)createIndexOnColumn:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000182069
- (_Bool)createIndexWithName:(id)arg1 withDefinition:(id)arg2 condition:(id)arg3 unique:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000181f21
- (_Bool)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000181e43
- (_Bool)createIndexOnColumnVariable:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000181dbe
- (_Bool)createIndex:(id)arg1 withDefinition:(id)arg2 condition:(id)arg3 unique:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000181a5d
- (_Bool)addColumnVariableGroup:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001818ff
- (_Bool)addColumnVariable:(id)arg1 error:(id *)arg2;	// IMP=0x001000000018164a
- (id)columnVariableWithName:(id)arg1 defaultValue:(id)arg2 type:(id)arg3;	// IMP=0x0010000000181631
- (id)columnVariableWithName:(id)arg1 type:(id)arg2;	// IMP=0x0010000000181618
- (_Bool)createMainTableWithDefinition:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000181422
- (_Bool)createMainTableWithColumnVariables:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000181249
- (id)mainTable;	// IMP=0x0010000000181234
- (_Bool)fixStorageAfterAnyVersionChange;	// IMP=0x001000000018122c
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x001000000018118a
- (_Bool)initializeStorage;	// IMP=0x001000000018103f
- (_Bool)createStorage;	// IMP=0x0010000000180f34
- (void)_afterInitializeStorage;	// IMP=0x0010000000180edb
- (void)_beforeInitializeStorage;	// IMP=0x0010000000180eca
- (id)engineLibrary;	// IMP=0x0010000000180e50
- (id)pqStore;	// IMP=0x0010000000180dd6
@property(readonly, nonatomic) NSString *mainScopeIdentifier;
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000180ca0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

